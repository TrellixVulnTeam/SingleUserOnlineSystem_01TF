// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from UserLogin.djinni

#include "user_login.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class UserLogin_UserLogin;

namespace djinni_generated {

class UserLogin
{
public:
    using CppType = std::shared_ptr<::UserLogin::UserLogin>;
    using CppOptType = std::shared_ptr<::UserLogin::UserLogin>;
    using ObjcType = UserLogin_UserLogin*;

    using Boxed = UserLogin;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

