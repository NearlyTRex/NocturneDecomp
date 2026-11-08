; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0059d850(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,int *param_5,undefined4 param_6,code *param_7)
;
;
; Called Functions:
;   FUN_0059cbc0
;   FUN_0059d4b0
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d850
        ;   Label: FUN_0059d850
    PUSH ESI                            ; 0059d851
    PUSH EDI                            ; 0059d852
    PUSH EBP                            ; 0059d853
    SUB ESP,0x804                       ; 0059d854
    MOV EBX,dword ptr [ESP + 0x828]     ; 0059d85a
    MOV EBP,dword ptr [ESP + 0x830]     ; 0059d861
    TEST EBP,EBP                        ; 0059d868
    JNZ 0x0059d871                      ; 0059d86a
        ;   XREF to: 0059d871 (CONDITIONAL_JUMP)  ; LAB_0059d871
    MOV EBP,0x59cef0                    ; 0059d86c
    MOV ESI,0x5f8570                    ; 0059d871
        ;   Label: LAB_0059d871
    MOV EDI,ESP                         ; 0059d876
    PUSH EDI                            ; 0059d878
    MOV AL,byte ptr [ESI]               ; 0059d879
        ;   Label: LAB_0059d879
    MOV byte ptr [EDI],AL               ; 0059d87b
    CMP AL,0x0                          ; 0059d87d
    JZ 0x0059d891                       ; 0059d87f
        ;   XREF to: 0059d891 (CONDITIONAL_JUMP)  ; LAB_0059d891
    MOV AL,byte ptr [ESI + 0x1]         ; 0059d881
    ADD ESI,0x2                         ; 0059d884
    MOV byte ptr [EDI + 0x1],AL         ; 0059d887
    ADD EDI,0x2                         ; 0059d88a
    CMP AL,0x0                          ; 0059d88d
    JNZ 0x0059d879                      ; 0059d88f
        ;   XREF to: 0059d879 (CONDITIONAL_JUMP)  ; LAB_0059d879
    POP EDI                             ; 0059d891
        ;   Label: LAB_0059d891
    MOV EAX,ESP                         ; 0059d892
    PUSH EAX                            ; 0059d894
    PUSH 0x0                            ; 0059d895
    CALL EBP                            ; 0059d897
    ADD ESP,0x8                         ; 0059d899
    TEST EAX,EAX                        ; 0059d89c
    JNZ 0x0059d8ab                      ; 0059d89e
        ;   XREF to: 0059d8ab (CONDITIONAL_JUMP)  ; LAB_0059d8ab
    ADD ESP,0x804                       ; 0059d8a0
    POP EBP                             ; 0059d8a6
    POP EDI                             ; 0059d8a7
    POP ESI                             ; 0059d8a8
    POP EBX                             ; 0059d8a9
    RET                                 ; 0059d8aa
    PUSH EBX                            ; 0059d8ab
        ;   Label: LAB_0059d8ab
    MOV EAX,dword ptr [EBX]             ; 0059d8ac
    XOR ESI,ESI                         ; 0059d8ae
    CALL dword ptr [EAX + 0x18]         ; 0059d8b0
    ADD ESP,0x4                         ; 0059d8b3
    MOV EDI,EAX                         ; 0059d8b6
    PUSH EBX                            ; 0059d8b8
        ;   Label: LAB_0059d8b8
    MOV EAX,dword ptr [EBX]             ; 0059d8b9
    CALL dword ptr [EAX + 0x4]          ; 0059d8bb
    ADD ESP,0x4                         ; 0059d8be
    TEST EAX,EAX                        ; 0059d8c1
    JL 0x0059d8c8                       ; 0059d8c3
        ;   XREF to: 0059d8c8 (CONDITIONAL_JUMP)  ; LAB_0059d8c8
    INC ESI                             ; 0059d8c5
    JMP 0x0059d8b8                      ; 0059d8c6
        ;   XREF to: 0059d8b8 (UNCONDITIONAL_JUMP)  ; LAB_0059d8b8
    PUSH 0x0                            ; 0059d8c8
        ;   Label: LAB_0059d8c8
    PUSH EDI                            ; 0059d8ca
    MOV EAX,dword ptr [EBX]             ; 0059d8cb
    PUSH EBX                            ; 0059d8cd
    CALL dword ptr [EAX + 0x14]         ; 0059d8ce
    ADD ESP,0xc                         ; 0059d8d1
    XOR EAX,EAX                         ; 0059d8d4
    PUSH ESI                            ; 0059d8d6
    MOV AX,word ptr [ESP + 0x824]       ; 0059d8d7
    PUSH EAX                            ; 0059d8df
    MOV EDX,dword ptr [ESP + 0x824]     ; 0059d8e0
    PUSH EDX                            ; 0059d8e7
    MOV ECX,dword ptr [ESP + 0x830]     ; 0059d8e8
    PUSH ECX                            ; 0059d8ef
    PUSH 0x5f8584                       ; 0059d8f0
    LEA EAX,[ESP + 0x14]                ; 0059d8f5
    PUSH EAX                            ; 0059d8f9
    CALL FUN_005bfb40                   ; 0059d8fa
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x18                        ; 0059d8ff
    PUSH 0x0                            ; 0059d902
    LEA EDI,[ESP + 0x4]                 ; 0059d904
    SUB ECX,ECX                         ; 0059d908
    DEC ECX                             ; 0059d90a
    XOR EAX,EAX                         ; 0059d90b
    SCASB.REPNE ES:EDI                  ; 0059d90d
    NOT ECX                             ; 0059d90f
    DEC ECX                             ; 0059d911
    PUSH ECX                            ; 0059d912
    LEA EAX,[ESP + 0x8]                 ; 0059d913
    PUSH EAX                            ; 0059d917
    MOV EDI,dword ptr [ESP + 0x824]     ; 0059d918
    PUSH EDI                            ; 0059d91f
    CALL FUN_0059cbc0                   ; 0059d920
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cbc0()
    ADD ESP,0x10                        ; 0059d925
    TEST EAX,EAX                        ; 0059d928
    JZ 0x0059d969                       ; 0059d92a
        ;   XREF to: 0059d969 (CONDITIONAL_JUMP)  ; LAB_0059d969
    TEST ESI,ESI                        ; 0059d92c
        ;   Label: LAB_0059d92c
    JLE 0x0059d99d                      ; 0059d92e
        ;   XREF to: 0059d99d (CONDITIONAL_JUMP)  ; LAB_0059d99d
    PUSH EBX                            ; 0059d930
    MOV EAX,dword ptr [EBX]             ; 0059d931
    CALL dword ptr [EAX + 0x4]          ; 0059d933
    ADD ESP,0x4                         ; 0059d936
    MOV ECX,EAX                         ; 0059d939
    TEST EAX,EAX                        ; 0059d93b
    JL 0x0059d984                       ; 0059d93d
        ;   XREF to: 0059d984 (CONDITIONAL_JUMP)  ; LAB_0059d984
    PUSH 0x0                            ; 0059d93f
    PUSH 0x1                            ; 0059d941
    MOV byte ptr [ESP + 0x808],AL       ; 0059d943
    LEA EAX,[ESP + 0x808]               ; 0059d94a
    PUSH EAX                            ; 0059d951
    MOV EDX,dword ptr [ESP + 0x824]     ; 0059d952
    PUSH EDX                            ; 0059d959
    CALL FUN_0059cbc0                   ; 0059d95a
        ;   XREF to: 0059cbc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059cbc0()
    ADD ESP,0x10                        ; 0059d95f
    TEST EAX,EAX                        ; 0059d962
    JZ 0x0059d969                       ; 0059d964
        ;   XREF to: 0059d969 (CONDITIONAL_JUMP)  ; LAB_0059d969
    DEC ESI                             ; 0059d966
    JMP 0x0059d92c                      ; 0059d967
        ;   XREF to: 0059d92c (UNCONDITIONAL_JUMP)  ; LAB_0059d92c
    PUSH 0x5f85ba                       ; 0059d969
        ;   Label: LAB_0059d969
    PUSH 0x0                            ; 0059d96e
    CALL EBP                            ; 0059d970
    ADD ESP,0x8                         ; 0059d972
    TEST EAX,EAX                        ; 0059d975
    JNZ 0x0059d92c                      ; 0059d977
        ;   XREF to: 0059d92c (CONDITIONAL_JUMP)  ; LAB_0059d92c
    ADD ESP,0x804                       ; 0059d979
    POP EBP                             ; 0059d97f
    POP EDI                             ; 0059d980
    POP ESI                             ; 0059d981
    POP EBX                             ; 0059d982
    RET                                 ; 0059d983
    PUSH 0x5f85da                       ; 0059d984
        ;   Label: LAB_0059d984
    PUSH 0x1                            ; 0059d989
    CALL EBP                            ; 0059d98b
    ADD ESP,0x8                         ; 0059d98d
    XOR EAX,EAX                         ; 0059d990
    ADD ESP,0x804                       ; 0059d992
    POP EBP                             ; 0059d998
    POP EDI                             ; 0059d999
    POP ESI                             ; 0059d99a
    POP EBX                             ; 0059d99b
    RET                                 ; 0059d99c
    PUSH EBP                            ; 0059d99d
        ;   Label: LAB_0059d99d
    PUSH 0x5f85ed                       ; 0059d99e
    MOV EBP,dword ptr [ESP + 0x834]     ; 0059d9a3
    PUSH EBP                            ; 0059d9aa
    MOV EAX,dword ptr [ESP + 0x824]     ; 0059d9ab
    PUSH EAX                            ; 0059d9b2
    CALL FUN_0059d4b0                   ; 0059d9b3
        ;   XREF to: 0059d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d4b0()
    ADD ESP,0x10                        ; 0059d9b8
    ADD ESP,0x804                       ; 0059d9bb
    POP EBP                             ; 0059d9c1
    POP EDI                             ; 0059d9c2
    POP ESI                             ; 0059d9c3
    POP EBX                             ; 0059d9c4
    RET                                 ; 0059d9c5

