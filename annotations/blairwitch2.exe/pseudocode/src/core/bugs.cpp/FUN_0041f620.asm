; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_bugs_cpp_FUN_0041f620(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005cc959
;   undefined4 DAT_005f3e10
;   undefined4 DAT_005f3e28
;   undefined4 DAT_0060b280
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041f620
        ;   Label: core_bugs.cpp_FUN_0041f620
    PUSH ESI                            ; 0041f621
    PUSH EDI                            ; 0041f622
    PUSH EBP                            ; 0041f623
    MOV EBP,ESP                         ; 0041f624
    SUB ESP,0x34                        ; 0041f626
    AND ESP,0xfffffff8                  ; 0041f629
    XOR EDX,EDX                         ; 0041f62c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f62e
    MOV dword ptr [ESP + 0x20],EDX      ; 0041f631
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041f635
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041f639
        ;   Label: LAB_0041f639
    MOV dword ptr [ESP + 0x30],EAX      ; 0041f63d
    FILD dword ptr [ESP + 0x30]         ; 0041f641
    FMUL float ptr [0x005f3e28]         ; 0041f645 | DAT_005f3e28
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f64b
    MOV ECX,dword ptr [ESP + 0x20]      ; 0041f64e
    FADD float ptr [EAX + 0x1e628]      ; 0041f652
    IMUL EAX,ECX,0x30                   ; 0041f658
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0041f65b
    XOR ESI,ESI                         ; 0041f65f
    FSTP float ptr [ESP]                ; 0041f661
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041f664
    MOV dword ptr [ESP + 0x30],ESI      ; 0041f668
        ;   Label: LAB_0041f668
    FILD dword ptr [ESP + 0x30]         ; 0041f66c
    FMUL float ptr [0x005f3e28]         ; 0041f670 | DAT_005f3e28
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041f676
    LEA EBX,[ESP + 0xc]                 ; 0041f679
    FADD float ptr [EAX + 0x1e62c]      ; 0041f67d
    MOV EDX,dword ptr [0x0060b280]      ; 0041f683 | DAT_0060b280
    FSTP float ptr [ESP + 0x8]          ; 0041f689
    FLD float ptr [EDI + 0x174f4]       ; 0041f68d
    FADD double ptr [0x005cc959]        ; 0041f693 | DAT_005cc959
    MOV EAX,ESP                         ; 0041f699
    FSTP float ptr [ESP + 0x4]          ; 0041f69b
    FLD float ptr [EAX]                 ; 0041f69f
    FMUL float ptr [0x005f3e10]         ; 0041f6a1 | DAT_005f3e10
    FISTP dword ptr [EBX]               ; 0041f6a7
    FLD float ptr [EAX + 0x4]           ; 0041f6a9
    FMUL float ptr [0x005f3e10]         ; 0041f6ac | DAT_005f3e10
    FISTP dword ptr [EBX + 0x4]         ; 0041f6b2
    FLD float ptr [EAX + 0x8]           ; 0041f6b5
    FMUL float ptr [0x005f3e10]         ; 0041f6b8 | DAT_005f3e10
    FISTP dword ptr [EBX + 0x8]         ; 0041f6be
    LEA EAX,[ESP + 0xc]                 ; 0041f6c1
    MOV EBX,dword ptr [ESP + 0x2c]      ; 0041f6c5
    PUSH EAX                            ; 0041f6c9
    MOV EAX,dword ptr [EDX]             ; 0041f6ca
    ADD EAX,EBX                         ; 0041f6cc
    PUSH EAX                            ; 0041f6ce
    CALL engine_special.cpp_FUN_0055d723 ; 0041f6cf
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0041f6d4
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041f6d7
    ADD EDI,0x4                         ; 0041f6db
    ADD EAX,0x240                       ; 0041f6de
    INC ESI                             ; 0041f6e3
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041f6e4
    CMP ESI,0xc                         ; 0041f6e8
    JL 0x0041f668                       ; 0041f6eb
        ;   XREF to: 0041f668 (CONDITIONAL_JUMP)  ; LAB_0041f668
    MOV ECX,dword ptr [ESP + 0x20]      ; 0041f6f1
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0041f6f5
    INC ECX                             ; 0041f6f9
    ADD EDX,0x30                        ; 0041f6fa
    MOV dword ptr [ESP + 0x20],ECX      ; 0041f6fd
    MOV dword ptr [ESP + 0x1c],EDX      ; 0041f701
    CMP ECX,0xc                         ; 0041f705
    JL 0x0041f639                       ; 0041f708
        ;   XREF to: 0041f639 (CONDITIONAL_JUMP)  ; LAB_0041f639
    PUSH -0x1                           ; 0041f70e
    MOV ESI,dword ptr [0x0060b280]      ; 0041f710 | DAT_0060b280
    PUSH ESI                            ; 0041f716
    MOV EDI,0xc                         ; 0041f717
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0 ; 0041f71c
        ;   XREF to: 0046b7e0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 0041f721
    MOV dword ptr [ESP + 0x24],EDI      ; 0041f724
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041f728
        ;   Label: LAB_0041f728
    MOV dword ptr [ESP + 0x28],EAX      ; 0041f72c
    LEA EDI,[EAX + -0xb]                ; 0041f730
    MOV ESI,0x1                         ; 0041f733
    MOV EBX,EAX                         ; 0041f738
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041f73a
        ;   Label: LAB_0041f73a
    PUSH EBX                            ; 0041f73e
    ADD EAX,ESI                         ; 0041f73f
    PUSH EAX                            ; 0041f741
    MOV EDX,dword ptr [0x0060b280]      ; 0041f742 | DAT_0060b280
    PUSH EDX                            ; 0041f748
    MOV dword ptr [ESP + 0x24],EAX      ; 0041f749
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 ; 0041f74d
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0041f752
    PUSH EDI                            ; 0041f755
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0041f756
    PUSH ECX                            ; 0041f75a
    MOV EAX,[0x0060b280]                ; 0041f75b | DAT_0060b280
    INC EBX                             ; 0041f760
    PUSH EAX                            ; 0041f761
    INC ESI                             ; 0041f762
    INC EDI                             ; 0041f763
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970 ; 0041f764
        ;   XREF to: 0046b970 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 0041f769
    CMP ESI,0xc                         ; 0041f76c
    JL 0x0041f73a                       ; 0041f76f
        ;   XREF to: 0041f73a (CONDITIONAL_JUMP)  ; LAB_0041f73a
    MOV EDX,dword ptr [ESP + 0x24]      ; 0041f771
    ADD EDX,0xc                         ; 0041f775
    MOV dword ptr [ESP + 0x24],EDX      ; 0041f778
    CMP EDX,0x90                        ; 0041f77c
    JNZ 0x0041f728                      ; 0041f782
        ;   XREF to: 0041f728 (CONDITIONAL_JUMP)  ; LAB_0041f728
    MOV ESP,EBP                         ; 0041f784
    POP EBP                             ; 0041f786
    POP EDI                             ; 0041f787
    POP ESI                             ; 0041f788
    POP EBX                             ; 0041f789
    RET                                 ; 0041f78a

