; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_font_cpp_FUN_004c1d70(int param_1,byte *param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_font.cpp_FUN_004c18c0 at 004c1c4d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1d70
        ;   Label: engine_font.cpp_FUN_004c1d70
    PUSH ESI                            ; 004c1d71
    PUSH EDI                            ; 004c1d72
    PUSH EBP                            ; 004c1d73
    SUB ESP,0x4                         ; 004c1d74
    MOV ESI,dword ptr [ESP + 0x18]      ; 004c1d77
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004c1d7b
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c1d7f
    MOV ECX,dword ptr [ESP + 0x24]      ; 004c1d83
    XOR EDX,EDX                         ; 004c1d87
    XOR EDI,EDI                         ; 004c1d89
    MOV dword ptr [ESP],EDX             ; 004c1d8b
    TEST ECX,ECX                        ; 004c1d8e
    JLE 0x004c1dbb                      ; 004c1d90
        ;   XREF to: 004c1dbb (CONDITIONAL_JUMP)  ; LAB_004c1dbb
    MOV EDX,EBP                         ; 004c1d92
        ;   Label: LAB_004c1d92
    XOR EAX,EAX                         ; 004c1d94
    TEST EBX,EBX                        ; 004c1d96
    JLE 0x004c1dac                      ; 004c1d98
        ;   XREF to: 004c1dac (CONDITIONAL_JUMP)  ; LAB_004c1dac
    XOR ECX,ECX                         ; 004c1d9a
        ;   Label: LAB_004c1d9a
    MOV CL,byte ptr [EDX]               ; 004c1d9c
    CMP ECX,dword ptr [ESI + 0x4208]    ; 004c1d9e
    JNZ 0x004c1dc6                      ; 004c1da4
        ;   XREF to: 004c1dc6 (CONDITIONAL_JUMP)  ; LAB_004c1dc6
    INC EAX                             ; 004c1da6
    INC EDX                             ; 004c1da7
    CMP EAX,EBX                         ; 004c1da8
    JL 0x004c1d9a                       ; 004c1daa
        ;   XREF to: 004c1d9a (CONDITIONAL_JUMP)  ; LAB_004c1d9a
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c1dac
        ;   Label: LAB_004c1dac
    MOV EDX,dword ptr [ESP + 0x24]      ; 004c1db0
    INC EDI                             ; 004c1db4
    ADD EBP,EAX                         ; 004c1db5
    CMP EDI,EDX                         ; 004c1db7
    JL 0x004c1d92                       ; 004c1db9
        ;   XREF to: 004c1d92 (CONDITIONAL_JUMP)  ; LAB_004c1d92
    MOV EAX,dword ptr [ESP]             ; 004c1dbb
        ;   Label: LAB_004c1dbb
    ADD ESP,0x4                         ; 004c1dbe
    POP EBP                             ; 004c1dc1
    POP EDI                             ; 004c1dc2
    POP ESI                             ; 004c1dc3
    POP EBX                             ; 004c1dc4
    RET                                 ; 004c1dc5
    LEA EAX,[EDI + 0x1]                 ; 004c1dc6
        ;   Label: LAB_004c1dc6
    MOV dword ptr [ESP],EAX             ; 004c1dc9
    JMP 0x004c1dac                      ; 004c1dcc
        ;   XREF to: 004c1dac (UNCONDITIONAL_JUMP)  ; LAB_004c1dac

