; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00435160(int param_1)
;
;
; XREF[2]:
;   FUN_00438270 at 00438300
;   FUN_00438320 at 0043833e
;
; Called Functions:
;   FUN_00435210
;   FUN_00438a00
;   FUN_00438a20
;   FUN_00452630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435160
        ;   Label: FUN_00435160
    MOV EBX,dword ptr [ESP + 0x8]       ; 00435161
    PUSH EBX                            ; 00435165
    CALL FUN_00435210                   ; 00435166
        ;   XREF to: 00435210 (UNCONDITIONAL_CALL)  ; undefined FUN_00435210()
    ADD ESP,0x4                         ; 0043516b
    PUSH 0x0                            ; 0043516e
    ADD EBX,0x37b50                     ; 00435170
    PUSH EBX                            ; 00435176
    CALL FUN_00438a20                   ; 00435177
        ;   XREF to: 00438a20 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a20()
    ADD ESP,0x8                         ; 0043517c
    PUSH 0x0                            ; 0043517f
    SUB EAX,0x377b8                     ; 00435181
    PUSH EAX                            ; 00435186
    CALL FUN_00438a00                   ; 00435187
        ;   XREF to: 00438a00 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a00()
    ADD ESP,0x8                         ; 0043518c
    PUSH 0x1                            ; 0043518f
    LEA EBX,[EAX + 0xfffffc68]          ; 00435191
    PUSH EBX                            ; 00435197
    CALL FUN_00452630                   ; 00435198
        ;   XREF to: 00452630 (UNCONDITIONAL_CALL)  ; undefined FUN_00452630()
    ADD ESP,0x8                         ; 0043519d
    POP EBX                             ; 004351a0
    RET                                 ; 004351a1

