; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00422600(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061255c
;   undefined4 DAT_00612560
;   undefined4 DAT_00622c18
;
; Called Functions:
;   FUN_004207b0
;   FUN_004688a0
;   FUN_00468900
;   FUN_004837b0
;   FUN_00483850
;   FUN_00483de0
;   thunk_FUN_005084b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00422600
        ;   Label: FUN_00422600
    PUSH EBP                            ; 00422601
    SUB ESP,0x30                        ; 00422602
    MOV EBX,dword ptr [ESP + 0x3c]      ; 00422605
    LEA EAX,[EBX + 0x158]               ; 00422609
    PUSH EAX                            ; 0042260f
    CALL FUN_00468900                   ; 00422610
        ;   XREF to: 00468900 (UNCONDITIONAL_CALL)  ; undefined FUN_00468900()
    MOV EDX,dword ptr [EAX + 0x110]     ; 00422615
    ADD ESP,0x4                         ; 0042261b
    CMP EDX,0x1                         ; 0042261e
    JGE 0x0042262b                      ; 00422621
        ;   XREF to: 0042262b (CONDITIONAL_JUMP)  ; LAB_0042262b
    XOR EAX,EAX                         ; 00422623
    ADD ESP,0x30                        ; 00422625
    POP EBP                             ; 00422628
    POP EBX                             ; 00422629
    RET                                 ; 0042262a
    PUSH EDI                            ; 0042262b
        ;   Label: LAB_0042262b
    PUSH ESI                            ; 0042262c
    LEA EAX,[EBX + 0x20]                ; 0042262d
    PUSH EAX                            ; 00422630
    MOV ECX,dword ptr [0x0061255c]      ; 00422631 | DAT_0061255c
    PUSH ECX                            ; 00422637
    CALL FUN_004837b0                   ; 00422638
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004837b0()
    ADD ESP,0x8                         ; 0042263d
    PUSH 0x0                            ; 00422640
    LEA EAX,[EBX + 0x30]                ; 00422642
    PUSH EAX                            ; 00422645
    MOV ESI,dword ptr [0x0061255c]      ; 00422646 | DAT_0061255c
    PUSH ESI                            ; 0042264c
    CALL FUN_00483850                   ; 0042264d
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; undefined FUN_00483850()
    ADD ESP,0xc                         ; 00422652
    PUSH 0x0                            ; 00422655
    MOV EAX,dword ptr [EBX + 0x154]     ; 00422657
    PUSH EBX                            ; 0042265d
    LEA ESI,[ESP + 0x10]                ; 0042265e
    LEA EDI,[ESP + 0x28]                ; 00422662
    CALL dword ptr [EAX + 0x1c]         ; 00422666
    MOV ECX,0x6                         ; 00422669
    ADD ESP,0x4                         ; 0042266e
    LEA EAX,[ESP + 0x24]                ; 00422671
    LEA ESI,[ESP + 0xc]                 ; 00422675
    PUSH EAX                            ; 00422679
    MOVSD.REP ES:EDI,ESI                ; 0042267a
    CALL FUN_004207b0                   ; 0042267c
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 00422681
    PUSH 0xffff                         ; 00422684
    MOV EDI,dword ptr [0x00612560]      ; 00422689 | DAT_00612560
    PUSH EDI                            ; 0042268f
    MOV ESI,EAX                         ; 00422690
    CALL FUN_00483de0                   ; 00422692
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483de0()
    MOV EBP,dword ptr [EBX + 0x5fc]     ; 00422697
    ADD ESP,0x8                         ; 0042269d
    TEST EBP,EBP                        ; 004226a0
    JZ 0x004226b3                       ; 004226a2
        ;   XREF to: 004226b3 (CONDITIONAL_JUMP)  ; LAB_004226b3
    MOV EAX,[0x00622c18]                ; 004226a4 | DAT_00622c18
    MOV dword ptr [EAX + 0x15ac98],0x1  ; 004226a9
    TEST ESI,ESI                        ; 004226b3
        ;   Label: LAB_004226b3
    JZ 0x004226ce                       ; 004226b5
        ;   XREF to: 004226ce (CONDITIONAL_JUMP)  ; LAB_004226ce
    PUSH -0x1                           ; 004226b7
    LEA EAX,[EBX + 0x158]               ; 004226b9
    PUSH dword ptr [EBX + 0x310]        ; 004226bf
    PUSH EAX                            ; 004226c5
    CALL FUN_004688a0                   ; 004226c6
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004226cb
    CMP dword ptr [EBX + 0x5fc],0x0     ; 004226ce
        ;   Label: LAB_004226ce
    JZ 0x004226e6                       ; 004226d5
        ;   XREF to: 004226e6 (CONDITIONAL_JUMP)  ; LAB_004226e6
    MOV EAX,[0x00622c18]                ; 004226d7 | DAT_00622c18
    MOV dword ptr [EAX + 0x15ac98],0x0  ; 004226dc
    MOV EDX,dword ptr [0x0061255c]      ; 004226e6 | DAT_0061255c
        ;   Label: LAB_004226e6
    PUSH EDX                            ; 004226ec
    CALL thunk_FUN_005084b0             ; 004226ed
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_005084b0()
    ADD ESP,0x4                         ; 004226f2
    MOV EAX,ESI                         ; 004226f5
    POP ESI                             ; 004226f7
    POP EDI                             ; 004226f8
    ADD ESP,0x30                        ; 004226f9
    POP EBP                             ; 004226fc
    POP EBX                             ; 004226fd
    RET                                 ; 004226fe

