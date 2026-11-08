; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408f00(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   FUN_004ce500 at 004ce52c
;
; Called Functions:
;   FUN_00537fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408f00
        ;   Label: FUN_00408f00
    SUB ESP,0x2c                        ; 00408f01
    MOV EBX,dword ptr [ESP + 0x38]      ; 00408f04
    MOV EAX,ESP                         ; 00408f08
    PUSH EAX                            ; 00408f0a
    CALL FUN_00537fa0                   ; 00408f0b
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00537fa0()
    LEA EAX,[ESP + 0x4]                 ; 00408f10
    ADD ESP,0x4                         ; 00408f14
    XOR EDX,EDX                         ; 00408f17
    MOV ECX,dword ptr [ESP + 0x34]      ; 00408f19
    PUSH EAX                            ; 00408f1d
    MOV dword ptr [ESP + 0x4],EDX       ; 00408f1e
    MOV EDX,dword ptr [ESP + 0x38]      ; 00408f22
    PUSH ECX                            ; 00408f26
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 00408f27
    CALL dword ptr [EDX + 0x44]         ; 00408f2d
    ADD ESP,0x8                         ; 00408f30
    CMP EAX,0x2                         ; 00408f33
    JNZ 0x00408f78                      ; 00408f36
        ;   XREF to: 00408f78 (CONDITIONAL_JUMP)  ; LAB_00408f78
    FLD float ptr [ESP + 0x14]          ; 00408f38
    FSUB float ptr [ESP + 0x3c]         ; 00408f3c
    FCOMP float ptr [EBX + 0x4]         ; 00408f40
    FNSTSW AX                           ; 00408f43
    SAHF                                ; 00408f45
    JA 0x00408f78                       ; 00408f46
        ;   XREF to: 00408f78 (CONDITIONAL_JUMP)  ; LAB_00408f78
    FLD float ptr [ESP + 0x18]          ; 00408f48
    FADD float ptr [ESP + 0x3c]         ; 00408f4c
    FCOMP float ptr [EBX + 0x4]         ; 00408f50
    FNSTSW AX                           ; 00408f53
    SAHF                                ; 00408f55
    JC 0x00408f78                       ; 00408f56
        ;   XREF to: 00408f78 (CONDITIONAL_JUMP)  ; LAB_00408f78
    FLD float ptr [EBX + 0x8]           ; 00408f58
    FMUL ST0                            ; 00408f5b
    FLD float ptr [ESP + 0x1c]          ; 00408f5d
    FADD float ptr [ESP + 0x3c]         ; 00408f61
    FLD float ptr [EBX]                 ; 00408f65
    FMUL ST0                            ; 00408f67
    FXCH                                ; 00408f69
    FMUL ST0                            ; 00408f6b
    FXCH                                ; 00408f6d
    FADDP ST2,ST0                       ; 00408f6f
    FCOMPP                              ; 00408f71
    FNSTSW AX                           ; 00408f73
    SAHF                                ; 00408f75
    JNC 0x00408f7f                      ; 00408f76
        ;   XREF to: 00408f7f (CONDITIONAL_JUMP)  ; LAB_00408f7f
    XOR EAX,EAX                         ; 00408f78
        ;   Label: LAB_00408f78
    ADD ESP,0x2c                        ; 00408f7a
    POP EBX                             ; 00408f7d
    RET                                 ; 00408f7e
    MOV EAX,0x1                         ; 00408f7f
        ;   Label: LAB_00408f7f
    ADD ESP,0x2c                        ; 00408f84
    POP EBX                             ; 00408f87
    RET                                 ; 00408f88

