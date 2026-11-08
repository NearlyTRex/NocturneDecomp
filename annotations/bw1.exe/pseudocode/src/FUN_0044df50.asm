; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * FUN_0044df50(int param_1,int param_2,int param_3)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044df50
        ;   Label: FUN_0044df50
    PUSH EDI                            ; 0044df51
    PUSH EBP                            ; 0044df52
    MOV EBP,ESP                         ; 0044df53
    SUB ESP,0x28                        ; 0044df55
    AND ESP,0xfffffff8                  ; 0044df58
    MOV dword ptr [ESP + 0x20],ESI      ; 0044df5b
    MOV EDX,0x10000                     ; 0044df5f
    MOV EBX,dword ptr [EBP + 0x10]      ; 0044df64
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044df67
    MOV ESI,dword ptr [EBP + 0x10]      ; 0044df6a
    MOV dword ptr [ESP + 0x8],EDX       ; 0044df6d
    SHL EAX,0x10                        ; 0044df71
    MOV ECX,dword ptr [ESI + 0x1c8]     ; 0044df74
    MOV EBX,dword ptr [EBX + 0x1c0]     ; 0044df7a
    SUB EAX,ECX                         ; 0044df80
    IMUL EDX                            ; 0044df82
    IDIV EBX                            ; 0044df84
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044df86
    MOV dword ptr [ESP],EAX             ; 0044df8a
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044df8d
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 0044df90
    SHL EAX,0x10                        ; 0044df96
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 0044df99
    SUB EAX,EDI                         ; 0044df9f
    LEA EDI,[ESI + 0x19c]               ; 0044dfa1
    IMUL EDX                            ; 0044dfa7
    IDIV EBX                            ; 0044dfa9
    MOV ESI,ESP                         ; 0044dfab
    MOV dword ptr [ESP + 0x4],EAX       ; 0044dfad
    MOV EAX,dword ptr [ESI]             ; 0044dfb1
    IMUL dword ptr [EDI]                ; 0044dfb3
    MOV EBX,EAX                         ; 0044dfb5
    MOV ECX,EDX                         ; 0044dfb7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dfb9
    IMUL dword ptr [EDI + 0xc]          ; 0044dfbc
    ADD EBX,EAX                         ; 0044dfbf
    ADC ECX,EDX                         ; 0044dfc1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dfc3
    IMUL dword ptr [EDI + 0x18]         ; 0044dfc6
    ADD EAX,EBX                         ; 0044dfc9
    ADC EDX,ECX                         ; 0044dfcb
    SHRD EAX,EDX,0x10                   ; 0044dfcd
    MOV EDI,dword ptr [EBP + 0x10]      ; 0044dfd1
    MOV dword ptr [ESP + 0x24],EAX      ; 0044dfd4
    MOV ESI,ESP                         ; 0044dfd8
    FILD dword ptr [ESP + 0x24]         ; 0044dfda
    ADD EDI,0x1a0                       ; 0044dfde
    FSTP float ptr [ESP + 0xc]          ; 0044dfe4
    MOV EAX,dword ptr [ESI]             ; 0044dfe8
    IMUL dword ptr [EDI]                ; 0044dfea
    MOV EBX,EAX                         ; 0044dfec
    MOV ECX,EDX                         ; 0044dfee
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044dff0
    IMUL dword ptr [EDI + 0xc]          ; 0044dff3
    ADD EBX,EAX                         ; 0044dff6
    ADC ECX,EDX                         ; 0044dff8
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044dffa
    IMUL dword ptr [EDI + 0x18]         ; 0044dffd
    ADD EAX,EBX                         ; 0044e000
    ADC EDX,ECX                         ; 0044e002
    SHRD EAX,EDX,0x10                   ; 0044e004
    MOV EDI,dword ptr [EBP + 0x10]      ; 0044e008
    MOV dword ptr [ESP + 0x24],EAX      ; 0044e00b
    MOV ESI,ESP                         ; 0044e00f
    FILD dword ptr [ESP + 0x24]         ; 0044e011
    ADD EDI,0x1a4                       ; 0044e015
    FSTP float ptr [ESP + 0x10]         ; 0044e01b
    MOV EAX,dword ptr [ESI]             ; 0044e01f
    IMUL dword ptr [EDI]                ; 0044e021
    MOV EBX,EAX                         ; 0044e023
    MOV ECX,EDX                         ; 0044e025
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044e027
    IMUL dword ptr [EDI + 0xc]          ; 0044e02a
    ADD EBX,EAX                         ; 0044e02d
    ADC ECX,EDX                         ; 0044e02f
    MOV EAX,dword ptr [ESI + 0x8]       ; 0044e031
    IMUL dword ptr [EDI + 0x18]         ; 0044e034
    ADD EAX,EBX                         ; 0044e037
    ADC EDX,ECX                         ; 0044e039
    SHRD EAX,EDX,0x10                   ; 0044e03b
    FLD float ptr [ESP + 0x10]          ; 0044e03f
    FMUL ST0                            ; 0044e043
    MOV dword ptr [ESP + 0x24],EAX      ; 0044e045
    FLD float ptr [ESP + 0xc]           ; 0044e049
    FMUL ST0                            ; 0044e04d
    FILD dword ptr [ESP + 0x24]         ; 0044e04f
    FXCH                                ; 0044e053
    FADDP ST2,ST0                       ; 0044e055
    FST float ptr [ESP + 0x14]          ; 0044e057
    FMUL float ptr [ESP + 0x14]         ; 0044e05b
    FADDP                               ; 0044e05f
    FSQRT                               ; 0044e061
    FLDZ                                ; 0044e063
    FXCH                                ; 0044e065
    FSTP float ptr [ESP + 0x1c]         ; 0044e067
    FCOMP float ptr [ESP + 0x1c]        ; 0044e06b
    FNSTSW AX                           ; 0044e06f
    SAHF                                ; 0044e071
    JNC 0x0044e0b3                      ; 0044e072
        ;   XREF to: 0044e0b3 (CONDITIONAL_JUMP)  ; LAB_0044e0b3
    FLD1                                ; 0044e074
    FLD float ptr [ESP + 0xc]           ; 0044e076
    FXCH                                ; 0044e07a
    FDIV float ptr [ESP + 0x1c]         ; 0044e07c
    FXCH                                ; 0044e080
    FMUL ST1                            ; 0044e082
    FLD float ptr [ESP + 0x10]          ; 0044e084
    FMUL ST2                            ; 0044e088
    FLD float ptr [ESP + 0x14]          ; 0044e08a
    FMULP ST3                           ; 0044e08e
    FXCH                                ; 0044e090
    FSTP float ptr [ESP + 0xc]          ; 0044e092
    FSTP float ptr [ESP + 0x10]         ; 0044e096
    FSTP float ptr [ESP + 0x14]         ; 0044e09a
    MOV EDI,dword ptr [ESP + 0x20]      ; 0044e09e
        ;   Label: LAB_0044e09e
    LEA ESI,[ESP + 0xc]                 ; 0044e0a2
    MOVSD ES:EDI,ESI                    ; 0044e0a6
    MOVSD ES:EDI,ESI                    ; 0044e0a7
    MOVSD ES:EDI,ESI                    ; 0044e0a8
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044e0a9
    MOV ESP,EBP                         ; 0044e0ad
    POP EBP                             ; 0044e0af
    POP EDI                             ; 0044e0b0
    POP EBX                             ; 0044e0b1
    RET                                 ; 0044e0b2
    XOR EAX,EAX                         ; 0044e0b3
        ;   Label: LAB_0044e0b3
    MOV dword ptr [ESP + 0x10],EAX      ; 0044e0b5
    MOV dword ptr [ESP + 0xc],EAX       ; 0044e0b9
    MOV dword ptr [ESP + 0x14],EAX      ; 0044e0bd
    JMP 0x0044e09e                      ; 0044e0c1
        ;   XREF to: 0044e09e (UNCONDITIONAL_JUMP)  ; LAB_0044e09e

