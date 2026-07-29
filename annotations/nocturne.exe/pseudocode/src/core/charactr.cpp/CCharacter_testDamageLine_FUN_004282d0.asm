; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(CCharacter *param_1,CVector3f *param_2,CVector3f *param_3,SDamageInfo *param_4,CVector3f *param_5)
;
; Local Variables:
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
;
; Referenced Globals:
;   double DOUBLE_0057a03a = 0.400000000000000
;   float FLOAT_0057a042 = 10
;   float FLOAT_0057a046 = 0.5
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;   crt_math.c_round_FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004282d0
        ;   Label: core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0
    PUSH ESI                            ; 004282d1
    PUSH EDI                            ; 004282d2
    PUSH EBP                            ; 004282d3
    MOV EBP,ESP                         ; 004282d4
    SUB ESP,0x7c                        ; 004282d6
    AND ESP,0xfffffff8                  ; 004282d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004282dc
    MOV EDI,dword ptr [EBP + 0x1c]      ; 004282df
    MOV ESI,dword ptr [EBP + 0x24]      ; 004282e2
    MOV EDX,dword ptr [EBP + 0x18]      ; 004282e5
    PUSH EDX                            ; 004282e8
    LEA EAX,[ESP + 0x4c]                ; 004282e9
    PUSH EAX                            ; 004282ed
    PUSH EBX                            ; 004282ee
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004282ef
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004282f4
    PUSH EDI                            ; 004282f7
    LEA EAX,[ESP + 0x40]                ; 004282f8
    PUSH EAX                            ; 004282fc
    PUSH EBX                            ; 004282fd
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004282fe
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00428303
    LEA EDX,[ESP + 0x30]                ; 00428306
    PUSH EDX                            ; 0042830a
    LEA EDX,[ESP + 0x40]                ; 0042830b
    PUSH EDX                            ; 0042830f
    LEA EDX,[ESP + 0x50]                ; 00428310
    PUSH EDX                            ; 00428314
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428315
    PUSH EBX                            ; 0042831b
    CALL dword ptr [EAX + 0xa8]         ; 0042831c
    ADD ESP,0x10                        ; 00428322
    TEST EAX,EAX                        ; 00428325
    JZ 0x004284b5                       ; 00428327
        ;   XREF to: 004284b5 (CONDITIONAL_JUMP)  ; LAB_004284b5
    TEST ESI,ESI                        ; 0042832d
    JNZ 0x004284c8                      ; 0042832f
        ;   XREF to: 004284c8 (CONDITIONAL_JUMP)  ; LAB_004284c8
    MOV EAX,dword ptr [EBP + 0x20]      ; 00428335
        ;   Label: LAB_00428335
    FLDZ                                ; 00428338
    FLD float ptr [EAX + 0x4]           ; 0042833a
    FSTP double ptr [ESP]               ; 0042833d
    FCOMP double ptr [ESP]              ; 00428340
    FNSTSW AX                           ; 00428343
    SAHF                                ; 00428345
    JNC 0x0042842d                      ; 00428346
        ;   XREF to: 0042842d (CONDITIONAL_JUMP)  ; LAB_0042842d
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042834c
    FLD float ptr [EDI]                 ; 0042834f
    FSUB float ptr [EAX]                ; 00428351
    FSTP float ptr [ESP + 0x18]         ; 00428353
    FLD float ptr [EDI + 0x4]           ; 00428357
    FSUB float ptr [EAX + 0x4]          ; 0042835a
    FST float ptr [ESP + 0x1c]          ; 0042835d
    FMUL float ptr [ESP + 0x1c]         ; 00428361
    FLD float ptr [ESP + 0x18]          ; 00428365
    FMUL ST0                            ; 00428369
    FLD float ptr [EDI + 0x8]           ; 0042836b
    FSUB float ptr [EAX + 0x8]          ; 0042836e
    FXCH                                ; 00428371
    FADDP ST2,ST0                       ; 00428373
    FST float ptr [ESP + 0x20]          ; 00428375
    FMUL float ptr [ESP + 0x20]         ; 00428379
    FADDP                               ; 0042837d
    FSQRT                               ; 0042837f
    FLD double ptr [ESP]                ; 00428381
    FMUL double ptr [0x0057a03a]        ; 00428384 | DOUBLE_0057a03a
    CALL crt_math.c_round_FUN_00563a30  ; 0042838a
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x78]        ; 0042838f
    MOV ESI,dword ptr [ESP + 0x78]      ; 00428393
    INC ESI                             ; 00428397
    FST float ptr [ESP + 0x8]           ; 00428398
    FLDZ                                ; 0042839c
    FCOMPP                              ; 0042839e
    FNSTSW AX                           ; 004283a0
    SAHF                                ; 004283a2
    JNC 0x004284f8                      ; 004283a3
        ;   XREF to: 004284f8 (CONDITIONAL_JUMP)  ; LAB_004284f8
    FLD1                                ; 004283a9
    FLD float ptr [ESP + 0x18]          ; 004283ab
    FXCH                                ; 004283af
    FDIV float ptr [ESP + 0x8]          ; 004283b1
    FXCH                                ; 004283b5
    FMUL ST1                            ; 004283b7
    FLD float ptr [ESP + 0x1c]          ; 004283b9
    FMUL ST2                            ; 004283bd
    FLD float ptr [ESP + 0x20]          ; 004283bf
    FMULP ST3                           ; 004283c3
    FXCH                                ; 004283c5
    FSTP float ptr [ESP + 0x18]         ; 004283c7
    FSTP float ptr [ESP + 0x1c]         ; 004283cb
    FSTP float ptr [ESP + 0x20]         ; 004283cf
    FLD float ptr [0x0057a042]          ; 004283d3 | FLOAT_0057a042
        ;   Label: LAB_004283d3
    FLD float ptr [ESP + 0x18]          ; 004283d9
    FMUL ST1                            ; 004283dd
    FLD float ptr [ESP + 0x1c]          ; 004283df
    FMUL ST2                            ; 004283e3
    FLD float ptr [ESP + 0x20]          ; 004283e5
    LEA EAX,[ESP + 0x30]                ; 004283e9
    FMULP ST3                           ; 004283ed
    PUSH EAX                            ; 004283ef
    LEA EAX,[ESP + 0x70]                ; 004283f0
    FXCH                                ; 004283f4
    FSTP float ptr [ESP + 0x58]         ; 004283f6
    PUSH EAX                            ; 004283fa
    FSTP float ptr [ESP + 0x60]         ; 004283fb
    PUSH EBX                            ; 004283ff
    FSTP float ptr [ESP + 0x68]         ; 00428400
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00428404
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00428409
    MOV EDX,dword ptr [EBX + 0x2608]    ; 0042840c
    PUSH EDX                            ; 00428412
    PUSH ESI                            ; 00428413
    LEA EAX,[ESP + 0x5c]                ; 00428414
    PUSH EAX                            ; 00428418
    LEA EAX,[ESP + 0x78]                ; 00428419
    PUSH EAX                            ; 0042841d
    MOV ECX,dword ptr [0x005b96c4]      ; 0042841e | INT_005b96c4
    PUSH ECX                            ; 00428424
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 00428425
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0042842a
    FLD float ptr [ESP + 0x48]          ; 0042842d
        ;   Label: LAB_0042842d
    FADD float ptr [ESP + 0x3c]         ; 00428431
    FST float ptr [ESP + 0xc]           ; 00428435
    FLD float ptr [0x0057a046]          ; 00428439 | FLOAT_0057a046
    FXCH                                ; 0042843f
    FMUL ST1                            ; 00428441
    FLD float ptr [ESP + 0x50]          ; 00428443
    FLD float ptr [ESP + 0x4c]          ; 00428447
    FADD float ptr [ESP + 0x40]         ; 0042844b
    FXCH                                ; 0042844f
    FADD float ptr [ESP + 0x44]         ; 00428451
    FXCH                                ; 00428455
    FST float ptr [ESP + 0x10]          ; 00428457
    FMUL ST3                            ; 0042845b
    FXCH                                ; 0042845d
    FST float ptr [ESP + 0x14]          ; 0042845f
    FMULP ST3                           ; 00428463
    MOV EDX,dword ptr [EBP + 0x20]      ; 00428465
    LEA EAX,[ESP + 0x60]                ; 00428468
    ADD EDX,0x1c                        ; 0042846c
    FXCH                                ; 0042846f
    FSTP float ptr [ESP + 0x60]         ; 00428471
    FSTP float ptr [ESP + 0x64]         ; 00428475
    FSTP float ptr [ESP + 0x68]         ; 00428479
    CMP EDX,EAX                         ; 0042847d
    JZ 0x00428495                       ; 0042847f
        ;   XREF to: 00428495 (CONDITIONAL_JUMP)  ; LAB_00428495
    MOV EAX,dword ptr [ESP + 0x60]      ; 00428481
    MOV dword ptr [EDX],EAX             ; 00428485
    MOV EAX,dword ptr [ESP + 0x64]      ; 00428487
    MOV dword ptr [EDX + 0x4],EAX       ; 0042848b
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042848e
    MOV dword ptr [EDX + 0x8],EAX       ; 00428492
    MOV ESI,dword ptr [EBP + 0x20]      ; 00428495
        ;   Label: LAB_00428495
    PUSH ESI                            ; 00428498
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428499
    PUSH EBX                            ; 0042849f
    CALL dword ptr [EAX + 0x100]        ; 004284a0
    MOV EAX,0x1                         ; 004284a6
    ADD ESP,0x8                         ; 004284ab
    MOV ESP,EBP                         ; 004284ae
    POP EBP                             ; 004284b0
    POP EDI                             ; 004284b1
    POP ESI                             ; 004284b2
    POP EBX                             ; 004284b3
    RET                                 ; 004284b4
    MOV EAX,dword ptr [EBP + 0x20]      ; 004284b5
        ;   Label: LAB_004284b5
    MOV dword ptr [EAX + 0x4],0x0       ; 004284b8
    XOR EAX,EAX                         ; 004284bf
    MOV ESP,EBP                         ; 004284c1
    POP EBP                             ; 004284c3
    POP EDI                             ; 004284c4
    POP ESI                             ; 004284c5
    POP EBX                             ; 004284c6
    RET                                 ; 004284c7
    LEA EAX,[ESP + 0x30]                ; 004284c8
        ;   Label: LAB_004284c8
    PUSH EAX                            ; 004284cc
    LEA EAX,[ESP + 0x28]                ; 004284cd
    PUSH EAX                            ; 004284d1
    PUSH EBX                            ; 004284d2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004284d3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004284d8
    CMP ESI,EAX                         ; 004284db
    JZ 0x00428335                       ; 004284dd
        ;   XREF to: 00428335 (CONDITIONAL_JUMP)  ; LAB_00428335
    MOV EDX,dword ptr [EAX]             ; 004284e3
    MOV dword ptr [ESI],EDX             ; 004284e5
    MOV EDX,dword ptr [EAX + 0x4]       ; 004284e7
    MOV dword ptr [ESI + 0x4],EDX       ; 004284ea
    MOV EDX,dword ptr [EAX + 0x8]       ; 004284ed
    MOV dword ptr [ESI + 0x8],EDX       ; 004284f0
    JMP 0x00428335                      ; 004284f3
        ;   XREF to: 00428335 (UNCONDITIONAL_JUMP)  ; LAB_00428335
    XOR ECX,ECX                         ; 004284f8
        ;   Label: LAB_004284f8
    MOV dword ptr [ESP + 0x1c],ECX      ; 004284fa
    MOV dword ptr [ESP + 0x18],ECX      ; 004284fe
    MOV dword ptr [ESP + 0x20],ECX      ; 00428502
    JMP 0x004283d3                      ; 00428506
        ;   XREF to: 004283d3 (UNCONDITIONAL_JUMP)  ; LAB_004283d3

