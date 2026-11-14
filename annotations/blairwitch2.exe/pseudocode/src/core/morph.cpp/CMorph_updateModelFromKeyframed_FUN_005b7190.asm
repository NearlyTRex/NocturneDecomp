; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_morph_cpp_CMorph_updateModelFromKeyframed_FUN_005b7190(CMorph *this_ptr,int model_index,CKeyFramedModel *model_ptr,int frame_index,int part_index)
;
; Parameters:
; CMorph *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   model_index
; CKeyFramedModel * Stack[0xc]:4   model_ptr
; int              Stack[0x10]:4   frame_index
; int              Stack[0x14]:4   part_index
;
; XREF[3]:
;   core_biggs.cpp_CBiggs_renderOpaque_FUN_00415120 at 004151c7
;   core_succubus.cpp_CSuccubus_renderOpaque_FUN_0056fe50 at 0056ff9e
;   core_vampboss.cpp_CVampireBoss_renderOpaque_FUN_00582ec0 at 00582fff
;
; Called Functions:
;   core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7190
        ;   Label: core_morph.cpp_CMorph_updateModelFromKeyframed_FUN_005b7190
    PUSH ESI                            ; 005b7191
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b7192
    PUSH EDX                            ; 005b7196
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b7197
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b719b
    MOV ECX,dword ptr [ESP + 0x18]      ; 005b71a2
    SUB EAX,EDX                         ; 005b71a6
    MOV EBX,dword ptr [ESP + 0x20]      ; 005b71a8
    SHL EAX,0x6                         ; 005b71ac
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b71af
    ADD EAX,EDX                         ; 005b71b3
    PUSH ECX                            ; 005b71b5
    SHL EAX,0x3                         ; 005b71b6
    PUSH EBX                            ; 005b71b9
    ADD EAX,ESI                         ; 005b71ba
    PUSH EAX                            ; 005b71bc
    CALL core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560 ; 005b71bd
        ;   XREF to: 005b6560 (UNCONDITIONAL_CALL)  ; void core_morph.cpp_CMorphModel_animateFromKeyframedModel_FUN_005b6560(CMorphModel * this_ptr, int part_index, CKeyFramedModel * model_ptr, int frame_index)
    ADD ESP,0x10                        ; 005b71c2
    POP ESI                             ; 005b71c5
    POP EBX                             ; 005b71c6
    RET                                 ; 005b71c7

