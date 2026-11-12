; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_cloth_cpp_FUN_00441500(int param_1,int param_2,int param_3)
;
;
; XREF[1]:
;   core_cloth.cpp_FUN_004414ac at 004414db
;
; Referenced Globals:
;   undefined4 DAT_005d68d4
;   undefined4 DAT_005d68d8
;   undefined4 DAT_005fd8d0
;   undefined4 DAT_00612560
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;
; Called Functions:
;   core_dirmat.cpp_FUN_0045f840
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00497830
;   shape_edittool.cpp_FUN_00498360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441500
        ;   Label: core_cloth.cpp_FUN_00441500
    PUSH ESI                            ; 00441501
    PUSH EDI                            ; 00441502
    PUSH EBP                            ; 00441503
    SUB ESP,0x60                        ; 00441504
    IMUL EAX,dword ptr [ESP + 0x78],0xac ; 00441507
    MOV EBP,dword ptr [ESP + 0x74]      ; 0044150f
    ADD EBP,0x37b50                     ; 00441513
    ADD EBP,EAX                         ; 00441519
    LEA EAX,[EBP + 0x78]                ; 0044151b
    LEA ESI,[ESP + 0x24]                ; 0044151e
    PUSH EAX                            ; 00441522
    LEA EDI,[ESP + 0x34]                ; 00441523
    MOV EBX,0x270                       ; 00441527
    CALL core_dirmat.cpp_FUN_0045f840   ; 0044152c
        ;   XREF to: 0045f840 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f840()
    ADD ESP,0x4                         ; 00441531
    LEA EAX,[EBP + 0xa0]                ; 00441534
    LEA ESI,[ESP + 0x24]                ; 0044153a
    PUSH EAX                            ; 0044153e
    LEA EAX,[ESP + 0x34]                ; 0044153f
    MOV ECX,dword ptr [0x00612560]      ; 00441543 | DAT_00612560
    PUSH EAX                            ; 00441549
    MOVSD ES:EDI,ESI                    ; 0044154a
    MOVSD ES:EDI,ESI                    ; 0044154b
    MOVSD ES:EDI,ESI                    ; 0044154c
    PUSH ECX                            ; 0044154d
    XOR ESI,ESI                         ; 0044154e
    XOR EDI,EDI                         ; 00441550
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850 ; 00441552
        ;   XREF to: 00483850 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00483850(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    MOV EDX,0xc                         ; 00441557
    ADD ESP,0xc                         ; 0044155c
    MOV ECX,0xffffffff                  ; 0044155f
    MOV dword ptr [ESP + 0x54],EBX      ; 00441564
    MOV dword ptr [ESP + 0x50],ESI      ; 00441568
    MOV dword ptr [ESP + 0x4c],EDX      ; 0044156c
    MOV dword ptr [ESP + 0x58],ECX      ; 00441570
    MOV EAX,dword ptr [ESP + 0x50]      ; 00441574
        ;   Label: LAB_00441574
    MOV dword ptr [ESP + 0x5c],EAX      ; 00441578
    FILD dword ptr [ESP + 0x5c]         ; 0044157c
    FMUL float ptr [0x005d68d4]         ; 00441580 | DAT_005d68d4
    FMUL float ptr [0x005d68d8]         ; 00441586 | DAT_005d68d8
    FLD float ptr [EBP + 0x14]          ; 0044158c
    FLD ST1                             ; 0044158f
    FSIN                                ; 00441591
    FXCH ST2                            ; 00441593
    FCOS                                ; 00441595
    FXCH ST2                            ; 00441597
    FMULP                               ; 00441599
    FSTP float ptr [ESP + 0xc]          ; 0044159b
    FMUL float ptr [EBP + 0x18]         ; 0044159f
    MOV EDX,dword ptr [0x00612560]      ; 004415a2 | DAT_00612560
    XOR EBX,EBX                         ; 004415a8
    LEA EAX,[ESP + 0xc]                 ; 004415aa
    MOV dword ptr [ESP + 0x14],EBX      ; 004415ae
    LEA EBX,[ESP + 0x18]                ; 004415b2
    FSTP float ptr [ESP + 0x10]         ; 004415b6
    FLD float ptr [EAX]                 ; 004415ba
    FMUL float ptr [0x005fd8d0]         ; 004415bc | DAT_005fd8d0
    FISTP dword ptr [EBX]               ; 004415c2
    FLD float ptr [EAX + 0x4]           ; 004415c4
    FMUL float ptr [0x005fd8d0]         ; 004415c7 | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x4]         ; 004415cd
    FLD float ptr [EAX + 0x8]           ; 004415d0
    FMUL float ptr [0x005fd8d0]         ; 004415d3 | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x8]         ; 004415d9
    LEA EAX,[ESP + 0x18]                ; 004415dc
    PUSH EAX                            ; 004415e0
    MOV EAX,dword ptr [EDX]             ; 004415e1
    ADD EAX,EDI                         ; 004415e3
    PUSH EAX                            ; 004415e5
    CALL engine_special.cpp_FUN_00580173 ; 004415e6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004415eb
    MOV EAX,dword ptr [EBP + 0x44]      ; 004415ee
    MOV dword ptr [ESP + 0x14],EAX      ; 004415f1
    LEA EAX,[ESI + 0xd]                 ; 004415f5
    MOV EBX,ESP                         ; 004415f8
    MOV dword ptr [ESP + 0x48],EAX      ; 004415fa
    LEA EAX,[ESP + 0xc]                 ; 004415fe
    MOV EDX,dword ptr [0x00612560]      ; 00441602 | DAT_00612560
    FLD float ptr [EAX]                 ; 00441608
    FMUL float ptr [0x005fd8d0]         ; 0044160a | DAT_005fd8d0
    FISTP dword ptr [EBX]               ; 00441610
    FLD float ptr [EAX + 0x4]           ; 00441612
    FMUL float ptr [0x005fd8d0]         ; 00441615 | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x4]         ; 0044161b
    FLD float ptr [EAX + 0x8]           ; 0044161e
    FMUL float ptr [0x005fd8d0]         ; 00441621 | DAT_005fd8d0
    FISTP dword ptr [EBX + 0x8]         ; 00441627
    MOV EAX,ESP                         ; 0044162a
    PUSH EAX                            ; 0044162c
    MOV EAX,dword ptr [EDX]             ; 0044162d
    ADD EAX,dword ptr [ESP + 0x58]      ; 0044162f
    PUSH EAX                            ; 00441633
    CALL engine_special.cpp_FUN_00580173 ; 00441634
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 00441639
    TEST ESI,ESI                        ; 0044163c
    JG 0x00441693                       ; 0044163e
        ;   XREF to: 00441693 (CONDITIONAL_JUMP)  ; LAB_00441693
    MOV ECX,dword ptr [ESP + 0x50]      ; 00441640
        ;   Label: LAB_00441640
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00441644
    MOV EAX,dword ptr [ESP + 0x58]      ; 00441648
    MOV EDX,dword ptr [ESP + 0x54]      ; 0044164c
    ADD EDI,0x30                        ; 00441650
    INC ESI                             ; 00441653
    ADD ECX,0x2                         ; 00441654
    INC EBX                             ; 00441657
    INC EAX                             ; 00441658
    ADD EDX,0x30                        ; 00441659
    MOV dword ptr [ESP + 0x50],ECX      ; 0044165c
    MOV dword ptr [ESP + 0x4c],EBX      ; 00441660
    MOV dword ptr [ESP + 0x58],EAX      ; 00441664
    MOV dword ptr [ESP + 0x54],EDX      ; 00441668
    CMP ESI,0xc                         ; 0044166c
    JLE 0x00441574                      ; 0044166f
        ;   XREF to: 00441574 (CONDITIONAL_JUMP)  ; LAB_00441574
    CMP dword ptr [ESP + 0x7c],0x0      ; 00441675
    JNZ 0x004416da                      ; 0044167a
        ;   XREF to: 004416da (CONDITIONAL_JUMP)  ; LAB_004416da
    MOV ESI,dword ptr [0x00612560]      ; 0044167c | DAT_00612560
        ;   Label: LAB_0044167c
    PUSH ESI                            ; 00441682
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 00441683
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 00441688
    ADD ESP,0x60                        ; 0044168b
    POP EBP                             ; 0044168e
    POP EDI                             ; 0044168f
    POP ESI                             ; 00441690
    POP EBX                             ; 00441691
    RET                                 ; 00441692
    MOV ECX,dword ptr [ESP + 0x48]      ; 00441693
        ;   Label: LAB_00441693
    PUSH ECX                            ; 00441697
    PUSH ESI                            ; 00441698
    MOV EBX,dword ptr [0x00612560]      ; 00441699 | DAT_00612560
    PUSH EBX                            ; 0044169f
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 ; 004416a0
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 004416a5
    MOV EAX,dword ptr [ESP + 0x58]      ; 004416a8
    PUSH EAX                            ; 004416ac
    PUSH ESI                            ; 004416ad
    MOV EDX,dword ptr [0x00612560]      ; 004416ae | DAT_00612560
    PUSH EDX                            ; 004416b4
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 ; 004416b5
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 004416ba
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004416bd
    PUSH ECX                            ; 004416c1
    MOV EBX,dword ptr [ESP + 0x4c]      ; 004416c2
    PUSH EBX                            ; 004416c6
    MOV EAX,[0x00612560]                ; 004416c7 | DAT_00612560
    PUSH EAX                            ; 004416cc
    CALL engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 ; 004416cd
        ;   XREF to: 00483e70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70(CDemonRenderer * this_ptr, int vertex_index1, int vertex_index2)
    ADD ESP,0xc                         ; 004416d2
    JMP 0x00441640                      ; 004416d5
        ;   XREF to: 00441640 (UNCONDITIONAL_JUMP)  ; LAB_00441640
    MOV ECX,dword ptr [0x0061abc0]      ; 004416da | g_CEditorToolsPtr
        ;   Label: LAB_004416da
    PUSH ECX                            ; 004416e0
    CALL shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00497830 ; 004416e1
        ;   XREF to: 00497830 (UNCONDITIONAL_CALL)  ; uint shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00497830(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 004416e6
    FLD float ptr [EBP + 0x14]          ; 004416e9
    PUSH EAX                            ; 004416ec
    FADD float ptr [EBP + 0x18]         ; 004416ed
    SUB ESP,0x4                         ; 004416f0
    MOV EBX,dword ptr [0x0061abc0]      ; 004416f3 | g_CEditorToolsPtr
    FSTP float ptr [ESP]                ; 004416f9
    PUSH EBX                            ; 004416fc
    CALL shape_edittool.cpp_FUN_00498360 ; 004416fd
        ;   XREF to: 00498360 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_FUN_00498360(CEditorTools * this_ptr, float scale_factor, int text_color)
    ADD ESP,0xc                         ; 00441702
    JMP 0x0044167c                      ; 00441705
        ;   XREF to: 0044167c (UNCONDITIONAL_JUMP)  ; LAB_0044167c

