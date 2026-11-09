; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 unkafter_dglobe_cpp_FUN_00448f20(undefined4 param_1)
;
;
; Called Functions:
;   core_dimage.cpp_FUN_00448fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448f20
        ;   Label: unkafter_dglobe.cpp_FUN_00448f20
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448f21
    PUSH EBX                            ; 00448f25
    CALL core_dimage.cpp_FUN_00448fa0   ; 00448f26
        ;   XREF to: 00448fa0 (UNCONDITIONAL_CALL)  ; undefined core_dimage.cpp_FUN_00448fa0()
    ADD ESP,0x4                         ; 00448f2b
    MOV EAX,EBX                         ; 00448f2e
    POP EBX                             ; 00448f30
    RET                                 ; 00448f31

