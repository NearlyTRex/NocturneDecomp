; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00473bc0(undefined4 param_1,float *param_2,float *param_3)
;
;
; XREF[1]:
;   core_drip.cpp_FUN_0046ecf0 at 0046ed8e
;
; Called Functions:
;   core_dtrace.cpp_FUN_00473cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473bc0
        ;   Label: core_dtrace.cpp_FUN_00473bc0
    PUSH EDI                            ; 00473bc1
    PUSH EBP                            ; 00473bc2
    MOV EBP,ESP                         ; 00473bc3
    SUB ESP,0x58                        ; 00473bc5
    AND ESP,0xfffffff8                  ; 00473bc8
    MOV EBX,ESI                         ; 00473bcb
    MOV ESI,dword ptr [EBP + 0x18]      ; 00473bcd
    PUSH 0x0                            ; 00473bd0
    PUSH 0x0                            ; 00473bd2
    PUSH ESI                            ; 00473bd4
    MOV EDX,dword ptr [EBP + 0x14]      ; 00473bd5
    PUSH EDX                            ; 00473bd8
    MOV ECX,dword ptr [EBP + 0x10]      ; 00473bd9
    PUSH ECX                            ; 00473bdc
    CALL core_dtrace.cpp_FUN_00473cd0   ; 00473bdd
        ;   XREF to: 00473cd0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00473cd0()
    MOV dword ptr [ESP + 0x68],EAX      ; 00473be2
    FLD float ptr [ESP + 0x68]          ; 00473be6
    ADD ESP,0x14                        ; 00473bea
    FLDZ                                ; 00473bed
    FXCH                                ; 00473bef
    FST float ptr [ESP + 0x8]           ; 00473bf1
    FSTP double ptr [ESP]               ; 00473bf5
    FCOMP double ptr [ESP]              ; 00473bf8
    FNSTSW AX                           ; 00473bfb
    SAHF                                ; 00473bfd
    JA 0x00473cb7                       ; 00473bfe
        ;   XREF to: 00473cb7 (CONDITIONAL_JUMP)  ; LAB_00473cb7
    FLD1                                ; 00473c04
    FCOMP double ptr [ESP]              ; 00473c06
    FNSTSW AX                           ; 00473c09
    SAHF                                ; 00473c0b
    JBE 0x00473cb7                      ; 00473c0c
        ;   XREF to: 00473cb7 (CONDITIONAL_JUMP)  ; LAB_00473cb7
    FLD float ptr [ESI + 0x4]           ; 00473c12
    FLD float ptr [ESI + 0x8]           ; 00473c15
    FLD float ptr [ESI]                 ; 00473c18
    MOV EAX,dword ptr [EBP + 0x14]      ; 00473c1a
    LEA EDI,[ESP + 0x48]                ; 00473c1d
    LEA ESI,[ESP + 0x30]                ; 00473c21
    FSUB float ptr [EAX]                ; 00473c25
    FXCH ST2                            ; 00473c27
    FSUB float ptr [EAX + 0x4]          ; 00473c29
    FXCH                                ; 00473c2c
    FSUB float ptr [EAX + 0x8]          ; 00473c2e
    FXCH ST2                            ; 00473c31
    FSTP float ptr [ESP + 0x30]         ; 00473c33
    FSTP float ptr [ESP + 0x34]         ; 00473c37
    FSTP float ptr [ESP + 0x38]         ; 00473c3b
    MOVSD ES:EDI,ESI                    ; 00473c3f
    MOVSD ES:EDI,ESI                    ; 00473c40
    MOVSD ES:EDI,ESI                    ; 00473c41
    FLD float ptr [ESP + 0x8]           ; 00473c42
    FLD float ptr [ESP + 0x48]          ; 00473c46
    FMUL ST1                            ; 00473c4a
    FLD float ptr [ESP + 0x4c]          ; 00473c4c
    FMUL ST2                            ; 00473c50
    FLD float ptr [ESP + 0x50]          ; 00473c52
    FMULP ST3                           ; 00473c56
    LEA EDI,[ESP + 0xc]                 ; 00473c58
    LEA ESI,[ESP + 0x3c]                ; 00473c5c
    FXCH                                ; 00473c60
    FSTP float ptr [ESP + 0x3c]         ; 00473c62
    FSTP float ptr [ESP + 0x40]         ; 00473c66
    FSTP float ptr [ESP + 0x44]         ; 00473c6a
    MOVSD ES:EDI,ESI                    ; 00473c6e
    MOVSD ES:EDI,ESI                    ; 00473c6f
    MOVSD ES:EDI,ESI                    ; 00473c70
    FLD float ptr [EAX]                 ; 00473c71
    FLD float ptr [EAX + 0x4]           ; 00473c73
    FLD float ptr [EAX + 0x8]           ; 00473c76
    LEA EDI,[ESP + 0x18]                ; 00473c79
    LEA ESI,[ESP + 0x24]                ; 00473c7d
    FXCH ST2                            ; 00473c81
    FADD float ptr [ESP + 0xc]          ; 00473c83
    FXCH                                ; 00473c87
    FADD float ptr [ESP + 0x10]         ; 00473c89
    FXCH ST2                            ; 00473c8d
    FADD float ptr [ESP + 0x14]         ; 00473c8f
    FXCH                                ; 00473c93
    FSTP float ptr [ESP + 0x24]         ; 00473c95
    FXCH                                ; 00473c99
    FSTP float ptr [ESP + 0x28]         ; 00473c9b
    FSTP float ptr [ESP + 0x2c]         ; 00473c9f
    MOVSD ES:EDI,ESI                    ; 00473ca3
    MOVSD ES:EDI,ESI                    ; 00473ca4
    MOVSD ES:EDI,ESI                    ; 00473ca5
    LEA ESI,[ESP + 0x18]                ; 00473ca6
    MOV EDI,EBX                         ; 00473caa
    MOVSD ES:EDI,ESI                    ; 00473cac
    MOVSD ES:EDI,ESI                    ; 00473cad
    MOVSD ES:EDI,ESI                    ; 00473cae
    MOV EAX,EBX                         ; 00473caf
    MOV ESP,EBP                         ; 00473cb1
    POP EBP                             ; 00473cb3
    POP EDI                             ; 00473cb4
    POP EBX                             ; 00473cb5
    RET                                 ; 00473cb6
    LEA EDI,[ESP + 0x18]                ; 00473cb7
        ;   Label: LAB_00473cb7
    MOVSD ES:EDI,ESI                    ; 00473cbb
    MOVSD ES:EDI,ESI                    ; 00473cbc
    MOVSD ES:EDI,ESI                    ; 00473cbd
    LEA ESI,[ESP + 0x18]                ; 00473cbe
    MOV EDI,EBX                         ; 00473cc2
    MOVSD ES:EDI,ESI                    ; 00473cc4
    MOVSD ES:EDI,ESI                    ; 00473cc5
    MOVSD ES:EDI,ESI                    ; 00473cc6
    MOV EAX,EBX                         ; 00473cc7
    MOV ESP,EBP                         ; 00473cc9
    POP EBP                             ; 00473ccb
    POP EDI                             ; 00473ccc
    POP EBX                             ; 00473ccd
    RET                                 ; 00473cce

