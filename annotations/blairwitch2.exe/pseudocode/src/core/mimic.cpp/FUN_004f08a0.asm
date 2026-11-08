; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f08a0(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005dd8db
;   TerminatedCString s_CMimic_setup_can_t_use_m_005dd8ed
;   undefined4 DAT_006141f0
;   undefined4 DAT_0061b120
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d34cb0
;
; Called Functions:
;   FUN_004244b0
;   FUN_00429390
;   FUN_0048e340
;   FUN_004e4500
;   FUN_004f0a50
;   FUN_004f0e10
;   FUN_004f17a0
;   FUN_004f1e90
;   FUN_005035c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f08a0
        ;   Label: FUN_004f08a0
    PUSH EDI                            ; 004f08a1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f08a2
    MOV EAX,[0x0061b120]                ; 004f08a6 | DAT_0061b120
    CMP dword ptr [EAX],0x0             ; 004f08ab | DAT_01d34cb0
    JNZ 0x004f0936                      ; 004f08ae
        ;   XREF to: 004f0936 (CONDITIONAL_JUMP)  ; LAB_004f0936
    MOV EAX,[0x01cedef4]                ; 004f08b4 | DAT_01cedef4
        ;   Label: LAB_004f08b4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f08b9
    MOV EDX,dword ptr [EDX + 0x108]     ; 004f08c0
    MOV dword ptr [EBX + 0x108],EDX     ; 004f08c6
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f08cc
    MOV EDX,dword ptr [EDX + 0x10c]     ; 004f08d3
    MOV dword ptr [EBX + 0x10c],EDX     ; 004f08d9
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f08df
    FLD float ptr [EBX + 0x4c34c]       ; 004f08e6
    MOV EAX,dword ptr [EAX + 0x110]     ; 004f08ec
    FLDZ                                ; 004f08f2
    MOV dword ptr [EBX + 0x110],EAX     ; 004f08f4
    FCOMPP                              ; 004f08fa
    FNSTSW AX                           ; 004f08fc
    SAHF                                ; 004f08fe
    JBE 0x004f0960                      ; 004f08ff
        ;   XREF to: 004f0960 (CONDITIONAL_JUMP)  ; LAB_004f0960
    PUSH dword ptr [ESP + 0x10]         ; 004f0901
    PUSH EBX                            ; 004f0905
    CALL FUN_004244b0                   ; 004f0906
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 004f090b
    TEST EAX,EAX                        ; 004f090e
    JZ 0x004f0933                       ; 004f0910
        ;   XREF to: 004f0933 (CONDITIONAL_JUMP)  ; LAB_004f0933
    MOV EDI,dword ptr [EBX + 0x4b6f0]   ; 004f0912
    CMP EDI,0x1                         ; 004f0918
    JLE 0x004f0970                      ; 004f091b
        ;   XREF to: 004f0970 (CONDITIONAL_JUMP)  ; LAB_004f0970
    PUSH dword ptr [ESP + 0x10]         ; 004f091d
    PUSH EBX                            ; 004f0921
    CALL FUN_004f0e10                   ; 004f0922
        ;   XREF to: 004f0e10 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0e10()
    ADD ESP,0x8                         ; 004f0927
    PUSH EBX                            ; 004f092a
        ;   Label: LAB_004f092a
    CALL FUN_00429390                   ; 004f092b
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    ADD ESP,0x4                         ; 004f0930
    POP EDI                             ; 004f0933
        ;   Label: LAB_004f0933
    POP EBX                             ; 004f0934
    RET                                 ; 004f0935
    PUSH ESI                            ; 004f0936
        ;   Label: LAB_004f0936
    MOV ECX,0x5dd8db                    ; 004f0937 | = "..\\core\\mimic.cpp"
    MOV ESI,0x130                       ; 004f093c
    PUSH 0x5dd8ed                       ; 004f0941 | = "CMimic::setup - can't use mimic in mu..."
    MOV dword ptr [0x01d046a0],ECX      ; 004f0946 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 004f094c | DAT_01d046a4
    CALL FUN_004e4500                   ; 004f0952
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004f0957
    POP ESI                             ; 004f095a
    JMP 0x004f08b4                      ; 004f095b
        ;   XREF to: 004f08b4 (UNCONDITIONAL_JUMP)  ; LAB_004f08b4
    PUSH dword ptr [ESP + 0x10]         ; 004f0960
        ;   Label: LAB_004f0960
    PUSH EBX                            ; 004f0964
    CALL FUN_004f1e90                   ; 004f0965
        ;   XREF to: 004f1e90 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1e90()
    ADD ESP,0x8                         ; 004f096a
    POP EDI                             ; 004f096d
    POP EBX                             ; 004f096e
    RET                                 ; 004f096f
    JGE 0x004f0995                      ; 004f0970
        ;   XREF to: 004f0995 (CONDITIONAL_JUMP)  ; LAB_004f0995
        ;   Label: LAB_004f0970
    LEA EAX,[EBX + 0x10b5c]             ; 004f0972
    PUSH EAX                            ; 004f0978
    MOV EAX,[0x006141f0]                ; 004f0979 | DAT_006141f0
    PUSH EAX                            ; 004f097e
    CALL FUN_0048e340                   ; 004f097f
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004f0984
    TEST EAX,EAX                        ; 004f0987
    JZ 0x004f0995                       ; 004f0989
        ;   XREF to: 004f0995 (CONDITIONAL_JUMP)  ; LAB_004f0995
    MOV dword ptr [EBX + 0x4b6f0],0x1   ; 004f098b
    LEA EAX,[EBX + 0x10af8]             ; 004f0995
        ;   Label: LAB_004f0995
    PUSH EAX                            ; 004f099b
    MOV EDX,dword ptr [0x006141f0]      ; 004f099c | DAT_006141f0
    PUSH EDX                            ; 004f09a2
    CALL FUN_0048e340                   ; 004f09a3
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 004f09a8
    TEST EAX,EAX                        ; 004f09ab
    JZ 0x004f092a                       ; 004f09ad
        ;   XREF to: 004f092a (CONDITIONAL_JUMP)  ; LAB_004f092a
    PUSH EBX                            ; 004f09b3
    CALL FUN_004f0a50                   ; 004f09b4
        ;   XREF to: 004f0a50 (UNCONDITIONAL_CALL)  ; undefined FUN_004f0a50()
    MOV ECX,dword ptr [EBX + 0x4b6f0]   ; 004f09b9
    ADD ESP,0x4                         ; 004f09bf
    CMP ECX,0x1                         ; 004f09c2
    JNZ 0x004f092a                      ; 004f09c5
        ;   XREF to: 004f092a (CONDITIONAL_JUMP)  ; LAB_004f092a
    MOV EAX,[0x01cedef4]                ; 004f09cb | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004f09d0
    ADD EAX,0x2b4                       ; 004f09d7
    PUSH EAX                            ; 004f09dc
    CALL FUN_005035c0                   ; 004f09dd
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004f09e2
    ADD ESP,0x4                         ; 004f09e5
    CMP EAX,0x3                         ; 004f09e8
    JNC 0x004f0a0f                      ; 004f09eb
        ;   XREF to: 004f0a0f (CONDITIONAL_JUMP)  ; LAB_004f0a0f
    CMP EAX,0x1                         ; 004f09ed
    JNC 0x004f09fa                      ; 004f09f0
        ;   XREF to: 004f09fa (CONDITIONAL_JUMP)  ; LAB_004f09fa
    TEST EAX,EAX                        ; 004f09f2
    JNZ 0x004f092a                      ; 004f09f4
        ;   XREF to: 004f092a (CONDITIONAL_JUMP)  ; LAB_004f092a
    PUSH EBX                            ; 004f09fa
        ;   Label: LAB_004f09fa
    CALL FUN_004f17a0                   ; 004f09fb
        ;   XREF to: 004f17a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f17a0()
    ADD ESP,0x4                         ; 004f0a00
    PUSH EBX                            ; 004f0a03
    CALL FUN_00429390                   ; 004f0a04
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    ADD ESP,0x4                         ; 004f0a09
    POP EDI                             ; 004f0a0c
    POP EBX                             ; 004f0a0d
    RET                                 ; 004f0a0e
    JBE 0x004f09fa                      ; 004f0a0f
        ;   XREF to: 004f09fa (CONDITIONAL_JUMP)  ; LAB_004f09fa
        ;   Label: LAB_004f0a0f
    CMP EAX,0x11                        ; 004f0a11
    JNC 0x004f0a27                      ; 004f0a14
        ;   XREF to: 004f0a27 (CONDITIONAL_JUMP)  ; LAB_004f0a27
    CMP EAX,0x10                        ; 004f0a16
    JZ 0x004f09fa                       ; 004f0a19
        ;   XREF to: 004f09fa (CONDITIONAL_JUMP)  ; LAB_004f09fa
    PUSH EBX                            ; 004f0a1b
    CALL FUN_00429390                   ; 004f0a1c
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    ADD ESP,0x4                         ; 004f0a21
    POP EDI                             ; 004f0a24
    POP EBX                             ; 004f0a25
    RET                                 ; 004f0a26
    JBE 0x004f09fa                      ; 004f0a27
        ;   XREF to: 004f09fa (CONDITIONAL_JUMP)  ; LAB_004f09fa
        ;   Label: LAB_004f0a27
    CMP EAX,0x14                        ; 004f0a29
    JC 0x004f092a                       ; 004f0a2c
        ;   XREF to: 004f092a (CONDITIONAL_JUMP)  ; LAB_004f092a
    JBE 0x004f09fa                      ; 004f0a32
        ;   XREF to: 004f09fa (CONDITIONAL_JUMP)  ; LAB_004f09fa
    CMP EAX,0x15                        ; 004f0a34
    JZ 0x004f09fa                       ; 004f0a37
        ;   XREF to: 004f09fa (CONDITIONAL_JUMP)  ; LAB_004f09fa
    PUSH EBX                            ; 004f0a39
    CALL FUN_00429390                   ; 004f0a3a
        ;   XREF to: 00429390 (UNCONDITIONAL_CALL)  ; undefined FUN_00429390()
    ADD ESP,0x4                         ; 004f0a3f
    POP EDI                             ; 004f0a42
    POP EBX                             ; 004f0a43
    RET                                 ; 004f0a44

