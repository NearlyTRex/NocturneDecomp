; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_mission_cpp_FUN_004f722c(CDemonMission *param_1,char *param_2)
;
;
; Referenced Globals:
;   CScript* g_CScriptPtr = 01ed73e0
;
; Called Functions:
;   core_mission.cpp_CDemonMission_prepareAllActors_FUN_004f6a80
;   core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70
;   core_mission.cpp_FUN_004f6de0
;   core_script.cpp_FUN_00528d50
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004f722c
        ;   Label: core_mission.cpp_FUN_004f722c
    PUSH EBX                            ; 004f7230
    PUSH ESI                            ; 004f7231
    PUSH EDI                            ; 004f7232
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f7233
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f7237
    LEA EDI,[EBX + 0x8]                 ; 004f723b
    MOV dword ptr [EBX + 0x4],0x1       ; 004f723e
    PUSH EDI                            ; 004f7245
    MOV AL,byte ptr [ESI]               ; 004f7246
        ;   Label: LAB_004f7246
    MOV byte ptr [EDI],AL               ; 004f7248
    CMP AL,0x0                          ; 004f724a
    JZ 0x004f725e                       ; 004f724c
        ;   XREF to: 004f725e (CONDITIONAL_JUMP)  ; LAB_004f725e
    MOV AL,byte ptr [ESI + 0x1]         ; 004f724e
    ADD ESI,0x2                         ; 004f7251
    MOV byte ptr [EDI + 0x1],AL         ; 004f7254
    ADD EDI,0x2                         ; 004f7257
    CMP AL,0x0                          ; 004f725a
    JNZ 0x004f7246                      ; 004f725c
        ;   XREF to: 004f7246 (CONDITIONAL_JUMP)  ; LAB_004f7246
    POP EDI                             ; 004f725e
        ;   Label: LAB_004f725e
    PUSH EBX                            ; 004f725f
    MOV dword ptr [EBX],0x0             ; 004f7260
    CALL core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70 ; 004f7266
        ;   XREF to: 004f6d70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeAllActors_FUN_004f6d70(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004f726b
    MOV EDX,dword ptr [0x006039e0]      ; 004f726e | g_CScriptPtr
    PUSH EDX                            ; 004f7274
    CALL core_script.cpp_FUN_00528d50   ; 004f7275
        ;   XREF to: 00528d50 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_FUN_00528d50()
    ADD ESP,0x4                         ; 004f727a
    PUSH EBX                            ; 004f727d
    CALL core_mission.cpp_CDemonMission_prepareAllActors_FUN_004f6a80 ; 004f727e
        ;   XREF to: 004f6a80 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_prepareAllActors_FUN_004f6a80(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004f7283
    PUSH 0x0                            ; 004f7286
    PUSH EBX                            ; 004f7288
    MOV dword ptr [EBX],0xffffffff      ; 004f7289
    CALL core_mission.cpp_FUN_004f6de0  ; 004f728f
        ;   XREF to: 004f6de0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6de0()
    ADD ESP,0x8                         ; 004f7294
    POP EDI                             ; 004f7297
    POP ESI                             ; 004f7298
    POP EBX                             ; 004f7299
    RET                                 ; 004f729a

