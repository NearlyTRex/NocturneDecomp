; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8220(int param_1)
;
;
; XREF[9]:
;   FUN_00450580 at 004505a9
;   FUN_005a09c0 at 005a09ed
;   FUN_005a1cc0 at 005a1ced
;   FUN_005a3e70 at 005a3e9d
;   FUN_005a5f50 at 005a5f7d
;   FUN_005a9370 at 005a939d
;   FUN_005aa7e0 at 005aa80d
;   FUN_005ac7f0 at 005ac81d
;   FUN_005ad460 at 005ad489
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005a8220
        ;   Label: FUN_005a8220
    MOV dword ptr [EAX + 0x14],0x0      ; 005a8224
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a822b
    MOV dword ptr [EAX + 0x10],0x0      ; 005a822e
    TEST EDX,EDX                        ; 005a8235
    JNZ 0x005a823a                      ; 005a8237
        ;   XREF to: 005a823a (CONDITIONAL_JUMP)  ; LAB_005a823a
    RET                                 ; 005a8239
    PUSH EDX                            ; 005a823a
        ;   Label: LAB_005a823a
    CALL FUN_005b86a0                   ; 005a823b
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 005a8240
    RET                                 ; 005a8243

