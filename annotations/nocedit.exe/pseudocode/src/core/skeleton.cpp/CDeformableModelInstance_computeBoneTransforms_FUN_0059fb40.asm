; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40 (CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[17]:
;   core_charactr.cpp_CCharacter_FUN_0042af60 at 0042b02c
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 at 0042dfde
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043c9ec
;   core_cloth.cpp_FUN_00439710 at 00439af5
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f700
;   core_mimic.cpp_FUN_0051fcc0 at 00520492
;   core_morph.cpp_FUN_0052bcb0 at 0052c46a
;   core_passngr.cpp_FUN_00545d30 at 00545d86
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00596c70
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 at 0059e012
;   ... and 7 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
;   core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280
;   core_xform.cpp_transformVector3x4_FUN_005f4dc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059fb40
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
    PUSH ESI                            ; 0059fb41
    PUSH EDI                            ; 0059fb42
    PUSH EBP                            ; 0059fb43
    SUB ESP,0x2c                        ; 0059fb44
    MOV EDI,dword ptr [ESP + 0x40]      ; 0059fb47
    PUSH EDI                            ; 0059fb4b
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820 ; 0059fb4c
        ;   XREF to: 005a0820 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(CDeformableModelInstance * this_ptr)
    XOR EBP,EBP                         ; 0059fb51
    ADD ESP,0x4                         ; 0059fb53
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0059fb56
    MOV dword ptr [ESP + 0x10],EAX      ; 0059fb5c
    TEST EDX,EDX                        ; 0059fb60
    JLE 0x0059fc56                      ; 0059fb62
        ;   XREF to: 0059fc56 (CONDITIONAL_JUMP)  ; LAB_0059fc56
    LEA EBX,[EDI + 0xe80]               ; 0059fb68
    MOV dword ptr [ESP + 0x24],EBP      ; 0059fb6e
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059fb72
    MOV dword ptr [ESP + 0x28],EBX      ; 0059fb76
    LEA EBX,[EDI + 0x58]                ; 0059fb7a
    MOV EDX,dword ptr [ESP + 0x28]      ; 0059fb7d
    MOV dword ptr [ESP + 0xc],EBX       ; 0059fb81
    LEA ESI,[EDI + 0x6b0]               ; 0059fb85
    MOV dword ptr [ESP + 0x18],EDX      ; 0059fb8b
    MOV EBX,EDI                         ; 0059fb8f
    MOV dword ptr [ESP + 0x20],ESI      ; 0059fb91
    MOV ESI,EDI                         ; 0059fb95
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059fb97
        ;   Label: LAB_0059fb97
    PUSH EAX                            ; 0059fb9b
    IMUL EAX,EBP,0x30                   ; 0059fb9c
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0059fb9f
    PUSH EDX                            ; 0059fba3
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059fba4
    CALL core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280 ; 0059fba8
        ;   XREF to: 005f7280 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_quaternionToMatrix3x3_FUN_005f7280(CMatrix3x3f * matrix_out, CQuaternion4f * quat_in)
    MOV ECX,dword ptr [EBX + 0xcf0]     ; 0059fbad
    ADD ESP,0x8                         ; 0059fbb3
    CMP ECX,0x3f800000                  ; 0059fbb6
    JNZ 0x0059fc68                      ; 0059fbbc
        ;   XREF to: 0059fc68 (CONDITIONAL_JUMP)  ; LAB_0059fc68
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0059fbc2
        ;   Label: LAB_0059fbc2
    MOV EAX,dword ptr [EAX + 0x2857c]   ; 0059fbc6
    TEST EAX,EAX                        ; 0059fbcc
    JL 0x0059fd25                       ; 0059fbce
        ;   XREF to: 0059fd25 (CONDITIONAL_JUMP)  ; LAB_0059fd25
    IMUL EAX,EAX,0x30                   ; 0059fbd4
    ADD EAX,dword ptr [ESP + 0x28]      ; 0059fbd7
    MOV ECX,dword ptr [ESP + 0x24]      ; 0059fbdb
    PUSH EAX                            ; 0059fbdf
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059fbe0
    ADD EAX,ECX                         ; 0059fbe4
    PUSH EAX                            ; 0059fbe6
    LEA EAX,[ESP + 0x8]                 ; 0059fbe7
    PUSH EAX                            ; 0059fbeb
    CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0 ; 0059fbec
        ;   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
    ADD ESP,0xc                         ; 0059fbf1
    MOV EAX,dword ptr [ESP]             ; 0059fbf4
    MOV dword ptr [ESI + 0xe8c],EAX     ; 0059fbf7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059fbfd
    MOV dword ptr [ESI + 0xe9c],EAX     ; 0059fc01
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059fc07
    MOV dword ptr [ESI + 0xeac],EAX     ; 0059fc0b
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059fc11
        ;   Label: LAB_0059fc11
    MOV EAX,dword ptr [ESP + 0x20]      ; 0059fc15
    MOV EDX,dword ptr [ESP + 0x24]      ; 0059fc19
    ADD EBX,0x4                         ; 0059fc1d
    ADD ESI,0x30                        ; 0059fc20
    INC EBP                             ; 0059fc23
    ADD ECX,0x30                        ; 0059fc24
    ADD EAX,0x10                        ; 0059fc27
    ADD EDX,0xc                         ; 0059fc2a
    MOV dword ptr [ESP + 0x18],ECX      ; 0059fc2d
    MOV dword ptr [ESP + 0x20],EAX      ; 0059fc31
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0059fc35
    MOV EAX,dword ptr [ESP + 0x10]      ; 0059fc39
    MOV dword ptr [ESP + 0x24],EDX      ; 0059fc3d
    ADD ECX,0x24                        ; 0059fc41
    MOV EDX,dword ptr [EAX + 0x28558]   ; 0059fc44
    MOV dword ptr [ESP + 0x1c],ECX      ; 0059fc4a
    CMP EBP,EDX                         ; 0059fc4e
    JL 0x0059fb97                       ; 0059fc50
        ;   XREF to: 0059fb97 (CONDITIONAL_JUMP)  ; LAB_0059fb97
    MOV dword ptr [EDI + 0x2230],0xffffffff ; 0059fc56
        ;   Label: LAB_0059fc56
    ADD ESP,0x2c                        ; 0059fc60
    POP EBP                             ; 0059fc63
    POP EDI                             ; 0059fc64
    POP ESI                             ; 0059fc65
    POP EBX                             ; 0059fc66
    RET                                 ; 0059fc67
    MOV EAX,dword ptr [ESP + 0x14]      ; 0059fc68
        ;   Label: LAB_0059fc68
    FLD float ptr [EBX + 0xcf0]         ; 0059fc6c
    FMUL float ptr [EDI + EAX*0x1 + 0xe80] ; 0059fc72
    FSTP float ptr [EDI + EAX*0x1 + 0xe80] ; 0059fc79
    FLD float ptr [EBX + 0xcf0]         ; 0059fc80
    FMUL float ptr [EDI + EAX*0x1 + 0xe84] ; 0059fc86
    FSTP float ptr [EDI + EAX*0x1 + 0xe84] ; 0059fc8d
    FLD float ptr [EBX + 0xcf0]         ; 0059fc94
    FMUL float ptr [EDI + EAX*0x1 + 0xe88] ; 0059fc9a
    FSTP float ptr [EDI + EAX*0x1 + 0xe88] ; 0059fca1
    FLD float ptr [EBX + 0xcf0]         ; 0059fca8
    FMUL float ptr [EDI + EAX*0x1 + 0xe90] ; 0059fcae
    FSTP float ptr [EDI + EAX*0x1 + 0xe90] ; 0059fcb5
    FLD float ptr [EBX + 0xcf0]         ; 0059fcbc
    FMUL float ptr [EDI + EAX*0x1 + 0xe94] ; 0059fcc2
    FSTP float ptr [EDI + EAX*0x1 + 0xe94] ; 0059fcc9
    FLD float ptr [EBX + 0xcf0]         ; 0059fcd0
    FMUL float ptr [EDI + EAX*0x1 + 0xe98] ; 0059fcd6
    FSTP float ptr [EDI + EAX*0x1 + 0xe98] ; 0059fcdd
    FLD float ptr [EBX + 0xcf0]         ; 0059fce4
    FMUL float ptr [EDI + EAX*0x1 + 0xea0] ; 0059fcea
    FSTP float ptr [EDI + EAX*0x1 + 0xea0] ; 0059fcf1
    FLD float ptr [EBX + 0xcf0]         ; 0059fcf8
    FMUL float ptr [EDI + EAX*0x1 + 0xea4] ; 0059fcfe
    FSTP float ptr [EDI + EAX*0x1 + 0xea4] ; 0059fd05
    FLD float ptr [EBX + 0xcf0]         ; 0059fd0c
    FMUL float ptr [EDI + EAX*0x1 + 0xea8] ; 0059fd12
    FSTP float ptr [EDI + EAX*0x1 + 0xea8] ; 0059fd19
    JMP 0x0059fbc2                      ; 0059fd20
        ;   XREF to: 0059fbc2 (UNCONDITIONAL_JUMP)  ; LAB_0059fbc2
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059fd25
        ;   Label: LAB_0059fd25
    FLD float ptr [EDI + EAX*0x1 + 0x58] ; 0059fd29
    FADD float ptr [EDI + 0x6a4]        ; 0059fd2d
    FSTP float ptr [ESI + 0xe8c]        ; 0059fd33
    FLD float ptr [EDI + EAX*0x1 + 0x5c] ; 0059fd39
    FADD float ptr [EDI + 0x6a8]        ; 0059fd3d
    FSTP float ptr [ESI + 0xe9c]        ; 0059fd43
    FLD float ptr [EDI + EAX*0x1 + 0x60] ; 0059fd49
    FADD float ptr [EDI + 0x6ac]        ; 0059fd4d
    FSTP float ptr [ESI + 0xeac]        ; 0059fd53
    JMP 0x0059fc11                      ; 0059fd59
        ;   XREF to: 0059fc11 (UNCONDITIONAL_JUMP)  ; LAB_0059fc11

