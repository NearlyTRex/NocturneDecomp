; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl crt_time_c_parse_timezone_spec_FUN_00607348(char *tz_string,char *name_buffer,int *offset_seconds)
;
; Parameters:
; char *           Stack[0x4]:4   tz_string
; char *           Stack[0x8]:4   name_buffer
; int *            Stack[0xc]:4   offset_seconds
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_time.c_parse_tz_string_FUN_0060756c at 00607590
;
; Called Functions:
;   crt_string.c_parse_uint_FUN_00607318
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607348
        ;   Label: crt_time.c_parse_timezone_spec_FUN_00607348
    PUSH ESI                            ; 00607349
    PUSH EDI                            ; 0060734a
    PUSH EBP                            ; 0060734b
    SUB ESP,0xc                         ; 0060734c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0060734f
    CMP byte ptr [EBX],0x3a             ; 00607353
    JNZ 0x00607359                      ; 00607356
        ;   XREF to: 00607359 (CONDITIONAL_JUMP)  ; LAB_00607359
    INC EBX                             ; 00607358
    MOV ESI,EBX                         ; 00607359
        ;   Label: LAB_00607359
    MOV DL,byte ptr [EBX]               ; 0060735b
        ;   Label: LAB_0060735b
    TEST DL,DL                          ; 0060735d
    JZ 0x0060737d                       ; 0060735f
        ;   XREF to: 0060737d (CONDITIONAL_JUMP)  ; LAB_0060737d
    CMP DL,0x2c                         ; 00607361
    JZ 0x0060737d                       ; 00607364
        ;   XREF to: 0060737d (CONDITIONAL_JUMP)  ; LAB_0060737d
    CMP DL,0x2d                         ; 00607366
    JZ 0x0060737d                       ; 00607369
        ;   XREF to: 0060737d (CONDITIONAL_JUMP)  ; LAB_0060737d
    CMP DL,0x2b                         ; 0060736b
    JZ 0x0060737d                       ; 0060736e
        ;   XREF to: 0060737d (CONDITIONAL_JUMP)  ; LAB_0060737d
    CMP DL,0x30                         ; 00607370
    JC 0x0060737a                       ; 00607373
        ;   XREF to: 0060737a (CONDITIONAL_JUMP)  ; LAB_0060737a
    CMP DL,0x39                         ; 00607375
    JBE 0x0060737d                      ; 00607378
        ;   XREF to: 0060737d (CONDITIONAL_JUMP)  ; LAB_0060737d
    INC EBX                             ; 0060737a
        ;   Label: LAB_0060737a
    JMP 0x0060735b                      ; 0060737b
        ;   XREF to: 0060735b (UNCONDITIONAL_JUMP)  ; LAB_0060735b
    MOV EBP,EBX                         ; 0060737d
        ;   Label: LAB_0060737d
    SUB EBP,ESI                         ; 0060737f
    CMP EBP,0x80                        ; 00607381
    JLE 0x0060738e                      ; 00607387
        ;   XREF to: 0060738e (CONDITIONAL_JUMP)  ; LAB_0060738e
    MOV EBP,0x80                        ; 00607389
    MOV EDI,dword ptr [ESP + 0x24]      ; 0060738e
        ;   Label: LAB_0060738e
    MOV ECX,EBP                         ; 00607392
    PUSH ES                             ; 00607394
    MOV AX,DS                           ; 00607395
    MOV ES,AX                           ; 00607397
    PUSH EDI                            ; 00607399
    MOV EAX,ECX                         ; 0060739a
    SHR ECX,0x2                         ; 0060739c
    MOVSD.REP ES:EDI,ESI                ; 0060739f
    MOV CL,AL                           ; 006073a1
    AND CL,0x3                          ; 006073a3
    MOVSB.REP ES:EDI,ESI                ; 006073a6
    POP EDI                             ; 006073a8
    POP ES                              ; 006073a9
    ADD EBP,EDI                         ; 006073aa
    LEA EAX,[EBX + 0x1]                 ; 006073ac
    XOR ESI,ESI                         ; 006073af
    MOV byte ptr [EBP],0x0              ; 006073b1
    CMP DL,0x2d                         ; 006073b5
    JNZ 0x006073c1                      ; 006073b8
        ;   XREF to: 006073c1 (CONDITIONAL_JUMP)  ; LAB_006073c1
    MOV ESI,0x1                         ; 006073ba
    JMP 0x006073c6                      ; 006073bf
        ;   XREF to: 006073c6 (UNCONDITIONAL_JUMP)  ; LAB_006073c6
    CMP DL,0x2b                         ; 006073c1
        ;   Label: LAB_006073c1
    JNZ 0x006073c8                      ; 006073c4
        ;   XREF to: 006073c8 (CONDITIONAL_JUMP)  ; LAB_006073c8
    MOV EBX,EAX                         ; 006073c6
        ;   Label: LAB_006073c6
    MOV AL,byte ptr [EBX]               ; 006073c8
        ;   Label: LAB_006073c8
    CMP AL,0x30                         ; 006073ca
    JC 0x00607459                       ; 006073cc
        ;   XREF to: 00607459 (CONDITIONAL_JUMP)  ; LAB_00607459
    CMP AL,0x39                         ; 006073d2
    JA 0x00607459                       ; 006073d4
        ;   XREF to: 00607459 (CONDITIONAL_JUMP)  ; LAB_00607459
    LEA EAX,[ESP + 0x8]                 ; 006073da
    XOR EDI,EDI                         ; 006073de
    PUSH EAX                            ; 006073e0
    MOV dword ptr [ESP + 0x4],EDI       ; 006073e1
    PUSH EBX                            ; 006073e5
    MOV dword ptr [ESP + 0xc],EDI       ; 006073e6
    MOV dword ptr [ESP + 0x10],EDI      ; 006073ea
    CALL crt_string.c_parse_uint_FUN_00607318 ; 006073ee
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
    ADD ESP,0x8                         ; 006073f3
    MOV DL,byte ptr [EAX]               ; 006073f6
    MOV EBX,EAX                         ; 006073f8
    CMP DL,0x3a                         ; 006073fa
    JNZ 0x00607426                      ; 006073fd
        ;   XREF to: 00607426 (CONDITIONAL_JUMP)  ; LAB_00607426
    LEA EBX,[ESP + 0x4]                 ; 006073ff
    PUSH EBX                            ; 00607403
    INC EAX                             ; 00607404
    PUSH EAX                            ; 00607405
    CALL crt_string.c_parse_uint_FUN_00607318 ; 00607406
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
    ADD ESP,0x8                         ; 0060740b
    MOV DH,byte ptr [EAX]               ; 0060740e
    MOV EBX,EAX                         ; 00607410
    CMP DH,0x3a                         ; 00607412
    JNZ 0x00607426                      ; 00607415
        ;   XREF to: 00607426 (CONDITIONAL_JUMP)  ; LAB_00607426
    MOV EBX,ESP                         ; 00607417
    PUSH EBX                            ; 00607419
    INC EAX                             ; 0060741a
    PUSH EAX                            ; 0060741b
    CALL crt_string.c_parse_uint_FUN_00607318 ; 0060741c
        ;   XREF to: 00607318 (UNCONDITIONAL_CALL)  ; char * crt_string.c_parse_uint_FUN_00607318(char * str, int * result)
    ADD ESP,0x8                         ; 00607421
    MOV EBX,EAX                         ; 00607424
    MOV EBP,dword ptr [ESP + 0x8]       ; 00607426
        ;   Label: LAB_00607426
    MOV EAX,EBP                         ; 0060742a
    SHL EAX,0x4                         ; 0060742c
    SUB EAX,EBP                         ; 0060742f
    MOV EBP,dword ptr [ESP + 0x4]       ; 00607431
    SHL EAX,0x2                         ; 00607435
    ADD EBP,EAX                         ; 00607438
    MOV EAX,EBP                         ; 0060743a
    SHL EAX,0x4                         ; 0060743c
    SUB EAX,EBP                         ; 0060743f
    MOV EBP,dword ptr [ESP]             ; 00607441
    SHL EAX,0x2                         ; 00607444
    ADD EBP,EAX                         ; 00607447
    MOV EAX,dword ptr [ESP + 0x28]      ; 00607449
    MOV dword ptr [EAX],EBP             ; 0060744d
    TEST ESI,ESI                        ; 0060744f
    JZ 0x00607459                       ; 00607451
        ;   XREF to: 00607459 (CONDITIONAL_JUMP)  ; LAB_00607459
    MOV EDX,EBP                         ; 00607453
    NEG EDX                             ; 00607455
    MOV dword ptr [EAX],EDX             ; 00607457
    MOV EAX,EBX                         ; 00607459
        ;   Label: LAB_00607459
    ADD ESP,0xc                         ; 0060745b
    POP EBP                             ; 0060745e
    POP EDI                             ; 0060745f
    POP ESI                             ; 00607460
    POP EBX                             ; 00607461
    RET                                 ; 00607462

