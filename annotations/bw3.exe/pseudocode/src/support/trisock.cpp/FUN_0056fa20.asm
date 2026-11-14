; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte support_trisock_cpp_FUN_0056fa20(CSocket *param_1)
;
; Local Variables:
; undefined4       Stack[-0x318]:4  local_318
; undefined4       Stack[-0x314]:4  local_314
; undefined4       Stack[-0x214]:4  local_214
; undefined4       Stack[-0x210]:4  local_210
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   support_trisock.cpp_FUN_0056fef0 at 0057005b
;   support_trisock.cpp_FUN_00571d80 at 00571def
;
; Referenced Globals:
;   undefined4 DAT_02cfd8a0
;   undefined4 DAT_02cfd8a4
;
; Called Functions:
;   crt_wsock32.c___WSAFDIsSet
;   crt_wsock32.c_select
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056fa20
        ;   Label: support_trisock.cpp_FUN_0056fa20
    SUB ESP,0x314                       ; 0056fa21
    MOV EBP,dword ptr [ESP + 0x31c]     ; 0056fa27
    PUSH EBP                            ; 0056fa2e
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960 ; 0056fa2f
        ;   XREF to: 0056f960 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0056f960(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0056fa34
    TEST EAX,EAX                        ; 0056fa37
    JNZ 0x0056fa48                      ; 0056fa39
        ;   XREF to: 0056fa48 (CONDITIONAL_JUMP)  ; LAB_0056fa48
    MOV EAX,0x4                         ; 0056fa3b
    ADD ESP,0x314                       ; 0056fa40
    POP EBP                             ; 0056fa46
    RET                                 ; 0056fa47
    PUSH EDI                            ; 0056fa48
        ;   Label: LAB_0056fa48
    PUSH ESI                            ; 0056fa49
    PUSH EBX                            ; 0056fa4a
    MOV EDX,0x1                         ; 0056fa4b
    MOV dword ptr [ESP + 0x110],EDX     ; 0056fa50
    MOV EAX,dword ptr [EBP]             ; 0056fa57
    MOV dword ptr [ESP + 0x114],EAX     ; 0056fa5a
    MOV dword ptr [ESP + 0xc],EDX       ; 0056fa61
    MOV EAX,dword ptr [EBP]             ; 0056fa65
    MOV dword ptr [ESP + 0x10],EAX      ; 0056fa68
    MOV dword ptr [ESP + 0x214],EDX     ; 0056fa6c
    MOV EAX,dword ptr [EBP]             ; 0056fa73
    MOV dword ptr [ESP + 0x218],EAX     ; 0056fa76
    LEA EAX,[ESP + 0x318]               ; 0056fa7d
    PUSH EAX                            ; 0056fa84
    LEA EAX,[ESP + 0x218]               ; 0056fa85
    PUSH EAX                            ; 0056fa8c
    LEA EAX,[ESP + 0x14]                ; 0056fa8d
    PUSH EAX                            ; 0056fa91
    LEA EAX,[ESP + 0x11c]               ; 0056fa92
    PUSH EAX                            ; 0056fa99
    LEA EDI,[ESP + 0x328]               ; 0056fa9a
    MOV ESI,0x2cfd8a0                   ; 0056faa1
    PUSH 0x0                            ; 0056faa6
    MOVSD ES:EDI,ESI                    ; 0056faa8 | DAT_02cfd8a0
    MOVSD ES:EDI,ESI                    ; 0056faa9 | DAT_02cfd8a4
    CALL crt_wsock32.c_select           ; 0056faaa
        ;   XREF to: 005b25b6 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_select(int nfds, fd_set * readfds, fd_set * writefds, fd_set * exceptfds, ...)
    LEA EAX,[ESP + 0x110]               ; 0056faaf
    PUSH EAX                            ; 0056fab6
    MOV ESI,dword ptr [EBP]             ; 0056fab7
    PUSH ESI                            ; 0056faba
    XOR EBX,EBX                         ; 0056fabb
    CALL crt_wsock32.c___WSAFDIsSet     ; 0056fabd
        ;   XREF to: 005b25b0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 0056fac2
    JZ 0x0056facb                       ; 0056fac4
        ;   XREF to: 0056facb (CONDITIONAL_JUMP)  ; LAB_0056facb
    MOV EBX,0x1                         ; 0056fac6
    LEA EAX,[ESP + 0xc]                 ; 0056facb
        ;   Label: LAB_0056facb
    PUSH EAX                            ; 0056facf
    MOV EDI,dword ptr [EBP]             ; 0056fad0
    PUSH EDI                            ; 0056fad3
    CALL crt_wsock32.c___WSAFDIsSet     ; 0056fad4
        ;   XREF to: 005b25b0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 0056fad9
    JZ 0x0056fae0                       ; 0056fadb
        ;   XREF to: 0056fae0 (CONDITIONAL_JUMP)  ; LAB_0056fae0
    OR BL,0x2                           ; 0056fadd
    LEA EAX,[ESP + 0x214]               ; 0056fae0
        ;   Label: LAB_0056fae0
    PUSH EAX                            ; 0056fae7
    MOV EAX,dword ptr [EBP]             ; 0056fae8
    PUSH EAX                            ; 0056faeb
    CALL crt_wsock32.c___WSAFDIsSet     ; 0056faec
        ;   XREF to: 005b25b0 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 0056faf1
    JZ 0x0056faf8                       ; 0056faf3
        ;   XREF to: 0056faf8 (CONDITIONAL_JUMP)  ; LAB_0056faf8
    OR BL,0x4                           ; 0056faf5
    MOV EAX,EBX                         ; 0056faf8
        ;   Label: LAB_0056faf8
    POP EBX                             ; 0056fafa
    POP ESI                             ; 0056fafb
    POP EDI                             ; 0056fafc
    ADD ESP,0x314                       ; 0056fafd
    POP EBP                             ; 0056fb03
    RET                                 ; 0056fb04

