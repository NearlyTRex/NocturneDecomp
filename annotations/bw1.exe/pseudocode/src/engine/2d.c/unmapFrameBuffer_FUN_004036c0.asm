; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_unmapFrameBuffer_FUN_004036c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b49c
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a38
;   undefined4 DAT_00713a3c
;   undefined4 DAT_00713a40
;   undefined4 DAT_00713a44
;   undefined4 DAT_00713a48
;   undefined4 DAT_00713a4c
;   undefined4 DAT_00713a50
;   undefined4 DAT_00713a54
;   undefined4 DAT_00713a58
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   ... and 3 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004036c0
        ;   Label: engine_2d.c_unmapFrameBuffer_FUN_004036c0
    PUSH EDI                            ; 004036c1
    PUSH EBP                            ; 004036c2
    MOV EBX,dword ptr [0x00713a58]      ; 004036c3 | DAT_00713a58
    CMP dword ptr [0x00713a38],0x0      ; 004036c9 | DAT_00713a38
    JZ 0x00403762                       ; 004036d0
        ;   XREF to: 00403762 (CONDITIONAL_JUMP)  ; LAB_00403762
    MOV EAX,[0x00713a38]                ; 004036d6 | DAT_00713a38
        ;   Label: LAB_004036d6
    MOV [0x0061b498],EAX                ; 004036db | DAT_0061b498
    MOV EAX,[0x00713a3c]                ; 004036e0 | DAT_00713a3c
    MOV [0x0061b49c],EAX                ; 004036e5 | DAT_0061b49c
    MOV EAX,[0x00713a40]                ; 004036ea | DAT_00713a40
    MOV [0x01c4f008],EAX                ; 004036ef | DAT_01c4f008
    MOV EAX,[0x00713a44]                ; 004036f4 | DAT_00713a44
    MOV [0x01c4f00c],EAX                ; 004036f9 | DAT_01c4f00c
    MOV EAX,[0x00713a48]                ; 004036fe | DAT_00713a48
    MOV EDX,dword ptr [0x00713a54]      ; 00403703 | DAT_00713a54
    MOV [0x01c4f010],EAX                ; 00403709 | DAT_01c4f010
    MOV EAX,[0x00713a4c]                ; 0040370e | DAT_00713a4c
    MOV EBX,dword ptr [0x00713a58]      ; 00403713 | DAT_00713a58
    MOV [0x01c4f014],EAX                ; 00403719 | DAT_01c4f014
    MOV EAX,[0x00713a50]                ; 0040371e | DAT_00713a50
    MOV EDI,dword ptr [0x0061b49c]      ; 00403723 | DAT_0061b49c
    MOV [0x0061b4a0],EAX                ; 00403729 | DAT_0061b4a0
    TEST EDI,EDI                        ; 0040372e
    JLE 0x00403750                      ; 00403730
        ;   XREF to: 00403750 (CONDITIONAL_JUMP)  ; LAB_00403750
    LEA ECX,[EDI*0x4 + 0x0]             ; 00403732
    XOR EAX,EAX                         ; 00403739
    MOV dword ptr [EAX + 0x1c4354c],EDX ; 0040373b
        ;   Label: LAB_0040373b
    ADD EAX,0x4                         ; 00403741
    ADD EDX,EBX                         ; 00403744
    CMP EAX,ECX                         ; 00403746
    JL 0x0040373b                       ; 00403748
        ;   XREF to: 0040373b (CONDITIONAL_JUMP)  ; LAB_0040373b
    LEA EAX,[EAX]                       ; 0040374a
    XOR EBP,EBP                         ; 00403750
        ;   Label: LAB_00403750
    MOV dword ptr [0x00713a38],EBP      ; 00403752 | DAT_00713a38
    MOV dword ptr [0x00713a58],EBX      ; 00403758 | DAT_00713a58
    POP EBP                             ; 0040375e
    POP EDI                             ; 0040375f
    POP EBX                             ; 00403760
    RET                                 ; 00403761
    PUSH ESI                            ; 00403762
        ;   Label: LAB_00403762
    MOV ECX,0x5d22d6                    ; 00403763
    MOV ESI,0x9e5                       ; 00403768
    PUSH 0x5d22e5                       ; 0040376d
    MOV dword ptr [0x01d1d400],ECX      ; 00403772 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00403778 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0040377e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00403783
    POP ESI                             ; 00403786
    JMP 0x004036d6                      ; 00403787
        ;   XREF to: 004036d6 (UNCONDITIONAL_JUMP)  ; LAB_004036d6

