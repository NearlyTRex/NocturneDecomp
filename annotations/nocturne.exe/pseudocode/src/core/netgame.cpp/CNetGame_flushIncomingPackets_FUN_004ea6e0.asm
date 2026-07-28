; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_004e9d50 at 004e9de4
;
; Referenced Globals:
;   undefined4 DAT_005c1664
;
; Called Functions:
;   support_trisock.cpp_isSocketValid_FUN_00548f60
;   support_trisock.cpp_receiveSocketData_FUN_00549010
;   wincore_wddvmem.cpp_swapBuffers_FUN_00553910
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004ea6e0
        ;   Label: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_004ea6e0
    PUSH EBP                            ; 004ea6e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 004ea6e2
    ADD ESI,0x170                       ; 004ea6e6
    PUSH ESI                            ; 004ea6ec
    CALL support_trisock.cpp_isSocketValid_FUN_00548f60 ; 004ea6ed
        ;   XREF to: 00548f60 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_isSocketValid_FUN_00548f60(_SOCKET * socket_handle)
    ADD ESP,0x4                         ; 004ea6f2
    TEST EAX,EAX                        ; 004ea6f5
    JZ 0x004ea73a                       ; 004ea6f7
        ;   XREF to: 004ea73a (CONDITIONAL_JUMP)  ; LAB_004ea73a
    PUSH EDI                            ; 004ea6f9
    PUSH EBX                            ; 004ea6fa
    XOR EDX,EDX                         ; 004ea6fb
    MOV EDI,dword ptr [0x005c1664]      ; 004ea6fd | DAT_005c1664
    MOV dword ptr [0x005c1664],EDX      ; 004ea703 | DAT_005c1664
    XOR EBP,EBP                         ; 004ea709
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00553910 ; 004ea70b
        ;   XREF to: 00553910 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00553910()
        ;   Label: LAB_004ea70b
    MOV EBX,EBP                         ; 004ea710
    PUSH EBP                            ; 004ea712
        ;   Label: LAB_004ea712
    PUSH 0x405                          ; 004ea713
    PUSH 0x1d16408                      ; 004ea718
    PUSH ESI                            ; 004ea71d
    CALL support_trisock.cpp_receiveSocketData_FUN_00549010 ; 004ea71e
        ;   XREF to: 00549010 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_receiveSocketData_FUN_00549010(_SOCKET * socket_handle, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 004ea723
    TEST EAX,EAX                        ; 004ea726
    JLE 0x004ea732                      ; 004ea728
        ;   XREF to: 004ea732 (CONDITIONAL_JUMP)  ; LAB_004ea732
    INC EBX                             ; 004ea72a
    CMP EBX,0x14                        ; 004ea72b
    JL 0x004ea712                       ; 004ea72e
        ;   XREF to: 004ea712 (CONDITIONAL_JUMP)  ; LAB_004ea712
    JMP 0x004ea70b                      ; 004ea730
        ;   XREF to: 004ea70b (UNCONDITIONAL_JUMP)  ; LAB_004ea70b
    MOV dword ptr [0x005c1664],EDI      ; 004ea732 | DAT_005c1664
        ;   Label: LAB_004ea732
    POP EBX                             ; 004ea738
    POP EDI                             ; 004ea739
    POP EBP                             ; 004ea73a
        ;   Label: LAB_004ea73a
    POP ESI                             ; 004ea73b
    RET                                 ; 004ea73c

