; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c16b0(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_005c170c at 005c17e2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c16b0
        ;   Label: FUN_005c16b0
    PUSH ESI                            ; 005c16b1
    PUSH EDI                            ; 005c16b2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005c16b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005c16b7
    CMP EBX,dword ptr [EAX + 0x4]       ; 005c16bb
    JG 0x005c16eb                       ; 005c16be
        ;   XREF to: 005c16eb (CONDITIONAL_JUMP)  ; LAB_005c16eb
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c16c0
    MOV ECX,dword ptr [EAX]             ; 005c16c3
    MOV EDX,dword ptr [EDX + 0x8]       ; 005c16c5
    SUB EDX,ECX                         ; 005c16c8
    CMP EBX,EDX                         ; 005c16ca
    JL 0x005c16eb                       ; 005c16cc
        ;   XREF to: 005c16eb (CONDITIONAL_JUMP)  ; LAB_005c16eb
    MOV DL,byte ptr [EAX + 0xc]         ; 005c16ce
    MOV ESI,dword ptr [EAX]             ; 005c16d1
    MOV EDI,dword ptr [EAX + 0x4]       ; 005c16d3
    AND DL,0xef                         ; 005c16d6
    ADD ESI,EBX                         ; 005c16d9
    MOV byte ptr [EAX + 0xc],DL         ; 005c16db
    SUB EDI,EBX                         ; 005c16de
    MOV dword ptr [EAX],ESI             ; 005c16e0
    MOV dword ptr [EAX + 0x4],EDI       ; 005c16e2
    XOR EAX,EAX                         ; 005c16e5
    POP EDI                             ; 005c16e7
    POP ESI                             ; 005c16e8
    POP EBX                             ; 005c16e9
    RET                                 ; 005c16ea
    MOV EAX,0x1                         ; 005c16eb
        ;   Label: LAB_005c16eb
    POP EDI                             ; 005c16f0
    POP ESI                             ; 005c16f1
    POP EBX                             ; 005c16f2
    RET                                 ; 005c16f3

