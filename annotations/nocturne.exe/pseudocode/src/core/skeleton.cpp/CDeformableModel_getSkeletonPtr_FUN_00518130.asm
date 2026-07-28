; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_00518130(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_cloth.cpp_CCloth_setup_FUN_004359e0 at 00435cef
;   core_skeleton.cpp_CDeformableModelInstance_computeBoundingBoxFromBones_FUN_0051ef40 at 0051ef5b
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 at 0051e0ae
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280 at 0051b28c
;   core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480 at 0051b48c
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20 at 0051ad75
;   core_skeleton.cpp_CDeformableModel_renderBones_FUN_00519120 at 0051912e
;   core_skeleton.cpp_CDeformableModel_renderSkeleton_FUN_00518f60 at 00518f6c
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_00591629
;   TerminatedCString s_Tried_to_do_something_wi_0059163e
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00518130
        ;   Label: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_00518130
    CMP dword ptr [EAX + 0x2a6c],0x0    ; 00518134
    JZ 0x00518148                       ; 0051813b
        ;   XREF to: 00518148 (CONDITIONAL_JUMP)  ; LAB_00518148
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051813d
    MOV EAX,dword ptr [EAX + 0x2a6c]    ; 00518141
    RET                                 ; 00518147
    PUSH EBX                            ; 00518148
        ;   Label: LAB_00518148
    MOV ECX,0x591629                    ; 00518149 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x2e6                       ; 0051814e
    PUSH 0x59163e                       ; 00518153 | = "Tried to do something with the skelet..."
    MOV dword ptr [0x01cc4800],ECX      ; 00518158 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 0051815e | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00518164
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00518169
    POP EBX                             ; 0051816c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0051816d
    MOV EAX,dword ptr [EAX + 0x2a6c]    ; 00518171
    RET                                 ; 00518177

