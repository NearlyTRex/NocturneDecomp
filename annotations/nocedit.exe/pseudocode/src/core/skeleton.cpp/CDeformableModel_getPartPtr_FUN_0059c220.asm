; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPart * __cdecl core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel *this_ptr,int part_index)
;
; Parameters:
; CDeformableModel * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   part_index
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b377
;   core_charactr.cpp_CCharacter_getPartDominantBone_FUN_0042a3f0 at 0042a408
;   core_script.cpp_editParameterValue_FUN_00562920 at 00563f65
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005976f7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059c220
        ;   Label: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
    LEA EAX,[EDX*0x4 + 0x0]             ; 0059c224
    SUB EAX,EDX                         ; 0059c22b
    MOV EDX,EAX                         ; 0059c22d
    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c22f
    SHL EDX,0x5                         ; 0059c233
    ADD EAX,0x7144                      ; 0059c236
    ADD EAX,EDX                         ; 0059c23b
    RET                                 ; 0059c23d

