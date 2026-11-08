; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005120b0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_004087f0
;   FUN_00408830
;   FUN_0041daf0
;   FUN_0041e9b0
;   FUN_00462540
;   FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005120b0
        ;   Label: FUN_005120b0
    PUSH ESI                            ; 005120b1
    PUSH EDI                            ; 005120b2
    PUSH EBP                            ; 005120b3
    SUB ESP,0x60                        ; 005120b4
    MOV EBX,dword ptr [ESP + 0x74]      ; 005120b7
    MOV EDX,dword ptr [0x005f2afc]      ; 005120bb | DAT_005f2afc
    PUSH EDX                            ; 005120c1 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 005120c2
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 005120c7
    TEST EAX,EAX                        ; 005120ca
    JZ 0x005120db                       ; 005120cc
        ;   XREF to: 005120db (CONDITIONAL_JUMP)  ; LAB_005120db
    CMP dword ptr [EBX + 0x518],0x0     ; 005120ce
    JZ 0x005121ba                       ; 005120d5
        ;   XREF to: 005121ba (CONDITIONAL_JUMP)  ; LAB_005121ba
    CMP dword ptr [EBX + 0x4c0],0x2     ; 005120db
        ;   Label: LAB_005120db
    JG 0x005121be                       ; 005120e2
        ;   XREF to: 005121be (CONDITIONAL_JUMP)  ; LAB_005121be
    CMP dword ptr [EBX + 0x4c8],0x0     ; 005120e8
        ;   Label: LAB_005120e8
    JZ 0x00512121                       ; 005120ef
        ;   XREF to: 00512121 (CONDITIONAL_JUMP)  ; LAB_00512121
    MOV EAX,dword ptr [EBX + 0x2d4]     ; 005120f1
    CMP EAX,0x3                         ; 005120f7
    JZ 0x00512121                       ; 005120fa
        ;   XREF to: 00512121 (CONDITIONAL_JUMP)  ; LAB_00512121
    CMP EAX,0x4                         ; 005120fc
    JZ 0x00512121                       ; 005120ff
        ;   XREF to: 00512121 (CONDITIONAL_JUMP)  ; LAB_00512121
    CMP dword ptr [EBX + 0x724],0x0     ; 00512101
    JZ 0x00512121                       ; 00512108
        ;   XREF to: 00512121 (CONDITIONAL_JUMP)  ; LAB_00512121
    MOV ESI,dword ptr [0x005f2afc]      ; 0051210a | DAT_005f2afc
    PUSH ESI                            ; 00512110 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 00512111
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00512116
    TEST EAX,EAX                        ; 00512119
    JZ 0x005121b2                       ; 0051211b
        ;   XREF to: 005121b2 (CONDITIONAL_JUMP)  ; LAB_005121b2
    PUSH EBX                            ; 00512121
        ;   Label: LAB_00512121
    CALL FUN_004087f0                   ; 00512122
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 00512127
    PUSH 0x0                            ; 0051212a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051212c
    PUSH EBX                            ; 00512132
    LEA ESI,[ESP + 0x8]                 ; 00512133
    LEA EDI,[ESP + 0x20]                ; 00512137
    CALL dword ptr [EAX + 0x1c]         ; 0051213b
    MOV ECX,0x6                         ; 0051213e
    ADD ESP,0x4                         ; 00512143
    LEA EAX,[ESP + 0x1c]                ; 00512146
    LEA ESI,[ESP + 0x4]                 ; 0051214a
    PUSH EAX                            ; 0051214e
    MOVSD.REP ES:EDI,ESI                ; 0051214f
    CALL FUN_0041daf0                   ; 00512151
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041daf0()
    ADD ESP,0x8                         ; 00512156
    MOV EBP,EAX                         ; 00512159
    TEST EAX,EAX                        ; 0051215b
    JZ 0x005121a7                       ; 0051215d
        ;   XREF to: 005121a7 (CONDITIONAL_JUMP)  ; LAB_005121a7
    CMP dword ptr [EBX + 0x50c],0x0     ; 0051215f
    JZ 0x005121d7                       ; 00512166
        ;   XREF to: 005121d7 (CONDITIONAL_JUMP)  ; LAB_005121d7
    MOV EAX,[0x005f2afc]                ; 00512168 | DAT_005f2afc
    PUSH EAX                            ; 0051216d | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 0051216e
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 00512173
    TEST EAX,EAX                        ; 00512176
    JZ 0x005121d7                       ; 00512178
        ;   XREF to: 005121d7 (CONDITIONAL_JUMP)  ; LAB_005121d7
    PUSH EBX                            ; 0051217a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051217b
    LEA ESI,[ESP + 0x34]                ; 00512181
    LEA EDI,[ESP + 0x4c]                ; 00512185
    CALL dword ptr [EAX + 0x1c]         ; 00512189
    MOV ECX,0x6                         ; 0051218c
    ADD ESP,0x4                         ; 00512191
    LEA EAX,[ESP + 0x48]                ; 00512194
    LEA ESI,[ESP + 0x30]                ; 00512198
    PUSH EAX                            ; 0051219c
    MOVSD.REP ES:EDI,ESI                ; 0051219d
    CALL FUN_0041e9b0                   ; 0051219f
        ;   XREF to: 0041e9b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041e9b0()
    ADD ESP,0x4                         ; 005121a4
    PUSH EBX                            ; 005121a7
        ;   Label: LAB_005121a7
    CALL FUN_00408830                   ; 005121a8
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 005121ad
    MOV EAX,EBP                         ; 005121b0
    ADD ESP,0x60                        ; 005121b2
        ;   Label: LAB_005121b2
    POP EBP                             ; 005121b5
    POP EDI                             ; 005121b6
    POP ESI                             ; 005121b7
    POP EBX                             ; 005121b8
    RET                                 ; 005121b9
    XOR EAX,EAX                         ; 005121ba
        ;   Label: LAB_005121ba
    JMP 0x005121b2                      ; 005121bc
        ;   XREF to: 005121b2 (UNCONDITIONAL_JUMP)  ; LAB_005121b2
    MOV EDI,dword ptr [0x005f2afc]      ; 005121be | DAT_005f2afc
        ;   Label: LAB_005121be
    PUSH EDI                            ; 005121c4 | DAT_01bdd7e4
    CALL FUN_0046d540                   ; 005121c5
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 005121ca
    TEST EAX,EAX                        ; 005121cd
    JNZ 0x005120e8                      ; 005121cf
        ;   XREF to: 005120e8 (CONDITIONAL_JUMP)  ; LAB_005120e8
    JMP 0x005121b2                      ; 005121d5
        ;   XREF to: 005121b2 (UNCONDITIONAL_JUMP)  ; LAB_005121b2
    PUSH -0x1                           ; 005121d7
        ;   Label: LAB_005121d7
    LEA EAX,[EBX + 0x158]               ; 005121d9
    PUSH 0x0                            ; 005121df
    PUSH EAX                            ; 005121e1
    CALL FUN_00462540                   ; 005121e2
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 005121e7
    PUSH EBX                            ; 005121ea
    CALL FUN_00408830                   ; 005121eb
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; undefined FUN_00408830()
    ADD ESP,0x4                         ; 005121f0
    MOV EAX,EBP                         ; 005121f3
    ADD ESP,0x60                        ; 005121f5
    POP EBP                             ; 005121f8
    POP EDI                             ; 005121f9
    POP ESI                             ; 005121fa
    POP EBX                             ; 005121fb
    RET                                 ; 005121fc

