; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int shape_superopt.cpp_CObj_weldVertices_FUN_005d4160(CObj * this_ptr, double weld_tolerance, int remove_degenerate)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   weld_tolerance
; int              Stack[0x10]:4   remove_degenerate
; Local Variables:
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
;
; XREF[1]:
;   shape_superopt.cpp_COptimize_FUN_005d7290 at 005d72a0
;
; Referenced Globals:
;   TerminatedCString s_Welding_vertices_d_remov_00654468
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   shape_memdbg.cpp_debugAlloc_FUN_0050f1d0
;   shape_memdbg.cpp_debugFree_FUN_0050f210
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d4160
        ;   Label: shape_superopt.cpp_CObj_weldVertices_FUN_005d4160
    PUSH ESI                            ; 005d4161
    PUSH EDI                            ; 005d4162
    PUSH EBP                            ; 005d4163
    MOV EBP,ESP                         ; 005d4164
    SUB ESP,0xf4                        ; 005d4166
    AND ESP,0xfffffff8                  ; 005d416c
    MOV EAX,dword ptr [EBP + 0x18]      ; 005d416f
    MOV dword ptr [ESP],EAX             ; 005d4172
    MOV EAX,dword ptr [EBP + 0x1c]      ; 005d4175
    MOV dword ptr [ESP + 0x4],EAX       ; 005d4178
    PUSH 0x8000                         ; 005d417c
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d4181
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4184
    PUSH EDX                            ; 005d4187
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d4188
    CALL dword ptr [EAX + 0x84]         ; 005d418b
    ADD ESP,0x8                         ; 005d4191
    XOR ECX,ECX                         ; 005d4194
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4196
    MOV dword ptr [ESP + 0xe8],ECX      ; 005d4199
    MOV ESI,dword ptr [EAX]             ; 005d41a0
    MOV dword ptr [ESP + 0xe0],ECX      ; 005d41a2
    CMP ESI,0x3e8                       ; 005d41a9
    JA 0x005d4255                       ; 005d41af
        ;   XREF to: 005d4255 (CONDITIONAL_JUMP)  ; LAB_005d4255
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d41b5
        ;   Label: LAB_005d41b5
    XOR EDI,EDI                         ; 005d41b8
    MOV EDX,dword ptr [EAX]             ; 005d41ba
    MOV dword ptr [ESP + 0xf0],EDI      ; 005d41bc
    TEST EDX,EDX                        ; 005d41c3
    JBE 0x005d422f                      ; 005d41c5
        ;   XREF to: 005d422f (CONDITIONAL_JUMP)  ; LAB_005d422f
    MOV dword ptr [ESP + 0xe4],EDI      ; 005d41c7
    CMP dword ptr [ESP + 0xe0],0x0      ; 005d41ce
        ;   Label: LAB_005d41ce
    JZ 0x005d41e6                       ; 005d41d6
        ;   XREF to: 005d41e6 (CONDITIONAL_JUMP)  ; LAB_005d41e6
    TEST byte ptr [ESP + 0xf0],0xff     ; 005d41d8
    JZ 0x005d426b                       ; 005d41e0
        ;   XREF to: 005d426b (CONDITIONAL_JUMP)  ; LAB_005d426b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d41e6
        ;   Label: LAB_005d41e6
    MOV EDX,dword ptr [ESP + 0xe4]      ; 005d41e9
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d41f0
    ADD EDX,EAX                         ; 005d41f3
    MOV dword ptr [ESP + 0xec],EDX      ; 005d41f5
    TEST byte ptr [EDX + 0x35],0x80     ; 005d41fc
    JZ 0x005d428a                       ; 005d4200
        ;   XREF to: 005d428a (CONDITIONAL_JUMP)  ; LAB_005d428a
    MOV ECX,dword ptr [ESP + 0xe4]      ; 005d4206
        ;   Label: LAB_005d4206
    MOV EBX,dword ptr [ESP + 0xf0]      ; 005d420d
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d4214
    ADD ECX,0x38                        ; 005d4217
    INC EBX                             ; 005d421a
    MOV ESI,dword ptr [EDX]             ; 005d421b
    MOV dword ptr [ESP + 0xe4],ECX      ; 005d421d
    MOV dword ptr [ESP + 0xf0],EBX      ; 005d4224
    CMP EBX,ESI                         ; 005d422b
    JC 0x005d41ce                       ; 005d422d
        ;   XREF to: 005d41ce (CONDITIONAL_JUMP)  ; LAB_005d41ce
    MOV EDI,dword ptr [ESP + 0xe0]      ; 005d422f
        ;   Label: LAB_005d422f
    PUSH EDI                            ; 005d4236
    CALL shape_memdbg.cpp_debugFree_FUN_0050f210 ; 005d4237
        ;   XREF to: 0050f210 (UNCONDITIONAL_CALL)  ; void shape_memdbg.cpp_debugFree_FUN_0050f210(void * ptr)
    ADD ESP,0x4                         ; 005d423c
    CMP dword ptr [EBP + 0x20],0x0      ; 005d423f
    JNZ 0x005d44b3                      ; 005d4243
        ;   XREF to: 005d44b3 (CONDITIONAL_JUMP)  ; LAB_005d44b3
    MOV EAX,0x1                         ; 005d4249
    MOV ESP,EBP                         ; 005d424e
    POP EBP                             ; 005d4250
    POP EDI                             ; 005d4251
    POP ESI                             ; 005d4252
    POP EBX                             ; 005d4253
    RET                                 ; 005d4254
    PUSH 0x4                            ; 005d4255
        ;   Label: LAB_005d4255
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1d0 ; 005d4257
        ;   XREF to: 0050f1d0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1d0(int size)
    ADD ESP,0x4                         ; 005d425c
    MOV dword ptr [ESP + 0xe0],EAX      ; 005d425f
    JMP 0x005d41b5                      ; 005d4266
        ;   XREF to: 005d41b5 (UNCONDITIONAL_JUMP)  ; LAB_005d41b5
    MOV ESI,dword ptr [ESP + 0xe8]      ; 005d426b
        ;   Label: LAB_005d426b
    PUSH ESI                            ; 005d4272
    PUSH 0x654468                       ; 005d4273 | = "Welding vertices (%d removed so far)"
    LEA EAX,[ESP + 0x10]                ; 005d4278
    PUSH EAX                            ; 005d427c
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005d427d
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005d4282
    JMP 0x005d41e6                      ; 005d4285
        ;   XREF to: 005d41e6 (UNCONDITIONAL_JUMP)  ; LAB_005d41e6
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d428a
        ;   Label: LAB_005d428a
    MOV ECX,0x6                         ; 005d4291
    LEA EDI,[ESP + 0x64]                ; 005d4296
    LEA ESI,[ESP + 0xac]                ; 005d429a
    FLD double ptr [EAX]                ; 005d42a1
    FLD double ptr [EAX + 0x8]          ; 005d42a3
    FLD double ptr [EAX + 0x10]         ; 005d42a6
    FXCH ST2                            ; 005d42a9
    FLD double ptr [ESP]                ; 005d42ab
    FXCH                                ; 005d42ae
    FSUB ST0,ST1                        ; 005d42b0
    FXCH ST2                            ; 005d42b2
    FSUB ST0,ST1                        ; 005d42b4
    FXCH ST3                            ; 005d42b6
    FSUB ST0,ST1                        ; 005d42b8
    FXCH ST2                            ; 005d42ba
    FSTP double ptr [ESP + 0xac]        ; 005d42bc
    FXCH ST2                            ; 005d42c3
    FSTP double ptr [ESP + 0xb4]        ; 005d42c5
    FSTP double ptr [ESP + 0xbc]        ; 005d42cc
    MOVSD.REP ES:EDI,ESI                ; 005d42d3
    FLD double ptr [EAX]                ; 005d42d5
    FLD double ptr [EAX + 0x8]          ; 005d42d7
    FLD double ptr [EAX + 0x10]         ; 005d42da
    MOV ECX,0x6                         ; 005d42dd
    LEA EDI,[ESP + 0x94]                ; 005d42e2
    LEA ESI,[ESP + 0x7c]                ; 005d42e9
    FXCH ST2                            ; 005d42ed
    FADD ST0,ST3                        ; 005d42ef
    FXCH                                ; 005d42f1
    FADD ST0,ST3                        ; 005d42f3
    FXCH ST2                            ; 005d42f5
    FADDP ST3,ST0                       ; 005d42f7
    FSTP double ptr [ESP + 0x7c]        ; 005d42f9
    FSTP double ptr [ESP + 0x84]        ; 005d42fd
    FSTP double ptr [ESP + 0x8c]        ; 005d4304
    MOVSD.REP ES:EDI,ESI                ; 005d430b
    OR byte ptr [EAX + 0x35],0x80       ; 005d430d
    MOV EDX,dword ptr [ESP + 0xf0]      ; 005d4311
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d4318
    INC EDX                             ; 005d431b
    CMP EDX,dword ptr [EAX]             ; 005d431c
    JNC 0x005d4206                      ; 005d431e
        ;   XREF to: 005d4206 (CONDITIONAL_JUMP)  ; LAB_005d4206
    IMUL EAX,EDX,0x38                   ; 005d4324
    MOV dword ptr [ESP + 0xdc],EAX      ; 005d4327
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d432e
        ;   Label: LAB_005d432e
    MOV EBX,dword ptr [ESP + 0xdc]      ; 005d4331
    MOV ESI,dword ptr [ESI + 0x4]       ; 005d4338
    ADD ESI,EBX                         ; 005d433b
    TEST byte ptr [ESI + 0x35],0x80     ; 005d433d
    JZ 0x005d4359                       ; 005d4341
        ;   XREF to: 005d4359 (CONDITIONAL_JUMP)  ; LAB_005d4359
    ADD dword ptr [ESP + 0xdc],0x38     ; 005d4343
        ;   Label: LAB_005d4343
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d434b
    INC EDX                             ; 005d434e
    CMP EDX,dword ptr [EAX]             ; 005d434f
    JNC 0x005d4206                      ; 005d4351
        ;   XREF to: 005d4206 (CONDITIONAL_JUMP)  ; LAB_005d4206
    JMP 0x005d432e                      ; 005d4357
        ;   XREF to: 005d432e (UNCONDITIONAL_JUMP)  ; LAB_005d432e
    MOV EDI,dword ptr [ESP + 0x4]       ; 005d4359
        ;   Label: LAB_005d4359
    MOV EAX,dword ptr [ESP]             ; 005d435d
    TEST EDI,0x7fffffff                 ; 005d4360
    JNZ 0x005d4416                      ; 005d4366
        ;   XREF to: 005d4416 (CONDITIONAL_JUMP)  ; LAB_005d4416
    TEST EAX,EAX                        ; 005d436c
    JNZ 0x005d4416                      ; 005d436e
        ;   XREF to: 005d4416 (CONDITIONAL_JUMP)  ; LAB_005d4416
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d4374
    FLD double ptr [EAX]                ; 005d437b
    FCOMP double ptr [ESI]              ; 005d437d
    FNSTSW AX                           ; 005d437f
    SAHF                                ; 005d4381
    JNZ 0x005d4343                      ; 005d4382
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d4384
    FLD double ptr [EAX + 0x8]          ; 005d438b
    FCOMP double ptr [ESI + 0x8]        ; 005d438e
    FNSTSW AX                           ; 005d4391
    SAHF                                ; 005d4393
    JNZ 0x005d4343                      ; 005d4394
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d4396
    FLD double ptr [EAX + 0x10]         ; 005d439d
    FCOMP double ptr [ESI + 0x10]       ; 005d43a0
    FNSTSW AX                           ; 005d43a3
    SAHF                                ; 005d43a5
    JNZ 0x005d4343                      ; 005d43a6
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d43a8
        ;   Label: LAB_005d43a8
    MOV ECX,dword ptr [EAX + 0x8]       ; 005d43ab
    XOR EBX,EBX                         ; 005d43ae
    TEST ECX,ECX                        ; 005d43b0
    JBE 0x005d43f9                      ; 005d43b2
        ;   XREF to: 005d43f9 (CONDITIONAL_JUMP)  ; LAB_005d43f9
    XOR ECX,ECX                         ; 005d43b4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d43b6
        ;   Label: LAB_005d43b6
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d43b9
    ADD EAX,ECX                         ; 005d43bc
    CMP EDX,dword ptr [EAX + 0x4]       ; 005d43be
    JNZ 0x005d43cd                      ; 005d43c1
        ;   XREF to: 005d43cd (CONDITIONAL_JUMP)  ; LAB_005d43cd
    MOV EDI,dword ptr [ESP + 0xf0]      ; 005d43c3
    MOV dword ptr [EAX + 0x4],EDI       ; 005d43ca
    CMP EDX,dword ptr [EAX + 0x8]       ; 005d43cd
        ;   Label: LAB_005d43cd
    JNZ 0x005d43dc                      ; 005d43d0
        ;   XREF to: 005d43dc (CONDITIONAL_JUMP)  ; LAB_005d43dc
    MOV EDI,dword ptr [ESP + 0xf0]      ; 005d43d2
    MOV dword ptr [EAX + 0x8],EDI       ; 005d43d9
    CMP EDX,dword ptr [EAX + 0xc]       ; 005d43dc
        ;   Label: LAB_005d43dc
    JNZ 0x005d43eb                      ; 005d43df
        ;   XREF to: 005d43eb (CONDITIONAL_JUMP)  ; LAB_005d43eb
    MOV EDI,dword ptr [ESP + 0xf0]      ; 005d43e1
    MOV dword ptr [EAX + 0xc],EDI       ; 005d43e8
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d43eb
        ;   Label: LAB_005d43eb
    INC EBX                             ; 005d43ee
    MOV EDI,dword ptr [EAX + 0x8]       ; 005d43ef
    ADD ECX,0x68                        ; 005d43f2
    CMP EBX,EDI                         ; 005d43f5
    JC 0x005d43b6                       ; 005d43f7
        ;   XREF to: 005d43b6 (CONDITIONAL_JUMP)  ; LAB_005d43b6
    MOV EAX,dword ptr [ESP + 0xe8]      ; 005d43f9
        ;   Label: LAB_005d43f9
    MOV BH,byte ptr [ESI + 0x35]        ; 005d4400
    INC EAX                             ; 005d4403
    OR BH,0x80                          ; 005d4404
    MOV dword ptr [ESP + 0xe8],EAX      ; 005d4407
    MOV byte ptr [ESI + 0x35],BH        ; 005d440e
    JMP 0x005d4343                      ; 005d4411
        ;   XREF to: 005d4343 (UNCONDITIONAL_JUMP)  ; LAB_005d4343
    FLD double ptr [ESI]                ; 005d4416
        ;   Label: LAB_005d4416
    FCOMP double ptr [ESP + 0x64]       ; 005d4418
    FNSTSW AX                           ; 005d441c
    SAHF                                ; 005d441e
    JC 0x005d4343                       ; 005d441f
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    FLD double ptr [ESI]                ; 005d4425
    FCOMP double ptr [ESP + 0x94]       ; 005d4427
    FNSTSW AX                           ; 005d442e
    SAHF                                ; 005d4430
    JA 0x005d4343                       ; 005d4431
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    FLD double ptr [ESI + 0x8]          ; 005d4437
    FCOMP double ptr [ESP + 0x6c]       ; 005d443a
    FNSTSW AX                           ; 005d443e
    SAHF                                ; 005d4440
    JC 0x005d4343                       ; 005d4441
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    FLD double ptr [ESI + 0x8]          ; 005d4447
    FCOMP double ptr [ESP + 0x9c]       ; 005d444a
    FNSTSW AX                           ; 005d4451
    SAHF                                ; 005d4453
    JA 0x005d4343                       ; 005d4454
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    FLD double ptr [ESI + 0x10]         ; 005d445a
    FCOMP double ptr [ESP + 0x74]       ; 005d445d
    FNSTSW AX                           ; 005d4461
    SAHF                                ; 005d4463
    JC 0x005d4343                       ; 005d4464
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    FLD double ptr [ESI + 0x10]         ; 005d446a
    FCOMP double ptr [ESP + 0xa4]       ; 005d446d
    FNSTSW AX                           ; 005d4474
    SAHF                                ; 005d4476
    JA 0x005d4343                       ; 005d4477
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    MOV EAX,dword ptr [ESP + 0xec]      ; 005d447d
    FLD double ptr [ESI]                ; 005d4484
    FSUB double ptr [EAX]               ; 005d4486
    FMUL ST0                            ; 005d4488
    FLD double ptr [ESI + 0x8]          ; 005d448a
    FSUB double ptr [EAX + 0x8]         ; 005d448d
    FMUL ST0                            ; 005d4490
    FLD double ptr [ESI + 0x10]         ; 005d4492
    FXCH                                ; 005d4495
    FADDP ST2,ST0                       ; 005d4497
    FSUB double ptr [EAX + 0x10]        ; 005d4499
    FMUL ST0                            ; 005d449c
    FADDP                               ; 005d449e
    FSQRT                               ; 005d44a0
    FCOMP double ptr [ESP]              ; 005d44a2
    FNSTSW AX                           ; 005d44a5
    SAHF                                ; 005d44a7
    JA 0x005d4343                       ; 005d44a8
        ;   XREF to: 005d4343 (CONDITIONAL_JUMP)  ; LAB_005d4343
    JMP 0x005d43a8                      ; 005d44ae
        ;   XREF to: 005d43a8 (UNCONDITIONAL_JUMP)  ; LAB_005d43a8
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d44b3
        ;   Label: LAB_005d44b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d44b6
    PUSH EDX                            ; 005d44b9
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d44ba
    CALL dword ptr [EAX + 0xcc]         ; 005d44bd
    ADD ESP,0x4                         ; 005d44c3
    MOV ESP,EBP                         ; 005d44c6
    POP EBP                             ; 005d44c8
    POP EDI                             ; 005d44c9
    POP ESI                             ; 005d44ca
    POP EBX                             ; 005d44cb
    RET                                 ; 005d44cc

