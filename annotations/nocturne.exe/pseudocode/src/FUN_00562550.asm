; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00562550(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005a46a0
;
; Called Functions:
;   FUN_00409ea0
;   FUN_0040fe10
;   FUN_0040fe30
;   FUN_0040fe50
;   FUN_00438250
;   FUN_0051b6e0
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562550
        ;   Label: FUN_00562550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562551
    TEST byte ptr [ESP + 0xc],0x4       ; 00562555
    JNZ 0x005625e1                      ; 0056255a
        ;   XREF to: 005625e1 (CONDITIONAL_JUMP)  ; LAB_005625e1
    PUSH 0x0                            ; 00562560
    ADD EBX,0x33c4                      ; 00562562
    PUSH EBX                            ; 00562568
    CALL FUN_0040fe50                   ; 00562569
        ;   XREF to: 0040fe50 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe50()
    ADD ESP,0x8                         ; 0056256e
    PUSH 0x0                            ; 00562571
    SUB EAX,0x4b0                       ; 00562573
    PUSH EAX                            ; 00562578
    CALL FUN_0040fe30                   ; 00562579
        ;   XREF to: 0040fe30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe30()
    ADD ESP,0x8                         ; 0056257e
    PUSH 0x0                            ; 00562581
    SUB EAX,0x20c                       ; 00562583
    PUSH EAX                            ; 00562588
    CALL FUN_0040fe10                   ; 00562589
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0056258e
    PUSH 0x0                            ; 00562591
    SUB EAX,0xb4                        ; 00562593
    PUSH EAX                            ; 00562598
    CALL FUN_0040fe10                   ; 00562599
        ;   XREF to: 0040fe10 (UNCONDITIONAL_CALL)  ; undefined FUN_0040fe10()
    ADD ESP,0x8                         ; 0056259e
    PUSH 0x0                            ; 005625a1
    SUB EAX,0x1c8                       ; 005625a3
    PUSH EAX                            ; 005625a8
    CALL FUN_00438250                   ; 005625a9
        ;   XREF to: 00438250 (UNCONDITIONAL_CALL)  ; undefined FUN_00438250()
    ADD ESP,0x8                         ; 005625ae
    PUSH 0x0                            ; 005625b1
    SUB EAX,0x293c                      ; 005625b3
    PUSH EAX                            ; 005625b8
    CALL FUN_0051b6e0                   ; 005625b9
        ;   XREF to: 0051b6e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b6e0()
    ADD ESP,0x8                         ; 005625be
    PUSH 0x1                            ; 005625c1
    LEA EBX,[EAX + 0xfffffeb0]          ; 005625c3
    PUSH EBX                            ; 005625c9
    CALL FUN_00409ea0                   ; 005625ca
        ;   XREF to: 00409ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409ea0()
    ADD ESP,0x8                         ; 005625cf
    MOV DL,byte ptr [ESP + 0xc]         ; 005625d2
    MOV EBX,EAX                         ; 005625d6
    TEST DL,0x2                         ; 005625d8
    JNZ 0x005625fc                      ; 005625db
        ;   XREF to: 005625fc (CONDITIONAL_JUMP)  ; LAB_005625fc
    MOV EAX,EBX                         ; 005625dd
    POP EBX                             ; 005625df
    RET                                 ; 005625e0
    PUSH 0x5a46a0                       ; 005625e1 | DAT_005a46a0
        ;   Label: LAB_005625e1
    PUSH EBX                            ; 005625e6
    CALL FUN_0056445f                   ; 005625e7
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 005625ec
    PUSH EAX                            ; 005625ef
    CALL FUN_00564486                   ; 005625f0
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 005625f5
    MOV EAX,EBX                         ; 005625f8
    POP EBX                             ; 005625fa
    RET                                 ; 005625fb
    PUSH EAX                            ; 005625fc
        ;   Label: LAB_005625fc
    CALL FUN_00564494                   ; 005625fd
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00562602
    MOV EAX,EBX                         ; 00562605
    POP EBX                             ; 00562607
    RET                                 ; 00562608

