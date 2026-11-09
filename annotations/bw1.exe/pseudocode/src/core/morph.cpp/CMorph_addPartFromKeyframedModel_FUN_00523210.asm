; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_addPartFromKeyframedModel_FUN_00523210(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
;
; XREF[2]:
;   core_succubus.cpp_FUN_00591ff0 at 0059227f
;   core_vampboss.cpp_FUN_005a52a0 at 005a53a2
;
; Called Functions:
;   core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523210
        ;   Label: core_morph.cpp_CMorph_addPartFromKeyframedModel_FUN_00523210
    MOV EDX,dword ptr [ESP + 0x14]      ; 00523211
    PUSH EDX                            ; 00523215
    MOV EDX,dword ptr [ESP + 0x10]      ; 00523216
    LEA EAX,[EDX*0x4 + 0x0]             ; 0052321a
    SUB EAX,EDX                         ; 00523221
    SHL EAX,0x6                         ; 00523223
    MOV ECX,dword ptr [ESP + 0x14]      ; 00523226
    ADD EAX,EDX                         ; 0052322a
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052322c
    SHL EAX,0x3                         ; 00523230
    PUSH ECX                            ; 00523233
    ADD EAX,EBX                         ; 00523234
    PUSH EAX                            ; 00523236
    CALL core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0 ; 00523237
        ;   XREF to: 005224f0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_addPartFromKeyFramedModel_FUN_005224f0(CMorphModel * this_ptr, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0xc                         ; 0052323c
    POP EBX                             ; 0052323f
    RET                                 ; 00523240

