; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00565a2c(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba28
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6018
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00565a2c
        ;   Label: engine_special.cpp_FUN_00565a2c
    CMP dword ptr [0x01c6cee8],0x0      ; 00565a30 | DAT_01c6cee8
    JZ 0x00565a42                       ; 00565a37
        ;   XREF to: 00565a42 (CONDITIONAL_JUMP)  ; LAB_00565a42
    CMP dword ptr [0x02cf6018],0x0      ; 00565a39 | DAT_02cf6018
    JNZ 0x00565a45                      ; 00565a40
        ;   XREF to: 00565a45 (CONDITIONAL_JUMP)  ; LAB_00565a45
    XOR EAX,EAX                         ; 00565a42
        ;   Label: LAB_00565a42
    RET                                 ; 00565a44
    PUSH EDI                            ; 00565a45
        ;   Label: LAB_00565a45
    PUSH ESI                            ; 00565a46
    PUSH EBX                            ; 00565a47
    MOV EBX,dword ptr [ESP + 0x14]      ; 00565a48
    PUSH EBX                            ; 00565a4c
    MOV ESI,dword ptr [0x005fba28]      ; 00565a4d | DAT_005fba28
    PUSH ESI                            ; 00565a53
    MOV EDI,dword ptr [ESP + 0x18]      ; 00565a54
    PUSH EDI                            ; 00565a58
    CALL dword ptr [0x02cf6018]         ; 00565a59 | DAT_02cf6018
    ADD ESP,0xc                         ; 00565a5f
    POP EBX                             ; 00565a62
    POP ESI                             ; 00565a63
    POP EDI                             ; 00565a64
    RET                                 ; 00565a65

