; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_drender_cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_01b4d76c
;   undefined4 DAT_01b4d770
;   undefined4 DAT_01c00c7c
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460590
        ;   Label: engine_drender.cpp_CDemonRenderer_renderOverlayPoly_FUN_00460590
    PUSH ESI                            ; 00460591
    PUSH EDI                            ; 00460592
    PUSH EBP                            ; 00460593
    SUB ESP,0x4                         ; 00460594
    MOV EBX,dword ptr [ESP + 0x18]      ; 00460597
    CMP dword ptr [EBX + 0xc],0x0       ; 0046059b
    JNZ 0x0046063e                      ; 0046059f
        ;   XREF to: 0046063e (CONDITIONAL_JUMP)  ; LAB_0046063e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004605a5
        ;   Label: LAB_004605a5
    MOV ECX,0xffffffff                  ; 004605a9
    XOR EDX,EDX                         ; 004605ae
    MOV ESI,dword ptr [EAX + 0x4]       ; 004605b0
    MOV dword ptr [ESP],ECX             ; 004605b3
    TEST ESI,ESI                        ; 004605b6
    JLE 0x004605f0                      ; 004605b8
        ;   XREF to: 004605f0 (CONDITIONAL_JUMP)  ; LAB_004605f0
    XOR ECX,ECX                         ; 004605ba
    MOV ESI,dword ptr [EAX + 0x18]      ; 004605bc
        ;   Label: LAB_004605bc
    MOV dword ptr [ECX + 0x1b4d76c],ESI ; 004605bf | DAT_01b4d76c | DAT_01b4d770
    IMUL ESI,ESI,0x30                   ; 004605c5
    MOV EDI,dword ptr [EBX]             ; 004605c8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 004605ca
    MOV EDI,dword ptr [ESP]             ; 004605ce
    ADD ECX,0x4                         ; 004605d1
    AND EDI,ESI                         ; 004605d4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004605d6
    ADD EAX,0xc                         ; 004605da
    INC EDX                             ; 004605dd
    MOV EBP,dword ptr [ESI + 0x4]       ; 004605de
    MOV dword ptr [ESP],EDI             ; 004605e1
    CMP EDX,EBP                         ; 004605e4
    JL 0x004605bc                       ; 004605e6
        ;   XREF to: 004605bc (CONDITIONAL_JUMP)  ; LAB_004605bc
    LEA EAX,[EAX]                       ; 004605e8
    MOV EDX,EDX                         ; 004605ee
    TEST byte ptr [ESP + 0x3],0x80      ; 004605f0
        ;   Label: LAB_004605f0
    JZ 0x004605fd                       ; 004605f5
        ;   XREF to: 004605fd (CONDITIONAL_JUMP)  ; LAB_004605fd
    TEST byte ptr [ESP],0x1f            ; 004605f7
    JNZ 0x00460636                      ; 004605fb
        ;   XREF to: 00460636 (CONDITIONAL_JUMP)  ; LAB_00460636
    CMP dword ptr [EBX + 0x4],0x0       ; 004605fd
        ;   Label: LAB_004605fd
    JZ 0x00460657                       ; 00460601
        ;   XREF to: 00460657 (CONDITIONAL_JUMP)  ; LAB_00460657
    XOR ESI,ESI                         ; 00460603
    MOV ECX,0x463a79                    ; 00460605
    MOV dword ptr [0x01c039a0],ESI      ; 0046060a | DAT_01c039a0
    MOV dword ptr [0x01c039a4],ESI      ; 00460610 | DAT_01c039a4
    MOV dword ptr [0x01c00c7c],ECX      ; 00460616 | DAT_01c00c7c
    LEA EAX,[EAX]                       ; 0046061c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460620
        ;   Label: LAB_00460620
    PUSH 0x1b4d76c                      ; 00460624 | DAT_01b4d76c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00460629
    PUSH EDX                            ; 0046062c
    PUSH EBX                            ; 0046062d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0046062e
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 00460633
    ADD ESP,0x4                         ; 00460636
        ;   Label: LAB_00460636
    POP EBP                             ; 00460639
    POP EDI                             ; 0046063a
    POP ESI                             ; 0046063b
    POP EBX                             ; 0046063c
    RET                                 ; 0046063d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046063e
        ;   Label: LAB_0046063e
    ADD EAX,0x8                         ; 00460642
    PUSH EAX                            ; 00460645
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00460646
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0046064b
    TEST EAX,EAX                        ; 0046064e
    JZ 0x00460636                       ; 00460650
        ;   XREF to: 00460636 (CONDITIONAL_JUMP)  ; LAB_00460636
    JMP 0x004605a5                      ; 00460652
        ;   XREF to: 004605a5 (UNCONDITIONAL_JUMP)  ; LAB_004605a5
    CMP dword ptr [0x005b7624],0x20     ; 00460657 | DAT_005b7624
        ;   Label: LAB_00460657
    JNZ 0x004606c6                      ; 0046065e
        ;   XREF to: 004606c6 (CONDITIONAL_JUMP)  ; LAB_004606c6
    MOV dword ptr [0x01c00c7c],0x52f031 ; 00460660 | DAT_01c00c7c
    MOV EDI,0x327                       ; 0046066a
        ;   Label: LAB_0046066a
    XOR EBP,EBP                         ; 0046066f
    MOV EAX,dword ptr [EBX + 0x20]      ; 00460671
    MOV dword ptr [0x01c039a4],EBP      ; 00460674 | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDI      ; 0046067a | DAT_01c039a0
    TEST EAX,EAX                        ; 00460680
    JNZ 0x00460620                      ; 00460682
        ;   XREF to: 00460620 (CONDITIONAL_JUMP)  ; LAB_00460620
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00460684
    MOV EDX,dword ptr [EAX + 0x4]       ; 00460688
    XOR ECX,ECX                         ; 0046068b
    TEST EDX,EDX                        ; 0046068d
    JLE 0x00460620                      ; 0046068f
        ;   XREF to: 00460620 (CONDITIONAL_JUMP)  ; LAB_00460620
    XOR EDX,EDX                         ; 00460691
    MOV ESI,dword ptr [EDX + 0x1b4d76c] ; 00460693 | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_00460693
    IMUL ESI,ESI,0x30                   ; 00460699
    MOV EDI,dword ptr [EBX]             ; 0046069c
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046069e
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 004606a1
    MOV EDI,dword ptr [EBX]             ; 004606a5
    ADD EDI,ESI                         ; 004606a7
    MOV ESI,dword ptr [EAX + 0x20]      ; 004606a9
    MOV dword ptr [EDI + 0x1c],ESI      ; 004606ac
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004606af
    ADD EAX,0xc                         ; 004606b3
    INC ECX                             ; 004606b6
    MOV EBP,dword ptr [ESI + 0x4]       ; 004606b7
    ADD EDX,0x4                         ; 004606ba
    CMP ECX,EBP                         ; 004606bd
    JL 0x00460693                       ; 004606bf
        ;   XREF to: 00460693 (CONDITIONAL_JUMP)  ; LAB_00460693
    JMP 0x00460620                      ; 004606c1
        ;   XREF to: 00460620 (UNCONDITIONAL_JUMP)  ; LAB_00460620
    MOV dword ptr [0x01c00c7c],0x52f823 ; 004606c6 | DAT_01c00c7c
        ;   Label: LAB_004606c6
    JMP 0x0046066a                      ; 004606d0
        ;   XREF to: 0046066a (UNCONDITIONAL_JUMP)  ; LAB_0046066a

