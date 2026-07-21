; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050eb40(undefined4 param_1)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00506e50 at 00506e77
;
; Referenced Globals:
;   undefined4 DAT_005a19b0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5a19b0                       ; 0050eb40 | DAT_005a19b0
        ;   Label: FUN_0050eb40
    PUSH 0x14                           ; 0050eb45
    MOV EDX,dword ptr [ESP + 0xc]       ; 0050eb47
    PUSH EDX                            ; 0050eb4b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0050eb4c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrfini_FUN_0056494f()
    ADD ESP,0xc                         ; 0050eb51
    RET                                 ; 0050eb54

