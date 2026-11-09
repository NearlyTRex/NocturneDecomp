; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00467f20(CBitFont *font_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   font_ptr
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a8c5
;   core_script.cpp_FUN_00529210 at 0052926f
;
; Referenced Globals:
;   undefined4 DAT_01bdd7c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00467f20
        ;   Label: cockpit_drawsurf.cpp_FUN_00467f20
    MOV [0x01bdd7c4],EAX                ; 00467f24 | DAT_01bdd7c4
    RET                                 ; 00467f29

