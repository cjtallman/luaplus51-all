// ---------------------------------------------------------------------------
// wxxml.h - headers and wxLua types for wxLua binding
//
// This file was generated by genwxbind.lua 
// Any changes made to this file will be lost when the file is regenerated
// ---------------------------------------------------------------------------

#ifndef __HOOK_WXLUA_wxxml_H__
#define __HOOK_WXLUA_wxxml_H__

#include "wxbind/include/wxbinddefs.h"
#include "wxluasetup.h"
#include "wxbind/include/wxbase_bind.h"

#include "wxlua/include/wxlstate.h"
#include "wxlua/include/wxlbind.h"

// ---------------------------------------------------------------------------
// Check if the version of binding generator used to create this is older than
//   the current version of the bindings.
//   See 'bindings/genwxbind.lua' and 'modules/wxlua/include/wxldefs.h'
#if WXLUA_BINDING_VERSION > 27
#   error "The WXLUA_BINDING_VERSION in the bindings is too old, regenerate bindings."
#endif //WXLUA_BINDING_VERSION > 27
// ---------------------------------------------------------------------------

// binding class
class WXDLLIMPEXP_BINDWXXML wxLuaBinding_wxxml : public wxLuaBinding
{
public:
    wxLuaBinding_wxxml();


private:
    DECLARE_DYNAMIC_CLASS(wxLuaBinding_wxxml)
};


// initialize wxLuaBinding_wxxml for all wxLuaStates
extern WXDLLIMPEXP_BINDWXXML bool wxLuaBinding_wxxml_init();

// ---------------------------------------------------------------------------
// Includes
// ---------------------------------------------------------------------------

#if (wxCHECK_VERSION(2,6,0)) && (wxLUA_USE_wxXML && wxUSE_XML)
    #include "wx/xml/xml.h"
#endif // (wxCHECK_VERSION(2,6,0)) && (wxLUA_USE_wxXML && wxUSE_XML)

// ---------------------------------------------------------------------------
// Lua Tag Method Values and Tables for each Class
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxXML && wxUSE_XML
    extern WXDLLIMPEXP_DATA_BINDWXXML(int) wxluatype_wxXmlDocument;
    extern WXDLLIMPEXP_DATA_BINDWXXML(int) wxluatype_wxXmlNode;
    extern WXDLLIMPEXP_DATA_BINDWXXML(int) wxluatype_wxXmlProperty;
#endif // wxLUA_USE_wxXML && wxUSE_XML


// ---------------------------------------------------------------------------
// Encapsulation Declarations - need to be public for other bindings.
// ---------------------------------------------------------------------------

#if wxLUA_USE_wxXML && wxUSE_XML
    wxLUA_DECLARE_ENCAPSULATION(WXDLLIMPEXP_BINDWXXML, wxXmlNode, wxXmlNode)
    wxLUA_DECLARE_ENCAPSULATION(WXDLLIMPEXP_BINDWXXML, wxXmlProperty, wxXmlProperty)
#endif // wxLUA_USE_wxXML && wxUSE_XML


#endif // __HOOK_WXLUA_wxxml_H__

