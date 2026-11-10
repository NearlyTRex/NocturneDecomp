; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0(CKeyFramedModel *this_ptr,int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_0044e720 at 0044e73c
;   core_dmodel.cpp_FUN_0044f020 at 0044f0c2
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004accb0 at 004acd29
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0 at 005b63da
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560 at 005b6575
;   core_turret.cpp_CTurret_setup_FUN_0057e550 at 0057e595
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0044e6e0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_0044e6e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044e6e4
    MOV EDX,dword ptr [ECX + 0x100]     ; 0044e6e8
    CMP EAX,EDX                         ; 0044e6ee
    JL 0x0044e6f5                       ; 0044e6f0
        ;   XREF to: 0044e6f5 (CONDITIONAL_JUMP)  ; LAB_0044e6f5
    LEA EAX,[EDX + -0x1]                ; 0044e6f2
    TEST EAX,EAX                        ; 0044e6f5
        ;   Label: LAB_0044e6f5
    JL 0x0044e71b                       ; 0044e6f7
        ;   XREF to: 0044e71b (CONDITIONAL_JUMP)  ; LAB_0044e71b
    MOV EDX,dword ptr [ECX + 0x104]     ; 0044e6f9
        ;   Label: LAB_0044e6f9
    IMUL EDX,EAX                        ; 0044e6ff
    LEA EAX,[EDX*0x4 + 0x0]             ; 0044e702
    SUB EAX,EDX                         ; 0044e709
    LEA EDX,[EAX*0x4 + 0x0]             ; 0044e70b
    MOV EAX,dword ptr [ECX + 0x10c]     ; 0044e712
    ADD EAX,EDX                         ; 0044e718
    RET                                 ; 0044e71a
    XOR EAX,EAX                         ; 0044e71b
        ;   Label: LAB_0044e71b
    JMP 0x0044e6f9                      ; 0044e71d
        ;   XREF to: 0044e6f9 (UNCONDITIONAL_JUMP)  ; LAB_0044e6f9

