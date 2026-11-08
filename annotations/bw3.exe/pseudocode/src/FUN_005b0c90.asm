; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005b0c90(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_005af6a0 at 005af6f3
;
; Called Functions:
;   FUN_005ac9c0
;   FUN_005aca00
;   FUN_005aca30
;   FUN_005aca50
;   FUN_005af2a0
;   FUN_005b0c50
;   FUN_005b1720
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b0c90
        ;   Label: FUN_005b0c90
    PUSH ESI                            ; 005b0c91
    SUB ESP,0x4                         ; 005b0c92
    MOV ESI,dword ptr [ESP + 0x10]      ; 005b0c95
    MOV EBX,ESI                         ; 005b0c99
    PUSH EBX                            ; 005b0c9b
        ;   Label: LAB_005b0c9b
    CALL FUN_005af2a0                   ; 005b0c9c
        ;   XREF to: 005af2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005af2a0()
    ADD ESP,0x4                         ; 005b0ca1
    TEST EAX,EAX                        ; 005b0ca4
    JNZ 0x005b0cef                      ; 005b0ca6
        ;   XREF to: 005b0cef (CONDITIONAL_JUMP)  ; LAB_005b0cef
    PUSH EBX                            ; 005b0ca8
    CALL FUN_005ac9c0                   ; 005b0ca9
        ;   XREF to: 005ac9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ac9c0()
    ADD ESP,0x4                         ; 005b0cae
    PUSH EAX                            ; 005b0cb1
    CALL FUN_005b1720                   ; 005b0cb2
        ;   XREF to: 005b1720 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1720()
    ADD ESP,0x4                         ; 005b0cb7
    MOV EDX,ESP                         ; 005b0cba
    PUSH EDX                            ; 005b0cbc
    PUSH EAX                            ; 005b0cbd
    CALL FUN_005aca30                   ; 005b0cbe
        ;   XREF to: 005aca30 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca30()
    ADD ESP,0x8                         ; 005b0cc3
    MOV EAX,ESP                         ; 005b0cc6
    PUSH EAX                            ; 005b0cc8
    CALL FUN_005aca50                   ; 005b0cc9
        ;   XREF to: 005aca50 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca50()
    ADD ESP,0x4                         ; 005b0cce
    XOR DL,DL                           ; 005b0cd1
    MOV byte ptr [ESP + EAX*0x1],DL     ; 005b0cd3
    MOV EAX,ESP                         ; 005b0cd6
    PUSH EAX                            ; 005b0cd8
    PUSH EBX                            ; 005b0cd9
    CALL FUN_005b0c50                   ; 005b0cda
        ;   XREF to: 005b0c50 (UNCONDITIONAL_CALL)  ; undefined FUN_005b0c50()
    ADD ESP,0x8                         ; 005b0cdf
    PUSH EBX                            ; 005b0ce2
    CALL FUN_005aca00                   ; 005b0ce3
        ;   XREF to: 005aca00 (UNCONDITIONAL_CALL)  ; undefined FUN_005aca00()
    MOV EBX,EAX                         ; 005b0ce8
    ADD ESP,0x4                         ; 005b0cea
    JMP 0x005b0c9b                      ; 005b0ced
        ;   XREF to: 005b0c9b (UNCONDITIONAL_JUMP)  ; LAB_005b0c9b
    MOV EAX,ESI                         ; 005b0cef
        ;   Label: LAB_005b0cef
    ADD ESP,0x4                         ; 005b0cf1
    POP ESI                             ; 005b0cf4
    POP EBX                             ; 005b0cf5
    RET                                 ; 005b0cf6

