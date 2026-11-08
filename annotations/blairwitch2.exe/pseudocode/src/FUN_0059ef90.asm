; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059ef90(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ChaseComplete_005ef970
;
; Called Functions:
;   FUN_00423000
;   FUN_00503620
;   FUN_0059d880
;   FUN_0059d8e0
;   FUN_0059db90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ef90
        ;   Label: FUN_0059ef90
    PUSH EBP                            ; 0059ef91
    MOV EBP,ESP                         ; 0059ef92
    SUB ESP,0x10                        ; 0059ef94
    MOV EBX,dword ptr [EBP + 0xc]       ; 0059ef97
    CMP dword ptr [EBX + 0x10a6c],0x0   ; 0059ef9a
    JZ 0x0059efb6                       ; 0059efa1
        ;   XREF to: 0059efb6 (CONDITIONAL_JUMP)  ; LAB_0059efb6
    PUSH dword ptr [EBP + 0x10]         ; 0059efa3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059efa6
    PUSH EBX                            ; 0059efac
    CALL dword ptr [EAX + 0x150]        ; 0059efad
    ADD ESP,0x8                         ; 0059efb3
    PUSH EBX                            ; 0059efb6
        ;   Label: LAB_0059efb6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0059efb7
    CALL dword ptr [EAX + 0x17c]        ; 0059efbd
    ADD ESP,0x4                         ; 0059efc3
    TEST EAX,EAX                        ; 0059efc6
    JZ 0x0059f07e                       ; 0059efc8
        ;   XREF to: 0059f07e (CONDITIONAL_JUMP)  ; LAB_0059f07e
    MOV ECX,dword ptr [EBX + 0x10a6c]   ; 0059efce
    TEST ECX,ECX                        ; 0059efd4
    JNZ 0x0059f003                      ; 0059efd6
        ;   XREF to: 0059f003 (CONDITIONAL_JUMP)  ; LAB_0059f003
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0059efd8
    LEA EDX,[EBX + 0x20]                ; 0059efde
    FLD float ptr [EAX + 0x20]          ; 0059efe1
    FSUB float ptr [EDX]                ; 0059efe4
    FMUL ST0                            ; 0059efe6
    FLD float ptr [EAX + 0x28]          ; 0059efe8
    FSUB float ptr [EDX + 0x8]          ; 0059efeb
    FMUL ST0                            ; 0059efee
    FADDP                               ; 0059eff0
    FSQRT                               ; 0059eff2
    FCOMP float ptr [EBX + 0x11374]     ; 0059eff4
    FNSTSW AX                           ; 0059effa
    SAHF                                ; 0059effc
    JNC 0x0059f083                      ; 0059effd
        ;   XREF to: 0059f083 (CONDITIONAL_JUMP)  ; LAB_0059f083
    PUSH 0x3e32b8c2                     ; 0059f003
        ;   Label: LAB_0059f003
    LEA EAX,[EBX + 0x11424]             ; 0059f008
    PUSH dword ptr [EBX + 0x11394]      ; 0059f00e
    PUSH EAX                            ; 0059f014
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0059f015
    PUSH EAX                            ; 0059f01b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0059f01c
    CALL dword ptr [EDX + 0xcc]         ; 0059f022
    ADD ESP,0x4                         ; 0059f028
    PUSH EAX                            ; 0059f02b
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0059f02c
    ADD EAX,0x20                        ; 0059f032
    PUSH EAX                            ; 0059f035
    PUSH EBX                            ; 0059f036
    CALL FUN_00423000                   ; 0059f037
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 0059f03c
    TEST EAX,EAX                        ; 0059f03f
    JNZ 0x0059f0a4                      ; 0059f041
        ;   XREF to: 0059f0a4 (CONDITIONAL_JUMP)  ; LAB_0059f0a4
    LEA ECX,[EBX + 0x20]                ; 0059f043
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0059f046
    FLD float ptr [ECX]                 ; 0059f04c
    FSUB float ptr [EAX + 0x20]         ; 0059f04e
    FMUL ST0                            ; 0059f051
    FLD float ptr [ECX + 0x8]           ; 0059f053
    FSUB float ptr [EAX + 0x28]         ; 0059f056
    FMUL ST0                            ; 0059f059
    FADDP                               ; 0059f05b
    FSQRT                               ; 0059f05d
    MOV EDX,dword ptr [EBX + 0x11388]   ; 0059f05f
    FCOMP float ptr [EBX + 0x11398]     ; 0059f065
    FNSTSW AX                           ; 0059f06b
    SAHF                                ; 0059f06d
    JBE 0x0059f07a                      ; 0059f06e
        ;   XREF to: 0059f07a (CONDITIONAL_JUMP)  ; LAB_0059f07a
    CMP EDX,EDX                         ; 0059f070
    JNZ 0x0059f07a                      ; 0059f072
        ;   XREF to: 0059f07a (CONDITIONAL_JUMP)  ; LAB_0059f07a
    MOV EDX,dword ptr [EBX + 0x1138c]   ; 0059f074
    TEST EDX,EDX                        ; 0059f07a
        ;   Label: LAB_0059f07a
    JGE 0x0059f0bd                      ; 0059f07c
        ;   XREF to: 0059f0bd (CONDITIONAL_JUMP)  ; LAB_0059f0bd
    MOV ESP,EBP                         ; 0059f07e
        ;   Label: LAB_0059f07e
    POP EBP                             ; 0059f080
    POP EBX                             ; 0059f081
    RET                                 ; 0059f082
    ADD EBX,0x10af8                     ; 0059f083
        ;   Label: LAB_0059f083
    PUSH EBX                            ; 0059f089
    MOV dword ptr [EBX + -0x80],ECX     ; 0059f08a
    CALL FUN_0059db90                   ; 0059f08d
        ;   XREF to: 0059db90 (UNCONDITIONAL_CALL)  ; undefined FUN_0059db90()
    ADD ESP,0x4                         ; 0059f092
    PUSH EAX                            ; 0059f095
    PUSH EBX                            ; 0059f096
    CALL FUN_0059d8e0                   ; 0059f097
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 0059f09c
    MOV ESP,EBP                         ; 0059f09f
    POP EBP                             ; 0059f0a1
    POP EBX                             ; 0059f0a2
    RET                                 ; 0059f0a3
    PUSH 0x5ef970                       ; 0059f0a4 | = "ChaseComplete"
        ;   Label: LAB_0059f0a4
    ADD EBX,0x10af8                     ; 0059f0a9
    PUSH EBX                            ; 0059f0af
    CALL FUN_0059d880                   ; 0059f0b0
        ;   XREF to: 0059d880 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d880()
    ADD ESP,0x8                         ; 0059f0b5
    MOV ESP,EBP                         ; 0059f0b8
    POP EBP                             ; 0059f0ba
    POP EBX                             ; 0059f0bb
    RET                                 ; 0059f0bc
    PUSH 0x1                            ; 0059f0bd
        ;   Label: LAB_0059f0bd
    PUSH EDX                            ; 0059f0bf
    ADD EBX,0x2b4                       ; 0059f0c0
    PUSH EBX                            ; 0059f0c6
    CALL FUN_00503620                   ; 0059f0c7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0059f0cc
    MOV ESP,EBP                         ; 0059f0cf
    POP EBP                             ; 0059f0d1
    POP EBX                             ; 0059f0d2
    RET                                 ; 0059f0d3

