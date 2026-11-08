; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fcda0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0x2c]:1  local_2c
; undefined1       Stack[-0x2b]:1  local_2b
;
; XREF[12]:
;   FUN_00410ac0 at 00410b32
;   FUN_004154f0 at 004155a3
;   FUN_004b8e10 at 004b8fb8
;   FUN_004b90d0 at 004ba0c4
;   FUN_004c9bd0 at 004c9c8d
;   FUN_004d0a40 at 004d0a99
;   FUN_004dadb0 at 004db51a
;   FUN_004f1e90 at 004f1f22
;   FUN_004fc200 at 004fc23a
;   FUN_004fd280 at 004fd3af
;   ... and 2 more
;
; Called Functions:
;   FUN_00408a50
;   FUN_004fcd00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcda0
        ;   Label: FUN_004fcda0
    PUSH ESI                            ; 004fcda1
    PUSH EDI                            ; 004fcda2
    SUB ESP,0x20                        ; 004fcda3
    MOV EDI,dword ptr [ESP + 0x34]      ; 004fcda6
    PUSH EDI                            ; 004fcdaa
    MOV byte ptr [EDI],0x0              ; 004fcdab
    CALL FUN_00408a50                   ; 004fcdae
        ;   XREF to: 00408a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a50()
    ADD ESP,0x4                         ; 004fcdb3
    MOV BL,byte ptr [EAX]               ; 004fcdb6
    MOV EDX,EAX                         ; 004fcdb8
    CMP BL,0x43                         ; 004fcdba
    JNZ 0x004fcdc2                      ; 004fcdbd
        ;   XREF to: 004fcdc2 (CONDITIONAL_JUMP)  ; LAB_004fcdc2
    LEA EDX,[EAX + 0x1]                 ; 004fcdbf
    PUSH EDX                            ; 004fcdc2
        ;   Label: LAB_004fcdc2
    LEA EAX,[ESP + 0x4]                 ; 004fcdc3
    PUSH EAX                            ; 004fcdc7
    MOV EDX,dword ptr [ESP + 0x38]      ; 004fcdc8
    PUSH EDX                            ; 004fcdcc
    CALL FUN_004fcd00                   ; 004fcdcd
        ;   XREF to: 004fcd00 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcd00()
    ADD ESP,0xc                         ; 004fcdd2
    MOV ESI,ESP                         ; 004fcdd5
    PUSH EDI                            ; 004fcdd7
    MOV AL,byte ptr [ESI]               ; 004fcdd8
        ;   Label: LAB_004fcdd8
    MOV byte ptr [EDI],AL               ; 004fcdda
    CMP AL,0x0                          ; 004fcddc
    JZ 0x004fcdf0                       ; 004fcdde
        ;   XREF to: 004fcdf0 (CONDITIONAL_JUMP)  ; LAB_004fcdf0
    MOV AL,byte ptr [ESI + 0x1]         ; 004fcde0
    ADD ESI,0x2                         ; 004fcde3
    MOV byte ptr [EDI + 0x1],AL         ; 004fcde6
    ADD EDI,0x2                         ; 004fcde9
    CMP AL,0x0                          ; 004fcdec
    JNZ 0x004fcdd8                      ; 004fcdee
        ;   XREF to: 004fcdd8 (CONDITIONAL_JUMP)  ; LAB_004fcdd8
    POP EDI                             ; 004fcdf0
        ;   Label: LAB_004fcdf0
    ADD ESP,0x20                        ; 004fcdf1
    POP EDI                             ; 004fcdf4
    POP ESI                             ; 004fcdf5
    POP EBX                             ; 004fcdf6
    RET                                 ; 004fcdf7

