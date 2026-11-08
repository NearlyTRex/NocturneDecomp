; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00494630(undefined4 param_1,int param_2,int *param_3)
;
;
; XREF[2]:
;   FUN_00491b80 at 00491b9f
;   FUN_00491f40 at 00491fff
;
; Called Functions:
;   FUN_00491f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00494630
        ;   Label: FUN_00494630
    PUSH ESI                            ; 00494631
    PUSH EDI                            ; 00494632
    PUSH EBP                            ; 00494633
    MOV EBP,dword ptr [ESP + 0x14]      ; 00494634
    MOV ESI,dword ptr [ESP + 0x18]      ; 00494638
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0049463c
    PUSH EBX                            ; 00494640
    PUSH ESI                            ; 00494641
    PUSH EBP                            ; 00494642
    CALL FUN_00491f40                   ; 00494643
        ;   XREF to: 00491f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00491f40()
    ADD ESP,0xc                         ; 00494648
    MOV EDI,EAX                         ; 0049464b
    TEST EAX,EAX                        ; 0049464d
    JL 0x00491fbd                       ; 0049464f
        ;   XREF to: 00491fbd (CONDITIONAL_JUMP)  ; LAB_00491fbd
    MOV EAX,dword ptr [EBX]             ; 00494655
        ;   Label: LAB_00494655
    ADD EAX,ESI                         ; 00494657
    MOV DL,byte ptr [EAX]               ; 00494659
    TEST DL,DL                          ; 0049465b
    JZ 0x004946e3                       ; 0049465d
        ;   XREF to: 004946e3 (CONDITIONAL_JUMP)  ; LAB_004946e3
    CMP DL,0x7c                         ; 00494663
    JZ 0x004946a5                       ; 00494666
        ;   XREF to: 004946a5 (CONDITIONAL_JUMP)  ; LAB_004946a5
    CMP DL,0x26                         ; 00494668
    JNZ 0x004946e3                      ; 0049466b
        ;   XREF to: 004946e3 (CONDITIONAL_JUMP)  ; LAB_004946e3
    MOV EDX,dword ptr [EBX]             ; 00494671
    INC EDX                             ; 00494673
    MOV EAX,EDX                         ; 00494674
    MOV dword ptr [EBX],EDX             ; 00494676
    CMP byte ptr [ESI + EAX*0x1],0x26   ; 00494678
    JNZ 0x00494683                      ; 0049467c
        ;   XREF to: 00494683 (CONDITIONAL_JUMP)  ; LAB_00494683
    LEA ECX,[EDX + 0x1]                 ; 0049467e
    MOV dword ptr [EBX],ECX             ; 00494681
    PUSH EBX                            ; 00494683
        ;   Label: LAB_00494683
    PUSH ESI                            ; 00494684
    PUSH EBP                            ; 00494685
    CALL FUN_00491f40                   ; 00494686
        ;   XREF to: 00491f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00491f40()
    ADD ESP,0xc                         ; 0049468b
    TEST EAX,EAX                        ; 0049468e
    JL 0x00491fbd                       ; 00494690
        ;   XREF to: 00491fbd (CONDITIONAL_JUMP)  ; LAB_00491fbd
    TEST EDI,EDI                        ; 00494696
    JZ 0x004946dc                       ; 00494698
        ;   XREF to: 004946dc (CONDITIONAL_JUMP)  ; LAB_004946dc
    TEST EAX,EAX                        ; 0049469a
    JZ 0x004946dc                       ; 0049469c
        ;   XREF to: 004946dc (CONDITIONAL_JUMP)  ; LAB_004946dc
    MOV EDI,0x1                         ; 0049469e
    JMP 0x00494655                      ; 004946a3
        ;   XREF to: 00494655 (UNCONDITIONAL_JUMP)  ; LAB_00494655
    MOV EAX,dword ptr [EBX]             ; 004946a5
        ;   Label: LAB_004946a5
    INC EAX                             ; 004946a7
    MOV dword ptr [EBX],EAX             ; 004946a8
    CMP byte ptr [ESI + EAX*0x1],0x7c   ; 004946aa
    JNZ 0x004946b5                      ; 004946ae
        ;   XREF to: 004946b5 (CONDITIONAL_JUMP)  ; LAB_004946b5
    LEA EDX,[EAX + 0x1]                 ; 004946b0
    MOV dword ptr [EBX],EDX             ; 004946b3
    PUSH EBX                            ; 004946b5
        ;   Label: LAB_004946b5
    PUSH ESI                            ; 004946b6
    PUSH EBP                            ; 004946b7
    CALL FUN_00491f40                   ; 004946b8
        ;   XREF to: 00491f40 (UNCONDITIONAL_CALL)  ; undefined FUN_00491f40()
    ADD ESP,0xc                         ; 004946bd
    TEST EAX,EAX                        ; 004946c0
    JL 0x00491fbd                       ; 004946c2
        ;   XREF to: 00491fbd (CONDITIONAL_JUMP)  ; LAB_00491fbd
    TEST EDI,EDI                        ; 004946c8
    JZ 0x004946d3                       ; 004946ca
        ;   XREF to: 004946d3 (CONDITIONAL_JUMP)  ; LAB_004946d3
    MOV EDI,0x1                         ; 004946cc
        ;   Label: LAB_004946cc
    JMP 0x00494655                      ; 004946d1
        ;   XREF to: 00494655 (UNCONDITIONAL_JUMP)  ; LAB_00494655
    TEST EAX,EAX                        ; 004946d3
        ;   Label: LAB_004946d3
    JNZ 0x004946cc                      ; 004946d5
        ;   XREF to: 004946cc (CONDITIONAL_JUMP)  ; LAB_004946cc
    JMP 0x00494655                      ; 004946d7
        ;   XREF to: 00494655 (UNCONDITIONAL_JUMP)  ; LAB_00494655
    XOR EDI,EDI                         ; 004946dc
        ;   Label: LAB_004946dc
    JMP 0x00494655                      ; 004946de
        ;   XREF to: 00494655 (UNCONDITIONAL_JUMP)  ; LAB_00494655
    MOV EAX,EDI                         ; 004946e3
        ;   Label: LAB_004946e3
    POP EBP                             ; 004946e5
    POP EDI                             ; 004946e6
    POP ESI                             ; 004946e7
    POP EBX                             ; 004946e8
    RET                                 ; 004946e9

