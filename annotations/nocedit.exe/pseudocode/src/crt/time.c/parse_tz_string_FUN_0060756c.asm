; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_time_c_parse_tz_string_FUN_0060756c(char *tz_string)
;
; Parameters:
; char *           Stack[0x4]:4   tz_string
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   crt_time.c_tzset_FUN_006072f8 at 0060730e
;
; Referenced Globals:
;   dst_rule g_DstStartRule
;   int g_DstTransitionSecond = 0x0
;   int g_DstTransitionMinute = 0x0
;   int g_DstTransitionHour = 0x1
;   TerminatedCString s_EST_006850bc
;   TerminatedCString s_EDT_0068513d
;   int g_TimezoneOffset = 0x4650
;   int g_DaylightSavingActive = 0x1
;   int g_DaylightSavingOffset = 0xe10
;
; Called Functions:
;   crt_time.c_parse_dst_rule_FUN_00607464
;   crt_time.c_parse_timezone_spec_FUN_00607348
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0060756c
        ;   Label: crt_time.c_parse_tz_string_FUN_0060756c
    PUSH ESI                            ; 0060756d
    PUSH EDI                            ; 0060756e
    PUSH EBP                            ; 0060756f
    SUB ESP,0x4                         ; 00607570
    MOV ESI,dword ptr [0x006851d0]      ; 00607573 | g_DaylightSavingOffset
    PUSH 0x6851c8                       ; 00607579 | g_TimezoneOffset
    PUSH 0x6850bc                       ; 0060757e | = "EST"
    MOV EBX,dword ptr [ESP + 0x20]      ; 00607583
    XOR EDX,EDX                         ; 00607587
    PUSH EBX                            ; 00607589
    MOV dword ptr [0x006851cc],EDX      ; 0060758a | g_DaylightSavingActive
    CALL crt_time.c_parse_timezone_spec_FUN_00607348 ; 00607590
        ;   XREF to: 00607348 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_timezone_spec_FUN_00607348(char * tz_string, char * name_buffer, int * offset_seconds)
    MOV EDX,EAX                         ; 00607595
    MOV AH,byte ptr [EAX]               ; 00607597
    ADD ESP,0xc                         ; 00607599
    TEST AH,AH                          ; 0060759c
    JNZ 0x006075b1                      ; 0060759e
        ;   XREF to: 006075b1 (CONDITIONAL_JUMP)  ; LAB_006075b1
    MOV ESI,dword ptr [0x006851d0]      ; 006075a0 | g_DaylightSavingOffset
    MOV byte ptr [0x0068513d],AH        ; 006075a6 | = "EDT"
    JMP 0x0060767d                      ; 006075ac
        ;   XREF to: 0060767d (UNCONDITIONAL_JUMP)  ; LAB_0060767d
    MOV EAX,[0x006851c8]                ; 006075b1 | g_TimezoneOffset
        ;   Label: LAB_006075b1
    SUB EAX,0xe10                       ; 006075b6
    MOV dword ptr [ESP],EAX             ; 006075bb
    MOV EAX,ESP                         ; 006075be
    PUSH EAX                            ; 006075c0
    PUSH 0x68513d                       ; 006075c1 | = "EDT"
    MOV ECX,0x1                         ; 006075c6
    PUSH EDX                            ; 006075cb
    MOV dword ptr [0x006851cc],ECX      ; 006075cc | g_DaylightSavingActive
    CALL crt_time.c_parse_timezone_spec_FUN_00607348 ; 006075d2
        ;   XREF to: 00607348 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_timezone_spec_FUN_00607348(char * tz_string, char * name_buffer, int * offset_seconds)
    ADD ESP,0xc                         ; 006075d7
    MOV EBX,dword ptr [0x006851c8]      ; 006075da | g_TimezoneOffset
    MOV ESI,dword ptr [ESP]             ; 006075e0
    SUB EBX,ESI                         ; 006075e3
    MOV ESI,EBX                         ; 006075e5
    MOV dword ptr [0x006851d0],EBX      ; 006075e7 | g_DaylightSavingOffset
    MOV BL,byte ptr [EAX]               ; 006075ed
    MOV EDX,EAX                         ; 006075ef
    CMP BL,0x2c                         ; 006075f1
    JNZ 0x00607607                      ; 006075f4
        ;   XREF to: 00607607 (CONDITIONAL_JUMP)  ; LAB_00607607
    PUSH 0x685074                       ; 006075f6 | g_DstStartRule
    INC EAX                             ; 006075fb
    PUSH EAX                            ; 006075fc
    CALL crt_time.c_parse_dst_rule_FUN_00607464 ; 006075fd
        ;   XREF to: 00607464 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_dst_rule_FUN_00607464(char * rule_string, dst_rule * rule)
    ADD ESP,0x8                         ; 00607602
    MOV EDX,EAX                         ; 00607605
    MOV BH,byte ptr [EDX]               ; 00607607
        ;   Label: LAB_00607607
    MOV ESI,dword ptr [0x006851d0]      ; 00607609 | g_DaylightSavingOffset
    CMP BH,0x2c                         ; 0060760f
    JNZ 0x0060767d                      ; 00607612
        ;   XREF to: 0060767d (CONDITIONAL_JUMP)  ; LAB_0060767d
    PUSH 0x685098                       ; 00607614 | g_DstTransitionSecond
    INC EDX                             ; 00607619
    PUSH EDX                            ; 0060761a
    CALL crt_time.c_parse_dst_rule_FUN_00607464 ; 0060761b
        ;   XREF to: 00607464 (UNCONDITIONAL_CALL)  ; char * crt_time.c_parse_dst_rule_FUN_00607464(char * rule_string, dst_rule * rule)
    MOV ESI,dword ptr [0x006851d0]      ; 00607620 | g_DaylightSavingOffset
    MOV EBX,0xe10                       ; 00607626
    MOV EDX,ESI                         ; 0060762b
    MOV EAX,ESI                         ; 0060762d
    SAR EDX,0x1f                        ; 0060762f
    IDIV EBX                            ; 00607632
    MOV EDI,dword ptr [0x006850a0]      ; 00607634 | g_DstTransitionHour
    MOV EBX,0x3c                        ; 0060763a
    MOV EDX,ESI                         ; 0060763f
    SUB EDI,EAX                         ; 00607641
    MOV EAX,ESI                         ; 00607643
    SAR EDX,0x1f                        ; 00607645
    IDIV EBX                            ; 00607648
    MOV EDX,EAX                         ; 0060764a
    SAR EDX,0x1f                        ; 0060764c
    IDIV EBX                            ; 0060764f
    MOV EBP,dword ptr [0x0068509c]      ; 00607651 | g_DstTransitionMinute
    SUB EBP,EDX                         ; 00607657
    MOV EDX,ESI                         ; 00607659
    MOV EAX,ESI                         ; 0060765b
    SAR EDX,0x1f                        ; 0060765d
    IDIV EBX                            ; 00607660
    ADD ESP,0x8                         ; 00607662
    MOV EAX,[0x00685098]                ; 00607665 | g_DstTransitionSecond
    MOV dword ptr [0x006850a0],EDI      ; 0060766a | g_DstTransitionHour
    SUB EAX,EDX                         ; 00607670
    MOV dword ptr [0x0068509c],EBP      ; 00607672 | g_DstTransitionMinute
    MOV [0x00685098],EAX                ; 00607678 | g_DstTransitionSecond
    MOV dword ptr [0x006851d0],ESI      ; 0060767d | g_DaylightSavingOffset
        ;   Label: LAB_0060767d
    ADD ESP,0x4                         ; 00607683
    POP EBP                             ; 00607686
    POP EDI                             ; 00607687
    POP ESI                             ; 00607688
    POP EBX                             ; 00607689
    RET                                 ; 0060768a

