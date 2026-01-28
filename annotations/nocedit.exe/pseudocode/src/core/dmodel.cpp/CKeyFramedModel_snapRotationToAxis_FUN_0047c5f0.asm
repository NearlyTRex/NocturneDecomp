; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dmodel_cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0 (CKeyFramedModel *this_ptr,CVector3f *rotation_angles)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   rotation_angles
; Local Variables:
; undefined8       Stack[-0x90]:8  local_90
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined8       Stack[-0x7c]:8  local_7c
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047e1ec
;
; Referenced Globals:
;   TerminatedCString s_Realign_object_00620583
;   double DOUBLE_00620593 = 0.318309886192889
;   double DOUBLE_0062059b = 32768
;   double DOUBLE_006205a3 = 0.000030517578125
;   double DOUBLE_006205ab = 3.14159265350000
;   double DOUBLE_006205b3 = 0.5
;
; Called Functions:
;   crt_math.c_floor_FUN_005feb90
;   crt_math.c_round_FUN_005fe6b0
;   engine_2d.c_drawText_FUN_00401fd0
;   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c5f0
        ;   Label: core_dmodel.cpp_CKeyFramedModel_snapRotationToAxis_FUN_0047c5f0
    PUSH ESI                            ; 0047c5f1
    PUSH EDI                            ; 0047c5f2
    PUSH EBP                            ; 0047c5f3
    MOV EBP,ESP                         ; 0047c5f4
    SUB ESP,0x74                        ; 0047c5f6
    AND ESP,0xfffffff8                  ; 0047c5f9
    MOV ESI,dword ptr [EBP + 0x18]      ; 0047c5fc
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 0047c5ff
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    PUSH 0x0                            ; 0047c604
    PUSH 0x0                            ; 0047c606
    PUSH 0x620583                       ; 0047c608 | = "Realign object"
    CALL engine_2d.c_drawText_FUN_00401fd0 ; 0047c60d
        ;   XREF to: 00401fd0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fd0(char * text, int x_pos, int y_pos)
    ADD ESP,0xc                         ; 0047c612
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20 ; 0047c615
        ;   XREF to: 005eda20 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005eda20()
    FLD double ptr [0x00620593]         ; 0047c61a | DOUBLE_00620593
    FLD float ptr [ESI]                 ; 0047c620
    FMUL ST1                            ; 0047c622
    FLD float ptr [ESI + 0x8]           ; 0047c624
    FMUL ST2                            ; 0047c627
    FLD float ptr [ESI + 0x4]           ; 0047c629
    FMULP ST3                           ; 0047c62c
    FXCH                                ; 0047c62e
    FLD double ptr [0x0062059b]         ; 0047c630 | DOUBLE_0062059b
    FXCH                                ; 0047c636
    FMUL ST1                            ; 0047c638
    FXCH ST2                            ; 0047c63a
    FMUL ST1                            ; 0047c63c
    FXCH ST3                            ; 0047c63e
    FMULP                               ; 0047c640
    FXCH                                ; 0047c642
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c644
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x18]        ; 0047c649
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047c64d
    ADD EAX,0x2000                      ; 0047c651
    FXCH                                ; 0047c656
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c658
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    AND EAX,0xc000                      ; 0047c65d
    FISTP dword ptr [ESP + 0x1c]        ; 0047c662
    MOV dword ptr [ESP + 0x18],EAX      ; 0047c666
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047c66a
    ADD EAX,0x2000                      ; 0047c66e
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c673
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    AND EAX,0xc000                      ; 0047c678
    FISTP dword ptr [ESP + 0x14]        ; 0047c67d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0047c681
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047c685
    ADD EAX,0x2000                      ; 0047c689
    AND EAX,0xc000                      ; 0047c68e
    MOV dword ptr [ESP + 0x14],EAX      ; 0047c693
    MOV EAX,dword ptr [ESP + 0x18]      ; 0047c697
    MOV dword ptr [ESP + 0x68],EAX      ; 0047c69b
    FLD double ptr [0x006205a3]         ; 0047c69f | DOUBLE_006205a3
    FILD dword ptr [ESP + 0x68]         ; 0047c6a5
    FMUL ST1                            ; 0047c6a9
    FLD double ptr [0x006205ab]         ; 0047c6ab | DOUBLE_006205ab
    FXCH                                ; 0047c6b1
    FMUL ST1                            ; 0047c6b3
    FLD ST0                             ; 0047c6b5
    FSIN                                ; 0047c6b7
    FXCH                                ; 0047c6b9
    FCOS                                ; 0047c6bb
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0047c6bd
    MOV dword ptr [ESP + 0x68],EAX      ; 0047c6c1
    FILD dword ptr [ESP + 0x68]         ; 0047c6c5
    FMUL ST4                            ; 0047c6c9
    FMUL ST3                            ; 0047c6cb
    FLD ST0                             ; 0047c6cd
    FSIN                                ; 0047c6cf
    FXCH                                ; 0047c6d1
    FCOS                                ; 0047c6d3
    MOV EAX,dword ptr [ESP + 0x14]      ; 0047c6d5
    MOV dword ptr [ESP + 0x68],EAX      ; 0047c6d9
    FILD dword ptr [ESP + 0x68]         ; 0047c6dd
    FMULP ST6                           ; 0047c6e1
    FXCH ST5                            ; 0047c6e3
    FMULP ST4                           ; 0047c6e5
    FLD ST3                             ; 0047c6e7
    FSIN                                ; 0047c6e9
    FXCH ST4                            ; 0047c6eb
    FCOS                                ; 0047c6ed
    FXCH ST2                            ; 0047c6ef
    FSTP float ptr [ESP + 0x34]         ; 0047c6f1
    FST float ptr [ESP + 0x3c]          ; 0047c6f5
    FMUL float ptr [ESP + 0x34]         ; 0047c6f9
    FXCH ST2                            ; 0047c6fd
    FSTP float ptr [ESP + 0x2c]         ; 0047c6ff
    FXCH ST3                            ; 0047c703
    FST float ptr [ESP + 0x40]          ; 0047c705
    FMUL float ptr [ESP + 0x34]         ; 0047c709
    FXCH ST2                            ; 0047c70d
    FST float ptr [ESP + 0x30]          ; 0047c70f
    FMUL float ptr [ESP + 0x2c]         ; 0047c713
    FLD float ptr [ESP + 0x30]          ; 0047c717
    FMUL float ptr [ESP + 0x34]         ; 0047c71b
    FXCH                                ; 0047c71f
    FST float ptr [ESP + 0x68]          ; 0047c721
    FMUL float ptr [ESP + 0x3c]         ; 0047c725
    FXCH ST4                            ; 0047c729
    FST float ptr [ESP + 0x38]          ; 0047c72b
    FMUL float ptr [ESP + 0x2c]         ; 0047c72f
    FLD float ptr [ESP + 0x38]          ; 0047c733
    FMUL float ptr [ESP + 0x40]         ; 0047c737
    FLD float ptr [ESP + 0x38]          ; 0047c73b
    FXCH                                ; 0047c73f
    FADDP ST6,ST0                       ; 0047c741
    FMUL float ptr [ESP + 0x34]         ; 0047c743
    FXCH ST5                            ; 0047c747
    FSTP float ptr [ESP + 0x60]         ; 0047c749
    FLD float ptr [ESP + 0x68]          ; 0047c74d
    FMUL float ptr [ESP + 0x40]         ; 0047c751
    FLD float ptr [ESP + 0x2c]          ; 0047c755
    FCHS                                ; 0047c759
    FSTP float ptr [ESP + 0x5c]         ; 0047c75b
    FXCH                                ; 0047c75f
    FST float ptr [ESP + 0x28]          ; 0047c761
    FMUL float ptr [ESP + 0x3c]         ; 0047c765
    FXCH ST3                            ; 0047c769
    FSTP float ptr [ESP + 0x48]         ; 0047c76b
    FLD float ptr [ESP + 0x28]          ; 0047c76f
    FMUL float ptr [ESP + 0x40]         ; 0047c773
    FXCH ST4                            ; 0047c777
    FSTP float ptr [ESP + 0x70]         ; 0047c779
    FLD float ptr [ESP + 0x38]          ; 0047c77d
    FCHS                                ; 0047c781
    FMUL float ptr [ESP + 0x3c]         ; 0047c783
    FXCH ST2                            ; 0047c787
    FSTP float ptr [ESP + 0x50]         ; 0047c789
    FLD float ptr [ESP + 0x3c]          ; 0047c78d
    FMUL float ptr [ESP + 0x30]         ; 0047c791
    FLD float ptr [ESP + 0x30]          ; 0047c795
    FCHS                                ; 0047c799
    FMUL float ptr [ESP + 0x40]         ; 0047c79b
    XOR EDX,EDX                         ; 0047c79f
    XOR EBX,EBX                         ; 0047c7a1
    MOV dword ptr [ESP + 0x64],EDX      ; 0047c7a3
    FXCH ST6                            ; 0047c7a7
    FSTP float ptr [ESP + 0x54]         ; 0047c7a9
    FXCH ST2                            ; 0047c7ad
    FADDP                               ; 0047c7af
    FXCH                                ; 0047c7b1
    FADDP ST3,ST0                       ; 0047c7b3
    FSTP float ptr [ESP + 0x58]         ; 0047c7b5
    FADDP ST2,ST0                       ; 0047c7b9
    FSTP float ptr [ESP + 0x44]         ; 0047c7bb
    FSTP float ptr [ESP + 0x4c]         ; 0047c7bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047c7c3
        ;   Label: LAB_0047c7c3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047c7c6
    MOV ECX,dword ptr [EDX + 0x100]     ; 0047c7c9
    MOV EAX,dword ptr [EAX + 0x104]     ; 0047c7cf
    IMUL EAX,ECX                        ; 0047c7d5
    CMP EAX,dword ptr [ESP + 0x64]      ; 0047c7d8
    JG 0x0047c7e5                       ; 0047c7dc
        ;   XREF to: 0047c7e5 (CONDITIONAL_JUMP)  ; LAB_0047c7e5
    MOV ESP,EBP                         ; 0047c7de
    POP EBP                             ; 0047c7e0
    POP EDI                             ; 0047c7e1
    POP ESI                             ; 0047c7e2
    POP EBX                             ; 0047c7e3
    RET                                 ; 0047c7e4
    MOV ESI,dword ptr [EDX + 0x10c]     ; 0047c7e5
        ;   Label: LAB_0047c7e5
    MOV EDI,ESP                         ; 0047c7eb
    ADD ESI,EBX                         ; 0047c7ed
    MOVSD ES:EDI,ESI                    ; 0047c7ef
    MOVSD ES:EDI,ESI                    ; 0047c7f0
    MOVSD ES:EDI,ESI                    ; 0047c7f1
    MOV EAX,dword ptr [ESP + 0x4]       ; 0047c7f2
    MOV dword ptr [ESP + 0x68],EAX      ; 0047c7f6
    FILD dword ptr [ESP + 0x68]         ; 0047c7fa
    MOV EAX,dword ptr [ESP]             ; 0047c7fe
    FST float ptr [ESP + 0x24]          ; 0047c801
    FMUL float ptr [ESP + 0x48]         ; 0047c805
    MOV dword ptr [ESP + 0x68],EAX      ; 0047c809
    FILD dword ptr [ESP + 0x68]         ; 0047c80d
    FST float ptr [ESP + 0x6c]          ; 0047c811
    FMUL float ptr [ESP + 0x60]         ; 0047c815
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047c819
    FADDP                               ; 0047c81d
    MOV dword ptr [ESP + 0x68],EAX      ; 0047c81f
    FILD dword ptr [ESP + 0x68]         ; 0047c823
    FST float ptr [ESP + 0x20]          ; 0047c827
    FMUL float ptr [ESP + 0x4c]         ; 0047c82b
    FADDP                               ; 0047c82f
    FADD double ptr [0x006205b3]        ; 0047c831 | DOUBLE_006205b3
    SUB ESP,0x8                         ; 0047c837
    FSTP double ptr [ESP]               ; 0047c83a
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c83d
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0047c842
    MOV dword ptr [ESP + 0x18],EDX      ; 0047c846
    FLD double ptr [ESP + 0x14]         ; 0047c84a
    ADD ESP,0x8                         ; 0047c84e
    FLD float ptr [ESP + 0x24]          ; 0047c851
    FMUL float ptr [ESP + 0x70]         ; 0047c855
    FLD float ptr [ESP + 0x6c]          ; 0047c859
    FMUL float ptr [ESP + 0x58]         ; 0047c85d
    FADDP                               ; 0047c861
    FLD float ptr [ESP + 0x20]          ; 0047c863
    FMUL float ptr [ESP + 0x44]         ; 0047c867
    FXCH ST2                            ; 0047c86b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c86d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047c872
    FISTP dword ptr [ESP + 0x68]        ; 0047c875
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047c879
    MOV EDX,dword ptr [EDX + 0x10c]     ; 0047c87d
    FADDP                               ; 0047c883
    MOV dword ptr [EDX + EBX*0x1],EAX   ; 0047c885
    FADD double ptr [0x006205b3]        ; 0047c888 | DOUBLE_006205b3
    SUB ESP,0x8                         ; 0047c88e
    FSTP double ptr [ESP]               ; 0047c891
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c894
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0047c899
    MOV dword ptr [ESP + 0x18],EDX      ; 0047c89d
    FLD double ptr [ESP + 0x14]         ; 0047c8a1
    ADD ESP,0x8                         ; 0047c8a5
    FLD float ptr [ESP + 0x24]          ; 0047c8a8
    FMUL float ptr [ESP + 0x5c]         ; 0047c8ac
    FLD float ptr [ESP + 0x6c]          ; 0047c8b0
    FMUL float ptr [ESP + 0x50]         ; 0047c8b4
    FADDP                               ; 0047c8b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0047c8ba
    FLD float ptr [ESP + 0x20]          ; 0047c8bd
    FMUL float ptr [ESP + 0x54]         ; 0047c8c1
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0047c8c5
    FXCH ST2                            ; 0047c8cb
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c8cd
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    LEA EDX,[EAX + EBX*0x1]             ; 0047c8d2
    FISTP dword ptr [ESP + 0x68]        ; 0047c8d5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047c8d9
    FADDP                               ; 0047c8dd
    MOV dword ptr [EDX + 0x4],EAX       ; 0047c8df
    FADD double ptr [0x006205b3]        ; 0047c8e2 | DOUBLE_006205b3
    SUB ESP,0x8                         ; 0047c8e8
    FSTP double ptr [ESP]               ; 0047c8eb
    CALL crt_math.c_floor_FUN_005feb90  ; 0047c8ee
        ;   XREF to: 005feb90 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005feb90(double input_value)
    MOV dword ptr [ESP + 0x14],EAX      ; 0047c8f3
    MOV dword ptr [ESP + 0x18],EDX      ; 0047c8f7
    ADD EBX,0xc                         ; 0047c8fb
    FLD double ptr [ESP + 0x14]         ; 0047c8fe
    ADD ESP,0x8                         ; 0047c902
    CALL crt_math.c_round_FUN_005fe6b0  ; 0047c905
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    MOV EDX,dword ptr [EBP + 0x14]      ; 0047c90a
    MOV EDI,dword ptr [ESP + 0x64]      ; 0047c90d
    FISTP dword ptr [ESP + 0x68]        ; 0047c911
    INC EDI                             ; 0047c915
    MOV EDX,dword ptr [EDX + 0x10c]     ; 0047c916
    MOV EAX,dword ptr [ESP + 0x68]      ; 0047c91c
    MOV dword ptr [ESP + 0x64],EDI      ; 0047c920
    MOV dword ptr [EDX + EBX*0x1 + -0x4],EAX ; 0047c924
    JMP 0x0047c7c3                      ; 0047c928
        ;   XREF to: 0047c7c3 (UNCONDITIONAL_JUMP)  ; LAB_0047c7c3

