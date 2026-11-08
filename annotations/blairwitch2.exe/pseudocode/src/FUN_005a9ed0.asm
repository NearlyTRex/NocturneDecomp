; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9ed0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Sleeping_005f0a46
;   undefined4 DAT_005f0a53
;   undefined4 DAT_0060088c
;
; Called Functions:
;   FUN_0040cfc0
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_00503e60
;   FUN_0059d8e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9ed0
        ;   Label: FUN_005a9ed0
    PUSH ESI                            ; 005a9ed1
    PUSH EDI                            ; 005a9ed2
    PUSH EBP                            ; 005a9ed3
    MOV EBP,ESP                         ; 005a9ed4
    SUB ESP,0x10                        ; 005a9ed6
    AND ESP,0xfffffff8                  ; 005a9ed9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a9edc
    PUSH EBX                            ; 005a9edf
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a9ee0
    CALL dword ptr [EAX + 0x17c]        ; 005a9ee6
    ADD ESP,0x4                         ; 005a9eec
    TEST EAX,EAX                        ; 005a9eef
    JNZ 0x005a9efa                      ; 005a9ef1
        ;   XREF to: 005a9efa (CONDITIONAL_JUMP)  ; LAB_005a9efa
    MOV ESP,EBP                         ; 005a9ef3
        ;   Label: LAB_005a9ef3
    POP EBP                             ; 005a9ef5
    POP EDI                             ; 005a9ef6
    POP ESI                             ; 005a9ef7
    POP EBX                             ; 005a9ef8
    RET                                 ; 005a9ef9
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a9efa
        ;   Label: LAB_005a9efa
    ADD EAX,0x20                        ; 005a9f00
    PUSH EAX                            ; 005a9f03
    PUSH EBX                            ; 005a9f04
    CALL FUN_00423850                   ; 005a9f05
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005a9f0a
    ADD ESP,0x8                         ; 005a9f10
    TEST EDX,EDX                        ; 005a9f13
    JZ 0x005a9f3e                       ; 005a9f15
        ;   XREF to: 005a9f3e (CONDITIONAL_JUMP)  ; LAB_005a9f3e
    MOV EAX,EDX                         ; 005a9f17
    LEA EDX,[EBX + 0x20]                ; 005a9f19
    FLD float ptr [EDX]                 ; 005a9f1c
    FSUB float ptr [EAX + 0x20]         ; 005a9f1e
    FMUL ST0                            ; 005a9f21
    FLD float ptr [EDX + 0x8]           ; 005a9f23
    FSUB float ptr [EAX + 0x28]         ; 005a9f26
    FMUL ST0                            ; 005a9f29
    FADDP                               ; 005a9f2b
    FSQRT                               ; 005a9f2d
    FCOMP float ptr [0x0060088c]        ; 005a9f2f | DAT_0060088c
    FNSTSW AX                           ; 005a9f35
    SAHF                                ; 005a9f37
    JA 0x005a9fb9                       ; 005a9f38
        ;   XREF to: 005a9fb9 (CONDITIONAL_JUMP)  ; LAB_005a9fb9
    MOV EAX,dword ptr [EBX + 0x1185c]   ; 005a9f3e
        ;   Label: LAB_005a9f3e
    LEA EDX,[EBX + 0x2b4]               ; 005a9f44
    TEST EAX,EAX                        ; 005a9f4a
    JBE 0x005a9fd4                      ; 005a9f4c
        ;   XREF to: 005a9fd4 (CONDITIONAL_JUMP)  ; LAB_005a9fd4
    CMP EAX,0x1                         ; 005a9f52
    JNZ 0x005a9f63                      ; 005a9f55
        ;   XREF to: 005a9f63 (CONDITIONAL_JUMP)  ; LAB_005a9f63
    PUSH EAX                            ; 005a9f57
    PUSH 0x4                            ; 005a9f58
    PUSH EDX                            ; 005a9f5a
        ;   Label: LAB_005a9f5a
    CALL FUN_00503620                   ; 005a9f5b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a9f60
    LEA ESI,[EBX + 0x2b4]               ; 005a9f63
        ;   Label: LAB_005a9f63
    PUSH ESI                            ; 005a9f69
    CALL FUN_005035c0                   ; 005a9f6a
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    ADD ESP,0x4                         ; 005a9f6f
    PUSH ESI                            ; 005a9f72
    MOV EDI,dword ptr [EAX + 0x24]      ; 005a9f73
    CALL FUN_00503e60                   ; 005a9f76
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00503e60()
    MOV dword ptr [ESP + 0x10],EAX      ; 005a9f7b
    FLD float ptr [ESP + 0x10]          ; 005a9f7f
    ADD ESP,0x4                         ; 005a9f83
    FSTP float ptr [ESP]                ; 005a9f86
    CMP EDI,0x3                         ; 005a9f89
    JNZ 0x005a9fda                      ; 005a9f8c
        ;   XREF to: 005a9fda (CONDITIONAL_JUMP)  ; LAB_005a9fda
    FLD float ptr [ESP]                 ; 005a9f8e
        ;   Label: LAB_005a9f8e
    FCOMP double ptr [0x005f0a53]       ; 005a9f91 | DAT_005f0a53
    FNSTSW AX                           ; 005a9f97
    SAHF                                ; 005a9f99
    JBE 0x005a9ef3                      ; 005a9f9a
        ;   XREF to: 005a9ef3 (CONDITIONAL_JUMP)  ; LAB_005a9ef3
    PUSH 0x1                            ; 005a9fa0
    PUSH 0x0                            ; 005a9fa2
    CALL FUN_0040cfc0                   ; 005a9fa4
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 005a9fa9
    MOV dword ptr [EBX + 0x1185c],EAX   ; 005a9fac
    MOV ESP,EBP                         ; 005a9fb2
    POP EBP                             ; 005a9fb4
    POP EDI                             ; 005a9fb5
    POP ESI                             ; 005a9fb6
    POP EBX                             ; 005a9fb7
    RET                                 ; 005a9fb8
    PUSH 0x5f0a46                       ; 005a9fb9 | = "Sleeping"
        ;   Label: LAB_005a9fb9
    ADD EBX,0x10af8                     ; 005a9fbe
    PUSH EBX                            ; 005a9fc4
    CALL FUN_0059d8e0                   ; 005a9fc5
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a9fca
    MOV ESP,EBP                         ; 005a9fcd
    POP EBP                             ; 005a9fcf
    POP EDI                             ; 005a9fd0
    POP ESI                             ; 005a9fd1
    POP EBX                             ; 005a9fd2
    RET                                 ; 005a9fd3
    PUSH 0x1                            ; 005a9fd4
        ;   Label: LAB_005a9fd4
    PUSH 0x3                            ; 005a9fd6
    JMP 0x005a9f5a                      ; 005a9fd8
        ;   XREF to: 005a9f5a (UNCONDITIONAL_JUMP)  ; LAB_005a9f5a
    CMP EDI,0x4                         ; 005a9fda
        ;   Label: LAB_005a9fda
    JZ 0x005a9f8e                       ; 005a9fdd
        ;   XREF to: 005a9f8e (CONDITIONAL_JUMP)  ; LAB_005a9f8e
    MOV ESP,EBP                         ; 005a9fdf
    POP EBP                             ; 005a9fe1
    POP EDI                             ; 005a9fe2
    POP ESI                             ; 005a9fe3
    POP EBX                             ; 005a9fe4
    RET                                 ; 005a9fe5

