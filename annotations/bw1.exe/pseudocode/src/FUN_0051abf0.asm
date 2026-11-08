; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051abf0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; XREF[1]:
;   FUN_0051bdc0 at 0051be8a
;
; Referenced Globals:
;   undefined4 DAT_005e94b0
;   undefined4 DAT_00622ad0
;
; Called Functions:
;   FUN_00543e00
;   FUN_005c232c
;
; *****************************************************************************

section .text

    SUB ESP,0x104                       ; 0051abf0
        ;   Label: FUN_0051abf0
    MOV EAX,dword ptr [ESP + 0x108]     ; 0051abf6
    PUSH 0x5e94b0                       ; 0051abfd | DAT_005e94b0
    ADD EAX,0x1018                      ; 0051ac02
    PUSH EAX                            ; 0051ac07
    PUSH 0x0                            ; 0051ac08
    PUSH 0x0                            ; 0051ac0a
    LEA EAX,[ESP + 0x10]                ; 0051ac0c
    PUSH EAX                            ; 0051ac10
    CALL FUN_005c232c                   ; 0051ac11
        ;   XREF to: 005c232c (UNCONDITIONAL_CALL)  ; undefined FUN_005c232c()
    ADD ESP,0x14                        ; 0051ac16
    MOV EAX,ESP                         ; 0051ac19
    PUSH EAX                            ; 0051ac1b
    MOV EDX,dword ptr [0x00622ad0]      ; 0051ac1c | DAT_00622ad0
    PUSH EDX                            ; 0051ac22
    CALL FUN_00543e00                   ; 0051ac23
        ;   XREF to: 00543e00 (UNCONDITIONAL_CALL)  ; undefined FUN_00543e00()
    ADD ESP,0x8                         ; 0051ac28
    ADD ESP,0x104                       ; 0051ac2b
    RET                                 ; 0051ac31

