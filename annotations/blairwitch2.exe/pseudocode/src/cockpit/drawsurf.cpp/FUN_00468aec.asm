; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int cockpit_drawsurf_cpp_FUN_00468aec(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01ba5c30
;
; Called Functions:
;   engine_2d.c_getStringWidth_FUN_004018b0
;   engine_font.cpp_FUN_004ab530
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00468aec
        ;   Label: cockpit_drawsurf.cpp_FUN_00468aec
    SUB ESP,0x4                         ; 00468af0
    MOV EAX,dword ptr [ESP + 0xc]       ; 00468af3
    MOV EDX,dword ptr [0x01ba5c30]      ; 00468af7 | DAT_01ba5c30
    TEST EDX,EDX                        ; 00468afd
    JZ 0x00468b0f                       ; 00468aff
        ;   XREF to: 00468b0f (CONDITIONAL_JUMP)  ; LAB_00468b0f
    PUSH EAX                            ; 00468b01
    PUSH EDX                            ; 00468b02
    CALL engine_font.cpp_FUN_004ab530   ; 00468b03
        ;   XREF to: 004ab530 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_FUN_004ab530(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 00468b08
    ADD ESP,0x4                         ; 00468b0b
    RET                                 ; 00468b0e
    MOV byte ptr [ESP],AL               ; 00468b0f
        ;   Label: LAB_00468b0f
    XOR AH,AH                           ; 00468b12
    MOV byte ptr [ESP + 0x1],AH         ; 00468b14
    MOV EAX,ESP                         ; 00468b18
    PUSH EAX                            ; 00468b1a
    CALL engine_2d.c_getStringWidth_FUN_004018b0 ; 00468b1b
        ;   XREF to: 004018b0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getStringWidth_FUN_004018b0(char * text)
    ADD ESP,0x4                         ; 00468b20
    DEC EAX                             ; 00468b23
    ADD ESP,0x4                         ; 00468b24
    RET                                 ; 00468b27

