; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_slew_cpp_CSlew_init_FUN_005a2060(CSlew *this_ptr)
;
; Parameters:
; CSlew *          Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_course.cpp_CCourse_preview_FUN_00443bc0 at 00443bf0
;   core_game.cpp_CGame_processFrame_FUN_004da100 at 004da23f
;   core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440 at 0050b643
;   core_msnedit.cpp_CDemonMission_editActorsInSet_FUN_005390f0 at 005392de
;   core_msnedit.cpp_CDemonMission_editGore_FUN_0053e220 at 0053e344
;   core_setedit.cpp_CDemonSet_editCameraPosition_FUN_0057d660 at 0057d707
;   core_setedit.cpp_CDemonSet_positionLight_FUN_0057ae50 at 0057aecb
;   core_setedit.cpp_CDemonSet_showRoomEditor_FUN_00581aa0 at 00581af2
;   core_setedit.cpp_CDemonSet_showScenePreview_FUN_0057a940 at 0057a97c
;   core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170 at 005831c5
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a2060
        ;   Label: core_slew.cpp_CSlew_init_FUN_005a2060
    MOV dword ptr [EDX + 0x8],0x0       ; 005a2064
    LEA EAX,[EDX + 0xc]                 ; 005a206b
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a206e
    MOV dword ptr [EDX + 0x4],ECX       ; 005a2071
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a2074
    MOV dword ptr [EDX],ECX             ; 005a2077
    MOV dword ptr [EAX + 0x8],0x0       ; 005a2079
    MOV ECX,dword ptr [EAX + 0x8]       ; 005a2080
    MOV dword ptr [EAX + 0x4],ECX       ; 005a2083
    MOV ECX,dword ptr [EAX + 0x4]       ; 005a2086
    MOV dword ptr [EAX],ECX             ; 005a2089
    MOV dword ptr [EDX + 0x18],0x41e00000 ; 005a208b
    RET                                 ; 005a2092

