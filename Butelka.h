#include <iostream>
#include <cstring>
template <typename T>
class Butelka{
public:
	Butelka(T a):moje(a){std::cout<<"Wino: "<<moje<<"\n";}
	T operator>(Butelka& temp) const{
		if(temp.moje.size()>this->moje.size()){
			return temp.moje;
		}
		else{
			return this->moje;
		}
	}
	void dupa(int cos){
		std::cout<<"dupa";
	}
	// friend std::ostream& operator <<(std::ostream& a, T& temp){
	// 	return a;
	// }
private:
	T moje;
};

template <>
const char* Butelka<const char*>::operator>(Butelka<const char*>& temp) const{
	if(strlen(this->moje)>strlen(temp.moje)){
			return this->moje;
		}
		else{
			return temp.moje;
		}
}


// template <>
// void Butelka<int>::dupa(int cos){
// 	std::cout<<"pizda z marchewka\n"<<cos;
// }