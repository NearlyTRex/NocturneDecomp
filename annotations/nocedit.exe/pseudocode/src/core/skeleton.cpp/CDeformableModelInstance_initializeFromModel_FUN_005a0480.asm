; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480(CDeformableModelInstance * this_ptr, CDeformableModel * model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CDeformableModel * Stack[0x8]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[5]:
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e71c
;   core_skeledit.cpp_CDeformable_groundBias_FUN_0058e4e0 at 0058e53f
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450 at 005a0468
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0059c2f0 at 0059c382
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 at 0059d525
;
; Called Functions:
;   core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0
;   core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0480
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005a0480
    PUSH ESI                            ; 005a0481
    PUSH EDI                            ; 005a0482
    PUSH EBP                            ; 005a0483
    SUB ESP,0x14                        ; 005a0484
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a0487
    MOV EBX,dword ptr [ESP + 0x2c]      ; 005a048b
    PUSH EAX                            ; 005a048f
    MOV dword ptr [EAX + 0x22b0],EBX    ; 005a0490
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 005a0496 | CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a049b
    PUSH EAX                            ; 005a049e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005a049f
    PUSH ECX                            ; 005a04a3
    MOV EBX,EAX                         ; 005a04a4
    MOV EBP,EAX                         ; 005a04a6
    CALL core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0 ; 005a04a8 | void core_motion.cpp_CMotionController_setMotionList_FUN_0052dcb0(CMotionController * this_ptr, CMotionList * motion_list)
        ;   XREF to: 0052dcb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a04ad
    MOV EAX,dword ptr [EBX + 0x28558]   ; 005a04b0
    MOV dword ptr [ESP + 0x10],EAX      ; 005a04b6
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a04ba
    MOV EAX,dword ptr [EAX + 0x22b0]    ; 005a04be
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a04c4
    FLD float ptr [EAX + 0x7c84]        ; 005a04c8
    FMUL float ptr [EBX + 0x54]         ; 005a04ce
    FSTP float ptr [ESP]                ; 005a04d1
    FLD float ptr [EAX + 0x7c88]        ; 005a04d4
    FMUL float ptr [EBX + 0x54]         ; 005a04da
    FSTP float ptr [ESP + 0x4]          ; 005a04dd
    FLD float ptr [EAX + 0x7c8c]        ; 005a04e1
    FMUL float ptr [EBX + 0x54]         ; 005a04e7
    ADD EBX,0x508                       ; 005a04ea
    MOV EAX,ESP                         ; 005a04f0
    FSTP float ptr [ESP + 0x8]          ; 005a04f2
    CMP EBX,EAX                         ; 005a04f6
    JNZ 0x005a05ad                      ; 005a04f8 | LAB_005a05ad
        ;   XREF to: 005a05ad (CONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a04fe
        ;   Label: LAB_005a04fe
    XOR ESI,ESI                         ; 005a0502
    TEST EBX,EBX                        ; 005a0504
    JLE 0x005a057e                      ; 005a0506 | LAB_005a057e
        ;   XREF to: 005a057e (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [ESP + 0x28]      ; 005a050c
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a0510
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a0514
    ADD EDI,0x54                        ; 005a0518
    MOV dword ptr [ESP + 0xc],EAX       ; 005a051b
    ADD EBX,0x58                        ; 005a051f
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a0522
        ;   Label: LAB_005a0522
    PUSH ESI                            ; 005a0526
    MOV ECX,dword ptr [EAX + 0x22b0]    ; 005a0527
    PUSH ECX                            ; 005a052d
    CALL core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860 ; 005a052e | CVector3f * core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_0059a860(CDeformableModel * this_ptr, int index)
        ;   XREF to: 0059a860 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 005a0533
    CMP EBX,EAX                         ; 005a0536
    JZ 0x005a054a                       ; 005a0538 | LAB_005a054a
        ;   XREF to: 005a054a (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 005a053a
    MOV dword ptr [EBX],EDX             ; 005a053c
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a053e
    MOV dword ptr [EBX + 0x4],EDX       ; 005a0541
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a0544
    MOV dword ptr [EBX + 0x8],EDX       ; 005a0547
    MOV EAX,dword ptr [ESP + 0x28]      ; 005a054a
        ;   Label: LAB_005a054a
    FLD float ptr [EAX + 0x54]          ; 005a054e
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a0551
    FSTP float ptr [EAX + 0x514]        ; 005a0555
    CMP dword ptr [EBP + 0x2857c],0x0   ; 005a055b
    JL 0x005a05c5                       ; 005a0562 | LAB_005a05c5
        ;   XREF to: 005a05c5 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a0564
        ;   Label: LAB_005a0564
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a0568
    ADD EBP,0x24                        ; 005a056c
    ADD EBX,0xc                         ; 005a056f
    ADD EAX,0x4                         ; 005a0572
    INC ESI                             ; 005a0575
    MOV dword ptr [ESP + 0xc],EAX       ; 005a0576
    CMP ESI,EDX                         ; 005a057a
    JL 0x005a0522                       ; 005a057c | LAB_005a0522
        ;   XREF to: 005a0522 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x28]      ; 005a057e
        ;   Label: LAB_005a057e
    PUSH EDX                            ; 005a0582
    CALL core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0 ; 005a0583 | void core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059deb0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a0588
    MOV ECX,dword ptr [ESP + 0x28]      ; 005a058b
    PUSH ECX                            ; 005a058f
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0 ; 005a0590 | void core_skeleton.cpp_CDeformableModelInstance_computeBoundingBox_FUN_005a05e0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a05e0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a0595
    MOV EBX,dword ptr [ESP + 0x28]      ; 005a0598
    PUSH EBX                            ; 005a059c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005a059d | void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a05a2
    ADD ESP,0x14                        ; 005a05a5
    POP EBP                             ; 005a05a8
    POP EDI                             ; 005a05a9
    POP ESI                             ; 005a05aa
    POP EBX                             ; 005a05ab
    RET                                 ; 005a05ac
    MOV EAX,dword ptr [ESP]             ; 005a05ad
        ;   Label: LAB_005a05ad
    MOV dword ptr [EBX],EAX             ; 005a05b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005a05b2
    MOV dword ptr [EBX + 0x4],EAX       ; 005a05b6
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a05b9
    MOV dword ptr [EBX + 0x8],EAX       ; 005a05bd
    JMP 0x005a04fe                      ; 005a05c0 | LAB_005a04fe
        ;   XREF to: 005a04fe (UNCONDITIONAL_JUMP)
    FLD float ptr [EDI]                 ; 005a05c5
        ;   Label: LAB_005a05c5
    FMUL float ptr [EBX]                ; 005a05c7
    FSTP float ptr [EBX]                ; 005a05c9
    FLD float ptr [EDI]                 ; 005a05cb
    FMUL float ptr [EBX + 0x4]          ; 005a05cd
    FSTP float ptr [EBX + 0x4]          ; 005a05d0
    FLD float ptr [EDI]                 ; 005a05d3
    FMUL float ptr [EBX + 0x8]          ; 005a05d5
    FSTP float ptr [EBX + 0x8]          ; 005a05d8
    JMP 0x005a0564                      ; 005a05db | LAB_005a0564
        ;   XREF to: 005a0564 (UNCONDITIONAL_JUMP)

