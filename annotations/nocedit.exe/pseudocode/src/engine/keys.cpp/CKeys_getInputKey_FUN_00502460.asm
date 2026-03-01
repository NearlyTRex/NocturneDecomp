; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_00502460(CKeys *this_ptr)
;
; Parameters:
; CKeys *          Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_setedit.cpp_CDemonSet_importSet_FUN_00578a20 at 00578be6
;   core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50 at 0057b260
;   core_setedit.cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0 at 005806cc
;   core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0 at 00582479
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 00583f4b
;   core_setedit.cpp_showRoomEditorHelp_FUN_00581590 at 005817bc
;   core_setedit.cpp_showVdirBoxEditorHelp_FUN_00582f30 at 0058315c
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00598de0
;   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 at 0049fe5c
;   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 at 0049ddba
;
; Called Functions:
;   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
;
; *****************************************************************************

section .text

    CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90 ; 00502460
        ;   XREF to: 005f2e90 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_005f2e90()
        ;   Label: engine_keys.cpp_CKeys_getInputKey_FUN_00502460
    AND EAX,0xff                        ; 00502465
    RET                                 ; 0050246a

