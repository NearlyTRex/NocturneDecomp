; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_0050d6a0 at 0050d87f
;   core_set.cpp_FUN_0050d910 at 0050dca0
;   core_water.cpp_CWater_render_FUN_00550cb0 at 00551158
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

    PUSH EBX                            ; 0045f790
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedPoly_FUN_0045f790
    PUSH EBP                            ; 0045f791
    SUB ESP,0x4                         ; 0045f792
    MOV EBX,dword ptr [ESP + 0x10]      ; 0045f795
    CMP dword ptr [EBX + 0xc],0x0       ; 0045f799
    JNZ 0x0045f820                      ; 0045f79d
        ;   XREF to: 0045f820 (CONDITIONAL_JUMP)  ; LAB_0045f820
    PUSH EDI                            ; 0045f7a3
        ;   Label: LAB_0045f7a3
    PUSH ESI                            ; 0045f7a4
    MOV ECX,dword ptr [EBX + 0x4]       ; 0045f7a5
    TEST ECX,ECX                        ; 0045f7a8
    JZ 0x0045f839                       ; 0045f7aa
        ;   XREF to: 0045f839 (CONDITIONAL_JUMP)  ; LAB_0045f839
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f7b0
    MOV EDI,dword ptr [EAX + 0x4]       ; 0045f7b4
    XOR EDX,EDX                         ; 0045f7b7
    TEST EDI,EDI                        ; 0045f7b9
    JLE 0x0045f7e0                      ; 0045f7bb
        ;   XREF to: 0045f7e0 (CONDITIONAL_JUMP)  ; LAB_0045f7e0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0045f7bd
    XOR EAX,EAX                         ; 0045f7c1
    MOV ESI,dword ptr [ECX + 0x18]      ; 0045f7c3
        ;   Label: LAB_0045f7c3
    MOV dword ptr [EAX + 0x1b4d76c],ESI ; 0045f7c6 | DAT_01b4d76c | DAT_01b4d770
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f7cc
    ADD EAX,0x4                         ; 0045f7d0
    INC EDX                             ; 0045f7d3
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045f7d4
    ADD ECX,0xc                         ; 0045f7d7
    CMP EDX,EBP                         ; 0045f7da
    JL 0x0045f7c3                       ; 0045f7dc
        ;   XREF to: 0045f7c3 (CONDITIONAL_JUMP)  ; LAB_0045f7c3
    MOV EAX,EAX                         ; 0045f7de
    CMP dword ptr [EBX + 0x4],0x0       ; 0045f7e0
        ;   Label: LAB_0045f7e0
    JZ 0x0045f892                       ; 0045f7e4
        ;   XREF to: 0045f892 (CONDITIONAL_JUMP)  ; LAB_0045f892
    XOR EDX,EDX                         ; 0045f7ea
    MOV EAX,0x463a79                    ; 0045f7ec | LAB_00463a79
    MOV dword ptr [0x01c039a0],EDX      ; 0045f7f1 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDX      ; 0045f7f7 | DAT_01c039a4
    MOV [0x01c00c7c],EAX                ; 0045f7fd | DAT_01c00c7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f802
        ;   Label: LAB_0045f802
    PUSH 0x1b4d76c                      ; 0045f806 | DAT_01b4d76c
    MOV ESI,dword ptr [EAX + 0x4]       ; 0045f80b
    PUSH ESI                            ; 0045f80e
    PUSH EBX                            ; 0045f80f
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 ; 0045f810
        ;   XREF to: 0045ed80 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80()
    ADD ESP,0xc                         ; 0045f815
    POP ESI                             ; 0045f818
    POP EDI                             ; 0045f819
    ADD ESP,0x4                         ; 0045f81a
        ;   Label: LAB_0045f81a
    POP EBP                             ; 0045f81d
    POP EBX                             ; 0045f81e
    RET                                 ; 0045f81f
    MOV EAX,dword ptr [ESP + 0x14]      ; 0045f820
        ;   Label: LAB_0045f820
    ADD EAX,0x8                         ; 0045f824
    PUSH EAX                            ; 0045f827
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 0045f828
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 0045f82d
    TEST EAX,EAX                        ; 0045f830
    JZ 0x0045f81a                       ; 0045f832
        ;   XREF to: 0045f81a (CONDITIONAL_JUMP)  ; LAB_0045f81a
    JMP 0x0045f7a3                      ; 0045f834
        ;   XREF to: 0045f7a3 (UNCONDITIONAL_JUMP)  ; LAB_0045f7a3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0045f839
        ;   Label: LAB_0045f839
    CMP dword ptr [EAX + 0x4],0x0       ; 0045f83d
    JLE 0x0045f7e0                      ; 0045f841
        ;   XREF to: 0045f7e0 (CONDITIONAL_JUMP)  ; LAB_0045f7e0
    XOR EDX,EDX                         ; 0045f843
    MOV EDI,dword ptr [EBX + 0x20]      ; 0045f845
        ;   Label: LAB_0045f845
    MOV ESI,dword ptr [EAX + 0x18]      ; 0045f848
    TEST EDI,EDI                        ; 0045f84b
    JZ 0x0045f86d                       ; 0045f84d
        ;   XREF to: 0045f86d (CONDITIONAL_JUMP)  ; LAB_0045f86d
    MOV dword ptr [EDX + 0x1b4d76c],ESI ; 0045f84f | DAT_01b4d76c | DAT_01b4d770
        ;   Label: LAB_0045f84f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0045f855
    ADD EAX,0xc                         ; 0045f859
    INC ECX                             ; 0045f85c
    MOV EBP,dword ptr [ESI + 0x4]       ; 0045f85d
    ADD EDX,0x4                         ; 0045f860
    CMP ECX,EBP                         ; 0045f863
    JGE 0x0045f7e0                      ; 0045f865
        ;   XREF to: 0045f7e0 (CONDITIONAL_JUMP)  ; LAB_0045f7e0
    JMP 0x0045f845                      ; 0045f86b
        ;   XREF to: 0045f845 (UNCONDITIONAL_JUMP)  ; LAB_0045f845
    IMUL EDI,ESI,0x30                   ; 0045f86d
        ;   Label: LAB_0045f86d
    MOV dword ptr [ESP + 0x8],EDI       ; 0045f870
    MOV EBP,dword ptr [ESP + 0x8]       ; 0045f874
    MOV EDI,dword ptr [EBX]             ; 0045f878
    ADD EDI,EBP                         ; 0045f87a
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0045f87c
    MOV dword ptr [EDI + 0x18],EBP      ; 0045f87f
    MOV EDI,dword ptr [ESP + 0x8]       ; 0045f882
    MOV EBP,dword ptr [EBX]             ; 0045f886
    ADD EBP,EDI                         ; 0045f888
    MOV EDI,dword ptr [EAX + 0x20]      ; 0045f88a
    MOV dword ptr [EBP + 0x1c],EDI      ; 0045f88d
    JMP 0x0045f84f                      ; 0045f890
        ;   XREF to: 0045f84f (UNCONDITIONAL_JUMP)  ; LAB_0045f84f
    CMP dword ptr [0x005b7624],0x20     ; 0045f892 | DAT_005b7624
        ;   Label: LAB_0045f892
    JNZ 0x0045f8c0                      ; 0045f899
        ;   XREF to: 0045f8c0 (CONDITIONAL_JUMP)  ; LAB_0045f8c0
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0045f89b | DAT_01c00c7c | LAB_0052f031
    MOV EBP,0x6                         ; 0045f8a5
        ;   Label: LAB_0045f8a5
    MOV EDI,0x2cd                       ; 0045f8aa
    MOV dword ptr [0x01c039a4],EBP      ; 0045f8af | DAT_01c039a4
    MOV dword ptr [0x01c039a0],EDI      ; 0045f8b5 | DAT_01c039a0
    JMP 0x0045f802                      ; 0045f8bb
        ;   XREF to: 0045f802 (UNCONDITIONAL_JUMP)  ; LAB_0045f802
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0045f8c0 | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0045f8c0
    JMP 0x0045f8a5                      ; 0045f8ca
        ;   XREF to: 0045f8a5 (UNCONDITIONAL_JUMP)  ; LAB_0045f8a5

