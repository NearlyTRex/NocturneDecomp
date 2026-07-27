; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double FUN_0056f852(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_0056a189 at 0056a195
;
; Referenced Globals:
;   undefined4 DAT_005a4b78
;   undefined4 DAT_005a4b7c
;
; Called Functions:
;   FUN_00568e9c
;   FUN_0056f690
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056f852
        ;   Label: FUN_0056f852
    MOV EBP,ESP                         ; 0056f853
    PUSH EBX                            ; 0056f855
    PUSH ESI                            ; 0056f856
    PUSH EDI                            ; 0056f857
    SUB ESP,0x24                        ; 0056f858
    MOV EDX,dword ptr [EBP + 0xc]       ; 0056f85b
    PUSH EDX                            ; 0056f85e
    LEA EAX,[EBP + -0x30]               ; 0056f85f
    PUSH EAX                            ; 0056f862
    MOV EBX,dword ptr [EBP + 0x8]       ; 0056f863
    PUSH EBX                            ; 0056f866
    CALL FUN_0056f690                   ; 0056f867
        ;   XREF to: 0056f690 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f690()
    MOV EBX,EAX                         ; 0056f86c
    ADD ESP,0xc                         ; 0056f86e
    TEST EAX,EAX                        ; 0056f871
    JNZ 0x0056f880                      ; 0056f873
        ;   XREF to: 0056f880 (CONDITIONAL_JUMP)  ; LAB_0056f880
    MOV dword ptr [EBP + -0x24],EAX     ; 0056f875
    MOV dword ptr [EBP + -0x20],EAX     ; 0056f878
        ;   Label: LAB_0056f878
    JMP 0x0056f92d                      ; 0056f87b
        ;   XREF to: 0056f92d (UNCONDITIONAL_JUMP)  ; LAB_0056f92d
    MOV EAX,dword ptr [EBP + -0x28]     ; 0056f880
        ;   Label: LAB_0056f880
    AND AH,0x7f                         ; 0056f883
    AND EAX,0xffff                      ; 0056f886
    CMP EAX,0x43ff                      ; 0056f88b
    JL 0x0056f8bc                       ; 0056f890
        ;   XREF to: 0056f8bc (CONDITIONAL_JUMP)  ; LAB_0056f8bc
    CALL FUN_00568e9c                   ; 0056f892
        ;   XREF to: 00568e9c (UNCONDITIONAL_CALL)  ; undefined FUN_00568e9c()
    TEST byte ptr [EBP + -0x27],0x80    ; 0056f897
    JZ 0x0056f8ad                       ; 0056f89b
        ;   XREF to: 0056f8ad (CONDITIONAL_JUMP)  ; LAB_0056f8ad
    FLD double ptr [0x005a4b78]         ; 0056f89d | DAT_005a4b78
    FCHS                                ; 0056f8a3
    FSTP double ptr [EBP + -0x24]       ; 0056f8a5
    JMP 0x0056f92d                      ; 0056f8a8
        ;   XREF to: 0056f92d (UNCONDITIONAL_JUMP)  ; LAB_0056f92d
    MOV EAX,[0x005a4b78]                ; 0056f8ad | DAT_005a4b78
        ;   Label: LAB_0056f8ad
    MOV dword ptr [EBP + -0x24],EAX     ; 0056f8b2
    MOV EAX,[0x005a4b7c]                ; 0056f8b5 | DAT_005a4b7c
    JMP 0x0056f878                      ; 0056f8ba
        ;   XREF to: 0056f878 (UNCONDITIONAL_JUMP)  ; LAB_0056f878
    CMP EAX,0x3bcd                      ; 0056f8bc
        ;   Label: LAB_0056f8bc
    JGE 0x0056f905                      ; 0056f8c1
        ;   XREF to: 0056f905 (CONDITIONAL_JUMP)  ; LAB_0056f905
    CMP EAX,-0x34                       ; 0056f8c3
    JGE 0x0056f8d7                      ; 0056f8c6
        ;   XREF to: 0056f8d7 (CONDITIONAL_JUMP)  ; LAB_0056f8d7
    XOR EDI,EDI                         ; 0056f8c8
    CALL FUN_00568e9c                   ; 0056f8ca
        ;   XREF to: 00568e9c (UNCONDITIONAL_CALL)  ; undefined FUN_00568e9c()
    MOV dword ptr [EBP + -0x24],EDI     ; 0056f8cf
    MOV dword ptr [EBP + -0x20],EDI     ; 0056f8d2
    JMP 0x0056f92d                      ; 0056f8d5
        ;   XREF to: 0056f92d (UNCONDITIONAL_JUMP)  ; LAB_0056f92d
    LEA EDX,[EBP + -0x24]               ; 0056f8d7
        ;   Label: LAB_0056f8d7
    LEA EAX,[EBP + -0x30]               ; 0056f8da
    FLD extended double ptr [EAX]       ; 0056f8dd
    FSTP double ptr [EDX]               ; 0056f8df
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056f8e1
    MOV dword ptr [EBP + -0x1c],EAX     ; 0056f8e4
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f8e7
    MOV ESI,dword ptr [EBP + -0x24]     ; 0056f8ea
    MOV dword ptr [EBP + -0x18],EAX     ; 0056f8ed
    TEST EAX,0x7fffffff                 ; 0056f8f0
    JNZ 0x0056f8fb                      ; 0056f8f5
        ;   XREF to: 0056f8fb (CONDITIONAL_JUMP)  ; LAB_0056f8fb
    TEST ESI,ESI                        ; 0056f8f7
    JZ 0x0056f928                       ; 0056f8f9
        ;   XREF to: 0056f928 (CONDITIONAL_JUMP)  ; LAB_0056f928
    TEST word ptr [EBP + -0x16],0x7ff0  ; 0056f8fb
        ;   Label: LAB_0056f8fb
    JNZ 0x0056f92d                      ; 0056f901
        ;   XREF to: 0056f92d (CONDITIONAL_JUMP)  ; LAB_0056f92d
    JMP 0x0056f928                      ; 0056f903
        ;   XREF to: 0056f928 (UNCONDITIONAL_JUMP)  ; LAB_0056f928
    LEA EDX,[EBP + -0x24]               ; 0056f905
        ;   Label: LAB_0056f905
    LEA EAX,[EBP + -0x30]               ; 0056f908
    FLD extended double ptr [EAX]       ; 0056f90b
    FSTP double ptr [EDX]               ; 0056f90d
    CMP EBX,0x3                         ; 0056f90f
    JZ 0x0056f928                       ; 0056f912
        ;   XREF to: 0056f928 (CONDITIONAL_JUMP)  ; LAB_0056f928
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056f914
    MOV dword ptr [EBP + -0x14],EAX     ; 0056f917
    MOV EAX,dword ptr [EBP + -0x20]     ; 0056f91a
    MOV dword ptr [EBP + -0x10],EAX     ; 0056f91d
    TEST word ptr [EBP + -0xe],0x7ff0   ; 0056f920
    JNZ 0x0056f92d                      ; 0056f926
        ;   XREF to: 0056f92d (CONDITIONAL_JUMP)  ; LAB_0056f92d
    CALL FUN_00568e9c                   ; 0056f928
        ;   XREF to: 00568e9c (UNCONDITIONAL_CALL)  ; undefined FUN_00568e9c()
        ;   Label: LAB_0056f928
    MOV EAX,dword ptr [EBP + -0x24]     ; 0056f92d
        ;   Label: LAB_0056f92d
    MOV EDX,dword ptr [EBP + -0x20]     ; 0056f930
    JMP 0x0056f84a                      ; 0056f933
        ;   XREF to: 0056f84a (UNCONDITIONAL_JUMP)  ; LAB_0056f84a

