; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005ad680(int param_1)
;
;
; XREF[1]:
;   FUN_00410500 at 00410505
;
; Referenced Globals:
;   undefined4 DAT_00612560
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_004688a0
;   FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad680
        ;   Label: FUN_005ad680
    PUSH ESI                            ; 005ad681
    PUSH EDI                            ; 005ad682
    SUB ESP,0x30                        ; 005ad683
    MOV EBX,dword ptr [ESP + 0x40]      ; 005ad686
    PUSH EBX                            ; 005ad68a
    CALL FUN_004087b0                   ; 005ad68b
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005ad690
    PUSH 0x0                            ; 005ad693
    MOV EAX,dword ptr [EBX + 0x154]     ; 005ad695
    PUSH EBX                            ; 005ad69b
    LEA ESI,[ESP + 0x8]                 ; 005ad69c
    LEA EDI,[ESP + 0x20]                ; 005ad6a0
    CALL dword ptr [EAX + 0x1c]         ; 005ad6a4
    MOV ECX,0x6                         ; 005ad6a7
    ADD ESP,0x4                         ; 005ad6ac
    LEA EAX,[ESP + 0x1c]                ; 005ad6af
    LEA ESI,[ESP + 0x4]                 ; 005ad6b3
    PUSH EAX                            ; 005ad6b7
    MOVSD.REP ES:EDI,ESI                ; 005ad6b8
    CALL FUN_004207b0                   ; 005ad6ba
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 005ad6bf
    MOV ESI,EAX                         ; 005ad6c2
    TEST EAX,EAX                        ; 005ad6c4
    JZ 0x005ad6db                       ; 005ad6c6
        ;   XREF to: 005ad6db (CONDITIONAL_JUMP)  ; LAB_005ad6db
    PUSH -0x1                           ; 005ad6c8
    LEA EAX,[EBX + 0x158]               ; 005ad6ca
    PUSH 0x0                            ; 005ad6d0
    PUSH EAX                            ; 005ad6d2
    CALL FUN_004688a0                   ; 005ad6d3
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005ad6d8
    PUSH EBX                            ; 005ad6db
        ;   Label: LAB_005ad6db
    CALL FUN_004087f0                   ; 005ad6dc
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 005ad6e1
    MOV EDX,dword ptr [0x00612560]      ; 005ad6e4 | DAT_00612560
    PUSH EDX                            ; 005ad6ea
    MOV dword ptr [EBX + 0x574],0x0     ; 005ad6eb
    CALL FUN_00483e60                   ; 005ad6f5
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00483e60()
    ADD ESP,0x4                         ; 005ad6fa
    TEST EAX,EAX                        ; 005ad6fd
    JNZ 0x005ad705                      ; 005ad6ff
        ;   XREF to: 005ad705 (CONDITIONAL_JUMP)  ; LAB_005ad705
    TEST ESI,ESI                        ; 005ad701
    JNZ 0x005ad70e                      ; 005ad703
        ;   XREF to: 005ad70e (CONDITIONAL_JUMP)  ; LAB_005ad70e
    MOV EAX,ESI                         ; 005ad705
        ;   Label: LAB_005ad705
    ADD ESP,0x30                        ; 005ad707
    POP EDI                             ; 005ad70a
    POP ESI                             ; 005ad70b
    POP EBX                             ; 005ad70c
    RET                                 ; 005ad70d
    MOV dword ptr [EBX + 0x574],0x1     ; 005ad70e
        ;   Label: LAB_005ad70e
    MOV EAX,ESI                         ; 005ad718
    ADD ESP,0x30                        ; 005ad71a
    POP EDI                             ; 005ad71d
    POP ESI                             ; 005ad71e
    POP EBX                             ; 005ad71f
    RET                                 ; 005ad720

