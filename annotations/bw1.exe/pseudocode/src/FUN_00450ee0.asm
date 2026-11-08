; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00450ee0(void)
;
;
; XREF[2]:
;   FUN_0045ea60 at 0045ec44
;   FUN_00463460 at 00463815
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH 0x4b000                        ; 00450ee0
        ;   Label: FUN_00450ee0
    PUSH 0x7f                           ; 00450ee5
    PUSH 0x14df1d0                      ; 00450ee7
    CALL FUN_005bfb70                   ; 00450eec
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV ECX,0x13f                       ; 00450ef1
    ADD ESP,0xc                         ; 00450ef6
    XOR EAX,EAX                         ; 00450ef9
    ADD EAX,0x4                         ; 00450efb
        ;   Label: LAB_00450efb
    XOR EDX,EDX                         ; 00450efe
    MOV dword ptr [EAX + 0x14dee0c],ECX ; 00450f00
    MOV dword ptr [EAX + 0x14dea4c],EDX ; 00450f06
    CMP EAX,0x3c0                       ; 00450f0c
    JNZ 0x00450efb                      ; 00450f11
        ;   XREF to: 00450efb (CONDITIONAL_JUMP)  ; LAB_00450efb
    RET                                 ; 00450f13

