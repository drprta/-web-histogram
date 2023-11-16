import plotly.express as px
import pandas as pd
#data histogram 
#prtandh
data = pd.DataFrame({
    'turbidity': [10, 15, 8, 12, 18, 14, 20, 22], 
    'potability': [1, 0, 1, 0, 1, 0, 1, 0]
})

fig = px.histogram(data, x='turbidity', color='potability',
                   title='Factors Affecting Water Quality: Turbidity',
                   labels={'turbidity': 'Turbidity', 'potability': 'Potability'})

fig.show()
