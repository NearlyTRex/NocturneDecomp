; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
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
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a645
;   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 at 00409558
;   core_baron.cpp_FUN_004136b0 at 004136ed
;   core_boxactor.cpp_FUN_00422390 at 004223ab
;   core_boxactor.cpp_FUN_00422590 at 004225b1
;   core_chain.cpp_FUN_00430eb0 at 00430fa4
;   core_charactr.cpp_CCharacter_FUN_00428d80 at 00428d93
;   core_charactr.cpp_CCharacter_FUN_00429b40 at 00429c84
;   core_charactr.cpp_CCharacter_FUN_0042c110 at 0042c123
;   core_charactr.cpp_CCharacter_FUN_0042c180 at 0042c1ae
;   ... and 66 more
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408f10
        ;   Label: core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
    SUB ESP,0xc                         ; 00408f11
    MOV ECX,dword ptr [ESP + 0x14]      ; 00408f14
    MOV EBX,dword ptr [ESP + 0x18]      ; 00408f18
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00408f1c
    LEA EAX,[ECX + 0x20]                ; 00408f20
    FLD float ptr [EDX]                 ; 00408f23
    FSUB float ptr [EAX]                ; 00408f25
    FSTP float ptr [ESP]                ; 00408f27
    FLD float ptr [EDX + 0x4]           ; 00408f2a
    FSUB float ptr [EAX + 0x4]          ; 00408f2d
    FSTP float ptr [ESP + 0x4]          ; 00408f30
    FLD float ptr [EDX + 0x8]           ; 00408f34
    FSUB float ptr [EAX + 0x8]          ; 00408f37
    MOV EAX,ESP                         ; 00408f3a
    PUSH EAX                            ; 00408f3c
    PUSH EBX                            ; 00408f3d
    LEA EAX,[ECX + 0x3c]                ; 00408f3e
    PUSH EAX                            ; 00408f41
    FSTP float ptr [ESP + 0x14]         ; 00408f42
    CALL core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030 ; 00408f46
        ;   XREF to: 00472030 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    ADD ESP,0xc                         ; 00408f4b
    MOV EAX,EBX                         ; 00408f4e
    ADD ESP,0xc                         ; 00408f50
    POP EBX                             ; 00408f53
    RET                                 ; 00408f54

