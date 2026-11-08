; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004515b0(float *param_1,float *param_2,float *param_3,int param_4,uint param_5,int param_6,uint param_7,int param_8,uint param_9,double param_10)
;
; Local Variables:
; undefined8       Stack[-0x28]:8  local_28
;
; Referenced Globals:
;   TerminatedCString s_core_dcube_cpp_005ba0ee
;   TerminatedCString s_Bad_clip_005ba100
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004515b0
        ;   Label: FUN_004515b0
    PUSH ESI                            ; 004515b1
    PUSH EDI                            ; 004515b2
    PUSH EBP                            ; 004515b3
    MOV EBP,ESP                         ; 004515b4
    SUB ESP,0x18                        ; 004515b6
    AND ESP,0xfffffff8                  ; 004515b9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004515bc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004515bf
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004515c2
    FLD float ptr [EDI + 0x4]           ; 004515c5
    FSUB float ptr [EBX + 0x4]          ; 004515c8
    FMUL double ptr [EBP + 0x28]        ; 004515cb
    FLD float ptr [EDI]                 ; 004515ce
    FSUB float ptr [EBX]                ; 004515d0
    FMUL double ptr [EBP + 0x20]        ; 004515d2
    FADDP                               ; 004515d5
    FLD float ptr [EDI + 0x8]           ; 004515d7
    FSUB float ptr [EBX + 0x8]          ; 004515da
    FMUL double ptr [EBP + 0x30]        ; 004515dd
    FADDP                               ; 004515e0
    FSTP double ptr [ESP]               ; 004515e2
    MOV EDX,dword ptr [ESP + 0x4]       ; 004515e5
    MOV ECX,dword ptr [ESP]             ; 004515e9
    TEST EDX,0x7fffffff                 ; 004515ec
    JNZ 0x004515fc                      ; 004515f2
        ;   XREF to: 004515fc (CONDITIONAL_JUMP)  ; LAB_004515fc
    TEST ECX,ECX                        ; 004515f4
    JZ 0x00451706                       ; 004515f6
        ;   XREF to: 00451706 (CONDITIONAL_JUMP)  ; LAB_00451706
    FLD float ptr [EBX]                 ; 004515fc
        ;   Label: LAB_004515fc
    FLD double ptr [EBP + 0x20]         ; 004515fe
    FMUL ST1                            ; 00451601
    FADD double ptr [EBP + 0x38]        ; 00451603
    FLD float ptr [EBX + 0x4]           ; 00451606
    FMUL double ptr [EBP + 0x28]        ; 00451609
    FADDP                               ; 0045160c
    FLD float ptr [EBX + 0x8]           ; 0045160e
    FMUL double ptr [EBP + 0x30]        ; 00451611
    FADDP                               ; 00451614
    FLD ST0                             ; 00451616
    FCHS                                ; 00451618
    FDIV double ptr [ESP]               ; 0045161a
    FLD float ptr [EDI]                 ; 0045161d
    FSUB float ptr [EBX]                ; 0045161f
    FXCH                                ; 00451621
    FSTP ST2                            ; 00451623
    FMUL ST1                            ; 00451625
    FADDP ST2,ST0                       ; 00451627
    FXCH                                ; 00451629
    FSTP float ptr [ESI]                ; 0045162b
    FLD float ptr [EDI + 0x4]           ; 0045162d
    FSUB float ptr [EBX + 0x4]          ; 00451630
    FMUL ST1                            ; 00451633
    FADD float ptr [EBX + 0x4]          ; 00451635
    FSTP float ptr [ESI + 0x4]          ; 00451638
    FLD float ptr [EDI + 0x8]           ; 0045163b
    FSUB float ptr [EBX + 0x8]          ; 0045163e
    FMULP                               ; 00451641
    MOV ECX,dword ptr [EBP + 0x24]      ; 00451643
    FADD float ptr [EBX + 0x8]          ; 00451646
    MOV EBX,dword ptr [EBP + 0x20]      ; 00451649
    FSTP float ptr [ESI + 0x8]          ; 0045164c
    TEST ECX,0x7fffffff                 ; 0045164f
    JNZ 0x0045165b                      ; 00451655
        ;   XREF to: 0045165b (CONDITIONAL_JUMP)  ; LAB_0045165b
    TEST EBX,EBX                        ; 00451657
    JZ 0x00451689                       ; 00451659
        ;   XREF to: 00451689 (CONDITIONAL_JUMP)  ; LAB_00451689
    MOV EDI,dword ptr [EBP + 0x2c]      ; 0045165b
        ;   Label: LAB_0045165b
    MOV EAX,dword ptr [EBP + 0x28]      ; 0045165e
    TEST EDI,0x7fffffff                 ; 00451661
    JNZ 0x00451689                      ; 00451667
        ;   XREF to: 00451689 (CONDITIONAL_JUMP)  ; LAB_00451689
    TEST EAX,EAX                        ; 00451669
    JNZ 0x00451689                      ; 0045166b
        ;   XREF to: 00451689 (CONDITIONAL_JUMP)  ; LAB_00451689
    MOV EDX,dword ptr [EBP + 0x34]      ; 0045166d
    MOV ECX,dword ptr [EBP + 0x30]      ; 00451670
    TEST EDX,0x7fffffff                 ; 00451673
    JNZ 0x00451689                      ; 00451679
        ;   XREF to: 00451689 (CONDITIONAL_JUMP)  ; LAB_00451689
    TEST ECX,ECX                        ; 0045167b
    JNZ 0x00451689                      ; 0045167d
        ;   XREF to: 00451689 (CONDITIONAL_JUMP)  ; LAB_00451689
    FLD double ptr [EBP + 0x20]         ; 0045167f
    FCHS                                ; 00451682
    FMUL double ptr [EBP + 0x38]        ; 00451684
    FSTP float ptr [ESI]                ; 00451687
    MOV EBX,dword ptr [EBP + 0x24]      ; 00451689
        ;   Label: LAB_00451689
    MOV EDI,dword ptr [EBP + 0x20]      ; 0045168c
    TEST EBX,0x7fffffff                 ; 0045168f
    JNZ 0x004516c9                      ; 00451695
        ;   XREF to: 004516c9 (CONDITIONAL_JUMP)  ; LAB_004516c9
    TEST EDI,EDI                        ; 00451697
    JNZ 0x004516c9                      ; 00451699
        ;   XREF to: 004516c9 (CONDITIONAL_JUMP)  ; LAB_004516c9
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0045169b
    MOV EDX,dword ptr [EBP + 0x28]      ; 0045169e
    TEST EAX,0x7fffffff                 ; 004516a1
    JNZ 0x004516ac                      ; 004516a6
        ;   XREF to: 004516ac (CONDITIONAL_JUMP)  ; LAB_004516ac
    TEST EDX,EDX                        ; 004516a8
    JZ 0x004516c9                       ; 004516aa
        ;   XREF to: 004516c9 (CONDITIONAL_JUMP)  ; LAB_004516c9
    MOV ECX,dword ptr [EBP + 0x34]      ; 004516ac
        ;   Label: LAB_004516ac
    MOV EBX,dword ptr [EBP + 0x30]      ; 004516af
    TEST ECX,0x7fffffff                 ; 004516b2
    JNZ 0x004516c9                      ; 004516b8
        ;   XREF to: 004516c9 (CONDITIONAL_JUMP)  ; LAB_004516c9
    TEST EBX,EBX                        ; 004516ba
    JNZ 0x004516c9                      ; 004516bc
        ;   XREF to: 004516c9 (CONDITIONAL_JUMP)  ; LAB_004516c9
    FLD double ptr [EBP + 0x28]         ; 004516be
    FCHS                                ; 004516c1
    FMUL double ptr [EBP + 0x38]        ; 004516c3
    FSTP float ptr [ESI + 0x4]          ; 004516c6
    MOV EDI,dword ptr [EBP + 0x24]      ; 004516c9
        ;   Label: LAB_004516c9
    MOV EAX,dword ptr [EBP + 0x20]      ; 004516cc
    TEST EDI,0x7fffffff                 ; 004516cf
    JNZ 0x004516ff                      ; 004516d5
        ;   XREF to: 004516ff (CONDITIONAL_JUMP)  ; LAB_004516ff
    TEST EAX,EAX                        ; 004516d7
    JNZ 0x004516ff                      ; 004516d9
        ;   XREF to: 004516ff (CONDITIONAL_JUMP)  ; LAB_004516ff
    MOV EDX,dword ptr [EBP + 0x2c]      ; 004516db
    MOV ECX,dword ptr [EBP + 0x28]      ; 004516de
    TEST EDX,0x7fffffff                 ; 004516e1
    JNZ 0x004516ff                      ; 004516e7
        ;   XREF to: 004516ff (CONDITIONAL_JUMP)  ; LAB_004516ff
    TEST ECX,ECX                        ; 004516e9
    JNZ 0x004516ff                      ; 004516eb
        ;   XREF to: 004516ff (CONDITIONAL_JUMP)  ; LAB_004516ff
    MOV EBX,dword ptr [EBP + 0x34]      ; 004516ed
    MOV EDI,dword ptr [EBP + 0x30]      ; 004516f0
    TEST EBX,0x7fffffff                 ; 004516f3
    JNZ 0x0045172d                      ; 004516f9
        ;   XREF to: 0045172d (CONDITIONAL_JUMP)  ; LAB_0045172d
    TEST EDI,EDI                        ; 004516fb
    JNZ 0x0045172d                      ; 004516fd
        ;   XREF to: 0045172d (CONDITIONAL_JUMP)  ; LAB_0045172d
    MOV ESP,EBP                         ; 004516ff
        ;   Label: LAB_004516ff
    POP EBP                             ; 00451701
    POP EDI                             ; 00451702
    POP ESI                             ; 00451703
    POP EBX                             ; 00451704
    RET                                 ; 00451705
    MOV EAX,0x5ba0ee                    ; 00451706 | = "..\\core\\dcube.cpp"
        ;   Label: LAB_00451706
    MOV EDX,0x6e                        ; 0045170b
    PUSH 0x5ba100                       ; 00451710 | = "Bad clip!"
    MOV [0x01d71de0],EAX                ; 00451715 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0045171a | DAT_01d71de4
    CALL FUN_004e4330                   ; 00451720
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00451725
    JMP 0x004515fc                      ; 00451728
        ;   XREF to: 004515fc (UNCONDITIONAL_JUMP)  ; LAB_004515fc
    FLD double ptr [EBP + 0x30]         ; 0045172d
        ;   Label: LAB_0045172d
    FCHS                                ; 00451730
    FMUL double ptr [EBP + 0x38]        ; 00451732
    FSTP float ptr [ESI + 0x8]          ; 00451735
    MOV ESP,EBP                         ; 00451738
    POP EBP                             ; 0045173a
    POP EDI                             ; 0045173b
    POP ESI                             ; 0045173c
    POP EBX                             ; 0045173d
    RET                                 ; 0045173e

