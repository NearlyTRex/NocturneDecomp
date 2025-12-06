; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d6260()
;
; Local Variables:
; undefined1       Stack[-0xf8]:1  local_f8
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004d6540 at 004d676d
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
;   undefined4 DAT_032613bc
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
;   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
;   core_setcolid.cpp_CDemonSet_raycast_FUN_00572530
;   core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d6260
        ;   Label: core_gabriela.cpp_FUN_004d6260
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
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d627d | CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d6282
    PUSH 0x6598c0                       ; 004d6285 | WatcomTypeInfo g_CVectorTypeInfo
    PUSH 0xa                            ; 004d628a
    MOV EBX,EAX                         ; 004d628c
    LEA EAX,[ESP + 0x20]                ; 004d628e
    PUSH EAX                            ; 004d6292
    CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667 ; 004d6293 | void * crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667(void * array_start, int element_count, WatcomTypeInfo * type_info)
        ;   XREF to: 005fe667 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004d6298
    LEA EAX,[ESP + 0x18]                ; 004d629b
    PUSH EAX                            ; 004d629f
    MOV EDX,dword ptr [ESI + 0x154]     ; 004d62a0
    PUSH ESI                            ; 004d62a6
    CALL dword ptr [EDX + 0x4c]         ; 004d62a7
    ADD ESP,0x8                         ; 004d62aa
    TEST EAX,EAX                        ; 004d62ad
    JZ 0x004d62c9                       ; 004d62af | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    TEST EBX,EBX                        ; 004d62b1
    JZ 0x004d62e2                       ; 004d62b3 | LAB_004d62e2
        ;   XREF to: 004d62e2 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 004d62b5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d62b6
    CALL dword ptr [EAX + 0x120]        ; 004d62bc
    ADD ESP,0x4                         ; 004d62c2
    TEST EAX,EAX                        ; 004d62c5
    JLE 0x004d62e2                      ; 004d62c7 | LAB_004d62e2
        ;   XREF to: 004d62e2 (CONDITIONAL_JUMP)
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
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d62ef | CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004d62f4
    FLD float ptr [ESP + 0xc8]          ; 004d62f7
    FLDZ                                ; 004d62fe
    FCOMPP                              ; 004d6300
    FNSTSW AX                           ; 004d6302
    SAHF                                ; 004d6304
    JNC 0x004d62c9                      ; 004d6305 | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
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
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d6347 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d634c
    MOV EAX,dword ptr [EAX + 0x4]       ; 004d634f
    MOV ECX,dword ptr [EBP + 0x1c]      ; 004d6352
    MOV dword ptr [ESP + 0x10],EAX      ; 004d6355
    TEST ECX,ECX                        ; 004d6359
    JZ 0x004d639b                       ; 004d635b | LAB_004d639b
        ;   XREF to: 004d639b (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 004d635d
    FCOMP double ptr [0x0062b095]       ; 004d6361 | double DOUBLE_0062b095
    FNSTSW AX                           ; 004d6367
    SAHF                                ; 004d6369
    JA 0x004d62c9                       ; 004d636a | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x10]          ; 004d6370
    FST double ptr [ESP + 0x8]          ; 004d6374
    FCOMP double ptr [0x0062b09d]       ; 004d6378 | double DOUBLE_0062b09d
    FNSTSW AX                           ; 004d637e
    SAHF                                ; 004d6380
    JC 0x004d62c9                       ; 004d6381 | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    FLD double ptr [ESP + 0x8]          ; 004d6387
    FCOMP double ptr [0x0062b0a5]       ; 004d638b | double DOUBLE_0062b0a5
    FNSTSW AX                           ; 004d6391
    SAHF                                ; 004d6393
    JBE 0x004d63d6                      ; 004d6394 | LAB_004d63d6
        ;   XREF to: 004d63d6 (CONDITIONAL_JUMP)
    JMP 0x004d62c9                      ; 004d6396 | LAB_004d62c9
        ;   XREF to: 004d62c9 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 004d639b
        ;   Label: LAB_004d639b
    FCOMP double ptr [0x0062b07d]       ; 004d639f | double DOUBLE_0062b07d
    FNSTSW AX                           ; 004d63a5
    SAHF                                ; 004d63a7
    JA 0x004d62c9                       ; 004d63a8 | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x10]          ; 004d63ae
    FST double ptr [ESP]                ; 004d63b2
    FCOMP double ptr [0x0062b085]       ; 004d63b5 | double DOUBLE_0062b085
    FNSTSW AX                           ; 004d63bb
    SAHF                                ; 004d63bd
    JC 0x004d62c9                       ; 004d63be | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    FLD double ptr [ESP]                ; 004d63c4
    FCOMP double ptr [0x0062b08d]       ; 004d63c7 | double DOUBLE_0062b08d
    FNSTSW AX                           ; 004d63cd
    SAHF                                ; 004d63cf
    JA 0x004d62c9                       ; 004d63d0 | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
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
    FLD float ptr [0x0062b0ad]          ; 004d6401 | float FLOAT_0062b0ad
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
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d6485 | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004d648a
    PUSH 0x1                            ; 004d648d
    MOV EAX,[0x006810c8]                ; 004d648f | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EAX                            ; 004d6494 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230 ; 004d6495 | void core_setcolid.cpp_CDemonSet_setRayType_FUN_00574230(CDemonSet * this_ptr, int ray_type)
        ;   XREF to: 00574230 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d649a
    PUSH EDI                            ; 004d649d
    MOV EDX,dword ptr [0x006810c8]      ; 004d649e | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EDX                            ; 004d64a4 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 004d64a5 | void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004d64aa
    LEA EAX,[ESP + 0xcc]                ; 004d64ad
    PUSH EAX                            ; 004d64b4
    LEA EAX,[ESP + 0xb8]                ; 004d64b5
    PUSH EAX                            ; 004d64bc
    MOV ECX,dword ptr [0x006810c8]      ; 004d64bd | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH ECX                            ; 004d64c3 | CDemonSet g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_raycast_FUN_00572530 ; 004d64c4 | float core_setcolid.cpp_CDemonSet_raycast_FUN_00572530(CDemonSet * this_ptr, CVector3f * ray_origin, CVector3f * ray_target)
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)
    MOV dword ptr [ESP + 0x108],EAX     ; 004d64c9
    FLD float ptr [ESP + 0x108]         ; 004d64d0
    ADD ESP,0xc                         ; 004d64d7
    MOV EBX,dword ptr [0x006810c8]      ; 004d64da | CDemonSet g_CDemonSetInstance | CDemonSet * g_CDemonSetPtr
    PUSH EBX                            ; 004d64e0 | CDemonSet g_CDemonSetInstance
    FSTP float ptr [ESP + 0xf8]         ; 004d64e1
    CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180 ; 004d64e8 | void core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180(CDemonSet * this_ptr)
        ;   XREF to: 00574180 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 004d64ed
    FLD float ptr [ESP + 0xf4]          ; 004d64f0
    FLD1                                ; 004d64f7
    FCOMPP                              ; 004d64f9
    FNSTSW AX                           ; 004d64fb
    SAHF                                ; 004d64fd
    JC 0x004d62c9                       ; 004d64fe | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    MOV EAX,[0x006810c8]                ; 004d6504 | CDemonSet * g_CDemonSetPtr
    CMP ESI,dword ptr [EAX + 0x14d144]  ; 004d6509 | DAT_032613bc
    JNZ 0x004d62c9                      ; 004d650f | LAB_004d62c9
        ;   XREF to: 004d62c9 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xf0]      ; 004d6515
    MOV dword ptr [ESP + 0xf8],EAX      ; 004d651c
    MOV EAX,dword ptr [ESP + 0xf8]      ; 004d6523
    MOV ESP,EBP                         ; 004d652a
    POP EBP                             ; 004d652c
    POP EDI                             ; 004d652d
    POP ESI                             ; 004d652e
    POP EBX                             ; 004d652f
    RET                                 ; 004d6530

