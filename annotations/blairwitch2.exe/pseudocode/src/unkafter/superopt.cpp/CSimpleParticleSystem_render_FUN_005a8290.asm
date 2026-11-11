; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl unkafter_superopt_cpp_CSimpleParticleSystem_render_FUN_005a8290(CSimpleParticleSystem *this_ptr)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
;
; XREF[11]:
;   core_confedrt.cpp_CConfederate_renderTransparent_FUN_005a14a0 at 005a14b7
;   core_confzomb.cpp_CConfederateZombie_renderTransparent_FUN_005a2630 at 005a264a
;   core_doc.cpp_CDoc_renderTransparent_FUN_00459d40 at 00459d65
;   core_fire.cpp_CFireEffect_render_FUN_0049c780 at 0049cb29
;   core_ghostchi.cpp_CGhostChild_renderTransparent_FUN_005a9b70 at 005a9b8a
;   core_hag.cpp_CHag_renderTransparent_FUN_005ab790 at 005ab7a8
;   core_partibox.cpp_CParticleBox_renderTransparent_FUN_005ad300 at 005ad30c
;   core_patrpoin.cpp_CPatrolPoint_renderTransparent_FUN_0059c9a0 at 0059c9aa
;   core_robin.cpp_CRobin_renderTransparent_FUN_005a6760 at 005a6778
;   core_spirmine.cpp_CSpiritMine_renderTransparent_FUN_005ad910 at 005ad92a
;   ... and 1 more
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960
;   unkafter_superopt.cpp_FUN_005a86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8290
        ;   Label: unkafter_superopt.cpp_CSimpleParticleSystem_render_FUN_005a8290
    PUSH ESI                            ; 005a8291
    PUSH EDI                            ; 005a8292
    PUSH EBP                            ; 005a8293
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a8294
    MOV EDX,dword ptr [0x0060b280]      ; 005a8298 | DAT_0060b280
    PUSH EDX                            ; 005a829e | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960 ; 005a829f
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046b960(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 005a82a4
    TEST EAX,EAX                        ; 005a82a7
    JNZ 0x005a82d7                      ; 005a82a9
        ;   XREF to: 005a82d7 (CONDITIONAL_JUMP)  ; LAB_005a82d7
    CMP dword ptr [EDI + 0x38],0x0      ; 005a82ab
    JZ 0x005a82dc                       ; 005a82af
        ;   XREF to: 005a82dc (CONDITIONAL_JUMP)  ; LAB_005a82dc
    CMP dword ptr [EDI + 0x10],0x0      ; 005a82b1
        ;   Label: LAB_005a82b1
    JZ 0x005a82d7                       ; 005a82b5
        ;   XREF to: 005a82d7 (CONDITIONAL_JUMP)  ; LAB_005a82d7
    MOV EBP,dword ptr [EDI + 0x18]      ; 005a82b7
    XOR EBX,EBX                         ; 005a82ba
    TEST EBP,EBP                        ; 005a82bc
    JLE 0x005a82d7                      ; 005a82be
        ;   XREF to: 005a82d7 (CONDITIONAL_JUMP)  ; LAB_005a82d7
    XOR ESI,ESI                         ; 005a82c0
    MOV EAX,dword ptr [EDI + 0x3c]      ; 005a82c2
        ;   Label: LAB_005a82c2
    ADD EAX,ESI                         ; 005a82c5
    CMP dword ptr [EAX],0x0             ; 005a82c7
    JNZ 0x005a82e7                      ; 005a82ca
        ;   XREF to: 005a82e7 (CONDITIONAL_JUMP)  ; LAB_005a82e7
    INC EBX                             ; 005a82cc
    MOV EAX,dword ptr [EDI + 0x18]      ; 005a82cd
    ADD ESI,0x60                        ; 005a82d0
    CMP EBX,EAX                         ; 005a82d3
    JL 0x005a82c2                       ; 005a82d5
        ;   XREF to: 005a82c2 (CONDITIONAL_JUMP)  ; LAB_005a82c2
    POP EBP                             ; 005a82d7
        ;   Label: LAB_005a82d7
    POP EDI                             ; 005a82d8
    POP ESI                             ; 005a82d9
    POP EBX                             ; 005a82da
    RET                                 ; 005a82db
    CMP dword ptr [EDI + 0x14],0x0      ; 005a82dc
        ;   Label: LAB_005a82dc
    JNZ 0x005a82b1                      ; 005a82e0
        ;   XREF to: 005a82b1 (CONDITIONAL_JUMP)  ; LAB_005a82b1
    POP EBP                             ; 005a82e2
    POP EDI                             ; 005a82e3
    POP ESI                             ; 005a82e4
    POP EBX                             ; 005a82e5
    RET                                 ; 005a82e6
    PUSH EAX                            ; 005a82e7
        ;   Label: LAB_005a82e7
    CALL unkafter_superopt.cpp_FUN_005a86a0 ; 005a82e8
        ;   XREF to: 005a86a0 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a86a0()
    ADD ESP,0x4                         ; 005a82ed
    INC EBX                             ; 005a82f0
    MOV EAX,dword ptr [EDI + 0x18]      ; 005a82f1
    ADD ESI,0x60                        ; 005a82f4
    CMP EBX,EAX                         ; 005a82f7
    JL 0x005a82c2                       ; 005a82f9
        ;   XREF to: 005a82c2 (CONDITIONAL_JUMP)  ; LAB_005a82c2
    POP EBP                             ; 005a82fb
    POP EDI                             ; 005a82fc
    POP ESI                             ; 005a82fd
    POP EBX                             ; 005a82fe
    RET                                 ; 005a82ff

