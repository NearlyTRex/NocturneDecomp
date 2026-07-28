; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_getSocketName_FUN_005491e0(_SOCKET *socket_handle,SNetworkAddr *out_address)
;
; Parameters:
; _SOCKET *        Stack[0x4]:4   socket_handle
; SNetworkAddr *   Stack[0x8]:4   out_address
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9dce
;
; Called Functions:
;   Ordinal_6
;   support_trisock.cpp_convertSockAddr_FUN_00548d50
;
; *****************************************************************************

section .text

    SUB ESP,0x1c                        ; 005491e0
        ;   Label: support_trisock.cpp_getSocketName_FUN_005491e0
    LEA EAX,[ESP + 0x18]                ; 005491e3
    PUSH EAX                            ; 005491e7
    LEA EAX,[ESP + 0x4]                 ; 005491e8
    MOV EDX,0x10                        ; 005491ec
    PUSH EAX                            ; 005491f1
    MOV EAX,dword ptr [ESP + 0x28]      ; 005491f2
    MOV dword ptr [ESP + 0x20],EDX      ; 005491f6
    MOV ECX,dword ptr [EAX]             ; 005491fa
    PUSH ECX                            ; 005491fc
    CALL Ordinal_6                      ; 005491fd
        ;   XREF to: 00574bc0 (UNCONDITIONAL_CALL)  ; undefined Ordinal_6()
    TEST EAX,EAX                        ; 00549202
    JZ 0x0054920c                       ; 00549204
        ;   XREF to: 0054920c (CONDITIONAL_JUMP)  ; LAB_0054920c
    XOR EAX,EAX                         ; 00549206
    ADD ESP,0x1c                        ; 00549208
    RET                                 ; 0054920b
    PUSH EDI                            ; 0054920c
        ;   Label: LAB_0054920c
    PUSH ESI                            ; 0054920d
    LEA EAX,[ESP + 0x8]                 ; 0054920e
    PUSH EAX                            ; 00549212
    LEA EAX,[ESP + 0x1c]                ; 00549213
    PUSH EAX                            ; 00549217
    CALL support_trisock.cpp_convertSockAddr_FUN_00548d50 ; 00549218
        ;   XREF to: 00548d50 (UNCONDITIONAL_CALL)  ; undefined support_trisock.cpp_convertSockAddr_FUN_00548d50()
    ADD ESP,0x8                         ; 0054921d
    MOV ESI,EAX                         ; 00549220
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00549222
    MOV EAX,0x1                         ; 00549226
    MOVSD ES:EDI,ESI                    ; 0054922b
    MOVSD ES:EDI,ESI                    ; 0054922c
    POP ESI                             ; 0054922d
    POP EDI                             ; 0054922e
    ADD ESP,0x1c                        ; 0054922f
    RET                                 ; 00549232

