; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00572e00(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   FUN_005710a0 at 0057110e
;   crt_string.c_char_in_set_FUN_00572a90 at 00572ac9
;
; Referenced Globals:
;   undefined4 DAT_02de5c30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572e00
        ;   Label: FUN_00572e00
    MOV EAX,dword ptr [ESP + 0x8]       ; 00572e01
    MOV EDX,dword ptr [ESP + 0xc]       ; 00572e05
    MOV BL,byte ptr [EAX]               ; 00572e09
    CMP BL,byte ptr [EDX]               ; 00572e0b
    JNZ 0x00572e4e                      ; 00572e0d
        ;   XREF to: 00572e4e (CONDITIONAL_JUMP)  ; LAB_00572e4e
    CMP dword ptr [0x02de5c30],0x0      ; 00572e0f | DAT_02de5c30
    JZ 0x00572e37                       ; 00572e16
        ;   XREF to: 00572e37 (CONDITIONAL_JUMP)  ; LAB_00572e37
    XOR EBX,EBX                         ; 00572e18
    MOV BL,byte ptr [EAX]               ; 00572e1a
    MOV BL,byte ptr [EBX + 0x2de5c41]   ; 00572e1c
    AND BL,0x1                          ; 00572e22
    AND EBX,0xff                        ; 00572e25
    JZ 0x00572e37                       ; 00572e2b
        ;   XREF to: 00572e37 (CONDITIONAL_JUMP)  ; LAB_00572e37
    MOV BL,byte ptr [EAX + 0x1]         ; 00572e2d
    MOV CL,byte ptr [EDX + 0x1]         ; 00572e30
    CMP BL,CL                           ; 00572e33
    JNZ 0x00572e3b                      ; 00572e35
        ;   XREF to: 00572e3b (CONDITIONAL_JUMP)  ; LAB_00572e3b
    XOR EAX,EAX                         ; 00572e37
        ;   Label: LAB_00572e37
    POP EBX                             ; 00572e39
    RET                                 ; 00572e3a
    MOV AL,BL                           ; 00572e3b
        ;   Label: LAB_00572e3b
    AND EAX,0xff                        ; 00572e3d
    MOV DL,CL                           ; 00572e42
    AND EDX,0xff                        ; 00572e44
    SUB EAX,EDX                         ; 00572e4a
    POP EBX                             ; 00572e4c
    RET                                 ; 00572e4d
    XOR EBX,EBX                         ; 00572e4e
        ;   Label: LAB_00572e4e
    MOV BL,byte ptr [EAX]               ; 00572e50
    XOR EAX,EAX                         ; 00572e52
    MOV AL,byte ptr [EDX]               ; 00572e54
    SUB EBX,EAX                         ; 00572e56
    MOV EAX,EBX                         ; 00572e58
    POP EBX                             ; 00572e5a
    RET                                 ; 00572e5b

