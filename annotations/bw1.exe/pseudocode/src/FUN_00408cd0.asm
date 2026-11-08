; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00408cd0(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   FUN_004eaa70 at 004eaa9c
;
; Called Functions:
;   FUN_005593c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408cd0
        ;   Label: FUN_00408cd0
    SUB ESP,0x2c                        ; 00408cd1
    MOV EBX,dword ptr [ESP + 0x38]      ; 00408cd4
    MOV EAX,ESP                         ; 00408cd8
    PUSH EAX                            ; 00408cda
    CALL FUN_005593c0                   ; 00408cdb
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005593c0()
    LEA EAX,[ESP + 0x4]                 ; 00408ce0
    ADD ESP,0x4                         ; 00408ce4
    XOR EDX,EDX                         ; 00408ce7
    MOV ECX,dword ptr [ESP + 0x34]      ; 00408ce9
    PUSH EAX                            ; 00408ced
    MOV dword ptr [ESP + 0x4],EDX       ; 00408cee
    MOV EDX,dword ptr [ESP + 0x38]      ; 00408cf2
    PUSH ECX                            ; 00408cf6
    MOV EDX,dword ptr [EDX + 0x154]     ; 00408cf7
    CALL dword ptr [EDX + 0x3c]         ; 00408cfd
    ADD ESP,0x8                         ; 00408d00
    CMP EAX,0x2                         ; 00408d03
    JNZ 0x00408d48                      ; 00408d06
        ;   XREF to: 00408d48 (CONDITIONAL_JUMP)  ; LAB_00408d48
    FLD float ptr [ESP + 0x14]          ; 00408d08
    FSUB float ptr [ESP + 0x3c]         ; 00408d0c
    FCOMP float ptr [EBX + 0x4]         ; 00408d10
    FNSTSW AX                           ; 00408d13
    SAHF                                ; 00408d15
    JA 0x00408d48                       ; 00408d16
        ;   XREF to: 00408d48 (CONDITIONAL_JUMP)  ; LAB_00408d48
    FLD float ptr [ESP + 0x18]          ; 00408d18
    FADD float ptr [ESP + 0x3c]         ; 00408d1c
    FCOMP float ptr [EBX + 0x4]         ; 00408d20
    FNSTSW AX                           ; 00408d23
    SAHF                                ; 00408d25
    JC 0x00408d48                       ; 00408d26
        ;   XREF to: 00408d48 (CONDITIONAL_JUMP)  ; LAB_00408d48
    FLD float ptr [EBX + 0x8]           ; 00408d28
    FMUL ST0                            ; 00408d2b
    FLD float ptr [ESP + 0x1c]          ; 00408d2d
    FADD float ptr [ESP + 0x3c]         ; 00408d31
    FLD float ptr [EBX]                 ; 00408d35
    FMUL ST0                            ; 00408d37
    FXCH                                ; 00408d39
    FMUL ST0                            ; 00408d3b
    FXCH                                ; 00408d3d
    FADDP ST2,ST0                       ; 00408d3f
    FCOMPP                              ; 00408d41
    FNSTSW AX                           ; 00408d43
    SAHF                                ; 00408d45
    JNC 0x00408d4f                      ; 00408d46
        ;   XREF to: 00408d4f (CONDITIONAL_JUMP)  ; LAB_00408d4f
    XOR EAX,EAX                         ; 00408d48
        ;   Label: LAB_00408d48
    ADD ESP,0x2c                        ; 00408d4a
    POP EBX                             ; 00408d4d
    RET                                 ; 00408d4e
    MOV EAX,0x1                         ; 00408d4f
        ;   Label: LAB_00408d4f
    ADD ESP,0x2c                        ; 00408d54
    POP EBX                             ; 00408d57
    RET                                 ; 00408d58

