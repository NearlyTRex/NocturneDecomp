; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CCrater_reset_FUN_004876b0(undefined4 *param_1)
;
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_init_FUN_0048a150 at 0048a2af
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004876b0
        ;   Label: core_fire.cpp_CCrater_reset_FUN_004876b0
    MOV dword ptr [EAX + 0x4],0x0       ; 004876b4
    MOV dword ptr [EAX + 0x8],0x0       ; 004876bb
    MOV dword ptr [EAX],0x0             ; 004876c2
    RET                                 ; 004876c8

