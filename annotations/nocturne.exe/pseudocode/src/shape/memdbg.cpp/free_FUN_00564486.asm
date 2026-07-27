; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_free_FUN_00564486(undefined4 param_1)
;
;
; XREF[151]:
;   FUN_0056b538 at 0056b586
;   FUN_0056b5ad at 0056b60c
;   FUN_0056b633 at 0056b669
;   FUN_0056b6e8 at 0056b736
;   FUN_0056b810 at 0056b86f
;   FUN_005701cf at 005701fd
;   FUN_00570272 at 00570365
;   FUN_00570449 at 005704ad
;   cockpit_pkbitmap.cpp_FUN_004f3f50 at 004f3f61
;   cockpit_pkbitmap.cpp_FUN_004f5320 at 004f5337
;   ... and 141 more
;
; Called Functions:
;   crt_unknown.c_FUN_00564494
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00564486
        ;   Label: shape_memdbg.cpp_free_FUN_00564486
    PUSH EDX                            ; 0056448a
    CALL crt_unknown.c_FUN_00564494     ; 0056448b
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00564490
    RET                                 ; 00564493

