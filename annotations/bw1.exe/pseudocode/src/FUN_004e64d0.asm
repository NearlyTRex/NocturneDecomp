; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e64d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[9]:
;   FUN_00409c00 at 00409c2a
;   FUN_004451c0 at 004452a6
;   FUN_004737b0 at 00473a04
;   FUN_004cab10 at 004cac4e
;   FUN_004ea140 at 004ea240
;   FUN_004f2570 at 004f26b6
;   FUN_00541c70 at 00541d56
;   FUN_0058fcb0 at 0058fe8d
;   FUN_005944c0 at 005945df
;
; Called Functions:
;   FUN_004e63e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e64d0
        ;   Label: FUN_004e64d0
    PUSH ESI                            ; 004e64d1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004e64d2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e64d6
    PUSH EDX                            ; 004e64da
    MOV ECX,dword ptr [ESP + 0x18]      ; 004e64db
    PUSH dword ptr [ESP + 0x1c]         ; 004e64df
    PUSH ECX                            ; 004e64e3
    LEA EAX,[EBX + 0x20]                ; 004e64e4
    PUSH EAX                            ; 004e64e7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004e64e8
    PUSH ESI                            ; 004e64ec
    CALL FUN_004e63e0                   ; 004e64ed
        ;   XREF to: 004e63e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e63e0()
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004e64f2
    MOV dword ptr [EAX + 0x2c],EDX      ; 004e64f5
    ADD ESP,0x14                        ; 004e64f8
    MOV dword ptr [EAX + 0x2a08],EBX    ; 004e64fb
    POP ESI                             ; 004e6501
    POP EBX                             ; 004e6502
    RET                                 ; 004e6503

