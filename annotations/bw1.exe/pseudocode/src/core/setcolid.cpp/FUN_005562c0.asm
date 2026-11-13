; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * core_setcolid_cpp_FUN_005562c0(CDemonSet *param_1,CVector3f *param_2,float param_3,undefined4 param_4,float param_5,undefined4 param_6,CBoundingBox3D *param_7)
;
; Local Variables:
; undefined4       Stack[-0x208]:4  local_208
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined4       Stack[-0x1a8]:4  local_1a8
; undefined4       Stack[-0x1a4]:4  local_1a4
; undefined4       Stack[-0x1a0]:4  local_1a0
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[8]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a00 at 00408a4c
;   core_actor.cpp_CDemonActor_processFootstepAtOffset_FUN_0040c750 at 0040c7e1
;   core_actor.cpp_CDemonActor_processFootstep_FUN_0040c6a0 at 0040c710
;   core_doc.cpp_FUN_004712b0 at 004717df
;   core_fire.cpp_CCrater_activate_FUN_004b1fb0 at 004b2006
;   core_gore.cpp_CBloodPool_init_FUN_004e5570 at 004e559b
;   core_stranger.cpp_CStranger_tryPlaceObject_FUN_0058d910 at 0058e093
;   core_trash.cpp_CTrash_process_FUN_0059a370 at 0059aacd
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005f0d85
;   TerminatedCString s_info_keyFramedModelInsta_005f0d9a
;   TerminatedCString s_core_setcolid_cpp_005f0de6
;   TerminatedCString s_Invalid_collision_type_005f0dfb
;   undefined4 DAT_005f0e15
;   undefined4 DAT_005f0e19
;   WatcomTypeInfo g_CVectorTypeInfo
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   CDemonRaytrace g_CDemonRaytraceInstance
;   undefined4 g_CSpikeClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_FUN_00408ec0
;   core_box.cpp_FUN_00420570
;   core_box.cpp_FUN_004215d0
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00468250
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900
;   core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010
;   core_dtrace.cpp_FUN_0048bdc0
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0
;   core_dtri.cpp_FUN_00490a40
;   core_main.c_FUN_005030e0
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005562c0
        ;   Label: core_setcolid.cpp_FUN_005562c0
    PUSH ESI                            ; 005562c1
    PUSH EDI                            ; 005562c2
    PUSH EBP                            ; 005562c3
    SUB ESP,0x3a8                       ; 005562c4
    MOV EBX,dword ptr [ESP + 0x3c0]     ; 005562ca
    FLD float ptr [ESP + 0x3c4]         ; 005562d1
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 005562d8
    MOV EBP,dword ptr [ESP + 0x3bc]     ; 005562df
    FLDZ                                ; 005562e6
    ADD ESI,0x14d134                    ; 005562e8
    ADD EBP,0x14d128                    ; 005562ee
    FCOMPP                              ; 005562f4
    FNSTSW AX                           ; 005562f6
    SAHF                                ; 005562f8
    JC 0x00556569                       ; 005562f9
        ;   XREF to: 00556569 (CONDITIONAL_JUMP)  ; LAB_00556569
    PUSH EBP                            ; 005562ff
    PUSH ESI                            ; 00556300
    PUSH EBX                            ; 00556301
    PUSH 0x1fe5c1c                      ; 00556302 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_FUN_0048bdc0   ; 00556307
        ;   XREF to: 0048bdc0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048bdc0()
    MOV dword ptr [ESP + 0x3b4],EAX     ; 0055630c
    FLD float ptr [ESP + 0x3b4]         ; 00556313
    ADD ESP,0x10                        ; 0055631a
    FSTP float ptr [ESP + 0x388]        ; 0055631d
        ;   Label: LAB_0055631d
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00556324
    CMP dword ptr [EAX + 0x14d134],0x0  ; 0055632b
    JNZ 0x00556347                      ; 00556332
        ;   XREF to: 00556347 (CONDITIONAL_JUMP)  ; LAB_00556347
    MOV ESI,dword ptr [ESP + 0x3bc]     ; 00556334
    MOV EAX,dword ptr [EAX + 0x15f694]  ; 0055633b
    MOV dword ptr [ESI + 0x14d134],EAX  ; 00556341
    LEA EAX,[ESP + 0x2c8]               ; 00556347
        ;   Label: LAB_00556347
    CMP EAX,EBX                         ; 0055634e
    JZ 0x0055636f                       ; 00556350
        ;   XREF to: 0055636f (CONDITIONAL_JUMP)  ; LAB_0055636f
    MOV EAX,dword ptr [EBX]             ; 00556352
    MOV dword ptr [ESP + 0x2c8],EAX     ; 00556354
    MOV EAX,dword ptr [EBX + 0x4]       ; 0055635b
    MOV dword ptr [ESP + 0x2cc],EAX     ; 0055635e
    MOV EAX,dword ptr [EBX + 0x8]       ; 00556365
    MOV dword ptr [ESP + 0x2d0],EAX     ; 00556368
    FLD float ptr [ESP + 0x2cc]         ; 0055636f
        ;   Label: LAB_0055636f
    FADD float ptr [0x005f0e15]         ; 00556376 | DAT_005f0e15
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0055637c
    FSTP float ptr [ESP + 0x2cc]        ; 00556383
    MOV dword ptr [EAX + 0x14d144],0x0  ; 0055638a
    MOV dword ptr [EAX + 0x14d148],0xffffffff ; 00556394
    MOV ECX,dword ptr [EAX + 0x15f6ac]  ; 0055639e
    MOV dword ptr [EAX + 0x14d14c],0xffffffff ; 005563a4
    TEST ECX,ECX                        ; 005563ae
    JL 0x00556557                       ; 005563b0
        ;   XREF to: 00556557 (CONDITIONAL_JUMP)  ; LAB_00556557
    LEA EAX,[ESP + 0x214]               ; 005563b6
    LEA EBX,[ESP + 0x2c8]               ; 005563bd
    CMP EAX,EBX                         ; 005563c4
    JZ 0x005563f2                       ; 005563c6
        ;   XREF to: 005563f2 (CONDITIONAL_JUMP)  ; LAB_005563f2
    MOV EAX,dword ptr [ESP + 0x2c8]     ; 005563c8
    MOV dword ptr [ESP + 0x214],EAX     ; 005563cf
    MOV EAX,dword ptr [ESP + 0x2cc]     ; 005563d6
    MOV dword ptr [ESP + 0x218],EAX     ; 005563dd
    MOV EAX,dword ptr [ESP + 0x2d0]     ; 005563e4
    MOV dword ptr [ESP + 0x21c],EAX     ; 005563eb
    FLD float ptr [ESP + 0x208]         ; 005563f2
        ;   Label: LAB_005563f2
    FLD float ptr [ESP + 0x210]         ; 005563f9
    FLD float ptr [ESP + 0x214]         ; 00556400
    FLD float ptr [ESP + 0x21c]         ; 00556407
    LEA EAX,[ESP + 0x214]               ; 0055640e
    LEA EBX,[ESP + 0x208]               ; 00556415
    FXCH ST3                            ; 0055641c
    FLD float ptr [ESP + 0x3c4]         ; 0055641e
    FXCH                                ; 00556425
    FSUB ST0,ST1                        ; 00556427
    FXCH ST3                            ; 00556429
    FSUB ST0,ST1                        ; 0055642b
    FXCH ST2                            ; 0055642d
    FADD ST0,ST1                        ; 0055642f
    FXCH ST4                            ; 00556431
    FADDP                               ; 00556433
    FXCH                                ; 00556435
    FSTP float ptr [ESP + 0x210]        ; 00556437
    FXCH ST2                            ; 0055643e
    FSTP float ptr [ESP + 0x214]        ; 00556440
    FXCH                                ; 00556447
    FSTP float ptr [ESP + 0x21c]        ; 00556449
    FSTP float ptr [ESP + 0x208]        ; 00556450
    CMP EBX,EAX                         ; 00556457
    JZ 0x00556485                       ; 00556459
        ;   XREF to: 00556485 (CONDITIONAL_JUMP)  ; LAB_00556485
    MOV EAX,dword ptr [ESP + 0x214]     ; 0055645b
    MOV dword ptr [ESP + 0x208],EAX     ; 00556462
    MOV EAX,dword ptr [ESP + 0x218]     ; 00556469
    MOV dword ptr [ESP + 0x20c],EAX     ; 00556470
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00556477
    MOV dword ptr [ESP + 0x210],EAX     ; 0055647e
    FLD float ptr [ESP + 0x20c]         ; 00556485
        ;   Label: LAB_00556485
    LEA EAX,[ESP + 0x1b0]               ; 0055648c
    FADD float ptr [0x005f0e19]         ; 00556493 | DAT_005f0e19
    PUSH EAX                            ; 00556499
    FSTP float ptr [ESP + 0x210]        ; 0055649a
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0 ; 005564a1
        ;   XREF to: 005593c0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005593c0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 005564a6
    XOR EBX,EBX                         ; 005564a9
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 005564ab
    MOV dword ptr [ESP + 0x1b0],EBX     ; 005564b2
    MOV EDI,dword ptr [EAX + 0x156db8]  ; 005564b9
    MOV dword ptr [ESP + 0x394],EBX     ; 005564bf
    TEST EDI,EDI                        ; 005564c6
    JLE 0x00556542                      ; 005564c8
        ;   XREF to: 00556542 (CONDITIONAL_JUMP)  ; LAB_00556542
    ADD EAX,0x14d128                    ; 005564ca
    MOV dword ptr [ESP + 0x39c],EAX     ; 005564cf
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 005564d6
    MOV dword ptr [ESP + 0x398],EAX     ; 005564dd
    MOV EAX,dword ptr [ESP + 0x398]     ; 005564e4
        ;   Label: LAB_005564e4
    MOV EAX,dword ptr [EAX + 0x156dbc]  ; 005564eb
    PUSH EAX                            ; 005564f1
    MOV ESI,dword ptr [ESP + 0x3c0]     ; 005564f2
    PUSH ESI                            ; 005564f9
    MOV dword ptr [ESP + 0x3a8],EAX     ; 005564fa
    CALL core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0 ; 00556501
        ;   XREF to: 00557db0 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00556506
    TEST EAX,EAX                        ; 00556509
    JZ 0x00556593                       ; 0055650b
        ;   XREF to: 00556593 (CONDITIONAL_JUMP)  ; LAB_00556593
    MOV EBP,dword ptr [ESP + 0x398]     ; 00556511
        ;   Label: LAB_00556511
    MOV EAX,dword ptr [ESP + 0x394]     ; 00556518
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 0055651f
    ADD EBP,0x4                         ; 00556526
    INC EAX                             ; 00556529
    MOV EDX,dword ptr [EBX + 0x156db8]  ; 0055652a
    MOV dword ptr [ESP + 0x398],EBP     ; 00556530
    MOV dword ptr [ESP + 0x394],EAX     ; 00556537
    CMP EAX,EDX                         ; 0055653e
    JL 0x005564e4                       ; 00556540
        ;   XREF to: 005564e4 (CONDITIONAL_JUMP)  ; LAB_005564e4
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00556542
        ;   Label: LAB_00556542
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 00556549
    TEST ECX,ECX                        ; 0055654f
    JNZ 0x005570d5                      ; 00556551
        ;   XREF to: 005570d5 (CONDITIONAL_JUMP)  ; LAB_005570d5
    MOV EAX,dword ptr [ESP + 0x388]     ; 00556557
        ;   Label: LAB_00556557
    ADD ESP,0x3a8                       ; 0055655e
    POP EBP                             ; 00556564
    POP EDI                             ; 00556565
    POP ESI                             ; 00556566
    POP EBX                             ; 00556567
    RET                                 ; 00556568
    PUSH EBP                            ; 00556569
        ;   Label: LAB_00556569
    PUSH ESI                            ; 0055656a
    PUSH dword ptr [ESP + 0x3cc]        ; 0055656b
    PUSH EBX                            ; 00556572
    PUSH 0x1fe5c1c                      ; 00556573 | g_CDemonRaytraceInstance
    CALL core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010 ; 00556578
        ;   XREF to: 0048c010 (UNCONDITIONAL_CALL)  ; float core_dtrace.cpp_CDemonRaytrace_cylinderGroundCheck_FUN_0048c010(CDemonRaytrace * this_ptr, CVector3f * pos, float radius, int * hit_flag, ...)
    MOV dword ptr [ESP + 0x3b8],EAX     ; 0055657d
    FLD float ptr [ESP + 0x3b8]         ; 00556584
    ADD ESP,0x14                        ; 0055658b
    JMP 0x0055631d                      ; 0055658e
        ;   XREF to: 0055631d (UNCONDITIONAL_JUMP)  ; LAB_0055631d
    MOV EDI,dword ptr [0x02c83510]      ; 00556593 | g_CSpikeClassInfo.name_hash
        ;   Label: LAB_00556593
    PUSH EDI                            ; 00556599
    MOV EBP,dword ptr [ESP + 0x3a4]     ; 0055659a
    PUSH EBP                            ; 005565a1
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005565a2
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005565a7
    TEST EAX,EAX                        ; 005565aa
    JNZ 0x00556511                      ; 005565ac
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV dword ptr [ESP + 0x1d0],EAX     ; 005565b2
    MOV dword ptr [ESP + 0x1d4],EAX     ; 005565b9
    LEA EAX,[ESP + 0x1b0]               ; 005565c0
    PUSH EAX                            ; 005565c7
    MOV EBX,dword ptr [EBP + 0x154]     ; 005565c8
    PUSH EBP                            ; 005565ce
    CALL dword ptr [EBX + 0x3c]         ; 005565cf
    ADD ESP,0x8                         ; 005565d2
    MOV EBX,EAX                         ; 005565d5
    TEST EAX,EAX                        ; 005565d7
    JZ 0x00556511                       ; 005565d9
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    PUSH EAX                            ; 005565df
    LEA EAX,[ESP + 0x1b4]               ; 005565e0
    PUSH EAX                            ; 005565e7
    PUSH EBP                            ; 005565e8
    LEA ESI,[ESP + 0x1fc]               ; 005565e9
    LEA EDI,[ESP + 0x22c]               ; 005565f0
    CALL core_actor.cpp_FUN_00408ec0    ; 005565f7
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ec0()
    ADD ESP,0xc                         ; 005565fc
    LEA EAX,[ESP + 0x220]               ; 005565ff
    MOV ECX,0x6                         ; 00556606
    PUSH EAX                            ; 0055660b
    LEA EAX,[ESP + 0x20c]               ; 0055660c
    LEA ESI,[ESP + 0x1f4]               ; 00556613
    PUSH EAX                            ; 0055661a
    MOVSD.REP ES:EDI,ESI                ; 0055661b
    CALL core_box.cpp_FUN_004215d0      ; 0055661d
        ;   XREF to: 004215d0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_FUN_004215d0(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 00556622
    TEST EAX,EAX                        ; 00556625
    JZ 0x00556511                       ; 00556627
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0055662d
    CMP dword ptr [EAX + 0x15f6f4],0x0  ; 00556634
    JZ 0x00556e61                       ; 0055663b
        ;   XREF to: 00556e61 (CONDITIONAL_JUMP)  ; LAB_00556e61
    CMP EBX,0x2                         ; 00556641
        ;   Label: LAB_00556641
    JNC 0x0055709e                      ; 00556644
        ;   XREF to: 0055709e (CONDITIONAL_JUMP)  ; LAB_0055709e
    CMP EBX,0x1                         ; 0055664a
    JNZ 0x005570ad                      ; 0055664d
        ;   XREF to: 005570ad (CONDITIONAL_JUMP)  ; LAB_005570ad
    PUSH 0x5fb430                       ; 00556653 | g_CVectorTypeInfo
    PUSH 0x8                            ; 00556658
    LEA EAX,[ESP + 0x8]                 ; 0055665a
    PUSH EAX                            ; 0055665e
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0055665f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 00556664
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00556667
    MOV ESI,dword ptr [ESP + 0x3a0]     ; 0055666e
    LEA EDI,[ESP + 0x238]               ; 00556675
    PUSH ESI                            ; 0055667c
    MOV EAX,dword ptr [EAX + 0x154]     ; 0055667d
    LEA ESI,[ESP + 0x1dc]               ; 00556683
    LEA EBX,[ESP + 0x4]                 ; 0055668a
    CALL dword ptr [EAX + 0x1c]         ; 0055668e
    MOV ECX,0x6                         ; 00556691
    LEA ESI,[ESP + 0x1dc]               ; 00556696
    ADD ESP,0x4                         ; 0055669d
    XOR EBP,EBP                         ; 005566a0
    MOVSD.REP ES:EDI,ESI                ; 005566a2
    PUSH EBP                            ; 005566a4
        ;   Label: LAB_005566a4
    LEA EAX,[ESP + 0x23c]               ; 005566a5
    PUSH EAX                            ; 005566ac
    LEA ESI,[ESP + 0x36c]               ; 005566ad
    LEA EDI,[ESP + 0x33c]               ; 005566b4
    CALL core_box.cpp_FUN_00420570      ; 005566bb
        ;   XREF to: 00420570 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_00420570()
    LEA ESI,[ESP + 0x36c]               ; 005566c0
    ADD ESP,0x8                         ; 005566c7
    LEA EAX,[ESP + 0x334]               ; 005566ca
    MOVSD ES:EDI,ESI                    ; 005566d1
    MOVSD ES:EDI,ESI                    ; 005566d2
    MOVSD ES:EDI,ESI                    ; 005566d3
    PUSH EAX                            ; 005566d4
    MOV EDI,dword ptr [ESP + 0x3a4]     ; 005566d5
    PUSH EDI                            ; 005566dc
    LEA ESI,[ESP + 0x2dc]               ; 005566dd
    CALL core_actor.cpp_FUN_00408b40    ; 005566e4
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA EDI,[ESP + 0x2c4]               ; 005566e9
    LEA ESI,[ESP + 0x2dc]               ; 005566f0
    ADD ESP,0x8                         ; 005566f7
    LEA EAX,[ESP + 0x2bc]               ; 005566fa
    MOVSD ES:EDI,ESI                    ; 00556701
    MOVSD ES:EDI,ESI                    ; 00556702
    MOVSD ES:EDI,ESI                    ; 00556703
    CMP EBX,EAX                         ; 00556704
    JZ 0x00556725                       ; 00556706
        ;   XREF to: 00556725 (CONDITIONAL_JUMP)  ; LAB_00556725
    MOV EAX,dword ptr [ESP + 0x2bc]     ; 00556708
    MOV dword ptr [EBX],EAX             ; 0055670f
    MOV EAX,dword ptr [ESP + 0x2c0]     ; 00556711
    MOV dword ptr [EBX + 0x4],EAX       ; 00556718
    MOV EAX,dword ptr [ESP + 0x2c4]     ; 0055671b
    MOV dword ptr [EBX + 0x8],EAX       ; 00556722
    INC EBP                             ; 00556725
        ;   Label: LAB_00556725
    ADD EBX,0xc                         ; 00556726
    CMP EBP,0x8                         ; 00556729
    JL 0x005566a4                       ; 0055672c
        ;   XREF to: 005566a4 (CONDITIONAL_JUMP)  ; LAB_005566a4
    LEA EAX,[ESP + 0x48]                ; 00556732
    PUSH EAX                            ; 00556736
    LEA EAX,[ESP + 0x34]                ; 00556737
    PUSH EAX                            ; 0055673b
    LEA EAX,[ESP + 0x8]                 ; 0055673c
    PUSH EAX                            ; 00556740
    LEA EAX,[ESP + 0x6c]                ; 00556741
    PUSH EAX                            ; 00556745
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556746
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0055674b
    LEA EAX,[ESP + 0x388]               ; 0055674e
    PUSH EAX                            ; 00556755
    LEA EAX,[ESP + 0x2cc]               ; 00556756
    PUSH dword ptr [ESP + 0x3c8]        ; 0055675d
    PUSH EAX                            ; 00556764
    LEA EAX,[ESP + 0x6c]                ; 00556765
    PUSH EAX                            ; 00556769
    CALL core_dtri.cpp_FUN_00490a40     ; 0055676a
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0055676f
    MOV ESI,EAX                         ; 00556772
    LEA EAX,[ESP + 0x18]                ; 00556774
    PUSH EAX                            ; 00556778
    LEA EAX,[ESP + 0x4c]                ; 00556779
    PUSH EAX                            ; 0055677d
    LEA EAX,[ESP + 0x8]                 ; 0055677e
    PUSH EAX                            ; 00556782
    LEA EAX,[ESP + 0x6c]                ; 00556783
    PUSH EAX                            ; 00556787
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556788
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 0055678d
    LEA EAX,[ESP + 0x388]               ; 00556790
    PUSH EAX                            ; 00556797
    LEA EAX,[ESP + 0x2cc]               ; 00556798
    PUSH dword ptr [ESP + 0x3c8]        ; 0055679f
    PUSH EAX                            ; 005567a6
    LEA EAX,[ESP + 0x6c]                ; 005567a7
    PUSH EAX                            ; 005567ab
    XOR EBX,EBX                         ; 005567ac
    MOV EBP,ESI                         ; 005567ae
    CALL core_dtri.cpp_FUN_00490a40     ; 005567b0
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 005567b5
    OR EBP,EAX                          ; 005567b8
    JZ 0x00556847                       ; 005567ba
        ;   XREF to: 00556847 (CONDITIONAL_JUMP)  ; LAB_00556847
    FLD float ptr [ESP + 0x84]          ; 005567c0
    FLD float ptr [ESP + 0x88]          ; 005567c7
    FLD float ptr [ESP + 0x8c]          ; 005567ce
    LEA EDI,[ESP + 0x28c]               ; 005567d5
    LEA ESI,[ESP + 0x250]               ; 005567dc
    FXCH ST2                            ; 005567e3
    FCHS                                ; 005567e5
    FXCH                                ; 005567e7
    FCHS                                ; 005567e9
    FXCH ST2                            ; 005567eb
    FCHS                                ; 005567ed
    FXCH ST2                            ; 005567ef
    FSTP float ptr [ESP + 0x254]        ; 005567f1
    FXCH                                ; 005567f8
    FSTP float ptr [ESP + 0x258]        ; 005567fa
    FSTP float ptr [ESP + 0x250]        ; 00556801
    MOVSD ES:EDI,ESI                    ; 00556808
    MOVSD ES:EDI,ESI                    ; 00556809
    MOVSD ES:EDI,ESI                    ; 0055680a
    LEA EAX,[ESP + 0x2ec]               ; 0055680b
    LEA ESI,[ESP + 0x28c]               ; 00556812
    CMP EAX,ESI                         ; 00556819
    JZ 0x00556847                       ; 0055681b
        ;   XREF to: 00556847 (CONDITIONAL_JUMP)  ; LAB_00556847
    MOV EAX,dword ptr [ESP + 0x28c]     ; 0055681d
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00556824
    MOV EAX,dword ptr [ESP + 0x290]     ; 0055682b
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00556832
    MOV EAX,dword ptr [ESP + 0x294]     ; 00556839
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00556840
    LEA EAX,[ESP + 0x54]                ; 00556847
        ;   Label: LAB_00556847
    PUSH EAX                            ; 0055684b
    LEA EAX,[ESP + 0x28]                ; 0055684c
    PUSH EAX                            ; 00556850
    LEA EAX,[ESP + 0x14]                ; 00556851
    PUSH EAX                            ; 00556855
    LEA EAX,[ESP + 0x14c]               ; 00556856
    PUSH EAX                            ; 0055685d
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055685e
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556863
    LEA EAX,[ESP + 0x388]               ; 00556866
    PUSH EAX                            ; 0055686d
    LEA EAX,[ESP + 0x2cc]               ; 0055686e
    PUSH dword ptr [ESP + 0x3c8]        ; 00556875
    PUSH EAX                            ; 0055687c
    LEA EAX,[ESP + 0x14c]               ; 0055687d
    PUSH EAX                            ; 00556884
    OR EBX,EBP                          ; 00556885
    CALL core_dtri.cpp_FUN_00490a40     ; 00556887
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 0055688c
    MOV EBP,EAX                         ; 0055688f
    LEA EAX,[ESP + 0x3c]                ; 00556891
    PUSH EAX                            ; 00556895
    LEA EAX,[ESP + 0x58]                ; 00556896
    PUSH EAX                            ; 0055689a
    LEA EAX,[ESP + 0x14]                ; 0055689b
    PUSH EAX                            ; 0055689f
    LEA EAX,[ESP + 0x14c]               ; 005568a0
    PUSH EAX                            ; 005568a7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005568a8
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005568ad
    LEA EAX,[ESP + 0x388]               ; 005568b0
    PUSH EAX                            ; 005568b7
    LEA EAX,[ESP + 0x2cc]               ; 005568b8
    PUSH dword ptr [ESP + 0x3c8]        ; 005568bf
    PUSH EAX                            ; 005568c6
    LEA EAX,[ESP + 0x14c]               ; 005568c7
    PUSH EAX                            ; 005568ce
    CALL core_dtri.cpp_FUN_00490a40     ; 005568cf
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 005568d4
    OR EBP,EAX                          ; 005568d7
    JZ 0x00556966                       ; 005568d9
        ;   XREF to: 00556966 (CONDITIONAL_JUMP)  ; LAB_00556966
    FLD float ptr [ESP + 0x164]         ; 005568df
    FLD float ptr [ESP + 0x168]         ; 005568e6
    FLD float ptr [ESP + 0x16c]         ; 005568ed
    LEA EDI,[ESP + 0x298]               ; 005568f4
    LEA ESI,[ESP + 0x280]               ; 005568fb
    FXCH ST2                            ; 00556902
    FCHS                                ; 00556904
    FXCH                                ; 00556906
    FCHS                                ; 00556908
    FXCH ST2                            ; 0055690a
    FCHS                                ; 0055690c
    FXCH ST2                            ; 0055690e
    FSTP float ptr [ESP + 0x284]        ; 00556910
    FXCH                                ; 00556917
    FSTP float ptr [ESP + 0x288]        ; 00556919
    FSTP float ptr [ESP + 0x280]        ; 00556920
    MOVSD ES:EDI,ESI                    ; 00556927
    MOVSD ES:EDI,ESI                    ; 00556928
    MOVSD ES:EDI,ESI                    ; 00556929
    LEA EAX,[ESP + 0x298]               ; 0055692a
    LEA ESI,[ESP + 0x2ec]               ; 00556931
    CMP ESI,EAX                         ; 00556938
    JZ 0x00556966                       ; 0055693a
        ;   XREF to: 00556966 (CONDITIONAL_JUMP)  ; LAB_00556966
    MOV EAX,dword ptr [ESP + 0x298]     ; 0055693c
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00556943
    MOV EAX,dword ptr [ESP + 0x29c]     ; 0055694a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00556951
    MOV EAX,dword ptr [ESP + 0x2a0]     ; 00556958
    MOV dword ptr [ESP + 0x2f4],EAX     ; 0055695f
    LEA EAX,[ESP + 0x3c]                ; 00556966
        ;   Label: LAB_00556966
    PUSH EAX                            ; 0055696a
    LEA EAX,[ESP + 0x10]                ; 0055696b
    PUSH EAX                            ; 0055696f
    LEA EAX,[ESP + 0x8]                 ; 00556970
    PUSH EAX                            ; 00556974
    LEA EAX,[ESP + 0x184]               ; 00556975
    PUSH EAX                            ; 0055697c
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 0055697d
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556982
    LEA EAX,[ESP + 0x388]               ; 00556985
    PUSH EAX                            ; 0055698c
    LEA EAX,[ESP + 0x2cc]               ; 0055698d
    PUSH dword ptr [ESP + 0x3c8]        ; 00556994
    PUSH EAX                            ; 0055699b
    LEA EAX,[ESP + 0x184]               ; 0055699c
    PUSH EAX                            ; 005569a3
    CALL core_dtri.cpp_FUN_00490a40     ; 005569a4
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 005569a9
    MOV ESI,EAX                         ; 005569ac
    LEA EAX,[ESP + 0x30]                ; 005569ae
    PUSH EAX                            ; 005569b2
    LEA EAX,[ESP + 0x40]                ; 005569b3
    PUSH EAX                            ; 005569b7
    LEA EAX,[ESP + 0x8]                 ; 005569b8
    PUSH EAX                            ; 005569bc
    LEA EAX,[ESP + 0x184]               ; 005569bd
    PUSH EAX                            ; 005569c4
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 005569c5
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 005569ca
    LEA EAX,[ESP + 0x388]               ; 005569cd
    PUSH EAX                            ; 005569d4
    LEA EAX,[ESP + 0x2cc]               ; 005569d5
    PUSH dword ptr [ESP + 0x3c8]        ; 005569dc
    PUSH EAX                            ; 005569e3
    LEA EAX,[ESP + 0x184]               ; 005569e4
    PUSH EAX                            ; 005569eb
    OR EBX,EBP                          ; 005569ec
    MOV EBP,ESI                         ; 005569ee
    CALL core_dtri.cpp_FUN_00490a40     ; 005569f0
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 005569f5
    OR EBP,EAX                          ; 005569f8
    JZ 0x00556a87                       ; 005569fa
        ;   XREF to: 00556a87 (CONDITIONAL_JUMP)  ; LAB_00556a87
    FLD float ptr [ESP + 0x19c]         ; 00556a00
    FLD float ptr [ESP + 0x1a0]         ; 00556a07
    FLD float ptr [ESP + 0x1a4]         ; 00556a0e
    LEA EDI,[ESP + 0x310]               ; 00556a15
    LEA ESI,[ESP + 0x34c]               ; 00556a1c
    FXCH ST2                            ; 00556a23
    FCHS                                ; 00556a25
    FXCH                                ; 00556a27
    FCHS                                ; 00556a29
    FXCH ST2                            ; 00556a2b
    FCHS                                ; 00556a2d
    FXCH ST2                            ; 00556a2f
    FSTP float ptr [ESP + 0x350]        ; 00556a31
    FXCH                                ; 00556a38
    FSTP float ptr [ESP + 0x354]        ; 00556a3a
    FSTP float ptr [ESP + 0x34c]        ; 00556a41
    MOVSD ES:EDI,ESI                    ; 00556a48
    MOVSD ES:EDI,ESI                    ; 00556a49
    MOVSD ES:EDI,ESI                    ; 00556a4a
    LEA EAX,[ESP + 0x310]               ; 00556a4b
    LEA ESI,[ESP + 0x2ec]               ; 00556a52
    CMP ESI,EAX                         ; 00556a59
    JZ 0x00556a87                       ; 00556a5b
        ;   XREF to: 00556a87 (CONDITIONAL_JUMP)  ; LAB_00556a87
    MOV EAX,dword ptr [ESP + 0x310]     ; 00556a5d
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00556a64
    MOV EAX,dword ptr [ESP + 0x314]     ; 00556a6b
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00556a72
    MOV EAX,dword ptr [ESP + 0x318]     ; 00556a79
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00556a80
    LEA EAX,[ESP + 0x54]                ; 00556a87
        ;   Label: LAB_00556a87
    PUSH EAX                            ; 00556a8b
    LEA EAX,[ESP + 0x4c]                ; 00556a8c
    PUSH EAX                            ; 00556a90
    LEA EAX,[ESP + 0x20]                ; 00556a91
    PUSH EAX                            ; 00556a95
    LEA EAX,[ESP + 0x114]               ; 00556a96
    PUSH EAX                            ; 00556a9d
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556a9e
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556aa3
    LEA EAX,[ESP + 0x388]               ; 00556aa6
    PUSH EAX                            ; 00556aad
    LEA EAX,[ESP + 0x2cc]               ; 00556aae
    PUSH dword ptr [ESP + 0x3c8]        ; 00556ab5
    PUSH EAX                            ; 00556abc
    LEA EAX,[ESP + 0x114]               ; 00556abd
    PUSH EAX                            ; 00556ac4
    OR EBX,EBP                          ; 00556ac5
    CALL core_dtri.cpp_FUN_00490a40     ; 00556ac7
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00556acc
    MOV EBP,EAX                         ; 00556acf
    LEA EAX,[ESP + 0x24]                ; 00556ad1
    PUSH EAX                            ; 00556ad5
    LEA EAX,[ESP + 0x58]                ; 00556ad6
    PUSH EAX                            ; 00556ada
    LEA EAX,[ESP + 0x20]                ; 00556adb
    PUSH EAX                            ; 00556adf
    LEA EAX,[ESP + 0x114]               ; 00556ae0
    PUSH EAX                            ; 00556ae7
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556ae8
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556aed
    LEA EAX,[ESP + 0x388]               ; 00556af0
    PUSH EAX                            ; 00556af7
    LEA EAX,[ESP + 0x2cc]               ; 00556af8
    PUSH dword ptr [ESP + 0x3c8]        ; 00556aff
    PUSH EAX                            ; 00556b06
    LEA EAX,[ESP + 0x114]               ; 00556b07
    PUSH EAX                            ; 00556b0e
    CALL core_dtri.cpp_FUN_00490a40     ; 00556b0f
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00556b14
    OR EBP,EAX                          ; 00556b17
    JZ 0x00556ba6                       ; 00556b19
        ;   XREF to: 00556ba6 (CONDITIONAL_JUMP)  ; LAB_00556ba6
    FLD float ptr [ESP + 0x12c]         ; 00556b1f
    FLD float ptr [ESP + 0x130]         ; 00556b26
    FLD float ptr [ESP + 0x134]         ; 00556b2d
    LEA EDI,[ESP + 0x2b0]               ; 00556b34
    LEA ESI,[ESP + 0x370]               ; 00556b3b
    FXCH ST2                            ; 00556b42
    FCHS                                ; 00556b44
    FXCH                                ; 00556b46
    FCHS                                ; 00556b48
    FXCH ST2                            ; 00556b4a
    FCHS                                ; 00556b4c
    FXCH ST2                            ; 00556b4e
    FSTP float ptr [ESP + 0x374]        ; 00556b50
    FXCH                                ; 00556b57
    FSTP float ptr [ESP + 0x378]        ; 00556b59
    FSTP float ptr [ESP + 0x370]        ; 00556b60
    MOVSD ES:EDI,ESI                    ; 00556b67
    MOVSD ES:EDI,ESI                    ; 00556b68
    MOVSD ES:EDI,ESI                    ; 00556b69
    LEA EAX,[ESP + 0x2b0]               ; 00556b6a
    LEA ESI,[ESP + 0x2ec]               ; 00556b71
    CMP ESI,EAX                         ; 00556b78
    JZ 0x00556ba6                       ; 00556b7a
        ;   XREF to: 00556ba6 (CONDITIONAL_JUMP)  ; LAB_00556ba6
    MOV EAX,dword ptr [ESP + 0x2b0]     ; 00556b7c
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00556b83
    MOV EAX,dword ptr [ESP + 0x2b4]     ; 00556b8a
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00556b91
    MOV EAX,dword ptr [ESP + 0x2b8]     ; 00556b98
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00556b9f
    LEA EAX,[ESP + 0x24]                ; 00556ba6
        ;   Label: LAB_00556ba6
    PUSH EAX                            ; 00556baa
    LEA EAX,[ESP + 0x1c]                ; 00556bab
    PUSH EAX                            ; 00556baf
    LEA EAX,[ESP + 0x8]                 ; 00556bb0
    PUSH EAX                            ; 00556bb4
    LEA EAX,[ESP + 0xdc]                ; 00556bb5
    PUSH EAX                            ; 00556bbc
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556bbd
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556bc2
    LEA EAX,[ESP + 0x388]               ; 00556bc5
    PUSH EAX                            ; 00556bcc
    LEA EAX,[ESP + 0x2cc]               ; 00556bcd
    PUSH dword ptr [ESP + 0x3c8]        ; 00556bd4
    PUSH EAX                            ; 00556bdb
    LEA EAX,[ESP + 0xdc]                ; 00556bdc
    PUSH EAX                            ; 00556be3
    OR EBX,EBP                          ; 00556be4
    CALL core_dtri.cpp_FUN_00490a40     ; 00556be6
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00556beb
    MOV EBP,EAX                         ; 00556bee
    LEA EAX,[ESP + 0xc]                 ; 00556bf0
    PUSH EAX                            ; 00556bf4
    LEA EAX,[ESP + 0x28]                ; 00556bf5
    PUSH EAX                            ; 00556bf9
    LEA EAX,[ESP + 0x8]                 ; 00556bfa
    PUSH EAX                            ; 00556bfe
    LEA EAX,[ESP + 0xdc]                ; 00556bff
    PUSH EAX                            ; 00556c06
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556c07
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556c0c
    LEA EAX,[ESP + 0x388]               ; 00556c0f
    PUSH EAX                            ; 00556c16
    LEA EAX,[ESP + 0x2cc]               ; 00556c17
    PUSH dword ptr [ESP + 0x3c8]        ; 00556c1e
    PUSH EAX                            ; 00556c25
    LEA EAX,[ESP + 0xdc]                ; 00556c26
    PUSH EAX                            ; 00556c2d
    CALL core_dtri.cpp_FUN_00490a40     ; 00556c2e
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00556c33
    OR EBP,EAX                          ; 00556c36
    JZ 0x00556cc5                       ; 00556c38
        ;   XREF to: 00556cc5 (CONDITIONAL_JUMP)  ; LAB_00556cc5
    FLD float ptr [ESP + 0xf4]          ; 00556c3e
    FLD float ptr [ESP + 0xf8]          ; 00556c45
    FLD float ptr [ESP + 0xfc]          ; 00556c4c
    LEA EDI,[ESP + 0x274]               ; 00556c53
    LEA ESI,[ESP + 0x358]               ; 00556c5a
    FXCH ST2                            ; 00556c61
    FCHS                                ; 00556c63
    FXCH                                ; 00556c65
    FCHS                                ; 00556c67
    FXCH ST2                            ; 00556c69
    FCHS                                ; 00556c6b
    FXCH ST2                            ; 00556c6d
    FSTP float ptr [ESP + 0x35c]        ; 00556c6f
    FXCH                                ; 00556c76
    FSTP float ptr [ESP + 0x360]        ; 00556c78
    FSTP float ptr [ESP + 0x358]        ; 00556c7f
    MOVSD ES:EDI,ESI                    ; 00556c86
    MOVSD ES:EDI,ESI                    ; 00556c87
    MOVSD ES:EDI,ESI                    ; 00556c88
    LEA EAX,[ESP + 0x2ec]               ; 00556c89
    LEA ESI,[ESP + 0x274]               ; 00556c90
    CMP EAX,ESI                         ; 00556c97
    JZ 0x00556cc5                       ; 00556c99
        ;   XREF to: 00556cc5 (CONDITIONAL_JUMP)  ; LAB_00556cc5
    MOV EAX,dword ptr [ESP + 0x274]     ; 00556c9b
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00556ca2
    MOV EAX,dword ptr [ESP + 0x278]     ; 00556ca9
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00556cb0
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00556cb7
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00556cbe
    LEA EAX,[ESP + 0x54]                ; 00556cc5
        ;   Label: LAB_00556cc5
    PUSH EAX                            ; 00556cc9
    LEA EAX,[ESP + 0x40]                ; 00556cca
    PUSH EAX                            ; 00556cce
    LEA EAX,[ESP + 0x38]                ; 00556ccf
    PUSH EAX                            ; 00556cd3
    LEA EAX,[ESP + 0xa4]                ; 00556cd4
    PUSH EAX                            ; 00556cdb
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556cdc
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556ce1
    LEA EAX,[ESP + 0x388]               ; 00556ce4
    PUSH EAX                            ; 00556ceb
    LEA EAX,[ESP + 0x2cc]               ; 00556cec
    PUSH dword ptr [ESP + 0x3c8]        ; 00556cf3
    PUSH EAX                            ; 00556cfa
    LEA EAX,[ESP + 0xa4]                ; 00556cfb
    PUSH EAX                            ; 00556d02
    OR EBX,EBP                          ; 00556d03
    CALL core_dtri.cpp_FUN_00490a40     ; 00556d05
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00556d0a
    MOV EBP,EAX                         ; 00556d0d
    LEA EAX,[ESP + 0x48]                ; 00556d0f
    PUSH EAX                            ; 00556d13
    LEA EAX,[ESP + 0x58]                ; 00556d14
    PUSH EAX                            ; 00556d18
    LEA EAX,[ESP + 0x38]                ; 00556d19
    PUSH EAX                            ; 00556d1d
    LEA EAX,[ESP + 0xa4]                ; 00556d1e
    PUSH EAX                            ; 00556d25
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0 ; 00556d26
        ;   XREF to: 0048fed0 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0048fed0(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    ADD ESP,0x10                        ; 00556d2b
    LEA EAX,[ESP + 0x388]               ; 00556d2e
    PUSH EAX                            ; 00556d35
    LEA EAX,[ESP + 0x2cc]               ; 00556d36
    PUSH dword ptr [ESP + 0x3c8]        ; 00556d3d
    PUSH EAX                            ; 00556d44
    LEA EAX,[ESP + 0xa4]                ; 00556d45
    PUSH EAX                            ; 00556d4c
    CALL core_dtri.cpp_FUN_00490a40     ; 00556d4d
        ;   XREF to: 00490a40 (UNCONDITIONAL_CALL)  ; int core_dtri.cpp_FUN_00490a40(CDemonTriangle * triangle, CVector3f * position, float search_radius, float * out_height)
    ADD ESP,0x10                        ; 00556d52
    OR EBP,EAX                          ; 00556d55
    JZ 0x00556de4                       ; 00556d57
        ;   XREF to: 00556de4 (CONDITIONAL_JUMP)  ; LAB_00556de4
    FLD float ptr [ESP + 0xbc]          ; 00556d5d
    FLD float ptr [ESP + 0xc0]          ; 00556d64
    FLD float ptr [ESP + 0xc4]          ; 00556d6b
    LEA EDI,[ESP + 0x25c]               ; 00556d72
    LEA ESI,[ESP + 0x31c]               ; 00556d79
    FXCH ST2                            ; 00556d80
    FCHS                                ; 00556d82
    FXCH                                ; 00556d84
    FCHS                                ; 00556d86
    FXCH ST2                            ; 00556d88
    FCHS                                ; 00556d8a
    FXCH ST2                            ; 00556d8c
    FSTP float ptr [ESP + 0x320]        ; 00556d8e
    FXCH                                ; 00556d95
    FSTP float ptr [ESP + 0x324]        ; 00556d97
    FSTP float ptr [ESP + 0x31c]        ; 00556d9e
    MOVSD ES:EDI,ESI                    ; 00556da5
    MOVSD ES:EDI,ESI                    ; 00556da6
    MOVSD ES:EDI,ESI                    ; 00556da7
    LEA EAX,[ESP + 0x2ec]               ; 00556da8
    LEA ESI,[ESP + 0x25c]               ; 00556daf
    CMP EAX,ESI                         ; 00556db6
    JZ 0x00556de4                       ; 00556db8
        ;   XREF to: 00556de4 (CONDITIONAL_JUMP)  ; LAB_00556de4
    MOV EAX,dword ptr [ESP + 0x25c]     ; 00556dba
    MOV dword ptr [ESP + 0x2ec],EAX     ; 00556dc1
    MOV EAX,dword ptr [ESP + 0x260]     ; 00556dc8
    MOV dword ptr [ESP + 0x2f0],EAX     ; 00556dcf
    MOV EAX,dword ptr [ESP + 0x264]     ; 00556dd6
    MOV dword ptr [ESP + 0x2f4],EAX     ; 00556ddd
    OR EBX,EBP                          ; 00556de4
        ;   Label: LAB_00556de4
    JZ 0x00556511                       ; 00556de6
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00556dec
    MOV EBX,dword ptr [ESP + 0x3a0]     ; 00556df3
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00556dfa
    LEA EAX,[ESP + 0x2ec]               ; 00556e00
    PUSH EAX                            ; 00556e07
    PUSH EBX                            ; 00556e08
    LEA ESI,[ESP + 0x30c]               ; 00556e09
    LEA EDI,[ESP + 0x384]               ; 00556e10
    CALL core_actor.cpp_FUN_00408ac0    ; 00556e17
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[ESP + 0x30c]               ; 00556e1c
    ADD ESP,0x8                         ; 00556e23
    LEA EAX,[ESP + 0x37c]               ; 00556e26
    MOV EDX,dword ptr [ESP + 0x39c]     ; 00556e2d
    MOVSD ES:EDI,ESI                    ; 00556e34
    MOVSD ES:EDI,ESI                    ; 00556e35
    MOVSD ES:EDI,ESI                    ; 00556e36
    CMP EAX,EDX                         ; 00556e37
    JZ 0x00556511                       ; 00556e39
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV EAX,dword ptr [ESP + 0x37c]     ; 00556e3f
    MOV dword ptr [EDX],EAX             ; 00556e46
    MOV EAX,dword ptr [ESP + 0x380]     ; 00556e48
    MOV dword ptr [EDX + 0x4],EAX       ; 00556e4f
    MOV EAX,dword ptr [ESP + 0x384]     ; 00556e52
    MOV dword ptr [EDX + 0x8],EAX       ; 00556e59
    JMP 0x00556511                      ; 00556e5c
        ;   XREF to: 00556511 (UNCONDITIONAL_JUMP)  ; LAB_00556511
    MOV EBP,dword ptr [ESP + 0x1d4]     ; 00556e61
        ;   Label: LAB_00556e61
    TEST EBP,EBP                        ; 00556e68
    JZ 0x00556641                       ; 00556e6a
        ;   XREF to: 00556641 (CONDITIONAL_JUMP)  ; LAB_00556641
    PUSH EBP                            ; 00556e70
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900 ; 00556e71
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00556e76
    MOV EDX,dword ptr [EAX + 0x358]     ; 00556e79
    MOV EBX,EAX                         ; 00556e7f
    TEST EDX,EDX                        ; 00556e81
    JNZ 0x00556ea9                      ; 00556e83
        ;   XREF to: 00556ea9 (CONDITIONAL_JUMP)  ; LAB_00556ea9
    PUSH EAX                            ; 00556e85
    MOV ECX,0x5f0d85                    ; 00556e86 | = "..\\core\\setcolid.cpp"
    MOV ESI,0xcb                        ; 00556e8b
    PUSH 0x5f0d9a                       ; 00556e90 | = "info.keyFramedModelInstancePtr != NUL..."
    MOV dword ptr [0x01d1d400],ECX      ; 00556e95 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00556e9b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00556ea1
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00556ea6
    FLD float ptr [ESP + 0x2c8]         ; 00556ea9
        ;   Label: LAB_00556ea9
    FLD float ptr [ESP + 0x2cc]         ; 00556eb0
    FLD float ptr [ESP + 0x2d0]         ; 00556eb7
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00556ebe
    FLD float ptr [ESP + 0x388]         ; 00556ec5
    ADD EAX,0x30                        ; 00556ecc
    LEA EDI,[ESP + 0x2a4]               ; 00556ecf
    LEA ESI,[ESP + 0x2f8]               ; 00556ed6
    FXCH ST3                            ; 00556edd
    FSUB float ptr [EAX + -0x10]        ; 00556edf
    FXCH ST2                            ; 00556ee2
    FSUB float ptr [EAX + -0xc]         ; 00556ee4
    FXCH                                ; 00556ee7
    FSUB float ptr [EAX + -0x8]         ; 00556ee9
    FXCH ST2                            ; 00556eec
    FSTP float ptr [ESP + 0x2f8]        ; 00556eee
    FSTP float ptr [ESP + 0x2fc]        ; 00556ef5
    FSTP float ptr [ESP + 0x300]        ; 00556efc
    MOVSD ES:EDI,ESI                    ; 00556f03
    MOVSD ES:EDI,ESI                    ; 00556f04
    MOVSD ES:EDI,ESI                    ; 00556f05
    PUSH EAX                            ; 00556f06
    FSUB float ptr [EAX + -0xc]         ; 00556f07
    LEA EAX,[ESP + 0x394]               ; 00556f0a
    PUSH EAX                            ; 00556f11
    LEA EAX,[ESP + 0x2ac]               ; 00556f12
    PUSH dword ptr [ESP + 0x3cc]        ; 00556f19
    PUSH EAX                            ; 00556f20
    PUSH 0x0                            ; 00556f21
    PUSH EBX                            ; 00556f23
    FSTP float ptr [ESP + 0x3a8]        ; 00556f24
    CALL core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00468250 ; 00556f2b
        ;   XREF to: 00468250 (UNCONDITIONAL_CALL)  ; int core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00468250(CKeyFramedModel * this_ptr, int frame_index, CVector3f * position, float search_radius, ...)
    ADD ESP,0x18                        ; 00556f30
    TEST EAX,EAX                        ; 00556f33
    JZ 0x00556511                       ; 00556f35
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 00556f3b
    MOV EBX,dword ptr [ESP + 0x3a0]     ; 00556f42
    MOV EBP,0x3f800000                  ; 00556f49
    MOV EDX,dword ptr [ESP + 0x39c]     ; 00556f4e
    MOV dword ptr [EAX + 0x14d144],EBX  ; 00556f55
    XOR EDI,EDI                         ; 00556f5b
    FLD float ptr [ESP + 0x390]         ; 00556f5d
    MOV EAX,EBX                         ; 00556f64
    FADD float ptr [EBX + 0x24]         ; 00556f66
    XOR EAX,EBX                         ; 00556f69
    FSTP float ptr [ESP + 0x388]        ; 00556f6b
    MOV dword ptr [ESP + 0x2e0],EDI     ; 00556f72
    MOV dword ptr [ESP + 0x2e8],EAX     ; 00556f79
    LEA EAX,[ESP + 0x2e0]               ; 00556f80
    MOV dword ptr [ESP + 0x2e4],EBP     ; 00556f87
    CMP EAX,EDX                         ; 00556f8e
    JZ 0x00556511                       ; 00556f90
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV dword ptr [EDX],EDI             ; 00556f96
    MOV EAX,dword ptr [ESP + 0x2e4]     ; 00556f98
    MOV dword ptr [EDX + 0x4],EAX       ; 00556f9f
    MOV EAX,dword ptr [ESP + 0x2e8]     ; 00556fa2
    MOV dword ptr [EDX + 0x8],EAX       ; 00556fa9
    JMP 0x00556511                      ; 00556fac
        ;   XREF to: 00556511 (UNCONDITIONAL_JUMP)  ; LAB_00556511
    LEA EAX,[ESP + 0x2c8]               ; 00556fb1
        ;   Label: LAB_00556fb1
    PUSH EAX                            ; 00556fb8
    MOV ECX,dword ptr [ESP + 0x3a4]     ; 00556fb9
    PUSH ECX                            ; 00556fc0
    LEA ESI,[ESP + 0x330]               ; 00556fc1
    LEA EDI,[ESP + 0x270]               ; 00556fc8
    CALL core_actor.cpp_FUN_00408bb0    ; 00556fcf
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    ADD ESP,0x8                         ; 00556fd4
    LEA ESI,[ESP + 0x328]               ; 00556fd7
    MOV EAX,dword ptr [ESP + 0x3a0]     ; 00556fde
    MOVSD ES:EDI,ESI                    ; 00556fe5
    MOVSD ES:EDI,ESI                    ; 00556fe6
    MOVSD ES:EDI,ESI                    ; 00556fe7
    FLD float ptr [ESP + 0x388]         ; 00556fe8
    FSUB float ptr [EAX + 0x24]         ; 00556fef
    FSTP float ptr [ESP + 0x38c]        ; 00556ff2
    MOV EBX,dword ptr [EAX + 0x154]     ; 00556ff9
    LEA EAX,[ESP + 0x38c]               ; 00556fff
    PUSH EAX                            ; 00557006
    LEA EAX,[ESP + 0x26c]               ; 00557007
    PUSH dword ptr [ESP + 0x3c8]        ; 0055700e
    PUSH EAX                            ; 00557015
    MOV ESI,dword ptr [ESP + 0x3ac]     ; 00557016
    PUSH ESI                            ; 0055701d
    CALL dword ptr [EBX + 0xc0]         ; 0055701e
    ADD ESP,0x10                        ; 00557024
    TEST EAX,EAX                        ; 00557027
    JZ 0x00556511                       ; 00557029
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV EAX,dword ptr [ESP + 0x3bc]     ; 0055702f
    MOV EBP,0x3f800000                  ; 00557036
    MOV EDX,dword ptr [ESP + 0x39c]     ; 0055703b
    MOV dword ptr [EAX + 0x14d144],ESI  ; 00557042
    XOR EDI,EDI                         ; 00557048
    FLD float ptr [ESP + 0x38c]         ; 0055704a
    MOV EAX,ESI                         ; 00557051
    FADD float ptr [ESI + 0x24]         ; 00557053
    XOR EAX,ESI                         ; 00557056
    FSTP float ptr [ESP + 0x388]        ; 00557058
    MOV dword ptr [ESP + 0x340],EDI     ; 0055705f
    MOV dword ptr [ESP + 0x348],EAX     ; 00557066
    LEA EAX,[ESP + 0x340]               ; 0055706d
    MOV dword ptr [ESP + 0x344],EBP     ; 00557074
    CMP EAX,EDX                         ; 0055707b
    JZ 0x00556511                       ; 0055707d
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
    MOV dword ptr [EDX],EDI             ; 00557083
    MOV EAX,dword ptr [ESP + 0x344]     ; 00557085
    MOV dword ptr [EDX + 0x4],EAX       ; 0055708c
    MOV EAX,dword ptr [ESP + 0x348]     ; 0055708f
    MOV dword ptr [EDX + 0x8],EAX       ; 00557096
    JMP 0x00556511                      ; 00557099
        ;   XREF to: 00556511 (UNCONDITIONAL_JUMP)  ; LAB_00556511
    JBE 0x00556511                      ; 0055709e
        ;   XREF to: 00556511 (CONDITIONAL_JUMP)  ; LAB_00556511
        ;   Label: LAB_0055709e
    CMP EBX,0x3                         ; 005570a4
    JZ 0x00556fb1                       ; 005570a7
        ;   XREF to: 00556fb1 (CONDITIONAL_JUMP)  ; LAB_00556fb1
    MOV ECX,0x5f0de6                    ; 005570ad | = "..\\core\\setcolid.cpp"
        ;   Label: LAB_005570ad
    MOV EBX,0x12b                       ; 005570b2
    PUSH 0x5f0dfb                       ; 005570b7 | = "Invalid collision type!"
    MOV dword ptr [0x01d1d400],ECX      ; 005570bc | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005570c2 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005570c8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005570cd
    JMP 0x00556511                      ; 005570d0
        ;   XREF to: 00556511 (UNCONDITIONAL_JUMP)  ; LAB_00556511
    PUSH ECX                            ; 005570d5
        ;   Label: LAB_005570d5
    MOV EBX,dword ptr [ECX + 0x154]     ; 005570d6
    CALL dword ptr [EBX + 0x44]         ; 005570dc
    ADD ESP,0x4                         ; 005570df
    MOV EBX,dword ptr [ESP + 0x3bc]     ; 005570e2
    MOV dword ptr [EBX + 0x14d134],EAX  ; 005570e9
    MOV EAX,dword ptr [ESP + 0x388]     ; 005570ef
    ADD ESP,0x3a8                       ; 005570f6
    POP EBP                             ; 005570fc
    POP EDI                             ; 005570fd
    POP ESI                             ; 005570fe
    POP EBX                             ; 005570ff
    RET                                 ; 00557100

