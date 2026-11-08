; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00478af0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061f650
;   undefined4 DAT_00622c18
;   undefined4 DAT_01d2c900
;   undefined4 DAT_01d2d908
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00477540
;   FUN_00559440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478af0
        ;   Label: FUN_00478af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478af1
    MOV EAX,[0x0061f650]                ; 00478af5 | DAT_0061f650 | DAT_01d2c900
    CMP dword ptr [EAX + 0x1008],0x0    ; 00478afa | DAT_01d2d908
    JNZ 0x00478b0c                      ; 00478b01
        ;   XREF to: 00478b0c (CONDITIONAL_JUMP)  ; LAB_00478b0c
    CMP dword ptr [EBX + 0x2e0],0x0     ; 00478b03
    JZ 0x00478b0e                       ; 00478b0a
        ;   XREF to: 00478b0e (CONDITIONAL_JUMP)  ; LAB_00478b0e
    POP EBX                             ; 00478b0c
        ;   Label: LAB_00478b0c
    RET                                 ; 00478b0d
    PUSH EBX                            ; 00478b0e
        ;   Label: LAB_00478b0e
    CALL FUN_00477540                   ; 00478b0f
        ;   XREF to: 00477540 (UNCONDITIONAL_CALL)  ; undefined FUN_00477540()
    ADD ESP,0x4                         ; 00478b14
    PUSH EBX                            ; 00478b17
    MOV EBX,dword ptr [0x00622c18]      ; 00478b18 | DAT_00622c18
    PUSH EBX                            ; 00478b1e | DAT_01e82168
    CALL FUN_00559440                   ; 00478b1f
        ;   XREF to: 00559440 (UNCONDITIONAL_CALL)  ; undefined FUN_00559440()
    ADD ESP,0x8                         ; 00478b24
    POP EBX                             ; 00478b27
    RET                                 ; 00478b28

