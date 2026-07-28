; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)
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
; XREF[3]:
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0 at 0051dce8
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_00519be0 at 00519c68
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051addb
;
; Called Functions:
;   core_motion.cpp_CMotionController_setMotionList_FUN_004e1860
;   core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051dd00
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
    PUSH ESI                            ; 0051dd01
    PUSH EDI                            ; 0051dd02
    PUSH EBP                            ; 0051dd03
    SUB ESP,0x14                        ; 0051dd04
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051dd07
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0051dd0b
    PUSH EAX                            ; 0051dd0f
    MOV dword ptr [EAX + 0x22b0],EBX    ; 0051dd10
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051dd16
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051dd1b
    PUSH EAX                            ; 0051dd1e
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0051dd1f
    PUSH ECX                            ; 0051dd23
    MOV EBX,EAX                         ; 0051dd24
    MOV EBP,EAX                         ; 0051dd26
    CALL core_motion.cpp_CMotionController_setMotionList_FUN_004e1860 ; 0051dd28
        ;   XREF to: 004e1860 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setMotionList_FUN_004e1860(CMotionController * this_ptr, CMotionList * motion_list)
    ADD ESP,0x8                         ; 0051dd2d
    MOV EAX,dword ptr [EBX + 0x28558]   ; 0051dd30
    MOV dword ptr [ESP + 0x10],EAX      ; 0051dd36
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051dd3a
    MOV EAX,dword ptr [EAX + 0x22b0]    ; 0051dd3e
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051dd44
    FLD float ptr [EAX + 0x1744]        ; 0051dd48
    FMUL float ptr [EBX + 0x54]         ; 0051dd4e
    FSTP float ptr [ESP]                ; 0051dd51
    FLD float ptr [EAX + 0x1748]        ; 0051dd54
    FMUL float ptr [EBX + 0x54]         ; 0051dd5a
    FSTP float ptr [ESP + 0x4]          ; 0051dd5d
    FLD float ptr [EAX + 0x174c]        ; 0051dd61
    FMUL float ptr [EBX + 0x54]         ; 0051dd67
    ADD EBX,0x508                       ; 0051dd6a
    MOV EAX,ESP                         ; 0051dd70
    FSTP float ptr [ESP + 0x8]          ; 0051dd72
    CMP EBX,EAX                         ; 0051dd76
    JNZ 0x0051de2d                      ; 0051dd78
        ;   XREF to: 0051de2d (CONDITIONAL_JUMP)  ; LAB_0051de2d
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051dd7e
        ;   Label: LAB_0051dd7e
    XOR ESI,ESI                         ; 0051dd82
    TEST EBX,EBX                        ; 0051dd84
    JLE 0x0051ddfe                      ; 0051dd86
        ;   XREF to: 0051ddfe (CONDITIONAL_JUMP)  ; LAB_0051ddfe
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051dd8c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051dd90
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051dd94
    ADD EDI,0x54                        ; 0051dd98
    MOV dword ptr [ESP + 0xc],EAX       ; 0051dd9b
    ADD EBX,0x58                        ; 0051dd9f
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051dda2
        ;   Label: LAB_0051dda2
    PUSH ESI                            ; 0051dda6
    MOV ECX,dword ptr [EAX + 0x22b0]    ; 0051dda7
    PUSH ECX                            ; 0051ddad
    CALL core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180 ; 0051ddae
        ;   XREF to: 00518180 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00518180(CDeformableModel * this_ptr, int index)
    ADD ESP,0x8                         ; 0051ddb3
    CMP EBX,EAX                         ; 0051ddb6
    JZ 0x0051ddca                       ; 0051ddb8
        ;   XREF to: 0051ddca (CONDITIONAL_JUMP)  ; LAB_0051ddca
    MOV EDX,dword ptr [EAX]             ; 0051ddba
    MOV dword ptr [EBX],EDX             ; 0051ddbc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051ddbe
    MOV dword ptr [EBX + 0x4],EDX       ; 0051ddc1
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051ddc4
    MOV dword ptr [EBX + 0x8],EDX       ; 0051ddc7
    MOV EAX,dword ptr [ESP + 0x28]      ; 0051ddca
        ;   Label: LAB_0051ddca
    FLD float ptr [EAX + 0x54]          ; 0051ddce
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051ddd1
    FSTP float ptr [EAX + 0x514]        ; 0051ddd5
    CMP dword ptr [EBP + 0x2857c],0x0   ; 0051dddb
    JL 0x0051de45                       ; 0051dde2
        ;   XREF to: 0051de45 (CONDITIONAL_JUMP)  ; LAB_0051de45
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051dde4
        ;   Label: LAB_0051dde4
    MOV EDX,dword ptr [ESP + 0x10]      ; 0051dde8
    ADD EBP,0x24                        ; 0051ddec
    ADD EBX,0xc                         ; 0051ddef
    ADD EAX,0x4                         ; 0051ddf2
    INC ESI                             ; 0051ddf5
    MOV dword ptr [ESP + 0xc],EAX       ; 0051ddf6
    CMP ESI,EDX                         ; 0051ddfa
    JL 0x0051dda2                       ; 0051ddfc
        ;   XREF to: 0051dda2 (CONDITIONAL_JUMP)  ; LAB_0051dda2
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051ddfe
        ;   Label: LAB_0051ddfe
    PUSH EDX                            ; 0051de02
    CALL core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750 ; 0051de03
        ;   XREF to: 0051b750 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0051b750(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051de08
    MOV ECX,dword ptr [ESP + 0x28]      ; 0051de0b
    PUSH ECX                            ; 0051de0f
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60 ; 0051de10
        ;   XREF to: 0051de60 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0051de60(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051de15
    MOV EBX,dword ptr [ESP + 0x28]      ; 0051de18
    PUSH EBX                            ; 0051de1c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880 ; 0051de1d
        ;   XREF to: 0051b880 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051de22
    ADD ESP,0x14                        ; 0051de25
    POP EBP                             ; 0051de28
    POP EDI                             ; 0051de29
    POP ESI                             ; 0051de2a
    POP EBX                             ; 0051de2b
    RET                                 ; 0051de2c
    MOV EAX,dword ptr [ESP]             ; 0051de2d
        ;   Label: LAB_0051de2d
    MOV dword ptr [EBX],EAX             ; 0051de30
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051de32
    MOV dword ptr [EBX + 0x4],EAX       ; 0051de36
    MOV EAX,dword ptr [ESP + 0x8]       ; 0051de39
    MOV dword ptr [EBX + 0x8],EAX       ; 0051de3d
    JMP 0x0051dd7e                      ; 0051de40
        ;   XREF to: 0051dd7e (UNCONDITIONAL_JUMP)  ; LAB_0051dd7e
    FLD float ptr [EDI]                 ; 0051de45
        ;   Label: LAB_0051de45
    FMUL float ptr [EBX]                ; 0051de47
    FSTP float ptr [EBX]                ; 0051de49
    FLD float ptr [EDI]                 ; 0051de4b
    FMUL float ptr [EBX + 0x4]          ; 0051de4d
    FSTP float ptr [EBX + 0x4]          ; 0051de50
    FLD float ptr [EDI]                 ; 0051de53
    FMUL float ptr [EBX + 0x8]          ; 0051de55
    FSTP float ptr [EBX + 0x8]          ; 0051de58
    JMP 0x0051dde4                      ; 0051de5b
        ;   XREF to: 0051dde4 (UNCONDITIONAL_JUMP)  ; LAB_0051dde4

