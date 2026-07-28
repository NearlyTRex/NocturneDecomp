; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3i * __cdecl core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(CKeyFramedModel *this_ptr,int frame_index)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   frame_index
;
; XREF[6]:
;   core_dmodel.cpp_CKeyFramedModel_intersectRay_FUN_00453990 at 00453a36
;   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004530c0 at 004530dc
;   core_frankgen.cpp_FUN_004950a0 at 00495119
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610 at 004df63a
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_004df7c0 at 004df7d5
;   core_turret.cpp_FUN_005495f0 at 00549635
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 00453080
        ;   Label: core_dmodel.cpp_CKeyFramedModel_getFrameVertices_FUN_00453080
    MOV EAX,dword ptr [ESP + 0x8]       ; 00453084
    MOV EDX,dword ptr [ECX + 0x100]     ; 00453088
    CMP EAX,EDX                         ; 0045308e
    JL 0x00453095                       ; 00453090
        ;   XREF to: 00453095 (CONDITIONAL_JUMP)  ; LAB_00453095
    LEA EAX,[EDX + -0x1]                ; 00453092
    TEST EAX,EAX                        ; 00453095
        ;   Label: LAB_00453095
    JL 0x004530bb                       ; 00453097
        ;   XREF to: 004530bb (CONDITIONAL_JUMP)  ; LAB_004530bb
    MOV EDX,dword ptr [ECX + 0x104]     ; 00453099
        ;   Label: LAB_00453099
    IMUL EDX,EAX                        ; 0045309f
    LEA EAX,[EDX*0x4 + 0x0]             ; 004530a2
    SUB EAX,EDX                         ; 004530a9
    LEA EDX,[EAX*0x4 + 0x0]             ; 004530ab
    MOV EAX,dword ptr [ECX + 0x10c]     ; 004530b2
    ADD EAX,EDX                         ; 004530b8
    RET                                 ; 004530ba
    XOR EAX,EAX                         ; 004530bb
        ;   Label: LAB_004530bb
    JMP 0x00453099                      ; 004530bd
        ;   XREF to: 00453099 (UNCONDITIONAL_JUMP)  ; LAB_00453099

