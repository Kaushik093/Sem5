import numpy as np
# inputs =[1,2,3,2.5]
# weights =[0.2,0.8,-0.5,1.0]
# bias=2

# # using dot product function

# v= np.dot(weights,inputs) + bias

# if v>=0:
#     output=1
# else:
#     output=0
# print("Using hard limit activation function")
# print('output=',output)

# output_logistic =1/(1+np.exp(-v))

# output_tanh=(np.exp(v) - np.exp(-v))/(np.exp(v) + np.exp(-v))
# print("Using hyperbolic tangent function")
# print("output =",output_tanh)

inputs =[[1,2,3,2.5],
         [2,5,-1,2],
         [1.5,2.7,3.3,-0.8]]

weights =[[0.2,0.8,-0.5,1.0],
          [0.5,-0.91,0.26,-0.5],
          [-0.25,-0.27,0.17,0.87]  ]

biases=[2,3,0.5]

output_layer1= np.dot(inputs,np.array(weights).T) + biases
print(output_layer1)



