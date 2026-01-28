; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * __cdecl core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 (CDemonActor *this_ptr,CVector3f *output_world_point,CVector3f *input_local_point)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output_world_point
; CVector3f *      Stack[0xc]:4   input_local_point
; Local Variables:
; undefined1       Stack[-0x10]:1  local_10
;
; XREF[146]:
;   core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040c8f0 at 0040c903
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a28d
;   core_baron.cpp_CBaron_FUN_004136b0 at 00413984
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 0041327a
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041570d
;   core_batcreat.cpp_FUN_00416030 at 00416093
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00416e28
;   core_batman.cpp_FUN_004179a0 at 00417a03
;   core_bodypart.cpp_CBodyPart_FUN_0041b070 at 0041b14d
;   core_bodypart.cpp_FUN_00419e10 at 00419e81
;   ... and 136 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ec0
        ;   Label: core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
    SUB ESP,0xc                         ; 00408ec1
    MOV EBX,dword ptr [ESP + 0x18]      ; 00408ec4
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408ec8
    PUSH EDX                            ; 00408ecc
    LEA EAX,[ESP + 0x4]                 ; 00408ecd
    PUSH EAX                            ; 00408ed1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00408ed2
    ADD EAX,0x3c                        ; 00408ed6
    PUSH EAX                            ; 00408ed9
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0 ; 00408eda
        ;   XREF to: 00471fd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00408edf
    MOV EDX,dword ptr [ESP + 0x14]      ; 00408ee2
    FLD float ptr [EAX]                 ; 00408ee6
    FADD float ptr [EDX + 0x20]         ; 00408ee8
    FSTP float ptr [EBX]                ; 00408eeb
    FLD float ptr [EAX + 0x4]           ; 00408eed
    FADD float ptr [EDX + 0x24]         ; 00408ef0
    FSTP float ptr [EBX + 0x4]          ; 00408ef3
    FLD float ptr [EAX + 0x8]           ; 00408ef6
    FADD float ptr [EDX + 0x28]         ; 00408ef9
    MOV EAX,EBX                         ; 00408efc
    FSTP float ptr [EBX + 0x8]          ; 00408efe
    ADD ESP,0xc                         ; 00408f01
    POP EBX                             ; 00408f04
    RET                                 ; 00408f05

