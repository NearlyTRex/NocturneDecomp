; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00407640(int param_1,uint param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e64
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;   FUN_00433000
;   FUN_004e28b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407640
        ;   Label: FUN_00407640
    PUSH ESI                            ; 00407641
    PUSH EDI                            ; 00407642
    PUSH EBP                            ; 00407643
    MOV EBX,dword ptr [ESP + 0x14]      ; 00407644
    LEA EAX,[EBX + 0x8]                 ; 00407648
    PUSH EAX                            ; 0040764b
    CALL FUN_00403970                   ; 0040764c
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00407651
    TEST EAX,EAX                        ; 00407654
    JZ 0x004076d1                       ; 00407656
        ;   XREF to: 004076d1 (CONDITIONAL_JUMP)  ; LAB_004076d1
    CMP dword ptr [0x01c38b40],0x0      ; 0040765c | DAT_01c38b40
    JNZ 0x004076e2                      ; 00407663
        ;   XREF to: 004076e2 (CONDITIONAL_JUMP)  ; LAB_004076e2
    CMP dword ptr [0x006141c0],0x20     ; 00407669 | DAT_006141c0
    JNZ 0x004076d6                      ; 00407670
        ;   XREF to: 004076d6 (CONDITIONAL_JUMP)  ; LAB_004076d6
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00407672 | DAT_01c35e6c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0040767c
        ;   Label: LAB_0040767c
    MOV [0x01c38b54],EAX                ; 00407680 | DAT_01c38b54
    TEST byte ptr [ESP + 0x18],0x10     ; 00407685
    JZ 0x004076a5                       ; 0040768a
        ;   XREF to: 004076a5 (CONDITIONAL_JUMP)  ; LAB_004076a5
    MOV ECX,dword ptr [EBX + 0x10]      ; 0040768c
    PUSH ECX                            ; 0040768f
    MOV ESI,dword ptr [EBX + 0xc]       ; 00407690
    PUSH ESI                            ; 00407693
    MOV EDI,dword ptr [EBX + 0x8]       ; 00407694
    PUSH EDI                            ; 00407697
    CALL FUN_004e28b0                   ; 00407698
        ;   XREF to: 004e28b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e28b0()
    ADD ESP,0xc                         ; 0040769d
    MOV [0x01c35e64],EAX                ; 004076a0 | DAT_01c35e64
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004076a5
        ;   Label: LAB_004076a5
    TEST EBP,EBP                        ; 004076a9
    JZ 0x00407706                       ; 004076ab
        ;   XREF to: 00407706 (CONDITIONAL_JUMP)  ; LAB_00407706
    MOV dword ptr [0x01c38b58],0x5      ; 004076ad | DAT_01c38b58
    MOV ESI,dword ptr [0x01c35e68]      ; 004076b7 | DAT_01c35e68
        ;   Label: LAB_004076b7
    LEA EAX,[EBX + 0x18]                ; 004076bd
    TEST ESI,ESI                        ; 004076c0
    JZ 0x00407721                       ; 004076c2
        ;   XREF to: 00407721 (CONDITIONAL_JUMP)  ; LAB_00407721
    PUSH EAX                            ; 004076c4
    MOV EBP,dword ptr [EBX + 0x4]       ; 004076c5
    PUSH EBP                            ; 004076c8
    CALL FUN_00431d90                   ; 004076c9
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 004076ce
    POP EBP                             ; 004076d1
        ;   Label: LAB_004076d1
    POP EDI                             ; 004076d2
    POP ESI                             ; 004076d3
    POP EBX                             ; 004076d4
    RET                                 ; 004076d5
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 004076d6 | DAT_01c35e6c
        ;   Label: LAB_004076d6
    JMP 0x0040767c                      ; 004076e0
        ;   XREF to: 0040767c (UNCONDITIONAL_JUMP)  ; LAB_0040767c
    CMP dword ptr [0x006141c0],0x20     ; 004076e2 | DAT_006141c0
        ;   Label: LAB_004076e2
    JNZ 0x004076f7                      ; 004076e9
        ;   XREF to: 004076f7 (CONDITIONAL_JUMP)  ; LAB_004076f7
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 004076eb | DAT_01c35e6c
    JMP 0x0040767c                      ; 004076f5
        ;   XREF to: 0040767c (UNCONDITIONAL_JUMP)  ; LAB_0040767c
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 004076f7 | DAT_01c35e6c
        ;   Label: LAB_004076f7
    JMP 0x0040767c                      ; 00407701
        ;   XREF to: 0040767c (UNCONDITIONAL_JUMP)  ; LAB_0040767c
    TEST byte ptr [ESP + 0x18],0xc0     ; 00407706
        ;   Label: LAB_00407706
    JZ 0x00407719                       ; 0040770b
        ;   XREF to: 00407719 (CONDITIONAL_JUMP)  ; LAB_00407719
    MOV dword ptr [0x01c38b58],0x1      ; 0040770d | DAT_01c38b58
    JMP 0x004076b7                      ; 00407717
        ;   XREF to: 004076b7 (UNCONDITIONAL_JUMP)  ; LAB_004076b7
    MOV dword ptr [0x01c38b58],EBP      ; 00407719 | DAT_01c38b58
        ;   Label: LAB_00407719
    JMP 0x004076b7                      ; 0040771f
        ;   XREF to: 004076b7 (UNCONDITIONAL_JUMP)  ; LAB_004076b7
    PUSH EAX                            ; 00407721
        ;   Label: LAB_00407721
    MOV EDI,dword ptr [EBX + 0x4]       ; 00407722
    PUSH EDI                            ; 00407725
    CALL FUN_00433000                   ; 00407726
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; undefined FUN_00433000()
    ADD ESP,0x8                         ; 0040772b
    POP EBP                             ; 0040772e
    POP EDI                             ; 0040772f
    POP ESI                             ; 00407730
    POP EBX                             ; 00407731
    RET                                 ; 00407732

