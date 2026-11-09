; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_0046a720(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; Referenced Globals:
;   undefined4 DAT_01bdd7c4
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;   engine_font.cpp_FUN_004b2a80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0046a720
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_0046a720
    MOV EDX,dword ptr [0x01bdd7c4]      ; 0046a724 | DAT_01bdd7c4
    TEST EDX,EDX                        ; 0046a72a
    JZ 0x0046a739                       ; 0046a72c
        ;   XREF to: 0046a739 (CONDITIONAL_JUMP)  ; LAB_0046a739
    PUSH EAX                            ; 0046a72e
    PUSH EDX                            ; 0046a72f
    CALL engine_font.cpp_FUN_004b2a80   ; 0046a730
        ;   XREF to: 004b2a80 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004b2a80(CBitFont * this_ptr, char * text)
    ADD ESP,0x8                         ; 0046a735
    RET                                 ; 0046a738
    PUSH EAX                            ; 0046a739
        ;   Label: LAB_0046a739
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 0046a73a
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 0046a73f
    DEC EAX                             ; 0046a742
    RET                                 ; 0046a743

