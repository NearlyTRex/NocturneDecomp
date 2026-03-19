; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_actor_cpp_CDemonActor_rayIntersect_FUN_00409470(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_hit_normal,SCollisionInfo *collision_info,int bbox_type,CBoundingBox3D *ray_bbox)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   ray_origin
; CVector3f *      Stack[0xc]:4   ray_direction
; CVector3f *      Stack[0x10]:4   out_hit_normal
; SCollisionInfo * Stack[0x14]:4   collision_info
; int              Stack[0x18]:4   bbox_type
; CBoundingBox3D * Stack[0x1c]:4   ray_bbox
; Local Variables:
; float            Stack[-0xa0]:4  local_a0
; CBoundingBox3D   Stack[-0x9c]:24  local_9c
; CBoundingBox3D   Stack[-0x84]:24  local_84
; CBoundingBox3D   Stack[-0x6c]:24  local_6c
; CVector3f        Stack[-0x54]:12  local_54
; CVector3f        Stack[-0x48]:12  local_48
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  local_30
; CVector3f        Stack[-0x24]:12  CStack_24
; float            Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_testRayIntersection_FUN_004093f0 at 0040944c
;   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 at 00572c8e
;   core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_005b8950 at 005b8d29
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00613840
;   TerminatedCString s_CDemonActor_rayIntersect_00613852
;   CDemonSet* g_CDemonSetPtr = 03114278
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 g_CDemonSetInstance.skip_exact_collisions
;   int g_DeformableModelRayHitPartIndex
;   CVector3f g_DeformableModelRayHitNormal
;   undefined4 g_DeformableModelRayHitNormal.y
;   undefined4 g_DeformableModelRayHitNormal.z
;   int g_DeformableModelRayHitLodIndex
;   int g_DeformableModelRayHitTriangleIndex
;
; Called Functions:
;   core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_rayCylinderIntersect_FUN_00408340
;   core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010
;   core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
;   core_box.cpp_CBoundingBox3D_expand_FUN_00420240
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_skeleton.cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00409470
        ;   Label: core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470
    PUSH ESI                            ; 00409471
    PUSH EDI                            ; 00409472
    PUSH EBP                            ; 00409473
    MOV EBP,ESP                         ; 00409474
    SUB ESP,0xa8                        ; 00409476
    NOP                                 ; 0040947c
    NOP                                 ; 0040947d
    NOP                                 ; 0040947e
    MOV EDI,dword ptr [EBP + 0x14]      ; 0040947f
    MOV ESI,dword ptr [EBP + 0x18]      ; 00409482
    MOV EBX,dword ptr [EBP + 0x20]      ; 00409485
    MOV EDX,dword ptr [EBP + 0x28]      ; 00409488
    TEST EDX,EDX                        ; 0040948b
    JNZ 0x004094a8                      ; 0040948d
        ;   XREF to: 004094a8 (CONDITIONAL_JUMP)  ; LAB_004094a8
    MOV dword ptr [EBP + -0x8],0x40000000 ; 0040948f
        ;   Label: LAB_0040948f
    NOP                                 ; 00409496
    NOP                                 ; 00409497
    NOP                                 ; 00409498
    NOP                                 ; 00409499
    MOV EAX,dword ptr [EBP + -0x8]      ; 0040949a
    NOP                                 ; 0040949d
    NOP                                 ; 0040949e
    NOP                                 ; 0040949f
    NOP                                 ; 004094a0
    MOV ESP,EBP                         ; 004094a1
    POP EBP                             ; 004094a3
    POP EDI                             ; 004094a4
    POP ESI                             ; 004094a5
    POP EBX                             ; 004094a6
    RET                                 ; 004094a7
    PUSH EDX                            ; 004094a8
        ;   Label: LAB_004094a8
    MOV EAX,dword ptr [EBP + 0x24]      ; 004094a9
    PUSH EAX                            ; 004094ac
    LEA EAX,[ESP + 0x24]                ; 004094ad
    PUSH EAX                            ; 004094b1
    PUSH EDI                            ; 004094b2
    CALL core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270 ; 004094b3
        ;   XREF to: 00409270 (UNCONDITIONAL_CALL)  ; CBoundingBox3D * core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_00409270(CDemonActor * this_ptr, CBoundingBox3D * output_bbox, SCollisionInfo * collision_info, int bounding_box_type)
    ADD ESP,0x10                        ; 004094b8
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004094bb
    TEST EDX,EDX                        ; 004094be
    JNZ 0x00409666                      ; 004094c0
        ;   XREF to: 00409666 (CONDITIONAL_JUMP)  ; LAB_00409666
    LEA EAX,[EBP + -0x5c]               ; 004094c6
    NOP                                 ; 004094c9
    MOV EDX,ESI                         ; 004094ca
    CMP EAX,ESI                         ; 004094cc
    JZ 0x004094e4                       ; 004094ce
        ;   XREF to: 004094e4 (CONDITIONAL_JUMP)  ; LAB_004094e4
    MOV EAX,dword ptr [ESI]             ; 004094d0
    MOV dword ptr [EBP + -0x5c],EAX     ; 004094d2
    NOP                                 ; 004094d5
    MOV EAX,dword ptr [ESI + 0x4]       ; 004094d6
    MOV dword ptr [EBP + -0x58],EAX     ; 004094d9
    NOP                                 ; 004094dc
    MOV EAX,dword ptr [ESI + 0x8]       ; 004094dd
    MOV dword ptr [EBP + -0x54],EAX     ; 004094e0
    NOP                                 ; 004094e3
    LEA EAX,[EBP + -0x50]               ; 004094e4
        ;   Label: LAB_004094e4
    NOP                                 ; 004094e7
    CMP EAX,EDX                         ; 004094e8
    JZ 0x00409500                       ; 004094ea
        ;   XREF to: 00409500 (CONDITIONAL_JUMP)  ; LAB_00409500
    MOV EAX,dword ptr [EDX]             ; 004094ec
    MOV dword ptr [EBP + -0x50],EAX     ; 004094ee
    NOP                                 ; 004094f1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004094f2
    MOV dword ptr [EBP + -0x4c],EAX     ; 004094f5
    NOP                                 ; 004094f8
    MOV EAX,dword ptr [EDX + 0x8]       ; 004094f9
    MOV dword ptr [EBP + -0x48],EAX     ; 004094fc
    NOP                                 ; 004094ff
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00409500
        ;   Label: LAB_00409500
    FLD float ptr [ESI]                 ; 00409503
    FADD float ptr [EAX]                ; 00409505
    FSTP float ptr [EBP + -0x38]        ; 00409507
    NOP                                 ; 0040950a
    FLD float ptr [ESI + 0x4]           ; 0040950b
    FADD float ptr [EAX + 0x4]          ; 0040950e
    FSTP float ptr [EBP + -0x34]        ; 00409511
    NOP                                 ; 00409514
    FLD float ptr [ESI + 0x8]           ; 00409515
    FADD float ptr [EAX + 0x8]          ; 00409518
    LEA EAX,[EBP + -0x38]               ; 0040951b
    NOP                                 ; 0040951e
    PUSH EAX                            ; 0040951f
    LEA EAX,[EBP + -0x5c]               ; 00409520
    NOP                                 ; 00409523
    PUSH EAX                            ; 00409524
    FSTP float ptr [EBP + -0x30]        ; 00409525
    NOP                                 ; 00409528
    NOP                                 ; 00409529
    NOP                                 ; 0040952a
    NOP                                 ; 0040952b
    CALL core_box.cpp_CBoundingBox3D_expand_FUN_00420240 ; 0040952c
        ;   XREF to: 00420240 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBoundingBox3D_expand_FUN_00420240(CBoundingBox3D * this_ptr, CVector3f * point)
    ADD ESP,0x8                         ; 00409531
    LEA EAX,[ESP + 0x1c]                ; 00409534
    PUSH EAX                            ; 00409538
    LEA EAX,[EBP + -0x5c]               ; 00409539
    NOP                                 ; 0040953c
    PUSH EAX                            ; 0040953d
    CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010 ; 0040953e
        ;   XREF to: 00421010 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 00409543
    TEST EAX,EAX                        ; 00409546
    JZ 0x0040948f                       ; 00409548
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    PUSH ESI                            ; 0040954e
        ;   Label: LAB_0040954e
    LEA EAX,[EBP + -0x2c]               ; 0040954f
    NOP                                 ; 00409552
    NOP                                 ; 00409553
    NOP                                 ; 00409554
    NOP                                 ; 00409555
    PUSH EAX                            ; 00409556
    PUSH EDI                            ; 00409557
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00409558
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0040955d
    MOV ECX,dword ptr [EBP + 0x1c]      ; 00409560
    PUSH ECX                            ; 00409563
    LEA EAX,[EBP + -0x44]               ; 00409564
    NOP                                 ; 00409567
    PUSH EAX                            ; 00409568
    PUSH EDI                            ; 00409569
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0040956a
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 0040956f
    MOV ESI,dword ptr [EBP + 0x28]      ; 00409572
    CMP ESI,0x2                         ; 00409575
    JNC 0x004096cb                      ; 00409578
        ;   XREF to: 004096cb (CONDITIONAL_JUMP)  ; LAB_004096cb
    CMP ESI,0x1                         ; 0040957e
    JNZ 0x004096d2                      ; 00409581
        ;   XREF to: 004096d2 (CONDITIONAL_JUMP)  ; LAB_004096d2
    LEA EAX,[EBP + -0x20]               ; 00409587
    NOP                                 ; 0040958a
    NOP                                 ; 0040958b
    NOP                                 ; 0040958c
    NOP                                 ; 0040958d
    PUSH EAX                            ; 0040958e
    LEA EAX,[EBP + -0x44]               ; 0040958f
    NOP                                 ; 00409592
    PUSH EAX                            ; 00409593
    LEA EAX,[EBP + -0x2c]               ; 00409594
    NOP                                 ; 00409597
    NOP                                 ; 00409598
    NOP                                 ; 00409599
    NOP                                 ; 0040959a
    PUSH EAX                            ; 0040959b
    LEA EDX,[EBP + -0x74]               ; 0040959c
    NOP                                 ; 0040959f
    PUSH EDX                            ; 004095a0
    MOV EAX,dword ptr [EDI + 0x154]     ; 004095a1
    PUSH EDI                            ; 004095a7
    CALL dword ptr [EAX + 0x14]         ; 004095a8
    ADD ESP,0x8                         ; 004095ab
    PUSH EAX                            ; 004095ae
    CALL core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940 ; 004095af
        ;   XREF to: 00420940 (UNCONDITIONAL_CALL)  ; float core_box.cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940(CBoundingBox3D * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    MOV dword ptr [EBP + -0x4],EAX      ; 004095b4
        ;   Label: LAB_004095b4
    NOP                                 ; 004095b7
    NOP                                 ; 004095b8
    NOP                                 ; 004095b9
    NOP                                 ; 004095ba
    FLD float ptr [EBP + -0x4]          ; 004095bb
    NOP                                 ; 004095be
    NOP                                 ; 004095bf
    NOP                                 ; 004095c0
    NOP                                 ; 004095c1
    ADD ESP,0x10                        ; 004095c2
    FSTP float ptr [ESP + 0x18]         ; 004095c5
    FLD float ptr [ESP + 0x18]          ; 004095c9
        ;   Label: LAB_004095c9
    FLDZ                                ; 004095cd
    FXCH                                ; 004095cf
    FSTP double ptr [ESP + 0x8]         ; 004095d1
    FCOMP double ptr [ESP + 0x8]        ; 004095d5
    FNSTSW AX                           ; 004095d9
    SAHF                                ; 004095db
    JA 0x0040948f                       ; 004095dc
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    FLD1                                ; 004095e2
    FCOMP double ptr [ESP + 0x8]        ; 004095e4
    FNSTSW AX                           ; 004095e8
    SAHF                                ; 004095ea
    JC 0x0040948f                       ; 004095eb
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    MOV dword ptr [EBX + 0x10],0xffffffff ; 004095f1
    MOV dword ptr [EBX + 0x14],0xffffffff ; 004095f8
    MOV dword ptr [EBX + 0x18],0xffffffff ; 004095ff
    MOV EAX,[0x006810c8]                ; 00409606 | g_CDemonSetPtr
    MOV dword ptr [EBX + 0xc],0xffffffff ; 0040960b
    MOV EAX,dword ptr [EAX + 0x15f6dc]  ; 00409612 | g_CDemonSetInstance.skip_exact_collisions
    TEST EAX,EAX                        ; 00409618
    JZ 0x004096f9                       ; 0040961a
        ;   XREF to: 004096f9 (CONDITIONAL_JUMP)  ; LAB_004096f9
    LEA EAX,[EBP + -0x20]               ; 00409620
        ;   Label: LAB_00409620
    NOP                                 ; 00409623
    NOP                                 ; 00409624
    NOP                                 ; 00409625
    NOP                                 ; 00409626
    PUSH EAX                            ; 00409627
    LEA EAX,[EBP + -0x14]               ; 00409628
    NOP                                 ; 0040962b
    NOP                                 ; 0040962c
    NOP                                 ; 0040962d
    NOP                                 ; 0040962e
    PUSH EAX                            ; 0040962f
    PUSH EDI                            ; 00409630
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00409631
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00409636
    CMP EBX,EAX                         ; 00409639
    JZ 0x0040964d                       ; 0040963b
        ;   XREF to: 0040964d (CONDITIONAL_JUMP)  ; LAB_0040964d
    MOV EDX,dword ptr [EAX]             ; 0040963d
    MOV dword ptr [EBX],EDX             ; 0040963f
    MOV EDX,dword ptr [EAX + 0x4]       ; 00409641
    MOV dword ptr [EBX + 0x4],EDX       ; 00409644
    MOV EDX,dword ptr [EAX + 0x8]       ; 00409647
    MOV dword ptr [EBX + 0x8],EDX       ; 0040964a
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040964d
        ;   Label: LAB_0040964d
    MOV dword ptr [EBP + -0x8],EAX      ; 00409651
    NOP                                 ; 00409654
    NOP                                 ; 00409655
    NOP                                 ; 00409656
    NOP                                 ; 00409657
    MOV EAX,dword ptr [EBP + -0x8]      ; 00409658
    NOP                                 ; 0040965b
    NOP                                 ; 0040965c
    NOP                                 ; 0040965d
    NOP                                 ; 0040965e
    MOV ESP,EBP                         ; 0040965f
    POP EBP                             ; 00409661
    POP EDI                             ; 00409662
    POP ESI                             ; 00409663
    POP EBX                             ; 00409664
    RET                                 ; 00409665
    LEA EAX,[ESP + 0x1c]                ; 00409666
        ;   Label: LAB_00409666
    PUSH EAX                            ; 0040966a
    PUSH EDX                            ; 0040966b
    CALL core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010 ; 0040966c
        ;   XREF to: 00421010 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_doesBoxIntersect_FUN_00421010(CBoundingBox3D * this_ptr, CBoundingBox3D * other)
    ADD ESP,0x8                         ; 00409671
    TEST EAX,EAX                        ; 00409674
    JNZ 0x0040954e                      ; 00409676
        ;   XREF to: 0040954e (CONDITIONAL_JUMP)  ; LAB_0040954e
    JMP 0x0040948f                      ; 0040967c
        ;   XREF to: 0040948f (UNCONDITIONAL_JUMP)  ; LAB_0040948f
    LEA EAX,[EBP + -0x20]               ; 00409681
        ;   Label: LAB_00409681
    NOP                                 ; 00409684
    NOP                                 ; 00409685
    NOP                                 ; 00409686
    NOP                                 ; 00409687
    PUSH EAX                            ; 00409688
    LEA EAX,[EBP + -0x44]               ; 00409689
    NOP                                 ; 0040968c
    PUSH EAX                            ; 0040968d
    LEA EAX,[EBP + -0x2c]               ; 0040968e
    NOP                                 ; 00409691
    NOP                                 ; 00409692
    NOP                                 ; 00409693
    NOP                                 ; 00409694
    PUSH EAX                            ; 00409695
    MOV ECX,dword ptr [EBP + 0x24]      ; 00409696
    PUSH ECX                            ; 00409699
    CALL core_actor.cpp_rayCylinderIntersect_FUN_00408340 ; 0040969a
        ;   XREF to: 00408340 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_rayCylinderIntersect_FUN_00408340(SCollisionInfo * collision_info, CVector3f * ray_origin, CVector3f * ray_direction, CVector3f * out_normal)
    JMP 0x004095b4                      ; 0040969f
        ;   XREF to: 004095b4 (UNCONDITIONAL_JUMP)  ; LAB_004095b4
    LEA EAX,[EBP + -0x30]               ; 004096a4
        ;   Label: LAB_004096a4
    NOP                                 ; 004096a7
    NOP                                 ; 004096a8
    NOP                                 ; 004096a9
    NOP                                 ; 004096aa
    PUSH EAX                            ; 004096ab
    LEA EAX,[EBP + -0x54]               ; 004096ac
    NOP                                 ; 004096af
    PUSH EAX                            ; 004096b0
    LEA EAX,[EBP + -0x3c]               ; 004096b1
    NOP                                 ; 004096b4
    NOP                                 ; 004096b5
    NOP                                 ; 004096b6
    NOP                                 ; 004096b7
    PUSH EAX                            ; 004096b8
    MOV EDX,dword ptr [EDI + 0x154]     ; 004096b9
    PUSH EDI                            ; 004096bf
    CALL dword ptr [EDX + 0xb0]         ; 004096c0
    JMP 0x004095b4                      ; 004096c6
        ;   XREF to: 004095b4 (UNCONDITIONAL_JUMP)  ; LAB_004095b4
    JBE 0x00409681                      ; 004096cb
        ;   XREF to: 00409681 (CONDITIONAL_JUMP)  ; LAB_00409681
        ;   Label: LAB_004096cb
    CMP ESI,0x3                         ; 004096cd
    JZ 0x004096a4                       ; 004096d0
        ;   XREF to: 004096a4 (CONDITIONAL_JUMP)  ; LAB_004096a4
    MOV EAX,0x613840                    ; 004096d2 | = "..\\core\\actor.cpp"
        ;   Label: LAB_004096d2
    MOV EDX,0x45b                       ; 004096d7
    PUSH 0x613852                       ; 004096dc | = "CDemonActor::rayIntersect - Invalid c..."
    MOV [0x02f0ca48],EAX                ; 004096e1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004096e6 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004096ec
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004096f1
    JMP 0x004095c9                      ; 004096f4
        ;   XREF to: 004095c9 (UNCONDITIONAL_JUMP)  ; LAB_004095c9
    MOV EAX,dword ptr [EBP + 0x24]      ; 004096f9
        ;   Label: LAB_004096f9
    MOV ECX,dword ptr [EAX + 0x20]      ; 004096fc
    TEST ECX,ECX                        ; 004096ff
    JNZ 0x00409773                      ; 00409701
        ;   XREF to: 00409773 (CONDITIONAL_JUMP)  ; LAB_00409773
    CMP dword ptr [EAX + 0x24],0x0      ; 00409703
    JZ 0x00409620                       ; 00409707
        ;   XREF to: 00409620 (CONDITIONAL_JUMP)  ; LAB_00409620
    LEA EAX,[EBP + -0x40]               ; 0040970d
    NOP                                 ; 00409710
    NOP                                 ; 00409711
    NOP                                 ; 00409712
    NOP                                 ; 00409713
    PUSH EAX                            ; 00409714
    LEA EAX,[EBP + -0x64]               ; 00409715
    NOP                                 ; 00409718
    PUSH EAX                            ; 00409719
    LEA EAX,[EBP + -0x4c]               ; 0040971a
    NOP                                 ; 0040971d
    NOP                                 ; 0040971e
    NOP                                 ; 0040971f
    NOP                                 ; 00409720
    PUSH EAX                            ; 00409721
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409722
    PUSH ECX                            ; 00409725
    MOV EDX,dword ptr [EAX + 0x24]      ; 00409726
    PUSH EDX                            ; 00409729
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80 ; 0040972a
        ;   XREF to: 00478d80 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040972f
    PUSH EAX                            ; 00409732
    CALL core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0 ; 00409733
        ;   XREF to: 004781d0 (UNCONDITIONAL_CALL)  ; float core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_004781d0(CKeyFramedModel * this_ptr, int frame_index, CVector3f * ray_origin, CVector3f * ray_direction, ...)
    MOV dword ptr [EBP + -0x24],EAX     ; 00409738
    NOP                                 ; 0040973b
    NOP                                 ; 0040973c
    NOP                                 ; 0040973d
    NOP                                 ; 0040973e
    FLD float ptr [EBP + -0x24]         ; 0040973f
    NOP                                 ; 00409742
    NOP                                 ; 00409743
    NOP                                 ; 00409744
    NOP                                 ; 00409745
    ADD ESP,0x14                        ; 00409746
    FLDZ                                ; 00409749
    FXCH                                ; 0040974b
    FST float ptr [ESP + 0x18]          ; 0040974d
    FSTP double ptr [ESP]               ; 00409751
    FCOMP double ptr [ESP]              ; 00409754
    FNSTSW AX                           ; 00409757
    SAHF                                ; 00409759
    JA 0x0040948f                       ; 0040975a
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    FLD1                                ; 00409760
    FCOMP double ptr [ESP]              ; 00409762
    FNSTSW AX                           ; 00409765
    SAHF                                ; 00409767
    JNC 0x00409620                      ; 00409768
        ;   XREF to: 00409620 (CONDITIONAL_JUMP)  ; LAB_00409620
    JMP 0x0040948f                      ; 0040976e
        ;   XREF to: 0040948f (UNCONDITIONAL_JUMP)  ; LAB_0040948f
    LEA EAX,[EBP + -0x64]               ; 00409773
        ;   Label: LAB_00409773
    NOP                                 ; 00409776
    PUSH EAX                            ; 00409777
    LEA EAX,[EBP + -0x4c]               ; 00409778
    NOP                                 ; 0040977b
    NOP                                 ; 0040977c
    NOP                                 ; 0040977d
    NOP                                 ; 0040977e
    PUSH EAX                            ; 0040977f
    MOV EAX,dword ptr [EBP + 0x24]      ; 00409780
    MOV ESI,dword ptr [EAX + 0x20]      ; 00409783
    PUSH ESI                            ; 00409786
    CALL core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0 ; 00409787
        ;   XREF to: 005a10e0 (UNCONDITIONAL_CALL)  ; float core_skeleton.cpp_CDeformableModelInstance_rayIntersect_FUN_005a10e0(CDeformableModelInstance * this_ptr, CVector3f * ray_origin, CVector3f * ray_direction)
    MOV dword ptr [EBP + -0x24],EAX     ; 0040978c
    NOP                                 ; 0040978f
    NOP                                 ; 00409790
    NOP                                 ; 00409791
    NOP                                 ; 00409792
    FLD float ptr [EBP + -0x24]         ; 00409793
    NOP                                 ; 00409796
    NOP                                 ; 00409797
    NOP                                 ; 00409798
    NOP                                 ; 00409799
    ADD ESP,0xc                         ; 0040979a
    FLDZ                                ; 0040979d
    FXCH                                ; 0040979f
    FST float ptr [ESP + 0x18]          ; 004097a1
    FSTP double ptr [ESP + 0x10]        ; 004097a5
    FCOMP double ptr [ESP + 0x10]       ; 004097a9
    FNSTSW AX                           ; 004097ad
    SAHF                                ; 004097af
    JA 0x0040948f                       ; 004097b0
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    FLD1                                ; 004097b6
    FCOMP double ptr [ESP + 0x10]       ; 004097b8
    FNSTSW AX                           ; 004097bc
    SAHF                                ; 004097be
    JC 0x0040948f                       ; 004097bf
        ;   XREF to: 0040948f (CONDITIONAL_JUMP)  ; LAB_0040948f
    MOV EAX,[0x0368c884]                ; 004097c5 | g_DeformableModelRayHitPartIndex
    MOV dword ptr [EBX + 0xc],EAX       ; 004097ca
    MOV EAX,[0x0368c894]                ; 004097cd | g_DeformableModelRayHitLodIndex
    MOV dword ptr [EBX + 0x10],EAX      ; 004097d2
    MOV EAX,[0x0368c898]                ; 004097d5 | g_DeformableModelRayHitTriangleIndex
    MOV EDX,dword ptr [0x0368c894]      ; 004097da | g_DeformableModelRayHitLodIndex
    PUSH EAX                            ; 004097e0
    MOV dword ptr [EBX + 0x14],EAX      ; 004097e1
    MOV EAX,dword ptr [EBP + 0x24]      ; 004097e4
    PUSH EDX                            ; 004097e7
    MOV ECX,dword ptr [EAX + 0x20]      ; 004097e8
    PUSH ECX                            ; 004097eb
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004097ec
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004097f1
    PUSH EAX                            ; 004097f4
    CALL core_skeleton.cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0 ; 004097f5
        ;   XREF to: 0059dca0 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findMinWeightBone_FUN_0059dca0(CDeformableModel * this_ptr, int lod_level, int triangle_index)
    MOV dword ptr [EBX + 0x18],EAX      ; 004097fa
    LEA EAX,[EBP + -0x40]               ; 004097fd
    NOP                                 ; 00409800
    NOP                                 ; 00409801
    NOP                                 ; 00409802
    NOP                                 ; 00409803
    ADD ESP,0xc                         ; 00409804
    CMP EAX,0x368c888                   ; 00409807 | g_DeformableModelRayHitNormal
    JZ 0x00409620                       ; 0040980c
        ;   XREF to: 00409620 (CONDITIONAL_JUMP)  ; LAB_00409620
    MOV EAX,[0x0368c888]                ; 00409812 | g_DeformableModelRayHitNormal
    MOV dword ptr [EBP + -0x40],EAX     ; 00409817
    NOP                                 ; 0040981a
    NOP                                 ; 0040981b
    NOP                                 ; 0040981c
    NOP                                 ; 0040981d
    MOV EAX,[0x0368c88c]                ; 0040981e | g_DeformableModelRayHitNormal.y
    MOV dword ptr [EBP + -0x3c],EAX     ; 00409823
    NOP                                 ; 00409826
    NOP                                 ; 00409827
    NOP                                 ; 00409828
    NOP                                 ; 00409829
    MOV EAX,[0x0368c890]                ; 0040982a | g_DeformableModelRayHitNormal.z
    MOV dword ptr [EBP + -0x38],EAX     ; 0040982f
    NOP                                 ; 00409832
    NOP                                 ; 00409833
    NOP                                 ; 00409834
    NOP                                 ; 00409835
    JMP 0x00409620                      ; 00409836
        ;   XREF to: 00409620 (UNCONDITIONAL_JUMP)  ; LAB_00409620

