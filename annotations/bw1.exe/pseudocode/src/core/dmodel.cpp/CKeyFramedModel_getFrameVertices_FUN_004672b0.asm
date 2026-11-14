; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0(CKeyFramedModel *this_ptr,int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004672f0 at 0046730c
;   core_dmodel.cpp_FUN_00467c00 at 00467ca2
;   core_frankgen.cpp_CFrankenstienMachine_updateAnchorPosition_FUN_004c5c60 at 004c5cd9
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0 at 0052251a
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0 at 005226b5
;   core_turret.cpp_CTurret_setup_FUN_005a21a0 at 005a21e5
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004672b0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_004672b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004672b4
    MOV EDX,dword ptr [ECX + 0x100]     ; 004672b8
    CMP EAX,EDX                         ; 004672be
    JL 0x004672c5                       ; 004672c0
        ;   XREF to: 004672c5 (CONDITIONAL_JUMP)  ; LAB_004672c5
    LEA EAX,[EDX + -0x1]                ; 004672c2
    TEST EAX,EAX                        ; 004672c5
        ;   Label: LAB_004672c5
    JL 0x004672eb                       ; 004672c7
        ;   XREF to: 004672eb (CONDITIONAL_JUMP)  ; LAB_004672eb
    MOV EDX,dword ptr [ECX + 0x104]     ; 004672c9
        ;   Label: LAB_004672c9
    IMUL EDX,EAX                        ; 004672cf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004672d2
    SUB EAX,EDX                         ; 004672d9
    LEA EDX,[EAX*0x4 + 0x0]             ; 004672db
    MOV EAX,dword ptr [ECX + 0x10c]     ; 004672e2
    ADD EAX,EDX                         ; 004672e8
    RET                                 ; 004672ea
    XOR EAX,EAX                         ; 004672eb
        ;   Label: LAB_004672eb
    JMP 0x004672c9                      ; 004672ed
        ;   XREF to: 004672c9 (UNCONDITIONAL_JUMP)  ; LAB_004672c9

