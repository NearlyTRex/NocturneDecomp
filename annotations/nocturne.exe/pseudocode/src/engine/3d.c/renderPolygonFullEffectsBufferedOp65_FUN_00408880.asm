; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_renderPolygonFullEffectsBufferedOp65_FUN_00408880(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_005b7624
;   undefined4 DAT_005b763c
;   undefined4 DAT_005c5014
;   undefined4 DAT_005c5018
;   undefined4 DAT_005c502c
;   undefined4 DAT_005c5030
;   undefined4 DAT_006b0264
;   undefined4 DAT_006b029c
;   undefined4 DAT_006b02a0
;   undefined4 DAT_006b494c
;   undefined4 DAT_006b4950
;   undefined4 DAT_006b4954
;   undefined4 DAT_006b4958
;   undefined4 DAT_006b495c
;   undefined4 DAT_006b4960
;   ... and 11 more
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_texture.cpp_getCurrentTexture_FUN_00545ad0
;   FUN_00432cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408880
        ;   Label: engine_3d.c_renderPolygonFullEffectsBufferedOp65_FUN_00408880
    PUSH ESI                            ; 00408881
    PUSH EDI                            ; 00408882
    PUSH EBP                            ; 00408883
    SUB ESP,0x8                         ; 00408884
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00408887
    LEA ESI,[EBP + 0x18]                ; 0040888b
    LEA EAX,[EBP + 0x8]                 ; 0040888e
    PUSH EAX                            ; 00408891
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00408892
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00404610()
    ADD ESP,0x4                         ; 00408897
    TEST EAX,EAX                        ; 0040889a
    JZ 0x00408a2f                       ; 0040889c
        ;   XREF to: 00408a2f (CONDITIONAL_JUMP)  ; LAB_00408a2f
    CMP dword ptr [0x01c03948],0x0      ; 004088a2 | DAT_01c03948
    JNZ 0x00408932                      ; 004088a9
        ;   XREF to: 00408932 (CONDITIONAL_JUMP)  ; LAB_00408932
    CMP dword ptr [0x005b7624],0x20     ; 004088af | DAT_005b7624
    JNZ 0x00408926                      ; 004088b6
        ;   XREF to: 00408926 (CONDITIONAL_JUMP)  ; LAB_00408926
    MOV dword ptr [0x01c00c7c],0x5300ec ; 004088b8 | DAT_01c00c7c | LAB_005300ec
    MOV EBX,0x1e7                       ; 004088c2
        ;   Label: LAB_004088c2
    MOV EDI,0x1                         ; 004088c7
    MOV ECX,0x6b029c                    ; 004088cc | DAT_006b029c
    MOV EAX,ESI                         ; 004088d1
    MOV dword ptr [0x01c039a0],EBX      ; 004088d3 | DAT_01c039a0
    MOV dword ptr [0x01c039a4],EDI      ; 004088d9 | DAT_01c039a4
    XOR EBX,EBX                         ; 004088df
    MOV EDX,dword ptr [EBP + 0x4]       ; 004088e1
        ;   Label: LAB_004088e1
    LEA EDX,[EDX + EDX*0x2]             ; 004088e4
    CMP EBX,EDX                         ; 004088e7
    JGE 0x00408959                      ; 004088e9
        ;   XREF to: 00408959 (CONDITIONAL_JUMP)  ; LAB_00408959
    MOV ESI,dword ptr [0x006b0264]      ; 004088eb | DAT_006b0264
    MOV EDX,dword ptr [EAX]             ; 004088f1
    ADD EDX,ESI                         ; 004088f3
    MOV dword ptr [ECX],EDX             ; 004088f5 | DAT_006b029c | DAT_006b02a0
    MOV EDX,dword ptr [EAX]             ; 004088f7
    ADD EDX,ESI                         ; 004088f9
    MOV EDI,ESI                         ; 004088fb
    IMUL ESI,EDX,0x30                   ; 004088fd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00408900
    MOV dword ptr [ESI + 0x5c502c],EDX  ; 00408903 | DAT_005c502c
    MOV ESI,EDI                         ; 00408909
    MOV EDX,dword ptr [EAX]             ; 0040890b
    ADD EDX,ESI                         ; 0040890d
    IMUL ESI,EDX,0x30                   ; 0040890f
    ADD EAX,0xc                         ; 00408912
    ADD ECX,0x4                         ; 00408915
    MOV EDX,dword ptr [EAX + -0x4]      ; 00408918
    ADD EBX,0x3                         ; 0040891b
    MOV dword ptr [ESI + 0x5c5030],EDX  ; 0040891e | DAT_005c5030
    JMP 0x004088e1                      ; 00408924
        ;   XREF to: 004088e1 (UNCONDITIONAL_JUMP)  ; LAB_004088e1
    MOV dword ptr [0x01c00c7c],0x530322 ; 00408926 | DAT_01c00c7c | LAB_00530322
        ;   Label: LAB_00408926
    JMP 0x004088c2                      ; 00408930
        ;   XREF to: 004088c2 (UNCONDITIONAL_JUMP)  ; LAB_004088c2
    CMP dword ptr [0x005b7624],0x20     ; 00408932 | DAT_005b7624
        ;   Label: LAB_00408932
    JNZ 0x0040894a                      ; 00408939
        ;   XREF to: 0040894a (CONDITIONAL_JUMP)  ; LAB_0040894a
    MOV dword ptr [0x01c00c7c],0x52f031 ; 0040893b | DAT_01c00c7c | LAB_0052f031
    JMP 0x004088c2                      ; 00408945
        ;   XREF to: 004088c2 (UNCONDITIONAL_JUMP)  ; LAB_004088c2
    MOV dword ptr [0x01c00c7c],0x52f823 ; 0040894a | DAT_01c00c7c | LAB_0052f823
        ;   Label: LAB_0040894a
    JMP 0x004088c2                      ; 00408954
        ;   XREF to: 004088c2 (UNCONDITIONAL_JUMP)  ; LAB_004088c2
    CMP dword ptr [0x006b494c],0x0      ; 00408959 | DAT_006b494c
        ;   Label: LAB_00408959
    JZ 0x00408a4b                       ; 00408960
        ;   XREF to: 00408a4b (CONDITIONAL_JUMP)  ; LAB_00408a4b
    MOV EDX,dword ptr [0x006b4950]      ; 00408966 | DAT_006b4950
    CMP EDX,0x9c4                       ; 0040896c
    JGE 0x00408a4b                      ; 00408972
        ;   XREF to: 00408a4b (CONDITIONAL_JUMP)  ; LAB_00408a4b
    MOV ECX,dword ptr [EBP + 0x4]       ; 00408978
    CMP ECX,0x4                         ; 0040897b
    JG 0x00408a4b                       ; 0040897e
        ;   XREF to: 00408a4b (CONDITIONAL_JUMP)  ; LAB_00408a4b
    MOV ESI,0x7fffffff                  ; 00408984
    LEA EAX,[EDX*0x8 + 0x0]             ; 00408989
    MOV EDI,dword ptr [0x006b4950]      ; 00408990 | DAT_006b4950
    ADD EAX,EDX                         ; 00408996
    XOR EBX,EBX                         ; 00408998
    SHL EAX,0x2                         ; 0040899a
    MOV dword ptr [ESP + 0x4],ESI       ; 0040899d
    SUB EAX,EDX                         ; 004089a1
    MOV EDX,0x6b4954                    ; 004089a3 | DAT_006b4954
    SHL EAX,0x3                         ; 004089a8
    INC EDI                             ; 004089ab
    ADD EDX,EAX                         ; 004089ac
    MOV dword ptr [0x006b4950],EDI      ; 004089ae | DAT_006b4950
    MOV dword ptr [ESP],EDX             ; 004089b4
    MOV dword ptr [EDX],ECX             ; 004089b7 | DAT_006b4954
    TEST ECX,ECX                        ; 004089b9
    JLE 0x004089f5                      ; 004089bb
        ;   XREF to: 004089f5 (CONDITIONAL_JUMP)  ; LAB_004089f5
    MOV EAX,EDX                         ; 004089bd
    XOR EDX,EDX                         ; 004089bf
    IMUL ESI,dword ptr [EDX + 0x6b029c],0x30 ; 004089c1 | DAT_006b029c | DAT_006b02a0
        ;   Label: LAB_004089c1
    LEA EDI,[EAX + 0x4]                 ; 004089c8
    MOV ECX,0xc                         ; 004089cb
    LEA ESI,[ESI + 0x5c5014]            ; 004089d0 | DAT_005c5014
    MOVSD.REP ES:EDI,ESI                ; 004089d6 | DAT_005c5014 | DAT_006b4958 | DAT_005c5018
    MOV ESI,dword ptr [ESP + 0x4]       ; 004089d8
    MOV ECX,dword ptr [EAX + 0xc]       ; 004089dc | DAT_006b4960
    CMP ECX,ESI                         ; 004089df
    JGE 0x004089e7                      ; 004089e1
        ;   XREF to: 004089e7 (CONDITIONAL_JUMP)  ; LAB_004089e7
    MOV dword ptr [ESP + 0x4],ECX       ; 004089e3
    ADD EAX,0x30                        ; 004089e7
        ;   Label: LAB_004089e7
    INC EBX                             ; 004089ea
    MOV EDI,dword ptr [EBP + 0x4]       ; 004089eb
    ADD EDX,0x4                         ; 004089ee
    CMP EBX,EDI                         ; 004089f1
    JL 0x004089c1                       ; 004089f3
        ;   XREF to: 004089c1 (CONDITIONAL_JUMP)  ; LAB_004089c1
    CALL engine_texture.cpp_getCurrentTexture_FUN_00545ad0 ; 004089f5
        ;   XREF to: 00545ad0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_getCurrentTexture_FUN_00545ad0()
        ;   Label: LAB_004089f5
    MOV EDI,dword ptr [ESP]             ; 004089fa
    MOV ECX,0x12                        ; 004089fd
    MOV ESI,EAX                         ; 00408a02
    LEA EDI,[EDI + 0xc4]                ; 00408a04
    MOV EDX,dword ptr [ESP]             ; 00408a0a
    MOV EAX,[0x005b763c]                ; 00408a0d | DAT_005b763c
    MOVSD.REP ES:EDI,ESI                ; 00408a12 | DAT_006b4a18 | DAT_006b4a1c
    MOV dword ptr [EDX + 0x10c],EAX     ; 00408a14 | DAT_006b4a60
    MOV EAX,[0x01c03998]                ; 00408a1a | DAT_01c03998
    MOV dword ptr [EDX + 0x110],EAX     ; 00408a1f | DAT_006b4a64
    MOV EAX,dword ptr [ESP + 0x4]       ; 00408a25
    MOV dword ptr [EDX + 0x114],EAX     ; 00408a29 | DAT_006b4a68
    MOV EDX,dword ptr [EBP + 0x4]       ; 00408a2f
        ;   Label: LAB_00408a2f
    LEA EAX,[EDX*0x4 + 0x0]             ; 00408a32
    SUB EAX,EDX                         ; 00408a39
    ADD EBP,0x18                        ; 00408a3b
    SHL EAX,0x2                         ; 00408a3e
    ADD EAX,EBP                         ; 00408a41
    ADD ESP,0x8                         ; 00408a43
    POP EBP                             ; 00408a46
    POP EDI                             ; 00408a47
    POP ESI                             ; 00408a48
    POP EBX                             ; 00408a49
    RET                                 ; 00408a4a
    PUSH 0x6b029c                       ; 00408a4b | DAT_006b029c
        ;   Label: LAB_00408a4b
    MOV EBX,dword ptr [EBP + 0x4]       ; 00408a50
    PUSH EBX                            ; 00408a53
    CALL FUN_00432cd0                   ; 00408a54
        ;   XREF to: 00432cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00432cd0()
    ADD ESP,0x8                         ; 00408a59
    JMP 0x00408a2f                      ; 00408a5c
        ;   XREF to: 00408a2f (UNCONDITIONAL_JUMP)  ; LAB_00408a2f

