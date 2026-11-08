; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00421de0(int param_1)
;
;
; XREF[1]:
;   FUN_00422f60 at 00422f6f
;
; Called Functions:
;   FUN_00408850
;   FUN_00421e80
;   FUN_004688e0
;   FUN_00468900
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421de0
        ;   Label: FUN_00421de0
    PUSH ESI                            ; 00421de1
    SUB ESP,0x4                         ; 00421de2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00421de5
    PUSH EBX                            ; 00421de9
    CALL FUN_00408850                   ; 00421dea
        ;   XREF to: 00408850 (UNCONDITIONAL_CALL)  ; undefined FUN_00408850()
    ADD ESP,0x4                         ; 00421def
    LEA ESI,[EBX + 0x158]               ; 00421df2
    PUSH ESI                            ; 00421df8
    CALL FUN_004688e0                   ; 00421df9
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 00421dfe
    PUSH ESI                            ; 00421e01
    CALL FUN_00468900                   ; 00421e02
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    FLD float ptr [EBX + 0x310]         ; 00421e07
    FLDZ                                ; 00421e0d
    ADD ESP,0x4                         ; 00421e0f
    MOV ESI,dword ptr [EAX + 0x100]     ; 00421e12
    FCOMPP                              ; 00421e18
    FNSTSW AX                           ; 00421e1a
    SAHF                                ; 00421e1c
    JA 0x00421e56                       ; 00421e1d
        ;   XREF to: 00421e56 (CONDITIONAL_JUMP)  ; LAB_00421e56
    MOV dword ptr [ESP],ESI             ; 00421e1f
        ;   Label: LAB_00421e1f
    FILD dword ptr [ESP]                ; 00421e22
    FCOMP float ptr [EBX + 0x310]       ; 00421e25
    FNSTSW AX                           ; 00421e2b
    SAHF                                ; 00421e2d
    JA 0x00421e3d                       ; 00421e2e
        ;   XREF to: 00421e3d (CONDITIONAL_JUMP)  ; LAB_00421e3d
    DEC ESI                             ; 00421e30
    MOV dword ptr [ESP],ESI             ; 00421e31
    FILD dword ptr [ESP]                ; 00421e34
    FSTP float ptr [EBX + 0x310]        ; 00421e37
    CMP dword ptr [EBX + 0x5e8],0x0     ; 00421e3d
        ;   Label: LAB_00421e3d
    JL 0x00421e62                       ; 00421e44
        ;   XREF to: 00421e62 (CONDITIONAL_JUMP)  ; LAB_00421e62
    MOV dword ptr [EBX + 0x328],0x0     ; 00421e46
    ADD ESP,0x4                         ; 00421e50
    POP ESI                             ; 00421e53
    POP EBX                             ; 00421e54
    RET                                 ; 00421e55
    MOV dword ptr [EBX + 0x310],0x0     ; 00421e56
        ;   Label: LAB_00421e56
    JMP 0x00421e1f                      ; 00421e60
        ;   XREF to: 00421e1f (UNCONDITIONAL_JUMP)  ; LAB_00421e1f
    PUSH EBX                            ; 00421e62
        ;   Label: LAB_00421e62
    CALL FUN_00421e80                   ; 00421e63
        ;   XREF to: 00421e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00421e80()
    ADD ESP,0x4                         ; 00421e68
    MOV dword ptr [EBX + 0x328],0x0     ; 00421e6b
    ADD ESP,0x4                         ; 00421e75
    POP ESI                             ; 00421e78
    POP EBX                             ; 00421e79
    RET                                 ; 00421e7a

