; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte support_trisock_cpp_FUN_00579150(CSocket *param_1)
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
;   support_trisock.cpp_FUN_00579890 at 005799fb
;   support_trisock.cpp_FUN_0057b680 at 0057b6eb
;
; Referenced Globals:
;   undefined4 DAT_02653634
;   undefined4 DAT_02653638
;
; Called Functions:
;   crt_wsock32.c___WSAFDIsSet
;   crt_wsock32.c_select
;   support_trisock.cpp_CSocket_isSocketValid_FUN_00579090
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00579150
        ;   Label: support_trisock.cpp_FUN_00579150
    SUB ESP,0x314                       ; 00579151
    MOV EBP,dword ptr [ESP + 0x31c]     ; 00579157
    PUSH EBP                            ; 0057915e
    CALL support_trisock.cpp_CSocket_isSocketValid_FUN_00579090 ; 0057915f
        ;   XREF to: 00579090 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_isSocketValid_FUN_00579090(CSocket * this_ptr)
    ADD ESP,0x4                         ; 00579164
    TEST EAX,EAX                        ; 00579167
    JNZ 0x00579178                      ; 00579169
        ;   XREF to: 00579178 (CONDITIONAL_JUMP)  ; LAB_00579178
    MOV EAX,0x4                         ; 0057916b
    ADD ESP,0x314                       ; 00579170
    POP EBP                             ; 00579176
    RET                                 ; 00579177
    PUSH EDI                            ; 00579178
        ;   Label: LAB_00579178
    PUSH ESI                            ; 00579179
    PUSH EBX                            ; 0057917a
    MOV EDX,0x1                         ; 0057917b
    MOV dword ptr [ESP + 0x110],EDX     ; 00579180
    MOV EAX,dword ptr [EBP]             ; 00579187
    MOV dword ptr [ESP + 0x114],EAX     ; 0057918a
    MOV dword ptr [ESP + 0xc],EDX       ; 00579191
    MOV EAX,dword ptr [EBP]             ; 00579195
    MOV dword ptr [ESP + 0x10],EAX      ; 00579198
    MOV dword ptr [ESP + 0x214],EDX     ; 0057919c
    MOV EAX,dword ptr [EBP]             ; 005791a3
    MOV dword ptr [ESP + 0x218],EAX     ; 005791a6
    LEA EAX,[ESP + 0x318]               ; 005791ad
    PUSH EAX                            ; 005791b4
    LEA EAX,[ESP + 0x218]               ; 005791b5
    PUSH EAX                            ; 005791bc
    LEA EAX,[ESP + 0x14]                ; 005791bd
    PUSH EAX                            ; 005791c1
    LEA EAX,[ESP + 0x11c]               ; 005791c2
    PUSH EAX                            ; 005791c9
    LEA EDI,[ESP + 0x328]               ; 005791ca
    MOV ESI,0x2653634                   ; 005791d1
    PUSH 0x0                            ; 005791d6
    MOVSD ES:EDI,ESI                    ; 005791d8 | DAT_02653634
    MOVSD ES:EDI,ESI                    ; 005791d9 | DAT_02653638
    CALL crt_wsock32.c_select           ; 005791da
        ;   XREF to: 005c7514 (UNCONDITIONAL_CALL)  ; int crt_wsock32.c_select(int nfds, fd_set * readfds, fd_set * writefds, fd_set * exceptfds, ...)
    LEA EAX,[ESP + 0x110]               ; 005791df
    PUSH EAX                            ; 005791e6
    MOV ESI,dword ptr [EBP]             ; 005791e7
    PUSH ESI                            ; 005791ea
    XOR EBX,EBX                         ; 005791eb
    CALL crt_wsock32.c___WSAFDIsSet     ; 005791ed
        ;   XREF to: 005c750e (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 005791f2
    JZ 0x005791fb                       ; 005791f4
        ;   XREF to: 005791fb (CONDITIONAL_JUMP)  ; LAB_005791fb
    MOV EBX,0x1                         ; 005791f6
    LEA EAX,[ESP + 0xc]                 ; 005791fb
        ;   Label: LAB_005791fb
    PUSH EAX                            ; 005791ff
    MOV EDI,dword ptr [EBP]             ; 00579200
    PUSH EDI                            ; 00579203
    CALL crt_wsock32.c___WSAFDIsSet     ; 00579204
        ;   XREF to: 005c750e (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 00579209
    JZ 0x00579210                       ; 0057920b
        ;   XREF to: 00579210 (CONDITIONAL_JUMP)  ; LAB_00579210
    OR BL,0x2                           ; 0057920d
    LEA EAX,[ESP + 0x214]               ; 00579210
        ;   Label: LAB_00579210
    PUSH EAX                            ; 00579217
    MOV EAX,dword ptr [EBP]             ; 00579218
    PUSH EAX                            ; 0057921b
    CALL crt_wsock32.c___WSAFDIsSet     ; 0057921c
        ;   XREF to: 005c750e (UNCONDITIONAL_CALL)  ; int crt_wsock32.c___WSAFDIsSet(SOCKET param_1, fd_set * param_2)
    TEST EAX,EAX                        ; 00579221
    JZ 0x00579228                       ; 00579223
        ;   XREF to: 00579228 (CONDITIONAL_JUMP)  ; LAB_00579228
    OR BL,0x4                           ; 00579225
    MOV EAX,EBX                         ; 00579228
        ;   Label: LAB_00579228
    POP EBX                             ; 0057922a
    POP ESI                             ; 0057922b
    POP EDI                             ; 0057922c
    ADD ESP,0x314                       ; 0057922d
    POP EBP                             ; 00579233
    RET                                 ; 00579234

