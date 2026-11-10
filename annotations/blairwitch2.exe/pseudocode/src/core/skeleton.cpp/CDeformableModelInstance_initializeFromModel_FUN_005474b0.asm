; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; CDeformableModel * Stack[0x8]:4   model_ptr
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 at 00547498
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_005431b0 at 0054323e
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 at 0054443d
;
; Called Functions:
;   core_motion.cpp_FUN_005037d0
;   core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00547620
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005474b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0
    PUSH ESI                            ; 005474b1
    PUSH EDI                            ; 005474b2
    PUSH EBP                            ; 005474b3
    SUB ESP,0x20                        ; 005474b4
    MOV EAX,dword ptr [ESP + 0x34]      ; 005474b7
    MOV EBX,dword ptr [ESP + 0x38]      ; 005474bb
    PUSH EAX                            ; 005474bf
    MOV dword ptr [EAX + 0x22b0],EBX    ; 005474c0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 005474c6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005474cb
    PUSH EAX                            ; 005474ce
    MOV ECX,dword ptr [ESP + 0x38]      ; 005474cf
    PUSH ECX                            ; 005474d3
    MOV EBX,EAX                         ; 005474d4
    MOV EBP,EAX                         ; 005474d6
    CALL core_motion.cpp_FUN_005037d0   ; 005474d8
        ;   XREF to: 005037d0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005037d0()
    ADD ESP,0x8                         ; 005474dd
    MOV EAX,dword ptr [EBX + 0x1d1f8]   ; 005474e0
    MOV dword ptr [ESP + 0x18],EAX      ; 005474e6
    MOV EAX,dword ptr [ESP + 0x34]      ; 005474ea
    MOV EAX,dword ptr [EAX + 0x22b0]    ; 005474ee
    MOV EBX,dword ptr [ESP + 0x34]      ; 005474f4
    FLD float ptr [EAX + 0x1744]        ; 005474f8
    FMUL float ptr [EBX + 0x54]         ; 005474fe
    FLD float ptr [EAX + 0x1748]        ; 00547501
    FMUL float ptr [EBX + 0x54]         ; 00547507
    FLD float ptr [EAX + 0x174c]        ; 0054750a
    FMUL float ptr [EBX + 0x54]         ; 00547510
    LEA EDI,[ESP + 0xc]                 ; 00547513
    MOV ESI,ESP                         ; 00547517
    ADD EBX,0x508                       ; 00547519
    LEA EAX,[ESP + 0xc]                 ; 0054751f
    FXCH ST2                            ; 00547523
    FSTP float ptr [ESP]                ; 00547525
    FSTP float ptr [ESP + 0x4]          ; 00547528
    FSTP float ptr [ESP + 0x8]          ; 0054752c
    MOVSD ES:EDI,ESI                    ; 00547530
    MOVSD ES:EDI,ESI                    ; 00547531
    MOVSD ES:EDI,ESI                    ; 00547532
    CMP EBX,EAX                         ; 00547533
    JNZ 0x005475ea                      ; 00547535
        ;   XREF to: 005475ea (CONDITIONAL_JUMP)  ; LAB_005475ea
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054753b
        ;   Label: LAB_0054753b
    XOR ESI,ESI                         ; 0054753f
    TEST EBX,EBX                        ; 00547541
    JLE 0x005475bb                      ; 00547543
        ;   XREF to: 005475bb (CONDITIONAL_JUMP)  ; LAB_005475bb
    MOV EDI,dword ptr [ESP + 0x34]      ; 00547549
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054754d
    MOV EBX,dword ptr [ESP + 0x34]      ; 00547551
    ADD EDI,0x54                        ; 00547555
    MOV dword ptr [ESP + 0x1c],EAX      ; 00547558
    ADD EBX,0x58                        ; 0054755c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054755f
        ;   Label: LAB_0054755f
    PUSH ESI                            ; 00547563
    MOV ECX,dword ptr [EAX + 0x22b0]    ; 00547564
    PUSH ECX                            ; 0054756a
    CALL core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620 ; 0054756b
        ;   XREF to: 00541620 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620(CDeformableModel * this_ptr, int index)
    ADD ESP,0x8                         ; 00547570
    CMP EBX,EAX                         ; 00547573
    JZ 0x00547587                       ; 00547575
        ;   XREF to: 00547587 (CONDITIONAL_JUMP)  ; LAB_00547587
    MOV EDX,dword ptr [EAX]             ; 00547577
    MOV dword ptr [EBX],EDX             ; 00547579
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054757b
    MOV dword ptr [EBX + 0x4],EDX       ; 0054757e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00547581
    MOV dword ptr [EBX + 0x8],EDX       ; 00547584
    MOV EAX,dword ptr [ESP + 0x34]      ; 00547587
        ;   Label: LAB_00547587
    FLD float ptr [EAX + 0x54]          ; 0054758b
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054758e
    FSTP float ptr [EAX + 0x514]        ; 00547592
    CMP dword ptr [EBP + 0x1d21c],0x0   ; 00547598
    JL 0x00547603                       ; 0054759f
        ;   XREF to: 00547603 (CONDITIONAL_JUMP)  ; LAB_00547603
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005475a1
        ;   Label: LAB_005475a1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005475a5
    ADD EBP,0x24                        ; 005475a9
    ADD EBX,0xc                         ; 005475ac
    ADD EAX,0x4                         ; 005475af
    INC ESI                             ; 005475b2
    MOV dword ptr [ESP + 0x1c],EAX      ; 005475b3
    CMP ESI,EDX                         ; 005475b7
    JL 0x0054755f                       ; 005475b9
        ;   XREF to: 0054755f (CONDITIONAL_JUMP)  ; LAB_0054755f
    MOV EDX,dword ptr [ESP + 0x34]      ; 005475bb
        ;   Label: LAB_005475bb
    PUSH EDX                            ; 005475bf
    CALL core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0 ; 005475c0
        ;   XREF to: 00544db0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_00544db0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005475c5
    MOV ECX,dword ptr [ESP + 0x34]      ; 005475c8
    PUSH ECX                            ; 005475cc
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00547620 ; 005475cd
        ;   XREF to: 00547620 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_00547620(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005475d2
    MOV EBX,dword ptr [ESP + 0x34]      ; 005475d5
    PUSH EBX                            ; 005475d9
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0 ; 005475da
        ;   XREF to: 00544ee0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005475df
    ADD ESP,0x20                        ; 005475e2
    POP EBP                             ; 005475e5
    POP EDI                             ; 005475e6
    POP ESI                             ; 005475e7
    POP EBX                             ; 005475e8
    RET                                 ; 005475e9
    MOV EAX,dword ptr [ESP + 0xc]       ; 005475ea
        ;   Label: LAB_005475ea
    MOV dword ptr [EBX],EAX             ; 005475ee
    MOV EAX,dword ptr [ESP + 0x10]      ; 005475f0
    MOV dword ptr [EBX + 0x4],EAX       ; 005475f4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005475f7
    MOV dword ptr [EBX + 0x8],EAX       ; 005475fb
    JMP 0x0054753b                      ; 005475fe
        ;   XREF to: 0054753b (UNCONDITIONAL_JUMP)  ; LAB_0054753b
    FLD float ptr [EDI]                 ; 00547603
        ;   Label: LAB_00547603
    FMUL float ptr [EBX]                ; 00547605
    FSTP float ptr [EBX]                ; 00547607
    FLD float ptr [EDI]                 ; 00547609
    FMUL float ptr [EBX + 0x4]          ; 0054760b
    FSTP float ptr [EBX + 0x4]          ; 0054760e
    FLD float ptr [EDI]                 ; 00547611
    FMUL float ptr [EBX + 0x8]          ; 00547613
    FSTP float ptr [EBX + 0x8]          ; 00547616
    JMP 0x005475a1                      ; 00547619
        ;   XREF to: 005475a1 (UNCONDITIONAL_JUMP)  ; LAB_005475a1

