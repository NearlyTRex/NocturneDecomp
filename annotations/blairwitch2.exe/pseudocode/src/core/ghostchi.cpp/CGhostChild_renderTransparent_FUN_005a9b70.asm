; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ghostchi_cpp_CGhostChild_renderTransparent_FUN_005a9b70(CGhostChild *this_ptr)
;
; Parameters:
; CGhostChild *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980
;   unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a9b70
        ;   Label: core_ghostchi.cpp_CGhostChild_renderTransparent_FUN_005a9b70
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a9b71
    PUSH EDX                            ; 005a9b75
    CALL core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980 ; 005a9b76
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; int core_basicene.cpp_CBasicEnemy_renderTransparent_FUN_0059f980(CBasicEnemy * this_ptr)
    ADD ESP,0x4                         ; 005a9b7b
    MOV EBX,EAX                         ; 005a9b7e
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a9b80
    ADD EAX,0x264                       ; 005a9b84
    PUSH EAX                            ; 005a9b89
    CALL unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290 ; 005a9b8a
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; void unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 005a9b8f
    MOV EAX,EBX                         ; 005a9b92
    POP EBX                             ; 005a9b94
    RET                                 ; 005a9b95

