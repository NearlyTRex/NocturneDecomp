; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_activate_FUN_004c4200(CCrater *this_ptr,CVector3f *center_position,float radius)
;
; Parameters:
; CCrater *        Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   center_position
; float            Stack[0xc]:4   radius
; Local Variables:
; float            Stack[-0x54]:4  local_54
; float            Stack[-0x50]:4  local_50
; float            Stack[-0x4c]:4  local_4c
; float            Stack[-0x48]:4  local_48
; float            Stack[-0x44]:4  local_44
; float            Stack[-0x40]:4  local_40
; float            Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; float            Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_createCrater_FUN_004c8ea0 at 004c8ebe
;
; Referenced Globals:
;   double DOUBLE_00629e33 = 0.5
;   double DOUBLE_00629e3b = 0.150000000000000
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_fire.cpp_CCrater_render_FUN_004c4620
;   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4200
        ;   Label: core_fire.cpp_CCrater_activate_FUN_004c4200
    PUSH ESI                            ; 004c4201
    PUSH EDI                            ; 004c4202
    PUSH EBP                            ; 004c4203
    SUB ESP,0x68                        ; 004c4204
    MOV ESI,dword ptr [ESP + 0x7c]      ; 004c4207
    MOV EBX,dword ptr [ESP + 0x80]      ; 004c420b
    LEA EAX,[ESI + 0xc]                 ; 004c4212
    CMP EAX,EBX                         ; 004c4215
    JZ 0x004c4229                       ; 004c4217
        ;   XREF to: 004c4229 (CONDITIONAL_JUMP)  ; LAB_004c4229
    MOV EDX,dword ptr [EBX]             ; 004c4219
    MOV dword ptr [EAX],EDX             ; 004c421b
    MOV EDX,dword ptr [EBX + 0x4]       ; 004c421d
    MOV dword ptr [EAX + 0x4],EDX       ; 004c4220
    MOV EDX,dword ptr [EBX + 0x8]       ; 004c4223
    MOV dword ptr [EAX + 0x8],EDX       ; 004c4226
    PUSH ESI                            ; 004c4229
        ;   Label: LAB_004c4229
    CALL core_fire.cpp_CCrater_render_FUN_004c4620 ; 004c422a
        ;   XREF to: 004c4620 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004c4620(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004c422f
    LEA EAX,[ESI + 0xc]                 ; 004c4232
    PUSH 0x0                            ; 004c4235
    MOV dword ptr [ESI],0x1             ; 004c4237
    PUSH EAX                            ; 004c423d
    MOV EDX,dword ptr [0x006810c8]      ; 004c423e | g_CDemonSetPtr | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x4],0x0       ; 004c4244
    PUSH EDX                            ; 004c424b | g_CDemonSetInstance
    MOV dword ptr [ESI + 0x8],0x3dcccccd ; 004c424c
    MOV EBX,ESI                         ; 004c4253
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004c4255
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x70],EAX      ; 004c425a
    LEA EDI,[ESI + 0x24]                ; 004c425e
    MOV EAX,dword ptr [ESP + 0x70]      ; 004c4261
    MOV dword ptr [ESI + 0x10],EAX      ; 004c4265
    ADD ESP,0xc                         ; 004c4268
    PUSH dword ptr [ESP + 0x84]         ; 004c426b
        ;   Label: LAB_004c426b
    FLD float ptr [ESP + 0x88]          ; 004c4272
    FCHS                                ; 004c4279
    FSTP float ptr [ESP + 0x64]         ; 004c427b
    PUSH dword ptr [ESP + 0x64]         ; 004c427f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c4283
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 004c4288
    FLD float ptr [ESP + 0x6c]          ; 004c428c
    ADD ESP,0x8                         ; 004c4290
    FMUL double ptr [0x00629e33]        ; 004c4293 | DOUBLE_00629e33
    PUSH dword ptr [ESP + 0x84]         ; 004c4299
    FADD float ptr [ESI + 0xc]          ; 004c42a0
    PUSH dword ptr [ESP + 0x64]         ; 004c42a3
    FSTP float ptr [EBX + 0x1c]         ; 004c42a7
    MOV EAX,dword ptr [ESI + 0x10]      ; 004c42aa
    MOV dword ptr [EBX + 0x20],EAX      ; 004c42ad
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004c42b0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0x6c],EAX      ; 004c42b5
    FLD float ptr [ESP + 0x6c]          ; 004c42b9
    FMUL double ptr [0x00629e33]        ; 004c42bd | DOUBLE_00629e33
    ADD EBX,0xc                         ; 004c42c3
    FADD float ptr [ESI + 0x14]         ; 004c42c6
    ADD ESP,0x8                         ; 004c42c9
    FSTP float ptr [EBX + 0x18]         ; 004c42cc
    CMP EBX,EDI                         ; 004c42cf
    JNZ 0x004c426b                      ; 004c42d1
        ;   XREF to: 004c426b (CONDITIONAL_JUMP)  ; LAB_004c426b
    MOV EAX,dword ptr [ESP + 0x60]      ; 004c42d3
    LEA EBX,[ESI + 0xc]                 ; 004c42d7
    XOR ECX,ECX                         ; 004c42da
    MOV dword ptr [ESP],EAX             ; 004c42dc
    MOV dword ptr [ESP + 0x4],ECX       ; 004c42df
    MOV dword ptr [ESP + 0x8],EAX       ; 004c42e3
    FLD float ptr [EBX]                 ; 004c42e7
    FADD float ptr [ESP + 0x60]         ; 004c42e9
    FSTP float ptr [ESP + 0x30]         ; 004c42ed
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c42f1
    MOV dword ptr [ESP + 0x34],EAX      ; 004c42f4
    FLD float ptr [EBX + 0x8]           ; 004c42f8
    LEA EAX,[ESP + 0x30]                ; 004c42fb
    FADD float ptr [ESP + 0x60]         ; 004c42ff
    LEA EBX,[ESI + 0x40]                ; 004c4303
    FSTP float ptr [ESP + 0x38]         ; 004c4306
    CMP EBX,EAX                         ; 004c430a
    JZ 0x004c4322                       ; 004c430c
        ;   XREF to: 004c4322 (CONDITIONAL_JUMP)  ; LAB_004c4322
    MOV EAX,dword ptr [ESP + 0x30]      ; 004c430e
    MOV dword ptr [EBX],EAX             ; 004c4312
    MOV EAX,dword ptr [ESP + 0x34]      ; 004c4314
    MOV dword ptr [EBX + 0x4],EAX       ; 004c4318
    MOV EAX,dword ptr [ESP + 0x38]      ; 004c431b
    MOV dword ptr [EBX + 0x8],EAX       ; 004c431f
    FLD float ptr [ESP + 0x84]          ; 004c4322
        ;   Label: LAB_004c4322
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c4329
    FCHS                                ; 004c4330
    XOR EBX,EBX                         ; 004c4332
    FSTP float ptr [ESP + 0x64]         ; 004c4334
    MOV dword ptr [ESP + 0x18],EAX      ; 004c4338
    MOV dword ptr [ESP + 0x1c],EBX      ; 004c433c
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c4340
    LEA EBX,[ESI + 0xc]                 ; 004c4344
    MOV dword ptr [ESP + 0x20],EAX      ; 004c4347
    FLD float ptr [EBX]                 ; 004c434b
    FADD float ptr [ESP + 0x84]         ; 004c434d
    FSTP float ptr [ESP + 0x54]         ; 004c4354
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c4358
    MOV dword ptr [ESP + 0x58],EAX      ; 004c435b
    FLD float ptr [EBX + 0x8]           ; 004c435f
    LEA EAX,[ESP + 0x54]                ; 004c4362
    FADD float ptr [ESP + 0x64]         ; 004c4366
    LEA EBX,[ESI + 0x4c]                ; 004c436a
    FSTP float ptr [ESP + 0x5c]         ; 004c436d
    CMP EBX,EAX                         ; 004c4371
    JZ 0x004c4389                       ; 004c4373
        ;   XREF to: 004c4389 (CONDITIONAL_JUMP)  ; LAB_004c4389
    MOV EAX,dword ptr [ESP + 0x54]      ; 004c4375
    MOV dword ptr [EBX],EAX             ; 004c4379
    MOV EAX,dword ptr [ESP + 0x58]      ; 004c437b
    MOV dword ptr [EBX + 0x4],EAX       ; 004c437f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004c4382
    MOV dword ptr [EBX + 0x8],EAX       ; 004c4386
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c4389
        ;   Label: LAB_004c4389
    LEA EBX,[ESI + 0xc]                 ; 004c4390
    XOR EDI,EDI                         ; 004c4393
    MOV dword ptr [ESP + 0xc],EAX       ; 004c4395
    MOV dword ptr [ESP + 0x10],EDI      ; 004c4399
    MOV dword ptr [ESP + 0x14],EAX      ; 004c439d
    FLD float ptr [EBX]                 ; 004c43a1
    FADD float ptr [ESP + 0x84]         ; 004c43a3
    FSTP float ptr [ESP + 0x3c]         ; 004c43aa
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c43ae
    MOV dword ptr [ESP + 0x40],EAX      ; 004c43b1
    FLD float ptr [EBX + 0x8]           ; 004c43b5
    LEA EAX,[ESP + 0x3c]                ; 004c43b8
    FADD float ptr [ESP + 0x84]         ; 004c43bc
    LEA EBX,[ESI + 0x58]                ; 004c43c3
    FSTP float ptr [ESP + 0x44]         ; 004c43c6
    CMP EBX,EAX                         ; 004c43ca
    JZ 0x004c43e2                       ; 004c43cc
        ;   XREF to: 004c43e2 (CONDITIONAL_JUMP)  ; LAB_004c43e2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004c43ce
    MOV dword ptr [EBX],EAX             ; 004c43d2
    MOV EAX,dword ptr [ESP + 0x40]      ; 004c43d4
    MOV dword ptr [EBX + 0x4],EAX       ; 004c43d8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c43db
    MOV dword ptr [EBX + 0x8],EAX       ; 004c43df
    FLD float ptr [ESP + 0x84]          ; 004c43e2
        ;   Label: LAB_004c43e2
    FCHS                                ; 004c43e9
    LEA EBX,[ESI + 0xc]                 ; 004c43eb
    FSTP float ptr [ESP + 0x64]         ; 004c43ee
    MOV EAX,dword ptr [ESP + 0x64]      ; 004c43f2
    XOR EBP,EBP                         ; 004c43f6
    MOV dword ptr [ESP + 0x48],EAX      ; 004c43f8
    MOV EAX,dword ptr [ESP + 0x84]      ; 004c43fc
    MOV dword ptr [ESP + 0x4c],EBP      ; 004c4403
    MOV dword ptr [ESP + 0x50],EAX      ; 004c4407
    FLD float ptr [EBX]                 ; 004c440b
    FADD float ptr [ESP + 0x64]         ; 004c440d
    FSTP float ptr [ESP + 0x24]         ; 004c4411
    MOV EAX,dword ptr [EBX + 0x4]       ; 004c4415
    MOV dword ptr [ESP + 0x28],EAX      ; 004c4418
    FLD float ptr [EBX + 0x8]           ; 004c441c
    LEA EAX,[ESP + 0x24]                ; 004c441f
    FADD float ptr [ESP + 0x84]         ; 004c4423
    LEA EBX,[ESI + 0x64]                ; 004c442a
    FSTP float ptr [ESP + 0x2c]         ; 004c442d
    CMP EBX,EAX                         ; 004c4431
    JZ 0x004c4449                       ; 004c4433
        ;   XREF to: 004c4449 (CONDITIONAL_JUMP)  ; LAB_004c4449
    MOV EAX,dword ptr [ESP + 0x24]      ; 004c4435
    MOV dword ptr [EBX],EAX             ; 004c4439
    MOV EAX,dword ptr [ESP + 0x28]      ; 004c443b
    MOV dword ptr [EBX + 0x4],EAX       ; 004c443f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004c4442
    MOV dword ptr [EBX + 0x8],EAX       ; 004c4446
    LEA EAX,[ESI + 0x40]                ; 004c4449
        ;   Label: LAB_004c4449
    PUSH 0x0                            ; 004c444c
    PUSH EAX                            ; 004c444e
    MOV EAX,[0x006810c8]                ; 004c444f | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004c4454 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004c4455
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x70],EAX      ; 004c445a
    FLD float ptr [ESP + 0x70]          ; 004c445e
    ADD ESP,0xc                         ; 004c4462
    LEA EAX,[ESI + 0x4c]                ; 004c4465
    PUSH 0x0                            ; 004c4468
    MOV EDX,dword ptr [0x006810c8]      ; 004c446a | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004c4470
    FADD double ptr [0x00629e3b]        ; 004c4471 | DOUBLE_00629e3b
    PUSH EDX                            ; 004c4477 | g_CDemonSetInstance
    FSTP float ptr [ESI + 0x44]         ; 004c4478
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004c447b
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x70],EAX      ; 004c4480
    FLD float ptr [ESP + 0x70]          ; 004c4484
    ADD ESP,0xc                         ; 004c4488
    LEA EAX,[ESI + 0x58]                ; 004c448b
    PUSH 0x0                            ; 004c448e
    MOV ECX,dword ptr [0x006810c8]      ; 004c4490 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004c4496
    FADD double ptr [0x00629e3b]        ; 004c4497 | DOUBLE_00629e3b
    PUSH ECX                            ; 004c449d | g_CDemonSetInstance
    FSTP float ptr [ESI + 0x50]         ; 004c449e
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004c44a1
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    MOV dword ptr [ESP + 0x70],EAX      ; 004c44a6
    FLD float ptr [ESP + 0x70]          ; 004c44aa
    ADD ESP,0xc                         ; 004c44ae
    LEA EAX,[ESI + 0x64]                ; 004c44b1
    PUSH 0x0                            ; 004c44b4
    MOV EBX,dword ptr [0x006810c8]      ; 004c44b6 | g_CDemonSetPtr | g_CDemonSetInstance
    PUSH EAX                            ; 004c44bc
    FADD double ptr [0x00629e3b]        ; 004c44bd | DOUBLE_00629e3b
    PUSH EBX                            ; 004c44c3 | g_CDemonSetInstance
    FSTP float ptr [ESI + 0x5c]         ; 004c44c4
    CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 ; 004c44c7
        ;   XREF to: 005716b0 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0(CDemonSet * this_ptr, CVector3f * position, float radius)
    FLD float ptr [ESI + 0x44]          ; 004c44cc
    FSUB float ptr [ESI + 0x10]         ; 004c44cf
    MOV dword ptr [ESP + 0x70],EAX      ; 004c44d2
    FABS                                ; 004c44d6
    FLD float ptr [ESP + 0x70]          ; 004c44d8
    FADD double ptr [0x00629e3b]        ; 004c44dc | DOUBLE_00629e3b
    ADD ESP,0xc                         ; 004c44e2
    FSTP float ptr [ESI + 0x68]         ; 004c44e5
    FLD1                                ; 004c44e8
    FCOMPP                              ; 004c44ea
    FNSTSW AX                           ; 004c44ec
    SAHF                                ; 004c44ee
    JNC 0x004c44f7                      ; 004c44ef
        ;   XREF to: 004c44f7 (CONDITIONAL_JUMP)  ; LAB_004c44f7
    MOV EAX,dword ptr [ESI + 0x10]      ; 004c44f1
    MOV dword ptr [ESI + 0x44],EAX      ; 004c44f4
    FLD float ptr [ESI + 0x50]          ; 004c44f7
        ;   Label: LAB_004c44f7
    FSUB float ptr [ESI + 0x10]         ; 004c44fa
    FABS                                ; 004c44fd
    FLD1                                ; 004c44ff
    FCOMPP                              ; 004c4501
    FNSTSW AX                           ; 004c4503
    SAHF                                ; 004c4505
    JNC 0x004c450e                      ; 004c4506
        ;   XREF to: 004c450e (CONDITIONAL_JUMP)  ; LAB_004c450e
    MOV EAX,dword ptr [ESI + 0x10]      ; 004c4508
    MOV dword ptr [ESI + 0x50],EAX      ; 004c450b
    FLD float ptr [ESI + 0x5c]          ; 004c450e
        ;   Label: LAB_004c450e
    FSUB float ptr [ESI + 0x10]         ; 004c4511
    FABS                                ; 004c4514
    FLD1                                ; 004c4516
    FCOMPP                              ; 004c4518
    FNSTSW AX                           ; 004c451a
    SAHF                                ; 004c451c
    JNC 0x004c4525                      ; 004c451d
        ;   XREF to: 004c4525 (CONDITIONAL_JUMP)  ; LAB_004c4525
    MOV EAX,dword ptr [ESI + 0x10]      ; 004c451f
    MOV dword ptr [ESI + 0x5c],EAX      ; 004c4522
    FLD float ptr [ESI + 0x68]          ; 004c4525
        ;   Label: LAB_004c4525
    FSUB float ptr [ESI + 0x10]         ; 004c4528
    FABS                                ; 004c452b
    FLD1                                ; 004c452d
    FCOMPP                              ; 004c452f
    FNSTSW AX                           ; 004c4531
    SAHF                                ; 004c4533
    JC 0x004c453e                       ; 004c4534
        ;   XREF to: 004c453e (CONDITIONAL_JUMP)  ; LAB_004c453e
    ADD ESP,0x68                        ; 004c4536
    POP EBP                             ; 004c4539
    POP EDI                             ; 004c453a
    POP ESI                             ; 004c453b
    POP EBX                             ; 004c453c
    RET                                 ; 004c453d
    MOV EAX,dword ptr [ESI + 0x10]      ; 004c453e
        ;   Label: LAB_004c453e
    MOV dword ptr [ESI + 0x68],EAX      ; 004c4541
    ADD ESP,0x68                        ; 004c4544
    POP EBP                             ; 004c4547
    POP EDI                             ; 004c4548
    POP ESI                             ; 004c4549
    POP EBX                             ; 004c454a
    RET                                 ; 004c454b

