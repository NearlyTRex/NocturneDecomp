; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cbd50(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cbd50
        ;   Label: FUN_004cbd50
    MOV EDX,dword ptr [ESP + 0x8]       ; 004cbd51
    PUSH EDX                            ; 004cbd55
    CALL FUN_005899d0                   ; 004cbd56
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 004cbd5b
    PUSH 0x5d97b3                       ; 004cbd5e
    MOV EBX,EAX                         ; 004cbd63
    ADD EAX,0x2b4                       ; 004cbd65
    PUSH EAX                            ; 004cbd6a
    MOV dword ptr [EAX + -0x4],0x5f7e34 ; 004cbd6b
    CALL FUN_0044fd70                   ; 004cbd72
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x434],0x0     ; 004cbd77
    MOV dword ptr [EBX + 0x438],0x1     ; 004cbd81
    MOV dword ptr [EBX + 0x440],0x1     ; 004cbd8b
    MOV dword ptr [EBX + 0x444],0x42480000 ; 004cbd95
    ADD ESP,0x8                         ; 004cbd9f
    MOV dword ptr [EBX + 0x448],0x0     ; 004cbda2
    MOV EAX,EBX                         ; 004cbdac
    MOV dword ptr [EBX + 0x6c4],0x6     ; 004cbdae
    POP EBX                             ; 004cbdb8
    RET                                 ; 004cbdb9

