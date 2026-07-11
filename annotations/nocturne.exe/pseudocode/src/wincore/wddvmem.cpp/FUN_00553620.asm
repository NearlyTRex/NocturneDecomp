; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00553620(void)
;
; Local Variables:
; undefined4       Stack[-0x70]:4  local_70
;
; XREF[1]:
;   FUN_005537e0 at 005538ff
;
; Referenced Globals:
;   string s_..\\wincore\\wddvmem.cpp_005979d1
;   string s_setColorTable16_-_Unable_to_lock_005979e8
;   string s_..\\wincore\\wddvmem.cpp_00597a16
;   string s_setColorTable16_-_Unable_to_unlo_00597a2d
;   undefined4 DAT_01c00624
;   undefined4 DAT_01c00628
;   undefined4 DAT_01c0062c
;   undefined4 DAT_01c00630
;   undefined4 DAT_01c00634
;   undefined4 DAT_01c00638
;   undefined4 DAT_01c0063c
;   undefined4 DAT_01c00640
;   undefined4 DAT_01c00644
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   ... and 1 more
;
; Called Functions:
;   FUN_004b63f0
;   FUN_004c8440
;   FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553620
        ;   Label: FUN_00553620
    SUB ESP,0x6c                        ; 00553621
    PUSH 0x6c                           ; 00553624
    PUSH 0x0                            ; 00553626
    LEA EAX,[ESP + 0x8]                 ; 00553628
    PUSH EAX                            ; 0055362c
    CALL FUN_00563cc0                   ; 0055362d
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00563cc0()
    ADD ESP,0xc                         ; 00553632
    PUSH 0x0                            ; 00553635
    PUSH 0x1                            ; 00553637
    LEA ECX,[ESP + 0x8]                 ; 00553639
    MOV EDX,0x6c                        ; 0055363d
    PUSH ECX                            ; 00553642
    MOV EAX,[0x02ddf558]                ; 00553643 | DAT_02ddf558
    MOV dword ptr [ESP + 0xc],EDX       ; 00553648
    PUSH 0x0                            ; 0055364c
    MOV EDX,dword ptr [EAX]             ; 0055364e
    PUSH EAX                            ; 00553650
    CALL dword ptr [EDX + 0x64]         ; 00553651
    TEST EAX,EAX                        ; 00553654
    JNZ 0x005536e0                      ; 00553656
        ;   XREF to: 005536e0 (CONDITIONAL_JUMP)  ; LAB_005536e0
    PUSH 0x0                            ; 0055365c
        ;   Label: LAB_0055365c
    MOV EAX,[0x02ddf558]                ; 0055365e | DAT_02ddf558
    PUSH EAX                            ; 00553663
    MOV ECX,dword ptr [EAX]             ; 00553664
    CALL dword ptr [ECX + 0x80]         ; 00553666
    TEST EAX,EAX                        ; 0055366c
    JZ 0x00553697                       ; 0055366e
        ;   XREF to: 00553697 (CONDITIONAL_JUMP)  ; LAB_00553697
    PUSH EDI                            ; 00553670
    PUSH ESI                            ; 00553671
    MOV ESI,0x597a16                    ; 00553672 | = "..\\wincore\\wddvmem.cpp"
    MOV EDI,0x2b0                       ; 00553677
    PUSH 0x597a2d                       ; 0055367c | = "setColorTable16 - Unable to unlock ba..."
    MOV dword ptr [0x01cc4800],ESI      ; 00553681 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00553687 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0055368d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00553692
    POP ESI                             ; 00553695
    POP EDI                             ; 00553696
    MOV EAX,dword ptr [ESP + 0x58]      ; 00553697
        ;   Label: LAB_00553697
    MOV DL,byte ptr [ESP + 0x58]        ; 0055369b
    XOR ECX,ECX                         ; 0055369f
    TEST DL,0x1                         ; 005536a1
    JNZ 0x005536b0                      ; 005536a4
        ;   XREF to: 005536b0 (CONDITIONAL_JUMP)  ; LAB_005536b0
    SHR EAX,0x1                         ; 005536a6
        ;   Label: LAB_005536a6
    INC ECX                             ; 005536a8
    TEST AL,0x1                         ; 005536a9
    JZ 0x005536a6                       ; 005536ab
        ;   XREF to: 005536a6 (CONDITIONAL_JUMP)  ; LAB_005536a6
    LEA EAX,[EAX]                       ; 005536ad
    MOV EAX,dword ptr [ESP + 0x58]      ; 005536b0
        ;   Label: LAB_005536b0
    MOV dword ptr [0x01c00624],ECX      ; 005536b4 | DAT_01c00624
    SHR EAX,CL                          ; 005536ba
    XOR EDX,EDX                         ; 005536bc
    MOV ECX,EAX                         ; 005536be
    MOV EAX,0xff                        ; 005536c0
    DIV ECX                             ; 005536c5
    MOV [0x01c00628],EAX                ; 005536c7 | DAT_01c00628
    XOR ECX,ECX                         ; 005536cc
    TEST EAX,EAX                        ; 005536ce
    JZ 0x00553708                       ; 005536d0
        ;   XREF to: 00553708 (CONDITIONAL_JUMP)  ; LAB_00553708
    CMP EAX,0x1                         ; 005536d2
        ;   Label: LAB_005536d2
    JBE 0x0055375c                      ; 005536d5
        ;   XREF to: 0055375c (CONDITIONAL_JUMP)  ; LAB_0055375c
    INC ECX                             ; 005536db
    SHR EAX,0x1                         ; 005536dc
    JMP 0x005536d2                      ; 005536de
        ;   XREF to: 005536d2 (UNCONDITIONAL_JUMP)  ; LAB_005536d2
    MOV ECX,0x5979d1                    ; 005536e0 | = "..\\wincore\\wddvmem.cpp"
        ;   Label: LAB_005536e0
    MOV EBX,0x2ae                       ; 005536e5
    PUSH 0x5979e8                       ; 005536ea | = "setColorTable16 - Unable to lock back..."
    MOV dword ptr [0x01cc4800],ECX      ; 005536ef | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EBX      ; 005536f5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 005536fb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00553700
    JMP 0x0055365c                      ; 00553703
        ;   XREF to: 0055365c (UNCONDITIONAL_JUMP)  ; LAB_0055365c
    MOV EAX,0x20                        ; 00553708
        ;   Label: LAB_00553708
    MOV DH,byte ptr [ESP + 0x5c]        ; 0055370d
        ;   Label: LAB_0055370d
    MOV [0x01c0062c],EAX                ; 00553711 | DAT_01c0062c
    XOR ECX,ECX                         ; 00553716
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00553718
    TEST DH,0x1                         ; 0055371c
    JNZ 0x00553730                      ; 0055371f
        ;   XREF to: 00553730 (CONDITIONAL_JUMP)  ; LAB_00553730
    SHR EAX,0x1                         ; 00553721
        ;   Label: LAB_00553721
    INC ECX                             ; 00553723
    TEST AL,0x1                         ; 00553724
    JZ 0x00553721                       ; 00553726
        ;   XREF to: 00553721 (CONDITIONAL_JUMP)  ; LAB_00553721
    LEA EAX,[EAX]                       ; 00553728
    MOV EDX,EDX                         ; 0055372e
    MOV EAX,dword ptr [ESP + 0x5c]      ; 00553730
        ;   Label: LAB_00553730
    MOV dword ptr [0x01c00630],ECX      ; 00553734 | DAT_01c00630
    SHR EAX,CL                          ; 0055373a
    XOR EDX,EDX                         ; 0055373c
    MOV ECX,EAX                         ; 0055373e
    MOV EAX,0xff                        ; 00553740
    DIV ECX                             ; 00553745
    MOV [0x01c00634],EAX                ; 00553747 | DAT_01c00634
    XOR ECX,ECX                         ; 0055374c
    TEST EAX,EAX                        ; 0055374e
    JZ 0x00553760                       ; 00553750
        ;   XREF to: 00553760 (CONDITIONAL_JUMP)  ; LAB_00553760
    CMP EAX,0x1                         ; 00553752
        ;   Label: LAB_00553752
    JBE 0x005537ac                      ; 00553755
        ;   XREF to: 005537ac (CONDITIONAL_JUMP)  ; LAB_005537ac
    INC ECX                             ; 00553757
    SHR EAX,0x1                         ; 00553758
    JMP 0x00553752                      ; 0055375a
        ;   XREF to: 00553752 (UNCONDITIONAL_JUMP)  ; LAB_00553752
    MOV EAX,ECX                         ; 0055375c
        ;   Label: LAB_0055375c
    JMP 0x0055370d                      ; 0055375e
        ;   XREF to: 0055370d (UNCONDITIONAL_JUMP)  ; LAB_0055370d
    MOV EAX,0x20                        ; 00553760
        ;   Label: LAB_00553760
    MOV BL,byte ptr [ESP + 0x60]        ; 00553765
        ;   Label: LAB_00553765
    MOV [0x01c00638],EAX                ; 00553769 | DAT_01c00638
    XOR ECX,ECX                         ; 0055376e
    MOV EAX,dword ptr [ESP + 0x60]      ; 00553770
    TEST BL,0x1                         ; 00553774
    JNZ 0x00553780                      ; 00553777
        ;   XREF to: 00553780 (CONDITIONAL_JUMP)  ; LAB_00553780
    SHR EAX,0x1                         ; 00553779
        ;   Label: LAB_00553779
    INC ECX                             ; 0055377b
    TEST AL,0x1                         ; 0055377c
    JZ 0x00553779                       ; 0055377e
        ;   XREF to: 00553779 (CONDITIONAL_JUMP)  ; LAB_00553779
    MOV EAX,dword ptr [ESP + 0x60]      ; 00553780
        ;   Label: LAB_00553780
    MOV dword ptr [0x01c0063c],ECX      ; 00553784 | DAT_01c0063c
    SHR EAX,CL                          ; 0055378a
    XOR EDX,EDX                         ; 0055378c
    MOV ECX,EAX                         ; 0055378e
    MOV EAX,0xff                        ; 00553790
    DIV ECX                             ; 00553795
    MOV [0x01c00640],EAX                ; 00553797 | DAT_01c00640
    XOR ECX,ECX                         ; 0055379c
    TEST EAX,EAX                        ; 0055379e
    JZ 0x005537b0                       ; 005537a0
        ;   XREF to: 005537b0 (CONDITIONAL_JUMP)  ; LAB_005537b0
    CMP EAX,0x1                         ; 005537a2
        ;   Label: LAB_005537a2
    JBE 0x005537c4                      ; 005537a5
        ;   XREF to: 005537c4 (CONDITIONAL_JUMP)  ; LAB_005537c4
    INC ECX                             ; 005537a7
    SHR EAX,0x1                         ; 005537a8
    JMP 0x005537a2                      ; 005537aa
        ;   XREF to: 005537a2 (UNCONDITIONAL_JUMP)  ; LAB_005537a2
    MOV EAX,ECX                         ; 005537ac
        ;   Label: LAB_005537ac
    JMP 0x00553765                      ; 005537ae
        ;   XREF to: 00553765 (UNCONDITIONAL_JUMP)  ; LAB_00553765
    MOV EAX,0x20                        ; 005537b0
        ;   Label: LAB_005537b0
    MOV [0x01c00644],EAX                ; 005537b5 | DAT_01c00644
    CALL FUN_004b63f0                   ; 005537ba
        ;   XREF to: 004b63f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b63f0()
    ADD ESP,0x6c                        ; 005537bf
    POP EBX                             ; 005537c2
    RET                                 ; 005537c3
    MOV EAX,ECX                         ; 005537c4
        ;   Label: LAB_005537c4
    MOV [0x01c00644],EAX                ; 005537c6 | DAT_01c00644
    CALL FUN_004b63f0                   ; 005537cb
        ;   XREF to: 004b63f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b63f0()
    ADD ESP,0x6c                        ; 005537d0
    POP EBX                             ; 005537d3
    RET                                 ; 005537d4

