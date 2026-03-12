; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_quantize_cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0(CColorQuantizer *this_ptr,uchar *output_buffer)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   output_buffer
; Local Variables:
; uchar            Stack[-0x14]:1  local_14
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_quantize_FUN_00554cc0 at 00554d31
;
; Referenced Globals:
;   double DOUBLE_00640d83 = 0.590000000000000
;   double DOUBLE_00640d8b = 0.300000000000000
;   double DOUBLE_00640d93 = 0.110000000000000
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00555ff0
        ;   Label: shape_quantize.cpp_CColorQuantizer_generateSortedPalette_FUN_00555ff0
    PUSH ESI                            ; 00555ff1
    PUSH EDI                            ; 00555ff2
    PUSH EBP                            ; 00555ff3
    SUB ESP,0x14                        ; 00555ff4
    MOV EBX,dword ptr [ESP + 0x28]      ; 00555ff7
    MOV EDX,dword ptr [EBX + 0x4b40]    ; 00555ffb
    XOR EBP,EBP                         ; 00556001
    TEST EDX,EDX                        ; 00556003
    JLE 0x00556096                      ; 00556005
        ;   XREF to: 00556096 (CONDITIONAL_JUMP)  ; LAB_00556096
    FLD double ptr [0x00640d93]         ; 0055600b | DOUBLE_00640d93
    FLD double ptr [0x00640d8b]         ; 00556011 | DOUBLE_00640d8b
    MOV EAX,EBX                         ; 00556017
    MOV EDX,EBX                         ; 00556019
    FLD double ptr [0x00640d83]         ; 0055601b | DOUBLE_00640d83
    FILD word ptr [EDX + 0x2030]        ; 00556021
        ;   Label: LAB_00556021
    FSTP float ptr [EAX + 0x1030]       ; 00556027
    ADD EAX,0x10                        ; 0055602d
    FILD word ptr [EDX + 0x2032]        ; 00556030
    FSTP float ptr [EAX + 0x1024]       ; 00556036
    FILD word ptr [EDX + 0x2034]        ; 0055603c
    FLD float ptr [EAX + 0x1024]        ; 00556042
    MOV dword ptr [EAX + 0x20],0x0      ; 00556048
    FMUL ST2                            ; 0055604f
    MOV dword ptr [EAX + 0x24],0x0      ; 00556051
    FLD float ptr [EAX + 0x1020]        ; 00556058
    FMUL ST4                            ; 0055605e
    MOV dword ptr [EAX + 0x28],0x0      ; 00556060
    FADDP                               ; 00556067
    FXCH                                ; 00556069
    FST float ptr [EAX + 0x1028]        ; 0055606b
    FMUL ST4                            ; 00556071
    MOV dword ptr [EAX + 0x2c],0x0      ; 00556073
    FADDP                               ; 0055607a
    INC EBP                             ; 0055607c
    FSTP float ptr [EAX + 0x102c]       ; 0055607d
    MOV ECX,dword ptr [EBX + 0x4b40]    ; 00556083
    ADD EDX,0x28                        ; 00556089
    CMP EBP,ECX                         ; 0055608c
    JL 0x00556021                       ; 0055608e
        ;   XREF to: 00556021 (CONDITIONAL_JUMP)  ; LAB_00556021
    FSTP ST0                            ; 00556090
    FSTP ST0                            ; 00556092
    FSTP ST0                            ; 00556094
    MOV ESI,dword ptr [EBX + 0x4b40]    ; 00556096
        ;   Label: LAB_00556096
    XOR EBP,EBP                         ; 0055609c
    TEST ESI,ESI                        ; 0055609e
    JLE 0x005560d5                      ; 005560a0
        ;   XREF to: 005560d5 (CONDITIONAL_JUMP)  ; LAB_005560d5
    MOV EDX,EBX                         ; 005560a2
        ;   Label: LAB_005560a2
    XOR ECX,ECX                         ; 005560a4
    MOV EAX,dword ptr [EBX + 0x4b40]    ; 005560a6
        ;   Label: LAB_005560a6
    DEC EAX                             ; 005560ac
    CMP ECX,EAX                         ; 005560ad
    JGE 0x005560cc                      ; 005560af
        ;   XREF to: 005560cc (CONDITIONAL_JUMP)  ; LAB_005560cc
    FLD float ptr [EDX + 0x103c]        ; 005560b1
    FCOMP float ptr [EDX + 0x104c]      ; 005560b7
    FNSTSW AX                           ; 005560bd
    SAHF                                ; 005560bf
    JA 0x00556148                       ; 005560c0
        ;   XREF to: 00556148 (CONDITIONAL_JUMP)  ; LAB_00556148
    INC ECX                             ; 005560c6
    ADD EDX,0x10                        ; 005560c7
    JMP 0x005560a6                      ; 005560ca
        ;   XREF to: 005560a6 (UNCONDITIONAL_JUMP)  ; LAB_005560a6
    INC EBP                             ; 005560cc
        ;   Label: LAB_005560cc
    CMP EBP,dword ptr [EBX + 0x4b40]    ; 005560cd
    JL 0x005560a2                       ; 005560d3
        ;   XREF to: 005560a2 (CONDITIONAL_JUMP)  ; LAB_005560a2
    MOV EAX,dword ptr [EBX + 0x4b40]    ; 005560d5
        ;   Label: LAB_005560d5
    XOR EBP,EBP                         ; 005560db
    TEST EAX,EAX                        ; 005560dd
    JLE 0x00556140                      ; 005560df
        ;   XREF to: 00556140 (CONDITIONAL_JUMP)  ; LAB_00556140
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005560e1
    MOV EDX,EBX                         ; 005560e5
    FLD float ptr [EDX + 0x1030]        ; 005560e7
        ;   Label: LAB_005560e7
    CALL crt_math.c_round_FUN_005fe6b0  ; 005560ed
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    ADD EAX,0x3                         ; 005560f2
    FISTP dword ptr [ESP + 0x10]        ; 005560f5
    MOV CL,byte ptr [ESP + 0x10]        ; 005560f9
    MOV byte ptr [EAX + -0x1],CL        ; 005560fd
    FLD float ptr [EDX + 0x1034]        ; 00556100
    CALL crt_math.c_round_FUN_005fe6b0  ; 00556106
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 0055610b
    MOV CL,byte ptr [ESP + 0x10]        ; 0055610f
    MOV byte ptr [EAX + -0x2],CL        ; 00556113
    FLD float ptr [EDX + 0x1038]        ; 00556116
    CALL crt_math.c_round_FUN_005fe6b0  ; 0055611c
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x10]        ; 00556121
    MOV CL,byte ptr [ESP + 0x10]        ; 00556125
    INC EBP                             ; 00556129
    MOV byte ptr [EAX + -0x3],CL        ; 0055612a
    MOV ECX,dword ptr [EBX + 0x4b40]    ; 0055612d
    ADD EDX,0x10                        ; 00556133
    CMP EBP,ECX                         ; 00556136
    JL 0x005560e7                       ; 00556138
        ;   XREF to: 005560e7 (CONDITIONAL_JUMP)  ; LAB_005560e7
    LEA EAX,[EAX]                       ; 0055613a
    ADD ESP,0x14                        ; 00556140
        ;   Label: LAB_00556140
    POP EBP                             ; 00556143
    POP EDI                             ; 00556144
    POP ESI                             ; 00556145
    POP EBX                             ; 00556146
    RET                                 ; 00556147
    MOV EDI,ESP                         ; 00556148
        ;   Label: LAB_00556148
    LEA ESI,[EDX + 0x1030]              ; 0055614a
    MOVSD ES:EDI,ESI                    ; 00556150
    MOVSD ES:EDI,ESI                    ; 00556151
    MOVSD ES:EDI,ESI                    ; 00556152
    MOVSD ES:EDI,ESI                    ; 00556153
    LEA EDI,[EDX + 0x1030]              ; 00556154
    LEA ESI,[EDX + 0x1040]              ; 0055615a
    MOVSD ES:EDI,ESI                    ; 00556160
    MOVSD ES:EDI,ESI                    ; 00556161
    MOVSD ES:EDI,ESI                    ; 00556162
    MOVSD ES:EDI,ESI                    ; 00556163
    MOV ESI,ESP                         ; 00556164
    LEA EDI,[EDX + 0x1040]              ; 00556166
    MOVSD ES:EDI,ESI                    ; 0055616c
    MOVSD ES:EDI,ESI                    ; 0055616d
    MOVSD ES:EDI,ESI                    ; 0055616e
    MOVSD ES:EDI,ESI                    ; 0055616f
    INC ECX                             ; 00556170
    ADD EDX,0x10                        ; 00556171
    JMP 0x005560a6                      ; 00556174
        ;   XREF to: 005560a6 (UNCONDITIONAL_JUMP)  ; LAB_005560a6

