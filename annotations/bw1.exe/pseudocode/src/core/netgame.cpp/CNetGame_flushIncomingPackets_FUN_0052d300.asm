; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_netgame_cpp_CNetGame_flushIncomingPackets_FUN_0052d300(CNetGame *this_ptr)
;
; Parameters:
; CNetGame *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0052c970 at 0052ca04
;
; Referenced Globals:
;   undefined4 DAT_006260e8
;
; Called Functions:
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970
;   support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0052d300
        ;   Label: core_netgame.cpp_CNetGame_flushIncomingPackets_FUN_0052d300
    PUSH EBP                            ; 0052d301
    MOV ESI,dword ptr [ESP + 0xc]       ; 0052d302
    ADD ESI,0x178                       ; 0052d306
    PUSH ESI                            ; 0052d30c
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970 ; 0052d30d
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0052d312
    TEST EAX,EAX                        ; 0052d315
    JZ 0x0052d35a                       ; 0052d317
        ;   XREF to: 0052d35a (CONDITIONAL_JUMP)  ; LAB_0052d35a
    PUSH EDI                            ; 0052d319
    PUSH EBX                            ; 0052d31a
    XOR EDX,EDX                         ; 0052d31b
    MOV EDI,dword ptr [0x006260e8]      ; 0052d31d | DAT_006260e8
    MOV dword ptr [0x006260e8],EDX      ; 0052d323 | DAT_006260e8
    XOR EBP,EBP                         ; 0052d329
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 0052d32b
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_0052d32b
    MOV EBX,EBP                         ; 0052d330
    PUSH EBP                            ; 0052d332
        ;   Label: LAB_0052d332
    PUSH 0x405                          ; 0052d333
    PUSH 0x1d7edb0                      ; 0052d338
    PUSH ESI                            ; 0052d33d
    CALL support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20 ; 0052d33e
        ;   XREF to: 0059cb20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 0052d343
    TEST EAX,EAX                        ; 0052d346
    JLE 0x0052d352                      ; 0052d348
        ;   XREF to: 0052d352 (CONDITIONAL_JUMP)  ; LAB_0052d352
    INC EBX                             ; 0052d34a
    CMP EBX,0x14                        ; 0052d34b
    JL 0x0052d332                       ; 0052d34e
        ;   XREF to: 0052d332 (CONDITIONAL_JUMP)  ; LAB_0052d332
    JMP 0x0052d32b                      ; 0052d350
        ;   XREF to: 0052d32b (UNCONDITIONAL_JUMP)  ; LAB_0052d32b
    MOV dword ptr [0x006260e8],EDI      ; 0052d352 | DAT_006260e8
        ;   Label: LAB_0052d352
    POP EBX                             ; 0052d358
    POP EDI                             ; 0052d359
    POP EBP                             ; 0052d35a
        ;   Label: LAB_0052d35a
    POP ESI                             ; 0052d35b
    RET                                 ; 0052d35c

