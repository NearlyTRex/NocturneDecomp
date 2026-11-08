; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00517c20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01ed36c0
;   undefined4 DAT_01ed36c4
;   undefined4 DAT_01ed36c8
;   undefined4 DAT_01ed36cc
;   undefined4 DAT_01ed36d0
;   undefined4 DAT_01ed36d4
;
; Called Functions:
;   FUN_0040c3a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517c20
        ;   Label: FUN_00517c20
    PUSH ESI                            ; 00517c21
    PUSH EDI                            ; 00517c22
    PUSH EBP                            ; 00517c23
    PUSH 0x1d5ba38                      ; 00517c24
    MOV EDX,0x3f083127                  ; 00517c29
    MOV ECX,0xbdf9db23                  ; 00517c2e
    PUSH 0x1                            ; 00517c33
    MOV EBX,0x3ded9168                  ; 00517c35
    MOV ESI,0xbf05e354                  ; 00517c3a
    PUSH 0x603978                       ; 00517c3f
    MOV EDI,0x3d656042                  ; 00517c44
    MOV EBP,0x3e010625                  ; 00517c49
    PUSH 0x517f50                       ; 00517c4e
    MOV dword ptr [0x01ed36c0],EDX      ; 00517c53 | DAT_01ed36c0
    MOV dword ptr [0x01ed36c4],ECX      ; 00517c59 | DAT_01ed36c4
    PUSH 0x5cca67                       ; 00517c5f
    MOV dword ptr [0x01ed36c8],EBX      ; 00517c64 | DAT_01ed36c8
    MOV dword ptr [0x01ed36cc],ESI      ; 00517c6a | DAT_01ed36cc
    PUSH 0x1ed3748                      ; 00517c70
    MOV dword ptr [0x01ed36d0],EDI      ; 00517c75 | DAT_01ed36d0
    MOV dword ptr [0x01ed36d4],EBP      ; 00517c7b | DAT_01ed36d4
    CALL FUN_0040c3a0                   ; 00517c81
        ;   XREF to: 0040c3a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c3a0()
    ADD ESP,0x18                        ; 00517c86
    POP EBP                             ; 00517c89
    POP EDI                             ; 00517c8a
    POP ESI                             ; 00517c8b
    POP EBX                             ; 00517c8c
    RET                                 ; 00517c8d

