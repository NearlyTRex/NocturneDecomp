; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_waypoint_cpp_CWaypoint_setup_FUN_00552510(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_none_00597768
;   TerminatedCString s_true_0059776d
;   string s_..\\core\\waypoint.cpp_00597772
;   string s_Can't_have_creation_event_for_wa_00597787
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_trigger.cpp_CTrigger_setup_FUN_00547a00
;   crt_string.c__stricmp_FUN_00564520
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552510
        ;   Label: core_waypoint.cpp_CWaypoint_setup_FUN_00552510
    PUSH ESI                            ; 00552511
    PUSH EBP                            ; 00552512
    SUB ESP,0xc                         ; 00552513
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00552516
    PUSH ESI                            ; 0055251a
    CALL core_trigger.cpp_CTrigger_setup_FUN_00547a00 ; 0055251b
        ;   XREF to: 00547a00 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_setup_FUN_00547a00()
    XOR EBX,EBX                         ; 00552520
    MOV EDX,dword ptr [ESI + 0x368]     ; 00552522
    ADD ESP,0x4                         ; 00552528
    TEST EDX,EDX                        ; 0055252b
    JLE 0x0055256f                      ; 0055252d
        ;   XREF to: 0055256f (CONDITIONAL_JUMP)  ; LAB_0055256f
    PUSH EDI                            ; 0055252f
    LEA ECX,[ESI + 0x20]                ; 00552530
    MOV EDX,ESI                         ; 00552533
    MOV EAX,dword ptr [EDX + 0x36c]     ; 00552535
        ;   Label: LAB_00552535
    FLD float ptr [ECX]                 ; 0055253b
    FSUB float ptr [EAX + 0x20]         ; 0055253d
    FMUL ST0                            ; 00552540
    FLD float ptr [ECX + 0x4]           ; 00552542
    FSUB float ptr [EAX + 0x24]         ; 00552545
    FMUL ST0                            ; 00552548
    FLD float ptr [ECX + 0x8]           ; 0055254a
    FXCH                                ; 0055254d
    FADDP ST2,ST0                       ; 0055254f
    FSUB float ptr [EAX + 0x28]         ; 00552551
    FMUL ST0                            ; 00552554
    FADDP                               ; 00552556
    FSQRT                               ; 00552558
    INC EBX                             ; 0055255a
    FSTP float ptr [EDX + 0x370]        ; 0055255b
    MOV EDI,dword ptr [ESI + 0x368]     ; 00552561
    ADD EDX,0x8                         ; 00552567
    CMP EBX,EDI                         ; 0055256a
    JL 0x00552535                       ; 0055256c
        ;   XREF to: 00552535 (CONDITIONAL_JUMP)  ; LAB_00552535
    POP EDI                             ; 0055256e
    CMP byte ptr [ESI + 0x78],0x0       ; 0055256f
        ;   Label: LAB_0055256f
    JNZ 0x0055257c                      ; 00552573
        ;   XREF to: 0055257c (CONDITIONAL_JUMP)  ; LAB_0055257c
    ADD ESP,0xc                         ; 00552575
        ;   Label: LAB_00552575
    POP EBP                             ; 00552578
    POP ESI                             ; 00552579
    POP EBX                             ; 0055257a
    RET                                 ; 0055257b
    PUSH 0x597768                       ; 0055257c | = "none"
        ;   Label: LAB_0055257c
    ADD ESI,0x78                        ; 00552581
    PUSH ESI                            ; 00552584
    CALL crt_string.c__stricmp_FUN_00564520 ; 00552585
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055258a
    TEST EAX,EAX                        ; 0055258d
    JZ 0x00552575                       ; 0055258f
        ;   XREF to: 00552575 (CONDITIONAL_JUMP)  ; LAB_00552575
    PUSH 0x59776d                       ; 00552591 | = "true"
    PUSH ESI                            ; 00552596
    CALL crt_string.c__stricmp_FUN_00564520 ; 00552597
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 0055259c
    TEST EAX,EAX                        ; 0055259f
    JZ 0x00552575                       ; 005525a1
        ;   XREF to: 00552575 (CONDITIONAL_JUMP)  ; LAB_00552575
    MOV EBP,0x597772                    ; 005525a3 | = "..\\core\\waypoint.cpp"
    MOV EAX,0x79                        ; 005525a8
    PUSH 0x597787                       ; 005525ad | = "Can't have creation event for waypoint."
    MOV dword ptr [0x01cc4800],EBP      ; 005525b2 | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 005525b8 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005525bd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 005525c2
    ADD ESP,0xc                         ; 005525c5
    POP EBP                             ; 005525c8
    POP ESI                             ; 005525c9
    POP EBX                             ; 005525ca
    RET                                 ; 005525cb

