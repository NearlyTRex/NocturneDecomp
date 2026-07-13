; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00423d90(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059b050
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00423e80
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00423d90
        ;   Label: FUN_00423d90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00423d91
    TEST byte ptr [ESP + 0xc],0x4       ; 00423d95
    JNZ 0x00423e31                      ; 00423d9a
        ;   XREF to: 00423e31 (CONDITIONAL_JUMP)  ; LAB_00423e31
    PUSH 0x0                            ; 00423da0
    ADD EBX,0xbd2c                      ; 00423da2
    PUSH EBX                            ; 00423da8
    CALL FUN_00423e80                   ; 00423da9
        ;   XREF to: 00423e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00423e80()
    ADD ESP,0x8                         ; 00423dae
    PUSH 0x0                            ; 00423db1
    SUB EAX,0x8968                      ; 00423db3
    PUSH EAX                            ; 00423db8
    CALL FUN_0040fe50                   ; 00423db9
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 00423dbe
    PUSH 0x0                            ; 00423dc1
    SUB EAX,0x4b0                       ; 00423dc3
    PUSH EAX                            ; 00423dc8
    CALL FUN_0040fe30                   ; 00423dc9
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 00423dce
    PUSH 0x0                            ; 00423dd1
    SUB EAX,0x20c                       ; 00423dd3
    PUSH EAX                            ; 00423dd8
    CALL FUN_0040fe10                   ; 00423dd9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00423dde
    PUSH 0x0                            ; 00423de1
    SUB EAX,0xb4                        ; 00423de3
    PUSH EAX                            ; 00423de8
    CALL FUN_0040fe10                   ; 00423de9
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 00423dee
    PUSH 0x0                            ; 00423df1
    SUB EAX,0x1c8                       ; 00423df3
    PUSH EAX                            ; 00423df8
    CALL FUN_00438250                   ; 00423df9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 00423dfe
    PUSH 0x0                            ; 00423e01
    SUB EAX,0x293c                      ; 00423e03
    PUSH EAX                            ; 00423e08
    CALL FUN_0051b6e0                   ; 00423e09
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 00423e0e
    PUSH 0x1                            ; 00423e11
    LEA EBX,[EAX + 0xfffffeb0]          ; 00423e13
    PUSH EBX                            ; 00423e19
    CALL FUN_00409ea0                   ; 00423e1a
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 00423e1f
    MOV DL,byte ptr [ESP + 0xc]         ; 00423e22
    MOV EBX,EAX                         ; 00423e26
    TEST DL,0x2                         ; 00423e28
    JNZ 0x00423e4c                      ; 00423e2b
        ;   XREF to: 00423e4c (CONDITIONAL_JUMP)  ; LAB_00423e4c
    MOV EAX,EBX                         ; 00423e2d
    POP EBX                             ; 00423e2f
    RET                                 ; 00423e30
    PUSH 0x59b050                       ; 00423e31 | DAT_0059b050
        ;   Label: LAB_00423e31
    PUSH EBX                            ; 00423e36
    CALL FUN_0056445f                   ; 00423e37
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00423e3c
    PUSH EAX                            ; 00423e3f
    CALL FUN_00564486                   ; 00423e40
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00423e45
    MOV EAX,EBX                         ; 00423e48
    POP EBX                             ; 00423e4a
    RET                                 ; 00423e4b
    PUSH EAX                            ; 00423e4c
        ;   Label: LAB_00423e4c
    CALL FUN_00564494                   ; 00423e4d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00423e52
    MOV EAX,EBX                         ; 00423e55
    POP EBX                             ; 00423e57
    RET                                 ; 00423e58

