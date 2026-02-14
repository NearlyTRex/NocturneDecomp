; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_mission_cpp_CDemonMission_createFromSingleSet_FUN_005243a0(CDemonMission *this_ptr,char *set_name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   set_name
;
; XREF[1]:
;   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 at 00538b8a
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 0310f858
;   CScript g_CScriptInstance
;
; Called Functions:
;   core_mission.cpp_CDemonMission_FUN_00523f50
;   core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0
;   core_script.cpp_CScript_clear_FUN_00559870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005243a0
        ;   Label: core_mission.cpp_CDemonMission_createFromSingleSet_FUN_005243a0
    PUSH ESI                            ; 005243a1
    PUSH EDI                            ; 005243a2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005243a3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005243a7
    LEA EDI,[EBX + 0x148]               ; 005243ab
    MOV dword ptr [EBX + 0x144],0x1     ; 005243b1
    PUSH EDI                            ; 005243bb
    MOV AL,byte ptr [ESI]               ; 005243bc
        ;   Label: LAB_005243bc
    MOV byte ptr [EDI],AL               ; 005243be
    CMP AL,0x0                          ; 005243c0
    JZ 0x005243d4                       ; 005243c2
        ;   XREF to: 005243d4 (CONDITIONAL_JUMP)  ; LAB_005243d4
    MOV AL,byte ptr [ESI + 0x1]         ; 005243c4
    ADD ESI,0x2                         ; 005243c7
    MOV byte ptr [EDI + 0x1],AL         ; 005243ca
    ADD EDI,0x2                         ; 005243cd
    CMP AL,0x0                          ; 005243d0
    JNZ 0x005243bc                      ; 005243d2
        ;   XREF to: 005243bc (CONDITIONAL_JUMP)  ; LAB_005243bc
    POP EDI                             ; 005243d4
        ;   Label: LAB_005243d4
    PUSH EBX                            ; 005243d5
    MOV dword ptr [EBX],0x0             ; 005243d6
    CALL core_mission.cpp_CDemonMission_FUN_00523f50 ; 005243dc
        ;   XREF to: 00523f50 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523f50(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005243e1
    MOV EDX,dword ptr [0x00680d50]      ; 005243e4 | g_CScriptInstance | g_CScriptPtr
    PUSH EDX                            ; 005243ea | g_CScriptInstance
    CALL core_script.cpp_CScript_clear_FUN_00559870 ; 005243eb
        ;   XREF to: 00559870 (UNCONDITIONAL_CALL)  ; void core_script.cpp_CScript_clear_FUN_00559870(CScript * this_ptr)
    ADD ESP,0x4                         ; 005243f0
    PUSH EBX                            ; 005243f3
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0 ; 005243f4
        ;   XREF to: 00523cf0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_00523cf0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 005243f9
    PUSH 0x0                            ; 005243fc
    PUSH EBX                            ; 005243fe
    MOV dword ptr [EBX],0xffffffff      ; 005243ff
    CALL core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0 ; 00524405
        ;   XREF to: 00523fb0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_loadSet_FUN_00523fb0(CDemonMission * this_ptr, int set_index)
    ADD ESP,0x8                         ; 0052440a
    POP EDI                             ; 0052440d
    POP ESI                             ; 0052440e
    POP EBX                             ; 0052440f
    RET                                 ; 00524410

