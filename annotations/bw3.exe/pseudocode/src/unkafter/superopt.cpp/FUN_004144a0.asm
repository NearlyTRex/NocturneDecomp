; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_superopt_cpp_FUN_004144a0(undefined4 param_1)
;
;
; XREF[1]:
;   unkafter_superopt.cpp_CChemPuzzle_dtor_FUN_00413240 at 00413258
;
; Referenced Globals:
;   undefined4 DAT_005dbfa0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005a3de6
;
; *****************************************************************************

section .text

    PUSH 0x5dbfa0                       ; 004144a0 | DAT_005dbfa0
        ;   Label: unkafter_superopt.cpp_FUN_004144a0
    PUSH 0x32                           ; 004144a5
    MOV EDX,dword ptr [ESP + 0xc]       ; 004144a7
    PUSH EDX                            ; 004144ab
    CALL crt_memory.c___arrfini_FUN_005a3de6 ; 004144ac
        ;   XREF to: 005a3de6 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_005a3de6()
    ADD ESP,0xc                         ; 004144b1
    RET                                 ; 004144b4

