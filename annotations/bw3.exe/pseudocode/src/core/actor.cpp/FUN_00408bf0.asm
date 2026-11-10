; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_actor_cpp_FUN_00408bf0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f60 at 0040a463
;   core_actor.cpp_FUN_004091b0 at 004092df
;   core_blundrbs.cpp_CBlunderbus_fire_FUN_00410490 at 0041130e
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ff20 at 0041ff3b
;   core_boxactor.cpp_FUN_004201a0 at 004201c9
;   core_burncrss.cpp_CBurncross_fire_FUN_00424550 at 00424a2d
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00427417
;   core_chain.cpp_CChain_getBoundingBox_FUN_0042a860 at 0042a930
;   core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_004309a0 at 004309ca
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660 at 004317d5
;   ... and 55 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045b870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408bf0
        ;   Label: core_actor.cpp_FUN_00408bf0
    PUSH EDI                            ; 00408bf1
    SUB ESP,0x24                        ; 00408bf2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00408bf5
    MOV EBX,ESI                         ; 00408bf9
    MOV ESI,dword ptr [ESP + 0x34]      ; 00408bfb
    FLD float ptr [ESI + 0x4]           ; 00408bff
    FLD float ptr [ESI + 0x8]           ; 00408c02
    FLD float ptr [ESI]                 ; 00408c05
    LEA EAX,[EDX + 0x20]                ; 00408c07
    MOV EDI,ESP                         ; 00408c0a
    LEA ESI,[ESP + 0xc]                 ; 00408c0c
    FSUB float ptr [EAX]                ; 00408c10
    FXCH ST2                            ; 00408c12
    FSUB float ptr [EAX + 0x4]          ; 00408c14
    FXCH                                ; 00408c17
    FSUB float ptr [EAX + 0x8]          ; 00408c19
    FXCH ST2                            ; 00408c1c
    FSTP float ptr [ESP + 0xc]          ; 00408c1e
    FSTP float ptr [ESP + 0x10]         ; 00408c22
    MOV EAX,ESP                         ; 00408c26
    FSTP float ptr [ESP + 0x14]         ; 00408c28
    PUSH EAX                            ; 00408c2c
    LEA EAX,[EDX + 0x3c]                ; 00408c2d
    MOVSD ES:EDI,ESI                    ; 00408c30
    MOVSD ES:EDI,ESI                    ; 00408c31
    MOVSD ES:EDI,ESI                    ; 00408c32
    PUSH EAX                            ; 00408c33
    LEA ESI,[ESP + 0x20]                ; 00408c34
    MOV EDI,EBX                         ; 00408c38
    CALL core_dirmat.cpp_FUN_0045b870   ; 00408c3a
        ;   XREF to: 0045b870 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b870()
    LEA ESI,[ESP + 0x20]                ; 00408c3f
    ADD ESP,0x8                         ; 00408c43
    MOVSD ES:EDI,ESI                    ; 00408c46
    MOVSD ES:EDI,ESI                    ; 00408c47
    MOVSD ES:EDI,ESI                    ; 00408c48
    MOV EAX,EBX                         ; 00408c49
    ADD ESP,0x24                        ; 00408c4b
    POP EDI                             ; 00408c4e
    POP EBX                             ; 00408c4f
    RET                                 ; 00408c50

