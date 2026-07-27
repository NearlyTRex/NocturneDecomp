; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtri_cpp_FUN_0046dc10(float param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0046dc04 = 0046dcc4
;   undefined1* PTR_caseD_3_0046dc0c = 0046dca9
;   undefined4 DAT_01bc9c7c
;   undefined4 DAT_01bc9d40
;
; Called Functions:
;   core_dtri.cpp_clipLineToPlane_FUN_0046d4e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046dc10
        ;   Label: core_dtri.cpp_FUN_0046dc10
    PUSH ESI                            ; 0046dc11
    PUSH EDI                            ; 0046dc12
    PUSH EBP                            ; 0046dc13
    MOV EBP,ESP                         ; 0046dc14
    SUB ESP,0x8                         ; 0046dc16
    AND ESP,0xfffffff8                  ; 0046dc19
    MOV EBX,dword ptr [0x01bc9d40]      ; 0046dc1c | DAT_01bc9d40
    MOV EDX,dword ptr [EBP + 0x14]      ; 0046dc22
    MOV dword ptr [ESP],EDX             ; 0046dc25
    MOV EDX,dword ptr [0x01bc9c7c]      ; 0046dc28 | DAT_01bc9c7c
    XOR EDI,EDI                         ; 0046dc2e
    TEST EDX,EDX                        ; 0046dc30
    JLE 0x0046dcb7                      ; 0046dc32
        ;   XREF to: 0046dcb7 (CONDITIONAL_JUMP)  ; LAB_0046dcb7
    MOV ESI,0x1bc9c80                   ; 0046dc38
    MOV EAX,[0x01bc9c7c]                ; 0046dc3d | DAT_01bc9c7c
        ;   Label: LAB_0046dc3d
    LEA ECX,[EDI + 0x1]                 ; 0046dc42
    CMP ECX,EAX                         ; 0046dc45
    JNZ 0x0046dc4b                      ; 0046dc47
        ;   XREF to: 0046dc4b (CONDITIONAL_JUMP)  ; LAB_0046dc4b
    XOR ECX,EAX                         ; 0046dc49
    IMUL ECX,ECX,0xc                    ; 0046dc4b
        ;   Label: LAB_0046dc4b
    MOV EAX,0x1bc9c80                   ; 0046dc4e
    FLD float ptr [ESI + 0x8]           ; 0046dc53
    ADD EAX,ECX                         ; 0046dc56
    MOV EDX,ESI                         ; 0046dc58
    MOV dword ptr [ESP + 0x4],EAX       ; 0046dc5a
    XOR ECX,ECX                         ; 0046dc5e
    FCOMP float ptr [ESP]               ; 0046dc60
    FNSTSW AX                           ; 0046dc63
    SAHF                                ; 0046dc65
    JNC 0x0046dc6d                      ; 0046dc66
        ;   XREF to: 0046dc6d (CONDITIONAL_JUMP)  ; LAB_0046dc6d
    MOV ECX,0x1                         ; 0046dc68
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046dc6d
        ;   Label: LAB_0046dc6d
    FLD float ptr [EAX + 0x8]           ; 0046dc71
    FCOMP float ptr [ESP]               ; 0046dc74
    FNSTSW AX                           ; 0046dc77
    SAHF                                ; 0046dc79
    JNC 0x0046dc7f                      ; 0046dc7a
        ;   XREF to: 0046dc7f (CONDITIONAL_JUMP)  ; LAB_0046dc7f
    OR CL,0x2                           ; 0046dc7c
    CMP ECX,0x3                         ; 0046dc7f
        ;   Label: LAB_0046dc7f
    JA 0x0046dca9                       ; 0046dc82
        ;   XREF to: 0046dca9 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x46dc00]  ; 0046dc84 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL ECX,EBX,0xc                    ; 0046dc8b
        ;   Label: caseD_0
    ADD ECX,0x1bc9d44                   ; 0046dc8e
    CMP ECX,EDX                         ; 0046dc94
    JZ 0x0046dca8                       ; 0046dc96
        ;   XREF to: 0046dca8 (CONDITIONAL_JUMP)  ; LAB_0046dca8
    MOV EAX,dword ptr [EDX]             ; 0046dc98
    MOV dword ptr [ECX],EAX             ; 0046dc9a
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046dc9c
    MOV dword ptr [ECX + 0x4],EAX       ; 0046dc9f
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046dca2
    MOV dword ptr [ECX + 0x8],EAX       ; 0046dca5
    INC EBX                             ; 0046dca8
        ;   Label: LAB_0046dca8
    MOV ECX,dword ptr [0x01bc9c7c]      ; 0046dca9 | DAT_01bc9c7c
        ;   Label: caseD_3
    INC EDI                             ; 0046dcaf
    ADD ESI,0xc                         ; 0046dcb0
    CMP EDI,ECX                         ; 0046dcb3
    JL 0x0046dc3d                       ; 0046dcb5
        ;   XREF to: 0046dc3d (CONDITIONAL_JUMP)  ; LAB_0046dc3d
    MOV dword ptr [0x01bc9d40],EBX      ; 0046dcb7 | DAT_01bc9d40
        ;   Label: LAB_0046dcb7
    MOV ESP,EBP                         ; 0046dcbd
    POP EBP                             ; 0046dcbf
    POP EDI                             ; 0046dcc0
    POP ESI                             ; 0046dcc1
    POP EBX                             ; 0046dcc2
    RET                                 ; 0046dcc3
    IMUL ECX,EBX,0xc                    ; 0046dcc4
        ;   Label: caseD_1
    FLD float ptr [ESP]                 ; 0046dcc7
    SUB ESP,0x8                         ; 0046dcca
    FSTP double ptr [ESP]               ; 0046dccd
    PUSH 0xbff00000                     ; 0046dcd0
    PUSH 0x0                            ; 0046dcd5
    PUSH 0x0                            ; 0046dcd7
    PUSH 0x0                            ; 0046dcd9
    PUSH 0x0                            ; 0046dcdb
    PUSH 0x0                            ; 0046dcdd
    ADD ECX,0x1bc9d44                   ; 0046dcdf
    PUSH ECX                            ; 0046dce5
    PUSH EDX                            ; 0046dce6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0046dce7
    PUSH EAX                            ; 0046dceb
    MOV dword ptr [0x01bc9d40],EBX      ; 0046dcec | DAT_01bc9d40
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046dcf2
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_0046d4e0()
    MOV EBX,dword ptr [0x01bc9d40]      ; 0046dcf7 | DAT_01bc9d40
    ADD ESP,0x2c                        ; 0046dcfd
    JMP 0x0046dca8                      ; 0046dd00
        ;   XREF to: 0046dca8 (UNCONDITIONAL_JUMP)  ; LAB_0046dca8
    IMUL ECX,EBX,0xc                    ; 0046dd02
        ;   Label: caseD_2
    ADD ECX,0x1bc9d44                   ; 0046dd05
    CMP ECX,EDX                         ; 0046dd0b
    JZ 0x0046dd1f                       ; 0046dd0d
        ;   XREF to: 0046dd1f (CONDITIONAL_JUMP)  ; LAB_0046dd1f
    MOV EAX,dword ptr [EDX]             ; 0046dd0f
    MOV dword ptr [ECX],EAX             ; 0046dd11
    MOV EAX,dword ptr [EDX + 0x4]       ; 0046dd13
    MOV dword ptr [ECX + 0x4],EAX       ; 0046dd16
    MOV EAX,dword ptr [EDX + 0x8]       ; 0046dd19
    MOV dword ptr [ECX + 0x8],EAX       ; 0046dd1c
    INC EBX                             ; 0046dd1f
        ;   Label: LAB_0046dd1f
    IMUL ECX,EBX,0xc                    ; 0046dd20
    FLD float ptr [ESP]                 ; 0046dd23
    SUB ESP,0x8                         ; 0046dd26
    FSTP double ptr [ESP]               ; 0046dd29
    PUSH 0xbff00000                     ; 0046dd2c
    PUSH 0x0                            ; 0046dd31
    PUSH 0x0                            ; 0046dd33
    PUSH 0x0                            ; 0046dd35
    PUSH 0x0                            ; 0046dd37
    PUSH 0x0                            ; 0046dd39
    ADD ECX,0x1bc9d44                   ; 0046dd3b
    PUSH ECX                            ; 0046dd41
    MOV ECX,dword ptr [ESP + 0x28]      ; 0046dd42
    PUSH ECX                            ; 0046dd46
    PUSH EDX                            ; 0046dd47
    MOV dword ptr [0x01bc9d40],EBX      ; 0046dd48 | DAT_01bc9d40
    CALL core_dtri.cpp_clipLineToPlane_FUN_0046d4e0 ; 0046dd4e
        ;   XREF to: 0046d4e0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_clipLineToPlane_FUN_0046d4e0()
    MOV EBX,dword ptr [0x01bc9d40]      ; 0046dd53 | DAT_01bc9d40
    ADD ESP,0x2c                        ; 0046dd59
    JMP 0x0046dca8                      ; 0046dd5c
        ;   XREF to: 0046dca8 (UNCONDITIONAL_JUMP)  ; LAB_0046dca8

