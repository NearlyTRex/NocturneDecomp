; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040e5c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e5c0
        ;   Label: FUN_0040e5c0
    PUSH ESI                            ; 0040e5c1
    PUSH EDI                            ; 0040e5c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040e5c3
    PUSH EBX                            ; 0040e5c7
    CALL FUN_00408600                   ; 0040e5c8
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 0040e5cd
    ADD EAX,0x158                       ; 0040e5d0
    PUSH EAX                            ; 0040e5d5
    CALL FUN_00462500                   ; 0040e5d6
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 0040e5db
    LEA EBX,[EAX + 0xfffffea8]          ; 0040e5de
    PUSH 0x5b613c                       ; 0040e5e4
    LEA EAX,[EBX + 0x158]               ; 0040e5e9
    PUSH EAX                            ; 0040e5ef
    MOV dword ptr [EBX + 0x154],0x5db554 ; 0040e5f0
    CALL FUN_004625f0                   ; 0040e5fa
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    ADD ESP,0x8                         ; 0040e5ff
    MOV ESI,0x5b6148                    ; 0040e602
    LEA EDI,[EBX + 0x2d4]               ; 0040e607
    PUSH EDI                            ; 0040e60d
    MOV AL,byte ptr [ESI]               ; 0040e60e
        ;   Label: LAB_0040e60e
    MOV byte ptr [EDI],AL               ; 0040e610
    CMP AL,0x0                          ; 0040e612
    JZ 0x0040e626                       ; 0040e614
        ;   XREF to: 0040e626 (CONDITIONAL_JUMP)  ; LAB_0040e626
    MOV AL,byte ptr [ESI + 0x1]         ; 0040e616
    ADD ESI,0x2                         ; 0040e619
    MOV byte ptr [EDI + 0x1],AL         ; 0040e61c
    ADD EDI,0x2                         ; 0040e61f
    CMP AL,0x0                          ; 0040e622
    JNZ 0x0040e60e                      ; 0040e624
        ;   XREF to: 0040e60e (CONDITIONAL_JUMP)  ; LAB_0040e60e
    POP EDI                             ; 0040e626
        ;   Label: LAB_0040e626
    MOV dword ptr [EBX + 0x314],0x14    ; 0040e627
    MOV dword ptr [EBX + 0x318],0x0     ; 0040e631
    MOV dword ptr [EBX + 0x31c],0x0     ; 0040e63b
    MOV dword ptr [EBX + 0x320],0x0     ; 0040e645
    MOV dword ptr [EBX + 0x324],0x0     ; 0040e64f
    MOV byte ptr [EBX + 0x328],0x0      ; 0040e659
    MOV EAX,EBX                         ; 0040e660
    MOV dword ptr [EBX + 0x348],0x0     ; 0040e662
    POP EDI                             ; 0040e66c
    POP ESI                             ; 0040e66d
    POP EBX                             ; 0040e66e
    RET                                 ; 0040e66f

