; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004177e0(int param_1,char *param_2)
;
;
; XREF[1]:
;   FUN_00543490 at 00543880
;
; Referenced Globals:
;   TerminatedCString s_core_bodypart_cpp_005cbf84
;   TerminatedCString s_Too_many_body_part_textu_005cbf99
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_005b77c0
;   FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004177e0
        ;   Label: FUN_004177e0
    PUSH ESI                            ; 004177e1
    PUSH EDI                            ; 004177e2
    PUSH EBP                            ; 004177e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004177e4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004177e8
    MOV EDX,dword ptr [EBX + 0x2e8]     ; 004177ec
    XOR ESI,ESI                         ; 004177f2
    TEST EDX,EDX                        ; 004177f4
    JLE 0x0041781e                      ; 004177f6
        ;   XREF to: 0041781e (CONDITIONAL_JUMP)  ; LAB_0041781e
    LEA EDI,[EBX + 0x2f4]               ; 004177f8
    PUSH EBP                            ; 004177fe
        ;   Label: LAB_004177fe
    PUSH EDI                            ; 004177ff
    CALL FUN_005b8130                   ; 00417800
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 00417805
    TEST EAX,EAX                        ; 00417808
    JZ 0x004178b7                       ; 0041780a
        ;   XREF to: 004178b7 (CONDITIONAL_JUMP)  ; LAB_004178b7
    INC ESI                             ; 00417810
    MOV ECX,dword ptr [EBX + 0x2e8]     ; 00417811
    ADD EDI,0x18                        ; 00417817
    CMP ESI,ECX                         ; 0041781a
    JL 0x004177fe                       ; 0041781c
        ;   XREF to: 004177fe (CONDITIONAL_JUMP)  ; LAB_004177fe
    CMP dword ptr [EBX + 0x2e8],0xa     ; 0041781e
        ;   Label: LAB_0041781e
    JL 0x00417849                       ; 00417825
        ;   XREF to: 00417849 (CONDITIONAL_JUMP)  ; LAB_00417849
    MOV EDI,0x5cbf84                    ; 00417827 | = "..\\core\\bodypart.cpp"
    MOV EAX,0x47a                       ; 0041782c
    PUSH 0x5cbf99                       ; 00417831 | = "Too many body part textures!"
    MOV dword ptr [0x01d046a0],EDI      ; 00417836 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0041783c | DAT_01d046a4
    CALL FUN_004e4500                   ; 00417841
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00417846
    MOV ESI,dword ptr [EBX + 0x2e8]     ; 00417849
        ;   Label: LAB_00417849
    LEA EAX,[ESI*0x4 + 0x0]             ; 0041784f
    PUSH 0x18                           ; 00417856
    SUB EAX,ESI                         ; 00417858
    LEA EDI,[EBX + 0x2ec]               ; 0041785a
    SHL EAX,0x3                         ; 00417860
    PUSH 0x0                            ; 00417863
    ADD EAX,EDI                         ; 00417865
    PUSH EAX                            ; 00417867
    CALL FUN_005b77c0                   ; 00417868
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    MOV ESI,dword ptr [EBX + 0x2e8]     ; 0041786d
    LEA EAX,[ESI*0x4 + 0x0]             ; 00417873
    SUB EAX,ESI                         ; 0041787a
    SHL EAX,0x3                         ; 0041787c
    ADD ESP,0xc                         ; 0041787f
    ADD EDI,EAX                         ; 00417882
    MOV ESI,EBP                         ; 00417884
    ADD EDI,0x8                         ; 00417886
    PUSH EDI                            ; 00417889
    MOV AL,byte ptr [ESI]               ; 0041788a
        ;   Label: LAB_0041788a
    MOV byte ptr [EDI],AL               ; 0041788c
    CMP AL,0x0                          ; 0041788e
    JZ 0x004178a2                       ; 00417890
        ;   XREF to: 004178a2 (CONDITIONAL_JUMP)  ; LAB_004178a2
    MOV AL,byte ptr [ESI + 0x1]         ; 00417892
    ADD ESI,0x2                         ; 00417895
    MOV byte ptr [EDI + 0x1],AL         ; 00417898
    ADD EDI,0x2                         ; 0041789b
    CMP AL,0x0                          ; 0041789e
    JNZ 0x0041788a                      ; 004178a0
        ;   XREF to: 0041788a (CONDITIONAL_JUMP)  ; LAB_0041788a
    POP EDI                             ; 004178a2
        ;   Label: LAB_004178a2
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 004178a3
    LEA ESI,[EAX + 0x1]                 ; 004178a9
    MOV dword ptr [EBX + 0x2e8],ESI     ; 004178ac
    POP EBP                             ; 004178b2
    POP EDI                             ; 004178b3
    POP ESI                             ; 004178b4
    POP EBX                             ; 004178b5
    RET                                 ; 004178b6
    MOV EAX,ESI                         ; 004178b7
        ;   Label: LAB_004178b7
    POP EBP                             ; 004178b9
    POP EDI                             ; 004178ba
    POP ESI                             ; 004178bb
    POP EBX                             ; 004178bc
    RET                                 ; 004178bd

