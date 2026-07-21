; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_calculateTestRadius_FUN_00548680(int param_1)
;
;
; XREF[1]:
;   core_trigger.cpp_CTrigger_archive_FUN_00548170 at 005483f7
;
; Referenced Globals:
;   undefined1* switchdataD_00548658 = 0054869a
;   undefined4 DAT_00596b17
;
; Called Functions:
;   crt_math.c_ceil_FUN_00567121
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548680
        ;   Label: core_trigger.cpp_CTrigger_calculateTestRadius_FUN_00548680
    SUB ESP,0x2c                        ; 00548681
    MOV EBX,dword ptr [ESP + 0x34]      ; 00548684
    MOV EAX,dword ptr [EBX + 0x16c]     ; 00548688
    CMP EAX,0x9                         ; 0054868e
    JA 0x00548705                       ; 00548691
        ;   XREF to: 00548705 (CONDITIONAL_JUMP)  ; caseD_9
    JMP dword ptr [EAX*0x4 + 0x548658]  ; 00548693 | caseD_1 | caseD_9 | switchdataD_00548658
        ;   Label: switchD
    MOV EDX,ESP                         ; 0054869a
        ;   Label: caseD_0
    PUSH EDX                            ; 0054869c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054869d
    PUSH EBX                            ; 005486a3
    CALL dword ptr [EAX + 0x14]         ; 005486a4
    LEA EDX,[EAX + 0xc]                 ; 005486a7
    FLD float ptr [EDX]                 ; 005486aa
    FSUB float ptr [EAX]                ; 005486ac
    ADD ESP,0x8                         ; 005486ae
    FSTP float ptr [ESP + 0x18]         ; 005486b1
    FLD float ptr [EDX + 0x4]           ; 005486b5
    FSUB float ptr [EAX + 0x4]          ; 005486b8
    FST float ptr [ESP + 0x1c]          ; 005486bb
    FMUL float ptr [ESP + 0x1c]         ; 005486bf
    FLD float ptr [ESP + 0x18]          ; 005486c3
    FMUL ST0                            ; 005486c7
    FLD float ptr [EDX + 0x8]           ; 005486c9
    FSUB float ptr [EAX + 0x8]          ; 005486cc
    FXCH                                ; 005486cf
    FADDP ST2,ST0                       ; 005486d1
    FST float ptr [ESP + 0x20]          ; 005486d3
    FMUL float ptr [ESP + 0x20]         ; 005486d7
    FADDP                               ; 005486db
    FSQRT                               ; 005486dd
    FADD double ptr [0x00596b17]        ; 005486df | DAT_00596b17
    SUB ESP,0x8                         ; 005486e5
    FSTP double ptr [ESP]               ; 005486e8
    CALL crt_math.c_ceil_FUN_00567121   ; 005486eb
        ;   XREF to: 00567121 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_ceil_FUN_00567121()
    MOV dword ptr [ESP + 0x2c],EAX      ; 005486f0
    MOV dword ptr [ESP + 0x30],EDX      ; 005486f4
    FLD double ptr [ESP + 0x2c]         ; 005486f8
    FSTP float ptr [EBX + 0x150]        ; 005486fc
    ADD ESP,0x8                         ; 00548702
    ADD ESP,0x2c                        ; 00548705
        ;   Label: caseD_2
    POP EBX                             ; 00548708
    RET                                 ; 00548709

