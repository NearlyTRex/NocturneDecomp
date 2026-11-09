; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl support_newmsg_cpp_FUN_0050ff00(char *encrypted_msg)
;
; Parameters:
; char *           Stack[0x4]:4   encrypted_msg
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_FUN_004b90d0 at 004b91ae
;
; Referenced Globals:
;   TerminatedCString s_support_newmsg_cpp_005e13cd
;   TerminatedCString s_decryptMessage_invalid_i_005e13e3
;   TerminatedCString s_support_newmsg_cpp_005e1410
;   TerminatedCString s_decryptMessage_error_dec_005e1426
;   TerminatedCString s_support_newmsg_cpp_005e144e
;   TerminatedCString s_decryptMessage_premature_005e1464
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050ff00
        ;   Label: support_newmsg.cpp_FUN_0050ff00
    PUSH ESI                            ; 0050ff01
    PUSH EDI                            ; 0050ff02
    SUB ESP,0x4                         ; 0050ff03
    MOV EDI,dword ptr [ESP + 0x14]      ; 0050ff06
    CMP byte ptr [EDI + 0x2],0x3e       ; 0050ff0a
    JZ 0x0050ff4d                       ; 0050ff0e
        ;   XREF to: 0050ff4d (CONDITIONAL_JUMP)  ; LAB_0050ff4d
    XOR EBX,EBX                         ; 0050ff10
    XOR EAX,EAX                         ; 0050ff12
    MOV BL,byte ptr [EDI + 0x1]         ; 0050ff14
    MOV AL,byte ptr [EDI]               ; 0050ff17
    SHL EBX,0x8                         ; 0050ff19
    ADD EAX,EBX                         ; 0050ff1c
    MOV dword ptr [ESP],EAX             ; 0050ff1e
    XOR EAX,EAX                         ; 0050ff21
    MOV EDX,dword ptr [ESP]             ; 0050ff23
    MOV AL,byte ptr [EDI + 0x2]         ; 0050ff26
    XOR EAX,EDX                         ; 0050ff29
    AND EAX,0xff                        ; 0050ff2b
    CMP EAX,0x3e                        ; 0050ff30
    JNZ 0x0050ff57                      ; 0050ff33
        ;   XREF to: 0050ff57 (CONDITIONAL_JUMP)  ; LAB_0050ff57
    MOV ESI,0x2                         ; 0050ff35
        ;   Label: LAB_0050ff35
    LEA EBX,[EDI + ESI*0x1]             ; 0050ff3a
    MOV AL,byte ptr [ESP]               ; 0050ff3d
        ;   Label: LAB_0050ff3d
    MOV DL,byte ptr [EBX]               ; 0050ff40
    XOR DL,AL                           ; 0050ff42
    MOV byte ptr [EBX],DL               ; 0050ff44
    JNZ 0x0050ff7c                      ; 0050ff46
        ;   XREF to: 0050ff7c (CONDITIONAL_JUMP)  ; LAB_0050ff7c
    CMP ESI,0x17                        ; 0050ff48
    JL 0x0050ffba                       ; 0050ff4b
        ;   XREF to: 0050ffba (CONDITIONAL_JUMP)  ; LAB_0050ffba
    LEA EAX,[EDI + 0x17]                ; 0050ff4d
        ;   Label: LAB_0050ff4d
    ADD ESP,0x4                         ; 0050ff50
    POP EDI                             ; 0050ff53
    POP ESI                             ; 0050ff54
    POP EBX                             ; 0050ff55
    RET                                 ; 0050ff56
    MOV ECX,0x5e13cd                    ; 0050ff57 | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_0050ff57
    MOV EBX,0xe2                        ; 0050ff5c
    PUSH 0x5e13e3                       ; 0050ff61 | = "decryptMessage - invalid initial mask..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050ff66 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0050ff6c | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ff72
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ff77
    JMP 0x0050ff35                      ; 0050ff7a
        ;   XREF to: 0050ff35 (UNCONDITIONAL_JUMP)  ; LAB_0050ff35
    IMUL EAX,dword ptr [ESP],0x2ff0bd   ; 0050ff7c
        ;   Label: LAB_0050ff7c
    INC EAX                             ; 0050ff83
    INC EBX                             ; 0050ff84
    AND EAX,0xffff                      ; 0050ff85
    INC ESI                             ; 0050ff8a
    MOV dword ptr [ESP],EAX             ; 0050ff8b
    CMP ESI,0x186a0                     ; 0050ff8e
    JLE 0x0050ff3d                      ; 0050ff94
        ;   XREF to: 0050ff3d (CONDITIONAL_JUMP)  ; LAB_0050ff3d
    MOV EAX,0x5e1410                    ; 0050ff96 | = "..\\support\\newmsg.cpp"
    MOV EDX,0xed                        ; 0050ff9b
    PUSH 0x5e1426                       ; 0050ffa0 | = "decryptMessage - error decrypting text!"
    MOV [0x01d046a0],EAX                ; 0050ffa5 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0050ffaa | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ffb0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ffb5
    JMP 0x0050ff3d                      ; 0050ffb8
        ;   XREF to: 0050ff3d (UNCONDITIONAL_JUMP)  ; LAB_0050ff3d
    MOV ECX,0x5e144e                    ; 0050ffba | = "..\\support\\newmsg.cpp"
        ;   Label: LAB_0050ffba
    MOV EBX,0x100                       ; 0050ffbf
    PUSH 0x5e1464                       ; 0050ffc4 | = "decryptMessage - premature null termi..."
    MOV dword ptr [0x01d046a0],ECX      ; 0050ffc9 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0050ffcf | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0050ffd5
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0050ffda
    LEA EAX,[EDI + 0x17]                ; 0050ffdd
    ADD ESP,0x4                         ; 0050ffe0
    POP EDI                             ; 0050ffe3
    POP ESI                             ; 0050ffe4
    POP EBX                             ; 0050ffe5
    RET                                 ; 0050ffe6

