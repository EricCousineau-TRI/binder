#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <sstream> // __str__
#include <vector> // std::vector

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <mmtf.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>);
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*);
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>);
#endif

void bind_std_stl_vector_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B173_[std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>] ";
	{ // std::vector file:bits/stl_vector.h line:216
		pybind11::class_<std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>, std::shared_ptr<std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>>> cl(M("std"), "vector_std_vector_float_std_allocator_float_std_allocator_std_vector_float_std_allocator_float_t", "");
		pybind11::handle cl_type = cl;

		cl.def( pybind11::init( [](){ return new std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>(); } ) );
		cl.def( pybind11::init<const class std::allocator<class std::vector<float, class std::allocator<float> > > &>(), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0){ return new std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>(a0); } ), "doc");
		cl.def( pybind11::init<unsigned long, const class std::allocator<class std::vector<float, class std::allocator<float> > > &>(), pybind11::arg("__n"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](unsigned long const & a0, const class std::vector<float, class std::allocator<float> > & a1){ return new std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>(a0, a1); } ), "doc");
		cl.def( pybind11::init<unsigned long, const class std::vector<float, class std::allocator<float> > &, const class std::allocator<class std::vector<float, class std::allocator<float> > > &>(), pybind11::arg("__n"), pybind11::arg("__value"), pybind11::arg("__a") );

		cl.def( pybind11::init( [](std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >> const &o){ return new std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>(o); } ) );
		cl.def( pybind11::init<const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &, const class std::allocator<class std::vector<float, class std::allocator<float> > > &>(), pybind11::arg("__x"), pybind11::arg("__a") );

		cl.def("assign", (class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > & (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::operator=, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::operator=(const class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &", pybind11::return_value_policy::automatic, pybind11::arg("__x"));
		cl.def("assign", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(unsigned long, const class std::vector<float, class std::allocator<float> > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::assign, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::assign(unsigned long, const class std::vector<float, class std::allocator<float> > &) --> void", pybind11::arg("__n"), pybind11::arg("__val"));
		cl.def("begin", (class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::begin, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::begin() --> class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >");
		cl.def("end", (class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::end, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::end() --> class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >");
		cl.def("cbegin", (class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)() const) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::cbegin, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::cbegin() const --> class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >");
		cl.def("cend", (class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)() const) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::cend, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::cend() const --> class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >");
		cl.def("size", (unsigned long (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)() const) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::size, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::size() const --> unsigned long");
		cl.def("max_size", (unsigned long (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)() const) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::max_size, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::max_size() const --> unsigned long");
		cl.def("resize", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(unsigned long)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::resize, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::resize(unsigned long) --> void", pybind11::arg("__new_size"));
		cl.def("resize", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(unsigned long, const class std::vector<float, class std::allocator<float> > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::resize, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::resize(unsigned long, const class std::vector<float, class std::allocator<float> > &) --> void", pybind11::arg("__new_size"), pybind11::arg("__x"));
		cl.def("shrink_to_fit", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::shrink_to_fit, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::shrink_to_fit() --> void");
		cl.def("capacity", (unsigned long (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)() const) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::capacity, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::capacity() const --> unsigned long");
		cl.def("empty", (bool (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)() const) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::empty, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::empty() const --> bool");
		cl.def("reserve", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(unsigned long)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::reserve, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::reserve(unsigned long) --> void", pybind11::arg("__n"));
		cl.def("__getitem__", (class std::vector<float, class std::allocator<float> > & (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(unsigned long)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::operator[], "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::operator[](unsigned long) --> class std::vector<float, class std::allocator<float> > &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("at", (class std::vector<float, class std::allocator<float> > & (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(unsigned long)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::at, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::at(unsigned long) --> class std::vector<float, class std::allocator<float> > &", pybind11::return_value_policy::automatic, pybind11::arg("__n"));
		cl.def("front", (class std::vector<float, class std::allocator<float> > & (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::front, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::front() --> class std::vector<float, class std::allocator<float> > &", pybind11::return_value_policy::automatic);
		cl.def("back", (class std::vector<float, class std::allocator<float> > & (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::back, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::back() --> class std::vector<float, class std::allocator<float> > &", pybind11::return_value_policy::automatic);
		cl.def("data", (class std::vector<float, class std::allocator<float> > * (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::data, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::data() --> class std::vector<float, class std::allocator<float> > *", pybind11::return_value_policy::automatic);
		cl.def("push_back", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(const class std::vector<float, class std::allocator<float> > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::push_back, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::push_back(const class std::vector<float, class std::allocator<float> > &) --> void", pybind11::arg("__x"));
		cl.def("pop_back", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::pop_back, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::pop_back() --> void");
		cl.def("insert", (class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >, const class std::vector<float, class std::allocator<float> > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::insert, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::insert(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >, const class std::vector<float, class std::allocator<float> > &) --> class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >", pybind11::arg("__position"), pybind11::arg("__x"));
		cl.def("insert", (class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >, unsigned long, const class std::vector<float, class std::allocator<float> > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::insert, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::insert(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >, unsigned long, const class std::vector<float, class std::allocator<float> > &) --> class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >", pybind11::arg("__position"), pybind11::arg("__n"), pybind11::arg("__x"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::erase, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::erase(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >) --> class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >", pybind11::arg("__position"));
		cl.def("erase", (class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > > (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >, class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::erase, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::erase(class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >, class __gnu_cxx::__normal_iterator<const class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >) --> class __gnu_cxx::__normal_iterator<class std::vector<float, class std::allocator<float> > *, class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > >", pybind11::arg("__first"), pybind11::arg("__last"));
		cl.def("swap", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)(class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &)) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::swap, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::swap(class std::vector<class std::vector<float, class std::allocator<float> >, class std::allocator<class std::vector<float, class std::allocator<float> > > > &) --> void", pybind11::arg("__x"));
		cl.def("clear", (void (std::vector<std::vector<float, std::allocator<float> >,std::allocator<std::vector<float, std::allocator<float> > >>::*)()) &std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::clear, "C++: std::vector<std::vector<float, std::allocator<float> >, std::allocator<std::vector<float, std::allocator<float> > > >::clear() --> void");
	}
}
