; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0(CDeformableModelInstance *this_ptr,float scale_factor,int target_bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   scale_factor
; int              Stack[0xc]:4   target_bone_index
;
; XREF[1]:
;   core_charactr.cpp_FUN_00430060 at 00430123
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_skeleton.cpp_FUN_00563630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005697b0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0
    PUSH ESI                            ; 005697b1
    PUSH EDI                            ; 005697b2
    PUSH EBP                            ; 005697b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005697b4
    MOV EBP,dword ptr [ESP + 0x1c]      ; 005697b8
    PUSH ESI                            ; 005697bc
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 005697bd
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    XOR EBX,EBX                         ; 005697c2
    ADD ESP,0x4                         ; 005697c4
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 005697c7
    MOV EDI,EAX                         ; 005697cd
    TEST EDX,EDX                        ; 005697cf
    JLE 0x00569800                      ; 005697d1
        ;   XREF to: 00569800 (CONDITIONAL_JUMP)  ; LAB_00569800
    PUSH EBP                            ; 005697d3
        ;   Label: LAB_005697d3
    PUSH EBX                            ; 005697d4
    PUSH EDI                            ; 005697d5
    CALL core_skeleton.cpp_FUN_00563630 ; 005697d6
        ;   XREF to: 00563630 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_FUN_00563630(CSkeleton * this_ptr, int start_bone_index, int target_bone_index)
    ADD ESP,0xc                         ; 005697db
    TEST EAX,EAX                        ; 005697de
    JL 0x005697f2                       ; 005697e0
        ;   XREF to: 005697f2 (CONDITIONAL_JUMP)  ; LAB_005697f2
    FLD float ptr [ESI + 0xcf0]         ; 005697e2
    FMUL float ptr [ESP + 0x18]         ; 005697e8
    FSTP float ptr [ESI + 0xcf0]        ; 005697ec
    INC EBX                             ; 005697f2
        ;   Label: LAB_005697f2
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 005697f3
    ADD ESI,0x4                         ; 005697f9
    CMP EBX,ECX                         ; 005697fc
    JL 0x005697d3                       ; 005697fe
        ;   XREF to: 005697d3 (CONDITIONAL_JUMP)  ; LAB_005697d3
    POP EBP                             ; 00569800
        ;   Label: LAB_00569800
    POP EDI                             ; 00569801
    POP ESI                             ; 00569802
    POP EBX                             ; 00569803
    RET                                 ; 00569804

