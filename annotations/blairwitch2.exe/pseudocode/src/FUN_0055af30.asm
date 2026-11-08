; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0055af30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00408ec0 at 00408eda
;
; Called Functions:
;   FUN_00550360
;   FUN_00550450
;   FUN_005504d0
;   FUN_005594c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055af30
        ;   Label: FUN_0055af30
    CALL FUN_00550450                   ; 0055af31
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    PUSH dword ptr [ESP + 0x18]         ; 0055af36
    CALL FUN_00550360                   ; 0055af3a
        ;   XREF to: 00550360 (UNCONDITIONAL_CALL)  ; undefined FUN_00550360()
    ADD ESP,0x4                         ; 0055af3f
    PUSH 0x0                            ; 0055af42
    MOV EDX,dword ptr [ESP + 0x18]      ; 0055af44
    PUSH EDX                            ; 0055af48
    PUSH 0x0                            ; 0055af49
    PUSH 0x0                            ; 0055af4b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055af4d
    PUSH 0x0                            ; 0055af51
    PUSH ECX                            ; 0055af53
    MOV EBX,dword ptr [ESP + 0x24]      ; 0055af54
    PUSH EBX                            ; 0055af58
    CALL FUN_005594c0                   ; 0055af59
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005594c0()
    ADD ESP,0x1c                        ; 0055af5e
    MOV EBX,EAX                         ; 0055af61
    CALL FUN_005504d0                   ; 0055af63
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    MOV EAX,EBX                         ; 0055af68
    POP EBX                             ; 0055af6a
    RET                                 ; 0055af6b

