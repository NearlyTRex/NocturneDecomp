; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055aef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)
;
;
; XREF[3]:
;   FUN_00408e90 at 00408eaa
;   FUN_0049cd50 at 0049d07f
;   FUN_0049d2c0 at 0049d3f7
;
; Called Functions:
;   FUN_00550360
;   FUN_00550450
;   FUN_005504d0
;   FUN_005594c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055aef0
        ;   Label: FUN_0055aef0
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055aef1
    CALL FUN_00550450                   ; 0055aef5
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    PUSH dword ptr [ESP + 0x18]         ; 0055aefa
    CALL FUN_00550360                   ; 0055aefe
        ;   XREF to: 00550360 (UNCONDITIONAL_CALL)  ; undefined FUN_00550360()
    ADD ESP,0x4                         ; 0055af03
    PUSH 0x0                            ; 0055af06
    PUSH 0x0                            ; 0055af08
    PUSH dword ptr [EBX + 0x8]          ; 0055af0a
    PUSH dword ptr [EBX + 0x4]          ; 0055af0d
    MOV EDX,dword ptr [ESP + 0x20]      ; 0055af10
    PUSH dword ptr [EBX]                ; 0055af14
    PUSH EDX                            ; 0055af16
    MOV ECX,dword ptr [ESP + 0x24]      ; 0055af17
    PUSH ECX                            ; 0055af1b
    CALL FUN_005594c0                   ; 0055af1c
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005594c0()
    ADD ESP,0x1c                        ; 0055af21
    MOV EBX,EAX                         ; 0055af24
    CALL FUN_005504d0                   ; 0055af26
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    MOV EAX,EBX                         ; 0055af2b
    POP EBX                             ; 0055af2d
    RET                                 ; 0055af2e

