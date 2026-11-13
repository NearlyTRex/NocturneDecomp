; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_clipToUserPlane_FUN_00517520(float *vertices,int vertex_count,float *out,int *out_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; float *          Stack[0xc]:4   out
; int *            Stack[0x10]:4   out_count
;
; XREF[1]:
;   engine_mini3d.cpp_userClipPolyList_FUN_00517660 at 00517803
;
; Referenced Globals:
;   undefined1* PTR_caseD_1_0051750c = 0051760a
;   undefined1* PTR_caseD_3_00517514 = 005175ec
;   undefined4 DAT_01d25f1c
;   undefined4 DAT_01d25f20
;   undefined4 DAT_01d25f24
;   undefined4 DAT_01d25f28
;
; Called Functions:
;   engine_mini3d.cpp_intersectUserClipPlane_FUN_005173e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517520
        ;   Label: engine_mini3d.cpp_clipToUserPlane_FUN_00517520
    PUSH ESI                            ; 00517521
    PUSH EDI                            ; 00517522
    PUSH EBP                            ; 00517523
    SUB ESP,0x8                         ; 00517524
    MOV EBX,dword ptr [ESP + 0x28]      ; 00517527
    MOV ECX,dword ptr [ESP + 0x20]      ; 0051752b
    XOR EDX,EDX                         ; 0051752f
    MOV dword ptr [EBX],0x0             ; 00517531
    MOV dword ptr [ESP],EDX             ; 00517537
    TEST ECX,ECX                        ; 0051753a
    JLE 0x00517602                      ; 0051753c
        ;   XREF to: 00517602 (CONDITIONAL_JUMP)  ; LAB_00517602
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00517542
    MOV ECX,dword ptr [ESP]             ; 00517546
        ;   Label: LAB_00517546
    MOV EAX,dword ptr [ESP + 0x20]      ; 00517549
    INC ECX                             ; 0051754d
    CMP ECX,EAX                         ; 0051754e
    JNZ 0x00517554                      ; 00517550
        ;   XREF to: 00517554 (CONDITIONAL_JUMP)  ; LAB_00517554
    XOR ECX,EAX                         ; 00517552
    IMUL ECX,ECX,0x24                   ; 00517554
        ;   Label: LAB_00517554
    FLD float ptr [0x01d25f20]          ; 00517557 | DAT_01d25f20
    FMUL float ptr [EBP + 0x4]          ; 0051755d
    FLD float ptr [0x01d25f1c]          ; 00517560 | DAT_01d25f1c
    FMUL float ptr [EBP]                ; 00517566
    FADDP                               ; 00517569
    FLD float ptr [0x01d25f24]          ; 0051756b | DAT_01d25f24
    FMUL float ptr [EBP + 0x8]          ; 00517571
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00517574
    MOV EDX,EBP                         ; 00517578
    ADD EDI,ECX                         ; 0051757a
    FADDP                               ; 0051757c
    MOV dword ptr [ESP + 0x4],EDI       ; 0051757e
    FADD float ptr [0x01d25f28]         ; 00517582 | DAT_01d25f28
    XOR ECX,ECX                         ; 00517588
    FLDZ                                ; 0051758a
    FCOMPP                              ; 0051758c
    FNSTSW AX                           ; 0051758e
    SAHF                                ; 00517590
    JNC 0x00517598                      ; 00517591
        ;   XREF to: 00517598 (CONDITIONAL_JUMP)  ; LAB_00517598
    MOV ECX,0x1                         ; 00517593
    MOV EDI,dword ptr [ESP + 0x4]       ; 00517598
        ;   Label: LAB_00517598
    FLD float ptr [0x01d25f20]          ; 0051759c | DAT_01d25f20
    FMUL float ptr [EDI + 0x4]          ; 005175a2
    FLD float ptr [0x01d25f1c]          ; 005175a5 | DAT_01d25f1c
    FMUL float ptr [EDI]                ; 005175ab
    FADDP                               ; 005175ad
    FLD float ptr [0x01d25f24]          ; 005175af | DAT_01d25f24
    FMUL float ptr [EDI + 0x8]          ; 005175b5
    FADDP                               ; 005175b8
    FADD float ptr [0x01d25f28]         ; 005175ba | DAT_01d25f28
    FLDZ                                ; 005175c0
    FCOMPP                              ; 005175c2
    FNSTSW AX                           ; 005175c4
    SAHF                                ; 005175c6
    JNC 0x005175cc                      ; 005175c7
        ;   XREF to: 005175cc (CONDITIONAL_JUMP)  ; LAB_005175cc
    OR CL,0x2                           ; 005175c9
    CMP ECX,0x3                         ; 005175cc
        ;   Label: LAB_005175cc
    JA 0x005175ec                       ; 005175cf
        ;   XREF to: 005175ec (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x517508]  ; 005175d1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [EBX],0x24       ; 005175d8
        ;   Label: caseD_0
    MOV ESI,dword ptr [ESP + 0x24]      ; 005175db
    MOV ECX,0x9                         ; 005175df
    ADD EDI,ESI                         ; 005175e4
    MOV ESI,EDX                         ; 005175e6
    MOVSD.REP ES:EDI,ESI                ; 005175e8
    INC dword ptr [EBX]                 ; 005175ea
    MOV ESI,dword ptr [ESP]             ; 005175ec
        ;   Label: caseD_3
    MOV EDI,dword ptr [ESP + 0x20]      ; 005175ef
    INC ESI                             ; 005175f3
    ADD EBP,0x24                        ; 005175f4
    MOV dword ptr [ESP],ESI             ; 005175f7
    CMP ESI,EDI                         ; 005175fa
    JL 0x00517546                       ; 005175fc
        ;   XREF to: 00517546 (CONDITIONAL_JUMP)  ; LAB_00517546
    ADD ESP,0x8                         ; 00517602
        ;   Label: LAB_00517602
    POP EBP                             ; 00517605
    POP EDI                             ; 00517606
    POP ESI                             ; 00517607
    POP EBX                             ; 00517608
    RET                                 ; 00517609
    IMUL ECX,dword ptr [EBX],0x24       ; 0051760a
        ;   Label: caseD_1
    ADD ECX,dword ptr [ESP + 0x24]      ; 0051760d
    PUSH ECX                            ; 00517611
    PUSH EDX                            ; 00517612
    MOV EAX,dword ptr [ESP + 0xc]       ; 00517613
    PUSH EAX                            ; 00517617
    CALL engine_mini3d.cpp_intersectUserClipPlane_FUN_005173e0 ; 00517618
        ;   XREF to: 005173e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectUserClipPlane_FUN_005173e0(float * from, float * to, float * out)
    MOV EDX,dword ptr [EBX]             ; 0051761d
    INC EDX                             ; 0051761f
    ADD ESP,0xc                         ; 00517620
    MOV dword ptr [EBX],EDX             ; 00517623
    JMP 0x005175ec                      ; 00517625
        ;   XREF to: 005175ec (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [EBX],0x24       ; 00517627
        ;   Label: caseD_2
    MOV ESI,dword ptr [ESP + 0x24]      ; 0051762a
    MOV ECX,0x9                         ; 0051762e
    ADD EDI,ESI                         ; 00517633
    MOV ESI,EDX                         ; 00517635
    MOVSD.REP ES:EDI,ESI                ; 00517637
    MOV EDI,dword ptr [EBX]             ; 00517639
    INC EDI                             ; 0051763b
    MOV dword ptr [EBX],EDI             ; 0051763c
    IMUL ECX,EDI,0x24                   ; 0051763e
    ADD ECX,dword ptr [ESP + 0x24]      ; 00517641
    PUSH ECX                            ; 00517645
    MOV EDI,dword ptr [ESP + 0x8]       ; 00517646
    PUSH EDI                            ; 0051764a
    PUSH EDX                            ; 0051764b
    CALL engine_mini3d.cpp_intersectUserClipPlane_FUN_005173e0 ; 0051764c
        ;   XREF to: 005173e0 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_intersectUserClipPlane_FUN_005173e0(float * from, float * to, float * out)
    MOV EAX,dword ptr [EBX]             ; 00517651
    INC EAX                             ; 00517653
    ADD ESP,0xc                         ; 00517654
    MOV dword ptr [EBX],EAX             ; 00517657
    JMP 0x005175ec                      ; 00517659
        ;   XREF to: 005175ec (UNCONDITIONAL_JUMP)  ; caseD_3

