// File: T10_inheritance.cpp
#include <T10.inheritance.hpp> // A
#include <T10.inheritance.hpp> // B
#include <T10.inheritance.hpp> // Base
#include <T10.inheritance.hpp> // Delete
#include <T10.inheritance.hpp> // Derived
#include <T10.inheritance.hpp> // X
#include <T10.inheritance.hpp> // Y
#include <sstream> // __str__

#include <functional>
#include <pybind11/pybind11.h>
#include <string>

#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// Base file:T10.inheritance.hpp line:19
struct PyCallBack_Base : public Base {
	using Base::Base;

	void foo_protected() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Base *>(this), "foo_protected");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::foo_protected();
	}
	void f_v() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Base *>(this), "f_v");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v();
	}
	void f_v_2() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Base *>(this), "f_v_2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v_2();
	}
};

// Derived file:T10.inheritance.hpp line:34
struct PyCallBack_Derived : public Derived {
	using Derived::Derived;

	void foo_protected() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Derived *>(this), "foo_protected");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::foo_protected();
	}
	void f_v() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Derived *>(this), "f_v");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v();
	}
	void f_v_2() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Derived *>(this), "f_v_2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v_2();
	}
};

// Delete file:T10.inheritance.hpp line:42
struct PyCallBack_Delete : public Delete {
	using Delete::Delete;

	void foo_protected() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Delete *>(this), "foo_protected");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::foo_protected();
	}
	void f_v() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Delete *>(this), "f_v");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v();
	}
	void f_v_2() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const Delete *>(this), "f_v_2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v_2();
	}
};

// X file:T10.inheritance.hpp line:61
struct PyCallBack_X : public X {
	using X::X;

	void foo_protected() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const X *>(this), "foo_protected");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::foo_protected();
	}
	void f_v_2() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const X *>(this), "f_v_2");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Base::f_v_2();
	}
};

void bind_T10_inheritance(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // Base file:T10.inheritance.hpp line:19
		pybind11::class_<Base, std::shared_ptr<Base>, PyCallBack_Base> cl(M(""), "Base", "");
		cl.def( pybind11::init( [](){ return new Base(); }, [](){ return new PyCallBack_Base(); } ) );
		cl.def("foo", (void (Base::*)()) &Base::foo, "C++: Base::foo() --> void");
		cl.def("maybe", (void (Base::*)()) &Base::maybe, "C++: Base::maybe() --> void");
		cl.def("f_v", (void (Base::*)()) &Base::f_v, "C++: Base::f_v() --> void");
		cl.def("f_v_2", (void (Base::*)()) &Base::f_v_2, "C++: Base::f_v_2() --> void");
		cl.def("assign", (class Base & (Base::*)(const class Base &)) &Base::operator=, "C++: Base::operator=(const class Base &) --> class Base &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // Derived file:T10.inheritance.hpp line:34
		pybind11::class_<Derived, std::shared_ptr<Derived>, PyCallBack_Derived, Base> cl(M(""), "Derived", "");
		cl.def( pybind11::init( [](){ return new Derived(); }, [](){ return new PyCallBack_Derived(); } ) );
		cl.def_readwrite("data", &Derived::data);
		cl.def("foo_protected", [](Derived &o) -> void { return o.foo_protected(); }, "");
		cl.def("assign", (class Derived & (Derived::*)(const class Derived &)) &Derived::operator=, "C++: Derived::operator=(const class Derived &) --> class Derived &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // Delete file:T10.inheritance.hpp line:42
		pybind11::class_<Delete, std::shared_ptr<Delete>, PyCallBack_Delete, Base> cl(M(""), "Delete", "");
		cl.def("assign", (class Delete & (Delete::*)(const class Delete &)) &Delete::operator=, "C++: Delete::operator=(const class Delete &) --> class Delete &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // A file:T10.inheritance.hpp line:50
		pybind11::class_<A, std::shared_ptr<A>> cl(M(""), "A", "");
		cl.def( pybind11::init( [](){ return new A(); } ) );
		cl.def( pybind11::init( [](A const &o){ return new A(o); } ) );
		cl.def("assign", (class A & (A::*)(const class A &)) &A::operator=, "C++: A::operator=(const class A &) --> class A &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // B file:T10.inheritance.hpp line:54
		pybind11::class_<B, std::shared_ptr<B>> cl(M(""), "B", "");
		cl.def( pybind11::init( [](B const &o){ return new B(o); } ) );
		cl.def("assign", (class B & (B::*)(const class B &)) &B::operator=, "C++: B::operator=(const class B &) --> class B &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // X file:T10.inheritance.hpp line:61
		pybind11::class_<X, std::shared_ptr<X>, PyCallBack_X, Base> cl(M(""), "X", "");
		cl.def( pybind11::init( [](){ return new X(); }, [](){ return new PyCallBack_X(); } ) );
		cl.def("f_v", (void (X::*)()) &X::f_v, "C++: X::f_v() --> void");
		cl.def("assign", (class X & (X::*)(const class X &)) &X::operator=, "C++: X::operator=(const class X &) --> class X &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // Y file:T10.inheritance.hpp line:67
		pybind11::class_<Y, std::shared_ptr<Y>, X> cl(M(""), "Y", "");
		cl.def( pybind11::init( [](){ return new Y(); } ) );
		cl.def("f_v_2", (void (Y::*)()) &Y::f_v_2, "C++: Y::f_v_2() --> void");
		cl.def("assign", (class Y & (Y::*)(const class Y &)) &Y::operator=, "C++: Y::operator=(const class Y &) --> class Y &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


#include <map>
#include <algorithm>
#include <functional>
#include <memory>
#include <stdexcept>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_T10_inheritance(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(T10_inheritance, root_module) {
	root_module.doc() = "T10_inheritance module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	static std::vector<std::string> const reserved_python_words {"nonlocal", "global", };

	auto mangle_namespace_name(
		[](std::string const &ns) -> std::string {
			if ( std::find(reserved_python_words.begin(), reserved_python_words.end(), ns) == reserved_python_words.end() ) return ns;
			else return ns+'_';
		}
	);

	std::vector< std::pair<std::string, std::string> > sub_modules {
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule( mangle_namespace_name(p.second).c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_T10_inheritance(M);

}

// Source list file: TEST/T10_inheritance.sources
// T10_inheritance.cpp
// T10_inheritance.cpp

// Modules list file: TEST/T10_inheritance.modules
// 
