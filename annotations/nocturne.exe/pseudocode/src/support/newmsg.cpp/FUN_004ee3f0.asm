; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte * FUN_004ee3f0(byte *param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[4]:
;   FUN_0049cc10 at 0049d60a
;   FUN_0049da10 at 0049dc15
;   FUN_0049f930 at 0049fec5
;   FUN_004a0550 at 004a063e
;
; Referenced Globals:
;   string s_..\\support\\newmsg.cpp_0058c9d4
;   string s_decryptMessage_-_invalid_initial_0058c9ea
;   string s_..\\support\\newmsg.cpp_0058ca17
;   string s_decryptMessage_-_error_decryptin_0058ca2d
;   string s_..\\support\\newmsg.cpp_0058ca55
;   string s_decryptMessage_-_premature_null_t_0058ca6b
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee3f0
        ;   Label: FUN_004ee3f0
    PUSH ESI                            ; 004ee3f1
    PUSH EDI                            ; 004ee3f2
    SUB ESP,0x4                         ; 004ee3f3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004ee3f6
    CMP byte ptr [EDI + 0x2],0x3e       ; 004ee3fa
    JZ 0x004ee43d                       ; 004ee3fe
        ;   XREF to: 004ee43d (CONDITIONAL_JUMP)  ; LAB_004ee43d
    XOR EBX,EBX                         ; 004ee400
    XOR EAX,EAX                         ; 004ee402
    MOV BL,byte ptr [EDI + 0x1]         ; 004ee404
    MOV AL,byte ptr [EDI]               ; 004ee407
    SHL EBX,0x8                         ; 004ee409
    ADD EAX,EBX                         ; 004ee40c
    MOV dword ptr [ESP],EAX             ; 004ee40e
    XOR EAX,EAX                         ; 004ee411
    MOV EDX,dword ptr [ESP]             ; 004ee413
    MOV AL,byte ptr [EDI + 0x2]         ; 004ee416
    XOR EAX,EDX                         ; 004ee419
    AND EAX,0xff                        ; 004ee41b
    CMP EAX,0x3e                        ; 004ee420
    JNZ 0x004ee447                      ; 004ee423
        ;   XREF to: 004ee447 (CONDITIONAL_JUMP)  ; LAB_004ee447
    MOV ESI,0x2                         ; 004ee425
        ;   Label: LAB_004ee425
    LEA EBX,[EDI + ESI*0x1]             ; 004ee42a
    MOV AL,byte ptr [ESP]               ; 004ee42d
        ;   Label: LAB_004ee42d
    MOV DL,byte ptr [EBX]               ; 004ee430
    XOR DL,AL                           ; 004ee432
    MOV byte ptr [EBX],DL               ; 004ee434
    JNZ 0x004ee46c                      ; 004ee436
        ;   XREF to: 004ee46c (CONDITIONAL_JUMP)  ; LAB_004ee46c
    CMP ESI,0x17                        ; 004ee438
    JL 0x004ee4aa                       ; 004ee43b
        ;   XREF to: 004ee4aa (CONDITIONAL_JUMP)  ; LAB_004ee4aa
    LEA EAX,[EDI + 0x17]                ; 004ee43d
        ;   Label: LAB_004ee43d
    ADD ESP,0x4                         ; 004ee440
    POP EDI                             ; 004ee443
    POP ESI                             ; 004ee444
    POP EBX                             ; 004ee445
    RET                                 ; 004ee446
    MOV ECX,0x58c9d4                    ; 004ee447 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_004ee447
    MOV EBX,0xca                        ; 004ee44c
    PUSH 0x58c9ea                       ; 004ee451 | = "decryptMessage - invalid initial mask..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ee456 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004ee45c | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ee462
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ee467
    JMP 0x004ee425                      ; 004ee46a
        ;   XREF to: 004ee425 (UNCONDITIONAL_JUMP)  ; LAB_004ee425
    IMUL EAX,dword ptr [ESP],0x2ff0bd   ; 004ee46c
        ;   Label: LAB_004ee46c
    INC EAX                             ; 004ee473
    INC EBX                             ; 004ee474
    AND EAX,0xffff                      ; 004ee475
    INC ESI                             ; 004ee47a
    MOV dword ptr [ESP],EAX             ; 004ee47b
    CMP ESI,0x3e8                       ; 004ee47e
    JLE 0x004ee42d                      ; 004ee484
        ;   XREF to: 004ee42d (CONDITIONAL_JUMP)  ; LAB_004ee42d
    MOV EAX,0x58ca17                    ; 004ee486 | = "..\\support\\newmsg.cpp"
    MOV EDX,0xd5                        ; 004ee48b
    PUSH 0x58ca2d                       ; 004ee490 | = "decryptMessage - error decrypting text!"
    MOV [0x01cc4800],EAX                ; 004ee495 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 004ee49a | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ee4a0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ee4a5
    JMP 0x004ee42d                      ; 004ee4a8
        ;   XREF to: 004ee42d (UNCONDITIONAL_JUMP)  ; LAB_004ee42d
    MOV ECX,0x58ca55                    ; 004ee4aa | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_004ee4aa
    MOV EBX,0xe8                        ; 004ee4af
    PUSH 0x58ca6b                       ; 004ee4b4 | = "decryptMessage - premature null termi..."
    MOV dword ptr [0x01cc4800],ECX      ; 004ee4b9 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004ee4bf | DAT_01cc4804
    CALL FUN_004c8440                   ; 004ee4c5
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004ee4ca
    LEA EAX,[EDI + 0x17]                ; 004ee4cd
    ADD ESP,0x4                         ; 004ee4d0
    POP EDI                             ; 004ee4d3
    POP ESI                             ; 004ee4d4
    POP EBX                             ; 004ee4d5
    RET                                 ; 004ee4d6

