; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_2d_c_drawCharacterMasked_FUN_00401910(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_01c6a070
;   undefined4 DAT_01c6a074
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00401910
        ;   Label: engine_2d.c_drawCharacterMasked_FUN_00401910
    PUSH EDI                            ; 00401911
    PUSH EBP                            ; 00401912
    SUB ESP,0x8                         ; 00401913
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00401916
    MOV EDI,dword ptr [ESP + 0x20]      ; 0040191a
    MOV EDX,dword ptr [ESP + 0x18]      ; 0040191e
    SUB EDX,0x20                        ; 00401922
    LEA EAX,[EDX*0x8 + 0x0]             ; 00401925
    ADD EAX,EDX                         ; 0040192c
    SHL EAX,0x4                         ; 0040192e
    ADD EAX,EDX                         ; 00401931
    ADD EAX,0x5e8840                    ; 00401933
    MOV EDX,dword ptr [0x01c6b5a8]      ; 00401938 | DAT_01c6b5a8
    MOVZX ESI,byte ptr [EAX]            ; 0040193e
    CMP EBP,EDX                         ; 00401941
    JL 0x004019db                       ; 00401943
        ;   XREF to: 004019db (CONDITIONAL_JUMP)  ; LAB_004019db
    CMP EDI,dword ptr [0x01c6b5ac]      ; 00401949 | DAT_01c6b5ac
    JL 0x004019db                       ; 0040194f
        ;   XREF to: 004019db (CONDITIONAL_JUMP)  ; LAB_004019db
    MOV EDX,dword ptr [0x01c6b5b0]      ; 00401955 | DAT_01c6b5b0
    INC EDX                             ; 0040195b
    SUB EDX,ESI                         ; 0040195c
    CMP EBP,EDX                         ; 0040195e
    JG 0x004019db                       ; 00401960
        ;   XREF to: 004019db (CONDITIONAL_JUMP)  ; LAB_004019db
    MOV EDX,dword ptr [0x01c6b5b4]      ; 00401966 | DAT_01c6b5b4
    SUB EDX,0xa                         ; 0040196c
    CMP EDI,EDX                         ; 0040196f
    JG 0x004019db                       ; 00401971
        ;   XREF to: 004019db (CONDITIONAL_JUMP)  ; LAB_004019db
    PUSH EBX                            ; 00401973
    MOV EBX,dword ptr [0x005fba20]      ; 00401974 | DAT_005fba20
    SHL EDI,0x2                         ; 0040197a
    INC EAX                             ; 0040197d
    LEA EDX,[EDI + 0x2c]                ; 0040197e
    CMP EBX,0x8                         ; 00401981
    JZ 0x004019df                       ; 00401984
        ;   XREF to: 004019df (CONDITIONAL_JUMP)  ; LAB_004019df
    ADD EBP,EBP                         ; 00401986
    MOV dword ptr [ESP + 0x4],EBP       ; 00401988
    MOV EBP,EDX                         ; 0040198c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0040198e
        ;   Label: LAB_0040198e
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 00401992
    ADD EDX,ECX                         ; 00401998
    XOR ECX,ECX                         ; 0040199a
    TEST ESI,ESI                        ; 0040199c
    JLE 0x004019bd                      ; 0040199e
        ;   XREF to: 004019bd (CONDITIONAL_JUMP)  ; LAB_004019bd
    MOV BL,byte ptr [EAX]               ; 004019a0
        ;   Label: LAB_004019a0
    TEST BL,BL                          ; 004019a2
    JZ 0x00401a14                       ; 004019a4
        ;   XREF to: 00401a14 (CONDITIONAL_JUMP)  ; LAB_00401a14
    MOV BX,word ptr [0x01c6a074]        ; 004019aa | DAT_01c6a074
    MOV word ptr [EDX],BX               ; 004019b1
        ;   Label: LAB_004019b1
    INC EAX                             ; 004019b4
    INC ECX                             ; 004019b5
    ADD EDX,0x2                         ; 004019b6
    CMP ECX,ESI                         ; 004019b9
    JL 0x004019a0                       ; 004019bb
        ;   XREF to: 004019a0 (CONDITIONAL_JUMP)  ; LAB_004019a0
    MOV BX,word ptr [0x01c6a070]        ; 004019bd | DAT_01c6a070
        ;   Label: LAB_004019bd
    ADD EDI,0x4                         ; 004019c4
    MOV word ptr [EDX],BX               ; 004019c7
    CMP EDI,EBP                         ; 004019ca
    JNZ 0x0040198e                      ; 004019cc
        ;   XREF to: 0040198e (CONDITIONAL_JUMP)  ; LAB_0040198e
    LEA ECX,[ESI + 0x1]                 ; 004019ce
        ;   Label: LAB_004019ce
    POP EBX                             ; 004019d1
    MOV EAX,ECX                         ; 004019d2
        ;   Label: LAB_004019d2
    ADD ESP,0x8                         ; 004019d4
    POP EBP                             ; 004019d7
    POP EDI                             ; 004019d8
    POP ESI                             ; 004019d9
    RET                                 ; 004019da
    XOR ECX,ECX                         ; 004019db
        ;   Label: LAB_004019db
    JMP 0x004019d2                      ; 004019dd
        ;   XREF to: 004019d2 (UNCONDITIONAL_JUMP)  ; LAB_004019d2
    MOV BH,0x2                          ; 004019df
        ;   Label: LAB_004019df
    MOV dword ptr [ESP + 0x8],EDX       ; 004019e1
    MOV EDX,dword ptr [EDI + 0x1c5faec] ; 004019e5
        ;   Label: LAB_004019e5
    XOR ECX,ECX                         ; 004019eb
    ADD EDX,EBP                         ; 004019ed
    TEST ESI,ESI                        ; 004019ef
    JLE 0x00401a02                      ; 004019f1
        ;   XREF to: 00401a02 (CONDITIONAL_JUMP)  ; LAB_00401a02
    MOV BL,byte ptr [EAX]               ; 004019f3
        ;   Label: LAB_004019f3
    TEST BL,BL                          ; 004019f5
    JZ 0x00401a10                       ; 004019f7
        ;   XREF to: 00401a10 (CONDITIONAL_JUMP)  ; LAB_00401a10
    MOV byte ptr [EDX],BH               ; 004019f9
    INC EAX                             ; 004019fb
        ;   Label: LAB_004019fb
    INC ECX                             ; 004019fc
    INC EDX                             ; 004019fd
    CMP ECX,ESI                         ; 004019fe
    JL 0x004019f3                       ; 00401a00
        ;   XREF to: 004019f3 (CONDITIONAL_JUMP)  ; LAB_004019f3
    ADD EDI,0x4                         ; 00401a02
        ;   Label: LAB_00401a02
    MOV byte ptr [EDX],0x0              ; 00401a05
    CMP EDI,dword ptr [ESP + 0x8]       ; 00401a08
    JZ 0x004019ce                       ; 00401a0c
        ;   XREF to: 004019ce (CONDITIONAL_JUMP)  ; LAB_004019ce
    JMP 0x004019e5                      ; 00401a0e
        ;   XREF to: 004019e5 (UNCONDITIONAL_JUMP)  ; LAB_004019e5
    MOV byte ptr [EDX],BL               ; 00401a10
        ;   Label: LAB_00401a10
    JMP 0x004019fb                      ; 00401a12
        ;   XREF to: 004019fb (UNCONDITIONAL_JUMP)  ; LAB_004019fb
    MOV BX,word ptr [0x01c6a070]        ; 00401a14 | DAT_01c6a070
        ;   Label: LAB_00401a14
    JMP 0x004019b1                      ; 00401a1b
        ;   XREF to: 004019b1 (UNCONDITIONAL_JUMP)  ; LAB_004019b1

