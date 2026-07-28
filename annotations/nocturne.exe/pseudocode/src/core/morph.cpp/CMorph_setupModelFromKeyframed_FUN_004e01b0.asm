; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[1]:
;   core_biggs.cpp_FUN_00415430 at 0041547f
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
;   core_morph.cpp_CMorphModel_free_FUN_004df290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e01b0
        ;   Label: core_morph.cpp_CMorph_setupModelFromKeyframed_FUN_004e01b0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e01b1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e01b5
    SUB EAX,EDX                         ; 004e01bc
    SHL EAX,0x6                         ; 004e01be
    ADD EAX,EDX                         ; 004e01c1
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e01c3
    SHL EAX,0x3                         ; 004e01c7
    ADD EBX,EAX                         ; 004e01ca
    PUSH EBX                            ; 004e01cc
    CALL core_morph.cpp_CMorphModel_free_FUN_004df290 ; 004e01cd
        ;   XREF to: 004df290 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_free_FUN_004df290(CMorphModel * this_ptr)
    ADD ESP,0x4                         ; 004e01d2
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e01d5
    PUSH EDX                            ; 004e01d9
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e01da
    PUSH ECX                            ; 004e01de
    PUSH EBX                            ; 004e01df
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610 ; 004e01e0
        ;   XREF to: 004df610 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 004e01e5
    POP EBX                             ; 004e01e8
    RET                                 ; 004e01e9

