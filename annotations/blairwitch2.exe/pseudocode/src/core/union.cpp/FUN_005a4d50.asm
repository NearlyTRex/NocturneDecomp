; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_FUN_005a4d50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f04d9
;   TerminatedCString s_Animation_005f04df
;   TerminatedCString s_Chasing_005f04e9
;   TerminatedCString s_RangeAttack_005f04f1
;   TerminatedCString s_ChaseComplete_005f04fd
;   undefined4 DAT_005ff8f0
;   undefined4 DAT_005ff8f4
;
; Called Functions:
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_0059d350.cpp_FUN_0059dae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4d50
        ;   Label: core_union.cpp_FUN_005a4d50
    PUSH ESI                            ; 005a4d51
    PUSH EBP                            ; 005a4d52
    MOV EBP,ESP                         ; 005a4d53
    SUB ESP,0x14                        ; 005a4d55
    AND ESP,0xfffffff8                  ; 005a4d58
    MOV EBX,dword ptr [EBP + 0x10]      ; 005a4d5b
    PUSH 0x5f04d9                       ; 005a4d5e | = "Death"
    LEA ESI,[EBX + 0x10af8]             ; 005a4d63
    PUSH ESI                            ; 005a4d69
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4d6a
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4d6f
    TEST EAX,EAX                        ; 005a4d72
    JZ 0x005a4d85                       ; 005a4d74
        ;   XREF to: 005a4d85 (CONDITIONAL_JUMP)  ; LAB_005a4d85
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a4d76
        ;   Label: LAB_005a4d76
    JNZ 0x005a4db6                      ; 005a4d7d
        ;   XREF to: 005a4db6 (CONDITIONAL_JUMP)  ; LAB_005a4db6
    MOV ESP,EBP                         ; 005a4d7f
        ;   Label: LAB_005a4d7f
    POP EBP                             ; 005a4d81
    POP ESI                             ; 005a4d82
    POP EBX                             ; 005a4d83
    RET                                 ; 005a4d84
    PUSH 0x5f04df                       ; 005a4d85 | = "Animation"
        ;   Label: LAB_005a4d85
    PUSH ESI                            ; 005a4d8a
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4d8b
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4d90
    TEST EAX,EAX                        ; 005a4d93
    JNZ 0x005a4d76                      ; 005a4d95
        ;   XREF to: 005a4d76 (CONDITIONAL_JUMP)  ; LAB_005a4d76
    PUSH EBX                            ; 005a4d97
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a4d98
    CALL dword ptr [EAX + 0x17c]        ; 005a4d9e
    ADD ESP,0x4                         ; 005a4da4
    CMP dword ptr [EBX + 0x10a78],0x0   ; 005a4da7
    JNZ 0x005a4db6                      ; 005a4dae
        ;   XREF to: 005a4db6 (CONDITIONAL_JUMP)  ; LAB_005a4db6
    MOV ESP,EBP                         ; 005a4db0
    POP EBP                             ; 005a4db2
    POP ESI                             ; 005a4db3
    POP EBX                             ; 005a4db4
    RET                                 ; 005a4db5
    PUSH 0x5f04e9                       ; 005a4db6 | = "Chasing"
        ;   Label: LAB_005a4db6
    LEA ESI,[EBX + 0x10af8]             ; 005a4dbb
    PUSH ESI                            ; 005a4dc1
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005a4dc2
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a4dc7
    TEST EAX,EAX                        ; 005a4dca
    JZ 0x005a4d7f                       ; 005a4dcc
        ;   XREF to: 005a4d7f (CONDITIONAL_JUMP)  ; LAB_005a4d7f
    PUSH 0x5f04f1                       ; 005a4dce | = "RangeAttack"
    PUSH 0x5f04fd                       ; 005a4dd3 | = "ChaseComplete"
    PUSH ESI                            ; 005a4dd8
    CALL unkaddr_0059d350.cpp_FUN_0059dae0 ; 005a4dd9
        ;   XREF to: 0059dae0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dae0()
    ADD ESP,0xc                         ; 005a4dde
    TEST EAX,EAX                        ; 005a4de1
    JZ 0x005a4d7f                       ; 005a4de3
        ;   XREF to: 005a4d7f (CONDITIONAL_JUMP)  ; LAB_005a4d7f
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005a4de5
    LEA EAX,[EBX + 0x20]                ; 005a4deb
    FLD float ptr [EDX + 0x28]          ; 005a4dee
    FLD float ptr [EDX + 0x20]          ; 005a4df1
    FSUB float ptr [EAX]                ; 005a4df4
    FXCH                                ; 005a4df6
    FSUB float ptr [EAX + 0x8]          ; 005a4df8
    FXCH                                ; 005a4dfb
    FST float ptr [ESP + 0x8]           ; 005a4dfd
    FMUL float ptr [ESP + 0x8]          ; 005a4e01
    FXCH                                ; 005a4e05
    FST float ptr [ESP + 0x4]           ; 005a4e07
    FMUL float ptr [ESP + 0x4]          ; 005a4e0b
    FXCH                                ; 005a4e0f
    FSTP float ptr [ESP]                ; 005a4e11
    FSTP float ptr [ESP + 0x10]         ; 005a4e14
    FLD float ptr [ESP]                 ; 005a4e18
    FADD float ptr [ESP + 0x10]         ; 005a4e1b
    FSQRT                               ; 005a4e1f
    FST float ptr [ESP + 0xc]           ; 005a4e21
    FCOMP float ptr [0x005ff8f0]        ; 005a4e25 | DAT_005ff8f0
    FNSTSW AX                           ; 005a4e2b
    SAHF                                ; 005a4e2d
    JNC 0x005a4d7f                      ; 005a4e2e
        ;   XREF to: 005a4d7f (CONDITIONAL_JUMP)  ; LAB_005a4d7f
    FLD float ptr [ESP + 0xc]           ; 005a4e34
    FCOMP float ptr [0x005ff8f4]        ; 005a4e38 | DAT_005ff8f4
    FNSTSW AX                           ; 005a4e3e
    SAHF                                ; 005a4e40
    JBE 0x005a4d7f                      ; 005a4e41
        ;   XREF to: 005a4d7f (CONDITIONAL_JUMP)  ; LAB_005a4d7f
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a4e47
    MOV dword ptr [EBX + 0x11394],EAX   ; 005a4e4b
    MOV ESP,EBP                         ; 005a4e51
    POP EBP                             ; 005a4e53
    POP ESI                             ; 005a4e54
    POP EBX                             ; 005a4e55
    RET                                 ; 005a4e56

