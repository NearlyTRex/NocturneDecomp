; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00570df0(undefined1 *param_1,undefined4 param_2)
;
;
; Called Functions:
;   support_trisock.cpp_FUN_00570e80
;   support_trisock.cpp_FUN_00570ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570df0
        ;   Label: support_trisock.cpp_FUN_00570df0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570df1
    PUSH EBX                            ; 00570df5
    CALL support_trisock.cpp_FUN_00570e80 ; 00570df6
        ;   XREF to: 00570e80 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570e80()
    ADD ESP,0x4                         ; 00570dfb
    MOV byte ptr [EBX],0x0              ; 00570dfe
    MOV EAX,dword ptr [ESP + 0xc]       ; 00570e01
    PUSH EBX                            ; 00570e05
    MOV dword ptr [EBX + 0x100],EAX     ; 00570e06
    CALL support_trisock.cpp_FUN_00570ea0 ; 00570e0c
        ;   XREF to: 00570ea0 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570ea0()
    ADD ESP,0x4                         ; 00570e11
    POP EBX                             ; 00570e14
    RET                                 ; 00570e15

