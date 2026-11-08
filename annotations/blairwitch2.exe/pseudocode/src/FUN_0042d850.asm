; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042d850(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e54
;
; Called Functions:
;   FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d850
        ;   Label: FUN_0042d850
    PUSH ESI                            ; 0042d851
    PUSH EDI                            ; 0042d852
    PUSH EBP                            ; 0042d853
    SUB ESP,0x30                        ; 0042d854
    MOV EBP,dword ptr [ESP + 0x48]      ; 0042d857
    CALL FUN_0042c410                   ; 0042d85b
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c410()
    MOV EDX,dword ptr [0x006141c0]      ; 0042d860 | DAT_006141c0
    MOV EDI,EAX                         ; 0042d866
    CMP EDX,0x8                         ; 0042d868
    JNZ 0x0042d931                      ; 0042d86b
        ;   XREF to: 0042d931 (CONDITIONAL_JUMP)  ; LAB_0042d931
    MOV EAX,[0x01c35e4c]                ; 0042d871 | DAT_01c35e4c
    MOV EBX,dword ptr [0x01c35e54]      ; 0042d876 | DAT_01c35e54
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d87c
    CMP EAX,EBX                         ; 0042d880
    JG 0x0042d906                       ; 0042d882
        ;   XREF to: 0042d906 (CONDITIONAL_JUMP)  ; LAB_0042d906
    MOV EDX,EAX                         ; 0042d888
    SHL EAX,0x5                         ; 0042d88a
    ADD EAX,EDX                         ; 0042d88d
    SHL EAX,0x2                         ; 0042d88f
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d892
    MOV EAX,EDX                         ; 0042d896
    SHL EAX,0x2                         ; 0042d898
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d89b
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042d89f
        ;   Label: LAB_0042d89f
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0042d8a3
    MOV ECX,dword ptr [0x006141b8]      ; 0042d8a9 | DAT_006141b8
    MOV dword ptr [ESP + 0x18],EAX      ; 0042d8af
    MOV EAX,dword ptr [ESP + 0x14]      ; 0042d8b3
    IMUL EAX,ECX                        ; 0042d8b7
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d8ba
    XOR EBX,EBX                         ; 0042d8be
    XOR ESI,ESI                         ; 0042d8c0
    ADD EDX,EAX                         ; 0042d8c2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042d8c4
    MOV dword ptr [ESP + 0x24],EDX      ; 0042d8c8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0042d8cc
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042d8d0
        ;   Label: LAB_0042d8d0
    ADD EAX,EBP                         ; 0042d8d4
    CMP EBX,dword ptr [EAX]             ; 0042d8d6
    JL 0x0042d90e                       ; 0042d8d8
        ;   XREF to: 0042d90e (CONDITIONAL_JUMP)  ; LAB_0042d90e
    MOV ECX,dword ptr [ESP + 0xc]       ; 0042d8da
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042d8de
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042d8e2
    MOV EDX,dword ptr [0x01c35e54]      ; 0042d8e6 | DAT_01c35e54
    ADD ECX,0x84                        ; 0042d8ec
    ADD EBX,0x4                         ; 0042d8f2
    INC ESI                             ; 0042d8f5
    MOV dword ptr [ESP + 0xc],ECX       ; 0042d8f6
    MOV dword ptr [ESP + 0x8],EBX       ; 0042d8fa
    MOV dword ptr [ESP + 0x14],ESI      ; 0042d8fe
    CMP ESI,EDX                         ; 0042d902
    JLE 0x0042d89f                      ; 0042d904
        ;   XREF to: 0042d89f (CONDITIONAL_JUMP)  ; LAB_0042d89f
    ADD ESP,0x30                        ; 0042d906
        ;   Label: LAB_0042d906
    POP EBP                             ; 0042d909
    POP EDI                             ; 0042d90a
    POP ESI                             ; 0042d90b
    POP EBX                             ; 0042d90c
    RET                                 ; 0042d90d
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x44] ; 0042d90e
        ;   Label: LAB_0042d90e
    MOV EDX,dword ptr [ESP + 0x24]      ; 0042d912
    PUSH ECX                            ; 0042d916
    MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4] ; 0042d917
    ADD EDX,ECX                         ; 0042d91b
    PUSH EDX                            ; 0042d91d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042d91e
    LEA EAX,[EDX + ECX*0x1]             ; 0042d922
    PUSH EAX                            ; 0042d925
    ADD ESI,0x4                         ; 0042d926
    INC EBX                             ; 0042d929
    CALL EDI                            ; 0042d92a
    ADD ESP,0xc                         ; 0042d92c
    JMP 0x0042d8d0                      ; 0042d92f
        ;   XREF to: 0042d8d0 (UNCONDITIONAL_JUMP)  ; LAB_0042d8d0
    MOV EAX,[0x01c35e4c]                ; 0042d931 | DAT_01c35e4c
        ;   Label: LAB_0042d931
    MOV ECX,dword ptr [0x01c35e54]      ; 0042d936 | DAT_01c35e54
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d93c
    CMP EAX,ECX                         ; 0042d940
    JG 0x0042d906                       ; 0042d942
        ;   XREF to: 0042d906 (CONDITIONAL_JUMP)  ; LAB_0042d906
    MOV EDX,EAX                         ; 0042d944
    SHL EAX,0x5                         ; 0042d946
    ADD EAX,EDX                         ; 0042d949
    SHL EAX,0x2                         ; 0042d94b
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d94e
    MOV EAX,EDX                         ; 0042d952
    SHL EAX,0x2                         ; 0042d954
    MOV dword ptr [ESP],EAX             ; 0042d957
    MOV EAX,dword ptr [ESP]             ; 0042d95a
        ;   Label: LAB_0042d95a
    MOV EAX,dword ptr [EAX + 0x1c2a38c] ; 0042d95d
    MOV EBX,dword ptr [0x006141b8]      ; 0042d963 | DAT_006141b8
    MOV dword ptr [ESP + 0x28],EAX      ; 0042d969
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042d96d
    IMUL EAX,EBX                        ; 0042d971
    MOV EDX,dword ptr [ESP + 0x44]      ; 0042d974
    XOR ESI,ESI                         ; 0042d978
    ADD EDX,EAX                         ; 0042d97a
    XOR EBX,EBX                         ; 0042d97c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042d97e
    MOV dword ptr [ESP + 0x2c],EDX      ; 0042d982
    MOV dword ptr [ESP + 0x20],EAX      ; 0042d986
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042d98a
        ;   Label: LAB_0042d98a
    ADD EAX,EBP                         ; 0042d98e
    CMP ESI,dword ptr [EAX]             ; 0042d990
    JL 0x0042d9c4                       ; 0042d992
        ;   XREF to: 0042d9c4 (CONDITIONAL_JUMP)  ; LAB_0042d9c4
    MOV ESI,dword ptr [ESP + 0x4]       ; 0042d994
    MOV EAX,dword ptr [ESP]             ; 0042d998
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042d99b
    MOV ECX,dword ptr [0x01c35e54]      ; 0042d99f | DAT_01c35e54
    ADD ESI,0x84                        ; 0042d9a5
    ADD EAX,0x4                         ; 0042d9ab
    INC EDX                             ; 0042d9ae
    MOV dword ptr [ESP + 0x4],ESI       ; 0042d9af
    MOV dword ptr [ESP],EAX             ; 0042d9b3
    MOV dword ptr [ESP + 0x10],EDX      ; 0042d9b6
    CMP EDX,ECX                         ; 0042d9ba
    JG 0x0042d906                       ; 0042d9bc
        ;   XREF to: 0042d906 (CONDITIONAL_JUMP)  ; LAB_0042d906
    JMP 0x0042d95a                      ; 0042d9c2
        ;   XREF to: 0042d95a (UNCONDITIONAL_JUMP)  ; LAB_0042d95a
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x44] ; 0042d9c4
        ;   Label: LAB_0042d9c4
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0042d9c8
    PUSH ECX                            ; 0042d9cc
    MOV ECX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0042d9cd
    ADD EDX,ECX                         ; 0042d9d1
    PUSH EDX                            ; 0042d9d3
    LEA EAX,[ECX + ECX*0x1]             ; 0042d9d4
    ADD EAX,dword ptr [ESP + 0x30]      ; 0042d9d7
    PUSH EAX                            ; 0042d9db
    ADD EBX,0x4                         ; 0042d9dc
    INC ESI                             ; 0042d9df
    CALL EDI                            ; 0042d9e0
    ADD ESP,0xc                         ; 0042d9e2
    JMP 0x0042d98a                      ; 0042d9e5
        ;   XREF to: 0042d98a (UNCONDITIONAL_JUMP)  ; LAB_0042d98a

