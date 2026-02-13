; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDoor * __cdecl core_door_cpp_CDoor_ctor_FUN_0047fad0(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_door.cpp_factoryFunc_FUN_0047fa90 at 0047faaa
;
; Referenced Globals:
;   TerminatedCString s_churchd01_kfm_00621096
;   TerminatedCString s_defaultDoorOpen_006210a4
;   undefined4 s_efaultDoorOpen_006210a5
;   undefined4 s_faultDoorOpen_006210a6
;   undefined4 s_aultDoorOpen_006210a7
;   TerminatedCString s_defaultDoorClose_006210b4
;   undefined4 s_efaultDoorClose_006210b5
;   undefined4 s_faultDoorClose_006210b6
;   undefined4 s_aultDoorClose_006210b7
;   TerminatedCString s_door_locked_wav_006210c5
;   undefined4 s_oor-locked.wav_006210c6
;   undefined4 s_or-locked.wav_006210c7
;   undefined4 s_r-locked.wav_006210c8
;   CDemonActor_vtable g_CDoorVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_event.cpp_CRuleList_clear_FUN_004b1670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047fad0
        ;   Label: core_door.cpp_CDoor_ctor_FUN_0047fad0
    PUSH ESI                            ; 0047fad1
    PUSH EDI                            ; 0047fad2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0047fad3
    PUSH EBX                            ; 0047fad7
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 0047fad8
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0047fadd
    ADD EAX,0x158                       ; 0047fae0
    PUSH EAX                            ; 0047fae5
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 0047fae6
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0047faeb
    LEA EBX,[EAX + 0x320]               ; 0047faee
    PUSH EBX                            ; 0047faf4
    CALL core_event.cpp_CRuleList_clear_FUN_004b1670 ; 0047faf5
        ;   XREF to: 004b1670 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CRuleList_clear_FUN_004b1670(CRuleList * this_ptr)
    ADD ESP,0x4                         ; 0047fafa
    SUB EBX,0x478                       ; 0047fafd
    PUSH 0x621096                       ; 0047fb03 | = "churchd01.kfm"
    LEA EAX,[EBX + 0x158]               ; 0047fb08
    PUSH EAX                            ; 0047fb0e
    MOV dword ptr [EBX + 0x154],0x65cbf4 ; 0047fb0f | g_CDoorVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 0047fb19
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d8],0x0     ; 0047fb1e
    ADD ESP,0x8                         ; 0047fb28
    MOV dword ptr [EBX + 0x2dc],0x1     ; 0047fb2b
    LEA EAX,[EBX + 0x994]               ; 0047fb35
    MOV dword ptr [EBX + 0x2e0],0x0     ; 0047fb3b
    LEA EDX,[EBX + 0x20]                ; 0047fb45
    MOV dword ptr [EBX + 0x2e4],0x0     ; 0047fb48
    CMP EAX,EDX                         ; 0047fb52
    JZ 0x0047fb66                       ; 0047fb54
        ;   XREF to: 0047fb66 (CONDITIONAL_JUMP)  ; LAB_0047fb66
    MOV ECX,dword ptr [EDX]             ; 0047fb56
    MOV dword ptr [EAX],ECX             ; 0047fb58
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047fb5a
    MOV dword ptr [EAX + 0x4],ECX       ; 0047fb5d
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047fb60
    MOV dword ptr [EAX + 0x8],ECX       ; 0047fb63
    MOV ESI,0x6210a4                    ; 0047fb66 | = "defaultDoorOpen"
        ;   Label: LAB_0047fb66
    LEA EDI,[EBX + 0x2e8]               ; 0047fb6b
    PUSH EDI                            ; 0047fb71
    MOV AL,byte ptr [ESI]               ; 0047fb72 | = "defaultDoorOpen" | s_faultDoorOpen_006210a6
        ;   Label: LAB_0047fb72
    MOV byte ptr [EDI],AL               ; 0047fb74
    CMP AL,0x0                          ; 0047fb76
    JZ 0x0047fb8a                       ; 0047fb78
        ;   XREF to: 0047fb8a (CONDITIONAL_JUMP)  ; LAB_0047fb8a
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fb7a | s_efaultDoorOpen_006210a5 | s_aultDoorOpen_006210a7
    ADD ESI,0x2                         ; 0047fb7d
    MOV byte ptr [EDI + 0x1],AL         ; 0047fb80
    ADD EDI,0x2                         ; 0047fb83
    CMP AL,0x0                          ; 0047fb86
    JNZ 0x0047fb72                      ; 0047fb88
        ;   XREF to: 0047fb72 (CONDITIONAL_JUMP)  ; LAB_0047fb72
    POP EDI                             ; 0047fb8a
        ;   Label: LAB_0047fb8a
    MOV ESI,0x6210b4                    ; 0047fb8b | = "defaultDoorClose"
    LEA EDI,[EBX + 0x34c]               ; 0047fb90
    PUSH EDI                            ; 0047fb96
    MOV AL,byte ptr [ESI]               ; 0047fb97 | = "defaultDoorClose" | s_faultDoorClose_006210b6
        ;   Label: LAB_0047fb97
    MOV byte ptr [EDI],AL               ; 0047fb99
    CMP AL,0x0                          ; 0047fb9b
    JZ 0x0047fbaf                       ; 0047fb9d
        ;   XREF to: 0047fbaf (CONDITIONAL_JUMP)  ; LAB_0047fbaf
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fb9f | s_efaultDoorClose_006210b5 | s_aultDoorClose_006210b7
    ADD ESI,0x2                         ; 0047fba2
    MOV byte ptr [EDI + 0x1],AL         ; 0047fba5
    ADD EDI,0x2                         ; 0047fba8
    CMP AL,0x0                          ; 0047fbab
    JNZ 0x0047fb97                      ; 0047fbad
        ;   XREF to: 0047fb97 (CONDITIONAL_JUMP)  ; LAB_0047fb97
    POP EDI                             ; 0047fbaf
        ;   Label: LAB_0047fbaf
    MOV ESI,0x6210c5                    ; 0047fbb0 | = "door-locked.wav"
    MOV byte ptr [EBX + 0x864],0x0      ; 0047fbb5
    LEA EDI,[EBX + 0x92c]               ; 0047fbbc
    MOV byte ptr [EBX + 0x8c8],0x0      ; 0047fbc2
    PUSH EDI                            ; 0047fbc9
    MOV AL,byte ptr [ESI]               ; 0047fbca | = "door-locked.wav" | s_or-locked.wav_006210c7
        ;   Label: LAB_0047fbca
    MOV byte ptr [EDI],AL               ; 0047fbcc
    CMP AL,0x0                          ; 0047fbce
    JZ 0x0047fbe2                       ; 0047fbd0
        ;   XREF to: 0047fbe2 (CONDITIONAL_JUMP)  ; LAB_0047fbe2
    MOV AL,byte ptr [ESI + 0x1]         ; 0047fbd2 | s_oor-locked.wav_006210c6 | s_r-locked.wav_006210c8
    ADD ESI,0x2                         ; 0047fbd5
    MOV byte ptr [EDI + 0x1],AL         ; 0047fbd8
    ADD EDI,0x2                         ; 0047fbdb
    CMP AL,0x0                          ; 0047fbde
    JNZ 0x0047fbca                      ; 0047fbe0
        ;   XREF to: 0047fbca (CONDITIONAL_JUMP)  ; LAB_0047fbca
    POP EDI                             ; 0047fbe2
        ;   Label: LAB_0047fbe2
    MOV dword ptr [EBX + 0x990],0x0     ; 0047fbe3
    MOV dword ptr [EBX + 0x9ac],0x0     ; 0047fbed
    MOV dword ptr [EBX + 0x9b0],0x3f800000 ; 0047fbf7
    MOV dword ptr [EBX + 0x9b4],0x3f800000 ; 0047fc01
    MOV dword ptr [EBX + 0x9b8],0x3f800000 ; 0047fc0b
    MOV dword ptr [EBX + 0x2d4],0x0     ; 0047fc15
    MOV byte ptr [EBX + 0x3b0],0x0      ; 0047fc1f
    MOV byte ptr [EBX + 0x414],0x0      ; 0047fc26
    MOV dword ptr [EBX + 0x9c8],0x0     ; 0047fc2d
    MOV dword ptr [EBX + 0x9cc],0x0     ; 0047fc37
    MOV dword ptr [EBX + 0x9d0],0x1     ; 0047fc41
    MOV dword ptr [EBX + 0x9d4],0x0     ; 0047fc4b
    MOV dword ptr [EBX + 0x9d8],0x3     ; 0047fc55
    MOV EAX,EBX                         ; 0047fc5f
    MOV dword ptr [EBX + 0x9dc],0x1     ; 0047fc61
    POP EDI                             ; 0047fc6b
    POP ESI                             ; 0047fc6c
    POP EBX                             ; 0047fc6d
    RET                                 ; 0047fc6e

