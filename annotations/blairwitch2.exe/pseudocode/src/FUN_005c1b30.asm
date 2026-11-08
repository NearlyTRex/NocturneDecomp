; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c1b30(int param_1)
;
;
; XREF[1]:
;   FUN_005baab0 at 005baac5
;
; Called Functions:
;   FUN_005be270
;   FUN_005bea80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c1b30
        ;   Label: FUN_005c1b30
    TEST EAX,EAX                        ; 005c1b34
    JNZ 0x005c1b40                      ; 005c1b36
        ;   XREF to: 005c1b40 (CONDITIONAL_JUMP)  ; LAB_005c1b40
    CALL FUN_005be270                   ; 005c1b38
        ;   XREF to: 005be270 (UNCONDITIONAL_CALL)  ; undefined FUN_005be270()
    XOR EAX,EAX                         ; 005c1b3d
    RET                                 ; 005c1b3f
    PUSH EAX                            ; 005c1b40
        ;   Label: LAB_005c1b40
    CALL FUN_005bea80                   ; 005c1b41
        ;   XREF to: 005bea80 (UNCONDITIONAL_CALL)  ; undefined FUN_005bea80()
    ADD ESP,0x4                         ; 005c1b46
    RET                                 ; 005c1b49

