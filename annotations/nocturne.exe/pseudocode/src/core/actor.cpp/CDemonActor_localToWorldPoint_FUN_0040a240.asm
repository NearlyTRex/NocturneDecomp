; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_world_point
; CVector3f *      Stack[0xc]:4   input_local_point
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
;
; XREF[144]:
;   core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0 at 0040da03
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b36a
;   core_baron.cpp_CBaron_FUN_00410cc0 at 00410e8b
;   core_baron.cpp_CBaron_process_FUN_00410490 at 0041088a
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00413040 at 004130a3
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 0041271d
;   core_batman.cpp_CBatman_processDamage_FUN_00414930 at 00414993
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413b1a
;   core_bodypart.cpp_CBodyPart_addFire_FUN_00417b40 at 00417ba1
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00417320 at 0041762b
;   ... and 134 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040a240
        ;   Label: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
    SUB ESP,0xc                         ; 0040a241
    MOV EBX,dword ptr [ESP + 0x18]      ; 0040a244
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0040a248
    PUSH EDX                            ; 0040a24c
    LEA EAX,[ESP + 0x4]                 ; 0040a24d
    PUSH EAX                            ; 0040a251
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0040a252
    ADD EAX,0x3c                        ; 0040a256
    PUSH EAX                            ; 0040a259
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0040a25a
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 0040a25f
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040a262
    FLD float ptr [EAX]                 ; 0040a266
    FADD float ptr [EDX + 0x20]         ; 0040a268
    FSTP float ptr [EBX]                ; 0040a26b
    FLD float ptr [EAX + 0x4]           ; 0040a26d
    FADD float ptr [EDX + 0x24]         ; 0040a270
    FSTP float ptr [EBX + 0x4]          ; 0040a273
    FLD float ptr [EAX + 0x8]           ; 0040a276
    FADD float ptr [EDX + 0x28]         ; 0040a279
    MOV EAX,EBX                         ; 0040a27c
    FSTP float ptr [EBX + 0x8]          ; 0040a27e
    ADD ESP,0xc                         ; 0040a281
    POP EBX                             ; 0040a284
    RET                                 ; 0040a285

