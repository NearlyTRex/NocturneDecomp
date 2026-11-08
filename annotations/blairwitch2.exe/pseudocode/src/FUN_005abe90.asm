; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005abe90(int param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005aba40 at 005abadb
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f0d4d
;   TerminatedCString s_MeleeAttack_005f0d59
;   TerminatedCString s_ChaseFood_005f0d65
;   TerminatedCString s_ChaseFood_005f0d6f
;   TerminatedCString s_LeapAttack_005f0d79
;   TerminatedCString s_LeapAttack_005f0d84
;
; Called Functions:
;   FUN_0059d650
;   FUN_0059daa0
;   FUN_0059e8c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abe90
        ;   Label: FUN_005abe90
    PUSH ESI                            ; 005abe91
    MOV ESI,dword ptr [ESP + 0xc]       ; 005abe92
    MOV EBX,dword ptr [ESP + 0x14]      ; 005abe96
    TEST EBX,EBX                        ; 005abe9a
    JNZ 0x005abeda                      ; 005abe9c
        ;   XREF to: 005abeda (CONDITIONAL_JUMP)  ; LAB_005abeda
    LEA EAX,[ESI + 0x10af8]             ; 005abe9e
        ;   Label: LAB_005abe9e
    TEST EBX,EBX                        ; 005abea4
    JBE 0x005abeea                      ; 005abea6
        ;   XREF to: 005abeea (CONDITIONAL_JUMP)  ; LAB_005abeea
    CMP EBX,0x1                         ; 005abea8
    JZ 0x005abefa                       ; 005abeab
        ;   XREF to: 005abefa (CONDITIONAL_JUMP)  ; LAB_005abefa
    LEA EAX,[ESI + 0x10af8]             ; 005abead
        ;   Label: LAB_005abead
    TEST EBX,EBX                        ; 005abeb3
    JBE 0x005abf23                      ; 005abeb5
        ;   XREF to: 005abf23 (CONDITIONAL_JUMP)  ; LAB_005abf23
    CMP EBX,0x1                         ; 005abeb7
    JZ 0x005abf33                       ; 005abeba
        ;   XREF to: 005abf33 (CONDITIONAL_JUMP)  ; LAB_005abf33
    LEA EAX,[ESI + 0x10af8]             ; 005abec0
        ;   Label: LAB_005abec0
    TEST EBX,EBX                        ; 005abec6
    JBE 0x005abf60                      ; 005abec8
        ;   XREF to: 005abf60 (CONDITIONAL_JUMP)  ; LAB_005abf60
    CMP EBX,0x1                         ; 005abece
    JZ 0x005abf71                       ; 005abed1
        ;   XREF to: 005abf71 (CONDITIONAL_JUMP)  ; LAB_005abf71
    POP ESI                             ; 005abed7
        ;   Label: LAB_005abed7
    POP EBX                             ; 005abed8
    RET                                 ; 005abed9
    PUSH EBX                            ; 005abeda
        ;   Label: LAB_005abeda
    PUSH dword ptr [ESP + 0x14]         ; 005abedb
    PUSH ESI                            ; 005abedf
    CALL FUN_0059e8c0                   ; 005abee0
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e8c0()
    ADD ESP,0xc                         ; 005abee5
    JMP 0x005abe9e                      ; 005abee8
        ;   XREF to: 005abe9e (UNCONDITIONAL_JUMP)  ; LAB_005abe9e
    PUSH 0x5f0d4d                       ; 005abeea | = "MeleeAttack"
        ;   Label: LAB_005abeea
    PUSH EAX                            ; 005abeef
    CALL FUN_0059d650                   ; 005abef0
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 005abef5
    JMP 0x005abead                      ; 005abef8
        ;   XREF to: 005abead (UNCONDITIONAL_JUMP)  ; LAB_005abead
    PUSH 0x5f0d59                       ; 005abefa | = "MeleeAttack"
        ;   Label: LAB_005abefa
    PUSH EAX                            ; 005abeff
    CALL FUN_0059daa0                   ; 005abf00
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005abf05
    TEST EAX,EAX                        ; 005abf08
    JZ 0x005abead                       ; 005abf0a
        ;   XREF to: 005abead (CONDITIONAL_JUMP)  ; LAB_005abead
    PUSH dword ptr [ESP + 0x10]         ; 005abf0c
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005abf10
    PUSH ESI                            ; 005abf16
    CALL dword ptr [EAX + 0x180]        ; 005abf17
    ADD ESP,0x8                         ; 005abf1d
    POP ESI                             ; 005abf20
    POP EBX                             ; 005abf21
    RET                                 ; 005abf22
    PUSH 0x5f0d65                       ; 005abf23 | = "ChaseFood"
        ;   Label: LAB_005abf23
    PUSH EAX                            ; 005abf28
    CALL FUN_0059d650                   ; 005abf29
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 005abf2e
    JMP 0x005abec0                      ; 005abf31
        ;   XREF to: 005abec0 (UNCONDITIONAL_JUMP)  ; LAB_005abec0
    PUSH 0x5f0d6f                       ; 005abf33 | = "ChaseFood"
        ;   Label: LAB_005abf33
    PUSH EAX                            ; 005abf38
    CALL FUN_0059daa0                   ; 005abf39
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005abf3e
    TEST EAX,EAX                        ; 005abf41
    JZ 0x005abec0                       ; 005abf43
        ;   XREF to: 005abec0 (CONDITIONAL_JUMP)  ; LAB_005abec0
    PUSH dword ptr [ESP + 0x10]         ; 005abf49
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005abf4d
    PUSH ESI                            ; 005abf53
    CALL dword ptr [EAX + 0x184]        ; 005abf54
    ADD ESP,0x8                         ; 005abf5a
    POP ESI                             ; 005abf5d
    POP EBX                             ; 005abf5e
    RET                                 ; 005abf5f
    PUSH 0x5f0d79                       ; 005abf60 | = "LeapAttack"
        ;   Label: LAB_005abf60
    PUSH EAX                            ; 005abf65
    CALL FUN_0059d650                   ; 005abf66
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d650()
    ADD ESP,0x8                         ; 005abf6b
    POP ESI                             ; 005abf6e
    POP EBX                             ; 005abf6f
    RET                                 ; 005abf70
    PUSH 0x5f0d84                       ; 005abf71 | = "LeapAttack"
        ;   Label: LAB_005abf71
    PUSH EAX                            ; 005abf76
    CALL FUN_0059daa0                   ; 005abf77
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059daa0()
    ADD ESP,0x8                         ; 005abf7c
    TEST EAX,EAX                        ; 005abf7f
    JZ 0x005abed7                       ; 005abf81
        ;   XREF to: 005abed7 (CONDITIONAL_JUMP)  ; LAB_005abed7
    PUSH dword ptr [ESP + 0x10]         ; 005abf87
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005abf8b
    PUSH ESI                            ; 005abf91
    CALL dword ptr [EAX + 0x188]        ; 005abf92
    ADD ESP,0x8                         ; 005abf98
    POP ESI                             ; 005abf9b
    POP EBX                             ; 005abf9c
    RET                                 ; 005abf9d

