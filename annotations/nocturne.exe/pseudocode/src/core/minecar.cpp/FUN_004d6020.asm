; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_minecar_cpp_FUN_004d6020(int param_1)
;
;
; Called Functions:
;   core_platfrm.cpp_FUN_004f5f60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d6020
        ;   Label: core_minecar.cpp_FUN_004d6020
    PUSH EDX                            ; 004d6024
    CALL core_platfrm.cpp_FUN_004f5f60  ; 004d6025
        ;   XREF to: 004f5f60 (UNCONDITIONAL_CALL)  ; undefined core_platfrm.cpp_FUN_004f5f60()
    ADD ESP,0x4                         ; 004d602a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d602d
    MOV dword ptr [EAX + 0x720],0x0     ; 004d6031
    RET                                 ; 004d603b

