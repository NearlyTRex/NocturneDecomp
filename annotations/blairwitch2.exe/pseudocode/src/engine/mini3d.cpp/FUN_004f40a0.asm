; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f40a0(float *param_1,int param_2,ushort *param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x124]:1  local_124
; undefined        Stack[-0x64]:1  local_64
; undefined8       Stack[-0x24]:8  local_24
; undefined8       Stack[-0x1c]:8  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   engine_font.cpp_FUN_004a97a0 at 004a9845
;   engine_mini3d.cpp_FUN_004f90d0 at 004f930c
;
; Referenced Globals:
;   TerminatedCString s_engine_mini3d_cpp_005dddf0
;   TerminatedCString s_CMini3D_polyList_Too_man_005dde05
;   undefined4 DAT_005dde34
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d09854
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d09b7c
;   undefined4 DAT_01d0d2b4
;   undefined4 DAT_01d167ec
;   ... and 2 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   engine_mini3d.cpp_FUN_004f3740
;   engine_mini3d.cpp_FUN_004f38c0
;   engine_mini3d.cpp_FUN_004f6be0
;   engine_mini3d.cpp_FUN_004f6d00
;   engine_mini3d.cpp_FUN_004f7a50
;   engine_mini3d.cpp_FUN_004f7da0
;   engine_mini3d.cpp_FUN_004f7e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f40a0
        ;   Label: engine_mini3d.cpp_FUN_004f40a0
    PUSH ESI                            ; 004f40a1
    PUSH EDI                            ; 004f40a2
    PUSH EBP                            ; 004f40a3
    SUB ESP,0x114                       ; 004f40a4
    MOV EBX,dword ptr [ESP + 0x128]     ; 004f40aa
    MOV EAX,dword ptr [ESP + 0x134]     ; 004f40b1
    MOV EDX,dword ptr [0x01e61b58]      ; 004f40b8 | DAT_01e61b58
    MOV ECX,dword ptr [0x01d09854]      ; 004f40be | DAT_01d09854
    ADD EDX,EAX                         ; 004f40c4
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004f40c6
    MOV ESI,dword ptr [0x01d0d2b4]      ; 004f40cd | DAT_01d0d2b4
    ADD ECX,EAX                         ; 004f40d3
    MOV dword ptr [0x01e61b58],EDX      ; 004f40d5 | DAT_01e61b58
    MOV dword ptr [0x01d09854],ECX      ; 004f40db | DAT_01d09854
    TEST ESI,ESI                        ; 004f40e1
    JNZ 0x004f437a                      ; 004f40e3
        ;   XREF to: 004f437a (CONDITIONAL_JUMP)  ; LAB_004f437a
    CALL engine_mini3d.cpp_FUN_004f3740 ; 004f40e9
        ;   XREF to: 004f3740 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f3740()
    CALL engine_mini3d.cpp_FUN_004f7da0 ; 004f40ee
        ;   XREF to: 004f7da0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7da0()
    CMP dword ptr [0x0264bc9c],0x0      ; 004f40f3 | DAT_0264bc9c
    JZ 0x004f4109                       ; 004f40fa
        ;   XREF to: 004f4109 (CONDITIONAL_JUMP)  ; LAB_004f4109
    CMP dword ptr [0x01c37788],0x0      ; 004f40fc | DAT_01c37788
    JNZ 0x004f4396                      ; 004f4103
        ;   XREF to: 004f4396 (CONDITIONAL_JUMP)  ; LAB_004f4396
    CALL engine_mini3d.cpp_FUN_004f38c0 ; 004f4109
        ;   XREF to: 004f38c0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f38c0()
        ;   Label: LAB_004f4109
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004f410e
    CMP EAX,0x2710                      ; 004f4115
    JLE 0x004f4140                      ; 004f411a
        ;   XREF to: 004f4140 (CONDITIONAL_JUMP)  ; LAB_004f4140
    PUSH EAX                            ; 004f411c
    MOV EDX,0x5dddf0                    ; 004f411d | = "..\\engine\\mini3d.cpp"
    MOV ECX,0x86b                       ; 004f4122
    PUSH 0x5dde05                       ; 004f4127 | = "CMini3D::polyList - Too many verticie..."
    MOV dword ptr [0x01d046a0],EDX      ; 004f412c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004f4132 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f4138
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 004f413d
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004f4140
        ;   Label: LAB_004f4140
    MOV EDX,dword ptr [0x01d09b7c]      ; 004f4147 | DAT_01d09b7c
    MOV ECX,EBX                         ; 004f414d
    XOR EBP,EBP                         ; 004f414f
    XOR EBX,EBX                         ; 004f4151
    TEST EDI,EDI                        ; 004f4153
    JLE 0x004f42b6                      ; 004f4155
        ;   XREF to: 004f42b6 (CONDITIONAL_JUMP)  ; LAB_004f42b6
    FLD float ptr [ECX]                 ; 004f415b
        ;   Label: LAB_004f415b
    FSUB float ptr [0x01d09884]         ; 004f415d | DAT_01d09884
    FMUL float ptr [ECX + 0x8]          ; 004f4163
    FDIV float ptr [0x01d0987c]         ; 004f4166 | DAT_01d0987c
    FSTP float ptr [EDX]                ; 004f416c
    FLD float ptr [ECX + 0x4]           ; 004f416e
    FSUB float ptr [0x01d09888]         ; 004f4171 | DAT_01d09888
    FMUL float ptr [ECX + 0x8]          ; 004f4177
    FDIV float ptr [0x01d09880]         ; 004f417a | DAT_01d09880
    FSTP float ptr [EDX + 0x4]          ; 004f4180
    MOV EAX,dword ptr [ECX + 0x8]       ; 004f4183
    MOV dword ptr [EDX + 0x8],EAX       ; 004f4186
    FLD float ptr [ECX + 0xc]           ; 004f4189
    MOV dword ptr [EDX + 0x10],0x0      ; 004f418c
    FLD float ptr [EDX]                 ; 004f4193
    FXCH                                ; 004f4195
    FSTP float ptr [EDX + 0xc]          ; 004f4197
    FCOMP float ptr [EDX + 0x8]         ; 004f419a
    FNSTSW AX                           ; 004f419d
    SAHF                                ; 004f419f
    JBE 0x004f41a6                      ; 004f41a0
        ;   XREF to: 004f41a6 (CONDITIONAL_JUMP)  ; LAB_004f41a6
    OR byte ptr [EDX + 0x10],0x1        ; 004f41a2
    FLD float ptr [EDX + 0x8]           ; 004f41a6
        ;   Label: LAB_004f41a6
    FCHS                                ; 004f41a9
    FCOMP float ptr [EDX]               ; 004f41ab
    FNSTSW AX                           ; 004f41ad
    SAHF                                ; 004f41af
    JBE 0x004f41b6                      ; 004f41b0
        ;   XREF to: 004f41b6 (CONDITIONAL_JUMP)  ; LAB_004f41b6
    OR byte ptr [EDX + 0x10],0x2        ; 004f41b2
    FLD float ptr [EDX + 0x4]           ; 004f41b6
        ;   Label: LAB_004f41b6
    FCOMP float ptr [EDX + 0x8]         ; 004f41b9
    FNSTSW AX                           ; 004f41bc
    SAHF                                ; 004f41be
    JBE 0x004f41c5                      ; 004f41bf
        ;   XREF to: 004f41c5 (CONDITIONAL_JUMP)  ; LAB_004f41c5
    OR byte ptr [EDX + 0x10],0x4        ; 004f41c1
    FLD float ptr [EDX + 0x8]           ; 004f41c5
        ;   Label: LAB_004f41c5
    FCHS                                ; 004f41c8
    FCOMP float ptr [EDX + 0x4]         ; 004f41ca
    FNSTSW AX                           ; 004f41cd
    SAHF                                ; 004f41cf
    JBE 0x004f41d6                      ; 004f41d0
        ;   XREF to: 004f41d6 (CONDITIONAL_JUMP)  ; LAB_004f41d6
    OR byte ptr [EDX + 0x10],0x8        ; 004f41d2
    FLDZ                                ; 004f41d6
        ;   Label: LAB_004f41d6
    FCOMP float ptr [EDX + 0x8]         ; 004f41d8
    FNSTSW AX                           ; 004f41db
    SAHF                                ; 004f41dd
    JC 0x004f41e4                       ; 004f41de
        ;   XREF to: 004f41e4 (CONDITIONAL_JUMP)  ; LAB_004f41e4
    OR byte ptr [EDX + 0x10],0x10       ; 004f41e0
    FLD float ptr [ECX]                 ; 004f41e4
        ;   Label: LAB_004f41e4
    MOV EAX,dword ptr [EDX + 0x10]      ; 004f41e6
    FSTP float ptr [EDX + 0x14]         ; 004f41e9
    FLD float ptr [ECX + 0x4]           ; 004f41ec
    OR EBP,EAX                          ; 004f41ef
    FSTP float ptr [EDX + 0x18]         ; 004f41f1
    MOV EAX,dword ptr [ECX + 0x18]      ; 004f41f4
    MOV dword ptr [EDX + 0x1c],EAX      ; 004f41f7
    MOV EAX,dword ptr [ECX + 0x1c]      ; 004f41fa
    MOV dword ptr [EDX + 0x20],EAX      ; 004f41fd
    MOV EAX,dword ptr [ECX + 0x10]      ; 004f4200
    MOV ESI,EAX                         ; 004f4203
    XOR EDI,EDI                         ; 004f4205
    AND ESI,0xff                        ; 004f4207
    MOV dword ptr [ESP + 0x104],EDI     ; 004f420d
    MOV dword ptr [ESP + 0x100],ESI     ; 004f4214
    MOV ESI,EAX                         ; 004f421b
    FILD qword ptr [ESP + 0x100]        ; 004f421d
    SHR ESI,0x8                         ; 004f4224
    FLD float ptr [0x005dde34]          ; 004f4227 | DAT_005dde34
    FXCH                                ; 004f422d
    FMUL ST1                            ; 004f422f
    AND ESI,0xff                        ; 004f4231
    MOV dword ptr [ESP + 0x104],EDI     ; 004f4237
    MOV dword ptr [ESP + 0x100],ESI     ; 004f423e
    FILD qword ptr [ESP + 0x100]        ; 004f4245
    FMUL ST2                            ; 004f424c
    MOV dword ptr [ESP + 0x104],EDI     ; 004f424e
    MOV ESI,EAX                         ; 004f4255
    MOV dword ptr [ESP + 0x10c],EDI     ; 004f4257
    SHR ESI,0x10                        ; 004f425e
    SHR EAX,0x18                        ; 004f4261
    AND ESI,0xff                        ; 004f4264
    AND EAX,0xff                        ; 004f426a
    MOV dword ptr [ESP + 0x100],ESI     ; 004f426f
    MOV dword ptr [ESP + 0x108],EAX     ; 004f4276
    FILD qword ptr [ESP + 0x100]        ; 004f427d
    FMUL ST3                            ; 004f4284
    FILD qword ptr [ESP + 0x108]        ; 004f4286
    FMULP ST4                           ; 004f428d
    ADD EDX,0x40                        ; 004f428f
    INC EBX                             ; 004f4292
    ADD ECX,0x20                        ; 004f4293
    MOV dword ptr [EDX + -0xc],EDI      ; 004f4296
    MOV EDI,dword ptr [ESP + 0x12c]     ; 004f4299
    FXCH ST2                            ; 004f42a0
    FSTP float ptr [EDX + -0x1c]        ; 004f42a2
    FSTP float ptr [EDX + -0x18]        ; 004f42a5
    FSTP float ptr [EDX + -0x14]        ; 004f42a8
    FSTP float ptr [EDX + -0x10]        ; 004f42ab
    CMP EBX,EDI                         ; 004f42ae
    JL 0x004f415b                       ; 004f42b0
        ;   XREF to: 004f415b (CONDITIONAL_JUMP)  ; LAB_004f415b
    CMP dword ptr [0x01c37788],0x0      ; 004f42b6 | DAT_01c37788
        ;   Label: LAB_004f42b6
    JNZ 0x004f43db                      ; 004f42bd
        ;   XREF to: 004f43db (CONDITIONAL_JUMP)  ; LAB_004f43db
    CMP dword ptr [ESP + 0x12c],0x4     ; 004f42c3
    JNZ 0x004f43db                      ; 004f42cb
        ;   XREF to: 004f43db (CONDITIONAL_JUMP)  ; LAB_004f43db
    CMP dword ptr [ESP + 0x134],0x2     ; 004f42d1
    JNZ 0x004f43db                      ; 004f42d9
        ;   XREF to: 004f43db (CONDITIONAL_JUMP)  ; LAB_004f43db
    MOV EAX,[0x01d167ec]                ; 004f42df | DAT_01d167ec
    MOV EDX,dword ptr [ESP + 0x130]     ; 004f42e4
    MOV dword ptr [ESP + 0x110],EAX     ; 004f42eb
    XOR EAX,EAX                         ; 004f42f2
    XOR EBX,EBX                         ; 004f42f4
        ;   Label: LAB_004f42f4
    MOV BX,word ptr [EDX]               ; 004f42f6
    MOV ECX,EBX                         ; 004f42f9
    MOV ESI,dword ptr [0x01d09b7c]      ; 004f42fb | DAT_01d09b7c
    SHL ECX,0x6                         ; 004f4301
    LEA EDI,[ESP + EAX*0x1]             ; 004f4304
    ADD ESI,ECX                         ; 004f4307
    MOV ECX,0x10                        ; 004f4309
    MOVSD.REP ES:EDI,ESI                ; 004f430e
    ADD EAX,0x40                        ; 004f4310
    MOV CL,0x1                          ; 004f4313
    ADD EDX,0x2                         ; 004f4315
    MOV byte ptr [ESP + EBX*0x1 + 0x110],CL ; 004f4318
    CMP EAX,0xc0                        ; 004f431f
    JNZ 0x004f42f4                      ; 004f4324
        ;   XREF to: 004f42f4 (CONDITIONAL_JUMP)  ; LAB_004f42f4
    MOV CH,byte ptr [ESP + 0x110]       ; 004f4326
    XOR EAX,EAX                         ; 004f432d
    TEST CH,CH                          ; 004f432f
    JZ 0x004f4343                       ; 004f4331
        ;   XREF to: 004f4343 (CONDITIONAL_JUMP)  ; LAB_004f4343
    INC EAX                             ; 004f4333
        ;   Label: LAB_004f4333
    CMP EAX,0x4                         ; 004f4334
    JGE 0x004f435c                      ; 004f4337
        ;   XREF to: 004f435c (CONDITIONAL_JUMP)  ; LAB_004f435c
    CMP byte ptr [ESP + EAX*0x1 + 0x110],0x0 ; 004f4339
    JNZ 0x004f4333                      ; 004f4341
        ;   XREF to: 004f4333 (CONDITIONAL_JUMP)  ; LAB_004f4333
    MOV ECX,0x10                        ; 004f4343
        ;   Label: LAB_004f4343
    MOV ESI,dword ptr [0x01d09b7c]      ; 004f4348 | DAT_01d09b7c
    SHL EAX,0x6                         ; 004f434e
    LEA EDI,[ESP + 0xc0]                ; 004f4351
    ADD ESI,EAX                         ; 004f4358
    MOVSD.REP ES:EDI,ESI                ; 004f435a
    TEST EBP,EBP                        ; 004f435c
        ;   Label: LAB_004f435c
    JNZ 0x004f43c1                      ; 004f435e
        ;   XREF to: 004f43c1 (CONDITIONAL_JUMP)  ; LAB_004f43c1
    PUSH 0x4                            ; 004f4360
    LEA EAX,[ESP + 0x4]                 ; 004f4362
    PUSH EAX                            ; 004f4366
    CALL engine_mini3d.cpp_FUN_004f7a50 ; 004f4367
        ;   XREF to: 004f7a50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7a50()
    ADD ESP,0x8                         ; 004f436c
    ADD ESP,0x114                       ; 004f436f
        ;   Label: LAB_004f436f
    POP EBP                             ; 004f4375
    POP EDI                             ; 004f4376
    POP ESI                             ; 004f4377
    POP EBX                             ; 004f4378
    RET                                 ; 004f4379
    MOV ESI,dword ptr [ESP + 0x134]     ; 004f437a
        ;   Label: LAB_004f437a
    PUSH ESI                            ; 004f4381
    MOV EDI,dword ptr [ESP + 0x134]     ; 004f4382
    PUSH EDI                            ; 004f4389
    PUSH EAX                            ; 004f438a
    PUSH EBX                            ; 004f438b
    CALL engine_mini3d.cpp_FUN_004f7e00 ; 004f438c
        ;   XREF to: 004f7e00 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7e00()
    ADD ESP,0x10                        ; 004f4391
    JMP 0x004f436f                      ; 004f4394
        ;   XREF to: 004f436f (UNCONDITIONAL_JUMP)  ; LAB_004f436f
    MOV EBP,dword ptr [0x01c38b54]      ; 004f4396 | DAT_01c38b54
        ;   Label: LAB_004f4396
    PUSH EBP                            ; 004f439c
    MOV EAX,dword ptr [ESP + 0x138]     ; 004f439d
    PUSH EAX                            ; 004f43a4
    MOV EDX,dword ptr [ESP + 0x138]     ; 004f43a5
    PUSH EDX                            ; 004f43ac
    MOV ECX,dword ptr [ESP + 0x138]     ; 004f43ad
    PUSH ECX                            ; 004f43b4
    PUSH EBX                            ; 004f43b5
    CALL dword ptr [0x0264bc9c]         ; 004f43b6 | DAT_0264bc9c
    ADD ESP,0x14                        ; 004f43bc
    JMP 0x004f436f                      ; 004f43bf
        ;   XREF to: 004f436f (UNCONDITIONAL_JUMP)  ; LAB_004f436f
    PUSH 0x4                            ; 004f43c1
        ;   Label: LAB_004f43c1
    LEA EAX,[ESP + 0x4]                 ; 004f43c3
    PUSH EAX                            ; 004f43c7
    CALL engine_mini3d.cpp_FUN_004f6be0 ; 004f43c8
        ;   XREF to: 004f6be0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6be0()
    ADD ESP,0x8                         ; 004f43cd
    ADD ESP,0x114                       ; 004f43d0
    POP EBP                             ; 004f43d6
    POP EDI                             ; 004f43d7
    POP ESI                             ; 004f43d8
    POP EBX                             ; 004f43d9
    RET                                 ; 004f43da
    PUSH EBP                            ; 004f43db
        ;   Label: LAB_004f43db
    MOV EBX,dword ptr [ESP + 0x138]     ; 004f43dc
    PUSH EBX                            ; 004f43e3
    MOV ESI,dword ptr [ESP + 0x138]     ; 004f43e4
    PUSH ESI                            ; 004f43eb
    MOV EDI,dword ptr [ESP + 0x138]     ; 004f43ec
    PUSH EDI                            ; 004f43f3
    MOV EBP,dword ptr [0x01d09b7c]      ; 004f43f4 | DAT_01d09b7c
    PUSH EBP                            ; 004f43fa
    CALL engine_mini3d.cpp_FUN_004f6d00 ; 004f43fb
        ;   XREF to: 004f6d00 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6d00()
    ADD ESP,0x14                        ; 004f4400
    ADD ESP,0x114                       ; 004f4403
    POP EBP                             ; 004f4409
    POP EDI                             ; 004f440a
    POP ESI                             ; 004f440b
    POP EBX                             ; 004f440c
    RET                                 ; 004f440d

