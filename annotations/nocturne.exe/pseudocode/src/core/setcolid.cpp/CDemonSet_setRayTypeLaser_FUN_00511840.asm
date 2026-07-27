; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_setcolid_cpp_CDemonSet_setRayTypeLaser_FUN_00511840(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   core_fire.cpp_FUN_0048b6f0 at 0048b779
;   core_stranger.cpp_CStranger_aimLeftPistol_FUN_0053e320 at 0053e409
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511840
        ;   Label: core_setcolid.cpp_CDemonSet_setRayTypeLaser_FUN_00511840
    MOV EDX,dword ptr [ESP + 0x8]       ; 00511844
    MOV dword ptr [EAX + 0x15f298],0x3  ; 00511848
    MOV dword ptr [EAX + 0x15f29c],EDX  ; 00511852
    MOV EDX,dword ptr [ESP + 0xc]       ; 00511858
    MOV dword ptr [EAX + 0x15f2a0],EDX  ; 0051185c
    MOV EDX,dword ptr [ESP + 0x10]      ; 00511862
    MOV dword ptr [EAX + 0x15f2a4],EDX  ; 00511866
    MOV EDX,dword ptr [ESP + 0x14]      ; 0051186c
    MOV dword ptr [EAX + 0x15f2a8],EDX  ; 00511870
    RET                                 ; 00511876

