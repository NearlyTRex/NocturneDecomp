; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0(CDeformableModelInstance *this_ptr,CDeformableModel *model_ptr)
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
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0054e6b0 at 0054e6c8
;   core_skeleton.cpp_CDeformableModel_computeBoneDominantPart_FUN_0054a3c0 at 0054a44e
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0054b5b0 at 0054b66d
;
; Called Functions:
;   core_motion.cpp_FUN_004fc280
;   core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830
;   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e6e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0
    PUSH ESI                            ; 0054e6e1
    PUSH EDI                            ; 0054e6e2
    PUSH EBP                            ; 0054e6e3
    SUB ESP,0x20                        ; 0054e6e4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054e6e7
    MOV EBX,dword ptr [ESP + 0x38]      ; 0054e6eb
    PUSH EAX                            ; 0054e6ef
    MOV dword ptr [EAX + 0x23a0],EBX    ; 0054e6f0
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0054e6f6
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e6fb
    PUSH EAX                            ; 0054e6fe
    MOV ECX,dword ptr [ESP + 0x38]      ; 0054e6ff
    PUSH ECX                            ; 0054e703
    MOV EBX,EAX                         ; 0054e704
    MOV EBP,EAX                         ; 0054e706
    CALL core_motion.cpp_FUN_004fc280   ; 0054e708
        ;   XREF to: 004fc280 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_004fc280()
    ADD ESP,0x8                         ; 0054e70d
    MOV EAX,dword ptr [EBX + 0x1de78]   ; 0054e710
    MOV dword ptr [ESP + 0x18],EAX      ; 0054e716
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054e71a
    MOV EAX,dword ptr [EAX + 0x23a0]    ; 0054e71e
    MOV EBX,dword ptr [ESP + 0x34]      ; 0054e724
    FLD float ptr [EAX + 0x2284]        ; 0054e728
    FMUL float ptr [EBX + 0x54]         ; 0054e72e
    FLD float ptr [EAX + 0x2288]        ; 0054e731
    FMUL float ptr [EBX + 0x54]         ; 0054e737
    FLD float ptr [EAX + 0x228c]        ; 0054e73a
    FMUL float ptr [EBX + 0x54]         ; 0054e740
    LEA EDI,[ESP + 0xc]                 ; 0054e743
    MOV ESI,ESP                         ; 0054e747
    ADD EBX,0x508                       ; 0054e749
    LEA EAX,[ESP + 0xc]                 ; 0054e74f
    FXCH ST2                            ; 0054e753
    FSTP float ptr [ESP]                ; 0054e755
    FSTP float ptr [ESP + 0x4]          ; 0054e758
    FSTP float ptr [ESP + 0x8]          ; 0054e75c
    MOVSD ES:EDI,ESI                    ; 0054e760
    MOVSD ES:EDI,ESI                    ; 0054e761
    MOVSD ES:EDI,ESI                    ; 0054e762
    CMP EBX,EAX                         ; 0054e763
    JNZ 0x0054e81a                      ; 0054e765
        ;   XREF to: 0054e81a (CONDITIONAL_JUMP)  ; LAB_0054e81a
    MOV EBX,dword ptr [ESP + 0x18]      ; 0054e76b
        ;   Label: LAB_0054e76b
    XOR ESI,ESI                         ; 0054e76f
    TEST EBX,EBX                        ; 0054e771
    JLE 0x0054e7eb                      ; 0054e773
        ;   XREF to: 0054e7eb (CONDITIONAL_JUMP)  ; LAB_0054e7eb
    MOV EDI,dword ptr [ESP + 0x34]      ; 0054e779
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054e77d
    MOV EBX,dword ptr [ESP + 0x34]      ; 0054e781
    ADD EDI,0x54                        ; 0054e785
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054e788
    ADD EBX,0x58                        ; 0054e78c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054e78f
        ;   Label: LAB_0054e78f
    PUSH ESI                            ; 0054e793
    MOV ECX,dword ptr [EAX + 0x23a0]    ; 0054e794
    PUSH ECX                            ; 0054e79a
    CALL core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830 ; 0054e79b
        ;   XREF to: 00548830 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00548830(CDeformableModel * this_ptr, int index)
    ADD ESP,0x8                         ; 0054e7a0
    CMP EBX,EAX                         ; 0054e7a3
    JZ 0x0054e7b7                       ; 0054e7a5
        ;   XREF to: 0054e7b7 (CONDITIONAL_JUMP)  ; LAB_0054e7b7
    MOV EDX,dword ptr [EAX]             ; 0054e7a7
    MOV dword ptr [EBX],EDX             ; 0054e7a9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054e7ab
    MOV dword ptr [EBX + 0x4],EDX       ; 0054e7ae
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054e7b1
    MOV dword ptr [EBX + 0x8],EDX       ; 0054e7b4
    MOV EAX,dword ptr [ESP + 0x34]      ; 0054e7b7
        ;   Label: LAB_0054e7b7
    FLD float ptr [EAX + 0x54]          ; 0054e7bb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054e7be
    FSTP float ptr [EAX + 0x514]        ; 0054e7c2
    CMP dword ptr [EBP + 0x1de9c],0x0   ; 0054e7c8
    JL 0x0054e833                       ; 0054e7cf
        ;   XREF to: 0054e833 (CONDITIONAL_JUMP)  ; LAB_0054e833
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0054e7d1
        ;   Label: LAB_0054e7d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054e7d5
    ADD EBP,0x24                        ; 0054e7d9
    ADD EBX,0xc                         ; 0054e7dc
    ADD EAX,0x4                         ; 0054e7df
    INC ESI                             ; 0054e7e2
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054e7e3
    CMP ESI,EDX                         ; 0054e7e7
    JL 0x0054e78f                       ; 0054e7e9
        ;   XREF to: 0054e78f (CONDITIONAL_JUMP)  ; LAB_0054e78f
    MOV EDX,dword ptr [ESP + 0x34]      ; 0054e7eb
        ;   Label: LAB_0054e7eb
    PUSH EDX                            ; 0054e7ef
    CALL core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0 ; 0054e7f0
        ;   XREF to: 0054bfe0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0054bfe0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e7f5
    MOV ECX,dword ptr [ESP + 0x34]      ; 0054e7f8
    PUSH ECX                            ; 0054e7fc
    CALL core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850 ; 0054e7fd
        ;   XREF to: 0054e850 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromVertices_FUN_0054e850(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e802
    MOV EBX,dword ptr [ESP + 0x34]      ; 0054e805
    PUSH EBX                            ; 0054e809
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110 ; 0054e80a
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0054c110(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054e80f
    ADD ESP,0x20                        ; 0054e812
    POP EBP                             ; 0054e815
    POP EDI                             ; 0054e816
    POP ESI                             ; 0054e817
    POP EBX                             ; 0054e818
    RET                                 ; 0054e819
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054e81a
        ;   Label: LAB_0054e81a
    MOV dword ptr [EBX],EAX             ; 0054e81e
    MOV EAX,dword ptr [ESP + 0x10]      ; 0054e820
    MOV dword ptr [EBX + 0x4],EAX       ; 0054e824
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054e827
    MOV dword ptr [EBX + 0x8],EAX       ; 0054e82b
    JMP 0x0054e76b                      ; 0054e82e
        ;   XREF to: 0054e76b (UNCONDITIONAL_JUMP)  ; LAB_0054e76b
    FLD float ptr [EDI]                 ; 0054e833
        ;   Label: LAB_0054e833
    FMUL float ptr [EBX]                ; 0054e835
    FSTP float ptr [EBX]                ; 0054e837
    FLD float ptr [EDI]                 ; 0054e839
    FMUL float ptr [EBX + 0x4]          ; 0054e83b
    FSTP float ptr [EBX + 0x4]          ; 0054e83e
    FLD float ptr [EDI]                 ; 0054e841
    FMUL float ptr [EBX + 0x8]          ; 0054e843
    FSTP float ptr [EBX + 0x8]          ; 0054e846
    JMP 0x0054e7d1                      ; 0054e849
        ;   XREF to: 0054e7d1 (UNCONDITIONAL_JUMP)  ; LAB_0054e7d1

