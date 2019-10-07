template<class T>
inline int jiaohuan(T&x,T&y){
  T t=y;
  y=x;
  x=t;
}

inline bool jishu(int x){
  return x%2;
}

inline bool oushu(int x){
  return !(x%2);
}
