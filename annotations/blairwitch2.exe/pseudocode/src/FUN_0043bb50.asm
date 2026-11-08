; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043bb50(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_0043bc30 at 0043bebd
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c37788
;
; Called Functions:
;   FUN_00470201
;   FUN_00560050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043bb50
        ;   Label: FUN_0043bb50
    PUSH ESI                            ; 0043bb51
    PUSH EDI                            ; 0043bb52
    PUSH EBP                            ; 0043bb53
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043bb54
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043bb58
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043bb5c
    CMP EAX,dword ptr [EDX + 0x11d4]    ; 0043bb5f
    JLE 0x0043bc00                      ; 0043bb65
        ;   XREF to: 0043bc00 (CONDITIONAL_JUMP)  ; LAB_0043bc00
    MOV EBX,dword ptr [EDX + 0x11d8]    ; 0043bb6b
    CMP EBX,dword ptr [ESI + 0xc]       ; 0043bb71
    JGE 0x0043bc00                      ; 0043bb74
        ;   XREF to: 0043bc00 (CONDITIONAL_JUMP)  ; LAB_0043bc00
    MOV EDI,dword ptr [EDX + 0x11dc]    ; 0043bb7a
    CMP EDI,dword ptr [ESI]             ; 0043bb80
    JLE 0x0043bc00                      ; 0043bb82
        ;   XREF to: 0043bc00 (CONDITIONAL_JUMP)  ; LAB_0043bc00
    MOV EBP,dword ptr [EDX + 0x11e0]    ; 0043bb88
    CMP EBP,dword ptr [ESI + 0x8]       ; 0043bb8e
    JLE 0x0043bc00                      ; 0043bb91
        ;   XREF to: 0043bc00 (CONDITIONAL_JUMP)  ; LAB_0043bc00
    CMP dword ptr [0x01c37788],0x0      ; 0043bb97 | DAT_01c37788
    JNZ 0x0043bc05                      ; 0043bb9e
        ;   XREF to: 0043bc05 (CONDITIONAL_JUMP)  ; LAB_0043bc05
    MOV EDX,dword ptr [ESI + 0xc]       ; 0043bba0
    MOV EDI,dword ptr [ESI + 0x8]       ; 0043bba3
    CMP EDI,EDX                         ; 0043bba6
    JG 0x0043bc00                       ; 0043bba8
        ;   XREF to: 0043bc00 (CONDITIONAL_JUMP)  ; LAB_0043bc00
    LEA EBP,[EDI*0x4 + 0x0]             ; 0043bbaa
    MOV ECX,dword ptr [ESI]             ; 0043bbb1
        ;   Label: LAB_0043bbb1
    MOV EAX,dword ptr [EBP + 0x1c2b64c] ; 0043bbb3 | DAT_01c2b64c
    SHL ECX,0x2                         ; 0043bbb9
    ADD ECX,EAX                         ; 0043bbbc
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043bbbe
    MOV EAX,dword ptr [EAX + 0x144]     ; 0043bbc2
    IMUL EAX,EDI                        ; 0043bbc8
    MOV EBX,dword ptr [ESI]             ; 0043bbcb
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043bbcd
    ADD EAX,EBX                         ; 0043bbd1
    MOV EDX,dword ptr [EDX + 0x15c]     ; 0043bbd3
    SHL EAX,0x2                         ; 0043bbd9
    ADD EDX,EAX                         ; 0043bbdc
    MOV EAX,dword ptr [ESI + 0x4]       ; 0043bbde
    SUB EAX,EBX                         ; 0043bbe1
    SHL EAX,0x2                         ; 0043bbe3
    ADD EAX,0x4                         ; 0043bbe6
    PUSH EAX                            ; 0043bbe9
    PUSH EDX                            ; 0043bbea
    PUSH ECX                            ; 0043bbeb
    ADD EBP,0x4                         ; 0043bbec
    INC EDI                             ; 0043bbef
    CALL FUN_00470201                   ; 0043bbf0
        ;   XREF to: 00470201 (UNCONDITIONAL_CALL)  ; undefined FUN_00470201()
    MOV EAX,dword ptr [ESI + 0xc]       ; 0043bbf5
    ADD ESP,0xc                         ; 0043bbf8
    CMP EDI,EAX                         ; 0043bbfb
    JLE 0x0043bbb1                      ; 0043bbfd
        ;   XREF to: 0043bbb1 (CONDITIONAL_JUMP)  ; LAB_0043bbb1
    NOP                                 ; 0043bbff
    POP EBP                             ; 0043bc00
        ;   Label: LAB_0043bc00
    POP EDI                             ; 0043bc01
    POP ESI                             ; 0043bc02
    POP EBX                             ; 0043bc03
    RET                                 ; 0043bc04
    MOV EAX,[0x006141bc]                ; 0043bc05 | DAT_006141bc
        ;   Label: LAB_0043bc05
    DEC EAX                             ; 0043bc0a
    PUSH EAX                            ; 0043bc0b
    MOV EAX,[0x006141b8]                ; 0043bc0c | DAT_006141b8
    DEC EAX                             ; 0043bc11
    PUSH EAX                            ; 0043bc12
    PUSH 0x0                            ; 0043bc13
    PUSH 0x0                            ; 0043bc15
    PUSH 0x0                            ; 0043bc17
    CALL FUN_00560050                   ; 0043bc19
        ;   XREF to: 00560050 (UNCONDITIONAL_CALL)  ; undefined FUN_00560050()
    ADD ESP,0x14                        ; 0043bc1e
    POP EBP                             ; 0043bc21
    POP EDI                             ; 0043bc22
    POP ESI                             ; 0043bc23
    POP EBX                             ; 0043bc24
    RET                                 ; 0043bc25

