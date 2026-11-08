; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d2af0(int param_1,int param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined        Stack[-0x1c]:1  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00526e30 at 00526ed5
;
; Referenced Globals:
;   TerminatedCString s_CHero_startGettingGrabbe_005c4c28
;   TerminatedCString s_current_motion_is_s_005c4c53
;   TerminatedCString s_GETGRABBED_005c4c6b
;   TerminatedCString s_GETGRABBED_FRONT_005c4c76
;   TerminatedCString s_GETGRABBED_FRONT_005c4c87
;   TerminatedCString s_GETGRABBED_BACK_005c4c98
;   TerminatedCString s_GETGRABBED_005c4ca8
;   TerminatedCString s_We_are_grabbed_005c4cb3
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_00408bf0
;   FUN_00441ff0
;   FUN_004fba50
;   FUN_004fc070
;   FUN_004fc160
;   FUN_004fc310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2af0
        ;   Label: FUN_004d2af0
    PUSH ESI                            ; 004d2af1
    PUSH EDI                            ; 004d2af2
    PUSH EBP                            ; 004d2af3
    SUB ESP,0x18                        ; 004d2af4
    MOV EBP,dword ptr [ESP + 0x30]      ; 004d2af7
    TEST EBP,EBP                        ; 004d2afb
    JNZ 0x004d2b09                      ; 004d2afd
        ;   XREF to: 004d2b09 (CONDITIONAL_JUMP)  ; LAB_004d2b09
    XOR EAX,EAX                         ; 004d2aff
        ;   Label: LAB_004d2aff
    ADD ESP,0x18                        ; 004d2b01
    POP EBP                             ; 004d2b04
    POP EDI                             ; 004d2b05
    POP ESI                             ; 004d2b06
    POP EBX                             ; 004d2b07
    RET                                 ; 004d2b08
    MOV EDX,dword ptr [ESP + 0x34]      ; 004d2b09
        ;   Label: LAB_004d2b09
    PUSH EDX                            ; 004d2b0d
    PUSH EBP                            ; 004d2b0e
    PUSH 0x5c4c28                       ; 004d2b0f | = "CHero::startGettingGrabbed by %s, typ..."
    MOV ECX,dword ptr [0x005f1690]      ; 004d2b14 | PTR_DAT_005f1690
    PUSH ECX                            ; 004d2b1a | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d2b1b
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x10                        ; 004d2b20
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004d2b23
    ADD EBX,0x158                       ; 004d2b27
    PUSH EBX                            ; 004d2b2d
    CALL FUN_004fc070                   ; 004d2b2e
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 004d2b33
    PUSH EAX                            ; 004d2b36
    PUSH 0x5c4c53                       ; 004d2b37 | = "  current motion is %s\n"
    MOV ESI,dword ptr [0x005f1690]      ; 004d2b3c | PTR_DAT_005f1690
    PUSH ESI                            ; 004d2b42 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d2b43
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 004d2b48
    MOV EDI,dword ptr [ESP + 0x34]      ; 004d2b4b
    TEST EDI,EDI                        ; 004d2b4f
    JNZ 0x004d2bce                      ; 004d2b51
        ;   XREF to: 004d2bce (CONDITIONAL_JUMP)  ; LAB_004d2bce
    PUSH EDI                            ; 004d2b57
    PUSH 0x5c4c6b                       ; 004d2b58 | = "GETGRABBED"
    PUSH EBX                            ; 004d2b5d
    CALL FUN_004fc310                   ; 004d2b5e
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 004d2b63
    PUSH EAX                            ; 004d2b66
    CALL FUN_004fba50                   ; 004d2b67
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 004d2b6c
    TEST EAX,EAX                        ; 004d2b6f
    JL 0x004d2aff                       ; 004d2b71
        ;   XREF to: 004d2aff (CONDITIONAL_JUMP)  ; LAB_004d2aff
    PUSH EDI                            ; 004d2b73
    PUSH 0x5c4c76                       ; 004d2b74 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004d2b79
    CALL FUN_004fc310                   ; 004d2b7a
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 004d2b7f
    PUSH EAX                            ; 004d2b82
    CALL FUN_004fba50                   ; 004d2b83
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 004d2b88
    TEST EAX,EAX                        ; 004d2b8b
    JL 0x004d2c10                       ; 004d2b8d
        ;   XREF to: 004d2c10 (CONDITIONAL_JUMP)  ; LAB_004d2c10
    LEA EAX,[EBP + 0x20]                ; 004d2b93
    PUSH EAX                            ; 004d2b96
    MOV EAX,dword ptr [ESP + 0x30]      ; 004d2b97
    PUSH EAX                            ; 004d2b9b
    LEA ESI,[ESP + 0x8]                 ; 004d2b9c
    LEA EDI,[ESP + 0x14]                ; 004d2ba0
    CALL FUN_00408bf0                   ; 004d2ba4
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bf0()
    LEA ESI,[ESP + 0x8]                 ; 004d2ba9
    ADD ESP,0x8                         ; 004d2bad
    MOVSD ES:EDI,ESI                    ; 004d2bb0
    MOVSD ES:EDI,ESI                    ; 004d2bb1
    MOVSD ES:EDI,ESI                    ; 004d2bb2
    FLDZ                                ; 004d2bb3
    FCOMP float ptr [ESP + 0x14]        ; 004d2bb5
    FNSTSW AX                           ; 004d2bb9
    SAHF                                ; 004d2bbb
    JNC 0x004d2c07                      ; 004d2bbc
        ;   XREF to: 004d2c07 (CONDITIONAL_JUMP)  ; LAB_004d2c07
    PUSH 0x1                            ; 004d2bbe
    PUSH 0x5c4c87                       ; 004d2bc0 | = "GETGRABBED_FRONT"
    PUSH EBX                            ; 004d2bc5
        ;   Label: LAB_004d2bc5
    CALL FUN_004fc160                   ; 004d2bc6
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc160()
    ADD ESP,0xc                         ; 004d2bcb
    PUSH 0x5c4cb3                       ; 004d2bce | = "  We are grabbed\n"
        ;   Label: LAB_004d2bce
    MOV EDX,dword ptr [0x005f1690]      ; 004d2bd3 | PTR_DAT_005f1690
    PUSH EDX                            ; 004d2bd9 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d2bda
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x8                         ; 004d2bdf
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004d2be2
    MOV EBX,dword ptr [ESP + 0x2c]      ; 004d2be6
    MOV dword ptr [EAX + 0x26fc],EBP    ; 004d2bea
    MOV EAX,dword ptr [ESP + 0x34]      ; 004d2bf0
    MOV dword ptr [EBX + 0x2700],EAX    ; 004d2bf4
    MOV EAX,0x1                         ; 004d2bfa
    ADD ESP,0x18                        ; 004d2bff
    POP EBP                             ; 004d2c02
    POP EDI                             ; 004d2c03
    POP ESI                             ; 004d2c04
    POP EBX                             ; 004d2c05
    RET                                 ; 004d2c06
    PUSH 0x1                            ; 004d2c07
        ;   Label: LAB_004d2c07
    PUSH 0x5c4c98                       ; 004d2c09 | = "GETGRABBED_BACK"
    JMP 0x004d2bc5                      ; 004d2c0e
        ;   XREF to: 004d2bc5 (UNCONDITIONAL_JUMP)  ; LAB_004d2bc5
    PUSH 0x1                            ; 004d2c10
        ;   Label: LAB_004d2c10
    PUSH 0x5c4ca8                       ; 004d2c12 | = "GETGRABBED"
    JMP 0x004d2bc5                      ; 004d2c17
        ;   XREF to: 004d2bc5 (UNCONDITIONAL_JUMP)  ; LAB_004d2bc5

