; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_00434d60(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00434dd0 at 00434e0d
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005cd9d0
;   TerminatedCString s_Invalid_mode_005cd9e5
;   undefined4 DAT_00609b88
;   undefined4 DAT_00609c88
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_00434e50
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434d60
        ;   Label: FUN_00434d60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434d61
    PUSH EBX                            ; 00434d65
    CALL FUN_00434e50                   ; 00434d66
        ;   XREF to: 00434e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00434e50()
    MOV EAX,dword ptr [EBX + 0x4]       ; 00434d6b
    ADD ESP,0x4                         ; 00434d6e
    TEST EAX,EAX                        ; 00434d71
    JBE 0x00434d8b                      ; 00434d73
        ;   XREF to: 00434d8b (CONDITIONAL_JUMP)  ; LAB_00434d8b
    CMP EAX,0x1                         ; 00434d75
    JNZ 0x00434da3                      ; 00434d78
        ;   XREF to: 00434da3 (CONDITIONAL_JUMP)  ; LAB_00434da3
    XOR EAX,EAX                         ; 00434d7a
    MOV AL,byte ptr [ESP + 0xc]         ; 00434d7c
    MOV AL,byte ptr [EAX + 0x609c88]    ; 00434d80 | DAT_00609c88
    SUB AL,byte ptr [EBX + 0x8]         ; 00434d86
    POP EBX                             ; 00434d89
    RET                                 ; 00434d8a
    XOR EAX,EAX                         ; 00434d8b
        ;   Label: LAB_00434d8b
    MOV EDX,dword ptr [EBX + 0x8]       ; 00434d8d
    MOV AL,byte ptr [ESP + 0xc]         ; 00434d90
    ADD EAX,EDX                         ; 00434d94
    AND EAX,0xff                        ; 00434d96
    MOV AL,byte ptr [EAX + 0x609b88]    ; 00434d9b | DAT_00609b88
    POP EBX                             ; 00434da1
    RET                                 ; 00434da2
    MOV ECX,0x5cd9d0                    ; 00434da3 | = "..\\support\\codec.cpp"
        ;   Label: LAB_00434da3
    MOV EBX,0x705                       ; 00434da8
    PUSH 0x5cd9e5                       ; 00434dad | = "Invalid mode."
    MOV dword ptr [0x01d046a0],ECX      ; 00434db2 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00434db8 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00434dbe
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 00434dc3
    XOR AL,AL                           ; 00434dc6
    POP EBX                             ; 00434dc8
    RET                                 ; 00434dc9

