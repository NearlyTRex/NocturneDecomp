; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c13dc(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_unknown.c_FUN_005c1168 at 005c117e
;
; Referenced Globals:
;   dst_rule g_DstStartRule
;   int g_DstTransitionSecond = 0x0
;   int g_DstTransitionMinute = 0x0
;   int g_DstTransitionHour = 0x1
;   TerminatedCString s_EST_0061f52c
;   TerminatedCString s_EDT_0061f5ad
;   int g_TimezoneOffset = 0x4650
;   int g_DaylightSavingActive = 0x1
;   int g_DaylightSavingOffset = 0xe10
;
; Called Functions:
;   crt_unknown.c_FUN_005c11b8
;   crt_unknown.c_FUN_005c12d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c13dc
        ;   Label: crt_unknown.c_FUN_005c13dc
    PUSH ESI                            ; 005c13dd
    PUSH EDI                            ; 005c13de
    PUSH EBP                            ; 005c13df
    SUB ESP,0x4                         ; 005c13e0
    MOV ESI,dword ptr [0x0061f640]      ; 005c13e3 | g_DaylightSavingOffset
    PUSH 0x61f638                       ; 005c13e9 | g_TimezoneOffset
    PUSH 0x61f52c                       ; 005c13ee | = "EST"
    MOV EBX,dword ptr [ESP + 0x20]      ; 005c13f3
    XOR EDX,EDX                         ; 005c13f7
    PUSH EBX                            ; 005c13f9
    MOV dword ptr [0x0061f63c],EDX      ; 005c13fa | g_DaylightSavingActive
    CALL crt_unknown.c_FUN_005c11b8     ; 005c1400
        ;   XREF to: 005c11b8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c11b8()
    MOV EDX,EAX                         ; 005c1405
    MOV AH,byte ptr [EAX]               ; 005c1407
    ADD ESP,0xc                         ; 005c1409
    TEST AH,AH                          ; 005c140c
    JNZ 0x005c1421                      ; 005c140e
        ;   XREF to: 005c1421 (CONDITIONAL_JUMP)  ; LAB_005c1421
    MOV ESI,dword ptr [0x0061f640]      ; 005c1410 | g_DaylightSavingOffset
    MOV byte ptr [0x0061f5ad],AH        ; 005c1416 | = "EDT"
    JMP 0x005c14ed                      ; 005c141c
        ;   XREF to: 005c14ed (UNCONDITIONAL_JUMP)  ; LAB_005c14ed
    MOV EAX,[0x0061f638]                ; 005c1421 | g_TimezoneOffset
        ;   Label: LAB_005c1421
    SUB EAX,0xe10                       ; 005c1426
    MOV dword ptr [ESP],EAX             ; 005c142b
    MOV EAX,ESP                         ; 005c142e
    PUSH EAX                            ; 005c1430
    PUSH 0x61f5ad                       ; 005c1431 | = "EDT"
    MOV ECX,0x1                         ; 005c1436
    PUSH EDX                            ; 005c143b
    MOV dword ptr [0x0061f63c],ECX      ; 005c143c | g_DaylightSavingActive
    CALL crt_unknown.c_FUN_005c11b8     ; 005c1442
        ;   XREF to: 005c11b8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c11b8()
    ADD ESP,0xc                         ; 005c1447
    MOV EBX,dword ptr [0x0061f638]      ; 005c144a | g_TimezoneOffset
    MOV ESI,dword ptr [ESP]             ; 005c1450
    SUB EBX,ESI                         ; 005c1453
    MOV ESI,EBX                         ; 005c1455
    MOV dword ptr [0x0061f640],EBX      ; 005c1457 | g_DaylightSavingOffset
    MOV BL,byte ptr [EAX]               ; 005c145d
    MOV EDX,EAX                         ; 005c145f
    CMP BL,0x2c                         ; 005c1461
    JNZ 0x005c1477                      ; 005c1464
        ;   XREF to: 005c1477 (CONDITIONAL_JUMP)  ; LAB_005c1477
    PUSH 0x61f4e4                       ; 005c1466 | g_DstStartRule
    INC EAX                             ; 005c146b
    PUSH EAX                            ; 005c146c
    CALL crt_unknown.c_FUN_005c12d4     ; 005c146d
        ;   XREF to: 005c12d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c12d4()
    ADD ESP,0x8                         ; 005c1472
    MOV EDX,EAX                         ; 005c1475
    MOV BH,byte ptr [EDX]               ; 005c1477
        ;   Label: LAB_005c1477
    MOV ESI,dword ptr [0x0061f640]      ; 005c1479 | g_DaylightSavingOffset
    CMP BH,0x2c                         ; 005c147f
    JNZ 0x005c14ed                      ; 005c1482
        ;   XREF to: 005c14ed (CONDITIONAL_JUMP)  ; LAB_005c14ed
    PUSH 0x61f508                       ; 005c1484 | g_DstTransitionSecond
    INC EDX                             ; 005c1489
    PUSH EDX                            ; 005c148a
    CALL crt_unknown.c_FUN_005c12d4     ; 005c148b
        ;   XREF to: 005c12d4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c12d4()
    MOV ESI,dword ptr [0x0061f640]      ; 005c1490 | g_DaylightSavingOffset
    MOV EBX,0xe10                       ; 005c1496
    MOV EDX,ESI                         ; 005c149b
    MOV EAX,ESI                         ; 005c149d
    SAR EDX,0x1f                        ; 005c149f
    IDIV EBX                            ; 005c14a2
    MOV EDI,dword ptr [0x0061f510]      ; 005c14a4 | g_DstTransitionHour
    MOV EBX,0x3c                        ; 005c14aa
    MOV EDX,ESI                         ; 005c14af
    SUB EDI,EAX                         ; 005c14b1
    MOV EAX,ESI                         ; 005c14b3
    SAR EDX,0x1f                        ; 005c14b5
    IDIV EBX                            ; 005c14b8
    MOV EDX,EAX                         ; 005c14ba
    SAR EDX,0x1f                        ; 005c14bc
    IDIV EBX                            ; 005c14bf
    MOV EBP,dword ptr [0x0061f50c]      ; 005c14c1 | g_DstTransitionMinute
    SUB EBP,EDX                         ; 005c14c7
    MOV EDX,ESI                         ; 005c14c9
    MOV EAX,ESI                         ; 005c14cb
    SAR EDX,0x1f                        ; 005c14cd
    IDIV EBX                            ; 005c14d0
    ADD ESP,0x8                         ; 005c14d2
    MOV EAX,[0x0061f508]                ; 005c14d5 | g_DstTransitionSecond
    MOV dword ptr [0x0061f510],EDI      ; 005c14da | g_DstTransitionHour
    SUB EAX,EDX                         ; 005c14e0
    MOV dword ptr [0x0061f50c],EBP      ; 005c14e2 | g_DstTransitionMinute
    MOV [0x0061f508],EAX                ; 005c14e8 | g_DstTransitionSecond
    MOV dword ptr [0x0061f640],ESI      ; 005c14ed | g_DaylightSavingOffset
        ;   Label: LAB_005c14ed
    ADD ESP,0x4                         ; 005c14f3
    POP EBP                             ; 005c14f6
    POP EDI                             ; 005c14f7
    POP ESI                             ; 005c14f8
    POP EBX                             ; 005c14f9
    RET                                 ; 005c14fa

