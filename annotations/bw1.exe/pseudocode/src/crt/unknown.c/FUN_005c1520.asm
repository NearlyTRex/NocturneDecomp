; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 crt_unknown_c_FUN_005c1520(undefined4 param_1,undefined1 *param_2,undefined4 param_3)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   crt_stdio.c_fopen_FUN_005c157c at 005c1589
;
; Called Functions:
;   crt_unknown.c_FUN_005c12d0
;   crt_unknown.c_FUN_005c140c
;   crt_unknown.c_FUN_005c6a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1520
        ;   Label: crt_unknown.c_FUN_005c1520
    PUSH ESI                            ; 005c1521
    PUSH EDI                            ; 005c1522
    SUB ESP,0x4                         ; 005c1523
    MOV EAX,ESP                         ; 005c1526
    PUSH EAX                            ; 005c1528
    MOV EDX,dword ptr [ESP + 0x1c]      ; 005c1529
    PUSH EDX                            ; 005c152d
    CALL crt_unknown.c_FUN_005c12d0     ; 005c152e
        ;   XREF to: 005c12d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c12d0()
    MOV EBX,EAX                         ; 005c1533
    ADD ESP,0x8                         ; 005c1535
    TEST EAX,EAX                        ; 005c1538
    JZ 0x005c1572                       ; 005c153a
        ;   XREF to: 005c1572 (CONDITIONAL_JUMP)  ; LAB_005c1572
    PUSH 0x0                            ; 005c153c
    CALL crt_unknown.c_FUN_005c6a20     ; 005c153e
        ;   XREF to: 005c6a20 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6a20()
    ADD ESP,0x4                         ; 005c1543
    MOV EDX,EAX                         ; 005c1546
    TEST EAX,EAX                        ; 005c1548
    JZ 0x005c1570                       ; 005c154a
        ;   XREF to: 005c1570 (CONDITIONAL_JUMP)  ; LAB_005c1570
    PUSH EAX                            ; 005c154c
    MOV ECX,dword ptr [ESP + 0x20]      ; 005c154d
    PUSH ECX                            ; 005c1551
    MOV ESI,dword ptr [ESP + 0x8]       ; 005c1552
    PUSH ESI                            ; 005c1556
    MOV EDX,dword ptr [ESP + 0x24]      ; 005c1557
    XOR EAX,EAX                         ; 005c155b
    PUSH EBX                            ; 005c155d
    MOV AL,byte ptr [EDX]               ; 005c155e
    PUSH EAX                            ; 005c1560
    MOV EDI,dword ptr [ESP + 0x28]      ; 005c1561
    PUSH EDI                            ; 005c1565
    CALL crt_unknown.c_FUN_005c140c     ; 005c1566
        ;   XREF to: 005c140c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c140c()
    ADD ESP,0x18                        ; 005c156b
    MOV EDX,EAX                         ; 005c156e
    MOV EAX,EDX                         ; 005c1570
        ;   Label: LAB_005c1570
    ADD ESP,0x4                         ; 005c1572
        ;   Label: LAB_005c1572
    POP EDI                             ; 005c1575
    POP ESI                             ; 005c1576
    POP EBX                             ; 005c1577
    RET                                 ; 005c1578

