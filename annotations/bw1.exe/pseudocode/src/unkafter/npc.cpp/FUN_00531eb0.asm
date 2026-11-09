; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_npc_cpp_FUN_00531eb0(undefined4 *param_1)
;
;
; XREF[1]:
;   engine_winfont.cpp_FUN_005b1ad0 at 005b1ad6
;
; Referenced Globals:
;   undefined1* PTR_engine_palette.cpp_FUN_00531ed0_006045b0 = 00531ed0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00531eb0
        ;   Label: unkafter_npc.cpp_FUN_00531eb0
    MOV dword ptr [EAX],0x0             ; 00531eb4
    MOV dword ptr [EAX + 0x6a44],0x6045b0 ; 00531eba | PTR_engine_palette.cpp_FUN_00531ed0_006045b0
    RET                                 ; 00531ec4

