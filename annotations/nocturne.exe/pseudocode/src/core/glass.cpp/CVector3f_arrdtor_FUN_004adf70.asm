; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CVector3f_arrdtor_FUN_004adf70(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004adef0 at 004adf05
;
; Referenced Globals:
;   undefined4 DAT_005993b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993b0                       ; 004adf70 | DAT_005993b0
        ;   Label: core_glass.cpp_CVector3f_arrdtor_FUN_004adf70
    PUSH 0x19                           ; 004adf75
    MOV EDX,dword ptr [ESP + 0xc]       ; 004adf77
    PUSH EDX                            ; 004adf7b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 004adf7c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 004adf81
    RET                                 ; 004adf84

