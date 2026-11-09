; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_FUN_00563630(CSkeleton *this_ptr,int start_bone_index,int target_bone_index)
;
; Parameters:
; CSkeleton *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_bone_index
; int              Stack[0xc]:4   target_bone_index
;
; XREF[7]:
;   core_skeleton.cpp_CDeformableModelInstance_blendBoneRotations_FUN_00568d60 at 00568db8
;   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005697b0 at 005697d6
;   core_skeleton.cpp_FUN_00567620 at 005676b4
;   core_skeleton.cpp_FUN_00568100 at 005681a4
;   core_skeleton.cpp_FUN_00568860 at 005688fd
;   core_skeleton.cpp_FUN_00568cf0 at 00568d1e
;   core_skeleton.cpp_FUN_005695e0 at 00569652
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563630
        ;   Label: core_skeleton.cpp_FUN_00563630
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563631
    MOV EAX,dword ptr [ESP + 0xc]       ; 00563635
    MOV ECX,dword ptr [ESP + 0x10]      ; 00563639
    XOR EDX,EDX                         ; 0056363d
    CMP EAX,ECX                         ; 0056363f
    JZ 0x00563656                       ; 00563641
        ;   XREF to: 00563656 (CONDITIONAL_JUMP)  ; LAB_00563656
    IMUL EAX,EAX,0x24                   ; 00563643
        ;   Label: LAB_00563643
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x1de9c] ; 00563646
    INC EDX                             ; 0056364d
    TEST EAX,EAX                        ; 0056364e
    JL 0x0056365a                       ; 00563650
        ;   XREF to: 0056365a (CONDITIONAL_JUMP)  ; LAB_0056365a
    CMP EAX,ECX                         ; 00563652
    JNZ 0x00563643                      ; 00563654
        ;   XREF to: 00563643 (CONDITIONAL_JUMP)  ; LAB_00563643
    MOV EAX,EDX                         ; 00563656
        ;   Label: LAB_00563656
    POP EBX                             ; 00563658
    RET                                 ; 00563659
    TEST ECX,ECX                        ; 0056365a
        ;   Label: LAB_0056365a
    JL 0x00563656                       ; 0056365c
        ;   XREF to: 00563656 (CONDITIONAL_JUMP)  ; LAB_00563656
    MOV EDX,0xffffffff                  ; 0056365e
    MOV EAX,EDX                         ; 00563663
    POP EBX                             ; 00563665
    RET                                 ; 00563666

