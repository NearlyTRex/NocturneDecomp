; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(CSimpleParticleSystem *this_ptr)
;
; Parameters:
; CSimpleParticleSystem * Stack[0x4]:4   this_ptr
;
; XREF[6]:
;   core_confedrt.cpp_FUN_005a0bd0 at 005a0c59
;   core_doc.cpp_FUN_00450c60 at 00451631
;   core_hellhag.cpp_FUN_005ab260 at 005ab4af
;   core_hpatrol.cpp_CPatrolPoint_process_FUN_0059c680 at 0059c6d4
;   core_hpbox.cpp_CParticleBox_process_FUN_005ac960 at 005aca0c
;   core_weaver.cpp_FUN_005a61f0 at 005a6293
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8130
        ;   Label: core_bwspart.cpp_CSimpleParticleSystem_isActive_FUN_005a8130
    MOV EAX,dword ptr [EAX + 0x10]      ; 005a8134
    RET                                 ; 005a8137

