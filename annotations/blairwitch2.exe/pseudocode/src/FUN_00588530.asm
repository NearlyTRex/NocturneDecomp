; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00588530(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02661ae0
;   undefined4 DAT_02661ae4
;   undefined4 DAT_02661ae8
;   undefined4 DAT_02661aec
;   undefined4 DAT_02664628
;
; Called Functions:
;   DirectDrawCreate
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00588530
        ;   Label: FUN_00588530
    PUSH EDI                            ; 00588531
    PUSH EBP                            ; 00588532
    MOV EDX,dword ptr [0x02661aec]      ; 00588533 | DAT_02661aec
    TEST EDX,EDX                        ; 00588539
    JNZ 0x005885a9                      ; 0058853b
        ;   XREF to: 005885a9 (CONDITIONAL_JUMP)  ; LAB_005885a9
    MOV EBX,dword ptr [0x02661ae8]      ; 0058853d | DAT_02661ae8
        ;   Label: LAB_0058853d
    TEST EBX,EBX                        ; 00588543
    JZ 0x00588557                       ; 00588545
        ;   XREF to: 00588557 (CONDITIONAL_JUMP)  ; LAB_00588557
    PUSH ESI                            ; 00588547
    PUSH EBX                            ; 00588548
    MOV EDX,dword ptr [EBX]             ; 00588549
    XOR ESI,ESI                         ; 0058854b
    CALL dword ptr [EDX + 0x8]          ; 0058854d
    MOV dword ptr [0x02661ae8],ESI      ; 00588550 | DAT_02661ae8
    POP ESI                             ; 00588556
    MOV EDI,dword ptr [0x02661ae4]      ; 00588557 | DAT_02661ae4
        ;   Label: LAB_00588557
    TEST EDI,EDI                        ; 0058855d
    JZ 0x0058856f                       ; 0058855f
        ;   XREF to: 0058856f (CONDITIONAL_JUMP)  ; LAB_0058856f
    PUSH EDI                            ; 00588561
    MOV EDX,dword ptr [EDI]             ; 00588562
    XOR EBP,EBP                         ; 00588564
    CALL dword ptr [EDX + 0x8]          ; 00588566
    MOV dword ptr [0x02661ae4],EBP      ; 00588569 | DAT_02661ae4
    MOV EAX,[0x02661ae0]                ; 0058856f | DAT_02661ae0
        ;   Label: LAB_0058856f
    TEST EAX,EAX                        ; 00588574
    JZ 0x00588591                       ; 00588576
        ;   XREF to: 00588591 (CONDITIONAL_JUMP)  ; LAB_00588591
    PUSH EAX                            ; 00588578
    MOV EDX,dword ptr [EAX]             ; 00588579
    CALL dword ptr [EDX + 0x4c]         ; 0058857b
    MOV EAX,[0x02661ae0]                ; 0058857e | DAT_02661ae0
    PUSH EAX                            ; 00588583
    MOV EDX,dword ptr [EAX]             ; 00588584
    CALL dword ptr [EDX + 0x8]          ; 00588586
    XOR EDX,EDX                         ; 00588589
    MOV dword ptr [0x02661ae0],EDX      ; 0058858b | DAT_02661ae0
    PUSH 0x0                            ; 00588591
        ;   Label: LAB_00588591
    PUSH 0x2661ae0                      ; 00588593
    PUSH 0x0                            ; 00588598
    CALL DirectDrawCreate               ; 0058859a
        ;   XREF to: 005c74ae (UNCONDITIONAL_CALL)  ; undefined DirectDrawCreate()
    TEST EAX,EAX                        ; 0058859f
    JZ 0x005885bb                       ; 005885a1
        ;   XREF to: 005885bb (CONDITIONAL_JUMP)  ; LAB_005885bb
    XOR EAX,EAX                         ; 005885a3
        ;   Label: LAB_005885a3
    POP EBP                             ; 005885a5
    POP EDI                             ; 005885a6
    POP EBX                             ; 005885a7
    RET                                 ; 005885a8
    MOV EAX,EDX                         ; 005885a9
        ;   Label: LAB_005885a9
    PUSH EAX                            ; 005885ab
    MOV EDX,dword ptr [EDX]             ; 005885ac
    CALL dword ptr [EDX + 0x8]          ; 005885ae
    XOR ECX,ECX                         ; 005885b1
    MOV dword ptr [0x02661aec],ECX      ; 005885b3 | DAT_02661aec
    JMP 0x0058853d                      ; 005885b9
        ;   XREF to: 0058853d (UNCONDITIONAL_JUMP)  ; LAB_0058853d
    PUSH 0x11                           ; 005885bb
        ;   Label: LAB_005885bb
    MOV ECX,dword ptr [0x02664628]      ; 005885bd | DAT_02664628
    MOV EAX,[0x02661ae0]                ; 005885c3 | DAT_02661ae0
    PUSH ECX                            ; 005885c8
    MOV EDX,dword ptr [EAX]             ; 005885c9
    PUSH EAX                            ; 005885cb
    CALL dword ptr [EDX + 0x50]         ; 005885cc
    TEST EAX,EAX                        ; 005885cf
    JNZ 0x005885a3                      ; 005885d1
        ;   XREF to: 005885a3 (CONDITIONAL_JUMP)  ; LAB_005885a3
    MOV EAX,0x1                         ; 005885d3
    POP EBP                             ; 005885d8
    POP EDI                             ; 005885d9
    POP EBX                             ; 005885da
    RET                                 ; 005885db

