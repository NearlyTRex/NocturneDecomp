; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_updateModelFromDeformable_FUN_004e0340(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr,int part_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   part_index
;
; XREF[6]:
;   core_biggs.cpp_FUN_00415760 at 004157d6
;   core_mimic.cpp_CMimic_processMorph_FUN_004d5e20 at 004d5f34
;   core_moloch.cpp_FUN_004de550 at 004de5d8
;   core_passngr.cpp_FUN_004efa60 at 004efaee
;   core_succubus.cpp_FUN_00541640 at 00541752
;   core_vampboss.cpp_FUN_0054dac0 at 0054dbda
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0340
        ;   Label: core_morph.cpp_CMorph_updateModelFromDeformable_FUN_004e0340
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0341
    PUSH EDX                            ; 004e0345
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e0346
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e034a
    SUB EAX,EDX                         ; 004e0351
    SHL EAX,0x6                         ; 004e0353
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e0356
    ADD EAX,EDX                         ; 004e035a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e035c
    SHL EAX,0x3                         ; 004e0360
    PUSH ECX                            ; 004e0363
    ADD EAX,EBX                         ; 004e0364
    PUSH EAX                            ; 004e0366
    CALL core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770 ; 004e0367
        ;   XREF to: 004df770 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromDeformableModel_FUN_004df770(CMorphModel * this_ptr, int part_index, CDeformableModelInstance * model_ptr)
    ADD ESP,0xc                         ; 004e036c
    POP EBX                             ; 004e036f
    RET                                 ; 004e0370

