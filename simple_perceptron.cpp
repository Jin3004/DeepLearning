#include <iostream>

float step(float val){
  return (val > 0) ? 1 : 0;
}

float calc(float* vec_x, float* vec_w, size_t len){
  float sum = 0;
  for(size_t i = 0; i < len; ++i){
    sum += vec_x[i] * vec_w[i];
  }
  return step(sum);
}

float train(float* vec_x, float* vec_w, float ans, float e, size_t len){

  float z = calc(vec_x, vec_w, len);

  for(size_t i = 0; i < len; ++i){
    vec_w[i] = e * (ans - z) * vec_x[i];
  } 
}