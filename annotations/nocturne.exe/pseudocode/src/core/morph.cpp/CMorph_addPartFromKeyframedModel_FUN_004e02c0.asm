; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[2]:
;   core_succubus.cpp_FUN_00540c20 at 00540eaf
;   core_vampboss.cpp_FUN_0054c3e0 at 0054c4e2
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e02c0
        ;   Label: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004e02c0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e02c1
    PUSH EDX                            ; 004e02c5
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e02c6
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e02ca
    SUB EAX,EDX                         ; 004e02d1
    SHL EAX,0x6                         ; 004e02d3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004e02d6
    ADD EAX,EDX                         ; 004e02da
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e02dc
    SHL EAX,0x3                         ; 004e02e0
    PUSH ECX                            ; 004e02e3
    ADD EAX,EBX                         ; 004e02e4
    PUSH EAX                            ; 004e02e6
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610 ; 004e02e7
        ;   XREF to: 004df610 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004df610(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 004e02ec
    POP EBX                             ; 004e02ef
    RET                                 ; 004e02f0

