; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005a1b50(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005e87d0
;
; Called Functions:
;   FUN_00408770
;   FUN_00410370
;   FUN_0043f900
;   FUN_0050ad40
;   FUN_0054bf80
;   FUN_005a308f
;   FUN_005a30b6
;   FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1b50
        ;   Label: FUN_005a1b50
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a1b51
    TEST byte ptr [ESP + 0xc],0x4       ; 005a1b55
    JNZ 0x005a1bcd                      ; 005a1b5a
        ;   XREF to: 005a1bcd (CONDITIONAL_JUMP)  ; LAB_005a1bcd
    PUSH 0x0                            ; 005a1b5c
    ADD EBX,0x206c8                     ; 005a1b5e
    PUSH EBX                            ; 005a1b64
    CALL FUN_0050ad40                   ; 005a1b65
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 005a1b6a
    PUSH 0x0                            ; 005a1b6d
    SUB EAX,0x138fc                     ; 005a1b6f
    PUSH EAX                            ; 005a1b74
    CALL FUN_0050ad40                   ; 005a1b75
        ;   XREF to: 0050ad40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050ad40()
    ADD ESP,0x8                         ; 005a1b7a
    PUSH 0x0                            ; 005a1b7d
    SUB EAX,0x9570                      ; 005a1b7f
    PUSH EAX                            ; 005a1b84
    CALL FUN_00410370                   ; 005a1b85
        ;   XREF to: 00410370 (UNCONDITIONAL_CALL)  ; undefined FUN_00410370()
    ADD ESP,0x8                         ; 005a1b8a
    PUSH 0x0                            ; 005a1b8d
    SUB EAX,0x954                       ; 005a1b8f
    PUSH EAX                            ; 005a1b94
    CALL FUN_0043f900                   ; 005a1b95
        ;   XREF to: 0043f900 (UNCONDITIONAL_CALL)  ; undefined FUN_0043f900()
    ADD ESP,0x8                         ; 005a1b9a
    PUSH 0x0                            ; 005a1b9d
    SUB EAX,0x2db0                      ; 005a1b9f
    PUSH EAX                            ; 005a1ba4
    CALL FUN_0054bf80                   ; 005a1ba5
        ;   XREF to: 0054bf80 (UNCONDITIONAL_CALL)  ; undefined FUN_0054bf80()
    ADD ESP,0x8                         ; 005a1baa
    PUSH 0x1                            ; 005a1bad
    LEA EBX,[EAX + 0xfffffea8]          ; 005a1baf
    PUSH EBX                            ; 005a1bb5
    CALL FUN_00408770                   ; 005a1bb6
        ;   XREF to: 00408770 (UNCONDITIONAL_CALL)  ; undefined FUN_00408770()
    ADD ESP,0x8                         ; 005a1bbb
    MOV DL,byte ptr [ESP + 0xc]         ; 005a1bbe
    MOV EBX,EAX                         ; 005a1bc2
    TEST DL,0x2                         ; 005a1bc4
    JNZ 0x005a1be8                      ; 005a1bc7
        ;   XREF to: 005a1be8 (CONDITIONAL_JUMP)  ; LAB_005a1be8
    MOV EAX,EBX                         ; 005a1bc9
    POP EBX                             ; 005a1bcb
    RET                                 ; 005a1bcc
    PUSH 0x5e87d0                       ; 005a1bcd | DAT_005e87d0
        ;   Label: LAB_005a1bcd
    PUSH EBX                            ; 005a1bd2
    CALL FUN_005a308f                   ; 005a1bd3
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; undefined FUN_005a308f()
    ADD ESP,0x8                         ; 005a1bd8
    PUSH EAX                            ; 005a1bdb
    CALL FUN_005a30b6                   ; 005a1bdc
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 005a1be1
    MOV EAX,EBX                         ; 005a1be4
    POP EBX                             ; 005a1be6
    RET                                 ; 005a1be7
    PUSH EAX                            ; 005a1be8
        ;   Label: LAB_005a1be8
    CALL FUN_005a30c4                   ; 005a1be9
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30c4()
    ADD ESP,0x4                         ; 005a1bee
    MOV EAX,EBX                         ; 005a1bf1
    POP EBX                             ; 005a1bf3
    RET                                 ; 005a1bf4

