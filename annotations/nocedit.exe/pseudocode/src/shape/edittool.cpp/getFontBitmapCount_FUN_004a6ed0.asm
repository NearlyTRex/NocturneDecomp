; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[25]:
;   core_script.cpp_CScript_FUN_00559d80 at 00559e6b
;   core_script.cpp_CScript_FUN_00559f80 at 0055a2b2
;   core_script.cpp_CScript_FUN_0055a370 at 0055a390
;   core_script.cpp_CScript_FUN_00565130 at 00565423
;   core_script.cpp_CScript_FUN_00565aa0 at 00565ab3
;   core_script.cpp_CScript_FUN_00565ae0 at 00565b09
;   core_script.cpp_CScript_FUN_00565d00 at 00565d19
;   core_script.cpp_CScript_FUN_00565e70 at 00565e99
;   core_script.cpp_CScript_FUN_00565f70 at 00565f8e
;   core_script.cpp_CScript_FUN_00566080 at 005660ae
;   ... and 15 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a6ed0
        ;   Label: shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
    MOV EAX,dword ptr [EAX]             ; 004a6ed4
    RET                                 ; 004a6ed6

