; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_basicene_cpp_FUN_0059f960(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_00427680
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0059f960
        ;   Label: unkafter_basicene.cpp_FUN_0059f960
    PUSH EDX                            ; 0059f964
    MOV ECX,dword ptr [ESP + 0x8]       ; 0059f965
    PUSH ECX                            ; 0059f969
    CALL core_charactr.cpp_FUN_00427680 ; 0059f96a
        ;   XREF to: 00427680 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427680()
    ADD ESP,0x8                         ; 0059f96f
    RET                                 ; 0059f972

