; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc640(int param_1)
;
;
; XREF[2]:
;   FUN_004fb450 at 004fb456
;   FUN_004fca90 at 004fcac6
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01cedee0
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_004fc4c0
;   FUN_004fc570
;   FUN_00538160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc640
        ;   Label: FUN_004fc640
    PUSH EDI                            ; 004fc641
    PUSH EBP                            ; 004fc642
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fc643
    CMP dword ptr [EBX + 0x1114],0x0    ; 004fc647
    JZ 0x004fc66e                       ; 004fc64e
        ;   XREF to: 004fc66e (CONDITIONAL_JUMP)  ; LAB_004fc66e
    PUSH ESI                            ; 004fc650
    PUSH 0x1                            ; 004fc651
        ;   Label: LAB_004fc651
    MOV ECX,dword ptr [EBX + 0x1114]    ; 004fc653
    PUSH ECX                            ; 004fc659
    PUSH EBX                            ; 004fc65a
    CALL FUN_004fc570                   ; 004fc65b
        ;   XREF to: 004fc570 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc570()
    MOV ESI,dword ptr [EBX + 0x1114]    ; 004fc660
    ADD ESP,0xc                         ; 004fc666
    TEST ESI,ESI                        ; 004fc669
    JNZ 0x004fc651                      ; 004fc66b
        ;   XREF to: 004fc651 (CONDITIONAL_JUMP)  ; LAB_004fc651
    POP ESI                             ; 004fc66d
    PUSH EBX                            ; 004fc66e
        ;   Label: LAB_004fc66e
    CALL FUN_004fc4c0                   ; 004fc66f
        ;   XREF to: 004fc4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc4c0()
    ADD ESP,0x4                         ; 004fc674
    MOV EBP,dword ptr [0x0061b5a8]      ; 004fc677 | DAT_0061b5a8
    XOR EDI,EDI                         ; 004fc67d
    PUSH EBP                            ; 004fc67f | DAT_01e661b8
    MOV dword ptr [0x01cedee0],EDI      ; 004fc680 | DAT_01cedee0
    MOV dword ptr [EBX + 0x1450],0xffffffff ; 004fc686
    CALL FUN_00538160                   ; 004fc690
        ;   XREF to: 00538160 (UNCONDITIONAL_CALL)  ; undefined FUN_00538160()
    ADD ESP,0x4                         ; 004fc695
    MOV dword ptr [EBX + 0x112c],EDI    ; 004fc698
    POP EBP                             ; 004fc69e
    POP EDI                             ; 004fc69f
    POP EBX                             ; 004fc6a0
    RET                                 ; 004fc6a1

