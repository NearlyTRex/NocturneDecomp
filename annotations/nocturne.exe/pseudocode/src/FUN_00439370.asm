; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00439370(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00439c10 at 00439c22
;   FUN_00439c70 at 00439c82
;   FUN_00446810 at 00446db6
;   FUN_004a3b90 at 004a3f8b
;   FUN_004a4170 at 004a4581
;
; Called Functions:
;   FUN_00439390
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439370
        ;   Label: FUN_00439370
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439371
    PUSH EBX                            ; 00439375
    CALL FUN_00439390                   ; 00439376
        ;   XREF to: 00439390 (UNCONDITIONAL_CALL)  ; undefined FUN_00439390()
    ADD ESP,0x4                         ; 0043937b
    MOV EAX,EBX                         ; 0043937e
    POP EBX                             ; 00439380
    RET                                 ; 00439381

