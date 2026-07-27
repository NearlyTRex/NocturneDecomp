; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_stdio_c_sscanf_FUN_00566b5c(undefined4 param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[21]:
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e329
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047afb3
;   core_event.cpp_FUN_0047a350 at 0047a360
;   core_event.cpp_parseVectorLocation_FUN_0047a4c0 at 0047a4fd
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680 at 004d9704
;   core_script.cpp_CScript_getDialogDuration_FUN_005049b0 at 00504a29
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005006b0
;   core_script.cpp_parseBodyPartMask_FUN_004fe3d0 at 004fe420
;   core_setutil.cpp_C3DSCamera_load_FUN_005144e0 at 00514533
;   core_sound.cpp_playSfxInternal_FUN_0052d120 at 0052d3cd
;   ... and 11 more
;
; Called Functions:
;   crt_unknown.c_FUN_00566b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00566b5c
        ;   Label: crt_stdio.c_sscanf_FUN_00566b5c
    SUB ESP,0x4                         ; 00566b5d
    LEA EAX,[ESP + 0x14]                ; 00566b60
    MOV dword ptr [ESP],EAX             ; 00566b64
    MOV EAX,ESP                         ; 00566b67
    PUSH EAX                            ; 00566b69
    MOV EDX,dword ptr [ESP + 0x14]      ; 00566b6a
    PUSH EDX                            ; 00566b6e
    MOV EBX,dword ptr [ESP + 0x14]      ; 00566b6f
    PUSH EBX                            ; 00566b73
    CALL crt_unknown.c_FUN_00566b20     ; 00566b74
        ;   XREF to: 00566b20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00566b20()
    ADD ESP,0xc                         ; 00566b79
    ADD ESP,0x4                         ; 00566b7c
    POP EBX                             ; 00566b7f
    RET                                 ; 00566b80

