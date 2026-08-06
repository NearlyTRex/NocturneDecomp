; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320(CDrawSurface *this_ptr)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_FUN_004fe9d0 at 004fea47
;
; Referenced Globals:
;   undefined4 DAT_01b4d718
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01b4d718]      ; 0045e320 | DAT_01b4d718
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getCurrentFontMaxWidth_FUN_0045e320
    TEST EDX,EDX                        ; 0045e326
    JZ 0x0045e331                       ; 0045e328
        ;   XREF to: 0045e331 (CONDITIONAL_JUMP)  ; LAB_0045e331
    MOV EAX,dword ptr [EDX + 0x3170]    ; 0045e32a
    RET                                 ; 0045e330
    MOV EAX,0xb                         ; 0045e331
        ;   Label: LAB_0045e331
    RET                                 ; 0045e336

