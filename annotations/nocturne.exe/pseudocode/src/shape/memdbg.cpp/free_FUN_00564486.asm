; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_free_FUN_00564486(undefined4 param_1)
;
;
; XREF[151]:
;   FUN_0040ef90 at 0040efc5
;   FUN_0040f4b0 at 0040f4e5
;   FUN_0040f8b0 at 0040f8e5
;   FUN_0040fc30 at 0040fcd0
;   FUN_004100f0 at 00410125
;   FUN_00411610 at 00411645
;   FUN_00411660 at 00411695
;   FUN_004118c0 at 004118f5
;   FUN_004132c0 at 00413360
;   FUN_00414c60 at 00414d00
;   ... and 141 more
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

