; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CStrList * __cdecl shape_edittool_cpp_CStrList_ctor_FUN_00473b60(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_script.cpp_FUN_004fe490 at 004fe498
;   core_sound.cpp_staticInit_FUN_0052c8c0 at 0052c8d2
;   shape_edittool.cpp_FUN_00474c90 at 00474c95
;
; Referenced Globals:
;   CStrList_vtable g_CStrListVTable
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00473b60
        ;   Label: shape_edittool.cpp_CStrList_ctor_FUN_00473b60
    MOV dword ptr [EAX],0x0             ; 00473b64
    MOV dword ptr [EAX + 0x8],0x0       ; 00473b6a
    MOV dword ptr [EAX + 0x4],0x0       ; 00473b71
    MOV dword ptr [EAX + 0xc],0x59ca74  ; 00473b78 | g_CStrListVTable
    RET                                 ; 00473b7f

