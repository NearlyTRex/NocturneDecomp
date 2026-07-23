; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_door_cpp_CDoor_setup_FUN_004551f0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_defaultDoorOpen_0057d047
;   TerminatedCString s_sOpen_0057d057
;   TerminatedCString s_defaultDoorClose_0057d05e
;   TerminatedCString s_sClose_0057d06f
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00409fc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510
;   crt_stdio.c_sprintf_FUN_00563c90
;   crt_string.c__strcmp_FUN_005649c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004551f0
        ;   Label: core_door.cpp_CDoor_setup_FUN_004551f0
    PUSH ESI                            ; 004551f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004551f2
    LEA EAX,[EBX + 0x150]               ; 004551f6
    PUSH EAX                            ; 004551fc
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510 ; 004551fd
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00454510()
    ADD ESP,0x4                         ; 00455202
    PUSH EBX                            ; 00455205
    CALL core_actor.cpp_CDemonActor_setup_FUN_00409fc0 ; 00455206
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setup_FUN_00409fc0()
    ADD ESP,0x4                         ; 0045520b
    PUSH 0x57d047                       ; 0045520e | = "defaultDoorOpen"
    LEA ESI,[EBX + 0x2e0]               ; 00455213
    PUSH ESI                            ; 00455219
    CALL crt_string.c__strcmp_FUN_005649c0 ; 0045521a
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 0045521f
    TEST EAX,EAX                        ; 00455222
    JNZ 0x00455235                      ; 00455224
        ;   XREF to: 00455235 (CONDITIONAL_JUMP)  ; LAB_00455235
    PUSH EBX                            ; 00455226
    PUSH 0x57d057                       ; 00455227 | = "%sOpen"
    PUSH ESI                            ; 0045522c
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0045522d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 00455232
    PUSH 0x57d05e                       ; 00455235 | = "defaultDoorClose"
        ;   Label: LAB_00455235
    LEA ESI,[EBX + 0x344]               ; 0045523a
    PUSH ESI                            ; 00455240
    CALL crt_string.c__strcmp_FUN_005649c0 ; 00455241
        ;   XREF to: 005649c0 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strcmp_FUN_005649c0()
    ADD ESP,0x8                         ; 00455246
    TEST EAX,EAX                        ; 00455249
    JZ 0x00455250                       ; 0045524b
        ;   XREF to: 00455250 (CONDITIONAL_JUMP)  ; LAB_00455250
    POP ESI                             ; 0045524d
    POP EBX                             ; 0045524e
    RET                                 ; 0045524f
    PUSH EBX                            ; 00455250
        ;   Label: LAB_00455250
    PUSH 0x57d06f                       ; 00455251 | = "%sClose"
    PUSH ESI                            ; 00455256
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 00455257
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0xc                         ; 0045525c
    POP ESI                             ; 0045525f
    POP EBX                             ; 00455260
    RET                                 ; 00455261

