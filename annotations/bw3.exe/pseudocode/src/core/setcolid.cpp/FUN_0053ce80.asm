; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_setcolid_cpp_FUN_0053ce80(int param_1)
;
;
; Called Functions:
;   core_setcolid.cpp_FUN_0053d270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ce80
        ;   Label: core_setcolid.cpp_FUN_0053ce80
    PUSH EBP                            ; 0053ce81
    SUB ESP,0x50                        ; 0053ce82
    MOV EBX,dword ptr [ESP + 0x5c]      ; 0053ce85
    FLD float ptr [EBX + 0x15f6dc]      ; 0053ce89
    FCOMP float ptr [EBX + 0x15f6e0]    ; 0053ce8f
    FNSTSW AX                           ; 0053ce95
    SAHF                                ; 0053ce97
    JNC 0x0053cfdb                      ; 0053ce98
        ;   XREF to: 0053cfdb (CONDITIONAL_JUMP)  ; LAB_0053cfdb
    LEA EAX,[EBX + 0x14d128]            ; 0053ce9e
    LEA EBP,[EBX + 0x15f6e4]            ; 0053cea4
    CMP EAX,EBP                         ; 0053ceaa
    JZ 0x0053cebf                       ; 0053ceac
        ;   XREF to: 0053cebf (CONDITIONAL_JUMP)  ; LAB_0053cebf
    MOV EDX,dword ptr [EBP]             ; 0053ceae
    MOV dword ptr [EAX],EDX             ; 0053ceb1
    MOV EDX,dword ptr [EBP + 0x4]       ; 0053ceb3
    MOV dword ptr [EAX + 0x4],EDX       ; 0053ceb6
    MOV EDX,dword ptr [EBP + 0x8]       ; 0053ceb9
    MOV dword ptr [EAX + 0x8],EDX       ; 0053cebc
    PUSH EDI                            ; 0053cebf
        ;   Label: LAB_0053cebf
    PUSH ESI                            ; 0053cec0
    LEA ESI,[EBX + 0x14d11c]            ; 0053cec1
    PUSH dword ptr [EBX + 0x15f6e0]     ; 0053cec7
    PUSH ESI                            ; 0053cecd
    LEA EBP,[EBX + 0x14d110]            ; 0053cece
    PUSH EBP                            ; 0053ced4
    PUSH dword ptr [EBX + 0x15f6dc]     ; 0053ced5
    MOV EAX,dword ptr [EBX + 0x15f6f0]  ; 0053cedb
    PUSH EBX                            ; 0053cee1
    MOV dword ptr [EBX + 0x14d134],EAX  ; 0053cee2
    CALL core_setcolid.cpp_FUN_0053d270 ; 0053cee8
        ;   XREF to: 0053d270 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_0053d270()
    MOV dword ptr [ESP + 0x68],EAX      ; 0053ceed
    MOV EAX,dword ptr [ESP + 0x68]      ; 0053cef1
    MOV dword ptr [EBX + 0x15f6dc],EAX  ; 0053cef5
    ADD ESP,0x14                        ; 0053cefb
    FLD float ptr [EBX + 0x15f6dc]      ; 0053cefe
    FLD1                                ; 0053cf04
    FCOMPP                              ; 0053cf06
    FNSTSW AX                           ; 0053cf08
    SAHF                                ; 0053cf0a
    JC 0x0053cfc5                       ; 0053cf0b
        ;   XREF to: 0053cfc5 (CONDITIONAL_JUMP)  ; LAB_0053cfc5
    FLD float ptr [ESI + 0x4]           ; 0053cf11
    FLD float ptr [ESI + 0x8]           ; 0053cf14
    FLD float ptr [ESI]                 ; 0053cf17
    LEA EDI,[ESP + 0x44]                ; 0053cf19
    LEA ESI,[ESP + 0x20]                ; 0053cf1d
    FSUB float ptr [EBP]                ; 0053cf21
    FXCH ST2                            ; 0053cf24
    FSUB float ptr [EBP + 0x4]          ; 0053cf26
    FXCH                                ; 0053cf29
    FSUB float ptr [EBP + 0x8]          ; 0053cf2b
    FXCH ST2                            ; 0053cf2e
    FSTP float ptr [ESP + 0x20]         ; 0053cf30
    FSTP float ptr [ESP + 0x24]         ; 0053cf34
    FSTP float ptr [ESP + 0x28]         ; 0053cf38
    MOVSD ES:EDI,ESI                    ; 0053cf3c
    MOVSD ES:EDI,ESI                    ; 0053cf3d
    MOVSD ES:EDI,ESI                    ; 0053cf3e
    LEA EAX,[EBX + 0x15f6dc]            ; 0053cf3f
    FLD float ptr [ESP + 0x44]          ; 0053cf45
    FMUL float ptr [EAX]                ; 0053cf49
    FLD float ptr [ESP + 0x48]          ; 0053cf4b
    FMUL float ptr [EAX]                ; 0053cf4f
    FLD float ptr [ESP + 0x4c]          ; 0053cf51
    FMUL float ptr [EAX]                ; 0053cf55
    LEA EDI,[ESP + 0x2c]                ; 0053cf57
    LEA ESI,[ESP + 0x38]                ; 0053cf5b
    FXCH ST2                            ; 0053cf5f
    FSTP float ptr [ESP + 0x38]         ; 0053cf61
    FSTP float ptr [ESP + 0x3c]         ; 0053cf65
    FSTP float ptr [ESP + 0x40]         ; 0053cf69
    MOVSD ES:EDI,ESI                    ; 0053cf6d
    MOVSD ES:EDI,ESI                    ; 0053cf6e
    MOVSD ES:EDI,ESI                    ; 0053cf6f
    LEA EAX,[ESP + 0x14]                ; 0053cf70
    FLD float ptr [EBP + 0x4]           ; 0053cf74
    FLD float ptr [EBP + 0x8]           ; 0053cf77
    FLD float ptr [EBP]                 ; 0053cf7a
    LEA EDI,[ESP + 0x14]                ; 0053cf7d
    LEA ESI,[ESP + 0x8]                 ; 0053cf81
    LEA EBP,[EBX + 0x14d138]            ; 0053cf85
    FADD float ptr [ESP + 0x2c]         ; 0053cf8b
    FXCH ST2                            ; 0053cf8f
    FADD float ptr [ESP + 0x30]         ; 0053cf91
    FXCH                                ; 0053cf95
    FADD float ptr [ESP + 0x34]         ; 0053cf97
    FXCH ST2                            ; 0053cf9b
    FSTP float ptr [ESP + 0x8]          ; 0053cf9d
    FSTP float ptr [ESP + 0xc]          ; 0053cfa1
    FSTP float ptr [ESP + 0x10]         ; 0053cfa5
    MOVSD ES:EDI,ESI                    ; 0053cfa9
    MOVSD ES:EDI,ESI                    ; 0053cfaa
    MOVSD ES:EDI,ESI                    ; 0053cfab
    CMP EBP,EAX                         ; 0053cfac
    JZ 0x0053cfc5                       ; 0053cfae
        ;   XREF to: 0053cfc5 (CONDITIONAL_JUMP)  ; LAB_0053cfc5
    MOV EAX,dword ptr [ESP + 0x14]      ; 0053cfb0
    MOV dword ptr [EBP],EAX             ; 0053cfb4
    MOV EAX,dword ptr [ESP + 0x18]      ; 0053cfb7
    MOV dword ptr [EBP + 0x4],EAX       ; 0053cfbb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053cfbe
    MOV dword ptr [EBP + 0x8],EAX       ; 0053cfc2
    MOV EAX,dword ptr [EBX + 0x15f6dc]  ; 0053cfc5
        ;   Label: LAB_0053cfc5
    MOV dword ptr [ESP + 0x50],EAX      ; 0053cfcb
    POP ESI                             ; 0053cfcf
    POP EDI                             ; 0053cfd0
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053cfd1
    ADD ESP,0x50                        ; 0053cfd5
    POP EBP                             ; 0053cfd8
    POP EBX                             ; 0053cfd9
    RET                                 ; 0053cfda
    MOV dword ptr [ESP + 0x48],0x40000000 ; 0053cfdb
        ;   Label: LAB_0053cfdb
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053cfe3
    ADD ESP,0x50                        ; 0053cfe7
    POP EBP                             ; 0053cfea
    POP EBX                             ; 0053cfeb
    RET                                 ; 0053cfec

