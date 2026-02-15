; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_add_FUN_004a2b80(CStrList *this_ptr,char *string_data)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   string_data
;
; XREF[91]:
;   core_actor.cpp_CActorProperty_editInteractive_FUN_0040eed0 at 0040f3b9
;   core_bodypart.cpp_CBodyPart_initializeInEditor_FUN_0041b280 at 0041b3c6
;   core_boxactor.cpp_FUN_00423110 at 00423156
;   core_charactr.cpp_CCharacter_propertyActionCallback_FUN_0042f3e0 at 0042f544
;   core_cloth.cpp_CCloth_addCollisionBone_FUN_0043c430 at 0043c498
;   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 at 00479605
;   core_frankgen.cpp_CFrankenstienMachine_initializeInEditor_FUN_004d2770 at 004d27a5
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db780
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2100
;   core_menu.cpp_configureCustomKeyBindings_FUN_005138e0 at 00514746
;   ... and 81 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2b80
        ;   Label: shape_edittool.cpp_CStrList_add_FUN_004a2b80
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a2b81
    MOV ECX,dword ptr [ESP + 0xc]       ; 004a2b85
    PUSH ECX                            ; 004a2b89
    MOV EBX,dword ptr [EDX]             ; 004a2b8a
    PUSH EBX                            ; 004a2b8c
    MOV EAX,dword ptr [EDX + 0xc]       ; 004a2b8d
    PUSH EDX                            ; 004a2b90
    CALL dword ptr [EAX + 0xc]          ; 004a2b91
    ADD ESP,0xc                         ; 004a2b94
    POP EBX                             ; 004a2b97
    RET                                 ; 004a2b98

