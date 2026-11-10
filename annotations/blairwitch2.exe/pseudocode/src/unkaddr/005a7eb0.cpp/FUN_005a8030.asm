; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_005a7eb0_cpp_FUN_005a8030(int param_1,undefined4 param_2)
;
;
; XREF[9]:
;   core_confedrt.cpp_CConfederate_setup_FUN_005a0a90 at 005a0b04
;   core_confzomb.cpp_CConfederateZombie_setup_FUN_005a1d90 at 005a1de3
;   core_doc.cpp_CDoc_setup_FUN_00450620 at 004509bd
;   core_ghostchi.cpp_CGhostChild_setup_FUN_005a9440 at 005a949f
;   core_hag.cpp_CHag_setup_FUN_005aa8c0 at 005aa91f
;   core_partibox.cpp_CParticleBox_setup_FUN_005ac8d0 at 005ac8eb
;   core_robin.cpp_CRobin_setup_FUN_005a6030 at 005a608f
;   core_spirmine.cpp_CSpiritMine_setup_FUN_005ad4f0 at 005ad50b
;   core_unionzom.cpp_CUnionZombie_setup_FUN_005a3f40 at 005a3f93
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8030
        ;   Label: unkaddr_005a7eb0.cpp_FUN_005a8030
    CMP dword ptr [EAX + 0x3c],0x0      ; 005a8034
    JZ 0x005a803b                       ; 005a8038
        ;   XREF to: 005a803b (CONDITIONAL_JUMP)  ; LAB_005a803b
    RET                                 ; 005a803a
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a803b
        ;   Label: LAB_005a803b
    MOV dword ptr [EAX + 0x18],EDX      ; 005a803f
    RET                                 ; 005a8042

