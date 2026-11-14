; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hpatrol_cpp_CPatrolPoint_renderTransparent_FUN_0059c9a0(CPatrolPoint *this_ptr)
;
; Parameters:
; CPatrolPoint *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059c9a0
        ;   Label: core_hpatrol.cpp_CPatrolPoint_renderTransparent_FUN_0059c9a0
    ADD EAX,0x154                       ; 0059c9a4
    PUSH EAX                            ; 0059c9a9
    CALL core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290 ; 0059c9aa
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; void core_bwspart.cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem * this_ptr)
    ADD ESP,0x4                         ; 0059c9af
    XOR EAX,EAX                         ; 0059c9b2
    RET                                 ; 0059c9b4

