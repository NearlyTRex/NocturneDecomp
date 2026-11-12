; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408de0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[95]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a609
;   core_actor.cpp_FUN_004093a0 at 004094d2
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 004101b4
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041cb40 at 0041cb5b
;   core_boxactor.cpp_FUN_0041cda0 at 0041cdc9
;   core_chain.cpp_FUN_005b5ca0 at 005b5d70
;   core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00427bf0 at 00427c1a
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 at 00428900
;   core_charactr.cpp_CCharacter_testDamageLine_FUN_00427c80 at 00427cb4
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 at 00423868
;   ... and 85 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_004495a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408de0
        ;   Label: core_actor.cpp_FUN_00408de0
    PUSH EDI                            ; 00408de1
    SUB ESP,0x24                        ; 00408de2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00408de5
    MOV EBX,ESI                         ; 00408de9
    MOV ESI,dword ptr [ESP + 0x34]      ; 00408deb
    FLD float ptr [ESI + 0x4]           ; 00408def
    FLD float ptr [ESI + 0x8]           ; 00408df2
    FLD float ptr [ESI]                 ; 00408df5
    LEA EAX,[EDX + 0x20]                ; 00408df7
    MOV EDI,ESP                         ; 00408dfa
    LEA ESI,[ESP + 0xc]                 ; 00408dfc
    FSUB float ptr [EAX]                ; 00408e00
    FXCH ST2                            ; 00408e02
    FSUB float ptr [EAX + 0x4]          ; 00408e04
    FXCH                                ; 00408e07
    FSUB float ptr [EAX + 0x8]          ; 00408e09
    FXCH ST2                            ; 00408e0c
    FSTP float ptr [ESP + 0xc]          ; 00408e0e
    FSTP float ptr [ESP + 0x10]         ; 00408e12
    MOV EAX,ESP                         ; 00408e16
    FSTP float ptr [ESP + 0x14]         ; 00408e18
    PUSH EAX                            ; 00408e1c
    LEA EAX,[EDX + 0x3c]                ; 00408e1d
    MOVSD ES:EDI,ESI                    ; 00408e20
    MOVSD ES:EDI,ESI                    ; 00408e21
    MOVSD ES:EDI,ESI                    ; 00408e22
    PUSH EAX                            ; 00408e23
    LEA ESI,[ESP + 0x20]                ; 00408e24
    MOV EDI,EBX                         ; 00408e28
    CALL core_dirmat.cpp_FUN_004495a0   ; 00408e2a
        ;   XREF to: 004495a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004495a0()
    LEA ESI,[ESP + 0x20]                ; 00408e2f
    ADD ESP,0x8                         ; 00408e33
    MOVSD ES:EDI,ESI                    ; 00408e36
    MOVSD ES:EDI,ESI                    ; 00408e37
    MOVSD ES:EDI,ESI                    ; 00408e38
    MOV EAX,EBX                         ; 00408e39
    ADD ESP,0x24                        ; 00408e3b
    POP EDI                             ; 00408e3e
    POP EBX                             ; 00408e3f
    RET                                 ; 00408e40

