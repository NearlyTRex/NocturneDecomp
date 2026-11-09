; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_belling_cpp_FUN_005a9050(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9050
        ;   Label: core_belling.cpp_FUN_005a9050
    PUSH EDX                            ; 005a9054
    CALL core_basicnpc.cpp_FUN_005a4870 ; 005a9055
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4870()
    ADD ESP,0x4                         ; 005a905a
    RET                                 ; 005a905d

