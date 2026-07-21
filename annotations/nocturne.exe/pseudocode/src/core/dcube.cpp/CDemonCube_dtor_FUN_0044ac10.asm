; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dcube_cpp_CDemonCube_dtor_FUN_0044ac10(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044adf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ac10
        ;   Label: core_dcube.cpp_CDemonCube_dtor_FUN_0044ac10
    MOV EBX,dword ptr [ESP + 0x8]       ; 0044ac11
    PUSH EBX                            ; 0044ac15
    CALL FUN_0044adf0                   ; 0044ac16
        ;   XREF to: 0044adf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044adf0()
    ADD ESP,0x4                         ; 0044ac1b
    MOV EAX,EBX                         ; 0044ac1e
    POP EBX                             ; 0044ac20
    RET                                 ; 0044ac21

