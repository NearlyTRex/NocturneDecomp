; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_simbox_cpp_CSimBox_archive_FUN_00517010(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_modelName_00591135
;   string s_weight_0059113f
;   string s_initialVelocity_00591146
;   string s_initRotVel_00591156
;   string s_triggerEvent_00591161
;   TerminatedCString s_type_0059116e
;   undefined4 DAT_005be964
;
; Called Functions:
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   core_actor.cpp_archiveVector_FUN_0040c450
;   core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517010
        ;   Label: core_simbox.cpp_CSimBox_archive_FUN_00517010
    MOV EBX,dword ptr [ESP + 0x8]       ; 00517011
    PUSH EBX                            ; 00517015
    CALL core_actor.cpp_CDemonActor_archive_FUN_0040d2d0 ; 00517016
        ;   XREF to: 0040d2d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_archive_FUN_0040d2d0()
    ADD ESP,0x4                         ; 0051701b
    PUSH 0x591135                       ; 0051701e | = "modelName"
    LEA EAX,[EBX + 0x150]               ; 00517023
    PUSH EAX                            ; 00517029
    CALL core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00 ; 0051702a
        ;   XREF to: 0040ca00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveKeyframedModelInstance_FUN_0040ca00()
    ADD ESP,0x8                         ; 0051702f
    PUSH 0x59113f                       ; 00517032 | = "weight"
    LEA EAX,[EBX + 0x2d0]               ; 00517037
    PUSH EAX                            ; 0051703d
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 0051703e
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005be964]      ; 00517043 | DAT_005be964
    ADD ESP,0x8                         ; 00517049
    CMP EDX,0x2                         ; 0051704c
    JGE 0x0051705c                      ; 0051704f
        ;   XREF to: 0051705c (CONDITIONAL_JUMP)  ; LAB_0051705c
    CMP dword ptr [0x005be964],0x3      ; 00517051 | DAT_005be964
    JGE 0x005170a3                      ; 00517058
        ;   XREF to: 005170a3 (CONDITIONAL_JUMP)  ; LAB_005170a3
    POP EBX                             ; 0051705a
    RET                                 ; 0051705b
    PUSH 0x591146                       ; 0051705c | = "initialVelocity"
        ;   Label: LAB_0051705c
    LEA EAX,[EBX + 0x338]               ; 00517061
    PUSH EAX                            ; 00517067
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 00517068
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 0051706d
    PUSH 0x591156                       ; 00517070 | = "initRotVel"
    LEA EAX,[EBX + 0x344]               ; 00517075
    PUSH EAX                            ; 0051707b
    CALL core_actor.cpp_archiveVector_FUN_0040c450 ; 0051707c
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveVector_FUN_0040c450()
    ADD ESP,0x8                         ; 00517081
    PUSH 0x591161                       ; 00517084 | = "triggerEvent"
    LEA EAX,[EBX + 0x2d4]               ; 00517089
    PUSH EAX                            ; 0051708f
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 00517090
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 00517095
    CMP dword ptr [0x005be964],0x3      ; 00517098 | DAT_005be964
    JGE 0x005170a3                      ; 0051709f
        ;   XREF to: 005170a3 (CONDITIONAL_JUMP)  ; LAB_005170a3
    POP EBX                             ; 005170a1
    RET                                 ; 005170a2
    PUSH 0x59116e                       ; 005170a3 | = "type"
        ;   Label: LAB_005170a3
    ADD EBX,0x2cc                       ; 005170a8
    PUSH EBX                            ; 005170ae
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 005170af
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    ADD ESP,0x8                         ; 005170b4
    POP EBX                             ; 005170b7
    RET                                 ; 005170b8

