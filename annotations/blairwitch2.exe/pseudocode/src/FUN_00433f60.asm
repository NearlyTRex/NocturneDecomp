; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00433f60(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int param_5)
;
;
; Called Functions:
;   FUN_0057de80
;   FUN_0057df10
;   FUN_0057e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433f60
        ;   Label: FUN_00433f60
    PUSH ESI                            ; 00433f61
    PUSH EDI                            ; 00433f62
    SUB ESP,0x18                        ; 00433f63
    MOV ESI,dword ptr [ESP + 0x28]      ; 00433f66
    MOV EDI,dword ptr [ESP + 0x34]      ; 00433f6a
    MOV EDX,dword ptr [EDI]             ; 00433f6e
    PUSH EDX                            ; 00433f70
    MOV ECX,dword ptr [ESP + 0x34]      ; 00433f71
    PUSH ECX                            ; 00433f75
    LEA EAX,[ESP + 0x8]                 ; 00433f76
    PUSH EAX                            ; 00433f7a
    CALL FUN_0057de80                   ; 00433f7b
        ;   XREF to: 0057de80 (UNCONDITIONAL_CALL)  ; undefined FUN_0057de80()
    ADD ESP,0xc                         ; 00433f80
    MOV EBX,ESP                         ; 00433f83
    PUSH EBX                            ; 00433f85
    MOV EBX,dword ptr [ESP + 0x30]      ; 00433f86
    PUSH EBX                            ; 00433f8a
    MOV EAX,dword ptr [ESI]             ; 00433f8b
    PUSH ESI                            ; 00433f8d
    CALL dword ptr [EAX + 0x8]          ; 00433f8e
    ADD ESP,0xc                         ; 00433f91
    MOV EBX,EAX                         ; 00433f94
    CMP EAX,0x1                         ; 00433f96
    JNZ 0x00433fde                      ; 00433f99
        ;   XREF to: 00433fde (CONDITIONAL_JUMP)  ; LAB_00433fde
    CMP dword ptr [ESP + 0x38],0x0      ; 00433f9b
    JNZ 0x00433fcb                      ; 00433fa0
        ;   XREF to: 00433fcb (CONDITIONAL_JUMP)  ; LAB_00433fcb
    MOV EAX,ESP                         ; 00433fa2
        ;   Label: LAB_00433fa2
    PUSH EAX                            ; 00433fa4
    CALL FUN_0057e0c0                   ; 00433fa5
        ;   XREF to: 0057e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057e0c0()
    ADD ESP,0x4                         ; 00433faa
    MOV EDX,dword ptr [EDI]             ; 00433fad
    PUSH 0x0                            ; 00433faf
    SUB EDX,EAX                         ; 00433fb1
    LEA EAX,[ESP + 0x4]                 ; 00433fb3
    PUSH EAX                            ; 00433fb7
    MOV dword ptr [EDI],EDX             ; 00433fb8
    CALL FUN_0057df10                   ; 00433fba
        ;   XREF to: 0057df10 (UNCONDITIONAL_CALL)  ; undefined FUN_0057df10()
    ADD ESP,0x8                         ; 00433fbf
    MOV EAX,EBX                         ; 00433fc2
    ADD ESP,0x18                        ; 00433fc4
    POP EDI                             ; 00433fc7
    POP ESI                             ; 00433fc8
    POP EBX                             ; 00433fc9
    RET                                 ; 00433fca
    MOV EAX,ESP                         ; 00433fcb
        ;   Label: LAB_00433fcb
    PUSH EAX                            ; 00433fcd
    MOV EBX,dword ptr [ESI]             ; 00433fce
    PUSH ESI                            ; 00433fd0
    CALL dword ptr [EBX + 0xc]          ; 00433fd1
    ADD ESP,0x8                         ; 00433fd4
    MOV EBX,EAX                         ; 00433fd7
    CMP EAX,0x1                         ; 00433fd9
    JZ 0x00433fa2                       ; 00433fdc
        ;   XREF to: 00433fa2 (CONDITIONAL_JUMP)  ; LAB_00433fa2
    XOR EBX,EAX                         ; 00433fde
        ;   Label: LAB_00433fde
    JMP 0x00433fa2                      ; 00433fe0
        ;   XREF to: 00433fa2 (UNCONDITIONAL_JUMP)  ; LAB_00433fa2

