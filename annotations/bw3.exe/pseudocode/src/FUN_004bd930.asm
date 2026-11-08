; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bd930(int param_1,char *param_2,undefined4 param_3,float param_4)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0042cd70 at 0042d139
;   FUN_00430d60 at 00430f04
;
; Called Functions:
;   FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bd930
        ;   Label: FUN_004bd930
    PUSH ESI                            ; 004bd931
    PUSH EDI                            ; 004bd932
    PUSH EBP                            ; 004bd933
    SUB ESP,0x4                         ; 004bd934
    MOV EBX,dword ptr [ESP + 0x18]      ; 004bd937
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004bd93b
    FLD float ptr [ESP + 0x24]          ; 004bd93f
    FLDZ                                ; 004bd943
    FCOMPP                              ; 004bd945
    FNSTSW AX                           ; 004bd947
    SAHF                                ; 004bd949
    JNC 0x004bd997                      ; 004bd94a
        ;   XREF to: 004bd997 (CONDITIONAL_JUMP)  ; LAB_004bd997
    TEST EBP,EBP                        ; 004bd94c
    JZ 0x004bd997                       ; 004bd94e
        ;   XREF to: 004bd997 (CONDITIONAL_JUMP)  ; LAB_004bd997
    CMP byte ptr [EBP],0x0              ; 004bd950
    JZ 0x004bd997                       ; 004bd954
        ;   XREF to: 004bd997 (CONDITIONAL_JUMP)  ; LAB_004bd997
    LEA EAX,[EBX + 0x440]               ; 004bd956
    MOV EDX,dword ptr [EBX + 0x43c]     ; 004bd95c
    XOR ESI,ESI                         ; 004bd962
    MOV dword ptr [ESP],EAX             ; 004bd964
    MOV EDI,EAX                         ; 004bd967
    TEST EDX,EDX                        ; 004bd969
    JLE 0x004bd98c                      ; 004bd96b
        ;   XREF to: 004bd98c (CONDITIONAL_JUMP)  ; LAB_004bd98c
    PUSH EBP                            ; 004bd96d
        ;   Label: LAB_004bd96d
    PUSH EDI                            ; 004bd96e
    CALL FUN_005a3260                   ; 004bd96f
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3260()
    ADD ESP,0x8                         ; 004bd974
    TEST EAX,EAX                        ; 004bd977
    JZ 0x004bd99f                       ; 004bd979
        ;   XREF to: 004bd99f (CONDITIONAL_JUMP)  ; LAB_004bd99f
    INC ESI                             ; 004bd97b
    MOV ECX,dword ptr [EBX + 0x43c]     ; 004bd97c
    ADD EDI,0x100                       ; 004bd982
    CMP ESI,ECX                         ; 004bd988
    JL 0x004bd96d                       ; 004bd98a
        ;   XREF to: 004bd96d (CONDITIONAL_JUMP)  ; LAB_004bd96d
    MOV ESI,dword ptr [EBX + 0x43c]     ; 004bd98c
        ;   Label: LAB_004bd98c
    CMP ESI,0x5                         ; 004bd992
    JL 0x004bd9b7                       ; 004bd995
        ;   XREF to: 004bd9b7 (CONDITIONAL_JUMP)  ; LAB_004bd9b7
    ADD ESP,0x4                         ; 004bd997
        ;   Label: LAB_004bd997
    POP EBP                             ; 004bd99a
    POP EDI                             ; 004bd99b
    POP ESI                             ; 004bd99c
    POP EBX                             ; 004bd99d
    RET                                 ; 004bd99e
    MOV EAX,dword ptr [ESP + 0x20]      ; 004bd99f
        ;   Label: LAB_004bd99f
    MOV dword ptr [EBX + ESI*0x4 + 0x940],EAX ; 004bd9a3
    MOV EAX,dword ptr [ESP + 0x24]      ; 004bd9aa
    MOV dword ptr [EBX + ESI*0x4 + 0x954],EAX ; 004bd9ae
    JMP 0x004bd997                      ; 004bd9b5
        ;   XREF to: 004bd997 (UNCONDITIONAL_JUMP)  ; LAB_004bd997
    MOV EDI,ESI                         ; 004bd9b7
        ;   Label: LAB_004bd9b7
    MOV EAX,dword ptr [ESP]             ; 004bd9b9
    SHL EDI,0x8                         ; 004bd9bc
    MOV ESI,EBP                         ; 004bd9bf
    ADD EDI,EAX                         ; 004bd9c1
    PUSH EDI                            ; 004bd9c3
    MOV AL,byte ptr [ESI]               ; 004bd9c4
        ;   Label: LAB_004bd9c4
    MOV byte ptr [EDI],AL               ; 004bd9c6
    CMP AL,0x0                          ; 004bd9c8
    JZ 0x004bd9dc                       ; 004bd9ca
        ;   XREF to: 004bd9dc (CONDITIONAL_JUMP)  ; LAB_004bd9dc
    MOV AL,byte ptr [ESI + 0x1]         ; 004bd9cc
    ADD ESI,0x2                         ; 004bd9cf
    MOV byte ptr [EDI + 0x1],AL         ; 004bd9d2
    ADD EDI,0x2                         ; 004bd9d5
    CMP AL,0x0                          ; 004bd9d8
    JNZ 0x004bd9c4                      ; 004bd9da
        ;   XREF to: 004bd9c4 (CONDITIONAL_JUMP)  ; LAB_004bd9c4
    POP EDI                             ; 004bd9dc
        ;   Label: LAB_004bd9dc
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004bd9dd
    MOV ESI,dword ptr [ESP + 0x20]      ; 004bd9e3
    MOV dword ptr [EBX + EAX*0x4 + 0x940],ESI ; 004bd9e7
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004bd9ee
    MOV ESI,dword ptr [ESP + 0x24]      ; 004bd9f4
    MOV dword ptr [EBX + EAX*0x4 + 0x954],ESI ; 004bd9f8
    INC dword ptr [EBX + 0x43c]         ; 004bd9ff
    ADD ESP,0x4                         ; 004bda05
    POP EBP                             ; 004bda08
    POP EDI                             ; 004bda09
    POP ESI                             ; 004bda0a
    POP EBX                             ; 004bda0b
    RET                                 ; 004bda0c

