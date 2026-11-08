; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00595ed0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f77b6
;
; Called Functions:
;   FUN_0040c5a0
;   FUN_00524770
;   FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00595ed0
        ;   Label: FUN_00595ed0
    MOV EBP,ESP                         ; 00595ed1
    MOV EAX,dword ptr [EBP + 0x8]       ; 00595ed3
    PUSH 0x5f77b6                       ; 00595ed6 | DAT_005f77b6
    ADD EAX,0x158                       ; 00595edb
    PUSH EAX                            ; 00595ee0
    CALL FUN_00524770                   ; 00595ee1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 00595ee6
    PUSH EAX                            ; 00595ee9
    CALL FUN_005c04e0                   ; 00595eea
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c04e0()
    ADD ESP,0x8                         ; 00595eef
    TEST EAX,EAX                        ; 00595ef2
    JNZ 0x00595efd                      ; 00595ef4
        ;   XREF to: 00595efd (CONDITIONAL_JUMP)  ; LAB_00595efd
    MOV EAX,0x1                         ; 00595ef6
    POP EBP                             ; 00595efb
    RET                                 ; 00595efc
    MOV EDX,dword ptr [EBP + 0x8]       ; 00595efd
        ;   Label: LAB_00595efd
    PUSH EDX                            ; 00595f00
    CALL FUN_0040c5a0                   ; 00595f01
        ;   XREF to: 0040c5a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c5a0()
    ADD ESP,0x4                         ; 00595f06
    POP EBP                             ; 00595f09
    RET                                 ; 00595f0a

