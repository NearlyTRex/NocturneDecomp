; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(undefined4 *param_1)
;
;
; XREF[50]:
;   core_actor.cpp_FUN_0040b300 at 0040b54b
;   core_anvil.cpp_FUN_0040f610 at 0040f6f5
;   core_baron.cpp_FUN_00410cc0 at 00410dbb
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 00412750
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413ecc
;   core_bodypart.cpp_CBodyPart_process_FUN_004168d0 at 00416a93
;   core_boneguy.cpp_FUN_00418a00 at 0041908c
;   core_boxactor.cpp_CBoxActor_process_FUN_0041e5e0 at 0041e9bb
;   core_bride.cpp_FUN_0041fe40 at 0042030d
;   core_bugs.cpp_CBugs_attackSwarmTarget_FUN_00422370 at 0042240d
;   ... and 40 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00423ed0
        ;   Label: core_charactr.cpp_SDamageInfo_ctor_FUN_00423ed0
    MOV dword ptr [EAX + 0x28],0x0      ; 00423ed4
    MOV dword ptr [EAX + 0x2c],0x0      ; 00423edb
    MOV dword ptr [EAX],0xffffffff      ; 00423ee2
    LEA EDX,[EAX + 0xc]                 ; 00423ee8
    MOV dword ptr [EAX + 0x8],0x0       ; 00423eeb
    MOV dword ptr [EDX + 0x8],0x0       ; 00423ef2
    MOV ECX,dword ptr [EDX + 0x8]       ; 00423ef9
    MOV dword ptr [EDX + 0x4],ECX       ; 00423efc
    MOV ECX,dword ptr [EDX + 0x4]       ; 00423eff
    MOV dword ptr [EDX],ECX             ; 00423f02
    LEA EDX,[EAX + 0x1c]                ; 00423f04
    MOV dword ptr [EAX + 0x18],0x41a00000 ; 00423f07
    MOV dword ptr [EDX + 0x8],0x0       ; 00423f0e
    MOV ECX,dword ptr [EDX + 0x8]       ; 00423f15
    MOV dword ptr [EDX + 0x4],ECX       ; 00423f18
    MOV ECX,dword ptr [EDX + 0x4]       ; 00423f1b
    MOV dword ptr [EDX],ECX             ; 00423f1e
    MOV dword ptr [EAX + 0x30],0x64     ; 00423f20
    MOV dword ptr [EAX + 0x34],0x0      ; 00423f27
    MOV dword ptr [EAX + 0x38],0x0      ; 00423f2e
    RET                                 ; 00423f35

