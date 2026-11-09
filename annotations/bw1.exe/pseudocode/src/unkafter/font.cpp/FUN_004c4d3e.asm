; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * unkafter_font_cpp_FUN_004c4d3e(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc8ce8
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004c4d3e
        ;   Label: unkafter_font.cpp_FUN_004c4d3e
    PUSH EBX                            ; 004c4d40
    PUSH ESI                            ; 004c4d41
    MOV EBX,dword ptr [0x01cc8ce8]      ; 004c4d42 | DAT_01cc8ce8
    MOV ECX,dword ptr [ESP + 0xc]       ; 004c4d48
    MOV ESI,dword ptr [ESP + 0x10]      ; 004c4d4c
    MOV EAX,0x1cc8cec                   ; 004c4d50
    XOR EDX,EDX                         ; 004c4d55
    TEST EBX,EBX                        ; 004c4d57
    JLE 0x004c4d6b                      ; 004c4d59
        ;   XREF to: 004c4d6b (CONDITIONAL_JUMP)  ; LAB_004c4d6b
    CMP ECX,dword ptr [EAX]             ; 004c4d5b
        ;   Label: LAB_004c4d5b
    JNZ 0x004c4d63                      ; 004c4d5d
        ;   XREF to: 004c4d63 (CONDITIONAL_JUMP)  ; LAB_004c4d63
    CMP EAX,ESI                         ; 004c4d5f
    JNZ 0x004c4d6d                      ; 004c4d61
        ;   XREF to: 004c4d6d (CONDITIONAL_JUMP)  ; LAB_004c4d6d
    INC EDX                             ; 004c4d63
        ;   Label: LAB_004c4d63
    ADD EAX,0x38                        ; 004c4d64
    CMP EDX,EBX                         ; 004c4d67
    JL 0x004c4d5b                       ; 004c4d69
        ;   XREF to: 004c4d5b (CONDITIONAL_JUMP)  ; LAB_004c4d5b
    XOR EAX,EAX                         ; 004c4d6b
        ;   Label: LAB_004c4d6b
    MOV dword ptr [0x01cc8ce8],EBX      ; 004c4d6d | DAT_01cc8ce8
        ;   Label: LAB_004c4d6d
    POP ESI                             ; 004c4d73
    POP EBX                             ; 004c4d74
    RET                                 ; 004c4d75

