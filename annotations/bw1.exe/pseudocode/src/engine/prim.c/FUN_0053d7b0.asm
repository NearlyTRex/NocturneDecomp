; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_prim_c_FUN_0053d7b0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01e7d5b8
;   undefined4 DAT_01e7dabc
;   undefined4 DAT_01e7dac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d7b0
        ;   Label: engine_prim.c_FUN_0053d7b0
    PUSH ESI                            ; 0053d7b1
    PUSH EDI                            ; 0053d7b2
    PUSH EBP                            ; 0053d7b3
    SUB ESP,0x4                         ; 0053d7b4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0053d7b7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0053d7bb
    MOV EDI,dword ptr [EBP + 0x14]      ; 0053d7bf
    MOV EBX,dword ptr [ESI + 0x14]      ; 0053d7c2
    SAR EDI,0x10                        ; 0053d7c5
    SAR EBX,0x10                        ; 0053d7c8
    CMP EBX,EDI                         ; 0053d7cb
    JZ 0x0053d954                       ; 0053d7cd
        ;   XREF to: 0053d954 (CONDITIONAL_JUMP)  ; LAB_0053d954
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053d7d3
    CMP EDX,dword ptr [ESI + 0x14]      ; 0053d7d6
    JGE 0x0053d7e7                      ; 0053d7d9
        ;   XREF to: 0053d7e7 (CONDITIONAL_JUMP)  ; LAB_0053d7e7
    MOV EAX,ESI                         ; 0053d7db
    MOV ESI,EBP                         ; 0053d7dd
    MOV EBP,EAX                         ; 0053d7df
    MOV EAX,EBX                         ; 0053d7e1
    MOV EBX,EDI                         ; 0053d7e3
    MOV EDI,EAX                         ; 0053d7e5
    MOV EAX,[0x01e7d5b8]                ; 0053d7e7 | DAT_01e7d5b8
        ;   Label: LAB_0053d7e7
    LEA ECX,[EAX*0x4 + 0x0]             ; 0053d7ec
    ADD ECX,EAX                         ; 0053d7f3
    SHL ECX,0x4                         ; 0053d7f5
    ADD ECX,0x1e7d5bc                   ; 0053d7f8
    MOV dword ptr [ECX],EBX             ; 0053d7fe
    MOV EAX,[0x01e7dabc]                ; 0053d800 | DAT_01e7dabc
    MOV dword ptr [ECX + 0x4],EDI       ; 0053d805
    CMP EBX,EAX                         ; 0053d808
    JGE 0x0053d812                      ; 0053d80a
        ;   XREF to: 0053d812 (CONDITIONAL_JUMP)  ; LAB_0053d812
    MOV dword ptr [0x01e7dabc],EBX      ; 0053d80c | DAT_01e7dabc
    CMP EDI,dword ptr [0x01e7dac0]      ; 0053d812 | DAT_01e7dac0
        ;   Label: LAB_0053d812
    JLE 0x0053d820                      ; 0053d818
        ;   XREF to: 0053d820 (CONDITIONAL_JUMP)  ; LAB_0053d820
    MOV dword ptr [0x01e7dac0],EDI      ; 0053d81a | DAT_01e7dac0
    MOV EDI,dword ptr [ESI + 0x14]      ; 0053d820
        ;   Label: LAB_0053d820
    MOV EBX,dword ptr [EBP + 0x14]      ; 0053d823
    SUB EBX,EDI                         ; 0053d826
    CMP EBX,0x10000                     ; 0053d828
    JNC 0x0053d95c                      ; 0053d82e
        ;   XREF to: 0053d95c (CONDITIONAL_JUMP)  ; LAB_0053d95c
    XOR EBX,EBX                         ; 0053d834
    MOV EAX,dword ptr [EBP + 0x10]      ; 0053d836
        ;   Label: LAB_0053d836
    MOV EDX,dword ptr [ESI + 0x10]      ; 0053d839
    MOV EDI,dword ptr [ESI + 0x14]      ; 0053d83c
    SUB EAX,EDX                         ; 0053d83f
    AND EDI,0xffff                      ; 0053d841
    MOV EDX,EAX                         ; 0053d847
    MOV EAX,EBX                         ; 0053d849
    XOR DI,0xffff                       ; 0053d84b
    IMUL EDX                            ; 0053d84f
    SHRD EAX,EDX,0x10                   ; 0053d851
    MOV EDX,EAX                         ; 0053d855
    MOV dword ptr [ECX + 0xc],EAX       ; 0053d857
    MOV EAX,EDI                         ; 0053d85a
    IMUL EDX                            ; 0053d85c
    SHRD EAX,EDX,0x10                   ; 0053d85e
    MOV dword ptr [ESP],EAX             ; 0053d862
    MOV EDX,dword ptr [ESP]             ; 0053d865
    MOV EAX,dword ptr [ESI + 0x10]      ; 0053d868
    ADD EAX,EDX                         ; 0053d86b
    MOV dword ptr [ECX + 0x8],EAX       ; 0053d86d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0053d870
    MOV EDX,dword ptr [ESI + 0x18]      ; 0053d873
    SUB EAX,EDX                         ; 0053d876
    MOV EDX,EAX                         ; 0053d878
    MOV EAX,EBX                         ; 0053d87a
    IMUL EDX                            ; 0053d87c
    SHRD EAX,EDX,0x10                   ; 0053d87e
    MOV EDX,EAX                         ; 0053d882
    MOV dword ptr [ECX + 0x1c],EAX      ; 0053d884
    MOV EAX,EDI                         ; 0053d887
    IMUL EDX                            ; 0053d889
    SHRD EAX,EDX,0x10                   ; 0053d88b
    MOV dword ptr [ESP],EAX             ; 0053d88f
    MOV EDX,dword ptr [ESP]             ; 0053d892
    MOV EAX,dword ptr [ESI + 0x18]      ; 0053d895
    ADD EAX,EDX                         ; 0053d898
    MOV dword ptr [ECX + 0x18],EAX      ; 0053d89a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053d89d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0053d8a0
    SUB EAX,EDX                         ; 0053d8a3
    MOV EDX,EAX                         ; 0053d8a5
    MOV EAX,EBX                         ; 0053d8a7
    IMUL EDX                            ; 0053d8a9
    SHRD EAX,EDX,0x10                   ; 0053d8ab
    MOV EDX,EAX                         ; 0053d8af
    MOV dword ptr [ECX + 0x24],EAX      ; 0053d8b1
    MOV EAX,EDI                         ; 0053d8b4
    IMUL EDX                            ; 0053d8b6
    SHRD EAX,EDX,0x10                   ; 0053d8b8
    MOV dword ptr [ESP],EAX             ; 0053d8bc
    MOV EDX,dword ptr [ESP]             ; 0053d8bf
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0053d8c2
    ADD EAX,EDX                         ; 0053d8c5
    MOV dword ptr [ECX + 0x20],EAX      ; 0053d8c7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0053d8ca
    MOV EDX,dword ptr [ESI + 0x20]      ; 0053d8cd
    SUB EAX,EDX                         ; 0053d8d0
    MOV EDX,EAX                         ; 0053d8d2
    MOV EAX,EBX                         ; 0053d8d4
    IMUL EDX                            ; 0053d8d6
    SHRD EAX,EDX,0x10                   ; 0053d8d8
    MOV EDX,EAX                         ; 0053d8dc
    MOV dword ptr [ECX + 0x14],EAX      ; 0053d8de
    MOV EAX,EDI                         ; 0053d8e1
    IMUL EDX                            ; 0053d8e3
    SHRD EAX,EDX,0x10                   ; 0053d8e5
    MOV dword ptr [ESP],EAX             ; 0053d8e9
    MOV EDX,dword ptr [ESP]             ; 0053d8ec
    MOV EAX,dword ptr [ESI + 0x20]      ; 0053d8ef
    ADD EAX,EDX                         ; 0053d8f2
    MOV dword ptr [ECX + 0x10],EAX      ; 0053d8f4
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0053d8f7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0053d8fa
    SUB EAX,EDX                         ; 0053d8fd
    MOV EDX,EAX                         ; 0053d8ff
    MOV EAX,EBX                         ; 0053d901
    IMUL EDX                            ; 0053d903
    SHRD EAX,EDX,0x10                   ; 0053d905
    MOV EDX,EAX                         ; 0053d909
    MOV dword ptr [ECX + 0x34],EAX      ; 0053d90b
    MOV EAX,EDI                         ; 0053d90e
    IMUL EDX                            ; 0053d910
    SHRD EAX,EDX,0x10                   ; 0053d912
    MOV dword ptr [ESP],EAX             ; 0053d916
    MOV EDX,dword ptr [ESP]             ; 0053d919
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0053d91c
    ADD EAX,EDX                         ; 0053d91f
    MOV dword ptr [ECX + 0x30],EAX      ; 0053d921
    MOV EDX,dword ptr [EBP + 0x8]       ; 0053d924
    SUB EDX,dword ptr [ESI + 0x8]       ; 0053d927
    MOV EAX,EBX                         ; 0053d92a
    IMUL EDX                            ; 0053d92c
    SHRD EAX,EDX,0x10                   ; 0053d92e
    MOV EDX,EAX                         ; 0053d932
    MOV dword ptr [ECX + 0x2c],EAX      ; 0053d934
    MOV EAX,EDI                         ; 0053d937
    IMUL EDX                            ; 0053d939
    SHRD EAX,EDX,0x10                   ; 0053d93b
    MOV EDX,dword ptr [0x01e7d5b8]      ; 0053d93f | DAT_01e7d5b8
    MOV EBX,dword ptr [ESI + 0x8]       ; 0053d945
    INC EDX                             ; 0053d948
    ADD EBX,EAX                         ; 0053d949
    MOV dword ptr [0x01e7d5b8],EDX      ; 0053d94b | DAT_01e7d5b8
    MOV dword ptr [ECX + 0x28],EBX      ; 0053d951
    ADD ESP,0x4                         ; 0053d954
        ;   Label: LAB_0053d954
    POP EBP                             ; 0053d957
    POP EDI                             ; 0053d958
    POP ESI                             ; 0053d959
    POP EBX                             ; 0053d95a
    RET                                 ; 0053d95b
    MOV EAX,0xffffffff                  ; 0053d95c
        ;   Label: LAB_0053d95c
    XOR EDX,EDX                         ; 0053d961
    DIV EBX                             ; 0053d963
    MOV EBX,EAX                         ; 0053d965
    JMP 0x0053d836                      ; 0053d967
        ;   XREF to: 0053d836 (UNCONDITIONAL_JUMP)  ; LAB_0053d836

