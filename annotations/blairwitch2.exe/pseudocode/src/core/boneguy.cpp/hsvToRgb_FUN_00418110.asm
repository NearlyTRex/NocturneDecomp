; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CColor3f * __stack_esi core_boneguy_cpp_hsvToRgb_FUN_00418110(CColor3f *in_hsv,CColor3f *out_rgb)
;
; Parameters:
; CColor3f *       Stack[0x4]:4   in_hsv
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0 at 0041845d
;
; Referenced Globals:
;   double g_DOUBLE_005cc012 = 0.00392156862745098
;   double g_DOUBLE_005cc01a = 0.0235294117647059
;
; Called Functions:
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418110
        ;   Label: core_boneguy.cpp_hsvToRgb_FUN_00418110
    PUSH EDI                            ; 00418111
    PUSH EBP                            ; 00418112
    MOV EBP,ESP                         ; 00418113
    SUB ESP,0x50                        ; 00418115
    AND ESP,0xfffffff8                  ; 00418118
    MOV EAX,dword ptr [EBP + 0x10]      ; 0041811b
    MOV EBX,ESI                         ; 0041811e
    MOV EDX,dword ptr [EAX]             ; 00418120
    MOV dword ptr [ESP + 0x8],EDX       ; 00418122
    MOV EDX,dword ptr [EAX + 0x4]       ; 00418126
    FLDZ                                ; 00418129
    MOV dword ptr [ESP + 0x10],EDX      ; 0041812b
    MOV EAX,dword ptr [EAX + 0x8]       ; 0041812f
    FLD float ptr [ESP + 0x10]          ; 00418132
    MOV dword ptr [ESP + 0xc],EAX       ; 00418136
    FSTP double ptr [ESP]               ; 0041813a
    FCOMP double ptr [ESP]              ; 0041813d
    FNSTSW AX                           ; 00418140
    SAHF                                ; 00418142
    JC 0x0041820f                       ; 00418143
        ;   XREF to: 0041820f (CONDITIONAL_JUMP)  ; LAB_0041820f
    MOV EAX,dword ptr [ESP + 0xc]       ; 00418149
    MOV dword ptr [ESP + 0x4c],EAX      ; 0041814d
    MOV dword ptr [ESP + 0x44],EAX      ; 00418151
    MOV dword ptr [ESP + 0x3c],EAX      ; 00418155
        ;   Label: LAB_00418155
    MOV EAX,dword ptr [ESP + 0x44]      ; 00418159
        ;   Label: default
    MOV dword ptr [ESP + 0x14],EAX      ; 0041815d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00418161
    LEA ESI,[ESP + 0x14]                ; 00418165
    MOV dword ptr [ESP + 0x18],EAX      ; 00418169
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0041816d
    MOV EDI,EBX                         ; 00418171
    MOV dword ptr [ESP + 0x1c],EAX      ; 00418173
    MOVSD ES:EDI,ESI                    ; 00418177
    MOVSD ES:EDI,ESI                    ; 00418178
    MOVSD ES:EDI,ESI                    ; 00418179
    MOV EAX,EBX                         ; 0041817a
    MOV ESP,EBP                         ; 0041817c
    POP EBP                             ; 0041817e
    POP EDI                             ; 0041817f
    POP EBX                             ; 00418180
    RET                                 ; 00418181
    MOV EAX,dword ptr [ESP + 0xc]       ; 00418182
        ;   Label: caseD_0
    MOV dword ptr [ESP + 0x44],EAX      ; 00418186
    MOV EAX,dword ptr [ESP + 0x40]      ; 0041818a
    MOV dword ptr [ESP + 0x4c],EAX      ; 0041818e
    MOV EAX,dword ptr [ESP + 0x38]      ; 00418192
    JMP 0x00418155                      ; 00418196
        ;   XREF to: 00418155 (UNCONDITIONAL_JUMP)  ; LAB_00418155
    MOV EAX,dword ptr [ESP + 0x34]      ; 00418198
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0x44],EAX      ; 0041819c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004181a0
    MOV dword ptr [ESP + 0x4c],EAX      ; 004181a4
    MOV EAX,dword ptr [ESP + 0x38]      ; 004181a8
    JMP 0x00418155                      ; 004181ac
        ;   XREF to: 00418155 (UNCONDITIONAL_JUMP)  ; LAB_00418155
    MOV EAX,dword ptr [ESP + 0x38]      ; 004181ae
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x44],EAX      ; 004181b2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004181b6
    MOV dword ptr [ESP + 0x4c],EAX      ; 004181ba
    MOV EAX,dword ptr [ESP + 0x40]      ; 004181be
    JMP 0x00418155                      ; 004181c2
        ;   XREF to: 00418155 (UNCONDITIONAL_JUMP)  ; LAB_00418155
    MOV EAX,dword ptr [ESP + 0x38]      ; 004181c4
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x44],EAX      ; 004181c8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004181cc
    MOV dword ptr [ESP + 0x4c],EAX      ; 004181d0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004181d4
    JMP 0x00418155                      ; 004181d8
        ;   XREF to: 00418155 (UNCONDITIONAL_JUMP)  ; LAB_00418155
    MOV EAX,dword ptr [ESP + 0x40]      ; 004181dd
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x44],EAX      ; 004181e1
    MOV EAX,dword ptr [ESP + 0x38]      ; 004181e5
    MOV dword ptr [ESP + 0x4c],EAX      ; 004181e9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004181ed
    JMP 0x00418155                      ; 004181f1
        ;   XREF to: 00418155 (UNCONDITIONAL_JUMP)  ; LAB_00418155
    MOV EAX,dword ptr [ESP + 0xc]       ; 004181f6
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x44],EAX      ; 004181fa
    MOV EAX,dword ptr [ESP + 0x38]      ; 004181fe
    MOV dword ptr [ESP + 0x4c],EAX      ; 00418202
    MOV EAX,dword ptr [ESP + 0x34]      ; 00418206
    JMP 0x00418155                      ; 0041820a
        ;   XREF to: 00418155 (UNCONDITIONAL_JUMP)  ; LAB_00418155
    FLD double ptr [ESP]                ; 0041820f
        ;   Label: LAB_0041820f
    FMUL double ptr [0x005cc012]        ; 00418212 | g_DOUBLE_005cc012
    FLD float ptr [ESP + 0x8]           ; 00418218
    FLD ST0                             ; 0041821c
    FMUL double ptr [0x005cc01a]        ; 0041821e | g_DOUBLE_005cc01a
    FXCH ST2                            ; 00418224
    FSTP float ptr [ESP + 0x30]         ; 00418226
    FXCH                                ; 0041822a
    FSTP ST1                            ; 0041822c
    FST float ptr [ESP + 0x8]           ; 0041822e
    SUB ESP,0x8                         ; 00418232
    FSTP double ptr [ESP]               ; 00418235
    CALL crt_math.c_floor_FUN_005b84d0  ; 00418238
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x28],EAX      ; 0041823d
    MOV dword ptr [ESP + 0x2c],EDX      ; 00418241
    FLD double ptr [ESP + 0x28]         ; 00418245
    ADD ESP,0x8                         ; 00418249
    CALL crt_math.c_round_FUN_005b7ff0  ; 0041824c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005b7ff0(double value)
    FISTP dword ptr [ESP + 0x2c]        ; 00418251
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00418255
    MOV dword ptr [ESP + 0x48],EAX      ; 00418259
    LEA EDX,[EAX + 0x258]               ; 0041825d
    MOV ECX,0x6                         ; 00418263
    MOV EAX,EDX                         ; 00418268
    SAR EDX,0x1f                        ; 0041826a
    IDIV ECX                            ; 0041826d
    FLD float ptr [ESP + 0x30]          ; 0041826f
    FLD1                                ; 00418273
    FSUBRP                              ; 00418275
    FLD float ptr [ESP + 0xc]           ; 00418277
    FXCH                                ; 0041827b
    FMUL ST1                            ; 0041827d
    FLD1                                ; 0041827f
    FLD float ptr [ESP + 0x30]          ; 00418281
    FILD dword ptr [ESP + 0x48]         ; 00418285
    FSUBR float ptr [ESP + 0x8]         ; 00418289
    FXCH ST2                            ; 0041828d
    FSUB ST0,ST2                        ; 0041828f
    FXCH                                ; 00418291
    FMULP ST2                           ; 00418293
    FMUL float ptr [ESP + 0x30]         ; 00418295
    FLD1                                ; 00418299
    FLD1                                ; 0041829b
    FXCH                                ; 0041829d
    FSUBRP ST3,ST0                      ; 0041829f
    FSUBRP                              ; 004182a1
    FXCH                                ; 004182a3
    FMUL ST3                            ; 004182a5
    FXCH                                ; 004182a7
    FMULP ST3                           ; 004182a9
    FXCH                                ; 004182ab
    FSTP float ptr [ESP + 0x38]         ; 004182ad
    FSTP float ptr [ESP + 0x34]         ; 004182b1
    FSTP float ptr [ESP + 0x40]         ; 004182b5
    CMP EDX,0x5                         ; 004182b9
    JA 0x00418159                       ; 004182bc
        ;   XREF to: 00418159 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4180f8]  ; 004182c2 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

