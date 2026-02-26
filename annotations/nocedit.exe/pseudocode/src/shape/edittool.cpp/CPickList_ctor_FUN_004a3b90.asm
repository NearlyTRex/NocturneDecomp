; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPickList * __cdecl shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(CPickList *this_ptr)
;
; Parameters:
; CPickList *      Stack[0x4]:4   this_ptr
;
; XREF[76]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f2cc
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b345
;   core_boxactor.cpp_pickLightActorType_FUN_00423110 at 00423138
;   core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0 at 0042f449
;   core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430 at 0043c45e
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 004795c9
;   core_frankgen.cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770 at 004d2781
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db763
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e20ca
;   core_game.cpp_staticInit_FUN_004d76d0 at 004d7713
;   ... and 66 more
;
; Referenced Globals:
;   TerminatedCString s_OK_006239eb
;   TerminatedCString s_Cancel_006239ee
;   CStrList_vtable g_CPickListVTable
;
; Called Functions:
;   shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0
;   shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0
;   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
;   support_newmsg.cpp_getLocalizedString_FUN_005441f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3b90
        ;   Label: shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
    PUSH ESI                            ; 004a3b91
    PUSH EDI                            ; 004a3b92
    MOV EBX,dword ptr [ESP + 0x10]      ; 004a3b93
    PUSH EBX                            ; 004a3b97
    CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20 ; 004a3b98
        ;   XREF to: 004a2a20 (UNCONDITIONAL_CALL)  ; CStrList * shape_edittool.cpp_CStrList_ctor_FUN_004a2a20(CStrList * this_ptr)
    ADD ESP,0x4                         ; 004a3b9d
    ADD EAX,0x1a4                       ; 004a3ba0
    PUSH EAX                            ; 004a3ba5
    CALL shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0 ; 004a3ba6
        ;   XREF to: 004a5ae0 (UNCONDITIONAL_CALL)  ; CEdScrollBar * shape_edittool.cpp_CEdScrollBar_ctor_FUN_004a5ae0(CEdScrollBar * this_ptr)
    ADD ESP,0x4                         ; 004a3bab
    ADD EAX,0x38                        ; 004a3bae
    PUSH EAX                            ; 004a3bb1
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 004a3bb2
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    ADD ESP,0x4                         ; 004a3bb7
    ADD EAX,0xe4                        ; 004a3bba
    PUSH EAX                            ; 004a3bbf
    CALL shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0 ; 004a3bc0
        ;   XREF to: 004a64e0 (UNCONDITIONAL_CALL)  ; CEdButton * shape_edittool.cpp_CEdButton_ctor_FUN_004a64e0(CEdButton * this_ptr)
    LEA EBX,[EAX + 0xfffffd40]          ; 004a3bc5
    MOV dword ptr [EBX + 0xc],0x65d494  ; 004a3bcb | g_CPickListVTable
    MOV dword ptr [EBX + 0x1d8],0x0     ; 004a3bd2
    MOV dword ptr [EBX + 0x3a4],0xffffffff ; 004a3bdc
    MOV dword ptr [EBX + 0x194],0x0     ; 004a3be6
    MOV dword ptr [EBX + 0x198],0x0     ; 004a3bf0
    ADD ESP,0x4                         ; 004a3bfa
    MOV dword ptr [EBX + 0x19c],0x0     ; 004a3bfd
    PUSH 0x6239eb                       ; 004a3c07 | = "OK"
    MOV dword ptr [EBX + 0x1a0],0x0     ; 004a3c0c
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004a3c16
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004a3c1b
    LEA EDI,[EBX + 0x44]                ; 004a3c1e
    MOV ESI,EAX                         ; 004a3c21
    PUSH EDI                            ; 004a3c23
    MOV AL,byte ptr [ESI]               ; 004a3c24
        ;   Label: LAB_004a3c24
    MOV byte ptr [EDI],AL               ; 004a3c26
    CMP AL,0x0                          ; 004a3c28
    JZ 0x004a3c3c                       ; 004a3c2a
        ;   XREF to: 004a3c3c (CONDITIONAL_JUMP)  ; LAB_004a3c3c
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3c2c
    ADD ESI,0x2                         ; 004a3c2f
    MOV byte ptr [EDI + 0x1],AL         ; 004a3c32
    ADD EDI,0x2                         ; 004a3c35
    CMP AL,0x0                          ; 004a3c38
    JNZ 0x004a3c24                      ; 004a3c3a
        ;   XREF to: 004a3c24 (CONDITIONAL_JUMP)  ; LAB_004a3c24
    POP EDI                             ; 004a3c3c
        ;   Label: LAB_004a3c3c
    PUSH 0x6239ee                       ; 004a3c3d | = "Cancel"
    CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0 ; 004a3c42
        ;   XREF to: 005441f0 (UNCONDITIONAL_CALL)  ; char * support_newmsg.cpp_getLocalizedString_FUN_005441f0(char * key)
    ADD ESP,0x4                         ; 004a3c47
    LEA EDI,[EBX + 0xa8]                ; 004a3c4a
    MOV ESI,EAX                         ; 004a3c50
    PUSH EDI                            ; 004a3c52
    MOV AL,byte ptr [ESI]               ; 004a3c53
        ;   Label: LAB_004a3c53
    MOV byte ptr [EDI],AL               ; 004a3c55
    CMP AL,0x0                          ; 004a3c57
    JZ 0x004a3c6b                       ; 004a3c59
        ;   XREF to: 004a3c6b (CONDITIONAL_JUMP)  ; LAB_004a3c6b
    MOV AL,byte ptr [ESI + 0x1]         ; 004a3c5b
    ADD ESI,0x2                         ; 004a3c5e
    MOV byte ptr [EDI + 0x1],AL         ; 004a3c61
    ADD EDI,0x2                         ; 004a3c64
    CMP AL,0x0                          ; 004a3c67
    JNZ 0x004a3c53                      ; 004a3c69
        ;   XREF to: 004a3c53 (CONDITIONAL_JUMP)  ; LAB_004a3c53
    POP EDI                             ; 004a3c6b
        ;   Label: LAB_004a3c6b
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 004a3c6c
    MOV EAX,EBX                         ; 004a3c73
    MOV dword ptr [EBX + 0x40],0x0      ; 004a3c75
    POP EDI                             ; 004a3c7c
    POP ESI                             ; 004a3c7d
    POP EBX                             ; 004a3c7e
    RET                                 ; 004a3c7f

