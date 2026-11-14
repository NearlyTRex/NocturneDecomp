; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0046a700(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_renderEditor_FUN_00529210 at 00529287
;
; Referenced Globals:
;   undefined4 DAT_01bdd7c4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01bdd7c4]      ; 0046a700 | DAT_01bdd7c4
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0046a700
    TEST EDX,EDX                        ; 0046a706
    JZ 0x0046a711                       ; 0046a708
        ;   XREF to: 0046a711 (CONDITIONAL_JUMP)  ; LAB_0046a711
    MOV EAX,dword ptr [EDX + 0x41f0]    ; 0046a70a
    RET                                 ; 0046a710
    MOV EAX,0xb                         ; 0046a711
        ;   Label: LAB_0046a711
    RET                                 ; 0046a716

