; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a90b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; XREF[6]:
;   FUN_00467f70 at 0046803b
;   FUN_004a9130 at 004a9182
;   FUN_004a91a0 at 004a91cf
;   FUN_004a92a0 at 004a92d5
;   FUN_004a93a0 at 004a93df
;   FUN_004a94b0 at 004a94f4
;
; Called Functions:
;   FUN_004a8df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a90b0
        ;   Label: FUN_004a90b0
    PUSH ESI                            ; 004a90b1
    PUSH EDI                            ; 004a90b2
    PUSH EBP                            ; 004a90b3
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a90b4
    PUSH EDX                            ; 004a90b8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a90b9
    PUSH ECX                            ; 004a90bd
    MOV EBX,dword ptr [ESP + 0x24]      ; 004a90be
    PUSH EBX                            ; 004a90c2
    MOV ESI,dword ptr [ESP + 0x24]      ; 004a90c3
    PUSH ESI                            ; 004a90c7
    MOV EDI,dword ptr [ESP + 0x38]      ; 004a90c8
    PUSH EDI                            ; 004a90cc
    MOV EBP,dword ptr [ESP + 0x28]      ; 004a90cd
    PUSH EBP                            ; 004a90d1
    CALL FUN_004a8df0                   ; 004a90d2
        ;   XREF to: 004a8df0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a8df0()
    ADD ESP,0x18                        ; 004a90d7
    POP EBP                             ; 004a90da
    POP EDI                             ; 004a90db
    POP ESI                             ; 004a90dc
    POP EBX                             ; 004a90dd
    RET                                 ; 004a90de

