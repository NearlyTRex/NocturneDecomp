; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004eb440(int param_1,undefined4 *param_2,char *param_3,undefined4 param_4,undefined4 param_5 )
;
;
; XREF[2]:
;   FUN_004ea830 at 004eaa18
;   FUN_004ec600 at 004ecc48
;
; Referenced Globals:
;   string s_..\\core\\netgame.cpp_0058c124
;   string s_CNetGame::addPlayer_-_too_many_p_0058c138
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cea3f8
;   undefined4 DAT_01cea404
;
; Called Functions:
;   FUN_004c8440
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb440
        ;   Label: FUN_004eb440
    PUSH ESI                            ; 004eb441
    PUSH EDI                            ; 004eb442
    PUSH EBP                            ; 004eb443
    MOV ESI,dword ptr [ESP + 0x14]      ; 004eb444
    CMP dword ptr [ESI + 0x1c],0x2      ; 004eb448
    JGE 0x004eb4f8                      ; 004eb44c
        ;   XREF to: 004eb4f8 (CONDITIONAL_JUMP)  ; LAB_004eb4f8
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004eb452
        ;   Label: LAB_004eb452
    LEA EBX,[EBP*0x8 + 0x0]             ; 004eb455
    MOV EAX,EBX                         ; 004eb45c
    SHL EBX,0x4                         ; 004eb45e
    SUB EBX,EAX                         ; 004eb461
    PUSH 0x78                           ; 004eb463
    MOV EAX,EBX                         ; 004eb465
    LEA EBX,[ESI + 0x20]                ; 004eb467
    PUSH 0x0                            ; 004eb46a
    ADD EBX,EAX                         ; 004eb46c
    LEA EDX,[EBP + 0x1]                 ; 004eb46e
    PUSH EBX                            ; 004eb471
    MOV dword ptr [ESI + 0x1c],EDX      ; 004eb472
    CALL FUN_00563cc0                   ; 004eb475
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 004eb47a
    MOV EDI,EBX                         ; 004eb47d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004eb47f
    PUSH EDI                            ; 004eb483
    MOV AL,byte ptr [ESI]               ; 004eb484
        ;   Label: LAB_004eb484
    MOV byte ptr [EDI],AL               ; 004eb486
    CMP AL,0x0                          ; 004eb488
    JZ 0x004eb49c                       ; 004eb48a
        ;   XREF to: 004eb49c (CONDITIONAL_JUMP)  ; LAB_004eb49c
    MOV AL,byte ptr [ESI + 0x1]         ; 004eb48c
    ADD ESI,0x2                         ; 004eb48f
    MOV byte ptr [EDI + 0x1],AL         ; 004eb492
    ADD EDI,0x2                         ; 004eb495
    CMP AL,0x0                          ; 004eb498
    JNZ 0x004eb484                      ; 004eb49a
        ;   XREF to: 004eb484 (CONDITIONAL_JUMP)  ; LAB_004eb484
    POP EDI                             ; 004eb49c
        ;   Label: LAB_004eb49c
    MOV ESI,dword ptr [ESP + 0x18]      ; 004eb49d
    LEA EDI,[EBX + 0x1c]                ; 004eb4a1
    MOVSD ES:EDI,ESI                    ; 004eb4a4
    MOVSD ES:EDI,ESI                    ; 004eb4a5
    MOV dword ptr [EBX + 0x28],0xbf800000 ; 004eb4a6
    MOV dword ptr [EBX + 0x44],0x0      ; 004eb4ad
    MOV dword ptr [EBX + 0x40],0x0      ; 004eb4b4
    MOV EAX,dword ptr [ESP + 0x20]      ; 004eb4bb
    MOV dword ptr [EBX + 0x3c],0x0      ; 004eb4bf
    MOV dword ptr [EBX + 0x14],EAX      ; 004eb4c6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004eb4c9
    MOV dword ptr [EBX + 0x18],EAX      ; 004eb4cd
    MOV EAX,[0x01cea3f8]                ; 004eb4d0 | DAT_01cea3f8
    MOV dword ptr [EBX + 0x24],EAX      ; 004eb4d5
    SUB EAX,0x1e0000                    ; 004eb4d8
    MOV dword ptr [EBX + 0x2c],EAX      ; 004eb4dd
    MOV EDX,EAX                         ; 004eb4e0
    MOV dword ptr [EBX + 0x30],EAX      ; 004eb4e2
    MOV EAX,[0x01cea404]                ; 004eb4e5 | DAT_01cea404
    MOV dword ptr [EBX + 0x38],EDX      ; 004eb4ea
    DEC EAX                             ; 004eb4ed
    MOV dword ptr [EBX + 0x34],EAX      ; 004eb4ee
    MOV EAX,EBP                         ; 004eb4f1
    POP EBP                             ; 004eb4f3
    POP EDI                             ; 004eb4f4
    POP ESI                             ; 004eb4f5
    POP EBX                             ; 004eb4f6
    RET                                 ; 004eb4f7
    MOV ECX,0x58c124                    ; 004eb4f8 | = "..\\core\\netgame.cpp"
        ;   Label: LAB_004eb4f8
    MOV EBX,0x5ff                       ; 004eb4fd
    PUSH 0x58c138                       ; 004eb502 | = "CNetGame::addPlayer - too many players!"
    MOV dword ptr [0x01cc4800],ECX      ; 004eb507 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 004eb50d | DAT_01cc4804
    CALL FUN_004c8440                   ; 004eb513
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004eb518
    JMP 0x004eb452                      ; 004eb51b
        ;   XREF to: 004eb452 (UNCONDITIONAL_JUMP)  ; LAB_004eb452

