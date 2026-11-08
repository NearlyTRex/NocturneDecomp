; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004eca10(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00469550 at 0046a4eb
;   FUN_00474ef0 at 00474f24
;
; Referenced Globals:
;   TerminatedCString s_CBodyPart_005e4b83
;   TerminatedCString s_CBodyPart_005e4b8e
;
; Called Functions:
;   FUN_004eb090
;   FUN_004eb240
;   FUN_004eb3e0
;   FUN_004eb5b0
;   FUN_004eb660
;   FUN_004eb890
;   FUN_004ebc40
;   FUN_004ec090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eca10
        ;   Label: FUN_004eca10
    PUSH ESI                            ; 004eca11
    MOV EBX,dword ptr [ESP + 0xc]       ; 004eca12
    PUSH EBX                            ; 004eca16
    CALL FUN_004eb5b0                   ; 004eca17
        ;   XREF to: 004eb5b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb5b0()
    ADD ESP,0x4                         ; 004eca1c
    PUSH 0x1                            ; 004eca1f
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eca21
    PUSH EBX                            ; 004eca27
    MOV dword ptr [EBX + 0x1ff70],0x0   ; 004eca28
    CALL dword ptr [EAX + 0x15c]        ; 004eca32
    ADD ESP,0x8                         ; 004eca38
    TEST EAX,EAX                        ; 004eca3b
    JZ 0x004eca50                       ; 004eca3d
        ;   XREF to: 004eca50 (CONDITIONAL_JUMP)  ; LAB_004eca50
    PUSH EBX                            ; 004eca3f
    CALL FUN_004eb090                   ; 004eca40
        ;   XREF to: 004eb090 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb090()
    ADD ESP,0x4                         ; 004eca45
    TEST EAX,EAX                        ; 004eca48
    JNZ 0x004ecb43                      ; 004eca4a
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    PUSH 0x2                            ; 004eca50
        ;   Label: LAB_004eca50
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eca52
    PUSH EBX                            ; 004eca58
    CALL dword ptr [EAX + 0x15c]        ; 004eca59
    ADD ESP,0x8                         ; 004eca5f
    TEST EAX,EAX                        ; 004eca62
    JZ 0x004eca77                       ; 004eca64
        ;   XREF to: 004eca77 (CONDITIONAL_JUMP)  ; LAB_004eca77
    PUSH EBX                            ; 004eca66
    CALL FUN_004eb240                   ; 004eca67
        ;   XREF to: 004eb240 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb240()
    ADD ESP,0x4                         ; 004eca6c
    TEST EAX,EAX                        ; 004eca6f
    JNZ 0x004ecb43                      ; 004eca71
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    PUSH 0x4                            ; 004eca77
        ;   Label: LAB_004eca77
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eca79
    PUSH EBX                            ; 004eca7f
    CALL dword ptr [EAX + 0x15c]        ; 004eca80
    ADD ESP,0x8                         ; 004eca86
    MOV ESI,EAX                         ; 004eca89
    TEST EAX,EAX                        ; 004eca8b
    JZ 0x004ecaa5                       ; 004eca8d
        ;   XREF to: 004ecaa5 (CONDITIONAL_JUMP)  ; LAB_004ecaa5
    PUSH 0x5e4b83                       ; 004eca8f | = "!CBodyPart"
    PUSH EBX                            ; 004eca94
    CALL FUN_004ec090                   ; 004eca95
        ;   XREF to: 004ec090 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec090()
    ADD ESP,0x8                         ; 004eca9a
    TEST EAX,EAX                        ; 004eca9d
    JNZ 0x004ecb43                      ; 004eca9f
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    PUSH 0x3                            ; 004ecaa5
        ;   Label: LAB_004ecaa5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ecaa7
    PUSH EBX                            ; 004ecaad
    CALL dword ptr [EAX + 0x15c]        ; 004ecaae
    ADD ESP,0x8                         ; 004ecab4
    TEST EAX,EAX                        ; 004ecab7
    JZ 0x004ecad1                       ; 004ecab9
        ;   XREF to: 004ecad1 (CONDITIONAL_JUMP)  ; LAB_004ecad1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ecabb
    PUSH EDX                            ; 004ecabf
    PUSH EBX                            ; 004ecac0
    CALL FUN_004eb3e0                   ; 004ecac1
        ;   XREF to: 004eb3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb3e0()
    ADD ESP,0x8                         ; 004ecac6
    TEST EAX,EAX                        ; 004ecac9
    JNZ 0x004ecb43                      ; 004ecacb
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    PUSH 0x7                            ; 004ecad1
        ;   Label: LAB_004ecad1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ecad3
    PUSH EBX                            ; 004ecad9
    CALL dword ptr [EAX + 0x15c]        ; 004ecada
    ADD ESP,0x8                         ; 004ecae0
    TEST EAX,EAX                        ; 004ecae3
    JZ 0x004ecaf4                       ; 004ecae5
        ;   XREF to: 004ecaf4 (CONDITIONAL_JUMP)  ; LAB_004ecaf4
    PUSH EBX                            ; 004ecae7
    CALL FUN_004eb660                   ; 004ecae8
        ;   XREF to: 004eb660 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb660()
    ADD ESP,0x4                         ; 004ecaed
    TEST EAX,EAX                        ; 004ecaf0
    JNZ 0x004ecb43                      ; 004ecaf2
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    PUSH 0x8                            ; 004ecaf4
        ;   Label: LAB_004ecaf4
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ecaf6
    PUSH EBX                            ; 004ecafc
    CALL dword ptr [EAX + 0x15c]        ; 004ecafd
    ADD ESP,0x8                         ; 004ecb03
    TEST EAX,EAX                        ; 004ecb06
    JZ 0x004ecb17                       ; 004ecb08
        ;   XREF to: 004ecb17 (CONDITIONAL_JUMP)  ; LAB_004ecb17
    PUSH EBX                            ; 004ecb0a
    CALL FUN_004eb890                   ; 004ecb0b
        ;   XREF to: 004eb890 (UNCONDITIONAL_CALL)  ; undefined FUN_004eb890()
    ADD ESP,0x4                         ; 004ecb10
    TEST EAX,EAX                        ; 004ecb13
    JNZ 0x004ecb43                      ; 004ecb15
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    PUSH 0x9                            ; 004ecb17
        ;   Label: LAB_004ecb17
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ecb19
    PUSH EBX                            ; 004ecb1f
    CALL dword ptr [EAX + 0x15c]        ; 004ecb20
    ADD ESP,0x8                         ; 004ecb26
    TEST EAX,EAX                        ; 004ecb29
    JZ 0x004ecb3a                       ; 004ecb2b
        ;   XREF to: 004ecb3a (CONDITIONAL_JUMP)  ; LAB_004ecb3a
    PUSH EBX                            ; 004ecb2d
    CALL FUN_004ebc40                   ; 004ecb2e
        ;   XREF to: 004ebc40 (UNCONDITIONAL_CALL)  ; undefined FUN_004ebc40()
    ADD ESP,0x4                         ; 004ecb33
    TEST EAX,EAX                        ; 004ecb36
    JNZ 0x004ecb43                      ; 004ecb38
        ;   XREF to: 004ecb43 (CONDITIONAL_JUMP)  ; LAB_004ecb43
    TEST ESI,ESI                        ; 004ecb3a
        ;   Label: LAB_004ecb3a
    JNZ 0x004ecb4b                      ; 004ecb3c
        ;   XREF to: 004ecb4b (CONDITIONAL_JUMP)  ; LAB_004ecb4b
    XOR EAX,EAX                         ; 004ecb3e
        ;   Label: LAB_004ecb3e
    POP ESI                             ; 004ecb40
    POP EBX                             ; 004ecb41
    RET                                 ; 004ecb42
    MOV EAX,0x1                         ; 004ecb43
        ;   Label: LAB_004ecb43
    POP ESI                             ; 004ecb48
    POP EBX                             ; 004ecb49
    RET                                 ; 004ecb4a
    PUSH 0x5e4b8e                       ; 004ecb4b | = "CBodyPart"
        ;   Label: LAB_004ecb4b
    PUSH EBX                            ; 004ecb50
    CALL FUN_004ec090                   ; 004ecb51
        ;   XREF to: 004ec090 (UNCONDITIONAL_CALL)  ; undefined FUN_004ec090()
    ADD ESP,0x8                         ; 004ecb56
    TEST EAX,EAX                        ; 004ecb59
    JZ 0x004ecb3e                       ; 004ecb5b
        ;   XREF to: 004ecb3e (CONDITIONAL_JUMP)  ; LAB_004ecb3e
    MOV EAX,0x1                         ; 004ecb5d
    POP ESI                             ; 004ecb62
    POP EBX                             ; 004ecb63
    RET                                 ; 004ecb64

