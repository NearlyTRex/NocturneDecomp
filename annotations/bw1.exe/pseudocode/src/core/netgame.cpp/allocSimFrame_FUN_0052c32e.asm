; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_netgame_cpp_allocSimFrame_FUN_0052c32e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d715a8
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0052c32e
        ;   Label: core_netgame.cpp_allocSimFrame_FUN_0052c32e
    PUSH EBX                            ; 0052c330
    PUSH EBP                            ; 0052c331
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052c332
    MOV ECX,dword ptr [0x01d715a8]      ; 0052c336 | DAT_01d715a8
    XOR EDX,EDX                         ; 0052c33c
    TEST ECX,ECX                        ; 0052c33e
    JLE 0x0052c373                      ; 0052c340
        ;   XREF to: 0052c373 (CONDITIONAL_JUMP)  ; LAB_0052c373
    PUSH ESI                            ; 0052c342
    MOV ESI,ECX                         ; 0052c343
    SHL ECX,0x2                         ; 0052c345
    SUB ECX,ESI                         ; 0052c348
    SHL ECX,0x2                         ; 0052c34a
    MOV ESI,ECX                         ; 0052c34d
    SHL ECX,0x3                         ; 0052c34f
    XOR EAX,EAX                         ; 0052c352
    ADD ECX,ESI                         ; 0052c354
    POP ESI                             ; 0052c356
    CMP EBX,dword ptr [EAX + 0x1d715ac] ; 0052c357
        ;   Label: LAB_0052c357
    JNZ 0x0052c36b                      ; 0052c35d
        ;   XREF to: 0052c36b (CONDITIONAL_JUMP)  ; LAB_0052c36b
    TEST EDX,EDX                        ; 0052c35f
    JL 0x0052c373                       ; 0052c361
        ;   XREF to: 0052c373 (CONDITIONAL_JUMP)  ; LAB_0052c373
    ADD EAX,0x1d715ac                   ; 0052c363
    POP EBP                             ; 0052c368
    POP EBX                             ; 0052c369
    RET                                 ; 0052c36a
    ADD EAX,0x6c                        ; 0052c36b
        ;   Label: LAB_0052c36b
    INC EDX                             ; 0052c36e
    CMP EAX,ECX                         ; 0052c36f
    JL 0x0052c357                       ; 0052c371
        ;   XREF to: 0052c357 (CONDITIONAL_JUMP)  ; LAB_0052c357
    CMP dword ptr [0x01d715a8],0x200    ; 0052c373 | DAT_01d715a8
        ;   Label: LAB_0052c373
    JL 0x0052c3a1                       ; 0052c37d
        ;   XREF to: 0052c3a1 (CONDITIONAL_JUMP)  ; LAB_0052c3a1
    MOV EBP,0x5eb62a                    ; 0052c37f
    MOV EAX,0x12b                       ; 0052c384
    PUSH 0x5eb63e                       ; 0052c389
    MOV dword ptr [0x01d1d400],EBP      ; 0052c38e | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0052c394 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0052c399
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0052c39e
    MOV EDX,dword ptr [0x01d715a8]      ; 0052c3a1 | DAT_01d715a8
        ;   Label: LAB_0052c3a1
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052c3a7
    SUB EAX,EDX                         ; 0052c3ae
    MOV EBX,0x1d715ac                   ; 0052c3b0
    SHL EAX,0x2                         ; 0052c3b5
    PUSH 0x6c                           ; 0052c3b8
    MOV EDX,EAX                         ; 0052c3ba
    SHL EAX,0x3                         ; 0052c3bc
    PUSH 0x0                            ; 0052c3bf
    ADD EAX,EDX                         ; 0052c3c1
    MOV EDX,dword ptr [0x01d715a8]      ; 0052c3c3 | DAT_01d715a8
    ADD EBX,EAX                         ; 0052c3c9
    INC EDX                             ; 0052c3cb
    PUSH EBX                            ; 0052c3cc
    MOV dword ptr [0x01d715a8],EDX      ; 0052c3cd | DAT_01d715a8
    CALL crt_memory.c_memset_FUN_005bfb70 ; 0052c3d3
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0052c3d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 0052c3db
    MOV dword ptr [EBX],EAX             ; 0052c3df
    MOV EAX,EBX                         ; 0052c3e1
    POP EBP                             ; 0052c3e3
    POP EBX                             ; 0052c3e4
    RET                                 ; 0052c3e5

