; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl support_trisock_cpp_bindSocket_FUN_00548f70(undefined4 param_1,ushort param_2)
;
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9da4
;
; Called Functions:
;   Ordinal_2
;   Ordinal_9
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 00548f70
        ;   Label: support_trisock.cpp_bindSocket_FUN_00548f70
    XOR EAX,EAX                         ; 00548f73
    MOV AX,word ptr [ESP + 0x18]        ; 00548f75
    MOV EDX,0x2                         ; 00548f7a
    PUSH EAX                            ; 00548f7f
    MOV word ptr [ESP + 0x4],DX         ; 00548f80
    CALL Ordinal_9                      ; 00548f85
        ;   XREF to: 00574c02 (UNCONDITIONAL_CALL)  ; undefined Ordinal_9()
    PUSH 0x10                           ; 00548f8a
    MOV word ptr [ESP + 0x6],AX         ; 00548f8c
    LEA EAX,[ESP + 0x4]                 ; 00548f91
    XOR EDX,EDX                         ; 00548f95
    PUSH EAX                            ; 00548f97
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00548f98
    MOV dword ptr [ESP + 0xc],EDX       ; 00548f9c
    MOV ECX,dword ptr [EAX]             ; 00548fa0
    PUSH ECX                            ; 00548fa2
    CALL Ordinal_2                      ; 00548fa3
        ;   XREF to: 00574bf6 (UNCONDITIONAL_CALL)  ; undefined Ordinal_2()
    TEST EAX,EAX                        ; 00548fa8
    SETZ AL                             ; 00548faa
    AND EAX,0xff                        ; 00548fad
    ADD ESP,0x10                        ; 00548fb2
    RET                                 ; 00548fb5

