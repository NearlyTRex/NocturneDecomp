; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addPartFromDeformableModel_FUN_0052b550(CMorph *this_ptr,int model_index,CDeformableModelInstance *model_ptr)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CDeformableModelInstance * Stack[0xc]:4   model_ptr
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0052b550
        ;   Label: core_morph.cpp_CMorph_addPartFromDeformableModel_FUN_0052b550
    PUSH EDX                            ; 0052b554
    MOV EDX,dword ptr [ESP + 0xc]       ; 0052b555
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052b559
    SUB EAX,EDX                         ; 0052b560
    SHL EAX,0x6                         ; 0052b562
    ADD EAX,EDX                         ; 0052b565
    MOV ECX,dword ptr [ESP + 0x8]       ; 0052b567
    SHL EAX,0x3                         ; 0052b56b
    ADD EAX,ECX                         ; 0052b56e
    PUSH EAX                            ; 0052b570
    CALL core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870 ; 0052b571
        ;   XREF to: 0052a870 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromDeformableModel_FUN_0052a870(CMorphModel * this_ptr, CDeformableModelInstance * model_ptr)
    ADD ESP,0x8                         ; 0052b576
    RET                                 ; 0052b579

