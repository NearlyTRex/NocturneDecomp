; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_decryptMessage_FUN_00531110(char *encrypted_msg)
;
; Parameters:
; char *           Stack[0x4]:4   encrypted_msg
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d289e
;
; Referenced Globals:
;   TerminatedCString s_support_newmsg_cpp_005ec628
;   TerminatedCString s_decryptMessage_invalid_i_005ec63e
;   TerminatedCString s_support_newmsg_cpp_005ec66b
;   TerminatedCString s_decryptMessage_error_dec_005ec681
;   TerminatedCString s_support_newmsg_cpp_005ec6a9
;   TerminatedCString s_decryptMessage_premature_005ec6bf
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00531110
        ;   Label: support_newmsg.cpp_decryptMessage_FUN_00531110
    PUSH ESI                            ; 00531111
    PUSH EDI                            ; 00531112
    SUB ESP,0x4                         ; 00531113
    MOV EDI,dword ptr [ESP + 0x14]      ; 00531116
    CMP byte ptr [EDI + 0x2],0x3e       ; 0053111a
    JZ 0x0053115d                       ; 0053111e
        ;   XREF to: 0053115d (CONDITIONAL_JUMP)  ; LAB_0053115d
    XOR EBX,EBX                         ; 00531120
    XOR EAX,EAX                         ; 00531122
    MOV BL,byte ptr [EDI + 0x1]         ; 00531124
    MOV AL,byte ptr [EDI]               ; 00531127
    SHL EBX,0x8                         ; 00531129
    ADD EAX,EBX                         ; 0053112c
    MOV dword ptr [ESP],EAX             ; 0053112e
    XOR EAX,EAX                         ; 00531131
    MOV EDX,dword ptr [ESP]             ; 00531133
    MOV AL,byte ptr [EDI + 0x2]         ; 00531136
    XOR EAX,EDX                         ; 00531139
    AND EAX,0xff                        ; 0053113b
    CMP EAX,0x3e                        ; 00531140
    JNZ 0x00531167                      ; 00531143
        ;   XREF to: 00531167 (CONDITIONAL_JUMP)  ; LAB_00531167
    MOV ESI,0x2                         ; 00531145
        ;   Label: LAB_00531145
    LEA EBX,[EDI + ESI*0x1]             ; 0053114a
    MOV AL,byte ptr [ESP]               ; 0053114d
        ;   Label: LAB_0053114d
    MOV DL,byte ptr [EBX]               ; 00531150
    XOR DL,AL                           ; 00531152
    MOV byte ptr [EBX],DL               ; 00531154
    JNZ 0x0053118c                      ; 00531156
        ;   XREF to: 0053118c (CONDITIONAL_JUMP)  ; LAB_0053118c
    CMP ESI,0x17                        ; 00531158
    JL 0x005311ca                       ; 0053115b
        ;   XREF to: 005311ca (CONDITIONAL_JUMP)  ; LAB_005311ca
    LEA EAX,[EDI + 0x17]                ; 0053115d
        ;   Label: LAB_0053115d
    ADD ESP,0x4                         ; 00531160
    POP EDI                             ; 00531163
    POP ESI                             ; 00531164
    POP EBX                             ; 00531165
    RET                                 ; 00531166
    MOV ECX,0x5ec628                    ; 00531167 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_00531167
    MOV EBX,0xe9                        ; 0053116c
    PUSH 0x5ec63e                       ; 00531171 | = "decryptMessage - invalid initial mask..."
    MOV dword ptr [0x01d1d400],ECX      ; 00531176 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 0053117c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00531182
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00531187
    JMP 0x00531145                      ; 0053118a
        ;   XREF to: 00531145 (UNCONDITIONAL_JUMP)  ; LAB_00531145
    IMUL EAX,dword ptr [ESP],0x2ff0bd   ; 0053118c
        ;   Label: LAB_0053118c
    INC EAX                             ; 00531193
    INC EBX                             ; 00531194
    AND EAX,0xffff                      ; 00531195
    INC ESI                             ; 0053119a
    MOV dword ptr [ESP],EAX             ; 0053119b
    CMP ESI,0x186a0                     ; 0053119e
    JLE 0x0053114d                      ; 005311a4
        ;   XREF to: 0053114d (CONDITIONAL_JUMP)  ; LAB_0053114d
    MOV EAX,0x5ec66b                    ; 005311a6 | = "..\\support\\newmsg.cpp"
    MOV EDX,0xf4                        ; 005311ab
    PUSH 0x5ec681                       ; 005311b0 | = "decryptMessage - error decrypting text!"
    MOV [0x01d1d400],EAX                ; 005311b5 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 005311ba | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005311c0
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005311c5
    JMP 0x0053114d                      ; 005311c8
        ;   XREF to: 0053114d (UNCONDITIONAL_JUMP)  ; LAB_0053114d
    MOV ECX,0x5ec6a9                    ; 005311ca | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_005311ca
    MOV EBX,0x107                       ; 005311cf
    PUSH 0x5ec6bf                       ; 005311d4 | = "decryptMessage - premature null termi..."
    MOV dword ptr [0x01d1d400],ECX      ; 005311d9 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 005311df | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005311e5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005311ea
    LEA EAX,[EDI + 0x17]                ; 005311ed
    ADD ESP,0x4                         ; 005311f0
    POP EDI                             ; 005311f3
    POP ESI                             ; 005311f4
    POP EBX                             ; 005311f5
    RET                                 ; 005311f6

