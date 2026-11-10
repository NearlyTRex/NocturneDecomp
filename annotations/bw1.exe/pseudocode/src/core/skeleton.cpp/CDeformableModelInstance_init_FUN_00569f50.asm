; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50(CDeformableModelInstance *this_ptr,char *model_name)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   model_name
;
; XREF[63]:
;   core_actor.cpp_archiveDeformableModelInstance_FUN_0040b7f0 at 0040b821
;   core_armour.cpp_CArmour_ctor_FUN_0040e9e0 at 0040ea0d
;   core_baron.cpp_CBaron_ctor_FUN_0040f210 at 0040f234
;   core_batcreat.cpp_CBatCreature_ctor_FUN_00411210 at 00411232
;   core_batman.cpp_CBatman_ctor_FUN_00412780 at 004127af
;   core_beast.cpp_CBeast_ctor_FUN_004146f0 at 00414712
;   core_biggs.cpp_CBiggs_ctor_FUN_004149f0 at 00414a38
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_0041b750 at 0041b794
;   core_bride.cpp_CBride_ctor_FUN_004238c0 at 004238e2
;   core_bugs.cpp_CBugs_ctor_FUN_00424f80 at 00425049
;   ... and 53 more
;
; Called Functions:
;   core_skeleton.cpp_FUN_00569ae0
;   core_skeleton.cpp_FUN_00569b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569f50
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50
    PUSH ESI                            ; 00569f51
    PUSH EDI                            ; 00569f52
    MOV EBX,dword ptr [ESP + 0x10]      ; 00569f53
    MOV ESI,dword ptr [ESP + 0x14]      ; 00569f57
    LEA EDI,[EBX + 0x2350]              ; 00569f5b
    PUSH EDI                            ; 00569f61
    MOV AL,byte ptr [ESI]               ; 00569f62
        ;   Label: LAB_00569f62
    MOV byte ptr [EDI],AL               ; 00569f64
    CMP AL,0x0                          ; 00569f66
    JZ 0x00569f7a                       ; 00569f68
        ;   XREF to: 00569f7a (CONDITIONAL_JUMP)  ; LAB_00569f7a
    MOV AL,byte ptr [ESI + 0x1]         ; 00569f6a
    ADD ESI,0x2                         ; 00569f6d
    MOV byte ptr [EDI + 0x1],AL         ; 00569f70
    ADD EDI,0x2                         ; 00569f73
    CMP AL,0x0                          ; 00569f76
    JNZ 0x00569f62                      ; 00569f78
        ;   XREF to: 00569f62 (CONDITIONAL_JUMP)  ; LAB_00569f62
    POP EDI                             ; 00569f7a
        ;   Label: LAB_00569f7a
    PUSH EBX                            ; 00569f7b
    MOV dword ptr [EBX + 0x23a0],0x0    ; 00569f7c
    CALL core_skeleton.cpp_FUN_00569ae0 ; 00569f86
        ;   XREF to: 00569ae0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569ae0()
    ADD ESP,0x4                         ; 00569f8b
    PUSH EBX                            ; 00569f8e
    CALL core_skeleton.cpp_FUN_00569b00 ; 00569f8f
        ;   XREF to: 00569b00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569b00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00569f94
    MOV dword ptr [EBX + 0x2320],0xffffffff ; 00569f97
    POP EDI                             ; 00569fa1
    POP ESI                             ; 00569fa2
    POP EBX                             ; 00569fa3
    RET                                 ; 00569fa4

