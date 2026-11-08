; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005275c0(int param_1)
;
;
; Called Functions:
;   FUN_0040c4f0
;   FUN_004fa9c0
;   FUN_004fab10
;   FUN_004fac10
;   FUN_004fb9c0
;   FUN_004fc310
;   FUN_004fc420
;   FUN_00509020
;   FUN_0054c090
;   FUN_0054c110
;   FUN_0054dd10
;   FUN_0054e6b0
;   FUN_0054eae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005275c0
        ;   Label: FUN_005275c0
    PUSH ESI                            ; 005275c1
    PUSH EDI                            ; 005275c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005275c3
    PUSH EBX                            ; 005275c7
    CALL FUN_00509020                   ; 005275c8
        ;   XREF to: 00509020 (UNCONDITIONAL_CALL)  ; undefined FUN_00509020()
    ADD ESP,0x4                         ; 005275cd
    LEA EAX,[EBX + 0x2076c]             ; 005275d0
    PUSH EAX                            ; 005275d6
    CALL FUN_0040c4f0                   ; 005275d7
        ;   XREF to: 0040c4f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c4f0()
    LEA ESI,[EBX + 0x2074c]             ; 005275dc
    ADD ESP,0x4                         ; 005275e2
    MOV EDI,EAX                         ; 005275e5
    MOV dword ptr [EBX + 0x20810],EAX   ; 005275e7
    PUSH EDI                            ; 005275ed
    MOV AL,byte ptr [ESI]               ; 005275ee
        ;   Label: LAB_005275ee
    MOV byte ptr [EDI],AL               ; 005275f0
    CMP AL,0x0                          ; 005275f2
    JZ 0x00527606                       ; 005275f4
        ;   XREF to: 00527606 (CONDITIONAL_JUMP)  ; LAB_00527606
    MOV AL,byte ptr [ESI + 0x1]         ; 005275f6
    ADD ESI,0x2                         ; 005275f9
    MOV byte ptr [EDI + 0x1],AL         ; 005275fc
    ADD EDI,0x2                         ; 005275ff
    CMP AL,0x0                          ; 00527602
    JNZ 0x005275ee                      ; 00527604
        ;   XREF to: 005275ee (CONDITIONAL_JUMP)  ; LAB_005275ee
    POP EDI                             ; 00527606
        ;   Label: LAB_00527606
    LEA ESI,[EBX + 0x20]                ; 00527607
    MOV EAX,dword ptr [EBX + 0x20810]   ; 0052760a
    MOV EDX,dword ptr [ESI]             ; 00527610
    MOV dword ptr [EAX + 0x20],EDX      ; 00527612
    MOV EDX,dword ptr [ESI + 0x4]       ; 00527615
    MOV dword ptr [EAX + 0x24],EDX      ; 00527618
    MOV EDX,dword ptr [ESI + 0x8]       ; 0052761b
    MOV dword ptr [EAX + 0x28],EDX      ; 0052761e
    MOV ESI,dword ptr [ESI + 0xc]       ; 00527621
    MOV dword ptr [EAX + 0x2c],ESI      ; 00527624
    MOV ESI,dword ptr [EBX + 0x20810]   ; 00527627
    LEA EAX,[EBX + 0x30]                ; 0052762d
    ADD ESI,0x30                        ; 00527630
    CMP ESI,EAX                         ; 00527633
    JZ 0x00527647                       ; 00527635
        ;   XREF to: 00527647 (CONDITIONAL_JUMP)  ; LAB_00527647
    MOV EDX,dword ptr [EAX]             ; 00527637
    MOV dword ptr [ESI],EDX             ; 00527639
    MOV EDX,dword ptr [EAX + 0x4]       ; 0052763b
    MOV dword ptr [ESI + 0x4],EDX       ; 0052763e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00527641
    MOV dword ptr [ESI + 0x8],EDX       ; 00527644
    LEA EAX,[EBX + 0x2072c]             ; 00527647
        ;   Label: LAB_00527647
    PUSH EAX                            ; 0052764d
    MOV EAX,dword ptr [EBX + 0x20810]   ; 0052764e
    ADD EAX,0x158                       ; 00527654
    PUSH EAX                            ; 00527659
    CALL FUN_0054eae0                   ; 0052765a
        ;   XREF to: 0054eae0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eae0()
    MOV EAX,dword ptr [EBX + 0x20810]   ; 0052765f
    FLD float ptr [EBX + 0x21444]       ; 00527665
    ADD ESP,0x8                         ; 0052766b
    FSTP float ptr [EAX + 0x27b8]       ; 0052766e
    MOV EAX,dword ptr [EBX + 0x20810]   ; 00527674
    PUSH EAX                            ; 0052767a
    MOV ESI,dword ptr [EAX + 0x154]     ; 0052767b
    CALL dword ptr [ESI]                ; 00527681
    ADD ESP,0x4                         ; 00527683
    PUSH 0x1                            ; 00527686
    LEA EAX,[EBX + 0x2078c]             ; 00527688
    PUSH EAX                            ; 0052768e
    MOV EAX,dword ptr [EBX + 0x20810]   ; 0052768f
    ADD EAX,0x158                       ; 00527695
    PUSH EAX                            ; 0052769a
    CALL FUN_004fc310                   ; 0052769b
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 005276a0
    PUSH EAX                            ; 005276a3
    CALL FUN_004fb9c0                   ; 005276a4
        ;   XREF to: 004fb9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fb9c0()
    ADD ESP,0xc                         ; 005276a9
    PUSH 0x0                            ; 005276ac
    PUSH EAX                            ; 005276ae
    MOV EAX,dword ptr [EBX + 0x20810]   ; 005276af
    ADD EAX,0x158                       ; 005276b5
    PUSH EAX                            ; 005276ba
    CALL FUN_004fc420                   ; 005276bb
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc420()
    MOV EAX,dword ptr [EBX + 0x20810]   ; 005276c0
    ADD ESP,0xc                         ; 005276c6
    ADD EAX,0x158                       ; 005276c9
    PUSH EAX                            ; 005276ce
    CALL FUN_0054c090                   ; 005276cf
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c090()
    MOV EAX,dword ptr [EBX + 0x20810]   ; 005276d4
    ADD ESP,0x4                         ; 005276da
    ADD EAX,0x158                       ; 005276dd
    PUSH EAX                            ; 005276e2
    CALL FUN_0054dd10                   ; 005276e3
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dd10()
    ADD ESP,0x4                         ; 005276e8
    LEA ESI,[EBX + 0x158]               ; 005276eb
    PUSH ESI                            ; 005276f1
    CALL FUN_0054c090                   ; 005276f2
        ;   XREF to: 0054c090 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c090()
    ADD ESP,0x4                         ; 005276f7
    PUSH ESI                            ; 005276fa
    CALL FUN_0054dd10                   ; 005276fb
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dd10()
    ADD ESP,0x4                         ; 00527700
    PUSH ESI                            ; 00527703
    CALL FUN_0054e6b0                   ; 00527704
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 00527709
    PUSH ESI                            ; 0052770c
    PUSH 0x0                            ; 0052770d
    LEA EDI,[EBX + 0x20814]             ; 0052770f
    PUSH EDI                            ; 00527715
    CALL FUN_004fa9c0                   ; 00527716
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa9c0()
    MOV EAX,dword ptr [EBX + 0x20810]   ; 0052771b
    ADD ESP,0xc                         ; 00527721
    ADD EAX,0x158                       ; 00527724
    PUSH EAX                            ; 00527729
    PUSH 0x1                            ; 0052772a
    PUSH EDI                            ; 0052772c
    CALL FUN_004fa9c0                   ; 0052772d
        ;   XREF to: 004fa9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fa9c0()
    ADD ESP,0xc                         ; 00527732
    PUSH 0x0                            ; 00527735
    MOV EDX,dword ptr [EBX + 0x309c]    ; 00527737
    PUSH EDX                            ; 0052773d
    PUSH 0x0                            ; 0052773e
    PUSH EDI                            ; 00527740
    CALL FUN_004fab10                   ; 00527741
        ;   XREF to: 004fab10 (UNCONDITIONAL_CALL)  ; undefined FUN_004fab10()
    ADD ESP,0x10                        ; 00527746
    PUSH EDI                            ; 00527749
    CALL FUN_004fac10                   ; 0052774a
        ;   XREF to: 004fac10 (UNCONDITIONAL_CALL)  ; undefined FUN_004fac10()
    ADD ESP,0x4                         ; 0052774f
    PUSH ESI                            ; 00527752
    MOV dword ptr [EBX + 0x21440],0x0   ; 00527753
    CALL FUN_0054c110                   ; 0052775d
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c110()
    MOV EAX,dword ptr [EBX + 0x20810]   ; 00527762
    ADD ESP,0x4                         ; 00527768
    ADD EAX,0x158                       ; 0052776b
    PUSH EAX                            ; 00527770
    CALL FUN_0054c110                   ; 00527771
        ;   XREF to: 0054c110 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c110()
    ADD ESP,0x4                         ; 00527776
    POP EDI                             ; 00527779
    POP ESI                             ; 0052777a
    POP EBX                             ; 0052777b
    RET                                 ; 0052777c

