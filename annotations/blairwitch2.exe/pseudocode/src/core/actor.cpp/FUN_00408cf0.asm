; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408cf0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; XREF[63]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a25f
;   core_actor.cpp_FUN_004090f0 at 00409186
;   core_actor.cpp_FUN_004093a0 at 004095ef
;   core_baron.cpp_CBaron_attachToOwner_FUN_0040fef0 at 0040ff5b
;   core_baron.cpp_CBaron_updateMountedPosition_FUN_00410080 at 004100cb
;   core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380 at 005a051d
;   core_batman.cpp_CBatman_processDismemberment_FUN_00413f40 at 00414252
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 at 0041699b
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c481
;   core_charactr.cpp_CCharacter_dropCarriedObject_FUN_00428d60 at 00428d98
;   ... and 53 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_00449530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408cf0
        ;   Label: core_actor.cpp_FUN_00408cf0
    PUSH EDI                            ; 00408cf1
    SUB ESP,0xc                         ; 00408cf2
    MOV EBX,ESI                         ; 00408cf5
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408cf7
    MOV ESI,dword ptr [ESP + 0x18]      ; 00408cfb
    PUSH EDX                            ; 00408cff
    ADD ESI,0x3c                        ; 00408d00
    PUSH ESI                            ; 00408d03
    LEA ESI,[ESP + 0x8]                 ; 00408d04
    MOV EDI,EBX                         ; 00408d08
    CALL core_dirmat.cpp_FUN_00449530   ; 00408d0a
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    LEA ESI,[ESP + 0x8]                 ; 00408d0f
    ADD ESP,0x8                         ; 00408d13
    MOVSD ES:EDI,ESI                    ; 00408d16
    MOVSD ES:EDI,ESI                    ; 00408d17
    MOVSD ES:EDI,ESI                    ; 00408d18
    MOV EAX,EBX                         ; 00408d19
    ADD ESP,0xc                         ; 00408d1b
    POP EDI                             ; 00408d1e
    POP EBX                             ; 00408d1f
    RET                                 ; 00408d20

