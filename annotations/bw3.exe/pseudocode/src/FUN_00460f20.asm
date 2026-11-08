; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460f20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[6]:
;   FUN_00462540 at 00462569
;   FUN_0049a090 at 0049a129
;   FUN_0049a2c0 at 0049a36f
;   FUN_0049ad20 at 0049b00b
;   FUN_004a09f0 at 004a0acd
;   FUN_00533b80 at 00533c8f
;
; Called Functions:
;   FUN_00460fa0
;   FUN_00461050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460f20
        ;   Label: FUN_00460f20
    PUSH EBP                            ; 00460f21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00460f22
    CMP dword ptr [EBX + 0x110],0x1     ; 00460f26
    JGE 0x00460f32                      ; 00460f2d
        ;   XREF to: 00460f32 (CONDITIONAL_JUMP)  ; LAB_00460f32
    POP EBP                             ; 00460f2f
    POP EBX                             ; 00460f30
    RET                                 ; 00460f31
    PUSH EDI                            ; 00460f32
        ;   Label: LAB_00460f32
    PUSH ESI                            ; 00460f33
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00460f34
    PUSH ECX                            ; 00460f38
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00460f39
    PUSH ESI                            ; 00460f3d
    PUSH EBX                            ; 00460f3e
    CALL FUN_00460fa0                   ; 00460f3f
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00460fa0()
    ADD ESP,0xc                         ; 00460f44
    MOV EDI,dword ptr [ESP + 0x20]      ; 00460f47
    PUSH EDI                            ; 00460f4b
    MOV EBP,dword ptr [ESP + 0x20]      ; 00460f4c
    PUSH EBP                            ; 00460f50
    PUSH EBX                            ; 00460f51
    CALL FUN_00461050                   ; 00460f52
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; undefined FUN_00461050()
    ADD ESP,0xc                         ; 00460f57
    POP ESI                             ; 00460f5a
    POP EDI                             ; 00460f5b
    POP EBP                             ; 00460f5c
    POP EBX                             ; 00460f5d
    RET                                 ; 00460f5e

