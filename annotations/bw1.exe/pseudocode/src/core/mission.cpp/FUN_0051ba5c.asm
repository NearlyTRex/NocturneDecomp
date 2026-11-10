; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_0051ba5c(CDemonMission *param_1,CDemonMission *param_2)
;
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01e81c80
;
; Called Functions:
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0
;   core_mission.cpp_FUN_0051b610
;   core_script.cpp_FUN_00543740
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0051ba5c
        ;   Label: core_mission.cpp_FUN_0051ba5c
    PUSH EBX                            ; 0051ba60
    PUSH ESI                            ; 0051ba61
    PUSH EDI                            ; 0051ba62
    MOV EBX,dword ptr [ESP + 0x10]      ; 0051ba63
    MOV ESI,dword ptr [ESP + 0x14]      ; 0051ba67
    LEA EDI,[EBX + 0x8]                 ; 0051ba6b
    MOV dword ptr [EBX + 0x4],0x1       ; 0051ba6e
    PUSH EDI                            ; 0051ba75
    MOV AL,byte ptr [ESI]               ; 0051ba76
        ;   Label: LAB_0051ba76
    MOV byte ptr [EDI],AL               ; 0051ba78
    CMP AL,0x0                          ; 0051ba7a
    JZ 0x0051ba8e                       ; 0051ba7c
        ;   XREF to: 0051ba8e (CONDITIONAL_JUMP)  ; LAB_0051ba8e
    MOV AL,byte ptr [ESI + 0x1]         ; 0051ba7e
    ADD ESI,0x2                         ; 0051ba81
    MOV byte ptr [EDI + 0x1],AL         ; 0051ba84
    ADD EDI,0x2                         ; 0051ba87
    CMP AL,0x0                          ; 0051ba8a
    JNZ 0x0051ba76                      ; 0051ba8c
        ;   XREF to: 0051ba76 (CONDITIONAL_JUMP)  ; LAB_0051ba76
    POP EDI                             ; 0051ba8e
        ;   Label: LAB_0051ba8e
    PUSH EBX                            ; 0051ba8f
    MOV dword ptr [EBX],0x0             ; 0051ba90
    CALL core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0 ; 0051ba96
        ;   XREF to: 0051b5a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeAllActors_FUN_0051b5a0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051ba9b
    MOV EDX,dword ptr [0x00622ad0]      ; 0051ba9e | g_CScriptPtr
    PUSH EDX                            ; 0051baa4
    CALL core_script.cpp_FUN_00543740   ; 0051baa5
        ;   XREF to: 00543740 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00543740()
    ADD ESP,0x4                         ; 0051baaa
    PUSH EBX                            ; 0051baad
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0 ; 0051baae
        ;   XREF to: 0051b2b0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_0051b2b0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051bab3
    PUSH 0x0                            ; 0051bab6
    PUSH EBX                            ; 0051bab8
    MOV dword ptr [EBX],0xffffffff      ; 0051bab9
    CALL core_mission.cpp_FUN_0051b610  ; 0051babf
        ;   XREF to: 0051b610 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b610()
    ADD ESP,0x8                         ; 0051bac4
    POP EDI                             ; 0051bac7
    POP ESI                             ; 0051bac8
    POP EBX                             ; 0051bac9
    RET                                 ; 0051baca

