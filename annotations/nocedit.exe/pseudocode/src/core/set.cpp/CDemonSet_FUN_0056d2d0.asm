; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_set.cpp_CDemonSet_FUN_0056d2d0(CDemonSet * this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[16]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db564
;   core_mission.cpp_CDemonMission_process_FUN_00524250 at 00524374
;   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 at 0053e98a
;   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 at 00539e07
;   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470 at 0056a9e6
;   core_setedit.cpp_BackdropMaybe_FUN_005805a0 at 005806f2
;   core_setedit.cpp_CDemonSet_FUN_00581aa0 at 005828e8
;   core_setedit.cpp_CDemonSet_FUN_00583170 at 005848b9
;   core_setedit.cpp_CDemonSet_ViewerVisitSet_FUN_0057a940 at 0057ae29
;   core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0 at 0057f5c1
;   ... and 6 more
;
; Referenced Globals:
;   TerminatedCString s_core_set_cpp_00645e0a
;   char* g_CurrentDebugFilename = 0067d200
;   int g_CurrentDebugLine
;   CDemonCamera g_CDemonCameraInstance
;   int g_MasterLightCount
;   CDemonLight*[96] g_MasterLightList
;   undefined4 DAT_03276db4
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_free_FUN_0044c360
;   core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0
;   core_setutil.cpp_C3DSLight_doNothing_FUN_00586ca0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d2d0
        ;   Label: core_set.cpp_CDemonSet_FUN_0056d2d0
    PUSH ESI                            ; 0056d2d1
    PUSH EDI                            ; 0056d2d2
    PUSH EBP                            ; 0056d2d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0056d2d4
    MOV EDX,dword ptr [0x03276dac]      ; 0056d2d8 | int g_MasterLightCount
    XOR ESI,ESI                         ; 0056d2de
    TEST EDX,EDX                        ; 0056d2e0
    JLE 0x0056d31c                      ; 0056d2e2 | LAB_0056d31c
        ;   XREF to: 0056d31c (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 0056d2e4
    MOV EBP,0xa0a                       ; 0056d2e6
        ;   Label: LAB_0056d2e6
    MOV ECX,0x645e0a                    ; 0056d2eb | = "..\\core\\set.cpp" | s_core_set_cpp_00645e0a = ..\core\set.cpp
    MOV EAX,dword ptr [EBX + 0x3276db0] ; 0056d2f0 | CDemonLight *[96] g_MasterLightList
    MOV dword ptr [0x02f0d944],EBP      ; 0056d2f6 | int g_CurrentDebugLine
    MOV dword ptr [0x0067d20c],ECX      ; 0056d2fc | char * g_CurrentDebugFilename
    TEST EAX,EAX                        ; 0056d302
    JNZ 0x0056d367                      ; 0056d304 | LAB_0056d367
        ;   XREF to: 0056d367 (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [0x03276dac]      ; 0056d306 | int g_MasterLightCount
        ;   Label: LAB_0056d306
    ADD EBX,0x4                         ; 0056d30c
    XOR ECX,ECX                         ; 0056d30f
    INC ESI                             ; 0056d311
    MOV dword ptr [EBX + 0x3276dac],ECX ; 0056d312 | CDemonLight *[96] g_MasterLightList
    CMP ESI,EBP                         ; 0056d318
    JL 0x0056d2e6                       ; 0056d31a | LAB_0056d2e6
        ;   XREF to: 0056d2e6 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EDI + 0x19a2c]   ; 0056d31c
        ;   Label: LAB_0056d31c
    XOR EAX,EAX                         ; 0056d322
    XOR EBX,EBX                         ; 0056d324
    MOV [0x03276dac],EAX                ; 0056d326 | int g_MasterLightCount
    TEST EDX,EDX                        ; 0056d32b
    JLE 0x0056d350                      ; 0056d32d | LAB_0056d350
        ;   XREF to: 0056d350 (CONDITIONAL_JUMP)
    LEA ESI,[EDI + 0x19a30]             ; 0056d32f
    PUSH ESI                            ; 0056d335
        ;   Label: LAB_0056d335
    CALL core_setutil.cpp_C3DSLight_doNothing_FUN_00586ca0 ; 0056d336 | void core_setutil.cpp_C3DSLight_doNothing_FUN_00586ca0(C3DSLight * this_ptr)
        ;   XREF to: 00586ca0 (UNCONDITIONAL_CALL)
    INC EBX                             ; 0056d33b
    ADD ESP,0x4                         ; 0056d33c
    MOV EAX,dword ptr [EDI + 0x19a2c]   ; 0056d33f
    ADD ESI,0x1898                      ; 0056d345
    CMP EBX,EAX                         ; 0056d34b
    JL 0x0056d335                       ; 0056d34d | LAB_0056d335
        ;   XREF to: 0056d335 (CONDITIONAL_JUMP)
    NOP                                 ; 0056d34f
    CALL core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0 ; 0056d350 | void core_dlight.cpp_resetRestoreMemoryAllocator_FUN_004729c0()
        ;   Label: LAB_0056d350
        ;   XREF to: 004729c0 (UNCONDITIONAL_CALL)
    PUSH 0x32758e4                      ; 0056d355 | CDemonCamera g_CDemonCameraInstance
    CALL core_dcamera.cpp_CDemonCamera_free_FUN_0044c360 ; 0056d35a | void core_dcamera.cpp_CDemonCamera_free_FUN_0044c360(CDemonCamera * this_ptr)
        ;   XREF to: 0044c360 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0056d35f
    POP EBP                             ; 0056d362
    POP EDI                             ; 0056d363
    POP ESI                             ; 0056d364
    POP EBX                             ; 0056d365
    RET                                 ; 0056d366
    PUSH 0x2                            ; 0056d367
        ;   Label: LAB_0056d367
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0056d369
    PUSH EAX                            ; 0056d36c
    CALL dword ptr [EDX]                ; 0056d36d
    ADD ESP,0x8                         ; 0056d36f
    JMP 0x0056d306                      ; 0056d372 | LAB_0056d306
        ;   XREF to: 0056d306 (UNCONDITIONAL_JUMP)

