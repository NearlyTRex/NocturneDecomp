; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_gabriela_cpp_CGabriella_scoreTargetVisibility_FUN_004d6260(CGabriella *this_ptr,CDemonActor *target_actor,int use_wider_fov)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   target_actor
; int              Stack[0xc]:4   use_wider_fov
; Local Variables:
; CVector3f[10]    Stack[-0xf8]:120  local_f8
; CBoundingBox3D   Stack[-0x80]:24  CStack_80
; CVector3f        Stack[-0x68]:12  CStack_68
; CVector3f        Stack[-0x5c]:12  CStack_5c
; CVector3f        Stack[-0x50]:12  CStack_50
; CVector3f        Stack[-0x44]:12  CStack_44
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x34]:4  fStack_34
; float            Stack[-0x30]:4  fStack_30
; float            Stack[-0x2c]:4  fStack_2c
; float            Stack[-0x28]:4  fStack_28
; float            Stack[-0x24]:4  fStack_24
; float            Stack[-0x20]:4  fStack_20
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x14]:4  fStack_14
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_updateAimTracking_FUN_004d6540 at 004d676d
;
; Referenced Globals:
;   double DOUBLE_0062b07d = 30
;   double DOUBLE_0062b085 = -0.781490709825871
;   double DOUBLE_0062b08d = 1.56298141965174
;   double DOUBLE_0062b095 = 35
;   double DOUBLE_0062b09d = -0.785398163375000
;   double DOUBLE_0062b0a5 = 1.57079632675000
;   float FLOAT_0062b0ad = 0.5
;   WatcomTypeInfo g_CVectorTypeInfo
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.collision_actor
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_init_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c___arrinit_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6260
        ;   Label: core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004d6260
    PUSH ESI                            ; 004d6261
    PUSH EDI                            ; 004d6262
    PUSH EBP                            ; 004d6263
    MOV EBP,ESP                         ; 004d6264
    SUB ESP,0x100                       ; 004d6266
    AND ESP,0xfffffff8                  ; 004d626c
    MOV EDI,dword ptr [EBP + 0x14]      ; 004d626f
    MOV ESI,dword ptr [EBP + 0x18]      ; 004d6272
    MOV EDX,dword ptr [0x02cf2bf0]      ; 004d6275 | g_CEnemyClassInfo.name_hash
    PUSH EDX                            ; 004d627b
    PUSH ESI                            ; 004d627c
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d627d
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d6282
    PUSH 0x6598c0                       ; 004d6285 | g_CVectorTypeInfo
    PUSH 0xa                            ; 004d628a
    MOV EBX,EAX                         ; 004d628c
    LEA EAX,[ESP + 0x20]                ; 004d628e
    PUSH EAX                            ; 004d6292
    CALL crt_memory.c___arrinit_FUN_005fe667 ; 004d6293
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004d6298
    LEA EAX,[ESP + 0x18]                ; 004d629b
    PUSH EAX                            ; 004d629f
    MOV EDX,dword ptr [ESI + 0x154]     ; 004d62a0
    PUSH ESI                            ; 004d62a6
    CALL dword ptr [EDX + 0x4c]         ; 004d62a7
    ADD ESP,0x8                         ; 004d62aa
    TEST EAX,EAX                        ; 004d62ad
    JZ 0x004d62c9                       ; 004d62af
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    TEST EBX,EBX                        ; 004d62b1
    JZ 0x004d62e2                       ; 004d62b3
        ;   XREF to: 004d62e2 (CONDITIONAL_JUMP)  ; LAB_004d62e2
    PUSH EBX                            ; 004d62b5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d62b6
    CALL dword ptr [EAX + 0x120]        ; 004d62bc
    ADD ESP,0x4                         ; 004d62c2
    TEST EAX,EAX                        ; 004d62c5
    JLE 0x004d62e2                      ; 004d62c7
        ;   XREF to: 004d62e2 (CONDITIONAL_JUMP)  ; LAB_004d62e2
    MOV dword ptr [ESP + 0xf8],0xbf800000 ; 004d62c9
        ;   Label: LAB_004d62c9
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004d62d4
    MOV ESP,EBP                         ; 004d62db
    POP EBP                             ; 004d62dd
    POP EDI                             ; 004d62de
    POP ESI                             ; 004d62df
    POP EBX                             ; 004d62e0
    RET                                 ; 004d62e1
    LEA EAX,[ESI + 0x20]                ; 004d62e2
        ;   Label: LAB_004d62e2
    PUSH EAX                            ; 004d62e5
    LEA EAX,[ESP + 0xc4]                ; 004d62e6
    PUSH EAX                            ; 004d62ed
    PUSH EDI                            ; 004d62ee
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d62ef
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d62f4
    FLD float ptr [ESP + 0xc8]          ; 004d62f7
    FLDZ                                ; 004d62fe
    FCOMPP                              ; 004d6300
    FNSTSW AX                           ; 004d6302
    SAHF                                ; 004d6304
    JNC 0x004d62c9                      ; 004d6305
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    FLD float ptr [ESP + 0xc4]          ; 004d6307
    FMUL ST0                            ; 004d630e
    FLD float ptr [ESP + 0xc0]          ; 004d6310
    FMUL ST0                            ; 004d6317
    FADDP                               ; 004d6319
    FLD float ptr [ESP + 0xc8]          ; 004d631b
    FMUL ST0                            ; 004d6322
    FADDP                               ; 004d6324
    FSQRT                               ; 004d6326
    FSTP float ptr [ESP + 0x14]         ; 004d6328
    MOV EAX,dword ptr [ESP + 0x14]      ; 004d632c
    MOV dword ptr [ESP + 0xf0],EAX      ; 004d6330
    LEA EAX,[ESP + 0xc0]                ; 004d6337
    PUSH EAX                            ; 004d633e
    LEA EAX,[ESP + 0xac]                ; 004d633f
    PUSH EAX                            ; 004d6346
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d6347
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d634c
    MOV EAX,dword ptr [EAX + 0x4]       ; 004d634f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004d6352
    MOV dword ptr [ESP + 0x10],EAX      ; 004d6355
    TEST ECX,ECX                        ; 004d6359
    JZ 0x004d639b                       ; 004d635b
        ;   XREF to: 004d639b (CONDITIONAL_JUMP)  ; LAB_004d639b
    FLD float ptr [ESP + 0x14]          ; 004d635d
    FCOMP double ptr [0x0062b095]       ; 004d6361 | DOUBLE_0062b095
    FNSTSW AX                           ; 004d6367
    SAHF                                ; 004d6369
    JA 0x004d62c9                       ; 004d636a
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    FLD float ptr [ESP + 0x10]          ; 004d6370
    FST double ptr [ESP + 0x8]          ; 004d6374
    FCOMP double ptr [0x0062b09d]       ; 004d6378 | DOUBLE_0062b09d
    FNSTSW AX                           ; 004d637e
    SAHF                                ; 004d6380
    JC 0x004d62c9                       ; 004d6381
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    FLD double ptr [ESP + 0x8]          ; 004d6387
    FCOMP double ptr [0x0062b0a5]       ; 004d638b | DOUBLE_0062b0a5
    FNSTSW AX                           ; 004d6391
    SAHF                                ; 004d6393
    JBE 0x004d63d6                      ; 004d6394
        ;   XREF to: 004d63d6 (CONDITIONAL_JUMP)  ; LAB_004d63d6
    JMP 0x004d62c9                      ; 004d6396
        ;   XREF to: 004d62c9 (UNCONDITIONAL_JUMP)  ; LAB_004d62c9
    FLD float ptr [ESP + 0x14]          ; 004d639b
        ;   Label: LAB_004d639b
    FCOMP double ptr [0x0062b07d]       ; 004d639f | DOUBLE_0062b07d
    FNSTSW AX                           ; 004d63a5
    SAHF                                ; 004d63a7
    JA 0x004d62c9                       ; 004d63a8
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    FLD float ptr [ESP + 0x10]          ; 004d63ae
    FST double ptr [ESP]                ; 004d63b2
    FCOMP double ptr [0x0062b085]       ; 004d63b5 | DOUBLE_0062b085
    FNSTSW AX                           ; 004d63bb
    SAHF                                ; 004d63bd
    JC 0x004d62c9                       ; 004d63be
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    FLD double ptr [ESP]                ; 004d63c4
    FCOMP double ptr [0x0062b08d]       ; 004d63c7 | DOUBLE_0062b08d
    FNSTSW AX                           ; 004d63cd
    SAHF                                ; 004d63cf
    JA 0x004d62c9                       ; 004d63d0
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    LEA EBX,[ESP + 0x90]                ; 004d63d6
        ;   Label: LAB_004d63d6
    PUSH EBX                            ; 004d63dd
    MOV EAX,dword ptr [EDI + 0x154]     ; 004d63de
    PUSH EDI                            ; 004d63e4
    CALL dword ptr [EAX + 0x14]         ; 004d63e5
    LEA EBX,[EAX + 0xc]                 ; 004d63e8
    FLD float ptr [EAX]                 ; 004d63eb
    FADD float ptr [EBX]                ; 004d63ed
    ADD ESP,0x8                         ; 004d63ef
    FST float ptr [ESP + 0xd8]          ; 004d63f2
    FLD float ptr [EAX + 0x4]           ; 004d63f9
    FADD float ptr [EBX + 0x4]          ; 004d63fc
    FXCH                                ; 004d63ff
    FLD float ptr [0x0062b0ad]          ; 004d6401 | FLOAT_0062b0ad
    FXCH                                ; 004d6407
    FMUL ST1                            ; 004d6409
    FXCH ST2                            ; 004d640b
    FST float ptr [ESP + 0xdc]          ; 004d640d
    FLD float ptr [EAX + 0x8]           ; 004d6414
    FADD float ptr [EBX + 0x8]          ; 004d6417
    FXCH                                ; 004d641a
    FMUL ST2                            ; 004d641c
    FXCH                                ; 004d641e
    FST float ptr [ESP + 0xe0]          ; 004d6420
    FMULP ST2                           ; 004d6427
    LEA EAX,[EDI + 0x20]                ; 004d6429
    FXCH ST2                            ; 004d642c
    FSTP float ptr [ESP + 0xe4]         ; 004d642e
    FXCH                                ; 004d6435
    FSTP float ptr [ESP + 0xe8]         ; 004d6437
    FSTP float ptr [ESP + 0xec]         ; 004d643e
    FLD float ptr [EAX]                 ; 004d6445
    FADD float ptr [ESP + 0xe4]         ; 004d6447
    FSTP float ptr [ESP + 0xb4]         ; 004d644e
    FLD float ptr [EAX + 0x4]           ; 004d6455
    FADD float ptr [ESP + 0xe8]         ; 004d6458
    FSTP float ptr [ESP + 0xb8]         ; 004d645f
    FLD float ptr [EAX + 0x8]           ; 004d6466
    LEA EAX,[ESP + 0x18]                ; 004d6469
    PUSH EAX                            ; 004d646d
    LEA EAX,[ESP + 0xd0]                ; 004d646e
    PUSH EAX                            ; 004d6475
    FADD float ptr [ESP + 0xf4]         ; 004d6476
    PUSH ESI                            ; 004d647d
    FSTP float ptr [ESP + 0xc8]         ; 004d647e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d6485
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d648a
    PUSH 0x1                            ; 004d648d
    MOV EAX,[0x006810c8]                ; 004d648f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EAX                            ; 004d6494 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 004d6495
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
    ADD ESP,0x8                         ; 004d649a
    PUSH EDI                            ; 004d649d
    MOV EDX,dword ptr [0x006810c8]      ; 004d649e | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EDX                            ; 004d64a4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d64a5
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d64aa
    LEA EAX,[ESP + 0xcc]                ; 004d64ad
    PUSH EAX                            ; 004d64b4
    LEA EAX,[ESP + 0xb8]                ; 004d64b5
    PUSH EAX                            ; 004d64bc
    MOV ECX,dword ptr [0x006810c8]      ; 004d64bd | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH ECX                            ; 004d64c3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004d64c4
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
    MOV dword ptr [ESP + 0x108],EAX     ; 004d64c9
    FLD float ptr [ESP + 0x108]         ; 004d64d0
    ADD ESP,0xc                         ; 004d64d7
    MOV EBX,dword ptr [0x006810c8]      ; 004d64da | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH EBX                            ; 004d64e0 | g_CDemonSetInstance
    FSTP float ptr [ESP + 0xf8]         ; 004d64e1
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00574180 ; 004d64e8
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00574180(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004d64ed
    FLD float ptr [ESP + 0xf4]          ; 004d64f0
    FLD1                                ; 004d64f7
    FCOMPP                              ; 004d64f9
    FNSTSW AX                           ; 004d64fb
    SAHF                                ; 004d64fd
    JC 0x004d62c9                       ; 004d64fe
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    MOV EAX,[0x006810c8]                ; 004d6504 | g_CDemonSetPtr
    CMP ESI,dword ptr [EAX + 0x14d144]  ; 004d6509 | g_CDemonSetInstance.collision_actor
    JNZ 0x004d62c9                      ; 004d650f
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)  ; LAB_004d62c9
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004d6515
    MOV dword ptr [ESP + 0xf8],EAX      ; 004d651c
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004d6523
    MOV ESP,EBP                         ; 004d652a
    POP EBP                             ; 004d652c
    POP EDI                             ; 004d652d
    POP ESI                             ; 004d652e
    POP EBX                             ; 004d652f
    RET                                 ; 004d6530

