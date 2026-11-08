; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004406e0(undefined4 param_1,int param_2,int param_3)
;
;
; Called Functions:
;   FUN_004404e0
;   FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004406e0
        ;   Label: FUN_004406e0
    PUSH ESI                            ; 004406e1
    PUSH EDI                            ; 004406e2
    SUB ESP,0x4                         ; 004406e3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004406e6
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004406ea
    MOV ESI,dword ptr [ESP + 0x18]      ; 004406ee
    TEST EBX,EBX                        ; 004406f2
    JZ 0x00440736                       ; 004406f4
        ;   XREF to: 00440736 (CONDITIONAL_JUMP)  ; LAB_00440736
    JLE 0x004406f9                      ; 004406f6
        ;   XREF to: 004406f9 (CONDITIONAL_JUMP)  ; LAB_004406f9
        ;   Label: LAB_004406f6
    DEC EBX                             ; 004406f8
    PUSH ESI                            ; 004406f9
        ;   Label: LAB_004406f9
    CALL FUN_005a32b0                   ; 004406fa
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 004406ff
    MOV dword ptr [ESP],EAX             ; 00440702
    TEST EAX,EAX                        ; 00440705
    JGE 0x00440723                      ; 00440707
        ;   XREF to: 00440723 (CONDITIONAL_JUMP)  ; LAB_00440723
    TEST EBX,EBX                        ; 00440709
    JL 0x00440716                       ; 0044070b
        ;   XREF to: 00440716 (CONDITIONAL_JUMP)  ; LAB_00440716
    XOR EAX,EAX                         ; 0044070d
        ;   Label: LAB_0044070d
    ADD ESP,0x4                         ; 0044070f
        ;   Label: LAB_0044070f
    POP EDI                             ; 00440712
    POP ESI                             ; 00440713
    POP EBX                             ; 00440714
    RET                                 ; 00440715
    TEST byte ptr [ESI + 0xc],0x20      ; 00440716
        ;   Label: LAB_00440716
    JNZ 0x0044070d                      ; 0044071a
        ;   XREF to: 0044070d (CONDITIONAL_JUMP)  ; LAB_0044070d
    MOV EAX,0x1                         ; 0044071c
    JMP 0x0044070f                      ; 00440721
        ;   XREF to: 0044070f (UNCONDITIONAL_JUMP)  ; LAB_0044070f
    XOR EAX,EAX                         ; 00440723
        ;   Label: LAB_00440723
    MOV AL,byte ptr [ESP]               ; 00440725
    PUSH EAX                            ; 00440728
    PUSH EDI                            ; 00440729
    CALL FUN_004404e0                   ; 0044072a
        ;   XREF to: 004404e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004404e0()
    ADD ESP,0x8                         ; 0044072f
    TEST EBX,EBX                        ; 00440732
    JNZ 0x004406f6                      ; 00440734
        ;   XREF to: 004406f6 (CONDITIONAL_JUMP)  ; LAB_004406f6
    MOV EAX,0x1                         ; 00440736
        ;   Label: LAB_00440736
    ADD ESP,0x4                         ; 0044073b
    POP EDI                             ; 0044073e
    POP ESI                             ; 0044073f
    POP EBX                             ; 00440740
    RET                                 ; 00440741

