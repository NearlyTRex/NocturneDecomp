; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005378e0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)
;
;
; Referenced Globals:
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   FUN_00537760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005378e0
        ;   Label: FUN_005378e0
    PUSH ESI                            ; 005378e1
    PUSH EDI                            ; 005378e2
    PUSH EBP                            ; 005378e3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005378e4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005378e8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005378ec
    MOV EDX,dword ptr [ESP + 0x20]      ; 005378f0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005378f4
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005378f8
    CMP dword ptr [ECX + 0x20],0x0      ; 005378fc
    JZ 0x005379c1                       ; 00537900
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    CMP dword ptr [ECX + 0x14],0x0      ; 00537906
    JZ 0x005379c1                       ; 0053790a
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    MOV EBP,dword ptr [0x01c4f008]      ; 00537910 | DAT_01c4f008
    CMP EBX,EBP                         ; 00537916
    JGE 0x00537924                      ; 00537918
        ;   XREF to: 00537924 (CONDITIONAL_JUMP)  ; LAB_00537924
    SUB EBP,EBX                         ; 0053791a
    MOV EBX,dword ptr [0x01c4f008]      ; 0053791c | DAT_01c4f008
    ADD EDX,EBP                         ; 00537922
    MOV EBP,dword ptr [0x01c4f00c]      ; 00537924 | DAT_01c4f00c
        ;   Label: LAB_00537924
    CMP ESI,EBP                         ; 0053792a
    JGE 0x00537938                      ; 0053792c
        ;   XREF to: 00537938 (CONDITIONAL_JUMP)  ; LAB_00537938
    SUB EBP,ESI                         ; 0053792e
    MOV ESI,dword ptr [0x01c4f00c]      ; 00537930 | DAT_01c4f00c
    ADD EAX,EBP                         ; 00537936
    MOV EBP,dword ptr [ESP + 0x28]      ; 00537938
        ;   Label: LAB_00537938
    ADD EBP,EBX                         ; 0053793c
    SUB EBP,EDX                         ; 0053793e
    CMP EBP,dword ptr [0x01c4f010]      ; 00537940 | DAT_01c4f010
    JLE 0x00537956                      ; 00537946
        ;   XREF to: 00537956 (CONDITIONAL_JUMP)  ; LAB_00537956
    MOV EBP,dword ptr [0x01c4f010]      ; 00537948 | DAT_01c4f010
    SUB EBP,EBX                         ; 0053794e
    ADD EBP,EDX                         ; 00537950
    MOV dword ptr [ESP + 0x28],EBP      ; 00537952
    LEA EBP,[ESI + EDI*0x1]             ; 00537956
        ;   Label: LAB_00537956
    SUB EBP,EAX                         ; 00537959
    CMP EBP,dword ptr [0x01c4f014]      ; 0053795b | DAT_01c4f014
    JLE 0x0053796d                      ; 00537961
        ;   XREF to: 0053796d (CONDITIONAL_JUMP)  ; LAB_0053796d
    MOV EDI,dword ptr [0x01c4f014]      ; 00537963 | DAT_01c4f014
    SUB EDI,ESI                         ; 00537969
    ADD EDI,EAX                         ; 0053796b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0053796d
        ;   Label: LAB_0053796d
    CMP EDX,EBP                         ; 00537971
    JG 0x005379c1                       ; 00537973
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    CMP EAX,EDI                         ; 00537975
    JG 0x005379c1                       ; 00537977
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    TEST EBP,EBP                        ; 00537979
    JLE 0x005379c1                      ; 0053797b
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    TEST EDI,EDI                        ; 0053797d
    JLE 0x005379c1                      ; 0053797f
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    CMP EDX,dword ptr [ECX + 0x18]      ; 00537981
    JGE 0x005379c1                      ; 00537984
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    CMP EAX,dword ptr [ECX + 0x1c]      ; 00537986
    JGE 0x005379c1                      ; 00537989
        ;   XREF to: 005379c1 (CONDITIONAL_JUMP)  ; LAB_005379c1
    TEST EDX,EDX                        ; 0053798b
    JL 0x005379c6                       ; 0053798d
        ;   XREF to: 005379c6 (CONDITIONAL_JUMP)  ; LAB_005379c6
    TEST EAX,EAX                        ; 0053798f
        ;   Label: LAB_0053798f
    JL 0x005379cc                       ; 00537991
        ;   XREF to: 005379cc (CONDITIONAL_JUMP)  ; LAB_005379cc
    MOV EBP,dword ptr [ESP + 0x28]      ; 00537993
        ;   Label: LAB_00537993
    CMP EBP,dword ptr [ECX + 0x18]      ; 00537997
    JL 0x005379a4                       ; 0053799a
        ;   XREF to: 005379a4 (CONDITIONAL_JUMP)  ; LAB_005379a4
    MOV EBP,dword ptr [ECX + 0x18]      ; 0053799c
    DEC EBP                             ; 0053799f
    MOV dword ptr [ESP + 0x28],EBP      ; 005379a0
    MOV EBP,dword ptr [ECX + 0x1c]      ; 005379a4
        ;   Label: LAB_005379a4
    CMP EDI,EBP                         ; 005379a7
    JL 0x005379ae                       ; 005379a9
        ;   XREF to: 005379ae (CONDITIONAL_JUMP)  ; LAB_005379ae
    LEA EDI,[EBP + -0x1]                ; 005379ab
    PUSH EDI                            ; 005379ae
        ;   Label: LAB_005379ae
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005379af
    PUSH EDI                            ; 005379b3
    PUSH EAX                            ; 005379b4
    PUSH EDX                            ; 005379b5
    PUSH ESI                            ; 005379b6
    PUSH EBX                            ; 005379b7
    PUSH ECX                            ; 005379b8
    CALL FUN_00537760                   ; 005379b9
        ;   XREF to: 00537760 (UNCONDITIONAL_CALL)  ; undefined FUN_00537760()
    ADD ESP,0x1c                        ; 005379be
    POP EBP                             ; 005379c1
        ;   Label: LAB_005379c1
    POP EDI                             ; 005379c2
    POP ESI                             ; 005379c3
    POP EBX                             ; 005379c4
    RET                                 ; 005379c5
    SUB EBX,EDX                         ; 005379c6
        ;   Label: LAB_005379c6
    XOR EDX,EDX                         ; 005379c8
    JMP 0x0053798f                      ; 005379ca
        ;   XREF to: 0053798f (UNCONDITIONAL_JUMP)  ; LAB_0053798f
    SUB ESI,EAX                         ; 005379cc
        ;   Label: LAB_005379cc
    XOR EAX,EAX                         ; 005379ce
    JMP 0x00537993                      ; 005379d0
        ;   XREF to: 00537993 (UNCONDITIONAL_JUMP)  ; LAB_00537993

