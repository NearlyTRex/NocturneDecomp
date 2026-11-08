; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ab5c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_0045d1f0
;   FUN_00468860
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ab5c0
        ;   Label: FUN_004ab5c0
    PUSH ESI                            ; 004ab5c1
    PUSH EDI                            ; 004ab5c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004ab5c3
    PUSH EBX                            ; 004ab5c7
    CALL FUN_0045d1f0                   ; 004ab5c8
        ;   XREF to: 0045d1f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045d1f0()
    ADD ESP,0x4                         ; 004ab5cd
    ADD EAX,0x1f4                       ; 004ab5d0
    PUSH EAX                            ; 004ab5d5
    CALL FUN_00468860                   ; 004ab5d6
        ;   XREF to: 00468860 (UNCONDITIONAL_CALL)  ; undefined FUN_00468860()
    ADD ESP,0x4                         ; 004ab5db
    LEA EBX,[EAX + 0xfffffe0c]          ; 004ab5de
    PUSH 0x5df0d9                       ; 004ab5e4
    LEA EAX,[EBX + 0x1f4]               ; 004ab5e9
    PUSH EAX                            ; 004ab5ef
    MOV ESI,0x5df0e6                    ; 004ab5f0
    MOV dword ptr [EBX + 0x154],0x5ffdf4 ; 004ab5f5
    CALL FUN_00468950                   ; 004ab5ff
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004ab604
    LEA EDI,[EBX + 0x15c]               ; 004ab607
    MOV dword ptr [EBX + 0x3d8],0x0     ; 004ab60d
    PUSH EDI                            ; 004ab617
    MOV AL,byte ptr [ESI]               ; 004ab618
        ;   Label: LAB_004ab618
    MOV byte ptr [EDI],AL               ; 004ab61a
    CMP AL,0x0                          ; 004ab61c
    JZ 0x004ab630                       ; 004ab61e
        ;   XREF to: 004ab630 (CONDITIONAL_JUMP)  ; LAB_004ab630
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab620
    ADD ESI,0x2                         ; 004ab623
    MOV byte ptr [EDI + 0x1],AL         ; 004ab626
    ADD EDI,0x2                         ; 004ab629
    CMP AL,0x0                          ; 004ab62c
    JNZ 0x004ab618                      ; 004ab62e
        ;   XREF to: 004ab618 (CONDITIONAL_JUMP)  ; LAB_004ab618
    POP EDI                             ; 004ab630
        ;   Label: LAB_004ab630
    MOV ESI,0x5df0f0                    ; 004ab631
    MOV dword ptr [EBX + 0x3dc],0x0     ; 004ab636
    LEA EDI,[EBX + 0x374]               ; 004ab640
    MOV dword ptr [EBX + 0x370],0x0     ; 004ab646
    PUSH EDI                            ; 004ab650
    MOV AL,byte ptr [ESI]               ; 004ab651
        ;   Label: LAB_004ab651
    MOV byte ptr [EDI],AL               ; 004ab653
    CMP AL,0x0                          ; 004ab655
    JZ 0x004ab669                       ; 004ab657
        ;   XREF to: 004ab669 (CONDITIONAL_JUMP)  ; LAB_004ab669
    MOV AL,byte ptr [ESI + 0x1]         ; 004ab659
    ADD ESI,0x2                         ; 004ab65c
    MOV byte ptr [EDI + 0x1],AL         ; 004ab65f
    ADD EDI,0x2                         ; 004ab662
    CMP AL,0x0                          ; 004ab665
    JNZ 0x004ab651                      ; 004ab667
        ;   XREF to: 004ab651 (CONDITIONAL_JUMP)  ; LAB_004ab651
    POP EDI                             ; 004ab669
        ;   Label: LAB_004ab669
    MOV EAX,EBX                         ; 004ab66a
    MOV dword ptr [EBX + 0x3e0],0x0     ; 004ab66c
    POP EDI                             ; 004ab676
    POP ESI                             ; 004ab677
    POP EBX                             ; 004ab678
    RET                                 ; 004ab679

