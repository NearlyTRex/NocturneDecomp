; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor *this_ptr,CVector3f *output_local_point,CVector3f *input_world_point)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_local_point
; CVector3f *      Stack[0xc]:4   input_world_point
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[76]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b656
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_0040a740 at 0040a828
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410cc0 at 00410cfd
;   core_boxactor.cpp_CBoxActor_FUN_0041f190 at 0041f1b1
;   core_boxactor.cpp_CBoxActor_resolveRayPush_FUN_0041ef90 at 0041efab
;   core_chain.cpp_CChain_getBoundingBox_FUN_0042ca90 at 0042cb5f
;   core_charactr.cpp_CCharacter_FUN_00428c00 at 00428d4a
;   core_charactr.cpp_CCharacter_FUN_0042af70 at 0042b00f
;   core_charactr.cpp_CCharacter_checkCylinderCollisionWorld_FUN_00428260 at 00428273
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0 at 00425e04
;   ... and 66 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a290
        ;   Label: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
    SUB ESP,0xc                         ; 0040a291
    MOV ECX,dword ptr [ESP + 0x14]      ; 0040a294
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040a298
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040a29c
    LEA EAX,[ECX + 0x20]                ; 0040a2a0
    FLD float ptr [EDX]                 ; 0040a2a3
    FSUB float ptr [EAX]                ; 0040a2a5
    FSTP float ptr [ESP]                ; 0040a2a7
    FLD float ptr [EDX + 0x4]           ; 0040a2aa
    FSUB float ptr [EAX + 0x4]          ; 0040a2ad
    FSTP float ptr [ESP + 0x4]          ; 0040a2b0
    FLD float ptr [EDX + 0x8]           ; 0040a2b4
    FSUB float ptr [EAX + 0x8]          ; 0040a2b7
    MOV EAX,ESP                         ; 0040a2ba
    PUSH EAX                            ; 0040a2bc
    PUSH EBX                            ; 0040a2bd
    LEA EAX,[ECX + 0x3c]                ; 0040a2be
    PUSH EAX                            ; 0040a2c1
    FSTP float ptr [ESP + 0x14]         ; 0040a2c2
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0 ; 0040a2c6
        ;   XREF to: 0044daa0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0040a2cb
    MOV EAX,EBX                         ; 0040a2ce
    ADD ESP,0xc                         ; 0040a2d0
    POP EBX                             ; 0040a2d3
    RET                                 ; 0040a2d4

