; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005232d0(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
; int              Stack[0x14]:4   part_index
;
; XREF[3]:
;   core_biggs.cpp_FUN_00414e00 at 00414ea7
;   core_succubus.cpp_FUN_00592aa0 at 00592bee
;   core_vampboss.cpp_FUN_005a6b00 at 005a6c3f
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005232d0
        ;   Label: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005232d0
    PUSH ESI                            ; 005232d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 005232d2
    PUSH EDX                            ; 005232d6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005232d7
    LEA EAX,[EDX*0x4 + 0x0]             ; 005232db
    MOV ECX,dword ptr [ESP + 0x18]      ; 005232e2
    SUB EAX,EDX                         ; 005232e6
    MOV EBX,dword ptr [ESP + 0x20]      ; 005232e8
    SHL EAX,0x6                         ; 005232ec
    MOV ESI,dword ptr [ESP + 0x10]      ; 005232ef
    ADD EAX,EDX                         ; 005232f3
    PUSH ECX                            ; 005232f5
    SHL EAX,0x3                         ; 005232f6
    PUSH EBX                            ; 005232f9
    ADD EAX,ESI                         ; 005232fa
    PUSH EAX                            ; 005232fc
    CALL core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0 ; 005232fd
        ;   XREF to: 005226a0 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005226a0(CMorphModel * this_ptr, int part_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 00523302
    POP ESI                             ; 00523305
    POP EBX                             ; 00523306
    RET                                 ; 00523307

