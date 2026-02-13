; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(CStrList *this_ptr)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
;
; XREF[25]:
;   core_script.cpp_CScript_FUN_00559f80 at 0055a2b2
;   core_script.cpp_CScript_FUN_0055a370 at 0055a390
;   core_script.cpp_CScript_FUN_00565130 at 00565423
;   core_script.cpp_CScript_FUN_00565f70 at 00565f8e
;   core_script.cpp_CScript_FUN_00566080 at 005660ae
;   core_script.cpp_CScript_FUN_00566180 at 005661c6
;   core_script.cpp_CScript_FUN_005664d0 at 005664ef
;   core_script.cpp_CScript_FUN_00566cc0 at 00566d61
;   core_script.cpp_CScript_FUN_005671a0 at 005671f8
;   core_script.cpp_CScript_FUN_005677a0 at 00567a36
;   ... and 15 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6ed0
        ;   Label: shape_edittool.cpp_CStrList_getItemCount_FUN_004a6ed0
    MOV EAX,dword ptr [EAX]             ; 004a6ed4
    RET                                 ; 004a6ed6

