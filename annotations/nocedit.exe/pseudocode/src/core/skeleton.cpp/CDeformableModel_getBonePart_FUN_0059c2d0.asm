; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_0059c2d0(CDeformableModel *this_ptr,int bone_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
;
; XREF[2]:
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042a520 at 0042a6b0
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00598316
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059c2d0
        ;   Label: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_0059c2d0
    CMP dword ptr [EDX + 0x7140],0x2    ; 0059c2d4
    JGE 0x0059c2e0                      ; 0059c2db
        ;   XREF to: 0059c2e0 (CONDITIONAL_JUMP)  ; LAB_0059c2e0
    XOR EAX,EAX                         ; 0059c2dd
    RET                                 ; 0059c2df
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059c2e0
        ;   Label: LAB_0059c2e0
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x8c3c] ; 0059c2e4
    RET                                 ; 0059c2eb

