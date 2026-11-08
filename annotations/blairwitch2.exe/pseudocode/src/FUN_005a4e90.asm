; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a4e90(int param_1)
;
;
; XREF[1]:
;   FUN_005a4c50 at 005a4ccd
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f050b
;   TerminatedCString s_ChaseComplete_005f0517
;   TerminatedCString s_Chasing_005f0525
;   TerminatedCString s_MeleeAttack_005f052d
;   TerminatedCString s_ChaseComplete_005f0539
;   TerminatedCString s_Chasing_005f0547
;   undefined4 DAT_005f0552
;   undefined4 DAT_005f0556
;   undefined4 DAT_005ff8f4
;
; Called Functions:
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_0059d7f0
;   FUN_0059d8e0
;   FUN_005a5460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4e90
        ;   Label: FUN_005a4e90
    PUSH ESI                            ; 005a4e91
    PUSH EDI                            ; 005a4e92
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a4e93
    PUSH EBX                            ; 005a4e97
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a4e98
    CALL dword ptr [EAX + 0x17c]        ; 005a4e9e
    ADD ESP,0x4                         ; 005a4ea4
    TEST EAX,EAX                        ; 005a4ea7
    JZ 0x005a4ef3                       ; 005a4ea9
        ;   XREF to: 005a4ef3 (CONDITIONAL_JUMP)  ; LAB_005a4ef3
    MOV EDX,dword ptr [EBX + 0x11854]   ; 005a4eab
    LEA EDI,[EBX + 0x10af8]             ; 005a4eb1
    TEST EDX,EDX                        ; 005a4eb7
    JZ 0x005a4ef7                       ; 005a4eb9
        ;   XREF to: 005a4ef7 (CONDITIONAL_JUMP)  ; LAB_005a4ef7
    LEA ESI,[EBX + 0x2b4]               ; 005a4ebb
    PUSH ESI                            ; 005a4ec1
    CALL FUN_005035c0                   ; 005a4ec2
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a4ec7
    ADD ESP,0x4                         ; 005a4eca
    CMP EAX,0x2                         ; 005a4ecd
    JC 0x005a4fbb                       ; 005a4ed0
        ;   XREF to: 005a4fbb (CONDITIONAL_JUMP)  ; LAB_005a4fbb
    JBE 0x005a4f2e                      ; 005a4ed6
        ;   XREF to: 005a4f2e (CONDITIONAL_JUMP)  ; LAB_005a4f2e
    CMP EAX,0x3                         ; 005a4ed8
    JNZ 0x005a4fbb                      ; 005a4edb
        ;   XREF to: 005a4fbb (CONDITIONAL_JUMP)  ; LAB_005a4fbb
    FLD float ptr [ESI + 0x8]           ; 005a4ee1
    FCOMP float ptr [0x005f0552]        ; 005a4ee4 | DAT_005f0552
    FNSTSW AX                           ; 005a4eea
    SAHF                                ; 005a4eec
    JA 0x005a4f80                       ; 005a4eed
        ;   XREF to: 005a4f80 (CONDITIONAL_JUMP)  ; LAB_005a4f80
    POP EDI                             ; 005a4ef3
        ;   Label: LAB_005a4ef3
    POP ESI                             ; 005a4ef4
    POP EBX                             ; 005a4ef5
    RET                                 ; 005a4ef6
    PUSH 0x5f050b                       ; 005a4ef7 | = "MeleeAttack"
        ;   Label: LAB_005a4ef7
    PUSH 0x5f0517                       ; 005a4efc | = "ChaseComplete"
    FLD float ptr [0x005ff8f4]          ; 005a4f01 | DAT_005ff8f4
    PUSH EDI                            ; 005a4f07
    FSTP float ptr [EBX + 0x11394]      ; 005a4f08
    MOV dword ptr [EBX + 0x11398],EDX   ; 005a4f0e
    CALL FUN_0059d7f0                   ; 005a4f14
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a4f19
    PUSH 0x5f0525                       ; 005a4f1c | = "Chasing"
    PUSH EDI                            ; 005a4f21
    CALL FUN_0059d8e0                   ; 005a4f22
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a4f27
    POP EDI                             ; 005a4f2a
    POP ESI                             ; 005a4f2b
    POP EBX                             ; 005a4f2c
    RET                                 ; 005a4f2d
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a4f2e
        ;   Label: LAB_005a4f2e
    ADD EAX,0x20                        ; 005a4f34
    PUSH EAX                            ; 005a4f37
    PUSH EBX                            ; 005a4f38
    CALL FUN_00423850                   ; 005a4f39
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    FLD float ptr [ESI + 0x8]           ; 005a4f3e
    ADD ESP,0x8                         ; 005a4f41
    FCOMP float ptr [0x005f0556]        ; 005a4f44 | DAT_005f0556
    FNSTSW AX                           ; 005a4f4a
    SAHF                                ; 005a4f4c
    JBE 0x005a4ef3                      ; 005a4f4d
        ;   XREF to: 005a4ef3 (CONDITIONAL_JUMP)  ; LAB_005a4ef3
    PUSH 0x1                            ; 005a4f4f
    PUSH 0x3                            ; 005a4f51
    PUSH ESI                            ; 005a4f53
    CALL FUN_00503620                   ; 005a4f54
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a4f59
    PUSH EBX                            ; 005a4f5c
    CALL FUN_005a5460                   ; 005a4f5d
        ;   XREF to: 005a5460 (UNCONDITIONAL_CALL)  ; undefined FUN_005a5460()
    MOV ECX,dword ptr [EBX + 0x11854]   ; 005a4f62
    MOV dword ptr [EBX + 0x11850],0x0   ; 005a4f68
    DEC ECX                             ; 005a4f72
    ADD ESP,0x4                         ; 005a4f73
    MOV dword ptr [EBX + 0x11854],ECX   ; 005a4f76
    POP EDI                             ; 005a4f7c
    POP ESI                             ; 005a4f7d
    POP EBX                             ; 005a4f7e
    RET                                 ; 005a4f7f
    PUSH 0x5f052d                       ; 005a4f80 | = "MeleeAttack"
        ;   Label: LAB_005a4f80
    PUSH 0x5f0539                       ; 005a4f85 | = "ChaseComplete"
    FLD float ptr [0x005ff8f4]          ; 005a4f8a | DAT_005ff8f4
    MOV dword ptr [EBX + 0x11398],0x0   ; 005a4f90
    PUSH EDI                            ; 005a4f9a
    FSTP float ptr [EBX + 0x11394]      ; 005a4f9b
    CALL FUN_0059d7f0                   ; 005a4fa1
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a4fa6
    PUSH 0x5f0547                       ; 005a4fa9 | = "Chasing"
    PUSH EDI                            ; 005a4fae
    CALL FUN_0059d8e0                   ; 005a4faf
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a4fb4
    POP EDI                             ; 005a4fb7
    POP ESI                             ; 005a4fb8
    POP EBX                             ; 005a4fb9
    RET                                 ; 005a4fba
    PUSH 0x1                            ; 005a4fbb
        ;   Label: LAB_005a4fbb
    PUSH 0x2                            ; 005a4fbd
    ADD EBX,0x2b4                       ; 005a4fbf
    PUSH EBX                            ; 005a4fc5
    CALL FUN_00503620                   ; 005a4fc6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a4fcb
    POP EDI                             ; 005a4fce
    POP ESI                             ; 005a4fcf
    POP EBX                             ; 005a4fd0
    RET                                 ; 005a4fd1

