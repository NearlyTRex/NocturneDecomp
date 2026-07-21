; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_beast_cpp_CBeast_getCollisionType_FUN_00415230(int param_1,int *param_2)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00415230
        ;   Label: core_beast.cpp_CBeast_getCollisionType_FUN_00415230
    CMP dword ptr [EAX],0x1             ; 00415234
    JZ 0x0041523c                       ; 00415237
        ;   XREF to: 0041523c (CONDITIONAL_JUMP)  ; LAB_0041523c
    XOR EAX,EAX                         ; 00415239
    RET                                 ; 0041523b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0041523c
        ;   Label: LAB_0041523c
    ADD EDX,0x150                       ; 00415240
    MOV dword ptr [EAX + 0x20],EDX      ; 00415246
    MOV EAX,0x1                         ; 00415249
    RET                                 ; 0041524e

