; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_passngr_cpp_CPassenger_archive_FUN_004efb30(int param_1)
;
;
; Referenced Globals:
;   string s_transformEvent_0058cc10
;   string s_wolfModelName_0058cc1f
;   string s_morphTime_0058cc2d
;   string s_modelName_0058cc37
;   string s_motion_state_0058cc41
;   string s_wolfSize_0058cc4e
;   string s_nameOfWolf_0058cc57
;   string s_transformWav_0058cc62
;   undefined4 DAT_005be078
;
; Called Functions:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80
;   core_actor.cpp_archiveFloat_FUN_0040c880
;   core_actor.cpp_archiveString_FUN_0040c6d0
;   FUN_0040cb00
;   FUN_004eed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efb30
        ;   Label: core_passngr.cpp_CPassenger_archive_FUN_004efb30
    PUSH ESI                            ; 004efb31
    MOV EBX,dword ptr [ESP + 0xc]       ; 004efb32
    PUSH EBX                            ; 004efb36
    CALL FUN_004eed10                   ; 004efb37
        ;   XREF to: 004eed10 (UNCONDITIONAL_CALL)  ; undefined FUN_004eed10()
    ADD ESP,0x4                         ; 004efb3c
    PUSH 0x58cc10                       ; 004efb3f | = "transformEvent"
    LEA ESI,[EBX + 0x1f570]             ; 004efb44
    PUSH ESI                            ; 004efb4a
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004efb4b
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004efb50
    PUSH 0x58cc1f                       ; 004efb53 | = "wolfModelName"
    LEA ESI,[EBX + 0x1f5d4]             ; 004efb58
    PUSH ESI                            ; 004efb5e
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004efb5f
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004efb64
    PUSH 0x58cc2d                       ; 004efb67 | = "morphTime"
    LEA ESI,[EBX + 0x202a8]             ; 004efb6c
    PUSH ESI                            ; 004efb72
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004efb73
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    MOV EDX,dword ptr [0x005be078]      ; 004efb78 | DAT_005be078
    ADD ESP,0x8                         ; 004efb7e
    CMP EDX,0x2                         ; 004efb81
    JL 0x004efbad                       ; 004efb84
        ;   XREF to: 004efbad (CONDITIONAL_JUMP)  ; LAB_004efbad
    CMP EDX,0x5                         ; 004efb86
    JGE 0x004efbad                      ; 004efb89
        ;   XREF to: 004efbad (CONDITIONAL_JUMP)  ; LAB_004efbad
    PUSH 0x58cc37                       ; 004efb8b | = "modelName"
    LEA ESI,[EBX + 0x150]               ; 004efb90
    PUSH ESI                            ; 004efb96
    CALL core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80 ; 004efb97
        ;   XREF to: 0040ca80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveDeformableModelInstance_FUN_0040ca80()
    ADD ESP,0x8                         ; 004efb9c
    PUSH 0x58cc41                       ; 004efb9f | = "motion state"
    PUSH ESI                            ; 004efba4
    CALL FUN_0040cb00                   ; 004efba5
        ;   XREF to: 0040cb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cb00()
    ADD ESP,0x8                         ; 004efbaa
    CMP dword ptr [0x005be078],0x3      ; 004efbad | DAT_005be078
        ;   Label: LAB_004efbad
    JL 0x004efbca                       ; 004efbb4
        ;   XREF to: 004efbca (CONDITIONAL_JUMP)  ; LAB_004efbca
    PUSH 0x58cc4e                       ; 004efbb6 | = "wolfSize"
    LEA ESI,[EBX + 0x202ac]             ; 004efbbb
    PUSH ESI                            ; 004efbc1
    CALL core_actor.cpp_archiveFloat_FUN_0040c880 ; 004efbc2
        ;   XREF to: 0040c880 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040c880()
    ADD ESP,0x8                         ; 004efbc7
    CMP dword ptr [0x005be078],0x4      ; 004efbca | DAT_005be078
        ;   Label: LAB_004efbca
    JL 0x004efbe7                       ; 004efbd1
        ;   XREF to: 004efbe7 (CONDITIONAL_JUMP)  ; LAB_004efbe7
    PUSH 0x58cc57                       ; 004efbd3 | = "nameOfWolf"
    LEA ESI,[EBX + 0x1f5f4]             ; 004efbd8
    PUSH ESI                            ; 004efbde
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004efbdf
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004efbe4
    CMP dword ptr [0x005be078],0x6      ; 004efbe7 | DAT_005be078
        ;   Label: LAB_004efbe7
    JGE 0x004efbf3                      ; 004efbee
        ;   XREF to: 004efbf3 (CONDITIONAL_JUMP)  ; LAB_004efbf3
    POP ESI                             ; 004efbf0
    POP EBX                             ; 004efbf1
    RET                                 ; 004efbf2
    PUSH 0x58cc62                       ; 004efbf3 | = "transformWav"
        ;   Label: LAB_004efbf3
    ADD EBX,0x1f614                     ; 004efbf8
    PUSH EBX                            ; 004efbfe
    CALL core_actor.cpp_archiveString_FUN_0040c6d0 ; 004efbff
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveString_FUN_0040c6d0()
    ADD ESP,0x8                         ; 004efc04
    POP ESI                             ; 004efc07
    POP EBX                             ; 004efc08
    RET                                 ; 004efc09

