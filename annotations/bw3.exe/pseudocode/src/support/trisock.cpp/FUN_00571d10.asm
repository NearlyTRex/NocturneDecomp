; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_00571d10(int param_1)
;
;
; Called Functions:
;   support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30
;   support_trisock.cpp_FUN_00570e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571d10
        ;   Label: support_trisock.cpp_FUN_00571d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00571d11
    MOV dword ptr [EBX + 0x608],0x0     ; 00571d15
    MOV dword ptr [EBX + 0x60c],0x0     ; 00571d1f
    MOV dword ptr [EBX + 0xa10],0x0     ; 00571d29
    MOV dword ptr [EBX + 0xa14],0x0     ; 00571d33
    MOV dword ptr [EBX + 0xd20],0x0     ; 00571d3d
    LEA EAX,[EBX + 0xd2c]               ; 00571d47
    MOV dword ptr [EBX + 0xd24],0x0     ; 00571d4d
    PUSH EAX                            ; 00571d57
    MOV dword ptr [EBX + 0xd28],0x0     ; 00571d58
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30 ; 00571d62
        ;   XREF to: 0056fc30 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0056fc30(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00571d67
    ADD EBX,0xd30                       ; 00571d6a
    PUSH EBX                            ; 00571d70
    CALL support_trisock.cpp_FUN_00570e80 ; 00571d71
        ;   XREF to: 00570e80 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_00570e80()
    ADD ESP,0x4                         ; 00571d76
    POP EBX                             ; 00571d79
    RET                                 ; 00571d7a

