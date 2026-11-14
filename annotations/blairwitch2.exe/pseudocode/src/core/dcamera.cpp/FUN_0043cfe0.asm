; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_0043cfe0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043cfe0
        ;   Label: core_dcamera.cpp_FUN_0043cfe0
    PUSH EDI                            ; 0043cfe1
    PUSH EBP                            ; 0043cfe2
    SUB ESP,0x18                        ; 0043cfe3
    MOV EBP,ESI                         ; 0043cfe6
    MOV EDI,0x1c38b9c                   ; 0043cfe8
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043cfed
    MOV EAX,dword ptr [ESI]             ; 0043cff1
    IMUL dword ptr [EDI]                ; 0043cff3
    MOV EBX,EAX                         ; 0043cff5
    MOV ECX,EDX                         ; 0043cff7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043cff9
    IMUL dword ptr [EDI + 0xc]          ; 0043cffc
    ADD EBX,EAX                         ; 0043cfff
    ADC ECX,EDX                         ; 0043d001
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043d003
    IMUL dword ptr [EDI + 0x18]         ; 0043d006
    ADD EAX,EBX                         ; 0043d009
    ADC EDX,ECX                         ; 0043d00b
    SHRD EAX,EDX,0x10                   ; 0043d00d
    MOV EDI,0x1c38ba0                   ; 0043d011
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043d016
    MOV dword ptr [ESP],EAX             ; 0043d01a
    MOV EAX,dword ptr [ESI]             ; 0043d01d
    IMUL dword ptr [EDI]                ; 0043d01f
    MOV EBX,EAX                         ; 0043d021
    MOV ECX,EDX                         ; 0043d023
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043d025
    IMUL dword ptr [EDI + 0xc]          ; 0043d028
    ADD EBX,EAX                         ; 0043d02b
    ADC ECX,EDX                         ; 0043d02d
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043d02f
    IMUL dword ptr [EDI + 0x18]         ; 0043d032
    ADD EAX,EBX                         ; 0043d035
    ADC EDX,ECX                         ; 0043d037
    SHRD EAX,EDX,0x10                   ; 0043d039
    MOV EDI,0x1c38ba4                   ; 0043d03d
    MOV ESI,dword ptr [ESP + 0x2c]      ; 0043d042
    MOV dword ptr [ESP + 0x4],EAX       ; 0043d046
    MOV EAX,dword ptr [ESI]             ; 0043d04a
    IMUL dword ptr [EDI]                ; 0043d04c
    MOV EBX,EAX                         ; 0043d04e
    MOV ECX,EDX                         ; 0043d050
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043d052
    IMUL dword ptr [EDI + 0xc]          ; 0043d055
    ADD EBX,EAX                         ; 0043d058
    ADC ECX,EDX                         ; 0043d05a
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043d05c
    IMUL dword ptr [EDI + 0x18]         ; 0043d05f
    ADD EAX,EBX                         ; 0043d062
    ADC EDX,ECX                         ; 0043d064
    SHRD EAX,EDX,0x10                   ; 0043d066
    MOV EDX,dword ptr [0x0060b280]      ; 0043d06a | DAT_0060b280
    PUSH EDX                            ; 0043d070
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d071
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80 ; 0043d075
        ;   XREF to: 0046bc80 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046bc80(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0043d07a
    TEST EAX,EAX                        ; 0043d07d
    JNZ 0x0043d127                      ; 0043d07f
        ;   XREF to: 0043d127 (CONDITIONAL_JUMP)  ; LAB_0043d127
    MOV EDI,dword ptr [ESP + 0x28]      ; 0043d085
    MOV ESI,ESP                         ; 0043d089
    ADD EDI,0x19c                       ; 0043d08b
    MOV EAX,dword ptr [ESI]             ; 0043d091
    IMUL dword ptr [EDI]                ; 0043d093
    MOV EBX,EAX                         ; 0043d095
    MOV ECX,EDX                         ; 0043d097
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043d099
    IMUL dword ptr [EDI + 0xc]          ; 0043d09c
    ADD EBX,EAX                         ; 0043d09f
    ADC ECX,EDX                         ; 0043d0a1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043d0a3
    IMUL dword ptr [EDI + 0x18]         ; 0043d0a6
    ADD EAX,EBX                         ; 0043d0a9
    ADC EDX,ECX                         ; 0043d0ab
    SHRD EAX,EDX,0x10                   ; 0043d0ad
    MOV EDI,dword ptr [ESP + 0x28]      ; 0043d0b1
    MOV ESI,ESP                         ; 0043d0b5
    ADD EDI,0x1a0                       ; 0043d0b7
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d0bd
    MOV EAX,dword ptr [ESI]             ; 0043d0c1
    IMUL dword ptr [EDI]                ; 0043d0c3
    MOV EBX,EAX                         ; 0043d0c5
    MOV ECX,EDX                         ; 0043d0c7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043d0c9
    IMUL dword ptr [EDI + 0xc]          ; 0043d0cc
    ADD EBX,EAX                         ; 0043d0cf
    ADC ECX,EDX                         ; 0043d0d1
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043d0d3
    IMUL dword ptr [EDI + 0x18]         ; 0043d0d6
    ADD EAX,EBX                         ; 0043d0d9
    ADC EDX,ECX                         ; 0043d0db
    SHRD EAX,EDX,0x10                   ; 0043d0dd
    MOV EDI,dword ptr [ESP + 0x28]      ; 0043d0e1
    MOV ESI,ESP                         ; 0043d0e5
    ADD EDI,0x1a4                       ; 0043d0e7
    MOV dword ptr [ESP + 0x10],EAX      ; 0043d0ed
    MOV EAX,dword ptr [ESI]             ; 0043d0f1
    IMUL dword ptr [EDI]                ; 0043d0f3
    MOV EBX,EAX                         ; 0043d0f5
    MOV ECX,EDX                         ; 0043d0f7
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043d0f9
    IMUL dword ptr [EDI + 0xc]          ; 0043d0fc
    ADD EBX,EAX                         ; 0043d0ff
    ADC ECX,EDX                         ; 0043d101
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043d103
    IMUL dword ptr [EDI + 0x18]         ; 0043d106
    ADD EAX,EBX                         ; 0043d109
    ADC EDX,ECX                         ; 0043d10b
    SHRD EAX,EDX,0x10                   ; 0043d10d
    MOV dword ptr [ESP + 0x14],EAX      ; 0043d111
    LEA ESI,[ESP + 0xc]                 ; 0043d115
    MOV EDI,EBP                         ; 0043d119
    MOVSD ES:EDI,ESI                    ; 0043d11b
    MOVSD ES:EDI,ESI                    ; 0043d11c
    MOVSD ES:EDI,ESI                    ; 0043d11d
    MOV EAX,EBP                         ; 0043d11e
    ADD ESP,0x18                        ; 0043d120
    POP EBP                             ; 0043d123
    POP EDI                             ; 0043d124
    POP EBX                             ; 0043d125
    RET                                 ; 0043d126
    MOV ECX,dword ptr [ESP + 0x28]      ; 0043d127
        ;   Label: LAB_0043d127
    SHL EAX,0x2                         ; 0043d12b
    ADD ECX,EAX                         ; 0043d12e
    MOV EDX,dword ptr [ESP]             ; 0043d130
    MOV EAX,dword ptr [ECX + 0x136c]    ; 0043d133
    IMUL EDX                            ; 0043d139
    SHRD EAX,EDX,0x10                   ; 0043d13b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043d13f
    MOV ESI,EAX                         ; 0043d143
    MOV EAX,dword ptr [ECX + 0x13cc]    ; 0043d145
    IMUL EDX                            ; 0043d14b
    SHRD EAX,EDX,0x10                   ; 0043d14d
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043d151
    ADD ESI,EAX                         ; 0043d155
    MOV EAX,dword ptr [ECX + 0x142c]    ; 0043d157
    IMUL EDX                            ; 0043d15d
    SHRD EAX,EDX,0x10                   ; 0043d15f
    MOV EDX,dword ptr [ESP]             ; 0043d163
    ADD ESI,EAX                         ; 0043d166
    MOV EAX,dword ptr [ECX + 0x138c]    ; 0043d168
    MOV dword ptr [ESP + 0xc],ESI       ; 0043d16e
    IMUL EDX                            ; 0043d172
    SHRD EAX,EDX,0x10                   ; 0043d174
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043d178
    MOV ESI,EAX                         ; 0043d17c
    MOV EAX,dword ptr [ECX + 0x13ec]    ; 0043d17e
    IMUL EDX                            ; 0043d184
    SHRD EAX,EDX,0x10                   ; 0043d186
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043d18a
    ADD ESI,EAX                         ; 0043d18e
    MOV EAX,dword ptr [ECX + 0x144c]    ; 0043d190
    IMUL EDX                            ; 0043d196
    SHRD EAX,EDX,0x10                   ; 0043d198
    MOV EDX,dword ptr [ESP]             ; 0043d19c
    ADD ESI,EAX                         ; 0043d19f
    MOV EAX,dword ptr [ECX + 0x13ac]    ; 0043d1a1
    MOV dword ptr [ESP + 0x10],ESI      ; 0043d1a7
    IMUL EDX                            ; 0043d1ab
    SHRD EAX,EDX,0x10                   ; 0043d1ad
    MOV EDX,dword ptr [ESP + 0x4]       ; 0043d1b1
    MOV ESI,EAX                         ; 0043d1b5
    MOV EAX,dword ptr [ECX + 0x140c]    ; 0043d1b7
    IMUL EDX                            ; 0043d1bd
    SHRD EAX,EDX,0x10                   ; 0043d1bf
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043d1c3
    ADD ESI,EAX                         ; 0043d1c7
    MOV EAX,dword ptr [ECX + 0x146c]    ; 0043d1c9
    IMUL EDX                            ; 0043d1cf
    SHRD EAX,EDX,0x10                   ; 0043d1d1
    ADD ESI,EAX                         ; 0043d1d5
    MOV dword ptr [ESP + 0x14],ESI      ; 0043d1d7
    LEA ESI,[ESP + 0xc]                 ; 0043d1db
    MOV EDI,EBP                         ; 0043d1df
    MOVSD ES:EDI,ESI                    ; 0043d1e1
    MOVSD ES:EDI,ESI                    ; 0043d1e2
    MOVSD ES:EDI,ESI                    ; 0043d1e3
    MOV EAX,EBP                         ; 0043d1e4
    ADD ESP,0x18                        ; 0043d1e6
    POP EBP                             ; 0043d1e9
    POP EDI                             ; 0043d1ea
    POP EBX                             ; 0043d1eb
    RET                                 ; 0043d1ec

