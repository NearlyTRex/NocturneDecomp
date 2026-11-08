; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0057d980(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00408c90 at 00408caa
;
; Called Functions:
;   FUN_005729d0
;   FUN_00572ac0
;   FUN_00572b40
;   FUN_0057bef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057d980
        ;   Label: FUN_0057d980
    CALL FUN_00572ac0                   ; 0057d981
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH dword ptr [ESP + 0x18]         ; 0057d986
    CALL FUN_005729d0                   ; 0057d98a
        ;   XREF to: 005729d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005729d0()
    ADD ESP,0x4                         ; 0057d98f
    PUSH 0x0                            ; 0057d992
    MOV EDX,dword ptr [ESP + 0x18]      ; 0057d994
    PUSH EDX                            ; 0057d998
    PUSH 0x0                            ; 0057d999
    PUSH 0x0                            ; 0057d99b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0057d99d
    PUSH 0x0                            ; 0057d9a1
    PUSH ECX                            ; 0057d9a3
    MOV EBX,dword ptr [ESP + 0x24]      ; 0057d9a4
    PUSH EBX                            ; 0057d9a8
    CALL FUN_0057bef0                   ; 0057d9a9
        ;   XREF to: 0057bef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057bef0()
    ADD ESP,0x1c                        ; 0057d9ae
    MOV EBX,EAX                         ; 0057d9b1
    CALL FUN_00572b40                   ; 0057d9b3
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    MOV EAX,EBX                         ; 0057d9b8
    POP EBX                             ; 0057d9ba
    RET                                 ; 0057d9bb

