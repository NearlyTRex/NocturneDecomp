; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_free_FUN_00564486(undefined4 param_1)
;
;
; XREF[145]:
;   FUN_004100f0 at 00410125
;   FUN_00411610 at 00411645
;   FUN_00411660 at 00411695
;   FUN_004118c0 at 004118f5
;   FUN_004132c0 at 00413360
;   FUN_00414c60 at 00414d00
;   FUN_00414fa0 at 00414fd5
;   FUN_00415250 at 004152f0
;   FUN_00415a30 at 00415ae0
;   FUN_0041fa10 at 0041fa6c
;   ... and 135 more
;
; Called Functions:
;   FUN_00564494
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564486
        ;   Label: shape_memdbg.cpp_free_FUN_00564486
    PUSH EDX                            ; 0056448a
    CALL FUN_00564494                   ; 0056448b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00564490
    RET                                 ; 00564493

