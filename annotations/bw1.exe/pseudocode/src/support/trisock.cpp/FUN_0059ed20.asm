; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trisock_cpp_FUN_0059ed20(int param_1)
;
;
; Called Functions:
;   support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40
;   support_trisock.cpp_FUN_0059de90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059ed20
        ;   Label: support_trisock.cpp_FUN_0059ed20
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059ed21
    MOV dword ptr [EBX + 0x608],0x0     ; 0059ed25
    MOV dword ptr [EBX + 0x60c],0x0     ; 0059ed2f
    MOV dword ptr [EBX + 0xa10],0x0     ; 0059ed39
    MOV dword ptr [EBX + 0xa14],0x0     ; 0059ed43
    MOV dword ptr [EBX + 0xd20],0x0     ; 0059ed4d
    LEA EAX,[EBX + 0xd2c]               ; 0059ed57
    MOV dword ptr [EBX + 0xd24],0x0     ; 0059ed5d
    PUSH EAX                            ; 0059ed67
    MOV dword ptr [EBX + 0xd28],0x0     ; 0059ed68
    CALL support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40 ; 0059ed72
        ;   XREF to: 0059cc40 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_closeSocket_FUN_0059cc40(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059ed77
    ADD EBX,0xd30                       ; 0059ed7a
    PUSH EBX                            ; 0059ed80
    CALL support_trisock.cpp_FUN_0059de90 ; 0059ed81
        ;   XREF to: 0059de90 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_FUN_0059de90()
    ADD ESP,0x4                         ; 0059ed86
    POP EBX                             ; 0059ed89
    RET                                 ; 0059ed8a

