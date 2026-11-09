; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_FUN_005089e0(char *encrypted_msg)
;
; Parameters:
; char *           Stack[0x4]:4   encrypted_msg
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_FUN_004bb100 at 004bb1ee
;
; Referenced Globals:
;   TerminatedCString s_support_newmsg_cpp_005cb439
;   TerminatedCString s_decryptMessage_invalid_i_005cb44f
;   TerminatedCString s_support_newmsg_cpp_005cb47c
;   TerminatedCString s_decryptMessage_error_dec_005cb492
;   TerminatedCString s_support_newmsg_cpp_005cb4ba
;   TerminatedCString s_decryptMessage_premature_005cb4d0
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005089e0
        ;   Label: support_newmsg.cpp_FUN_005089e0
    PUSH ESI                            ; 005089e1
    PUSH EDI                            ; 005089e2
    SUB ESP,0x4                         ; 005089e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005089e6
    CMP byte ptr [EDI + 0x2],0x3e       ; 005089ea
    JZ 0x00508a2d                       ; 005089ee
        ;   XREF to: 00508a2d (CONDITIONAL_JUMP)  ; LAB_00508a2d
    XOR EBX,EBX                         ; 005089f0
    XOR EAX,EAX                         ; 005089f2
    MOV BL,byte ptr [EDI + 0x1]         ; 005089f4
    MOV AL,byte ptr [EDI]               ; 005089f7
    SHL EBX,0x8                         ; 005089f9
    ADD EAX,EBX                         ; 005089fc
    MOV dword ptr [ESP],EAX             ; 005089fe
    XOR EAX,EAX                         ; 00508a01
    MOV EDX,dword ptr [ESP]             ; 00508a03
    MOV AL,byte ptr [EDI + 0x2]         ; 00508a06
    XOR EAX,EDX                         ; 00508a09
    AND EAX,0xff                        ; 00508a0b
    CMP EAX,0x3e                        ; 00508a10
    JNZ 0x00508a37                      ; 00508a13
        ;   XREF to: 00508a37 (CONDITIONAL_JUMP)  ; LAB_00508a37
    MOV ESI,0x2                         ; 00508a15
        ;   Label: LAB_00508a15
    LEA EBX,[EDI + ESI*0x1]             ; 00508a1a
    MOV AL,byte ptr [ESP]               ; 00508a1d
        ;   Label: LAB_00508a1d
    MOV DL,byte ptr [EBX]               ; 00508a20
    XOR DL,AL                           ; 00508a22
    MOV byte ptr [EBX],DL               ; 00508a24
    JNZ 0x00508a5c                      ; 00508a26
        ;   XREF to: 00508a5c (CONDITIONAL_JUMP)  ; LAB_00508a5c
    CMP ESI,0x17                        ; 00508a28
    JL 0x00508a9a                       ; 00508a2b
        ;   XREF to: 00508a9a (CONDITIONAL_JUMP)  ; LAB_00508a9a
    LEA EAX,[EDI + 0x17]                ; 00508a2d
        ;   Label: LAB_00508a2d
    ADD ESP,0x4                         ; 00508a30
    POP EDI                             ; 00508a33
    POP ESI                             ; 00508a34
    POP EBX                             ; 00508a35
    RET                                 ; 00508a36
    MOV ECX,0x5cb439                    ; 00508a37 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_00508a37
    MOV EBX,0xe9                        ; 00508a3c
    PUSH 0x5cb44f                       ; 00508a41 | = "decryptMessage - invalid initial mask..."
    MOV dword ptr [0x01d71de0],ECX      ; 00508a46 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00508a4c | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00508a52
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00508a57
    JMP 0x00508a15                      ; 00508a5a
        ;   XREF to: 00508a15 (UNCONDITIONAL_JUMP)  ; LAB_00508a15
    IMUL EAX,dword ptr [ESP],0x2ff0bd   ; 00508a5c
        ;   Label: LAB_00508a5c
    INC EAX                             ; 00508a63
    INC EBX                             ; 00508a64
    AND EAX,0xffff                      ; 00508a65
    INC ESI                             ; 00508a6a
    MOV dword ptr [ESP],EAX             ; 00508a6b
    CMP ESI,0x186a0                     ; 00508a6e
    JLE 0x00508a1d                      ; 00508a74
        ;   XREF to: 00508a1d (CONDITIONAL_JUMP)  ; LAB_00508a1d
    MOV EAX,0x5cb47c                    ; 00508a76 | = "..\\support\\newmsg.cpp"
    MOV EDX,0xf4                        ; 00508a7b
    PUSH 0x5cb492                       ; 00508a80 | = "decryptMessage - error decrypting text!"
    MOV [0x01d71de0],EAX                ; 00508a85 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00508a8a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00508a90
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00508a95
    JMP 0x00508a1d                      ; 00508a98
        ;   XREF to: 00508a1d (UNCONDITIONAL_JUMP)  ; LAB_00508a1d
    MOV ECX,0x5cb4ba                    ; 00508a9a | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_00508a9a
    MOV EBX,0x107                       ; 00508a9f
    PUSH 0x5cb4d0                       ; 00508aa4 | = "decryptMessage - premature null termi..."
    MOV dword ptr [0x01d71de0],ECX      ; 00508aa9 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00508aaf | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00508ab5
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00508aba
    LEA EAX,[EDI + 0x17]                ; 00508abd
    ADD ESP,0x4                         ; 00508ac0
    POP EDI                             ; 00508ac3
    POP ESI                             ; 00508ac4
    POP EBX                             ; 00508ac5
    RET                                 ; 00508ac6

