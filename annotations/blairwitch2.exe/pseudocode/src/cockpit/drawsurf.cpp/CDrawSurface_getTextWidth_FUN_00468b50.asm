; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl cockpit_drawsurf_cpp_CDrawSurface_getTextWidth_FUN_00468b50(CDrawSurface *this_ptr,char *text)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   text
;
; Referenced Globals:
;   undefined4 DAT_01ba5c30
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;   engine_font.cpp_FUN_004aaf00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00468b50
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_getTextWidth_FUN_00468b50
    MOV EDX,dword ptr [0x01ba5c30]      ; 00468b54 | DAT_01ba5c30
    TEST EDX,EDX                        ; 00468b5a
    JZ 0x00468b69                       ; 00468b5c
        ;   XREF to: 00468b69 (CONDITIONAL_JUMP)  ; LAB_00468b69
    PUSH EAX                            ; 00468b5e
    PUSH EDX                            ; 00468b5f
    CALL engine_font.cpp_FUN_004aaf00   ; 00468b60
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 00468b65
    RET                                 ; 00468b68
    PUSH EAX                            ; 00468b69
        ;   Label: LAB_00468b69
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 00468b6a
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 00468b6f
    DEC EAX                             ; 00468b72
    RET                                 ; 00468b73

