; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __stack2_esi core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(CDemonActor *this_ptr,CVector3f *input_world_point,CVector3f *output_local_point)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   input_world_point
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
;
; XREF[95]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a2fa
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409170 at 0040929f
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 at 0040fd34
;   core_boxactor.cpp_CBoxActor_constrainToExtents_FUN_00422d10 at 00422d39
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_00422ab0 at 00422acb
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 0042a18c
;   core_chain.cpp_CChain_getBoundingBox_FUN_00436be0 at 00436cb0
;   core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00431620 at 0043164a
;   core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_00434c60 at 00434d45
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240 at 004323a2
;   ... and 85 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408bb0
        ;   Label: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
    PUSH EDI                            ; 00408bb1
    SUB ESP,0x24                        ; 00408bb2
    MOV EDX,dword ptr [ESP + 0x30]      ; 00408bb5
    MOV EBX,ESI                         ; 00408bb9
    MOV ESI,dword ptr [ESP + 0x34]      ; 00408bbb
    FLD float ptr [ESI + 0x4]           ; 00408bbf
    FLD float ptr [ESI + 0x8]           ; 00408bc2
    FLD float ptr [ESI]                 ; 00408bc5
    LEA EAX,[EDX + 0x20]                ; 00408bc7
    MOV EDI,ESP                         ; 00408bca
    LEA ESI,[ESP + 0xc]                 ; 00408bcc
    FSUB float ptr [EAX]                ; 00408bd0
    FXCH ST2                            ; 00408bd2
    FSUB float ptr [EAX + 0x4]          ; 00408bd4
    FXCH                                ; 00408bd7
    FSUB float ptr [EAX + 0x8]          ; 00408bd9
    FXCH ST2                            ; 00408bdc
    FSTP float ptr [ESP + 0xc]          ; 00408bde
    FSTP float ptr [ESP + 0x10]         ; 00408be2
    MOV EAX,ESP                         ; 00408be6
    FSTP float ptr [ESP + 0x14]         ; 00408be8
    PUSH EAX                            ; 00408bec
    LEA EAX,[EDX + 0x3c]                ; 00408bed
    MOVSD ES:EDI,ESI                    ; 00408bf0
    MOVSD ES:EDI,ESI                    ; 00408bf1
    MOVSD ES:EDI,ESI                    ; 00408bf2
    PUSH EAX                            ; 00408bf3
    LEA ESI,[ESP + 0x20]                ; 00408bf4
    MOV EDI,EBX                         ; 00408bf8
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700 ; 00408bfa
        ;   XREF to: 0045f700 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700(CMatrix3x3f * this_ptr, CVector3f * input, CVector3f * output)
    LEA ESI,[ESP + 0x20]                ; 00408bff
    ADD ESP,0x8                         ; 00408c03
    MOVSD ES:EDI,ESI                    ; 00408c06
    MOVSD ES:EDI,ESI                    ; 00408c07
    MOVSD ES:EDI,ESI                    ; 00408c08
    MOV EAX,EBX                         ; 00408c09
    ADD ESP,0x24                        ; 00408c0b
    POP EDI                             ; 00408c0e
    POP EBX                             ; 00408c0f
    RET                                 ; 00408c10

