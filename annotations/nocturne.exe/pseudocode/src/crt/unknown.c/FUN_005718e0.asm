; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005718e0(UINT param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056f034 at 0056f036
;
; Referenced Globals:
;   undefined4 DAT_005c2144
;   undefined4 DAT_02de5c30
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005718e0
        ;   Label: crt_unknown.c_FUN_005718e0
    PUSH ESI                            ; 005718e1
    PUSH EBP                            ; 005718e2
    SUB ESP,0x14                        ; 005718e3
    MOV ESI,dword ptr [ESP + 0x24]      ; 005718e6
    CMP ESI,-0x1                        ; 005718ea
    JNZ 0x005718fd                      ; 005718ed
        ;   XREF to: 005718fd (CONDITIONAL_JUMP)  ; LAB_005718fd
    CALL dword ptr CS:[0x5754e0]        ; 005718ef
    MOV ESI,EAX                         ; 005718f6
    JMP 0x0057199b                      ; 005718f8
        ;   XREF to: 0057199b (UNCONDITIONAL_JUMP)  ; LAB_0057199b
    CMP ESI,-0x2                        ; 005718fd
        ;   Label: LAB_005718fd
    JNZ 0x00571910                      ; 00571900
        ;   XREF to: 00571910 (CONDITIONAL_JUMP)  ; LAB_00571910
    CALL dword ptr CS:[0x575530]        ; 00571902
    MOV ESI,EAX                         ; 00571909
    JMP 0x0057199b                      ; 0057190b
        ;   XREF to: 0057199b (UNCONDITIONAL_JUMP)  ; LAB_0057199b
    CMP ESI,-0x3                        ; 00571910
        ;   Label: LAB_00571910
    JNZ 0x0057193e                      ; 00571913
        ;   XREF to: 0057193e (CONDITIONAL_JUMP)  ; LAB_0057193e
    PUSH 0x101                          ; 00571915
    PUSH 0x0                            ; 0057191a
    PUSH 0x2de5c40                      ; 0057191c
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00571921
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00571926
    XOR EDX,EDX                         ; 00571929
    XOR EAX,EAX                         ; 0057192b
    MOV dword ptr [0x02de5c30],EDX      ; 0057192d | DAT_02de5c30
    MOV dword ptr [0x005c2144],EDX      ; 00571933 | DAT_005c2144
    JMP 0x00571a41                      ; 00571939
        ;   XREF to: 00571a41 (UNCONDITIONAL_JUMP)  ; LAB_00571a41
    CMP ESI,-0x4                        ; 0057193e
        ;   Label: LAB_0057193e
    JNZ 0x0057199b                      ; 00571941
        ;   XREF to: 0057199b (CONDITIONAL_JUMP)  ; LAB_0057199b
    PUSH 0x101                          ; 00571943
    PUSH 0x0                            ; 00571948
    PUSH 0x2de5c40                      ; 0057194a
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0057194f
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV EAX,0x81                        ; 00571954
    MOV DL,0x1                          ; 00571959
    ADD ESP,0xc                         ; 0057195b
    INC EAX                             ; 0057195e
        ;   Label: LAB_0057195e
    MOV byte ptr [EAX + 0x2de5c40],DL   ; 0057195f
    CMP EAX,0x9f                        ; 00571965
    JLE 0x0057195e                      ; 0057196a
        ;   XREF to: 0057195e (CONDITIONAL_JUMP)  ; LAB_0057195e
    MOV EAX,0xe0                        ; 0057196c
    MOV DH,0x1                          ; 00571971
    INC EAX                             ; 00571973
        ;   Label: LAB_00571973
    MOV byte ptr [EAX + 0x2de5c40],DH   ; 00571974
    CMP EAX,0xfc                        ; 0057197a
    JLE 0x00571973                      ; 0057197f
        ;   XREF to: 00571973 (CONDITIONAL_JUMP)  ; LAB_00571973
    MOV EBP,0x1                         ; 00571981
    MOV EAX,0x3a4                       ; 00571986
    MOV dword ptr [0x02de5c30],EBP      ; 0057198b | DAT_02de5c30
    MOV [0x005c2144],EAX                ; 00571991 | DAT_005c2144
    JMP 0x00571a3f                      ; 00571996
        ;   XREF to: 00571a3f (UNCONDITIONAL_JUMP)  ; LAB_00571a3f
    TEST ESI,ESI                        ; 0057199b
        ;   Label: LAB_0057199b
    JNZ 0x005719a4                      ; 0057199d
        ;   XREF to: 005719a4 (CONDITIONAL_JUMP)  ; LAB_005719a4
    MOV ESI,0x1                         ; 0057199f
    MOV EAX,ESP                         ; 005719a4
        ;   Label: LAB_005719a4
    PUSH EAX                            ; 005719a6
    PUSH ESI                            ; 005719a7
    CALL dword ptr CS:[0x5754e4]        ; 005719a8
    TEST EAX,EAX                        ; 005719af
    JNZ 0x005719bf                      ; 005719b1
        ;   XREF to: 005719bf (CONDITIONAL_JUMP)  ; LAB_005719bf
    MOV EAX,0x1                         ; 005719b3
    ADD ESP,0x14                        ; 005719b8
    POP EBP                             ; 005719bb
    POP ESI                             ; 005719bc
    POP EBX                             ; 005719bd
    RET                                 ; 005719be
    PUSH 0x101                          ; 005719bf
        ;   Label: LAB_005719bf
    PUSH 0x0                            ; 005719c4
    PUSH 0x2de5c40                      ; 005719c6
    CALL crt_memory.c_memset_FUN_00563cc0 ; 005719cb
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005719d0
    XOR ECX,ECX                         ; 005719d3
    MOV AH,byte ptr [ESP + 0x6]         ; 005719d5
    MOV dword ptr [0x02de5c30],ECX      ; 005719d9 | DAT_02de5c30
    TEST AH,AH                          ; 005719df
    JZ 0x005719ed                       ; 005719e1
        ;   XREF to: 005719ed (CONDITIONAL_JUMP)  ; LAB_005719ed
    MOV dword ptr [0x02de5c30],0x1      ; 005719e3 | DAT_02de5c30
    XOR EBX,EBX                         ; 005719ed
        ;   Label: LAB_005719ed
    MOV CL,0x1                          ; 005719ef
    XOR CH,CH                           ; 005719f1
    JMP 0x00571a11                      ; 005719f3
        ;   XREF to: 00571a11 (UNCONDITIONAL_JUMP)  ; LAB_00571a11
    XOR EAX,EAX                         ; 005719f5
        ;   Label: LAB_005719f5
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005719f7
    JMP 0x00571a04                      ; 005719fb
        ;   XREF to: 00571a04 (UNCONDITIONAL_JUMP)  ; LAB_00571a04
    INC EAX                             ; 005719fd
        ;   Label: LAB_005719fd
    MOV byte ptr [EAX + 0x2de5c40],CL   ; 005719fe
    XOR EDX,EDX                         ; 00571a04
        ;   Label: LAB_00571a04
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x7] ; 00571a06
    CMP EAX,EDX                         ; 00571a0a
    JLE 0x005719fd                      ; 00571a0c
        ;   XREF to: 005719fd (CONDITIONAL_JUMP)  ; LAB_005719fd
    ADD EBX,0x2                         ; 00571a0e
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 00571a11
        ;   Label: LAB_00571a11
    CMP CH,AL                           ; 00571a15
    JNZ 0x005719f5                      ; 00571a17
        ;   XREF to: 005719f5 (CONDITIONAL_JUMP)  ; LAB_005719f5
    CMP AL,byte ptr [ESP + EBX*0x1 + 0x7] ; 00571a19
    JNZ 0x005719f5                      ; 00571a1d
        ;   XREF to: 005719f5 (CONDITIONAL_JUMP)  ; LAB_005719f5
    CMP ESI,0x1                         ; 00571a1f
    JNZ 0x00571a39                      ; 00571a22
        ;   XREF to: 00571a39 (CONDITIONAL_JUMP)  ; LAB_00571a39
    CALL dword ptr CS:[0x575530]        ; 00571a24
    MOV [0x005c2144],EAX                ; 00571a2b | DAT_005c2144
    XOR EAX,EAX                         ; 00571a30
    ADD ESP,0x14                        ; 00571a32
    POP EBP                             ; 00571a35
    POP ESI                             ; 00571a36
    POP EBX                             ; 00571a37
    RET                                 ; 00571a38
    MOV dword ptr [0x005c2144],ESI      ; 00571a39 | DAT_005c2144
        ;   Label: LAB_00571a39
    XOR EAX,EAX                         ; 00571a3f
        ;   Label: LAB_00571a3f
    ADD ESP,0x14                        ; 00571a41
        ;   Label: LAB_00571a41
    POP EBP                             ; 00571a44
    POP ESI                             ; 00571a45
    POP EBX                             ; 00571a46
    RET                                 ; 00571a47

