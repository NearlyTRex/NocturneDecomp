; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_locale_c__lc_strtolc_FUN_1000b380(char *lc,char *locale)
;
; Parameters:
; char *           Stack[0x4]:4   lc
; char *           Stack[0x8]:4   locale
;
; XREF[1]:
;   crt_locale.c__expandlocale_FUN_1000b150 at 1000b229
;
; Referenced Globals:
;   undefined4 DAT_10012760
;
; Called Functions:
;   crt_string.c__strncpy_FUN_1000a9f0
;   crt_string.c_strcspn_FUN_1000e290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000b380
        ;   Label: crt_locale.c__lc_strtolc_FUN_1000b380
    XOR EAX,EAX                         ; 1000b381
    PUSH ESI                            ; 1000b383
    MOV ECX,0x21                        ; 1000b384
    PUSH EDI                            ; 1000b389
    PUSH EBP                            ; 1000b38a
    MOV EDI,dword ptr [ESP + 0x14]      ; 1000b38b
    STOSD.REP ES:EDI                    ; 1000b38f
    STOSB ES:EDI                        ; 1000b391
    MOV EBP,dword ptr [ESP + 0x18]      ; 1000b392
    MOV AL,byte ptr [EBP]               ; 1000b396
    TEST AL,AL                          ; 1000b399
    JNZ 0x1000b3a4                      ; 1000b39b
        ;   XREF to: 1000b3a4 (CONDITIONAL_JUMP)  ; LAB_1000b3a4
    XOR EAX,EAX                         ; 1000b39d
    POP EBP                             ; 1000b39f
    POP EDI                             ; 1000b3a0
    POP ESI                             ; 1000b3a1
    POP EBX                             ; 1000b3a2
    RET                                 ; 1000b3a3
    CMP AL,0x2e                         ; 1000b3a4
        ;   Label: LAB_1000b3a4
    JNZ 0x1000b3de                      ; 1000b3a6
        ;   XREF to: 1000b3de (CONDITIONAL_JUMP)  ; LAB_1000b3de
    LEA EDI,[EBP + 0x1]                 ; 1000b3a8
    CMP byte ptr [EDI],0x0              ; 1000b3ab
    JZ 0x1000b3de                       ; 1000b3ae
        ;   XREF to: 1000b3de (CONDITIONAL_JUMP)  ; LAB_1000b3de
    MOV ECX,0xffffffff                  ; 1000b3b0
    SUB EAX,EAX                         ; 1000b3b5
    SCASB.REPNE ES:EDI                  ; 1000b3b7
    NOT ECX                             ; 1000b3b9
    SUB EDI,ECX                         ; 1000b3bb
    MOV EAX,ECX                         ; 1000b3bd
    SHR ECX,0x2                         ; 1000b3bf
    MOV ESI,EDI                         ; 1000b3c2
    MOV EDI,dword ptr [ESP + 0x14]      ; 1000b3c4
    ADD EDI,0x80                        ; 1000b3c8
    MOVSD.REP ES:EDI,ESI                ; 1000b3ce
    MOV ECX,EAX                         ; 1000b3d0
    POP EBP                             ; 1000b3d2
    AND ECX,0x3                         ; 1000b3d3
    MOVSB.REP ES:EDI,ESI                ; 1000b3d6
    XOR EAX,EAX                         ; 1000b3d8
    POP EDI                             ; 1000b3da
    POP ESI                             ; 1000b3db
    POP EBX                             ; 1000b3dc
    RET                                 ; 1000b3dd
    XOR ESI,ESI                         ; 1000b3de
        ;   Label: LAB_1000b3de
    PUSH 0x10012760                     ; 1000b3e0 | DAT_10012760
        ;   Label: LAB_1000b3e0
    PUSH EBP                            ; 1000b3e5
    CALL crt_string.c_strcspn_FUN_1000e290 ; 1000b3e6
        ;   XREF to: 1000e290 (UNCONDITIONAL_CALL)  ; size_t crt_string.c_strcspn_FUN_1000e290(char * str, char * control)
    ADD ESP,0x8                         ; 1000b3eb
    MOV EDI,EAX                         ; 1000b3ee
    TEST EDI,EDI                        ; 1000b3f0
    JZ 0x1000b45a                       ; 1000b3f2
        ;   XREF to: 1000b45a (CONDITIONAL_JUMP)  ; LAB_1000b45a
    MOV BL,byte ptr [EBP + EDI*0x1]     ; 1000b3f4
    TEST ESI,ESI                        ; 1000b3f8
    JNZ 0x1000b40e                      ; 1000b3fa
        ;   XREF to: 1000b40e (CONDITIONAL_JUMP)  ; LAB_1000b40e
    CMP EDI,0x40                        ; 1000b3fc
    JGE 0x1000b40e                      ; 1000b3ff
        ;   XREF to: 1000b40e (CONDITIONAL_JUMP)  ; LAB_1000b40e
    CMP BL,0x2e                         ; 1000b401
    JZ 0x1000b40e                       ; 1000b404
        ;   XREF to: 1000b40e (CONDITIONAL_JUMP)  ; LAB_1000b40e
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b406
    PUSH EDI                            ; 1000b40a
    PUSH EBP                            ; 1000b40b
    JMP 0x1000b441                      ; 1000b40c
        ;   XREF to: 1000b441 (UNCONDITIONAL_JUMP)  ; LAB_1000b441
    CMP ESI,0x1                         ; 1000b40e
        ;   Label: LAB_1000b40e
    JNZ 0x1000b428                      ; 1000b411
        ;   XREF to: 1000b428 (CONDITIONAL_JUMP)  ; LAB_1000b428
    CMP EDI,0x40                        ; 1000b413
    JGE 0x1000b428                      ; 1000b416
        ;   XREF to: 1000b428 (CONDITIONAL_JUMP)  ; LAB_1000b428
    CMP BL,0x5f                         ; 1000b418
    JZ 0x1000b428                       ; 1000b41b
        ;   XREF to: 1000b428 (CONDITIONAL_JUMP)  ; LAB_1000b428
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b41d
    PUSH EDI                            ; 1000b421
    PUSH EBP                            ; 1000b422
    ADD EAX,0x40                        ; 1000b423
    JMP 0x1000b441                      ; 1000b426
        ;   XREF to: 1000b441 (UNCONDITIONAL_JUMP)  ; LAB_1000b441
    CMP ESI,0x2                         ; 1000b428
        ;   Label: LAB_1000b428
    JNZ 0x1000b46b                      ; 1000b42b
        ;   XREF to: 1000b46b (CONDITIONAL_JUMP)  ; LAB_1000b46b
    TEST BL,BL                          ; 1000b42d
    JZ 0x1000b436                       ; 1000b42f
        ;   XREF to: 1000b436 (CONDITIONAL_JUMP)  ; LAB_1000b436
    CMP BL,0x2c                         ; 1000b431
    JNZ 0x1000b46b                      ; 1000b434
        ;   XREF to: 1000b46b (CONDITIONAL_JUMP)  ; LAB_1000b46b
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b436
        ;   Label: LAB_1000b436
    PUSH EDI                            ; 1000b43a
    PUSH EBP                            ; 1000b43b
    ADD EAX,0x80                        ; 1000b43c
    PUSH EAX                            ; 1000b441
        ;   Label: LAB_1000b441
    CALL crt_string.c__strncpy_FUN_1000a9f0 ; 1000b442
        ;   XREF to: 1000a9f0 (UNCONDITIONAL_CALL)  ; char * crt_string.c__strncpy_FUN_1000a9f0(char * dest, char * source, size_t count)
    ADD ESP,0xc                         ; 1000b447
    CMP BL,0x2c                         ; 1000b44a
    JZ 0x1000b464                       ; 1000b44d
        ;   XREF to: 1000b464 (CONDITIONAL_JUMP)  ; LAB_1000b464
    TEST BL,BL                          ; 1000b44f
    JZ 0x1000b464                       ; 1000b451
        ;   XREF to: 1000b464 (CONDITIONAL_JUMP)  ; LAB_1000b464
    LEA EBP,[EBP + EDI*0x1 + 0x1]       ; 1000b453
    INC ESI                             ; 1000b457
    JMP 0x1000b3e0                      ; 1000b458
        ;   XREF to: 1000b3e0 (UNCONDITIONAL_JUMP)  ; LAB_1000b3e0
    MOV EAX,0xffffffff                  ; 1000b45a
        ;   Label: LAB_1000b45a
    POP EBP                             ; 1000b45f
    POP EDI                             ; 1000b460
    POP ESI                             ; 1000b461
    POP EBX                             ; 1000b462
    RET                                 ; 1000b463
    XOR EAX,EAX                         ; 1000b464
        ;   Label: LAB_1000b464
    POP EBP                             ; 1000b466
    POP EDI                             ; 1000b467
    POP ESI                             ; 1000b468
    POP EBX                             ; 1000b469
    RET                                 ; 1000b46a
    MOV EAX,0xffffffff                  ; 1000b46b
        ;   Label: LAB_1000b46b
    POP EBP                             ; 1000b470
    POP EDI                             ; 1000b471
    POP ESI                             ; 1000b472
    POP EBX                             ; 1000b473
    RET                                 ; 1000b474

