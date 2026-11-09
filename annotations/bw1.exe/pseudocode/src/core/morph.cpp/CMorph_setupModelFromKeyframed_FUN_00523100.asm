; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_00523100(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_biggs.cpp_FUN_00414ab0 at 00414aff
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0
;   core_morph.cpp_CMorphModel_free_FUN_00522170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523100
        ;   Label: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_00523100
    MOV EDX,dword ptr [ESP + 0xc]       ; 00523101
    LEA EAX,[EDX*0x4 + 0x0]             ; 00523105
    SUB EAX,EDX                         ; 0052310c
    SHL EAX,0x6                         ; 0052310e
    ADD EAX,EDX                         ; 00523111
    MOV EBX,dword ptr [ESP + 0x8]       ; 00523113
    SHL EAX,0x3                         ; 00523117
    ADD EBX,EAX                         ; 0052311a
    PUSH EBX                            ; 0052311c
    CALL core_morph.cpp_CMorphModel_free_FUN_00522170 ; 0052311d
        ;   XREF to: 00522170 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_00522170(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 00523122
    MOV EDX,dword ptr [ESP + 0x14]      ; 00523125
    PUSH EDX                            ; 00523129
    MOV ECX,dword ptr [ESP + 0x14]      ; 0052312a
    PUSH ECX                            ; 0052312e
    PUSH EBX                            ; 0052312f
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0 ; 00523130
        ;   XREF to: 005224f0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 00523135
    POP EBX                             ; 00523138
    RET                                 ; 00523139

