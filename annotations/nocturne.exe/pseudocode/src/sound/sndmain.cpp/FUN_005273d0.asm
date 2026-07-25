; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005273d0(int param_1)
;
;
; XREF[1]:
;   FUN_0052dd00 at 0052dd0d
;
; Referenced Globals:
;   undefined4 DAT_005bea60
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x4],0x20      ; 005273d0
        ;   Label: FUN_005273d0
    JG 0x005273e1                       ; 005273d5
        ;   XREF to: 005273e1 (CONDITIONAL_JUMP)  ; LAB_005273e1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005273d7
    MOV [0x005bea60],EAX                ; 005273db | DAT_005bea60
    RET                                 ; 005273e0
    PUSH EBX                            ; 005273e1
        ;   Label: LAB_005273e1
    MOV ECX,0x593653                    ; 005273e2
    MOV EBX,0xf4c                       ; 005273e7
    PUSH 0x593668                       ; 005273ec
    MOV dword ptr [0x01cc4800],ECX      ; 005273f1 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005273f7 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005273fd
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00527402
    POP EBX                             ; 00527405
    MOV EAX,dword ptr [ESP + 0x4]       ; 00527406
    MOV [0x005bea60],EAX                ; 0052740a | DAT_005bea60
    RET                                 ; 0052740f

