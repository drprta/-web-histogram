import matplotlib.pyplot as plt
import requests
import json

# Fungsi untuk membuat histogram
def create_histogram(data, bins, title, xlabel, ylabel):
    plt.hist(data, bins=bins, edgecolor='black')
    plt.title(title)
    plt.xlabel(xlabel)
    plt.ylabel(ylabel)
    plt.grid(True)
    plt.show()

# Fungsi untuk mengirim data ke website
def send_data_to_website(data):
    url = 'https://example.com/api/submit_histogram'
    headers = {'Content-Type': 'application/json'}
    payload = {'data': data}

    response = requests.post(url, data=json.dumps(payload), headers=headers)

    if response.status_code == 200:
        print("Data berhasil dikirim ke website.")
    else:
        print("Gagal mengirim data ke website. Kode status:", response.status_code)

# Contoh data untuk histogram
data_for_histogram = [1, 2, 2, 3, 3, 3, 4, 4, 5, 5, 5, 5]

# Parameter histogram
bins = range(min(data_for_histogram), max(data_for_histogram) + 2)
title = 'Hasil Histogram'
xlabel = '12'
ylabel = '5'

# Membuat histogram
create_histogram(data_for_histogram, bins, title, xlabel, ylabel)

# Mengirim data histogram ke website
send_data_to_website(data_for_histogram)
