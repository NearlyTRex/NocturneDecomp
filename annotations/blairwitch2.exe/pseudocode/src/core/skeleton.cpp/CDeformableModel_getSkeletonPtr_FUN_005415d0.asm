; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSkeleton * __cdecl core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0(CDeformableModel *this_ptr)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
;
; XREF[8]:
;   core_cloth.cpp_FUN_005ae680 at 005ae9b2
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 at 0054789e
;   core_skeleton.cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00544930 at 0054493c
;   core_skeleton.cpp_CDeformableModel_computeFarthestChildBones_FUN_00544ae0 at 00544af0
;   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_00544380 at 005443d4
;   core_skeleton.cpp_FUN_005424b0 at 005424bc
;   core_skeleton.cpp_FUN_005426be at 005426cc
;   core_skeleton.cpp_FUN_005487d0 at 005487ea
;
; Referenced Globals:
;   TerminatedCString s_core_skeleton_cpp_005e6dad
;   TerminatedCString s_Tried_to_do_something_wi_005e6dc2
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005415d0
        ;   Label: core_skeleton.cpp_CDeformableModel_getSkeletonPtr_FUN_005415d0
    CMP dword ptr [EAX + 0x2a6c],0x0    ; 005415d4
    JZ 0x005415e8                       ; 005415db
        ;   XREF to: 005415e8 (CONDITIONAL_JUMP)  ; LAB_005415e8
    MOV EAX,dword ptr [ESP + 0x4]       ; 005415dd
    MOV EAX,dword ptr [EAX + 0x2a6c]    ; 005415e1
    RET                                 ; 005415e7
    PUSH EBX                            ; 005415e8
        ;   Label: LAB_005415e8
    MOV ECX,0x5e6dad                    ; 005415e9 | = "..\\core\\skeleton.cpp"
    MOV EBX,0x2f5                       ; 005415ee
    PUSH 0x5e6dc2                       ; 005415f3 | = "Tried to do something with the skelet..."
    MOV dword ptr [0x01d046a0],ECX      ; 005415f8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 005415fe | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00541604
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00541609
    POP EBX                             ; 0054160c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054160d
    MOV EAX,dword ptr [EAX + 0x2a6c]    ; 00541611
    RET                                 ; 00541617

