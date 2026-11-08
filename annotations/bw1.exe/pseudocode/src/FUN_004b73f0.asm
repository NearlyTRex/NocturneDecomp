; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b73f0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004d6420 at 004d65c8
;
; Referenced Globals:
;   TerminatedCString s_Fire_state_005df678
;   undefined4 DAT_005df684
;
; Called Functions:
;   FUN_004b2740
;   FUN_005c03c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b73f0
        ;   Label: FUN_004b73f0
    PUSH ESI                            ; 004b73f1
    PUSH EDI                            ; 004b73f2
    MOV ESI,dword ptr [ESP + 0x14]      ; 004b73f3
    PUSH 0x5df678                       ; 004b73f7 | = "Fire state\n"
    PUSH ESI                            ; 004b73fc
    CALL FUN_005c03c0                   ; 004b73fd
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004b7402
    PUSH 0x5df684                       ; 004b7405 | DAT_005df684
    MOV EBX,0x1cb4f60                   ; 004b740a
    PUSH ESI                            ; 004b740f
    LEA EDI,[EBX + 0x8c0]               ; 004b7410
    CALL FUN_005c03c0                   ; 004b7416
        ;   XREF to: 005c03c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03c0()
    ADD ESP,0x8                         ; 004b741b
    PUSH ESI                            ; 004b741e
        ;   Label: LAB_004b741e
    PUSH EBX                            ; 004b741f
    CALL FUN_004b2740                   ; 004b7420
        ;   XREF to: 004b2740 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2740()
    ADD EBX,0x70                        ; 004b7425
    ADD ESP,0x8                         ; 004b7428
    CMP EBX,EDI                         ; 004b742b
    JNZ 0x004b741e                      ; 004b742d
        ;   XREF to: 004b741e (CONDITIONAL_JUMP)  ; LAB_004b741e
    POP EDI                             ; 004b742f
    POP ESI                             ; 004b7430
    POP EBX                             ; 004b7431
    RET                                 ; 004b7432

