; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0047ed20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_004bb100 at 004bc1c2
;
; Called Functions:
;   FUN_0047c2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047ed20
        ;   Label: FUN_0047ed20
    PUSH ESI                            ; 0047ed21
    PUSH 0x1                            ; 0047ed22
    MOV EDX,dword ptr [ESP + 0x20]      ; 0047ed24
    PUSH EDX                            ; 0047ed28
    MOV ECX,dword ptr [ESP + 0x20]      ; 0047ed29
    PUSH ECX                            ; 0047ed2d
    MOV EBX,dword ptr [ESP + 0x20]      ; 0047ed2e
    PUSH EBX                            ; 0047ed32
    MOV ESI,dword ptr [ESP + 0x20]      ; 0047ed33
    PUSH ESI                            ; 0047ed37
    CALL FUN_0047c2c0                   ; 0047ed38
        ;   XREF to: 0047c2c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c2c0()
    ADD ESP,0x14                        ; 0047ed3d
    POP ESI                             ; 0047ed40
    POP EBX                             ; 0047ed41
    RET                                 ; 0047ed42

