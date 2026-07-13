; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0043b490(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0059b830
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0043b5f0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b490
        ;   Label: FUN_0043b490
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b491
    TEST byte ptr [ESP + 0xc],0x4       ; 0043b495
    JNZ 0x0043b4cd                      ; 0043b49a
        ;   XREF to: 0043b4cd (CONDITIONAL_JUMP)  ; LAB_0043b4cd
    PUSH 0x0                            ; 0043b49c
    ADD EBX,0x308                       ; 0043b49e
    PUSH EBX                            ; 0043b4a4
    CALL FUN_0043b5f0                   ; 0043b4a5
        ;   XREF to: 0043b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b5f0()
    ADD ESP,0x8                         ; 0043b4aa
    PUSH 0x1                            ; 0043b4ad
    LEA EBX,[EAX + 0xfffffcf8]          ; 0043b4af
    PUSH EBX                            ; 0043b4b5
    CALL FUN_00409ea0                   ; 0043b4b6
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 0043b4bb
    MOV DL,byte ptr [ESP + 0xc]         ; 0043b4be
    MOV EBX,EAX                         ; 0043b4c2
    TEST DL,0x2                         ; 0043b4c4
    JNZ 0x0043b4e8                      ; 0043b4c7
        ;   XREF to: 0043b4e8 (CONDITIONAL_JUMP)  ; LAB_0043b4e8
    MOV EAX,EBX                         ; 0043b4c9
    POP EBX                             ; 0043b4cb
    RET                                 ; 0043b4cc
    PUSH 0x59b830                       ; 0043b4cd | DAT_0059b830
        ;   Label: LAB_0043b4cd
    PUSH EBX                            ; 0043b4d2
    CALL FUN_0056445f                   ; 0043b4d3
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 0043b4d8
    PUSH EAX                            ; 0043b4db
    CALL FUN_00564486                   ; 0043b4dc
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0043b4e1
    MOV EAX,EBX                         ; 0043b4e4
    POP EBX                             ; 0043b4e6
    RET                                 ; 0043b4e7
    PUSH EAX                            ; 0043b4e8
        ;   Label: LAB_0043b4e8
    CALL FUN_00564494                   ; 0043b4e9
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 0043b4ee
    MOV EAX,EBX                         ; 0043b4f1
    POP EBX                             ; 0043b4f3
    RET                                 ; 0043b4f4

