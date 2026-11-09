; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dtrace_cpp_FUN_0048b040(undefined4 param_1,float *param_2,float *param_3)
;
;
; XREF[1]:
;   core_drip.cpp_FUN_00485610 at 004856ae
;
; Called Functions:
;   core_dtrace.cpp_FUN_0048b150
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b040
        ;   Label: core_dtrace.cpp_FUN_0048b040
    PUSH EDI                            ; 0048b041
    PUSH EBP                            ; 0048b042
    MOV EBP,ESP                         ; 0048b043
    SUB ESP,0x58                        ; 0048b045
    AND ESP,0xfffffff8                  ; 0048b048
    MOV EBX,ESI                         ; 0048b04b
    MOV ESI,dword ptr [EBP + 0x18]      ; 0048b04d
    PUSH 0x0                            ; 0048b050
    PUSH 0x0                            ; 0048b052
    PUSH ESI                            ; 0048b054
    MOV EDX,dword ptr [EBP + 0x14]      ; 0048b055
    PUSH EDX                            ; 0048b058
    MOV ECX,dword ptr [EBP + 0x10]      ; 0048b059
    PUSH ECX                            ; 0048b05c
    CALL core_dtrace.cpp_FUN_0048b150   ; 0048b05d
        ;   XREF to: 0048b150 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048b150()
    MOV dword ptr [ESP + 0x68],EAX      ; 0048b062
    FLD float ptr [ESP + 0x68]          ; 0048b066
    ADD ESP,0x14                        ; 0048b06a
    FLDZ                                ; 0048b06d
    FXCH                                ; 0048b06f
    FST float ptr [ESP + 0x8]           ; 0048b071
    FSTP double ptr [ESP]               ; 0048b075
    FCOMP double ptr [ESP]              ; 0048b078
    FNSTSW AX                           ; 0048b07b
    SAHF                                ; 0048b07d
    JA 0x0048b137                       ; 0048b07e
        ;   XREF to: 0048b137 (CONDITIONAL_JUMP)  ; LAB_0048b137
    FLD1                                ; 0048b084
    FCOMP double ptr [ESP]              ; 0048b086
    FNSTSW AX                           ; 0048b089
    SAHF                                ; 0048b08b
    JBE 0x0048b137                      ; 0048b08c
        ;   XREF to: 0048b137 (CONDITIONAL_JUMP)  ; LAB_0048b137
    FLD float ptr [ESI + 0x4]           ; 0048b092
    FLD float ptr [ESI + 0x8]           ; 0048b095
    FLD float ptr [ESI]                 ; 0048b098
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048b09a
    LEA EDI,[ESP + 0x48]                ; 0048b09d
    LEA ESI,[ESP + 0x30]                ; 0048b0a1
    FSUB float ptr [EAX]                ; 0048b0a5
    FXCH ST2                            ; 0048b0a7
    FSUB float ptr [EAX + 0x4]          ; 0048b0a9
    FXCH                                ; 0048b0ac
    FSUB float ptr [EAX + 0x8]          ; 0048b0ae
    FXCH ST2                            ; 0048b0b1
    FSTP float ptr [ESP + 0x30]         ; 0048b0b3
    FSTP float ptr [ESP + 0x34]         ; 0048b0b7
    FSTP float ptr [ESP + 0x38]         ; 0048b0bb
    MOVSD ES:EDI,ESI                    ; 0048b0bf
    MOVSD ES:EDI,ESI                    ; 0048b0c0
    MOVSD ES:EDI,ESI                    ; 0048b0c1
    FLD float ptr [ESP + 0x8]           ; 0048b0c2
    FLD float ptr [ESP + 0x48]          ; 0048b0c6
    FMUL ST1                            ; 0048b0ca
    FLD float ptr [ESP + 0x4c]          ; 0048b0cc
    FMUL ST2                            ; 0048b0d0
    FLD float ptr [ESP + 0x50]          ; 0048b0d2
    FMULP ST3                           ; 0048b0d6
    LEA EDI,[ESP + 0xc]                 ; 0048b0d8
    LEA ESI,[ESP + 0x3c]                ; 0048b0dc
    FXCH                                ; 0048b0e0
    FSTP float ptr [ESP + 0x3c]         ; 0048b0e2
    FSTP float ptr [ESP + 0x40]         ; 0048b0e6
    FSTP float ptr [ESP + 0x44]         ; 0048b0ea
    MOVSD ES:EDI,ESI                    ; 0048b0ee
    MOVSD ES:EDI,ESI                    ; 0048b0ef
    MOVSD ES:EDI,ESI                    ; 0048b0f0
    FLD float ptr [EAX]                 ; 0048b0f1
    FLD float ptr [EAX + 0x4]           ; 0048b0f3
    FLD float ptr [EAX + 0x8]           ; 0048b0f6
    LEA EDI,[ESP + 0x18]                ; 0048b0f9
    LEA ESI,[ESP + 0x24]                ; 0048b0fd
    FXCH ST2                            ; 0048b101
    FADD float ptr [ESP + 0xc]          ; 0048b103
    FXCH                                ; 0048b107
    FADD float ptr [ESP + 0x10]         ; 0048b109
    FXCH ST2                            ; 0048b10d
    FADD float ptr [ESP + 0x14]         ; 0048b10f
    FXCH                                ; 0048b113
    FSTP float ptr [ESP + 0x24]         ; 0048b115
    FXCH                                ; 0048b119
    FSTP float ptr [ESP + 0x28]         ; 0048b11b
    FSTP float ptr [ESP + 0x2c]         ; 0048b11f
    MOVSD ES:EDI,ESI                    ; 0048b123
    MOVSD ES:EDI,ESI                    ; 0048b124
    MOVSD ES:EDI,ESI                    ; 0048b125
    LEA ESI,[ESP + 0x18]                ; 0048b126
    MOV EDI,EBX                         ; 0048b12a
    MOVSD ES:EDI,ESI                    ; 0048b12c
    MOVSD ES:EDI,ESI                    ; 0048b12d
    MOVSD ES:EDI,ESI                    ; 0048b12e
    MOV EAX,EBX                         ; 0048b12f
    MOV ESP,EBP                         ; 0048b131
    POP EBP                             ; 0048b133
    POP EDI                             ; 0048b134
    POP EBX                             ; 0048b135
    RET                                 ; 0048b136
    LEA EDI,[ESP + 0x18]                ; 0048b137
        ;   Label: LAB_0048b137
    MOVSD ES:EDI,ESI                    ; 0048b13b
    MOVSD ES:EDI,ESI                    ; 0048b13c
    MOVSD ES:EDI,ESI                    ; 0048b13d
    LEA ESI,[ESP + 0x18]                ; 0048b13e
    MOV EDI,EBX                         ; 0048b142
    MOVSD ES:EDI,ESI                    ; 0048b144
    MOVSD ES:EDI,ESI                    ; 0048b145
    MOVSD ES:EDI,ESI                    ; 0048b146
    MOV EAX,EBX                         ; 0048b147
    MOV ESP,EBP                         ; 0048b149
    POP EBP                             ; 0048b14b
    POP EDI                             ; 0048b14c
    POP EBX                             ; 0048b14d
    RET                                 ; 0048b14e

