; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0 at 00479b43
;   core_mimic.cpp_FUN_004d4f30 at 004d5232
;
; Referenced Globals:
;   undefined4 DAT_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0050fae0
        ;   Label: core_setcolid.cpp_CDemonSet_testVoxelRaycast_FUN_0050fae0
    PUSH EDX                            ; 0050fae4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0050fae5
    PUSH ECX                            ; 0050fae9
    PUSH 0x1fba938                      ; 0050faea | DAT_01fba938
    CALL core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0 ; 0050faef
        ;   XREF to: 0046b1b0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_voxelRaycast3D_FUN_0046b1b0()
    ADD ESP,0xc                         ; 0050faf4
    RET                                 ; 0050faf7

