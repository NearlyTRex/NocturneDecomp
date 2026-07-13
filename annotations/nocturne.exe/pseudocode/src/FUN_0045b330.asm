; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0045b330(int param_1)
;
;
; Called Functions:
;   FUN_0045b410
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045b330
        ;   Label: FUN_0045b330
    PUSH 0x0                            ; 0045b334
    ADD EAX,0x20                        ; 0045b336
    PUSH EAX                            ; 0045b339
    CALL FUN_0045b410                   ; 0045b33a
        ;   XREF to: 0045b410 (UNCONDITIONAL_CALL)  ; undefined FUN_0045b410()
    ADD ESP,0x8                         ; 0045b33f
    SUB EAX,0x20                        ; 0045b342
    RET                                 ; 0045b345

