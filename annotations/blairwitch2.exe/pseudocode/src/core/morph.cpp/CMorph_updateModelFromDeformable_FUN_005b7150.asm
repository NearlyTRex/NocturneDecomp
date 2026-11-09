; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_005b7150(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   part_index
;
; XREF[6]:
;   core_biggs.cpp_FUN_00415120 at 004151a8
;   core_mimic.cpp_CMimic_processMorph_FUN_004f1e90 at 004f1fa4
;   core_moloch.cpp_FUN_005020c0 at 0050215a
;   core_passngr.cpp_FUN_00511980 at 00511a20
;   core_succubus.cpp_FUN_0056fe50 at 0056ff7a
;   core_vampboss.cpp_FUN_00582ec0 at 00582feb
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7150
        ;   Label: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_005b7150
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b7151
    PUSH EDX                            ; 005b7155
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b7156
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b715a
    SUB EAX,EDX                         ; 005b7161
    SHL EAX,0x6                         ; 005b7163
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b7166
    ADD EAX,EDX                         ; 005b716a
    MOV EBX,dword ptr [ESP + 0xc]       ; 005b716c
    SHL EAX,0x3                         ; 005b7170
    PUSH ECX                            ; 005b7173
    ADD EAX,EBX                         ; 005b7174
    PUSH EAX                            ; 005b7176
    CALL core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510 ; 005b7177
        ;   XREF to: 005b6510 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_005b6510(CMorphModel * this_ptr, int part_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 005b717c
    POP EBX                             ; 005b717f
    RET                                 ; 005b7180

