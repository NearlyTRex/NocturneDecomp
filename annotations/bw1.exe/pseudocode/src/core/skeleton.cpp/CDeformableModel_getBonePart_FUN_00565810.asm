; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModel_getBonePart_FUN_00565810(CDeformableModel *this_ptr,int bone_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0 at 0042f6b6
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00565810
        ;   Label: core_skeleton.cpp_CDeformableModel_getBonePart_FUN_00565810
    CMP dword ptr [EDX + 0xc00],0x2     ; 00565814
    JGE 0x00565820                      ; 0056581b
        ;   XREF to: 00565820 (CONDITIONAL_JUMP)  ; LAB_00565820
    XOR EAX,EAX                         ; 0056581d
    RET                                 ; 0056581f
    MOV EAX,dword ptr [ESP + 0x8]       ; 00565820
        ;   Label: LAB_00565820
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x323c] ; 00565824
    RET                                 ; 0056582b

