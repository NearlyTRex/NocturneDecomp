; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0049ef30(int param_1)
;
;
; Called Functions:
;   FUN_005b1c70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0049ef30
        ;   Label: FUN_0049ef30
    PUSH 0x0                            ; 0049ef34
    ADD EAX,0x4                         ; 0049ef36
    PUSH EAX                            ; 0049ef39
    CALL FUN_005b1c70                   ; 0049ef3a
        ;   XREF to: 005b1c70 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1c70()
    ADD ESP,0x8                         ; 0049ef3f
    SUB EAX,0x4                         ; 0049ef42
    RET                                 ; 0049ef45

