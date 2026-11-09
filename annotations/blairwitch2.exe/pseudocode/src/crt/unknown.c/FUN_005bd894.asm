; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005bd894(int param_1,int *param_2,undefined4 *param_3)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005bd180 at 005bd394
;
; Referenced Globals:
;   undefined4 DAT_0061f2f0
;
; Called Functions:
;   crt_unknown.c_FUN_005bd160
;   crt_unknown.c_FUN_005bd16c
;   crt_unknown.c_FUN_005bd84c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd894
        ;   Label: crt_unknown.c_FUN_005bd894
    PUSH ESI                            ; 005bd895
    PUSH EDI                            ; 005bd896
    PUSH ES                             ; 005bd897
    PUSH EBP                            ; 005bd898
    SUB ESP,0x2c                        ; 005bd899
    MOV EBX,dword ptr [ESP + 0x44]      ; 005bd89c
    MOV EDI,dword ptr [ESP + 0x48]      ; 005bd8a0
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005bd8a4
    MOV EAX,dword ptr [EBP]             ; 005bd8a8
    CMP byte ptr [EAX],0x5e             ; 005bd8ab
    SETZ DL                             ; 005bd8ae
    AND EDX,0xff                        ; 005bd8b1
    MOV dword ptr [ESP + 0x24],EDX      ; 005bd8b7
    JZ 0x005bd8c1                       ; 005bd8bb
        ;   XREF to: 005bd8c1 (CONDITIONAL_JUMP)  ; LAB_005bd8c1
    INC EAX                             ; 005bd8bd
    MOV dword ptr [EBP],EAX             ; 005bd8be
    MOV EAX,ESP                         ; 005bd8c1
        ;   Label: LAB_005bd8c1
    PUSH EAX                            ; 005bd8c3
    MOV EDX,dword ptr [EBP]             ; 005bd8c4
    PUSH EDX                            ; 005bd8c7
    CALL crt_unknown.c_FUN_005bd84c     ; 005bd8c8
        ;   XREF to: 005bd84c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd84c()
    MOV dword ptr [EBP],EAX             ; 005bd8cd
    MOV CL,byte ptr [EBX + 0x10]        ; 005bd8d0
    ADD ESP,0x8                         ; 005bd8d3
    TEST CL,0x1                         ; 005bd8d6
    JZ 0x005bd90f                       ; 005bd8d9
        ;   XREF to: 005bd90f (CONDITIONAL_JUMP)  ; LAB_005bd90f
    TEST CL,0x4                         ; 005bd8db
    JZ 0x005bd8ec                       ; 005bd8de
        ;   XREF to: 005bd8ec (CONDITIONAL_JUMP)  ; LAB_005bd8ec
    MOV EBP,dword ptr [EDI]             ; 005bd8e0
    ADD EBP,0x8                         ; 005bd8e2
    MOV dword ptr [EDI],EBP             ; 005bd8e5
    LES ESI,[EBP + -0x8]                ; 005bd8e7
    JMP 0x005bd90f                      ; 005bd8ea
        ;   XREF to: 005bd90f (UNCONDITIONAL_JUMP)  ; LAB_005bd90f
    TEST CL,0x8                         ; 005bd8ec
        ;   Label: LAB_005bd8ec
    JZ 0x005bd901                       ; 005bd8ef
        ;   XREF to: 005bd901 (CONDITIONAL_JUMP)  ; LAB_005bd901
    MOV ESI,dword ptr [EDI]             ; 005bd8f1
    ADD ESI,0x4                         ; 005bd8f3
    MOV AX,DS                           ; 005bd8f6
    MOV dword ptr [EDI],ESI             ; 005bd8f8
    MOV ES,AX                           ; 005bd8fa
    MOV ESI,dword ptr [ESI + -0x4]      ; 005bd8fc
    JMP 0x005bd90f                      ; 005bd8ff
        ;   XREF to: 005bd90f (UNCONDITIONAL_JUMP)  ; LAB_005bd90f
    MOV ECX,dword ptr [EDI]             ; 005bd901
        ;   Label: LAB_005bd901
    ADD ECX,0x4                         ; 005bd903
    MOV AX,DS                           ; 005bd906
    MOV dword ptr [EDI],ECX             ; 005bd908
    MOV ES,AX                           ; 005bd90a
    MOV ESI,dword ptr [ECX + -0x4]      ; 005bd90c
    MOV EDI,dword ptr [EBX + 0xc]       ; 005bd90f
        ;   Label: LAB_005bd90f
    XOR EBP,EBP                         ; 005bd912
    TEST EDI,EDI                        ; 005bd914
    JBE 0x005bd98e                      ; 005bd916
        ;   XREF to: 005bd98e (CONDITIONAL_JUMP)  ; LAB_005bd98e
    PUSH EBX                            ; 005bd91c
        ;   Label: LAB_005bd91c
    CALL crt_unknown.c_FUN_005bd160     ; 005bd91d
        ;   XREF to: 005bd160 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd160()
    ADD ESP,0x4                         ; 005bd922
    MOV DL,byte ptr [EBX + 0x10]        ; 005bd925
    MOV dword ptr [ESP + 0x28],EAX      ; 005bd928
    TEST DL,0x2                         ; 005bd92c
    JNZ 0x005bd98e                      ; 005bd92f
        ;   XREF to: 005bd98e (CONDITIONAL_JUMP)  ; LAB_005bd98e
    MOV EDX,EAX                         ; 005bd931
    SAR EDX,0x3                         ; 005bd933
    MOV DL,byte ptr [ESP + EDX*0x1]     ; 005bd936
    AND EDX,0xff                        ; 005bd939
    MOV dword ptr [ESP + 0x20],EDX      ; 005bd93f
    MOV EDX,EAX                         ; 005bd943
    AND EDX,0x7                         ; 005bd945
    MOV DL,byte ptr [EDX + 0x61f2f0]    ; 005bd948 | DAT_0061f2f0
    MOV ECX,dword ptr [ESP + 0x20]      ; 005bd94e
    AND EDX,0xff                        ; 005bd952
    TEST EDX,ECX                        ; 005bd958
    SETZ DL                             ; 005bd95a
    MOV ECX,dword ptr [ESP + 0x24]      ; 005bd95d
    AND EDX,0xff                        ; 005bd961
    CMP EDX,ECX                         ; 005bd967
    JZ 0x005bd977                       ; 005bd969
        ;   XREF to: 005bd977 (CONDITIONAL_JUMP)  ; LAB_005bd977
    PUSH EBX                            ; 005bd96b
    PUSH EAX                            ; 005bd96c
    CALL crt_unknown.c_FUN_005bd16c     ; 005bd96d
        ;   XREF to: 005bd16c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bd16c()
    ADD ESP,0x8                         ; 005bd972
    JMP 0x005bd98e                      ; 005bd975
        ;   XREF to: 005bd98e (UNCONDITIONAL_JUMP)  ; LAB_005bd98e
    INC EBP                             ; 005bd977
        ;   Label: LAB_005bd977
    MOV DH,byte ptr [EBX + 0x10]        ; 005bd978
    DEC EDI                             ; 005bd97b
    TEST DH,0x1                         ; 005bd97c
    JZ 0x005bd98a                       ; 005bd97f
        ;   XREF to: 005bd98a (CONDITIONAL_JUMP)  ; LAB_005bd98a
    INC ESI                             ; 005bd981
    MOV AL,byte ptr [ESP + 0x28]        ; 005bd982
    MOV byte ptr ES:[ESI + -0x1],AL     ; 005bd986
    TEST EDI,EDI                        ; 005bd98a
        ;   Label: LAB_005bd98a
    JA 0x005bd91c                       ; 005bd98c
        ;   XREF to: 005bd91c (CONDITIONAL_JUMP)  ; LAB_005bd91c
    TEST byte ptr [EBX + 0x10],0x1      ; 005bd98e
        ;   Label: LAB_005bd98e
    JZ 0x005bd99c                       ; 005bd992
        ;   XREF to: 005bd99c (CONDITIONAL_JUMP)  ; LAB_005bd99c
    TEST EBP,EBP                        ; 005bd994
    JLE 0x005bd99c                      ; 005bd996
        ;   XREF to: 005bd99c (CONDITIONAL_JUMP)  ; LAB_005bd99c
    MOV byte ptr ES:[ESI],0x0           ; 005bd998
    MOV EAX,EBP                         ; 005bd99c
        ;   Label: LAB_005bd99c
    ADD ESP,0x2c                        ; 005bd99e
    POP EBP                             ; 005bd9a1
    POP ES                              ; 005bd9a2
    POP EDI                             ; 005bd9a3
    POP ESI                             ; 005bd9a4
    POP EBX                             ; 005bd9a5
    RET                                 ; 005bd9a6

