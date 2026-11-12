; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_FUN_0047a480(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 at 00481b0a
;   engine_drender.cpp_CDemonRenderer_renderFaceList_FUN_004844f0 at 00484681
;   engine_drender.cpp_CDemonRenderer_renderFacetList_FUN_00484280 at 0048442c
;
; Referenced Globals:
;   undefined4 DAT_00629014
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629020
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629038
;   undefined4 DAT_0062903c
;   undefined4 DAT_00629040
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01bc0784
;   undefined4 DAT_01bc0788
;   ... and 8 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_special.cpp_drawPolygon2_FUN_00582370
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047a480
        ;   Label: core_dpart.cpp_FUN_0047a480
    PUSH ESI                            ; 0047a481
    PUSH EDI                            ; 0047a482
    PUSH EBP                            ; 0047a483
    SUB ESP,0x5c                        ; 0047a484
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a487 | DAT_01bc0784
    CMP dword ptr [0x00713a7c],0x0      ; 0047a48d | DAT_00713a7c
    JNZ 0x0047a517                      ; 0047a494
        ;   XREF to: 0047a517 (CONDITIONAL_JUMP)  ; LAB_0047a517
    MOV ECX,dword ptr [0x01e7dac8]      ; 0047a49a | DAT_01e7dac8
        ;   Label: LAB_0047a49a
    MOV EBX,dword ptr [0x01c50948]      ; 0047a4a0 | DAT_01c50948
    INC ECX                             ; 0047a4a6
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a4a7 | DAT_01bc0784
    MOV dword ptr [0x01e7dac8],ECX      ; 0047a4ad | DAT_01e7dac8
    TEST EBX,EBX                        ; 0047a4b3
    JZ 0x0047a57f                       ; 0047a4b5
        ;   XREF to: 0047a57f (CONDITIONAL_JUMP)  ; LAB_0047a57f
    CMP dword ptr [0x00713a74],0x0      ; 0047a4bb | DAT_00713a74
    JNZ 0x0047a57f                      ; 0047a4c2
        ;   XREF to: 0047a57f (CONDITIONAL_JUMP)  ; LAB_0047a57f
    MOV ECX,dword ptr [ESP + 0x74]      ; 0047a4c8
    XOR EBX,EBX                         ; 0047a4cc
    TEST ECX,ECX                        ; 0047a4ce
    JLE 0x0047a4f0                      ; 0047a4d0
        ;   XREF to: 0047a4f0 (CONDITIONAL_JUMP)  ; LAB_0047a4f0
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047a4d2
    IMUL EDX,dword ptr [EAX],0x30       ; 0047a4d6
        ;   Label: LAB_0047a4d6
    INC EBX                             ; 0047a4d9
    ADD EDX,0x629014                    ; 0047a4da | DAT_00629014
    MOV dword ptr [ESP + EBX*0x4 + -0x4],EDX ; 0047a4e0
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047a4e4
    ADD EAX,0x4                         ; 0047a4e8
    CMP EBX,EDX                         ; 0047a4eb
    JL 0x0047a4d6                       ; 0047a4ed
        ;   XREF to: 0047a4d6 (CONDITIONAL_JUMP)  ; LAB_0047a4d6
    NOP                                 ; 0047a4ef
    MOV ECX,dword ptr [0x01c51d14]      ; 0047a4f0 | DAT_01c51d14
        ;   Label: LAB_0047a4f0
    PUSH ECX                            ; 0047a4f6
    MOV EBX,dword ptr [ESP + 0x78]      ; 0047a4f7
    PUSH EBX                            ; 0047a4fb
    LEA EAX,[ESP + 0x8]                 ; 0047a4fc
    PUSH EAX                            ; 0047a500
    CALL engine_special.cpp_drawPolygon2_FUN_00582370 ; 0047a501
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00582370(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    ADD ESP,0xc                         ; 0047a506
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a509 | DAT_01bc0784
        ;   Label: LAB_0047a509
    ADD ESP,0x5c                        ; 0047a50f
    POP EBP                             ; 0047a512
    POP EDI                             ; 0047a513
    POP ESI                             ; 0047a514
    POP EBX                             ; 0047a515
    RET                                 ; 0047a516
    MOV EDX,dword ptr [ESP + 0x70]      ; 0047a517
        ;   Label: LAB_0047a517
    MOV EDX,dword ptr [EDX + 0x8]       ; 0047a51b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047a51e
    SUB EAX,EDX                         ; 0047a525
    SHL EAX,0x4                         ; 0047a527
    MOV EDX,dword ptr [ESP + 0x70]      ; 0047a52a
    ADD EAX,0x629014                    ; 0047a52e | DAT_00629014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0047a533
    PUSH EAX                            ; 0047a536
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047a537
    SUB EAX,EDX                         ; 0047a53e
    SHL EAX,0x4                         ; 0047a540
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047a543
    ADD EAX,0x629014                    ; 0047a547 | DAT_00629014
    MOV EDX,dword ptr [EDX]             ; 0047a54c
    PUSH EAX                            ; 0047a54e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0047a54f
    SUB EAX,EDX                         ; 0047a556
    SHL EAX,0x4                         ; 0047a558
    ADD EAX,0x629014                    ; 0047a55b | DAT_00629014
    PUSH EAX                            ; 0047a560
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0047a561
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0047a566
    TEST EAX,EAX                        ; 0047a569
    JNZ 0x0047a49a                      ; 0047a56b
        ;   XREF to: 0047a49a (CONDITIONAL_JUMP)  ; LAB_0047a49a
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a571 | DAT_01bc0784
    ADD ESP,0x5c                        ; 0047a577
    POP EBP                             ; 0047a57a
    POP EDI                             ; 0047a57b
    POP ESI                             ; 0047a57c
    POP EBX                             ; 0047a57d
    RET                                 ; 0047a57e
    MOV EDI,0x4b0                       ; 0047a57f
        ;   Label: LAB_0047a57f
    XOR EBP,EBP                         ; 0047a584
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047a586
    MOV dword ptr [0x01bc0c8c],EBP      ; 0047a58a | DAT_01bc0c8c
    MOV dword ptr [ESP + 0x48],EBP      ; 0047a590
    MOV dword ptr [0x01bc0c88],EDI      ; 0047a594 | DAT_01bc0c88
    TEST EDX,EDX                        ; 0047a59a
    JLE 0x0047a60a                      ; 0047a59c
        ;   XREF to: 0047a60a (CONDITIONAL_JUMP)  ; LAB_0047a60a
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047a59e
    MOV dword ptr [ESP + 0x44],EAX      ; 0047a5a2
    MOV EAX,dword ptr [ESP + 0x48]      ; 0047a5a6
        ;   Label: LAB_0047a5a6
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047a5aa
    INC EAX                             ; 0047a5ae
    CMP EAX,EDX                         ; 0047a5af
    JL 0x0047a5b5                       ; 0047a5b1
        ;   XREF to: 0047a5b5 (CONDITIONAL_JUMP)  ; LAB_0047a5b5
    XOR EAX,EAX                         ; 0047a5b3
    MOV ECX,dword ptr [ESP + 0x70]      ; 0047a5b5
        ;   Label: LAB_0047a5b5
    SHL EAX,0x2                         ; 0047a5b9
    ADD EAX,ECX                         ; 0047a5bc
    IMUL ECX,dword ptr [EAX],0x30       ; 0047a5be
    MOV EAX,dword ptr [ESP + 0x44]      ; 0047a5c1
    IMUL EBX,dword ptr [EAX],0x30       ; 0047a5c5
    ADD ECX,0x629014                    ; 0047a5c8 | DAT_00629014
    ADD EBX,0x629014                    ; 0047a5ce | DAT_00629014
    MOV dword ptr [ESP + 0x50],ECX      ; 0047a5d4
    MOV EDX,dword ptr [ECX + 0x14]      ; 0047a5d8 | DAT_00629028
    MOV EAX,dword ptr [EBX + 0x14]      ; 0047a5db | DAT_00629028
    SAR EDX,0x10                        ; 0047a5de
    SAR EAX,0x10                        ; 0047a5e1
    MOV ESI,EBX                         ; 0047a5e4
    CMP EAX,EDX                         ; 0047a5e6
    JNZ 0x0047a7f8                      ; 0047a5e8
        ;   XREF to: 0047a7f8 (CONDITIONAL_JUMP)  ; LAB_0047a7f8
    MOV EBX,dword ptr [ESP + 0x44]      ; 0047a5ee
        ;   Label: LAB_0047a5ee
    MOV ESI,dword ptr [ESP + 0x48]      ; 0047a5f2
    MOV EDI,dword ptr [ESP + 0x74]      ; 0047a5f6
    ADD EBX,0x4                         ; 0047a5fa
    INC ESI                             ; 0047a5fd
    MOV dword ptr [ESP + 0x44],EBX      ; 0047a5fe
    MOV dword ptr [ESP + 0x48],ESI      ; 0047a602
    CMP ESI,EDI                         ; 0047a606
    JL 0x0047a5a6                       ; 0047a608
        ;   XREF to: 0047a5a6 (CONDITIONAL_JUMP)  ; LAB_0047a5a6
    MOV EBX,0x1bc0788                   ; 0047a60a
        ;   Label: LAB_0047a60a
    XOR EAX,EAX                         ; 0047a60f
    MOV ESI,dword ptr [0x01bc0c88]      ; 0047a611 | DAT_01bc0c88
    MOV [0x01bc123c],EAX                ; 0047a617 | DAT_01bc123c
    TEST EBP,EBP                        ; 0047a61c
    JLE 0x0047aa6d                      ; 0047a61e
        ;   XREF to: 0047aa6d (CONDITIONAL_JUMP)  ; LAB_0047aa6d
    CMP ESI,dword ptr [EBX]             ; 0047a624 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a624
    JNZ 0x0047aa61                      ; 0047a626
        ;   XREF to: 0047aa61 (CONDITIONAL_JUMP)  ; LAB_0047aa61
    TEST EBX,EBX                        ; 0047a62c
    JZ 0x0047aa61                       ; 0047a62e
        ;   XREF to: 0047aa61 (CONDITIONAL_JUMP)  ; LAB_0047aa61
    MOV dword ptr [ESP + 0x54],EBX      ; 0047a634 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a634
    MOV dword ptr [0x01bc0784],EBP      ; 0047a638 | DAT_01bc0784
    TEST EBX,EBX                        ; 0047a63e
    JZ 0x0047a509                       ; 0047a640
        ;   XREF to: 0047a509 (CONDITIONAL_JUMP)  ; LAB_0047a509
    MOV EAX,0x1bc0788                   ; 0047a646
    MOV ECX,dword ptr [0x01bc0c88]      ; 0047a64b | DAT_01bc0c88
    XOR EDX,EDX                         ; 0047a651
    TEST EBP,EBP                        ; 0047a653
    JLE 0x0047aa80                      ; 0047a655
        ;   XREF to: 0047aa80 (CONDITIONAL_JUMP)  ; LAB_0047aa80
    CMP ECX,dword ptr [EAX]             ; 0047a65b | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a65b
    JNZ 0x0047aa74                      ; 0047a65d
        ;   XREF to: 0047aa74 (CONDITIONAL_JUMP)  ; LAB_0047aa74
    CMP EAX,EBX                         ; 0047a663
    JZ 0x0047aa74                       ; 0047a665
        ;   XREF to: 0047aa74 (CONDITIONAL_JUMP)  ; LAB_0047aa74
    MOV dword ptr [ESP + 0x58],EAX      ; 0047a66b | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a66b
    MOV dword ptr [0x01bc0784],EBP      ; 0047a66f | DAT_01bc0784
    TEST EAX,EAX                        ; 0047a675
    JZ 0x0047a509                       ; 0047a677
        ;   XREF to: 0047a509 (CONDITIONAL_JUMP)  ; LAB_0047a509
    MOV EAX,[0x01bc0c88]                ; 0047a67d | DAT_01bc0c88
    MOV dword ptr [ESP + 0x4c],EAX      ; 0047a682
    MOV EDX,dword ptr [ESP + 0x54]      ; 0047a686
        ;   Label: LAB_0047a686
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047a68a
    MOV ESI,dword ptr [EDX + 0x4]       ; 0047a68e
    MOV dword ptr [0x01bc0784],EBP      ; 0047a691 | DAT_01bc0784
    CMP EAX,ESI                         ; 0047a697
    JL 0x0047a6d8                       ; 0047a699
        ;   XREF to: 0047a6d8 (CONDITIONAL_JUMP)  ; LAB_0047a6d8
    MOV ECX,dword ptr [ESP + 0x58]      ; 0047a69b
    MOV EBX,EAX                         ; 0047a69f
    MOV dword ptr [EDX],0xffffffff      ; 0047a6a1
    MOV EAX,0x1bc0788                   ; 0047a6a7
    XOR EDX,EDX                         ; 0047a6ac
    TEST EBP,EBP                        ; 0047a6ae
    JLE 0x0047aa93                      ; 0047a6b0
        ;   XREF to: 0047aa93 (CONDITIONAL_JUMP)  ; LAB_0047aa93
    CMP EBX,dword ptr [EAX]             ; 0047a6b6 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a6b6
    JNZ 0x0047aa87                      ; 0047a6b8
        ;   XREF to: 0047aa87 (CONDITIONAL_JUMP)  ; LAB_0047aa87
    CMP EAX,ECX                         ; 0047a6be
    JZ 0x0047aa87                       ; 0047a6c0
        ;   XREF to: 0047aa87 (CONDITIONAL_JUMP)  ; LAB_0047aa87
    MOV dword ptr [ESP + 0x54],EAX      ; 0047a6c6 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a6c6
    MOV dword ptr [0x01bc0784],EBP      ; 0047a6ca | DAT_01bc0784
    TEST EAX,EAX                        ; 0047a6d0
    JZ 0x0047a509                       ; 0047a6d2
        ;   XREF to: 0047a509 (CONDITIONAL_JUMP)  ; LAB_0047a509
    MOV EDX,dword ptr [ESP + 0x58]      ; 0047a6d8
        ;   Label: LAB_0047a6d8
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0047a6dc
    CMP EAX,dword ptr [EDX + 0x4]       ; 0047a6e0
    JL 0x0047a728                       ; 0047a6e3
        ;   XREF to: 0047a728 (CONDITIONAL_JUMP)  ; LAB_0047a728
    MOV ECX,dword ptr [ESP + 0x54]      ; 0047a6e5
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a6e9 | DAT_01bc0784
    MOV EBX,EAX                         ; 0047a6ef
    MOV dword ptr [EDX],0xffffffff      ; 0047a6f1
    MOV EAX,0x1bc0788                   ; 0047a6f7
    XOR EDX,EDX                         ; 0047a6fc
    TEST EBP,EBP                        ; 0047a6fe
    JLE 0x0047aaa6                      ; 0047a700
        ;   XREF to: 0047aaa6 (CONDITIONAL_JUMP)  ; LAB_0047aaa6
    CMP EBX,dword ptr [EAX]             ; 0047a706 | DAT_01bc0788 | DAT_01bc07d8
        ;   Label: LAB_0047a706
    JNZ 0x0047aa9a                      ; 0047a708
        ;   XREF to: 0047aa9a (CONDITIONAL_JUMP)  ; LAB_0047aa9a
    CMP EAX,ECX                         ; 0047a70e
    JZ 0x0047aa9a                       ; 0047a710
        ;   XREF to: 0047aa9a (CONDITIONAL_JUMP)  ; LAB_0047aa9a
    MOV dword ptr [ESP + 0x58],EAX      ; 0047a716 | DAT_01bc07d8 | DAT_01bc0788
        ;   Label: LAB_0047a716
    MOV dword ptr [0x01bc0784],EBP      ; 0047a71a | DAT_01bc0784
    TEST EAX,EAX                        ; 0047a720
    JZ 0x0047a509                       ; 0047a722
        ;   XREF to: 0047a509 (CONDITIONAL_JUMP)  ; LAB_0047a509
    MOV EDI,dword ptr [ESP + 0x58]      ; 0047a728
        ;   Label: LAB_0047a728
    MOV ESI,dword ptr [ESP + 0x54]      ; 0047a72c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0047a730
    CALL engine_special.cpp_FUN_00580127 ; 0047a734
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    CMP dword ptr [0x01bc123c],0x0      ; 0047a739 | DAT_01bc123c
    JNZ 0x0047a509                      ; 0047a740
        ;   XREF to: 0047a509 (CONDITIONAL_JUMP)  ; LAB_0047a509
    MOV EDX,dword ptr [ESP + 0x54]      ; 0047a746
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047a74a
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047a74e
    MOV EAX,dword ptr [EAX + 0xc]       ; 0047a751
    MOV EBX,dword ptr [EDX + 0x18]      ; 0047a754
    ADD ECX,EAX                         ; 0047a757
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0047a759
    MOV dword ptr [EDX + 0x8],ECX       ; 0047a75c
    ADD EBX,EAX                         ; 0047a75f
    MOV dword ptr [EDX + 0x18],EBX      ; 0047a761
    MOV ESI,dword ptr [EDX + 0x20]      ; 0047a764
    MOV EDI,dword ptr [EDX + 0x10]      ; 0047a767
    MOV ECX,dword ptr [EDX + 0x28]      ; 0047a76a
    MOV EAX,dword ptr [EDX + 0x24]      ; 0047a76d
    MOV EBX,dword ptr [EDX + 0x30]      ; 0047a770
    ADD ESI,EAX                         ; 0047a773
    MOV EAX,dword ptr [EDX + 0x14]      ; 0047a775
    MOV dword ptr [EDX + 0x20],ESI      ; 0047a778
    ADD EDI,EAX                         ; 0047a77b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0047a77d
    MOV dword ptr [EDX + 0x10],EDI      ; 0047a780
    ADD ECX,EAX                         ; 0047a783
    MOV EAX,dword ptr [EDX + 0x34]      ; 0047a785
    MOV dword ptr [EDX + 0x28],ECX      ; 0047a788
    ADD EBX,EAX                         ; 0047a78b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047a78d
    MOV dword ptr [EDX + 0x30],EBX      ; 0047a791
    MOV EDX,dword ptr [ESP + 0x58]      ; 0047a794
    MOV EAX,dword ptr [EAX + 0xc]       ; 0047a798
    MOV ESI,dword ptr [EDX + 0x8]       ; 0047a79b
    MOV EDI,dword ptr [EDX + 0x18]      ; 0047a79e
    ADD ESI,EAX                         ; 0047a7a1
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0047a7a3
    MOV dword ptr [EDX + 0x8],ESI       ; 0047a7a6
    ADD EDI,EAX                         ; 0047a7a9
    MOV dword ptr [EDX + 0x18],EDI      ; 0047a7ab
    MOV ECX,dword ptr [EDX + 0x20]      ; 0047a7ae
    MOV EBX,dword ptr [EDX + 0x10]      ; 0047a7b1
    MOV ESI,dword ptr [EDX + 0x28]      ; 0047a7b4
    MOV EAX,dword ptr [EDX + 0x24]      ; 0047a7b7
    MOV EDI,dword ptr [EDX + 0x30]      ; 0047a7ba
    ADD ECX,EAX                         ; 0047a7bd
    MOV EAX,dword ptr [EDX + 0x14]      ; 0047a7bf
    MOV dword ptr [EDX + 0x20],ECX      ; 0047a7c2
    ADD EBX,EAX                         ; 0047a7c5
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0047a7c7
    MOV dword ptr [EDX + 0x10],EBX      ; 0047a7ca
    ADD ESI,EAX                         ; 0047a7cd
    MOV EAX,dword ptr [EDX + 0x34]      ; 0047a7cf
    MOV dword ptr [EDX + 0x28],ESI      ; 0047a7d2
    ADD EDI,EAX                         ; 0047a7d5
    MOV dword ptr [EDX + 0x30],EDI      ; 0047a7d7
    MOV DL,byte ptr [0x01c51d15]        ; 0047a7da | DAT_01c51d15
    MOV EBP,dword ptr [0x01bc0784]      ; 0047a7e0 | DAT_01bc0784
    TEST DL,0x2                         ; 0047a7e6
    JNZ 0x0047aaad                      ; 0047a7e9
        ;   XREF to: 0047aaad (CONDITIONAL_JUMP)  ; LAB_0047aaad
    INC dword ptr [ESP + 0x4c]          ; 0047a7ef
    JMP 0x0047a686                      ; 0047a7f3
        ;   XREF to: 0047a686 (UNCONDITIONAL_JUMP)  ; LAB_0047a686
    MOV EDI,dword ptr [EBX + 0x14]      ; 0047a7f8 | DAT_00629028
        ;   Label: LAB_0047a7f8
    CMP EDI,dword ptr [ECX + 0x14]      ; 0047a7fb | DAT_00629028
    JLE 0x0047a80c                      ; 0047a7fe
        ;   XREF to: 0047a80c (CONDITIONAL_JUMP)  ; LAB_0047a80c
    MOV ESI,ECX                         ; 0047a800
    MOV dword ptr [ESP + 0x50],EBX      ; 0047a802
    MOV ECX,EAX                         ; 0047a806
    MOV EAX,EDX                         ; 0047a808
    MOV EDX,ECX                         ; 0047a80a
    IMUL ECX,EBP,0x50                   ; 0047a80c
        ;   Label: LAB_0047a80c
    ADD ECX,0x1bc0788                   ; 0047a80f
    MOV dword ptr [ECX],EAX             ; 0047a815 | DAT_01bc0788
    MOV EDI,dword ptr [0x01bc0c88]      ; 0047a817 | DAT_01bc0c88
    MOV dword ptr [ECX + 0x4],EDX       ; 0047a81d
    CMP EAX,EDI                         ; 0047a820
    JGE 0x0047a829                      ; 0047a822
        ;   XREF to: 0047a829 (CONDITIONAL_JUMP)  ; LAB_0047a829
    MOV [0x01bc0c88],EAX                ; 0047a824 | DAT_01bc0c88
    CMP EDX,dword ptr [0x01bc0c8c]      ; 0047a829 | DAT_01bc0c8c
        ;   Label: LAB_0047a829
    JLE 0x0047a837                      ; 0047a82f
        ;   XREF to: 0047a837 (CONDITIONAL_JUMP)  ; LAB_0047a837
    MOV dword ptr [0x01bc0c8c],EDX      ; 0047a831 | DAT_01bc0c8c
    MOV EBX,dword ptr [ESP + 0x50]      ; 0047a837
        ;   Label: LAB_0047a837
    MOV EDX,dword ptr [ESI + 0x14]      ; 0047a83b | DAT_00629028
    MOV EBX,dword ptr [EBX + 0x14]      ; 0047a83e | DAT_00629028
    SUB EBX,EDX                         ; 0047a841
    CMP EBX,0x10000                     ; 0047a843
    JNC 0x0047aa18                      ; 0047a849
        ;   XREF to: 0047aa18 (CONDITIONAL_JUMP)  ; LAB_0047aa18
    MOV dword ptr [0x01bc0784],EBP      ; 0047a84f | DAT_01bc0784
    XOR EBX,EBX                         ; 0047a855
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a857
        ;   Label: LAB_0047a857
    MOV EDX,dword ptr [ESI + 0x10]      ; 0047a85b | DAT_00629024
    MOV EAX,dword ptr [EAX + 0x10]      ; 0047a85e | DAT_00629024
    MOV EDI,dword ptr [ESI + 0x14]      ; 0047a861 | DAT_00629028
    SUB EAX,EDX                         ; 0047a864
    AND EDI,0xffff                      ; 0047a866
    MOV EDX,EAX                         ; 0047a86c
    MOV EAX,EBX                         ; 0047a86e
    XOR DI,0xffff                       ; 0047a870
    IMUL EDX                            ; 0047a874
    SHRD EAX,EDX,0x10                   ; 0047a876
    MOV EDX,EAX                         ; 0047a87a
    MOV dword ptr [ECX + 0xc],EAX       ; 0047a87c
    MOV EAX,EDI                         ; 0047a87f
    IMUL EDX                            ; 0047a881
    SHRD EAX,EDX,0x10                   ; 0047a883
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a887
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a88b
    MOV EAX,dword ptr [ESI + 0x10]      ; 0047a88f | DAT_00629024
    ADD EAX,EDX                         ; 0047a892
    MOV dword ptr [ECX + 0x8],EAX       ; 0047a894
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a897
    MOV EDX,dword ptr [ESI + 0x18]      ; 0047a89b | DAT_0062902c
    MOV EAX,dword ptr [EAX + 0x18]      ; 0047a89e | DAT_0062902c
    SUB EAX,EDX                         ; 0047a8a1
    MOV EDX,EAX                         ; 0047a8a3
    MOV EAX,EBX                         ; 0047a8a5
    IMUL EDX                            ; 0047a8a7
    SHRD EAX,EDX,0x10                   ; 0047a8a9
    MOV EDX,EAX                         ; 0047a8ad
    MOV dword ptr [ECX + 0x1c],EAX      ; 0047a8af
    MOV EAX,EDI                         ; 0047a8b2
    IMUL EDX                            ; 0047a8b4
    SHRD EAX,EDX,0x10                   ; 0047a8b6
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a8ba
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a8be
    MOV EAX,dword ptr [ESI + 0x18]      ; 0047a8c2 | DAT_0062902c
    ADD EAX,EDX                         ; 0047a8c5
    MOV dword ptr [ECX + 0x18],EAX      ; 0047a8c7
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a8ca
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0047a8ce | DAT_00629030
    MOV EAX,dword ptr [EAX + 0x1c]      ; 0047a8d1 | DAT_00629030
    SUB EAX,EDX                         ; 0047a8d4
    MOV EDX,EAX                         ; 0047a8d6
    MOV EAX,EBX                         ; 0047a8d8
    IMUL EDX                            ; 0047a8da
    SHRD EAX,EDX,0x10                   ; 0047a8dc
    MOV EDX,EAX                         ; 0047a8e0
    MOV dword ptr [ECX + 0x24],EAX      ; 0047a8e2
    MOV EAX,EDI                         ; 0047a8e5
    IMUL EDX                            ; 0047a8e7
    SHRD EAX,EDX,0x10                   ; 0047a8e9
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a8ed
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a8f1
    MOV EAX,dword ptr [ESI + 0x1c]      ; 0047a8f5 | DAT_00629030
    ADD EAX,EDX                         ; 0047a8f8
    MOV dword ptr [ECX + 0x20],EAX      ; 0047a8fa
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a8fd
    MOV EDX,dword ptr [ESI + 0x20]      ; 0047a901 | DAT_00629034
    MOV EAX,dword ptr [EAX + 0x20]      ; 0047a904 | DAT_00629034
    SUB EAX,EDX                         ; 0047a907
    MOV EDX,EAX                         ; 0047a909
    MOV EAX,EBX                         ; 0047a90b
    IMUL EDX                            ; 0047a90d
    SHRD EAX,EDX,0x10                   ; 0047a90f
    MOV EDX,EAX                         ; 0047a913
    MOV dword ptr [ECX + 0x14],EAX      ; 0047a915
    MOV EAX,EDI                         ; 0047a918
    IMUL EDX                            ; 0047a91a
    SHRD EAX,EDX,0x10                   ; 0047a91c
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a920
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a924
    MOV EAX,dword ptr [ESI + 0x20]      ; 0047a928 | DAT_00629034
    ADD EAX,EDX                         ; 0047a92b
    MOV dword ptr [ECX + 0x10],EAX      ; 0047a92d
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a930
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0047a934 | DAT_00629040
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0047a937 | DAT_00629040
    SUB EAX,EDX                         ; 0047a93a
    MOV EDX,EAX                         ; 0047a93c
    MOV EAX,EBX                         ; 0047a93e
    IMUL EDX                            ; 0047a940
    SHRD EAX,EDX,0x10                   ; 0047a942
    MOV EDX,EAX                         ; 0047a946
    MOV dword ptr [ECX + 0x34],EAX      ; 0047a948
    MOV EAX,EDI                         ; 0047a94b
    IMUL EDX                            ; 0047a94d
    SHRD EAX,EDX,0x10                   ; 0047a94f
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a953
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a957
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0047a95b | DAT_00629040
    ADD EAX,EDX                         ; 0047a95e
    MOV dword ptr [ECX + 0x30],EAX      ; 0047a960
    CMP dword ptr [0x00713a74],0x0      ; 0047a963 | DAT_00713a74
    JZ 0x0047aa2e                       ; 0047a96a
        ;   XREF to: 0047aa2e (CONDITIONAL_JUMP)  ; LAB_0047aa2e
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a970
    MOV EDX,dword ptr [ESI + 0x8]       ; 0047a974 | DAT_0062901c
    MOV EAX,dword ptr [EAX + 0x8]       ; 0047a977 | DAT_0062901c
    SUB EAX,EDX                         ; 0047a97a
    MOV EDX,EAX                         ; 0047a97c
    MOV EAX,EBX                         ; 0047a97e
    IMUL EDX                            ; 0047a980
    SHRD EAX,EDX,0x10                   ; 0047a982
    MOV EDX,EAX                         ; 0047a986
    MOV dword ptr [ECX + 0x2c],EAX      ; 0047a988
    MOV EAX,EDI                         ; 0047a98b
    IMUL EDX                            ; 0047a98d
    SHRD EAX,EDX,0x10                   ; 0047a98f
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a993
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a997
    MOV EAX,dword ptr [ESI + 0x8]       ; 0047a99b | DAT_0062901c
    ADD EAX,EDX                         ; 0047a99e
        ;   Label: LAB_0047a99e
    MOV dword ptr [ECX + 0x28],EAX      ; 0047a9a0
    TEST byte ptr [0x01c51d15],0x2      ; 0047a9a3 | DAT_01c51d15
    JZ 0x0047aa0c                       ; 0047a9aa
        ;   XREF to: 0047aa0c (CONDITIONAL_JUMP)  ; LAB_0047aa0c
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a9ac
    MOV EDX,dword ptr [ESI + 0x24]      ; 0047a9b0 | DAT_00629038
    MOV EAX,dword ptr [EAX + 0x24]      ; 0047a9b3 | DAT_00629038
    SUB EAX,EDX                         ; 0047a9b6
    MOV EDX,EAX                         ; 0047a9b8
    MOV EAX,EBX                         ; 0047a9ba
    IMUL EDX                            ; 0047a9bc
    SHRD EAX,EDX,0x10                   ; 0047a9be
    MOV EDX,EAX                         ; 0047a9c2
    MOV dword ptr [ECX + 0x3c],EAX      ; 0047a9c4
    MOV EAX,EDI                         ; 0047a9c7
    IMUL EDX                            ; 0047a9c9
    SHRD EAX,EDX,0x10                   ; 0047a9cb
    MOV dword ptr [ESP + 0x40],EAX      ; 0047a9cf
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047a9d3
    MOV EAX,dword ptr [ESI + 0x24]      ; 0047a9d7 | DAT_00629038
    ADD EAX,EDX                         ; 0047a9da
    MOV dword ptr [ECX + 0x38],EAX      ; 0047a9dc
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047a9df
    MOV EDX,dword ptr [ESI + 0x28]      ; 0047a9e3 | DAT_0062903c
    MOV EAX,dword ptr [EAX + 0x28]      ; 0047a9e6 | DAT_0062903c
    SUB EAX,EDX                         ; 0047a9e9
    MOV EDX,EAX                         ; 0047a9eb
    MOV EAX,EBX                         ; 0047a9ed
    IMUL EDX                            ; 0047a9ef
    SHRD EAX,EDX,0x10                   ; 0047a9f1
    MOV EDX,EAX                         ; 0047a9f5
    MOV dword ptr [ECX + 0x44],EAX      ; 0047a9f7
    MOV EAX,EDI                         ; 0047a9fa
    IMUL EDX                            ; 0047a9fc
    SHRD EAX,EDX,0x10                   ; 0047a9fe
    MOV EDX,EAX                         ; 0047aa02
    MOV EAX,dword ptr [ESI + 0x28]      ; 0047aa04 | DAT_0062903c
    ADD EAX,EDX                         ; 0047aa07
    MOV dword ptr [ECX + 0x40],EAX      ; 0047aa09
    MOV EBP,dword ptr [0x01bc0784]      ; 0047aa0c | DAT_01bc0784
        ;   Label: LAB_0047aa0c
    INC EBP                             ; 0047aa12
    JMP 0x0047a5ee                      ; 0047aa13
        ;   XREF to: 0047a5ee (UNCONDITIONAL_JUMP)  ; LAB_0047a5ee
    MOV EAX,0xffffffff                  ; 0047aa18
        ;   Label: LAB_0047aa18
    XOR EDX,EDX                         ; 0047aa1d
    DIV EBX                             ; 0047aa1f
    MOV dword ptr [0x01bc0784],EBP      ; 0047aa21 | DAT_01bc0784
    MOV EBX,EAX                         ; 0047aa27
    JMP 0x0047a857                      ; 0047aa29
        ;   XREF to: 0047a857 (UNCONDITIONAL_JUMP)  ; LAB_0047a857
    MOV EAX,dword ptr [ESP + 0x50]      ; 0047aa2e
        ;   Label: LAB_0047aa2e
    MOV EDX,dword ptr [ESI + 0xc]       ; 0047aa32 | DAT_00629020
    MOV EAX,dword ptr [EAX + 0xc]       ; 0047aa35 | DAT_00629020
    SUB EAX,EDX                         ; 0047aa38
    MOV EDX,EAX                         ; 0047aa3a
    MOV EAX,EBX                         ; 0047aa3c
    IMUL EDX                            ; 0047aa3e
    SHRD EAX,EDX,0x10                   ; 0047aa40
    MOV EDX,EAX                         ; 0047aa44
    MOV dword ptr [ECX + 0x2c],EAX      ; 0047aa46
    MOV EAX,EDI                         ; 0047aa49
    IMUL EDX                            ; 0047aa4b
    SHRD EAX,EDX,0x10                   ; 0047aa4d
    MOV dword ptr [ESP + 0x40],EAX      ; 0047aa51
    MOV EDX,dword ptr [ESP + 0x40]      ; 0047aa55
    MOV EAX,dword ptr [ESI + 0xc]       ; 0047aa59 | DAT_00629020
    JMP 0x0047a99e                      ; 0047aa5c
        ;   XREF to: 0047a99e (UNCONDITIONAL_JUMP)  ; LAB_0047a99e
    INC EAX                             ; 0047aa61
        ;   Label: LAB_0047aa61
    ADD EBX,0x50                        ; 0047aa62
    CMP EAX,EBP                         ; 0047aa65
    JL 0x0047a624                       ; 0047aa67
        ;   XREF to: 0047a624 (CONDITIONAL_JUMP)  ; LAB_0047a624
    XOR EBX,EBX                         ; 0047aa6d
        ;   Label: LAB_0047aa6d
    JMP 0x0047a634                      ; 0047aa6f
        ;   XREF to: 0047a634 (UNCONDITIONAL_JUMP)  ; LAB_0047a634
    INC EDX                             ; 0047aa74
        ;   Label: LAB_0047aa74
    ADD EAX,0x50                        ; 0047aa75
    CMP EDX,EBP                         ; 0047aa78
    JL 0x0047a65b                       ; 0047aa7a
        ;   XREF to: 0047a65b (CONDITIONAL_JUMP)  ; LAB_0047a65b
    XOR EAX,EAX                         ; 0047aa80
        ;   Label: LAB_0047aa80
    JMP 0x0047a66b                      ; 0047aa82
        ;   XREF to: 0047a66b (UNCONDITIONAL_JUMP)  ; LAB_0047a66b
    INC EDX                             ; 0047aa87
        ;   Label: LAB_0047aa87
    ADD EAX,0x50                        ; 0047aa88
    CMP EDX,EBP                         ; 0047aa8b
    JL 0x0047a6b6                       ; 0047aa8d
        ;   XREF to: 0047a6b6 (CONDITIONAL_JUMP)  ; LAB_0047a6b6
    XOR EAX,EAX                         ; 0047aa93
        ;   Label: LAB_0047aa93
    JMP 0x0047a6c6                      ; 0047aa95
        ;   XREF to: 0047a6c6 (UNCONDITIONAL_JUMP)  ; LAB_0047a6c6
    INC EDX                             ; 0047aa9a
        ;   Label: LAB_0047aa9a
    ADD EAX,0x50                        ; 0047aa9b
    CMP EDX,EBP                         ; 0047aa9e
    JL 0x0047a706                       ; 0047aaa0
        ;   XREF to: 0047a706 (CONDITIONAL_JUMP)  ; LAB_0047a706
    XOR EAX,EAX                         ; 0047aaa6
        ;   Label: LAB_0047aaa6
    JMP 0x0047a716                      ; 0047aaa8
        ;   XREF to: 0047a716 (UNCONDITIONAL_JUMP)  ; LAB_0047a716
    MOV EDX,dword ptr [ESP + 0x54]      ; 0047aaad
        ;   Label: LAB_0047aaad
    MOV EAX,dword ptr [ESP + 0x54]      ; 0047aab1
    MOV ECX,dword ptr [EDX + 0x38]      ; 0047aab5
    MOV EAX,dword ptr [EAX + 0x3c]      ; 0047aab8
    MOV EBX,dword ptr [EDX + 0x40]      ; 0047aabb
    ADD ECX,EAX                         ; 0047aabe
    MOV EAX,dword ptr [EDX + 0x44]      ; 0047aac0
    MOV dword ptr [EDX + 0x38],ECX      ; 0047aac3
    ADD EBX,EAX                         ; 0047aac6
    MOV EAX,dword ptr [ESP + 0x58]      ; 0047aac8
    MOV dword ptr [EDX + 0x40],EBX      ; 0047aacc
    MOV EDX,dword ptr [ESP + 0x58]      ; 0047aacf
    MOV EAX,dword ptr [EAX + 0x3c]      ; 0047aad3
    MOV ESI,dword ptr [EDX + 0x38]      ; 0047aad6
    MOV EDI,dword ptr [EDX + 0x40]      ; 0047aad9
    ADD ESI,EAX                         ; 0047aadc
    MOV EAX,dword ptr [EDX + 0x44]      ; 0047aade
    MOV dword ptr [EDX + 0x38],ESI      ; 0047aae1
    ADD EDI,EAX                         ; 0047aae4
    MOV dword ptr [EDX + 0x40],EDI      ; 0047aae6
    INC dword ptr [ESP + 0x4c]          ; 0047aae9
    JMP 0x0047a686                      ; 0047aaed
        ;   XREF to: 0047a686 (UNCONDITIONAL_JUMP)  ; LAB_0047a686

