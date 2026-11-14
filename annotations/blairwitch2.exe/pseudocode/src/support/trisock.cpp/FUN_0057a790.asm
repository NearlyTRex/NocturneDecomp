; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0057a790(undefined1 *param_1,undefined4 param_2)
;
;
; Called Functions:
;   support_trisock.cpp_FUN_0057a820
;   support_trisock.cpp_FUN_0057a840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057a790
        ;   Label: support_trisock.cpp_FUN_0057a790
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057a791
    PUSH EBX                            ; 0057a795
    CALL support_trisock.cpp_FUN_0057a820 ; 0057a796
        ;   XREF to: 0057a820 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a820()
    ADD ESP,0x4                         ; 0057a79b
    MOV byte ptr [EBX],0x0              ; 0057a79e
    MOV EAX,dword ptr [ESP + 0xc]       ; 0057a7a1
    PUSH EBX                            ; 0057a7a5
    MOV dword ptr [EBX + 0x100],EAX     ; 0057a7a6
    CALL support_trisock.cpp_FUN_0057a840 ; 0057a7ac
        ;   XREF to: 0057a840 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0057a840()
    ADD ESP,0x4                         ; 0057a7b1
    POP EBX                             ; 0057a7b4
    RET                                 ; 0057a7b5

