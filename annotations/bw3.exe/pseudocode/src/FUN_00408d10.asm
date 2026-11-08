; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408d10(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   FUN_004d2720 at 004d274c
;
; Called Functions:
;   FUN_0053ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408d10
        ;   Label: FUN_00408d10
    SUB ESP,0x2c                        ; 00408d11
    MOV EBX,dword ptr [ESP + 0x38]      ; 00408d14
    MOV EAX,ESP                         ; 00408d18
    PUSH EAX                            ; 00408d1a
    CALL FUN_0053ed80                   ; 00408d1b
        ;   XREF to: 0053ed80 (UNCONDITIONAL_CALL)  ; undefined FUN_0053ed80()
    LEA EAX,[ESP + 0x4]                 ; 00408d20
    ADD ESP,0x4                         ; 00408d24
    XOR EDX,EDX                         ; 00408d27
    MOV ECX,dword ptr [ESP + 0x34]      ; 00408d29
    PUSH EAX                            ; 00408d2d
    MOV dword ptr [ESP + 0x4],EDX       ; 00408d2e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00408d32
    PUSH ECX                            ; 00408d36
    MOV EDX,dword ptr [EDX + 0x154]     ; 00408d37
    CALL dword ptr [EDX + 0x3c]         ; 00408d3d
    ADD ESP,0x8                         ; 00408d40
    CMP EAX,0x2                         ; 00408d43
    JNZ 0x00408d88                      ; 00408d46
        ;   XREF to: 00408d88 (CONDITIONAL_JUMP)  ; LAB_00408d88
    FLD float ptr [ESP + 0x14]          ; 00408d48
    FSUB float ptr [ESP + 0x3c]         ; 00408d4c
    FCOMP float ptr [EBX + 0x4]         ; 00408d50
    FNSTSW AX                           ; 00408d53
    SAHF                                ; 00408d55
    JA 0x00408d88                       ; 00408d56
        ;   XREF to: 00408d88 (CONDITIONAL_JUMP)  ; LAB_00408d88
    FLD float ptr [ESP + 0x18]          ; 00408d58
    FADD float ptr [ESP + 0x3c]         ; 00408d5c
    FCOMP float ptr [EBX + 0x4]         ; 00408d60
    FNSTSW AX                           ; 00408d63
    SAHF                                ; 00408d65
    JC 0x00408d88                       ; 00408d66
        ;   XREF to: 00408d88 (CONDITIONAL_JUMP)  ; LAB_00408d88
    FLD float ptr [EBX + 0x8]           ; 00408d68
    FMUL ST0                            ; 00408d6b
    FLD float ptr [ESP + 0x1c]          ; 00408d6d
    FADD float ptr [ESP + 0x3c]         ; 00408d71
    FLD float ptr [EBX]                 ; 00408d75
    FMUL ST0                            ; 00408d77
    FXCH                                ; 00408d79
    FMUL ST0                            ; 00408d7b
    FXCH                                ; 00408d7d
    FADDP ST2,ST0                       ; 00408d7f
    FCOMPP                              ; 00408d81
    FNSTSW AX                           ; 00408d83
    SAHF                                ; 00408d85
    JNC 0x00408d8f                      ; 00408d86
        ;   XREF to: 00408d8f (CONDITIONAL_JUMP)  ; LAB_00408d8f
    XOR EAX,EAX                         ; 00408d88
        ;   Label: LAB_00408d88
    ADD ESP,0x2c                        ; 00408d8a
    POP EBX                             ; 00408d8d
    RET                                 ; 00408d8e
    MOV EAX,0x1                         ; 00408d8f
        ;   Label: LAB_00408d8f
    ADD ESP,0x2c                        ; 00408d94
    POP EBX                             ; 00408d97
    RET                                 ; 00408d98

