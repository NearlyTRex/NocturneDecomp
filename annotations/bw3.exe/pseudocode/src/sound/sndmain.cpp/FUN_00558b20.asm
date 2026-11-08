; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; XREF[1]:
;   FUN_00558c10 at 00558c50
;
; Referenced Globals:
;   undefined4 DAT_0060425c
;   undefined4 DAT_00604260
;   undefined4 DAT_00604264
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02cf3c68
;   undefined4 DAT_02cf3c70
;
; Called Functions:
;   FUN_004e4330
;   FUN_00558b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558b20
        ;   Label: FUN_00558b20
    PUSH ESI                            ; 00558b21
    PUSH EDI                            ; 00558b22
    PUSH EBP                            ; 00558b23
    CALL FUN_00558b00                   ; 00558b24
        ;   XREF to: 00558b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00558b00()
    TEST EAX,EAX                        ; 00558b29
    JNZ 0x00558b6f                      ; 00558b2b
        ;   XREF to: 00558b6f (CONDITIONAL_JUMP)  ; LAB_00558b6f
    MOV EAX,dword ptr [ESP + 0x14]      ; 00558b2d
        ;   Label: LAB_00558b2d
    MOV [0x0060425c],EAX                ; 00558b31 | DAT_0060425c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00558b36
    MOV [0x00604260],EAX                ; 00558b3a | DAT_00604260
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00558b3f
    MOV EBX,dword ptr [ESP + 0x20]      ; 00558b43
    MOV [0x00604264],EAX                ; 00558b47 | DAT_00604264
    TEST EBX,EBX                        ; 00558b4c
    SETNZ AL                            ; 00558b4e
    AND EAX,0xff                        ; 00558b51
    MOV ESI,dword ptr [0x02cf3c68]      ; 00558b56 | DAT_02cf3c68
    MOV [0x02cf3c70],EAX                ; 00558b5c | DAT_02cf3c70
    TEST ESI,ESI                        ; 00558b61
    JNZ 0x00558b94                      ; 00558b63
        ;   XREF to: 00558b94 (CONDITIONAL_JUMP)  ; LAB_00558b94
    MOV EAX,0x1                         ; 00558b65
        ;   Label: LAB_00558b65
    POP EBP                             ; 00558b6a
    POP EDI                             ; 00558b6b
    POP ESI                             ; 00558b6c
    POP EBX                             ; 00558b6d
    RET                                 ; 00558b6e
    MOV EDX,0x5d3c3d                    ; 00558b6f
        ;   Label: LAB_00558b6f
    MOV ECX,0x1700                      ; 00558b74
    PUSH 0x5d3c52                       ; 00558b79
    MOV dword ptr [0x01d71de0],EDX      ; 00558b7e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00558b84 | DAT_01d71de4
    CALL FUN_004e4330                   ; 00558b8a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00558b8f
    JMP 0x00558b2d                      ; 00558b92
        ;   XREF to: 00558b2d (UNCONDITIONAL_JUMP)  ; LAB_00558b2d
    PUSH EAX                            ; 00558b94
        ;   Label: LAB_00558b94
    MOV EDI,dword ptr [0x00604264]      ; 00558b95 | DAT_00604264
    PUSH EDI                            ; 00558b9b
    MOV EBP,dword ptr [0x00604260]      ; 00558b9c | DAT_00604260
    PUSH EBP                            ; 00558ba2
    MOV EAX,[0x0060425c]                ; 00558ba3 | DAT_0060425c
    PUSH EAX                            ; 00558ba8
    MOV ECX,dword ptr [ESI]             ; 00558ba9
    PUSH ESI                            ; 00558bab
    CALL dword ptr [ECX + 0xc]          ; 00558bac
    ADD ESP,0x14                        ; 00558baf
    TEST EAX,EAX                        ; 00558bb2
    JNZ 0x00558b65                      ; 00558bb4
        ;   XREF to: 00558b65 (CONDITIONAL_JUMP)  ; LAB_00558b65
    POP EBP                             ; 00558bb6
    POP EDI                             ; 00558bb7
    POP ESI                             ; 00558bb8
    POP EBX                             ; 00558bb9
    RET                                 ; 00558bba

