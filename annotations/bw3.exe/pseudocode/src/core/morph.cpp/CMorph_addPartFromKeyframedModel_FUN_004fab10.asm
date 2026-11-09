; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[4]:
;   core_pryemorp.cpp_FUN_005275c0 at 00527741
;   core_spirbear.cpp_FUN_0059aba0 at 0059ad84
;   core_spireagl.cpp_FUN_005992f0 at 005994c0
;   core_spirindi.cpp_FUN_0059a060 at 0059a244
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fab10
        ;   Label: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_004fab10
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fab11
    PUSH EDX                            ; 004fab15
    MOV EDX,dword ptr [ESP + 0x10]      ; 004fab16
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fab1a
    SUB EAX,EDX                         ; 004fab21
    SHL EAX,0x6                         ; 004fab23
    MOV ECX,dword ptr [ESP + 0x14]      ; 004fab26
    ADD EAX,EDX                         ; 004fab2a
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fab2c
    SHL EAX,0x3                         ; 004fab30
    PUSH ECX                            ; 004fab33
    ADD EAX,EBX                         ; 004fab34
    PUSH EAX                            ; 004fab36
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0 ; 004fab37
        ;   XREF to: 004f9df0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_004f9df0(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 004fab3c
    POP EBX                             ; 004fab3f
    RET                                 ; 004fab40

