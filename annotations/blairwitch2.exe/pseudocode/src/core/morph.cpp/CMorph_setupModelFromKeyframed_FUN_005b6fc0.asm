; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_biggs.cpp_CBiggs_setup_FUN_00414dd0 at 00414e1f
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0
;   core_morph.cpp_CMorphModel_free_FUN_005b6030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6fc0
        ;   Label: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_005b6fc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b6fc1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b6fc5
    SUB EAX,EDX                         ; 005b6fcc
    SHL EAX,0x6                         ; 005b6fce
    ADD EAX,EDX                         ; 005b6fd1
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b6fd3
    SHL EAX,0x3                         ; 005b6fd7
    ADD EBX,EAX                         ; 005b6fda
    PUSH EBX                            ; 005b6fdc
    CALL core_morph.cpp_CMorphModel_free_FUN_005b6030 ; 005b6fdd
        ;   XREF to: 005b6030 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_005b6030(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 005b6fe2
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b6fe5
    PUSH EDX                            ; 005b6fe9
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b6fea
    PUSH ECX                            ; 005b6fee
    PUSH EBX                            ; 005b6fef
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0 ; 005b6ff0
        ;   XREF to: 005b63b0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005b63b0(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 005b6ff5
    POP EBX                             ; 005b6ff8
    RET                                 ; 005b6ff9

