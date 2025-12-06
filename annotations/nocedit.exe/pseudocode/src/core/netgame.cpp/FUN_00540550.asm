; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_netgame.cpp_FUN_00540550()
;
;
; XREF[1]:
;   core_netgame.cpp_initializeNetwork_FUN_0053fbc0 at 0053fc54
;
; Referenced Globals:
;   int g_ForceMessagePump = 0x1
;   int g_NetworkPacketSize
;
; Called Functions:
;   support_trisock.cpp_isSocketValid_FUN_005e1b70
;   support_trisock.cpp_receiveSocketData_FUN_005e1c20
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00540550
        ;   Label: core_netgame.cpp_FUN_00540550
    PUSH EBP                            ; 00540551
    MOV ESI,dword ptr [ESP + 0xc]       ; 00540552
    ADD ESI,0x170                       ; 00540556
    PUSH ESI                            ; 0054055c
    CALL support_trisock.cpp_isSocketValid_FUN_005e1b70 ; 0054055d | int support_trisock.cpp_isSocketValid_FUN_005e1b70(SSocketContext * socket_ctx)
        ;   XREF to: 005e1b70 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00540562
    TEST EAX,EAX                        ; 00540565
    JZ 0x005405aa                       ; 00540567 | LAB_005405aa
        ;   XREF to: 005405aa (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00540569
    PUSH EBX                            ; 0054056a
    XOR EDX,EDX                         ; 0054056b
    MOV EDI,dword ptr [0x006849a8]      ; 0054056d | int g_ForceMessagePump
    MOV dword ptr [0x006849a8],EDX      ; 00540573 | int g_ForceMessagePump
    XOR EBP,EBP                         ; 00540579
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0054057b | void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
        ;   Label: LAB_0054057b
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)
    MOV EBX,EBP                         ; 00540580
    PUSH EBP                            ; 00540582
        ;   Label: LAB_00540582
    PUSH 0x405                          ; 00540583
    PUSH 0x2fa88c8                      ; 00540588 | int g_NetworkPacketSize
    PUSH ESI                            ; 0054058d
    CALL support_trisock.cpp_receiveSocketData_FUN_005e1c20 ; 0054058e | int support_trisock.cpp_receiveSocketData_FUN_005e1c20(SSocketContext * socket_ctx, char * buffer, int length, SNetworkAddr * source_addr)
        ;   XREF to: 005e1c20 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00540593
    TEST EAX,EAX                        ; 00540596
    JLE 0x005405a2                      ; 00540598 | LAB_005405a2
        ;   XREF to: 005405a2 (CONDITIONAL_JUMP)
    INC EBX                             ; 0054059a
    CMP EBX,0x14                        ; 0054059b
    JL 0x00540582                       ; 0054059e | LAB_00540582
        ;   XREF to: 00540582 (CONDITIONAL_JUMP)
    JMP 0x0054057b                      ; 005405a0 | LAB_0054057b
        ;   XREF to: 0054057b (UNCONDITIONAL_JUMP)
    MOV dword ptr [0x006849a8],EDI      ; 005405a2 | int g_ForceMessagePump
        ;   Label: LAB_005405a2
    POP EBX                             ; 005405a8
    POP EDI                             ; 005405a9
    POP EBP                             ; 005405aa
        ;   Label: LAB_005405aa
    POP ESI                             ; 005405ab
    RET                                 ; 005405ac

