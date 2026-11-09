; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float unkafter_djien_cpp_FUN_004610b0(int param_1,float *param_2,float *param_3,undefined4 *param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_005d8e68
;   WatcomTypeInfo g_CVectorTypeInfo
;
; Called Functions:
;   core_box.cpp_FUN_00420ee0
;   crt_memory.c___arrinit_FUN_005c0357
;   unkafter_djien.cpp_FUN_004615b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004610b0
        ;   Label: unkafter_djien.cpp_FUN_004610b0
    PUSH ESI                            ; 004610b1
    PUSH EDI                            ; 004610b2
    PUSH EBP                            ; 004610b3
    MOV EBP,ESP                         ; 004610b4
    SUB ESP,0x124                       ; 004610b6
    AND ESP,0xfffffff8                  ; 004610bc
    MOV EBX,dword ptr [EBP + 0x18]      ; 004610bf
    PUSH 0x0                            ; 004610c2
    MOV EDX,dword ptr [EBP + 0x1c]      ; 004610c4
    PUSH EDX                            ; 004610c7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004610c8
    PUSH EBX                            ; 004610cb
    MOV ECX,dword ptr [EBP + 0x14]      ; 004610cc
    MOV EAX,dword ptr [EAX + 0x154]     ; 004610cf
    PUSH ECX                            ; 004610d5
    LEA ESI,[ESP + 0xbc]                ; 004610d6
    LEA EDI,[ESP + 0xd4]                ; 004610dd
    CALL dword ptr [EAX + 0x1c]         ; 004610e4
    MOV ECX,0x6                         ; 004610e7
    ADD ESP,0x4                         ; 004610ec
    LEA EAX,[ESP + 0xd0]                ; 004610ef
    LEA ESI,[ESP + 0xb8]                ; 004610f6
    PUSH EAX                            ; 004610fd
    MOVSD.REP ES:EDI,ESI                ; 004610fe
    CALL core_box.cpp_FUN_00420ee0      ; 00461100
        ;   XREF to: 00420ee0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420ee0()
    MOV dword ptr [ESP + 0x130],EAX     ; 00461105
    FLD float ptr [ESP + 0x130]         ; 0046110c
    ADD ESP,0x10                        ; 00461113
    FLDZ                                ; 00461116
    FXCH                                ; 00461118
    FSTP double ptr [ESP]               ; 0046111a
    FCOMP double ptr [ESP]              ; 0046111d
    FNSTSW AX                           ; 00461120
    SAHF                                ; 00461122
    JA 0x0046112f                       ; 00461123
        ;   XREF to: 0046112f (CONDITIONAL_JUMP)  ; LAB_0046112f
    FLD1                                ; 00461125
    FCOMP double ptr [ESP]              ; 00461127
    FNSTSW AX                           ; 0046112a
    SAHF                                ; 0046112c
    JNC 0x00461148                      ; 0046112d
        ;   XREF to: 00461148 (CONDITIONAL_JUMP)  ; LAB_00461148
    MOV dword ptr [ESP + 0x108],0x40000000 ; 0046112f
        ;   Label: LAB_0046112f
    MOV EAX,dword ptr [ESP + 0x108]     ; 0046113a
    MOV ESP,EBP                         ; 00461141
    POP EBP                             ; 00461143
    POP EDI                             ; 00461144
    POP ESI                             ; 00461145
    POP EBX                             ; 00461146
    RET                                 ; 00461147
    PUSH 0x5fb430                       ; 00461148 | g_CVectorTypeInfo
        ;   Label: LAB_00461148
    PUSH 0xa                            ; 0046114d
    LEA EAX,[ESP + 0x14]                ; 0046114f
    PUSH EAX                            ; 00461153
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00461154
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 00461159
    LEA EAX,[ESP + 0x84]                ; 0046115c
    PUSH EAX                            ; 00461163
    LEA EAX,[ESP + 0x10]                ; 00461164
    PUSH EAX                            ; 00461168
    MOV ESI,dword ptr [EBP + 0x14]      ; 00461169
    PUSH ESI                            ; 0046116c
    CALL unkafter_djien.cpp_FUN_004615b0 ; 0046116d
        ;   XREF to: 004615b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_djien.cpp_FUN_004615b0()
    ADD ESP,0xc                         ; 00461172
    MOV EDI,0xffffffff                  ; 00461175
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0046117a
    MOV dword ptr [ESP + 0x110],EDI     ; 0046117d
    LEA EDI,[ESP + 0xdc]                ; 00461184
    MOVSD ES:EDI,ESI                    ; 0046118b
    MOVSD ES:EDI,ESI                    ; 0046118c
    MOVSD ES:EDI,ESI                    ; 0046118d
    FLD float ptr [ESP + 0xe0]          ; 0046118e
    FMUL ST0                            ; 00461195
    FLD float ptr [ESP + 0xdc]          ; 00461197
    FMUL ST0                            ; 0046119e
    FADDP                               ; 004611a0
    FLD float ptr [ESP + 0xe4]          ; 004611a2
    FMUL ST0                            ; 004611a9
    MOV dword ptr [ESP + 0x11c],EAX     ; 004611ab
    MOV EAX,0x49742400                  ; 004611b2
    FADDP                               ; 004611b7
    MOV dword ptr [ESP + 0x10c],EAX     ; 004611b9
    FSQRT                               ; 004611c0
    FLDZ                                ; 004611c2
    FXCH                                ; 004611c4
    FSTP float ptr [ESP + 0x104]        ; 004611c6
    FCOMP float ptr [ESP + 0x104]       ; 004611cd
    FNSTSW AX                           ; 004611d4
    SAHF                                ; 004611d6
    JNC 0x00461338                      ; 004611d7
        ;   XREF to: 00461338 (CONDITIONAL_JUMP)  ; LAB_00461338
    FLD1                                ; 004611dd
    FLD float ptr [ESP + 0xdc]          ; 004611df
    FXCH                                ; 004611e6
    FDIV float ptr [ESP + 0x104]        ; 004611e8
    FXCH                                ; 004611ef
    FMUL ST1                            ; 004611f1
    FLD float ptr [ESP + 0xe0]          ; 004611f3
    FMUL ST2                            ; 004611fa
    FLD float ptr [ESP + 0xe4]          ; 004611fc
    FMULP ST3                           ; 00461203
    FXCH                                ; 00461205
    FSTP float ptr [ESP + 0xdc]         ; 00461207
    FSTP float ptr [ESP + 0xe0]         ; 0046120e
    FSTP float ptr [ESP + 0xe4]         ; 00461215
    MOV EDI,dword ptr [ESP + 0x11c]     ; 0046121c
        ;   Label: LAB_0046121c
    XOR ECX,ECX                         ; 00461223
    TEST EDI,EDI                        ; 00461225
    JLE 0x00461327                      ; 00461227
        ;   XREF to: 00461327 (CONDITIONAL_JUMP)  ; LAB_00461327
    LEA EDX,[ESP + 0xc]                 ; 0046122d
    FLD float ptr [EDX]                 ; 00461231
        ;   Label: LAB_00461231
    FLD float ptr [EDX + 0x4]           ; 00461233
    FLD float ptr [EDX + 0x8]           ; 00461236
    LEA EDI,[ESP + 0xe8]                ; 00461239
    LEA ESI,[ESP + 0xf4]                ; 00461240
    FXCH ST2                            ; 00461247
    FSUB float ptr [EBX]                ; 00461249
    FXCH                                ; 0046124b
    FSUB float ptr [EBX + 0x4]          ; 0046124d
    FXCH ST2                            ; 00461250
    FSUB float ptr [EBX + 0x8]          ; 00461252
    FXCH                                ; 00461255
    FSTP float ptr [ESP + 0xf4]         ; 00461257
    FXCH                                ; 0046125e
    FSTP float ptr [ESP + 0xf8]         ; 00461260
    FSTP float ptr [ESP + 0xfc]         ; 00461267
    MOVSD ES:EDI,ESI                    ; 0046126e
    MOVSD ES:EDI,ESI                    ; 0046126f
    MOVSD ES:EDI,ESI                    ; 00461270
    FLD float ptr [ESP + 0xec]          ; 00461271
    FMUL float ptr [ESP + 0xe0]         ; 00461278
    FLD float ptr [ESP + 0xec]          ; 0046127f
    FMUL ST0                            ; 00461286
    FLD float ptr [ESP + 0xe8]          ; 00461288
    FMUL ST0                            ; 0046128f
    FLD float ptr [ESP + 0xe8]          ; 00461291
    FMUL float ptr [ESP + 0xdc]         ; 00461298
    FLD float ptr [ESP + 0xf0]          ; 0046129f
    FXCH                                ; 004612a6
    FADDP ST4,ST0                       ; 004612a8
    FMUL float ptr [ESP + 0xf0]         ; 004612aa
    FLD float ptr [ESP + 0xf0]          ; 004612b1
    FMUL float ptr [ESP + 0xe4]         ; 004612b8
    FXCH ST3                            ; 004612bf
    FSTP float ptr [ESP + 0x114]        ; 004612c1
    FXCH                                ; 004612c8
    FADD float ptr [ESP + 0x114]        ; 004612ca
    FXCH                                ; 004612d1
    FSTP float ptr [ESP + 0x118]        ; 004612d3
    FXCH                                ; 004612da
    FADDP ST2,ST0                       ; 004612dc
    FADD float ptr [ESP + 0x118]        ; 004612de
    FXCH                                ; 004612e5
    FMUL ST0                            ; 004612e7
    FXCH                                ; 004612e9
    FST float ptr [ESP + 0x8]           ; 004612eb
    FSUBRP                              ; 004612ef
    FSUBR float ptr [0x005d8e68]        ; 004612f1 | DAT_005d8e68
    FLDZ                                ; 004612f7
    FCOMPP                              ; 004612f9
    FNSTSW AX                           ; 004612fb
    SAHF                                ; 004612fd
    JNC 0x00461314                      ; 004612fe
        ;   XREF to: 00461314 (CONDITIONAL_JUMP)  ; LAB_00461314
    FLD float ptr [ESP + 0x8]           ; 00461300
    FSQRT                               ; 00461304
    MOV dword ptr [ESP + 0x110],ECX     ; 00461306
    FSTP float ptr [ESP + 0x10c]        ; 0046130d
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00461314
        ;   Label: LAB_00461314
    INC ECX                             ; 0046131b
    ADD EDX,0xc                         ; 0046131c
    CMP ECX,ESI                         ; 0046131f
    JL 0x00461231                       ; 00461321
        ;   XREF to: 00461231 (CONDITIONAL_JUMP)  ; LAB_00461231
    MOV EDI,dword ptr [ESP + 0x110]     ; 00461327
        ;   Label: LAB_00461327
    CMP EDI,-0x1                        ; 0046132e
    JNZ 0x00461354                      ; 00461331
        ;   XREF to: 00461354 (CONDITIONAL_JUMP)  ; LAB_00461354
    JMP 0x0046112f                      ; 00461333
        ;   XREF to: 0046112f (UNCONDITIONAL_JUMP)  ; LAB_0046112f
    XOR EDX,EDX                         ; 00461338
        ;   Label: LAB_00461338
    MOV dword ptr [ESP + 0xe0],EDX      ; 0046133a
    MOV dword ptr [ESP + 0xdc],EDX      ; 00461341
    MOV dword ptr [ESP + 0xe4],EDX      ; 00461348
    JMP 0x0046121c                      ; 0046134f
        ;   XREF to: 0046121c (UNCONDITIONAL_JUMP)  ; LAB_0046121c
    MOV EDX,dword ptr [EBP + 0x20]      ; 00461354
        ;   Label: LAB_00461354
    MOV EAX,dword ptr [ESP + EDI*0x4 + 0x84] ; 00461357
    MOV dword ptr [EDX + 0xc],EAX       ; 0046135e
    MOV EAX,EDX                         ; 00461361
    MOV dword ptr [EDX + 0x8],0x0       ; 00461363
    MOV ECX,dword ptr [EAX + 0x8]       ; 0046136a
    MOV dword ptr [EDX + 0x4],ECX       ; 0046136d
    FLD float ptr [EAX + 0x4]           ; 00461370
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00461373
    FSTP float ptr [EDX]                ; 00461376
    FLD float ptr [EAX + 0x4]           ; 00461378
    FMUL ST0                            ; 0046137b
    FLD float ptr [EAX]                 ; 0046137d
    FMUL ST0                            ; 0046137f
    FADDP                               ; 00461381
    FLD float ptr [EAX + 0x8]           ; 00461383
    FMUL ST0                            ; 00461386
    FADDP                               ; 00461388
    FSQRT                               ; 0046138a
    FDIVR float ptr [ESP + 0x10c]       ; 0046138c
    FSTP float ptr [ESP + 0x108]        ; 00461393
    MOV EAX,dword ptr [ESP + 0x108]     ; 0046139a
    MOV ESP,EBP                         ; 004613a1
    POP EBP                             ; 004613a3
    POP EDI                             ; 004613a4
    POP ESI                             ; 004613a5
    POP EBX                             ; 004613a6
    RET                                 ; 004613a7

