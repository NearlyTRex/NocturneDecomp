; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00477dd0(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00477dd0
        ;   Label: core_dtrace.cpp_FUN_00477dd0
    PUSH EDI                            ; 00477dd1
    PUSH EBP                            ; 00477dd2
    SUB ESP,0x10                        ; 00477dd3
    MOV ECX,dword ptr [ESP + 0x20]      ; 00477dd6
    MOV EBX,dword ptr [ESP + 0x24]      ; 00477dda
    MOV EBP,ESI                         ; 00477dde
    MOV ESI,dword ptr [ECX + 0x44]      ; 00477de0
    IMUL ESI,dword ptr [ECX + 0x48]     ; 00477de3
    MOV EDX,EBX                         ; 00477de7
    MOV EAX,EBX                         ; 00477de9
    SAR EDX,0x1f                        ; 00477deb
    IDIV ESI                            ; 00477dee
    MOV ESI,EAX                         ; 00477df0
    MOV EAX,dword ptr [ECX + 0x44]      ; 00477df2
    IMUL EAX,ESI                        ; 00477df5
    MOV EDI,dword ptr [ECX + 0x48]      ; 00477df8
    IMUL EAX,EDI                        ; 00477dfb
    SUB EBX,EAX                         ; 00477dfe
    MOV EDX,EBX                         ; 00477e00
    MOV EAX,EBX                         ; 00477e02
    SAR EDX,0x1f                        ; 00477e04
    IDIV EDI                            ; 00477e07
    MOV EDX,EDI                         ; 00477e09
    IMUL EDX,EAX                        ; 00477e0b
    MOV dword ptr [ESP + 0xc],ESI       ; 00477e0e
    FILD dword ptr [ESP + 0xc]          ; 00477e12
    FMUL float ptr [ECX + 0x28]         ; 00477e16
    MOV dword ptr [ESP + 0xc],EAX       ; 00477e19
    FILD dword ptr [ESP + 0xc]          ; 00477e1d
    FMUL float ptr [ECX + 0x2c]         ; 00477e21
    SUB EBX,EDX                         ; 00477e24
    MOV dword ptr [ESP + 0xc],EBX       ; 00477e26
    FXCH                                ; 00477e2a
    FADD float ptr [ECX + 0x10]         ; 00477e2c
    FILD dword ptr [ESP + 0xc]          ; 00477e2f
    FMUL float ptr [ECX + 0x30]         ; 00477e33
    FXCH                                ; 00477e36
    FSTP float ptr [ESP]                ; 00477e38
    MOV ESI,ESP                         ; 00477e3b
    MOV EDI,EBP                         ; 00477e3d
    FXCH                                ; 00477e3f
    FADD float ptr [ECX + 0x14]         ; 00477e41
    FXCH                                ; 00477e44
    FADD float ptr [ECX + 0x18]         ; 00477e46
    FXCH                                ; 00477e49
    FSTP float ptr [ESP + 0x4]          ; 00477e4b
    FSTP float ptr [ESP + 0x8]          ; 00477e4f
    MOVSD ES:EDI,ESI                    ; 00477e53
    MOVSD ES:EDI,ESI                    ; 00477e54
    MOVSD ES:EDI,ESI                    ; 00477e55
    MOV EAX,EBP                         ; 00477e56
    ADD ESP,0x10                        ; 00477e58
    POP EBP                             ; 00477e5b
    POP EDI                             ; 00477e5c
    POP EBX                             ; 00477e5d
    RET                                 ; 00477e5e

