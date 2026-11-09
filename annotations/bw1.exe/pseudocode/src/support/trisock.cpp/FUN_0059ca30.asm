; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte support_trisock_cpp_FUN_0059ca30(CSocket *param_1)
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
; XREF[1]:
;   support_trisock.cpp_FUN_0059ed90 at 0059edff
;
; Referenced Globals:
;   undefined4 DAT_02c8ae50
;   undefined4 DAT_02c8ae54
;
; Called Functions:
;   crt_wsock32.c___WSAFDIsSet
;   crt_wsock32.c_select
;   support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0059ca30
        ;   Label: support_trisock.cpp_FUN_0059ca30
    SUB ESP,0x314                       ; 0059ca31
    MOV EBP,dword ptr [ESP + 0x31c]     ; 0059ca37
    PUSH EBP                            ; 0059ca3e
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970 ; 0059ca3f
        ;   XREF to: 0059c970 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_0059c970(CSocket * this_ptr)
    ADD ESP,0x4                         ; 0059ca44
    TEST EAX,EAX                        ; 0059ca47
    JNZ 0x0059ca58                      ; 0059ca49
        ;   XREF to: 0059ca58 (CONDITIONAL_JUMP)  ; LAB_0059ca58
    MOV EAX,0x4                         ; 0059ca4b
    ADD ESP,0x314                       ; 0059ca50
    POP EBP                             ; 0059ca56
    RET                                 ; 0059ca57
    PUSH EDI                            ; 0059ca58
        ;   Label: LAB_0059ca58
    PUSH ESI                            ; 0059ca59
    PUSH EBX                            ; 0059ca5a
    MOV EDX,0x1                         ; 0059ca5b
    MOV dword ptr [ESP + 0x110],EDX     ; 0059ca60
    MOV EAX,dword ptr [EBP]             ; 0059ca67
    MOV dword ptr [ESP + 0x114],EAX     ; 0059ca6a
    MOV dword ptr [ESP + 0xc],EDX       ; 0059ca71
    MOV EAX,dword ptr [EBP]             ; 0059ca75
    MOV dword ptr [ESP + 0x10],EAX      ; 0059ca78
    MOV dword ptr [ESP + 0x214],EDX     ; 0059ca7c
    MOV EAX,dword ptr [EBP]             ; 0059ca83
    MOV dword ptr [ESP + 0x218],EAX     ; 0059ca86
    LEA EAX,[ESP + 0x318]               ; 0059ca8d
    PUSH EAX                            ; 0059ca94
    LEA EAX,[ESP + 0x218]               ; 0059ca95
    PUSH EAX                            ; 0059ca9c
    LEA EAX,[ESP + 0x14]                ; 0059ca9d
    PUSH EAX                            ; 0059caa1
    LEA EAX,[ESP + 0x11c]               ; 0059caa2
    PUSH EAX                            ; 0059caa9
    LEA EDI,[ESP + 0x328]               ; 0059caaa
    MOV ESI,0x2c8ae50                   ; 0059cab1
    PUSH 0x0                            ; 0059cab6
    MOVSD ES:EDI,ESI                    ; 0059cab8 | DAT_02c8ae50
    MOVSD ES:EDI,ESI                    ; 0059cab9 | DAT_02c8ae54
    CALL crt_wsock32.c_select           ; 0059caba
        ;   XREF to: 005cf826 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_select(int nfds, fd_set * readfds, fd_set * writefds, fd_set * exceptfds, ...)
    LEA EAX,[ESP + 0x110]               ; 0059cabf
    PUSH EAX                            ; 0059cac6
    MOV ESI,dword ptr [EBP]             ; 0059cac7
    PUSH ESI                            ; 0059caca
    XOR EBX,EBX                         ; 0059cacb
    CALL crt_wsock32.c___WSAFDIsSet     ; 0059cacd
        ;   XREF to: 005cf820 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 0059cad2
    JZ 0x0059cadb                       ; 0059cad4
        ;   XREF to: 0059cadb (CONDITIONAL_JUMP)  ; LAB_0059cadb
    MOV EBX,0x1                         ; 0059cad6
    LEA EAX,[ESP + 0xc]                 ; 0059cadb
        ;   Label: LAB_0059cadb
    PUSH EAX                            ; 0059cadf
    MOV EDI,dword ptr [EBP]             ; 0059cae0
    PUSH EDI                            ; 0059cae3
    CALL crt_wsock32.c___WSAFDIsSet     ; 0059cae4
        ;   XREF to: 005cf820 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 0059cae9
    JZ 0x0059caf0                       ; 0059caeb
        ;   XREF to: 0059caf0 (CONDITIONAL_JUMP)  ; LAB_0059caf0
    OR BL,0x2                           ; 0059caed
    LEA EAX,[ESP + 0x214]               ; 0059caf0
        ;   Label: LAB_0059caf0
    PUSH EAX                            ; 0059caf7
    MOV EAX,dword ptr [EBP]             ; 0059caf8
    PUSH EAX                            ; 0059cafb
    CALL crt_wsock32.c___WSAFDIsSet     ; 0059cafc
        ;   XREF to: 005cf820 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 0059cb01
    JZ 0x0059cb08                       ; 0059cb03
        ;   XREF to: 0059cb08 (CONDITIONAL_JUMP)  ; LAB_0059cb08
    OR BL,0x4                           ; 0059cb05
    MOV EAX,EBX                         ; 0059cb08
        ;   Label: LAB_0059cb08
    POP EBX                             ; 0059cb0a
    POP ESI                             ; 0059cb0b
    POP EDI                             ; 0059cb0c
    ADD ESP,0x314                       ; 0059cb0d
    POP EBP                             ; 0059cb13
    RET                                 ; 0059cb14

