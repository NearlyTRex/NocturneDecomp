; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_00476d60(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476d60
        ;   Label: core_dtrace.cpp_FUN_00476d60
    PUSH EDI                            ; 00476d61
    PUSH EBP                            ; 00476d62
    SUB ESP,0x10                        ; 00476d63
    MOV ECX,dword ptr [ESP + 0x20]      ; 00476d66
    MOV EBX,dword ptr [ESP + 0x24]      ; 00476d6a
    MOV EBP,ESI                         ; 00476d6e
    MOV ESI,dword ptr [ECX + 0x44]      ; 00476d70
    IMUL ESI,dword ptr [ECX + 0x48]     ; 00476d73
    MOV EDX,EBX                         ; 00476d77
    MOV EAX,EBX                         ; 00476d79
    SAR EDX,0x1f                        ; 00476d7b
    IDIV ESI                            ; 00476d7e
    MOV ESI,EAX                         ; 00476d80
    MOV EAX,dword ptr [ECX + 0x44]      ; 00476d82
    IMUL EAX,ESI                        ; 00476d85
    MOV EDI,dword ptr [ECX + 0x48]      ; 00476d88
    IMUL EAX,EDI                        ; 00476d8b
    SUB EBX,EAX                         ; 00476d8e
    MOV EDX,EBX                         ; 00476d90
    MOV EAX,EBX                         ; 00476d92
    SAR EDX,0x1f                        ; 00476d94
    IDIV EDI                            ; 00476d97
    MOV EDX,EDI                         ; 00476d99
    IMUL EDX,EAX                        ; 00476d9b
    MOV dword ptr [ESP + 0xc],ESI       ; 00476d9e
    FILD dword ptr [ESP + 0xc]          ; 00476da2
    FMUL float ptr [ECX + 0x28]         ; 00476da6
    MOV dword ptr [ESP + 0xc],EAX       ; 00476da9
    FILD dword ptr [ESP + 0xc]          ; 00476dad
    FMUL float ptr [ECX + 0x2c]         ; 00476db1
    SUB EBX,EDX                         ; 00476db4
    MOV dword ptr [ESP + 0xc],EBX       ; 00476db6
    FXCH                                ; 00476dba
    FADD float ptr [ECX + 0x10]         ; 00476dbc
    FILD dword ptr [ESP + 0xc]          ; 00476dbf
    FMUL float ptr [ECX + 0x30]         ; 00476dc3
    FXCH                                ; 00476dc6
    FSTP float ptr [ESP]                ; 00476dc8
    MOV ESI,ESP                         ; 00476dcb
    MOV EDI,EBP                         ; 00476dcd
    FXCH                                ; 00476dcf
    FADD float ptr [ECX + 0x14]         ; 00476dd1
    FXCH                                ; 00476dd4
    FADD float ptr [ECX + 0x18]         ; 00476dd6
    FXCH                                ; 00476dd9
    FSTP float ptr [ESP + 0x4]          ; 00476ddb
    FSTP float ptr [ESP + 0x8]          ; 00476ddf
    MOVSD ES:EDI,ESI                    ; 00476de3
    MOVSD ES:EDI,ESI                    ; 00476de4
    MOVSD ES:EDI,ESI                    ; 00476de5
    MOV EAX,EBP                         ; 00476de6
    ADD ESP,0x10                        ; 00476de8
    POP EBP                             ; 00476deb
    POP EDI                             ; 00476dec
    POP EBX                             ; 00476ded
    RET                                 ; 00476dee

