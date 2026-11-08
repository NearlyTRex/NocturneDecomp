; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416620(int *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005d3f42
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01c4353c
;   undefined4 DAT_01c43540
;
; Called Functions:
;   FUN_0040cd60
;   FUN_0040d4b0
;   FUN_0057dc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416620
        ;   Label: FUN_00416620
    PUSH ESI                            ; 00416621
    PUSH EDI                            ; 00416622
    PUSH EBP                            ; 00416623
    SUB ESP,0xc                         ; 00416624
    MOV EDI,dword ptr [ESP + 0x20]      ; 00416627
    CALL FUN_0057dc40                   ; 0041662b
        ;   XREF to: 0057dc40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057dc40()
    PUSH 0xffff                         ; 00416630
    PUSH 0x0                            ; 00416635
    LEA EAX,[EDI + 0x4]                 ; 00416637
    PUSH 0x0                            ; 0041663a
    LEA EBP,[EDI + 0x60]                ; 0041663c
    PUSH EAX                            ; 0041663f
    XOR ESI,ESI                         ; 00416640
    MOV EBX,EDI                         ; 00416642
    CALL FUN_0040d4b0                   ; 00416644
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    ADD ESP,0x10                        ; 00416649
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0041664c
        ;   Label: LAB_0041664c
    INC EAX                             ; 0041664f
    CMP ESI,EAX                         ; 00416650
    JGE 0x00416681                      ; 00416652
        ;   XREF to: 00416681 (CONDITIONAL_JUMP)  ; LAB_00416681
    IMUL ECX,ESI,0x2c                   ; 00416654
    CMP dword ptr [EBX + 0x88],0x1      ; 00416657
    JZ 0x00416666                       ; 0041665e
        ;   XREF to: 00416666 (CONDITIONAL_JUMP)  ; LAB_00416666
    INC ESI                             ; 00416660
        ;   Label: LAB_00416660
    ADD EBX,0x2c                        ; 00416661
    JMP 0x0041664c                      ; 00416664
        ;   XREF to: 0041664c (UNCONDITIONAL_JUMP)  ; LAB_0041664c
    PUSH 0xffff                         ; 00416666
        ;   Label: LAB_00416666
    MOV EDX,dword ptr [EBX + 0x7c]      ; 0041666b
    PUSH EDX                            ; 0041666e
    MOV EAX,dword ptr [EBX + 0x78]      ; 0041666f
    PUSH EAX                            ; 00416672
    LEA EAX,[ECX + EBP*0x1]             ; 00416673
    PUSH EAX                            ; 00416676
    CALL FUN_0040d4b0                   ; 00416677
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    ADD ESP,0x10                        ; 0041667c
    JMP 0x00416660                      ; 0041667f
        ;   XREF to: 00416660 (UNCONDITIONAL_JUMP)  ; LAB_00416660
    CMP dword ptr [EDI + 0x34],0x0      ; 00416681
        ;   Label: LAB_00416681
    JNZ 0x004166ae                      ; 00416685
        ;   XREF to: 004166ae (CONDITIONAL_JUMP)  ; LAB_004166ae
    MOV EAX,dword ptr [EDI + 0x44]      ; 00416687
    MOV EDX,dword ptr [0x0061d95c]      ; 0041668a | DAT_0061d95c
    INC EAX                             ; 00416690
    FLD float ptr [EDX + 0x294]         ; 00416691
    MOV dword ptr [ESP + 0x8],EAX       ; 00416697
    FMUL double ptr [0x005d3f42]        ; 0041669b | DAT_005d3f42
    FILD dword ptr [ESP + 0x8]          ; 004166a1
    FMULP                               ; 004166a5
    LEA EAX,[EDI + 0x5c]                ; 004166a7
    FADD float ptr [EAX]                ; 004166aa
    FSTP float ptr [EAX]                ; 004166ac
    CMP dword ptr [EDI + 0x34],0x2      ; 004166ae
        ;   Label: LAB_004166ae
    JNZ 0x004166db                      ; 004166b2
        ;   XREF to: 004166db (CONDITIONAL_JUMP)  ; LAB_004166db
    MOV EAX,dword ptr [EDI + 0x44]      ; 004166b4
    MOV EDX,dword ptr [0x0061d95c]      ; 004166b7 | DAT_0061d95c
    INC EAX                             ; 004166bd
    FLD float ptr [EDX + 0x294]         ; 004166be
    MOV dword ptr [ESP + 0x8],EAX       ; 004166c4
    FMUL double ptr [0x005d3f42]        ; 004166c8 | DAT_005d3f42
    FILD dword ptr [ESP + 0x8]          ; 004166ce
    FMULP                               ; 004166d2
    LEA EAX,[EDI + 0x5c]                ; 004166d4
    FSUBR float ptr [EAX]               ; 004166d7
    FSTP float ptr [EAX]                ; 004166d9
    PUSH dword ptr [EDI + 0x5c]         ; 004166db
        ;   Label: LAB_004166db
    CALL FUN_0040cd60                   ; 004166de
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [ESP + 0xc],EAX       ; 004166e3
    FLD float ptr [ESP + 0xc]           ; 004166e7
    ADD ESP,0x4                         ; 004166eb
    PUSH 0x0                            ; 004166ee
    FSTP float ptr [EDI + 0x5c]         ; 004166f0
    PUSH dword ptr [EDI + 0x5c]         ; 004166f3
    PUSH 0x10                           ; 004166f6
    PUSH 0x1                            ; 004166f8
    MOV EAX,dword ptr [EDI]             ; 004166fa
    PUSH EDI                            ; 004166fc
    CALL dword ptr [EAX + 0x3c]         ; 004166fd
    ADD ESP,0x14                        ; 00416700
    PUSH 0x1                            ; 00416703
    PUSH dword ptr [EDI + 0x5c]         ; 00416705
    PUSH 0x4                            ; 00416708
    PUSH 0x4                            ; 0041670a
    MOV EAX,dword ptr [EDI]             ; 0041670c
    PUSH EDI                            ; 0041670e
    CALL dword ptr [EAX + 0x3c]         ; 0041670f
    ADD ESP,0x14                        ; 00416712
    PUSH 0x0                            ; 00416715
    PUSH dword ptr [EDI + 0x5c]         ; 00416717
    PUSH 0x10                           ; 0041671a
    PUSH 0x17d                          ; 0041671c
    MOV EAX,dword ptr [EDI]             ; 00416721
    PUSH EDI                            ; 00416723
    CALL dword ptr [EAX + 0x3c]         ; 00416724
    ADD ESP,0x14                        ; 00416727
    PUSH 0x1                            ; 0041672a
    PUSH dword ptr [EDI + 0x5c]         ; 0041672c
    PUSH 0x4                            ; 0041672f
    PUSH 0x181                          ; 00416731
    MOV EAX,dword ptr [EDI]             ; 00416736
    PUSH EDI                            ; 00416738
    CALL dword ptr [EAX + 0x3c]         ; 00416739
    MOV EDX,dword ptr [EDI + 0x18]      ; 0041673c
    ADD ESP,0x14                        ; 0041673f
    MOV EAX,[0x01c43540]                ; 00416742 | DAT_01c43540
    MOV ECX,dword ptr [EDI + EDX*0x4 + 0xc00] ; 00416747
    PUSH 0xffff                         ; 0041674e
    SUB EAX,ECX                         ; 00416753
    MOV EBX,dword ptr [EDI + EDX*0x4 + 0xbf0] ; 00416755
    PUSH EAX                            ; 0041675c
    MOV EAX,[0x01c4353c]                ; 0041675d | DAT_01c4353c
    SUB EAX,EBX                         ; 00416762
    PUSH EAX                            ; 00416764
    LEA EAX,[EDX*0x4 + 0x0]             ; 00416765
    ADD EAX,EDX                         ; 0041676c
    SHL EAX,0x2                         ; 0041676e
    ADD EAX,0x7c3984                    ; 00416771
    PUSH EAX                            ; 00416776
    CALL FUN_0040d4b0                   ; 00416777
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d4b0()
    ADD ESP,0x10                        ; 0041677c
    ADD ESP,0xc                         ; 0041677f
    POP EBP                             ; 00416782
    POP EDI                             ; 00416783
    POP ESI                             ; 00416784
    POP EBX                             ; 00416785
    RET                                 ; 00416786

