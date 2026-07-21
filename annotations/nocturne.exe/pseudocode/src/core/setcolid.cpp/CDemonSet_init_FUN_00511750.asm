; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_init_FUN_00511750(int param_1)
;
;
; XREF[31]:
;   FUN_0043d1c0 at 0043d310
;   FUN_00477890 at 00477a82
;   FUN_00478f80 at 00478fc9
;   FUN_0048b6f0 at 0048bc14
;   FUN_00498de0 at 00499068
;   FUN_004998c0 at 00499a74
;   FUN_004a9270 at 004a9f03
;   FUN_004b27c0 at 004b2934
;   FUN_004c71a0 at 004c7332
;   FUN_004da790 at 004daf0c
;   ... and 21 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00511750
        ;   Label: core_setcolid.cpp_CDemonSet_init_FUN_00511750
    MOV dword ptr [EAX + 0x15f2ac],0x0  ; 00511754
    MOV dword ptr [EAX + 0x15f2b0],0x0  ; 0051175e
    MOV dword ptr [EAX + 0x15f2f4],0x0  ; 00511768
    MOV dword ptr [EAX + 0x15f298],0x0  ; 00511772
    RET                                 ; 0051177c

