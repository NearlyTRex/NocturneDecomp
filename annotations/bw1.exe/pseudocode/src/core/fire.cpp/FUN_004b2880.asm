; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b2880(void)
;
;
; XREF[1]:
;   FUN_004b4dd0 at 004b502d
;
; Referenced Globals:
;   TerminatedCString s_core_fire_cpp_005df492
;   TerminatedCString s_CGunFlame_initProcess_to_005df4a3
;   undefined4 DAT_00622c18
;   undefined4 DAT_01c58768
;   undefined4 DAT_01c5876c
;   undefined4 DAT_01c58834
;   undefined4 DAT_01c58838
;   undefined4 DAT_01cc4184
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fd1210
;
; Called Functions:
;   FUN_0040c600
;   FUN_004ea6f0
;   FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2880
        ;   Label: FUN_004b2880
    PUSH ESI                            ; 004b2881
    PUSH EDI                            ; 004b2882
    PUSH EBP                            ; 004b2883
    XOR EDX,EDX                         ; 004b2884
    XOR EDI,EDI                         ; 004b2886
    XOR ESI,ESI                         ; 004b2888
    MOV dword ptr [0x01c58768],EDX      ; 004b288a | DAT_01c58768
    MOV EBX,dword ptr [0x00622c18]      ; 004b2890 | DAT_00622c18
        ;   Label: LAB_004b2890
    CMP EDI,dword ptr [EBX + 0x14f0a8]  ; 004b2896 | DAT_01fd1210
    JL 0x004b28be                       ; 004b289c
        ;   XREF to: 004b28be (CONDITIONAL_JUMP)  ; LAB_004b28be
    XOR EBX,EBX                         ; 004b289e
    XOR ESI,ESI                         ; 004b28a0
    MOV dword ptr [0x01c58834],EBX      ; 004b28a2 | DAT_01c58834
    MOV EAX,[0x00622c18]                ; 004b28a8 | DAT_00622c18
        ;   Label: LAB_004b28a8
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004b28ad | DAT_01fcf2cc
    JL 0x004b2939                       ; 004b28b3
        ;   XREF to: 004b2939 (CONDITIONAL_JUMP)  ; LAB_004b2939
    POP EBP                             ; 004b28b9
    POP EDI                             ; 004b28ba
    POP ESI                             ; 004b28bb
    POP EBX                             ; 004b28bc
    RET                                 ; 004b28bd
    MOV EBX,dword ptr [ESI + EBX*0x1 + 0x14f0ac] ; 004b28be
        ;   Label: LAB_004b28be
    PUSH EBX                            ; 004b28c5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004b28c6
    CALL dword ptr [EAX + 0x10c]        ; 004b28cc
    ADD ESP,0x4                         ; 004b28d2
    TEST EAX,EAX                        ; 004b28d5
    JNZ 0x004b290c                      ; 004b28d7
        ;   XREF to: 004b290c (CONDITIONAL_JUMP)  ; LAB_004b290c
    LEA EAX,[EBX + 0x20]                ; 004b28d9
    PUSH 0x42480000                     ; 004b28dc
    PUSH EAX                            ; 004b28e1
    CALL FUN_004ea6f0                   ; 004b28e2
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea6f0()
    ADD ESP,0x8                         ; 004b28e7
    TEST EAX,EAX                        ; 004b28ea
    JZ 0x004b290c                       ; 004b28ec
        ;   XREF to: 004b290c (CONDITIONAL_JUMP)  ; LAB_004b290c
    CMP dword ptr [0x01c58768],0x32     ; 004b28ee | DAT_01c58768
    JGE 0x004b2915                      ; 004b28f5
        ;   XREF to: 004b2915 (CONDITIONAL_JUMP)  ; LAB_004b2915
    MOV EAX,[0x01c58768]                ; 004b28f7 | DAT_01c58768
        ;   Label: LAB_004b28f7
    LEA ECX,[EAX + 0x1]                 ; 004b28fc
    MOV dword ptr [EAX*0x4 + 0x1c5876c],EBX ; 004b28ff | DAT_01c5876c
    MOV dword ptr [0x01c58768],ECX      ; 004b2906 | DAT_01c58768
    INC EDI                             ; 004b290c
        ;   Label: LAB_004b290c
    ADD ESI,0x4                         ; 004b290d
    JMP 0x004b2890                      ; 004b2910
        ;   XREF to: 004b2890 (UNCONDITIONAL_JUMP)  ; LAB_004b2890
    MOV EAX,0x5df492                    ; 004b2915 | = "..\\core\\fire.cpp"
        ;   Label: LAB_004b2915
    MOV EDX,0xee3                       ; 004b291a
    PUSH 0x5df4a3                       ; 004b291f | = "CGunFlame::initProcess - too many cha..."
    MOV [0x01d1d400],EAX                ; 004b2924 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDX      ; 004b2929 | DAT_01d1d404
    CALL FUN_005030e0                   ; 004b292f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030e0()
    ADD ESP,0x4                         ; 004b2934
    JMP 0x004b28f7                      ; 004b2937
        ;   XREF to: 004b28f7 (UNCONDITIONAL_JUMP)  ; LAB_004b28f7
    MOV EBP,dword ptr [0x01cc4184]      ; 004b2939 | DAT_01cc4184
        ;   Label: LAB_004b2939
    PUSH EBP                            ; 004b293f
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 004b2940
    PUSH EDX                            ; 004b2947
    CALL FUN_0040c600                   ; 004b2948
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004b294d
    TEST EAX,EAX                        ; 004b2950
    JZ 0x004b2972                       ; 004b2952
        ;   XREF to: 004b2972 (CONDITIONAL_JUMP)  ; LAB_004b2972
    MOV ECX,dword ptr [0x01c58834]      ; 004b2954 | DAT_01c58834
    CMP ECX,0x96                        ; 004b295a
    JGE 0x004b2972                      ; 004b2960
        ;   XREF to: 004b2972 (CONDITIONAL_JUMP)  ; LAB_004b2972
    LEA EDI,[ECX + 0x1]                 ; 004b2962
    MOV dword ptr [ECX*0x4 + 0x1c58838],EAX ; 004b2965 | DAT_01c58838
    MOV dword ptr [0x01c58834],EDI      ; 004b296c | DAT_01c58834
    INC EBX                             ; 004b2972
        ;   Label: LAB_004b2972
    ADD ESI,0x4                         ; 004b2973
    JMP 0x004b28a8                      ; 004b2976
        ;   XREF to: 004b28a8 (UNCONDITIONAL_JUMP)  ; LAB_004b28a8

