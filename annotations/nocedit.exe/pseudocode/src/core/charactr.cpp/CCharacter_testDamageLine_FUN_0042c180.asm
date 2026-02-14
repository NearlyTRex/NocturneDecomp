; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start
; CVector3f *      Stack[0xc]:4   end
; SDamageInfo *    Stack[0x10]:4   damage_info
; CVector3f *      Stack[0x14]:4   out_hit
; Local Variables:
; CVector3f        Stack[-0x60]:12  local_60
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
;
; Referenced Globals:
;   double DOUBLE_00617192 = 0.400000000000000
;   float FLOAT_0061719a = 10
;   float FLOAT_0061719e = 0.5
;   CGore* g_CGorePtr = 02d83364
;   CGore g_CGoreInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_gore.cpp_CGore_FUN_004edbb0
;   crt_math.c_round_FUN_005fe6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c180
        ;   Label: core_charactr.cpp_CCharacter_testDamageLine_FUN_0042c180
    PUSH ESI                            ; 0042c181
    PUSH EDI                            ; 0042c182
    PUSH EBP                            ; 0042c183
    MOV EBP,ESP                         ; 0042c184
    SUB ESP,0x7c                        ; 0042c186
    AND ESP,0xfffffff8                  ; 0042c189
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042c18c
    MOV EDI,dword ptr [EBP + 0x1c]      ; 0042c18f
    MOV ESI,dword ptr [EBP + 0x24]      ; 0042c192
    MOV EDX,dword ptr [EBP + 0x18]      ; 0042c195
    PUSH EDX                            ; 0042c198
    LEA EAX,[ESP + 0x4c]                ; 0042c199
    PUSH EAX                            ; 0042c19d
    PUSH EBX                            ; 0042c19e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0042c19f
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042c1a4
    PUSH EDI                            ; 0042c1a7
    LEA EAX,[ESP + 0x40]                ; 0042c1a8
    PUSH EAX                            ; 0042c1ac
    PUSH EBX                            ; 0042c1ad
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0042c1ae
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042c1b3
    LEA EDX,[ESP + 0x30]                ; 0042c1b6
    PUSH EDX                            ; 0042c1ba
    LEA EDX,[ESP + 0x40]                ; 0042c1bb
    PUSH EDX                            ; 0042c1bf
    LEA EDX,[ESP + 0x50]                ; 0042c1c0
    PUSH EDX                            ; 0042c1c4
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c1c5
    PUSH EBX                            ; 0042c1cb
    CALL dword ptr [EAX + 0xa8]         ; 0042c1cc
    ADD ESP,0x10                        ; 0042c1d2
    TEST EAX,EAX                        ; 0042c1d5
    JZ 0x0042c365                       ; 0042c1d7
        ;   XREF to: 0042c365 (CONDITIONAL_JUMP)  ; LAB_0042c365
    TEST ESI,ESI                        ; 0042c1dd
    JNZ 0x0042c378                      ; 0042c1df
        ;   XREF to: 0042c378 (CONDITIONAL_JUMP)  ; LAB_0042c378
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042c1e5
        ;   Label: LAB_0042c1e5
    FLDZ                                ; 0042c1e8
    FLD float ptr [EAX + 0x4]           ; 0042c1ea
    FSTP double ptr [ESP]               ; 0042c1ed
    FCOMP double ptr [ESP]              ; 0042c1f0
    FNSTSW AX                           ; 0042c1f3
    SAHF                                ; 0042c1f5
    JNC 0x0042c2dd                      ; 0042c1f6
        ;   XREF to: 0042c2dd (CONDITIONAL_JUMP)  ; LAB_0042c2dd
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042c1fc
    FLD float ptr [EDI]                 ; 0042c1ff
    FSUB float ptr [EAX]                ; 0042c201
    FSTP float ptr [ESP + 0x18]         ; 0042c203
    FLD float ptr [EDI + 0x4]           ; 0042c207
    FSUB float ptr [EAX + 0x4]          ; 0042c20a
    FST float ptr [ESP + 0x1c]          ; 0042c20d
    FMUL float ptr [ESP + 0x1c]         ; 0042c211
    FLD float ptr [ESP + 0x18]          ; 0042c215
    FMUL ST0                            ; 0042c219
    FLD float ptr [EDI + 0x8]           ; 0042c21b
    FSUB float ptr [EAX + 0x8]          ; 0042c21e
    FXCH                                ; 0042c221
    FADDP ST2,ST0                       ; 0042c223
    FST float ptr [ESP + 0x20]          ; 0042c225
    FMUL float ptr [ESP + 0x20]         ; 0042c229
    FADDP                               ; 0042c22d
    FSQRT                               ; 0042c22f
    FLD double ptr [ESP]                ; 0042c231
    FMUL double ptr [0x00617192]        ; 0042c234 | DOUBLE_00617192
    CALL crt_math.c_round_FUN_005fe6b0  ; 0042c23a
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x78]        ; 0042c23f
    MOV ESI,dword ptr [ESP + 0x78]      ; 0042c243
    INC ESI                             ; 0042c247
    FST float ptr [ESP + 0x8]           ; 0042c248
    FLDZ                                ; 0042c24c
    FCOMPP                              ; 0042c24e
    FNSTSW AX                           ; 0042c250
    SAHF                                ; 0042c252
    JNC 0x0042c3a8                      ; 0042c253
        ;   XREF to: 0042c3a8 (CONDITIONAL_JUMP)  ; LAB_0042c3a8
    FLD1                                ; 0042c259
    FLD float ptr [ESP + 0x18]          ; 0042c25b
    FXCH                                ; 0042c25f
    FDIV float ptr [ESP + 0x8]          ; 0042c261
    FXCH                                ; 0042c265
    FMUL ST1                            ; 0042c267
    FLD float ptr [ESP + 0x1c]          ; 0042c269
    FMUL ST2                            ; 0042c26d
    FLD float ptr [ESP + 0x20]          ; 0042c26f
    FMULP ST3                           ; 0042c273
    FXCH                                ; 0042c275
    FSTP float ptr [ESP + 0x18]         ; 0042c277
    FSTP float ptr [ESP + 0x1c]         ; 0042c27b
    FSTP float ptr [ESP + 0x20]         ; 0042c27f
    FLD float ptr [0x0061719a]          ; 0042c283 | FLOAT_0061719a
        ;   Label: LAB_0042c283
    FLD float ptr [ESP + 0x18]          ; 0042c289
    FMUL ST1                            ; 0042c28d
    FLD float ptr [ESP + 0x1c]          ; 0042c28f
    FMUL ST2                            ; 0042c293
    FLD float ptr [ESP + 0x20]          ; 0042c295
    LEA EAX,[ESP + 0x30]                ; 0042c299
    FMULP ST3                           ; 0042c29d
    PUSH EAX                            ; 0042c29f
    LEA EAX,[ESP + 0x70]                ; 0042c2a0
    FXCH                                ; 0042c2a4
    FSTP float ptr [ESP + 0x58]         ; 0042c2a6
    PUSH EAX                            ; 0042c2aa
    FSTP float ptr [ESP + 0x60]         ; 0042c2ab
    PUSH EBX                            ; 0042c2af
    FSTP float ptr [ESP + 0x68]         ; 0042c2b0
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042c2b4
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042c2b9
    MOV EDX,dword ptr [EBX + 0x2610]    ; 0042c2bc
    PUSH EDX                            ; 0042c2c2
    PUSH ESI                            ; 0042c2c3
    LEA EAX,[ESP + 0x5c]                ; 0042c2c4
    PUSH EAX                            ; 0042c2c8
    LEA EAX,[ESP + 0x78]                ; 0042c2c9
    PUSH EAX                            ; 0042c2cd
    MOV ECX,dword ptr [0x0067b9a0]      ; 0042c2ce | g_CGoreInstance | g_CGorePtr
    PUSH ECX                            ; 0042c2d4 | g_CGoreInstance
    CALL core_gore.cpp_CGore_FUN_004edbb0 ; 0042c2d5
        ;   XREF to: 004edbb0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_FUN_004edbb0(CGore * this_ptr)
    ADD ESP,0x14                        ; 0042c2da
    FLD float ptr [ESP + 0x48]          ; 0042c2dd
        ;   Label: LAB_0042c2dd
    FADD float ptr [ESP + 0x3c]         ; 0042c2e1
    FST float ptr [ESP + 0xc]           ; 0042c2e5
    FLD float ptr [0x0061719e]          ; 0042c2e9 | FLOAT_0061719e
    FXCH                                ; 0042c2ef
    FMUL ST1                            ; 0042c2f1
    FLD float ptr [ESP + 0x50]          ; 0042c2f3
    FLD float ptr [ESP + 0x4c]          ; 0042c2f7
    FADD float ptr [ESP + 0x40]         ; 0042c2fb
    FXCH                                ; 0042c2ff
    FADD float ptr [ESP + 0x44]         ; 0042c301
    FXCH                                ; 0042c305
    FST float ptr [ESP + 0x10]          ; 0042c307
    FMUL ST3                            ; 0042c30b
    FXCH                                ; 0042c30d
    FST float ptr [ESP + 0x14]          ; 0042c30f
    FMULP ST3                           ; 0042c313
    MOV EDX,dword ptr [EBP + 0x20]      ; 0042c315
    LEA EAX,[ESP + 0x60]                ; 0042c318
    ADD EDX,0x1c                        ; 0042c31c
    FXCH                                ; 0042c31f
    FSTP float ptr [ESP + 0x60]         ; 0042c321
    FSTP float ptr [ESP + 0x64]         ; 0042c325
    FSTP float ptr [ESP + 0x68]         ; 0042c329
    CMP EDX,EAX                         ; 0042c32d
    JZ 0x0042c345                       ; 0042c32f
        ;   XREF to: 0042c345 (CONDITIONAL_JUMP)  ; LAB_0042c345
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042c331
    MOV dword ptr [EDX],EAX             ; 0042c335
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042c337
    MOV dword ptr [EDX + 0x4],EAX       ; 0042c33b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042c33e
    MOV dword ptr [EDX + 0x8],EAX       ; 0042c342
    MOV ESI,dword ptr [EBP + 0x20]      ; 0042c345
        ;   Label: LAB_0042c345
    PUSH ESI                            ; 0042c348
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042c349
    PUSH EBX                            ; 0042c34f
    CALL dword ptr [EAX + 0x11c]        ; 0042c350
    MOV EAX,0x1                         ; 0042c356
    ADD ESP,0x8                         ; 0042c35b
    MOV ESP,EBP                         ; 0042c35e
    POP EBP                             ; 0042c360
    POP EDI                             ; 0042c361
    POP ESI                             ; 0042c362
    POP EBX                             ; 0042c363
    RET                                 ; 0042c364
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042c365
        ;   Label: LAB_0042c365
    MOV dword ptr [EAX + 0x4],0x0       ; 0042c368
    XOR EAX,EAX                         ; 0042c36f
    MOV ESP,EBP                         ; 0042c371
    POP EBP                             ; 0042c373
    POP EDI                             ; 0042c374
    POP ESI                             ; 0042c375
    POP EBX                             ; 0042c376
    RET                                 ; 0042c377
    LEA EAX,[ESP + 0x30]                ; 0042c378
        ;   Label: LAB_0042c378
    PUSH EAX                            ; 0042c37c
    LEA EAX,[ESP + 0x28]                ; 0042c37d
    PUSH EAX                            ; 0042c381
    PUSH EBX                            ; 0042c382
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042c383
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0042c388
    CMP ESI,EAX                         ; 0042c38b
    JZ 0x0042c1e5                       ; 0042c38d
        ;   XREF to: 0042c1e5 (CONDITIONAL_JUMP)  ; LAB_0042c1e5
    MOV EDX,dword ptr [EAX]             ; 0042c393
    MOV dword ptr [ESI],EDX             ; 0042c395
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c397
    MOV dword ptr [ESI + 0x4],EDX       ; 0042c39a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0042c39d
    MOV dword ptr [ESI + 0x8],EDX       ; 0042c3a0
    JMP 0x0042c1e5                      ; 0042c3a3
        ;   XREF to: 0042c1e5 (UNCONDITIONAL_JUMP)  ; LAB_0042c1e5
    XOR ECX,ECX                         ; 0042c3a8
        ;   Label: LAB_0042c3a8
    MOV dword ptr [ESP + 0x1c],ECX      ; 0042c3aa
    MOV dword ptr [ESP + 0x18],ECX      ; 0042c3ae
    MOV dword ptr [ESP + 0x20],ECX      ; 0042c3b2
    JMP 0x0042c283                      ; 0042c3b6
        ;   XREF to: 0042c283 (UNCONDITIONAL_JUMP)  ; LAB_0042c283

