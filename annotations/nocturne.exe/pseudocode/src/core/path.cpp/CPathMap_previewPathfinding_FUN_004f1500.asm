; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_CPathMap_previewPathfinding_FUN_004f1500(void)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0058ce1b
;   undefined4 DAT_005b761c
;   undefined4 DAT_01e3161c
;   undefined4 DAT_01e31620
;   undefined4 DAT_01e31624
;   undefined4 DAT_01e31628
;
; Called Functions:
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_2d.c_drawText_FUN_00402600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1500
        ;   Label: core_path.cpp_CPathMap_previewPathfinding_FUN_004f1500
    PUSH ESI                            ; 004f1501
    PUSH EDI                            ; 004f1502
    PUSH EBP                            ; 004f1503
    SUB ESP,0x10c                       ; 004f1504
    XOR EBP,EBP                         ; 004f150a
    MOV ECX,0x441                       ; 004f150c
    MOV dword ptr [ESP + 0x104],EBP     ; 004f1511
    MOV dword ptr [ESP + 0x108],ECX     ; 004f1518
    MOV EAX,dword ptr [ESP + 0x108]     ; 004f151f
        ;   Label: LAB_004f151f
    MOV EDI,dword ptr [ESP + 0x104]     ; 004f1526
    XOR ESI,ESI                         ; 004f152d
    XOR EBX,EBX                         ; 004f152f
    MOV dword ptr [ESP + 0x100],EAX     ; 004f1531
    XOR EAX,EAX                         ; 004f1538
        ;   Label: LAB_004f1538
    MOV AL,byte ptr [EDI + 0x1e40098]   ; 004f153a
    MOV EDX,dword ptr [EAX*0x4 + 0x5be130] ; 004f1540
    PUSH EDX                            ; 004f1547
    PUSH 0x58ce1b                       ; 004f1548 | = "%s"
    LEA EAX,[ESP + 0x8]                 ; 004f154d
    PUSH EAX                            ; 004f1551
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004f1552
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    MOV ECX,dword ptr [0x01e3161c]      ; 004f1557 | DAT_01e3161c
    ADD ESP,0xc                         ; 004f155d
    CMP EBX,ECX                         ; 004f1560
    JNZ 0x004f1570                      ; 004f1562
        ;   XREF to: 004f1570 (CONDITIONAL_JUMP)  ; LAB_004f1570
    CMP EBP,dword ptr [0x01e31620]      ; 004f1564 | DAT_01e31620
    JNZ 0x004f1570                      ; 004f156a
        ;   XREF to: 004f1570 (CONDITIONAL_JUMP)  ; LAB_004f1570
    MOV byte ptr [ESP],0x73             ; 004f156c
    CMP EBX,dword ptr [0x01e31624]      ; 004f1570 | DAT_01e31624
        ;   Label: LAB_004f1570
    JNZ 0x004f1584                      ; 004f1576
        ;   XREF to: 004f1584 (CONDITIONAL_JUMP)  ; LAB_004f1584
    CMP EBP,dword ptr [0x01e31628]      ; 004f1578 | DAT_01e31628
    JNZ 0x004f1584                      ; 004f157e
        ;   XREF to: 004f1584 (CONDITIONAL_JUMP)  ; LAB_004f1584
    MOV byte ptr [ESP],0x64             ; 004f1580
    MOV EAX,dword ptr [ESP + 0x100]     ; 004f1584
        ;   Label: LAB_004f1584
    PUSH EAX                            ; 004f158b
    MOV EAX,[0x005b761c]                ; 004f158c | DAT_005b761c
    MOV EDX,EAX                         ; 004f1591
    SAR EDX,0x1f                        ; 004f1593
    SUB EAX,EDX                         ; 004f1596
    SAR EAX,0x1                         ; 004f1598
    ADD EAX,ESI                         ; 004f159a
    PUSH EAX                            ; 004f159c
    LEA EAX,[ESP + 0x8]                 ; 004f159d
    INC EDI                             ; 004f15a1
    PUSH EAX                            ; 004f15a2
    INC EBX                             ; 004f15a3
    ADD ESI,0xe                         ; 004f15a4
    CALL engine_2d.c_drawText_FUN_00402600 ; 004f15a7
        ;   XREF to: 00402600 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00402600(char * text, int x, int y)
    ADD ESP,0xc                         ; 004f15ac
    CMP EBX,0x64                        ; 004f15af
    JL 0x004f1538                       ; 004f15b2
        ;   XREF to: 004f1538 (CONDITIONAL_JUMP)  ; LAB_004f1538
    MOV ECX,dword ptr [ESP + 0x108]     ; 004f15b4
    MOV EDX,dword ptr [ESP + 0x104]     ; 004f15bb
    INC EBP                             ; 004f15c2
    SUB ECX,0xb                         ; 004f15c3
    ADD EDX,0x64                        ; 004f15c6
    MOV dword ptr [ESP + 0x108],ECX     ; 004f15c9
    MOV dword ptr [ESP + 0x104],EDX     ; 004f15d0
    CMP EBP,0x64                        ; 004f15d7
    JL 0x004f151f                       ; 004f15da
        ;   XREF to: 004f151f (CONDITIONAL_JUMP)  ; LAB_004f151f
    ADD ESP,0x10c                       ; 004f15e0
    POP EBP                             ; 004f15e6
    POP EDI                             ; 004f15e7
    POP ESI                             ; 004f15e8
    POP EBX                             ; 004f15e9
    LEA EAX,[EAX]                       ; 004f15ea
    RET                                 ; 004f15f0

