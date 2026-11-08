; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c4850(UINT param_1)
;
;
; XREF[1]:
;   FUN_005c23b4 at 005c23b6
;
; Referenced Globals:
;   undefined4 DAT_0061f758
;   undefined4 DAT_026807f0
;
; Called Functions:
;   FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4850
        ;   Label: FUN_005c4850
    PUSH ESI                            ; 005c4851
    PUSH EBP                            ; 005c4852
    SUB ESP,0x14                        ; 005c4853
    MOV ESI,dword ptr [ESP + 0x24]      ; 005c4856
    CMP ESI,-0x1                        ; 005c485a
    JNZ 0x005c486d                      ; 005c485d
        ;   XREF to: 005c486d (CONDITIONAL_JUMP)  ; LAB_005c486d
    CALL dword ptr CS:[0x5c855c]        ; 005c485f
    MOV ESI,EAX                         ; 005c4866
    JMP 0x005c490b                      ; 005c4868
        ;   XREF to: 005c490b (UNCONDITIONAL_JUMP)  ; LAB_005c490b
    CMP ESI,-0x2                        ; 005c486d
        ;   Label: LAB_005c486d
    JNZ 0x005c4880                      ; 005c4870
        ;   XREF to: 005c4880 (CONDITIONAL_JUMP)  ; LAB_005c4880
    CALL dword ptr CS:[0x5c85b4]        ; 005c4872
    MOV ESI,EAX                         ; 005c4879
    JMP 0x005c490b                      ; 005c487b
        ;   XREF to: 005c490b (UNCONDITIONAL_JUMP)  ; LAB_005c490b
    CMP ESI,-0x3                        ; 005c4880
        ;   Label: LAB_005c4880
    JNZ 0x005c48ae                      ; 005c4883
        ;   XREF to: 005c48ae (CONDITIONAL_JUMP)  ; LAB_005c48ae
    PUSH 0x101                          ; 005c4885
    PUSH 0x0                            ; 005c488a
    PUSH 0x2680800                      ; 005c488c
    CALL FUN_005b77c0                   ; 005c4891
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005c4896
    XOR EDX,EDX                         ; 005c4899
    XOR EAX,EAX                         ; 005c489b
    MOV dword ptr [0x026807f0],EDX      ; 005c489d | DAT_026807f0
    MOV dword ptr [0x0061f758],EDX      ; 005c48a3 | DAT_0061f758
    JMP 0x005c49b1                      ; 005c48a9
        ;   XREF to: 005c49b1 (UNCONDITIONAL_JUMP)  ; LAB_005c49b1
    CMP ESI,-0x4                        ; 005c48ae
        ;   Label: LAB_005c48ae
    JNZ 0x005c490b                      ; 005c48b1
        ;   XREF to: 005c490b (CONDITIONAL_JUMP)  ; LAB_005c490b
    PUSH 0x101                          ; 005c48b3
    PUSH 0x0                            ; 005c48b8
    PUSH 0x2680800                      ; 005c48ba
    CALL FUN_005b77c0                   ; 005c48bf
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV EAX,0x81                        ; 005c48c4
    MOV DL,0x1                          ; 005c48c9
    ADD ESP,0xc                         ; 005c48cb
    INC EAX                             ; 005c48ce
        ;   Label: LAB_005c48ce
    MOV byte ptr [EAX + 0x2680800],DL   ; 005c48cf
    CMP EAX,0x9f                        ; 005c48d5
    JLE 0x005c48ce                      ; 005c48da
        ;   XREF to: 005c48ce (CONDITIONAL_JUMP)  ; LAB_005c48ce
    MOV EAX,0xe0                        ; 005c48dc
    MOV DH,0x1                          ; 005c48e1
    INC EAX                             ; 005c48e3
        ;   Label: LAB_005c48e3
    MOV byte ptr [EAX + 0x2680800],DH   ; 005c48e4
    CMP EAX,0xfc                        ; 005c48ea
    JLE 0x005c48e3                      ; 005c48ef
        ;   XREF to: 005c48e3 (CONDITIONAL_JUMP)  ; LAB_005c48e3
    MOV EBP,0x1                         ; 005c48f1
    MOV EAX,0x3a4                       ; 005c48f6
    MOV dword ptr [0x026807f0],EBP      ; 005c48fb | DAT_026807f0
    MOV [0x0061f758],EAX                ; 005c4901 | DAT_0061f758
    JMP 0x005c49af                      ; 005c4906
        ;   XREF to: 005c49af (UNCONDITIONAL_JUMP)  ; LAB_005c49af
    TEST ESI,ESI                        ; 005c490b
        ;   Label: LAB_005c490b
    JNZ 0x005c4914                      ; 005c490d
        ;   XREF to: 005c4914 (CONDITIONAL_JUMP)  ; LAB_005c4914
    MOV ESI,0x1                         ; 005c490f
    MOV EAX,ESP                         ; 005c4914
        ;   Label: LAB_005c4914
    PUSH EAX                            ; 005c4916
    PUSH ESI                            ; 005c4917
    CALL dword ptr CS:[0x5c8560]        ; 005c4918
    TEST EAX,EAX                        ; 005c491f
    JNZ 0x005c492f                      ; 005c4921
        ;   XREF to: 005c492f (CONDITIONAL_JUMP)  ; LAB_005c492f
    MOV EAX,0x1                         ; 005c4923
    ADD ESP,0x14                        ; 005c4928
    POP EBP                             ; 005c492b
    POP ESI                             ; 005c492c
    POP EBX                             ; 005c492d
    RET                                 ; 005c492e
    PUSH 0x101                          ; 005c492f
        ;   Label: LAB_005c492f
    PUSH 0x0                            ; 005c4934
    PUSH 0x2680800                      ; 005c4936
    CALL FUN_005b77c0                   ; 005c493b
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 005c4940
    XOR ECX,ECX                         ; 005c4943
    MOV AH,byte ptr [ESP + 0x6]         ; 005c4945
    MOV dword ptr [0x026807f0],ECX      ; 005c4949 | DAT_026807f0
    TEST AH,AH                          ; 005c494f
    JZ 0x005c495d                       ; 005c4951
        ;   XREF to: 005c495d (CONDITIONAL_JUMP)  ; LAB_005c495d
    MOV dword ptr [0x026807f0],0x1      ; 005c4953 | DAT_026807f0
    XOR EBX,EBX                         ; 005c495d
        ;   Label: LAB_005c495d
    MOV CL,0x1                          ; 005c495f
    XOR CH,CH                           ; 005c4961
    JMP 0x005c4981                      ; 005c4963
        ;   XREF to: 005c4981 (UNCONDITIONAL_JUMP)  ; LAB_005c4981
    XOR EAX,EAX                         ; 005c4965
        ;   Label: LAB_005c4965
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005c4967
    JMP 0x005c4974                      ; 005c496b
        ;   XREF to: 005c4974 (UNCONDITIONAL_JUMP)  ; LAB_005c4974
    INC EAX                             ; 005c496d
        ;   Label: LAB_005c496d
    MOV byte ptr [EAX + 0x2680800],CL   ; 005c496e
    XOR EDX,EDX                         ; 005c4974
        ;   Label: LAB_005c4974
    MOV DL,byte ptr [ESP + EBX*0x1 + 0x7] ; 005c4976
    CMP EAX,EDX                         ; 005c497a
    JLE 0x005c496d                      ; 005c497c
        ;   XREF to: 005c496d (CONDITIONAL_JUMP)  ; LAB_005c496d
    ADD EBX,0x2                         ; 005c497e
    MOV AL,byte ptr [ESP + EBX*0x1 + 0x6] ; 005c4981
        ;   Label: LAB_005c4981
    CMP CH,AL                           ; 005c4985
    JNZ 0x005c4965                      ; 005c4987
        ;   XREF to: 005c4965 (CONDITIONAL_JUMP)  ; LAB_005c4965
    CMP AL,byte ptr [ESP + EBX*0x1 + 0x7] ; 005c4989
    JNZ 0x005c4965                      ; 005c498d
        ;   XREF to: 005c4965 (CONDITIONAL_JUMP)  ; LAB_005c4965
    CMP ESI,0x1                         ; 005c498f
    JNZ 0x005c49a9                      ; 005c4992
        ;   XREF to: 005c49a9 (CONDITIONAL_JUMP)  ; LAB_005c49a9
    CALL dword ptr CS:[0x5c85b4]        ; 005c4994
    MOV [0x0061f758],EAX                ; 005c499b | DAT_0061f758
    XOR EAX,EAX                         ; 005c49a0
    ADD ESP,0x14                        ; 005c49a2
    POP EBP                             ; 005c49a5
    POP ESI                             ; 005c49a6
    POP EBX                             ; 005c49a7
    RET                                 ; 005c49a8
    MOV dword ptr [0x0061f758],ESI      ; 005c49a9 | DAT_0061f758
        ;   Label: LAB_005c49a9
    XOR EAX,EAX                         ; 005c49af
        ;   Label: LAB_005c49af
    ADD ESP,0x14                        ; 005c49b1
        ;   Label: LAB_005c49b1
    POP EBP                             ; 005c49b4
    POP ESI                             ; 005c49b5
    POP EBX                             ; 005c49b6
    RET                                 ; 005c49b7

