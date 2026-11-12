; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_unionzom_cpp_CUnionZombie_renderTransparent_FUN_005a4710(CUnionZombie *this_ptr)
;
; Parameters:
; CUnionZombie *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
;   core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4710
        ;   Label: core_unionzom.cpp_CUnionZombie_renderTransparent_FUN_005a4710
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a4711
    PUSH EDX                            ; 005a4715
    CALL core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980 ; 005a4716
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a471b
    MOV EBX,EAX                         ; 005a471e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a4720
    ADD EAX,0x264                       ; 005a4724
    PUSH EAX                            ; 005a4729
    CALL core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290 ; 005a472a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005a472f
    MOV EAX,EBX                         ; 005a4732
    POP EBX                             ; 005a4734
    RET                                 ; 005a4735

