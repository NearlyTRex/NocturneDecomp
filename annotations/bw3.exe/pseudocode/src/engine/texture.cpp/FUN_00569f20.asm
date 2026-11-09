; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00569f20(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[1]:
;   engine_texture.cpp_FUN_0056aab0 at 0056ab57
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569f20
        ;   Label: engine_texture.cpp_FUN_00569f20
    PUSH ESI                            ; 00569f21
    PUSH EDI                            ; 00569f22
    PUSH EBP                            ; 00569f23
    MOV EDI,dword ptr [ESP + 0x18]      ; 00569f24
    MOV EDI,dword ptr [EDI + 0x4]       ; 00569f28
    AND EDI,0xffff                      ; 00569f2b
    LEA EBX,[EDI*0x4 + 0x0]             ; 00569f31
    MOV ESI,dword ptr [ESP + 0x14]      ; 00569f38
    SUB EBX,EDI                         ; 00569f3c
    ADD ESI,0x4                         ; 00569f3e
    SHL EBX,0x5                         ; 00569f41
    ADD EBX,ESI                         ; 00569f44
    MOV EDX,dword ptr [EBX + 0x44]      ; 00569f46
    TEST EDX,EDX                        ; 00569f49
    JNZ 0x00569fd0                      ; 00569f4b
        ;   XREF to: 00569fd0 (CONDITIONAL_JUMP)  ; LAB_00569fd0
    MOV ESI,dword ptr [EBX + 0x48]      ; 00569f51
        ;   Label: LAB_00569f51
    TEST ESI,ESI                        ; 00569f54
    JZ 0x00569f61                       ; 00569f56
        ;   XREF to: 00569f61 (CONDITIONAL_JUMP)  ; LAB_00569f61
    PUSH ESI                            ; 00569f58
    CALL crt_unknown.c_FUN_005a3770     ; 00569f59
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00569f5e
    MOV EBP,dword ptr [EBX + 0x4c]      ; 00569f61
        ;   Label: LAB_00569f61
    TEST EBP,EBP                        ; 00569f64
    JZ 0x00569f71                       ; 00569f66
        ;   XREF to: 00569f71 (CONDITIONAL_JUMP)  ; LAB_00569f71
    PUSH EBP                            ; 00569f68
    CALL crt_unknown.c_FUN_005a3770     ; 00569f69
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00569f6e
    MOV EDX,dword ptr [EBX + 0x50]      ; 00569f71
        ;   Label: LAB_00569f71
    TEST EDX,EDX                        ; 00569f74
    JNZ 0x00569fde                      ; 00569f76
        ;   XREF to: 00569fde (CONDITIONAL_JUMP)  ; LAB_00569fde
    PUSH 0x60                           ; 00569f78
        ;   Label: LAB_00569f78
    PUSH 0x0                            ; 00569f7a
    PUSH EBX                            ; 00569f7c
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00569f7d
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00569f82
    MOV ESI,dword ptr [ESP + 0x18]      ; 00569f85
    LEA EDI,[EBX + 0x4]                 ; 00569f89
    ADD ESI,0x8                         ; 00569f8c
    PUSH EDI                            ; 00569f8f
    MOV AL,byte ptr [ESI]               ; 00569f90
        ;   Label: LAB_00569f90
    MOV byte ptr [EDI],AL               ; 00569f92
    CMP AL,0x0                          ; 00569f94
    JZ 0x00569fa8                       ; 00569f96
        ;   XREF to: 00569fa8 (CONDITIONAL_JUMP)  ; LAB_00569fa8
    MOV AL,byte ptr [ESI + 0x1]         ; 00569f98
    ADD ESI,0x2                         ; 00569f9b
    MOV byte ptr [EDI + 0x1],AL         ; 00569f9e
    ADD EDI,0x2                         ; 00569fa1
    CMP AL,0x0                          ; 00569fa4
    JNZ 0x00569f90                      ; 00569fa6
        ;   XREF to: 00569f90 (CONDITIONAL_JUMP)  ; LAB_00569f90
    POP EDI                             ; 00569fa8
        ;   Label: LAB_00569fa8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00569fa9
    MOV dword ptr [EBX + 0x58],0x1      ; 00569fad
    MOV dword ptr [EBX],ESI             ; 00569fb4
    MOV ESI,dword ptr [ESP + 0x20]      ; 00569fb6
    MOV dword ptr [EBX + 0x44],ESI      ; 00569fba
    MOV ESI,dword ptr [ESP + 0x24]      ; 00569fbd
    MOV dword ptr [EBX + 0x4c],ESI      ; 00569fc1
    MOV ESI,dword ptr [ESP + 0x28]      ; 00569fc4
    MOV dword ptr [EBX + 0x48],ESI      ; 00569fc8
    POP EBP                             ; 00569fcb
    POP EDI                             ; 00569fcc
    POP ESI                             ; 00569fcd
    POP EBX                             ; 00569fce
    RET                                 ; 00569fcf
    PUSH EDX                            ; 00569fd0
        ;   Label: LAB_00569fd0
    CALL crt_unknown.c_FUN_005a3770     ; 00569fd1
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00569fd6
    JMP 0x00569f51                      ; 00569fd9
        ;   XREF to: 00569f51 (UNCONDITIONAL_JUMP)  ; LAB_00569f51
    PUSH EDX                            ; 00569fde
        ;   Label: LAB_00569fde
    CALL crt_unknown.c_FUN_005a3770     ; 00569fdf
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00569fe4
    JMP 0x00569f78                      ; 00569fe7
        ;   XREF to: 00569f78 (UNCONDITIONAL_JUMP)  ; LAB_00569f78

