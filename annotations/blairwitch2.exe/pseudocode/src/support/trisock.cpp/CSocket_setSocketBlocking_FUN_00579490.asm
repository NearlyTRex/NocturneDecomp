; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trisock_cpp_CSocket_setSocketBlocking_FUN_00579490(CSocket *this_ptr,int blocking_mode)
;
; Parameters:
; CSocket *        Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blocking_mode
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   core_netgame.cpp_CNetGame_initializeNetwork_FUN_0050b790 at 0050b7ce
;   support_trisock.cpp_FUN_00579890 at 005799d0
;
; Called Functions:
;   crt_wsock32.c_ioctlsocket
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00579490
        ;   Label: support_trisock.cpp_CSocket_setSocketBlocking_FUN_00579490
    CMP dword ptr [ESP + 0xc],0x0       ; 00579493
    SETZ AL                             ; 00579498
    AND EAX,0xff                        ; 0057949b
    MOV dword ptr [ESP],EAX             ; 005794a0
    MOV EAX,ESP                         ; 005794a3
    PUSH EAX                            ; 005794a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005794a6
    PUSH 0x8004667e                     ; 005794aa
    MOV ECX,dword ptr [EAX]             ; 005794af
    PUSH ECX                            ; 005794b1
    CALL crt_wsock32.c_ioctlsocket      ; 005794b2
        ;   XREF to: 005c74d8 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_ioctlsocket(_SOCKET s, long cmd, uint * argp)
    TEST EAX,EAX                        ; 005794b7
    SETZ AL                             ; 005794b9
    AND EAX,0xff                        ; 005794bc
    ADD ESP,0x4                         ; 005794c1
    RET                                 ; 005794c4

