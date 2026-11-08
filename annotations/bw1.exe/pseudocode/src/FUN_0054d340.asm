; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0054d340(int param_1)
;
;
; Called Functions:
;   FUN_0054d370
;   FUN_005561a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d340
        ;   Label: FUN_0054d340
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054d341
    PUSH EBX                            ; 0054d345
    CALL FUN_0054d370                   ; 0054d346
        ;   XREF to: 0054d370 (UNCONDITIONAL_CALL)  ; undefined FUN_0054d370()
    ADD ESP,0x4                         ; 0054d34b
    PUSH 0x0                            ; 0054d34e
    ADD EBX,0x4                         ; 0054d350
    PUSH EBX                            ; 0054d353
    CALL FUN_005561a0                   ; 0054d354
        ;   XREF to: 005561a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005561a0()
    ADD ESP,0x8                         ; 0054d359
    SUB EAX,0x4                         ; 0054d35c
    POP EBX                             ; 0054d35f
    RET                                 ; 0054d360

