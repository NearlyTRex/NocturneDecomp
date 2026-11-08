; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049e360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_00427260 at 00427330
;   FUN_0043a350 at 0043a3e4
;   FUN_00489670 at 0048a5d4
;   FUN_004993f0 at 0049945f
;   FUN_004a0920 at 004a09d5
;   FUN_00585230 at 00585720
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_005d57fa
;   undefined4 DAT_0061c068
;   undefined4 DAT_01c975e0
;
; Called Functions:
;   FUN_00498d30
;   FUN_0049e630
;   FUN_0055ae50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e360
        ;   Label: FUN_0049e360
    PUSH EDI                            ; 0049e361
    PUSH EBP                            ; 0049e362
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049e363
    MOV EAX,[0x01c975e0]                ; 0049e367 | DAT_01c975e0
    SHL EAX,0x2                         ; 0049e36c
    PUSH dword ptr [ESP + 0x1c]         ; 0049e36f
    MOV EDX,EAX                         ; 0049e373
    SHL EAX,0x3                         ; 0049e375
    PUSH dword ptr [ESP + 0x1c]         ; 0049e378
    SUB EAX,EDX                         ; 0049e37c
    PUSH EBX                            ; 0049e37e
    ADD EAX,0x1c975e4                   ; 0049e37f
    PUSH EAX                            ; 0049e384
    CALL FUN_00498d30                   ; 0049e385
        ;   XREF to: 00498d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00498d30()
    MOV EDX,dword ptr [0x01c975e0]      ; 0049e38a | DAT_01c975e0
    INC EDX                             ; 0049e390
    ADD ESP,0x10                        ; 0049e391
    MOV dword ptr [0x01c975e0],EDX      ; 0049e394 | DAT_01c975e0
    CMP EDX,0xa                         ; 0049e39a
    JL 0x0049e3a9                       ; 0049e39d
        ;   XREF to: 0049e3a9 (CONDITIONAL_JUMP)  ; LAB_0049e3a9
    PUSH ESI                            ; 0049e39f
    XOR ESI,ESI                         ; 0049e3a0
    MOV dword ptr [0x01c975e0],ESI      ; 0049e3a2 | DAT_01c975e0
    POP ESI                             ; 0049e3a8
    PUSH EBX                            ; 0049e3a9
        ;   Label: LAB_0049e3a9
    PUSH 0x5d57fa                       ; 0049e3aa | = "xplode?.wav @ 6.0"
    MOV EDI,dword ptr [ESP + 0x18]      ; 0049e3af
    PUSH EDI                            ; 0049e3b3
    MOV EBP,dword ptr [0x0061c068]      ; 0049e3b4 | DAT_0061c068
    PUSH EBP                            ; 0049e3ba
    CALL FUN_0055ae50                   ; 0049e3bb
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 0049e3c0
    PUSH dword ptr [ESP + 0x20]         ; 0049e3c3
    PUSH EBX                            ; 0049e3c7
    PUSH EDI                            ; 0049e3c8
    CALL FUN_0049e630                   ; 0049e3c9
        ;   XREF to: 0049e630 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e630()
    ADD ESP,0xc                         ; 0049e3ce
    POP EBP                             ; 0049e3d1
    POP EDI                             ; 0049e3d2
    POP EBX                             ; 0049e3d3
    RET                                 ; 0049e3d4

