; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_renderOpaque_FUN_004c9fa0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005e11b4
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 g_CDynamiteClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;   core_cloth.cpp_CCloth_render_FUN_00441800
;   engine_drender.cpp_pop_FUN_004839a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9fa0
        ;   Label: core_gabriela.cpp_CGabriella_renderOpaque_FUN_004c9fa0
    PUSH ESI                            ; 004c9fa1
    PUSH EDI                            ; 004c9fa2
    PUSH EBP                            ; 004c9fa3
    MOV EBP,ESP                         ; 004c9fa4
    MOV EBX,dword ptr [EBP + 0x14]      ; 004c9fa6
    PUSH EBX                            ; 004c9fa9
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 004c9faa
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c9faf
    MOV ESI,EAX                         ; 004c9fb2
    TEST EAX,EAX                        ; 004c9fb4
    JNZ 0x004c9fd3                      ; 004c9fb6
        ;   XREF to: 004c9fd3 (CONDITIONAL_JUMP)  ; LAB_004c9fd3
    TEST ESI,ESI                        ; 004c9fb8
        ;   Label: LAB_004c9fb8
    JZ 0x004c9fcc                       ; 004c9fba
        ;   XREF to: 004c9fcc (CONDITIONAL_JUMP)  ; LAB_004c9fcc
    LEA EDI,[EBX + 0x1fae8]             ; 004c9fbc
    MOV EAX,dword ptr [EDI + 0x338]     ; 004c9fc2
    TEST EAX,EAX                        ; 004c9fc8
    JNZ 0x004c9ffe                      ; 004c9fca
        ;   XREF to: 004c9ffe (CONDITIONAL_JUMP)  ; LAB_004c9ffe
    MOV EAX,ESI                         ; 004c9fcc
        ;   Label: LAB_004c9fcc
    POP EBP                             ; 004c9fce
    POP EDI                             ; 004c9fcf
    POP ESI                             ; 004c9fd0
    POP EBX                             ; 004c9fd1
    RET                                 ; 004c9fd2
    PUSH EBX                            ; 004c9fd3
        ;   Label: LAB_004c9fd3
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 004c9fd4
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c9fd9
    PUSH 0x0                            ; 004c9fdc
    LEA EAX,[EBX + 0x1ffec]             ; 004c9fde
    PUSH EAX                            ; 004c9fe4
    CALL core_cloth.cpp_CCloth_render_FUN_00441800 ; 004c9fe5
        ;   XREF to: 00441800 (UNCONDITIONAL_CALL)  ; void core_cloth.cpp_CCloth_render_FUN_00441800(CCloth * this_ptr, CDeformableModelInstance * deformable_model)
    ADD ESP,0x8                         ; 004c9fea
    MOV EDX,dword ptr [0x00612560]      ; 004c9fed | DAT_00612560
    PUSH EDX                            ; 004c9ff3 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004c9ff4
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004c9ff9
    JMP 0x004c9fb8                      ; 004c9ffc
        ;   XREF to: 004c9fb8 (UNCONDITIONAL_JUMP)  ; LAB_004c9fb8
    PUSH EAX                            ; 004c9ffe
        ;   Label: LAB_004c9ffe
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c9fff
    CALL dword ptr [EDX + 0x10]         ; 004ca005
    FLD float ptr [EBX + 0x1ffb4]       ; 004ca008
    ADD ESP,0x4                         ; 004ca00e
    FCOMP double ptr [0x005e11b4]       ; 004ca011 | DAT_005e11b4
    FNSTSW AX                           ; 004ca017
    SAHF                                ; 004ca019
    JBE 0x004c9fcc                      ; 004ca01a
        ;   XREF to: 004c9fcc (CONDITIONAL_JUMP)  ; LAB_004c9fcc
    MOV ECX,dword ptr [0x01c3db94]      ; 004ca01c | g_CDynamiteClassInfo.name_hash
    PUSH ECX                            ; 004ca022
    MOV EAX,dword ptr [EDI + 0x338]     ; 004ca023
    PUSH EAX                            ; 004ca029
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004ca02a
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004ca02f
    TEST EAX,EAX                        ; 004ca032
    JZ 0x004ca061                       ; 004ca034
        ;   XREF to: 004ca061 (CONDITIONAL_JUMP)  ; LAB_004ca061
    FLD float ptr [EAX + 0x580]         ; 004ca036
    FMUL ST0                            ; 004ca03c
    FLD float ptr [EAX + 0x57c]         ; 004ca03e
    FMUL ST0                            ; 004ca044
    FADDP                               ; 004ca046
    FLD float ptr [EAX + 0x584]         ; 004ca048
    FMUL ST0                            ; 004ca04e
    FADDP                               ; 004ca050
    FSQRT                               ; 004ca052
    FLDZ                                ; 004ca054
    FCOMPP                              ; 004ca056
    FNSTSW AX                           ; 004ca058
    SAHF                                ; 004ca05a
    JNC 0x004c9fcc                      ; 004ca05b
        ;   XREF to: 004c9fcc (CONDITIONAL_JUMP)  ; LAB_004c9fcc
    LEA EAX,[EBX + 0x1fae8]             ; 004ca061
        ;   Label: LAB_004ca061
    MOV EAX,dword ptr [EAX + 0x338]     ; 004ca067
    PUSH EAX                            ; 004ca06d
    MOV EBX,dword ptr [EAX + 0x154]     ; 004ca06e
    CALL dword ptr [EBX + 0xf0]         ; 004ca074
    ADD ESP,0x4                         ; 004ca07a
    MOV EAX,ESI                         ; 004ca07d
    POP EBP                             ; 004ca07f
    POP EDI                             ; 004ca080
    POP ESI                             ; 004ca081
    POP EBX                             ; 004ca082
    RET                                 ; 004ca083

