; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_clipper_c_clipPolygonToViewFrustumAdvanced_FUN_0043d6e0(int vertex_count,int *vertex_indices)
;
; Parameters:
; int              Stack[0x4]:4   vertex_count
; int *            Stack[0x8]:4   vertex_indices
;
; Referenced Globals:
;   undefined1* switchdataD_0043d69c = 0043d94c
;   undefined1* PTR_caseD_3_0043d6a8 = 0043d976
;   undefined1* PTR_caseD_1_0043d6b0 = 0043dc5d
;   undefined1* PTR_caseD_3_0043d6b8 = 0043da25
;   undefined1* switchdataD_0043d6bc = 0043daa5
;   undefined1* PTR_caseD_3_0043d6c8 = 0043dacf
;   undefined1* switchdataD_0043d6cc = 0043db55
;   undefined1* PTR_caseD_1_0043d6d0 = 0043dd5b
;   undefined1* PTR_caseD_3_0043d6d8 = 0043db7f
;   string caseD_0
;   string caseD_2
;   undefined4 DAT_00713a7c
;   undefined4 DAT_007c7554
;   undefined4 DAT_007c7558
;   undefined4 DAT_007c755c
;   ... and 32 more
;
; Called Functions:
;   engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000
;   engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0
;   engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70
;   engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_special.cpp_drawPolygon2_FUN_00582370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d6e0
        ;   Label: engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_0043d6e0
    PUSH ESI                            ; 0043d6e1
    PUSH EDI                            ; 0043d6e2
    PUSH EBP                            ; 0043d6e3
    SUB ESP,0x1c                        ; 0043d6e4
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043d6e7
    MOV ECX,0xffffffff                  ; 0043d6eb
    XOR EDX,EDX                         ; 0043d6f0
    XOR ESI,ESI                         ; 0043d6f2
    TEST EBP,EBP                        ; 0043d6f4
    JLE 0x0043d718                      ; 0043d6f6
        ;   XREF to: 0043d718 (CONDITIONAL_JUMP)  ; LAB_0043d718
    MOV EAX,dword ptr [ESP + 0x34]      ; 0043d6f8
    IMUL EBX,dword ptr [EAX],0x30       ; 0043d6fc
        ;   Label: LAB_0043d6fc
    MOV EBX,dword ptr [EBX + 0x629024]  ; 0043d6ff
    TEST EBX,0x80000000                 ; 0043d705
    JZ 0x0043d70e                       ; 0043d70b
        ;   XREF to: 0043d70e (CONDITIONAL_JUMP)  ; LAB_0043d70e
    INC ESI                             ; 0043d70d
    ADD EAX,0x4                         ; 0043d70e
        ;   Label: LAB_0043d70e
    INC EDX                             ; 0043d711
    AND ECX,EBX                         ; 0043d712
    CMP EDX,EBP                         ; 0043d714
    JL 0x0043d6fc                       ; 0043d716
        ;   XREF to: 0043d6fc (CONDITIONAL_JUMP)  ; LAB_0043d6fc
    CMP ESI,EBP                         ; 0043d718
        ;   Label: LAB_0043d718
    JNZ 0x0043d725                      ; 0043d71a
        ;   XREF to: 0043d725 (CONDITIONAL_JUMP)  ; LAB_0043d725
    TEST CL,0xff                        ; 0043d71c
    JNZ 0x0043d7c1                      ; 0043d71f
        ;   XREF to: 0043d7c1 (CONDITIONAL_JUMP)  ; LAB_0043d7c1
    TEST ESI,ESI                        ; 0043d725
        ;   Label: LAB_0043d725
    JNZ 0x0043d88a                      ; 0043d727
        ;   XREF to: 0043d88a (CONDITIONAL_JUMP)  ; LAB_0043d88a
    CMP dword ptr [0x01c50948],0x0      ; 0043d72d | DAT_01c50948
    JZ 0x0043d833                       ; 0043d734
        ;   XREF to: 0043d833 (CONDITIONAL_JUMP)  ; LAB_0043d833
    XOR EAX,EAX                         ; 0043d73a
    TEST EBP,EBP                        ; 0043d73c
    JLE 0x0043d760                      ; 0043d73e
        ;   XREF to: 0043d760 (CONDITIONAL_JUMP)  ; LAB_0043d760
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043d740
    IMUL EDX,dword ptr [EBX],0x30       ; 0043d744
        ;   Label: LAB_0043d744
    INC EAX                             ; 0043d747
    ADD EDX,0x629014                    ; 0043d748
    ADD EBX,0x4                         ; 0043d74e
    MOV dword ptr [EAX*0x4 + 0x7c7b54],EDX ; 0043d751
    CMP EAX,EBP                         ; 0043d758
    JL 0x0043d744                       ; 0043d75a
        ;   XREF to: 0043d744 (CONDITIONAL_JUMP)  ; LAB_0043d744
    LEA EAX,[EAX]                       ; 0043d75c
    CMP dword ptr [0x00713a7c],0x0      ; 0043d760 | DAT_00713a7c
        ;   Label: LAB_0043d760
    JZ 0x0043d800                       ; 0043d767
        ;   XREF to: 0043d800 (CONDITIONAL_JUMP)  ; LAB_0043d800
    CMP EBP,0x3                         ; 0043d76d
    JLE 0x0043d7d3                      ; 0043d770
        ;   XREF to: 0043d7d3 (CONDITIONAL_JUMP)  ; LAB_0043d7d3
    LEA EAX,[EBP + -0x2]                ; 0043d772
    XOR EBX,EBX                         ; 0043d775
    MOV dword ptr [ESP],EAX             ; 0043d777
    LEA EDI,[EAX*0x4 + 0x0]             ; 0043d77a
    XOR ESI,ESI                         ; 0043d781
    TEST EDI,EDI                        ; 0043d783
    JLE 0x0043d7af                      ; 0043d785
        ;   XREF to: 0043d7af (CONDITIONAL_JUMP)  ; LAB_0043d7af
    MOV EAX,dword ptr [EBX + 0x7c7b60]  ; 0043d787
        ;   Label: LAB_0043d787
    PUSH EAX                            ; 0043d78d
    MOV EDX,dword ptr [EBX + 0x7c7b5c]  ; 0043d78e
    PUSH EDX                            ; 0043d794
    MOV ECX,dword ptr [0x007c7b58]      ; 0043d795 | DAT_007c7b58
    PUSH ECX                            ; 0043d79b
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0043d79c
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043d7a1
    TEST EAX,EAX                        ; 0043d7a4
    JZ 0x0043d7d0                       ; 0043d7a6
        ;   XREF to: 0043d7d0 (CONDITIONAL_JUMP)  ; LAB_0043d7d0
    ADD EBX,0x4                         ; 0043d7a8
        ;   Label: LAB_0043d7a8
    CMP EBX,EDI                         ; 0043d7ab
    JL 0x0043d787                       ; 0043d7ad
        ;   XREF to: 0043d787 (CONDITIONAL_JUMP)  ; LAB_0043d787
    CMP ESI,dword ptr [ESP]             ; 0043d7af
        ;   Label: LAB_0043d7af
    JNZ 0x0043d800                      ; 0043d7b2
        ;   XREF to: 0043d800 (CONDITIONAL_JUMP)  ; LAB_0043d800
    MOV EAX,0x1                         ; 0043d7b4
    ADD ESP,0x1c                        ; 0043d7b9
        ;   Label: LAB_0043d7b9
    POP EBP                             ; 0043d7bc
    POP EDI                             ; 0043d7bd
    POP ESI                             ; 0043d7be
    POP EBX                             ; 0043d7bf
    RET                                 ; 0043d7c0
    XOR ECX,ECX                         ; 0043d7c1
        ;   Label: LAB_0043d7c1
    MOV EAX,0x1                         ; 0043d7c3
    MOV dword ptr [0x007c7554],ECX      ; 0043d7c8 | DAT_007c7554
    JMP 0x0043d7b9                      ; 0043d7ce
        ;   XREF to: 0043d7b9 (UNCONDITIONAL_JUMP)  ; LAB_0043d7b9
    INC ESI                             ; 0043d7d0
        ;   Label: LAB_0043d7d0
    JMP 0x0043d7a8                      ; 0043d7d1
        ;   XREF to: 0043d7a8 (UNCONDITIONAL_JUMP)  ; LAB_0043d7a8
    MOV EAX,[0x007c7b60]                ; 0043d7d3 | DAT_007c7b60
        ;   Label: LAB_0043d7d3
    PUSH EAX                            ; 0043d7d8
    MOV EDX,dword ptr [0x007c7b5c]      ; 0043d7d9 | DAT_007c7b5c
    PUSH EDX                            ; 0043d7df
    MOV ECX,dword ptr [0x007c7b58]      ; 0043d7e0 | DAT_007c7b58
    PUSH ECX                            ; 0043d7e6
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0043d7e7
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; int engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60(SRenderVertex * v0, SRenderVertex * v1, SRenderVertex * v2)
    ADD ESP,0xc                         ; 0043d7ec
    TEST EAX,EAX                        ; 0043d7ef
    JNZ 0x0043d800                      ; 0043d7f1
        ;   XREF to: 0043d800 (CONDITIONAL_JUMP)  ; LAB_0043d800
    MOV EAX,0x1                         ; 0043d7f3
    ADD ESP,0x1c                        ; 0043d7f8
    POP EBP                             ; 0043d7fb
    POP EDI                             ; 0043d7fc
    POP ESI                             ; 0043d7fd
    POP EBX                             ; 0043d7fe
    RET                                 ; 0043d7ff
    MOV ESI,dword ptr [0x01c51d14]      ; 0043d800 | DAT_01c51d14
        ;   Label: LAB_0043d800
    PUSH ESI                            ; 0043d806
    LEA EAX,[EBP + -0x2]                ; 0043d807
    MOV EBX,dword ptr [0x01e7dac8]      ; 0043d80a | DAT_01e7dac8
    PUSH EBP                            ; 0043d810
    ADD EBX,EAX                         ; 0043d811
    PUSH 0x7c7b58                       ; 0043d813
    MOV dword ptr [0x01e7dac8],EBX      ; 0043d818 | DAT_01e7dac8
    CALL engine_special.cpp_drawPolygon2_FUN_00582370 ; 0043d81e
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; int engine_special.cpp_drawPolygon2_FUN_00582370(SRenderVertex * * vertex_array, int vertex_count, int render_flags)
    MOV EAX,0x1                         ; 0043d823
    ADD ESP,0xc                         ; 0043d828
    ADD ESP,0x1c                        ; 0043d82b
    POP EBP                             ; 0043d82e
    POP EDI                             ; 0043d82f
    POP ESI                             ; 0043d830
    POP EBX                             ; 0043d831
    RET                                 ; 0043d832
    MOV dword ptr [ESP + 0x8],ESI       ; 0043d833
        ;   Label: LAB_0043d833
    MOV dword ptr [0x007c7554],EBP      ; 0043d837 | DAT_007c7554
    TEST EBP,EBP                        ; 0043d83d
    JLE 0x0043d880                      ; 0043d83f
        ;   XREF to: 0043d880 (CONDITIONAL_JUMP)  ; LAB_0043d880
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043d841
    MOV EDX,0x7c7558                    ; 0043d845
    IMUL ESI,dword ptr [EBX],0x30       ; 0043d84a
        ;   Label: LAB_0043d84a
    MOV ECX,0x30                        ; 0043d84d
    ADD ESI,0x629014                    ; 0043d852
    MOV EDI,EDX                         ; 0043d858
    PUSH EDI                            ; 0043d85a
    MOV EAX,ECX                         ; 0043d85b
    SHR ECX,0x2                         ; 0043d85d
    MOVSD.REP ES:EDI,ESI                ; 0043d860
    MOV CL,AL                           ; 0043d862
    AND CL,0x3                          ; 0043d864
    MOVSB.REP ES:EDI,ESI                ; 0043d867
    POP EDI                             ; 0043d869
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043d86a
    ADD EBX,0x4                         ; 0043d86e
    INC EAX                             ; 0043d871
    ADD EDX,0x30                        ; 0043d872
    MOV dword ptr [ESP + 0x8],EAX       ; 0043d875
    CMP EBP,EAX                         ; 0043d879
    JG 0x0043d84a                       ; 0043d87b
        ;   XREF to: 0043d84a (CONDITIONAL_JUMP)  ; LAB_0043d84a
    LEA EAX,[EAX]                       ; 0043d87d
    XOR EAX,EAX                         ; 0043d880
        ;   Label: LAB_0043d880
    ADD ESP,0x1c                        ; 0043d882
    POP EBP                             ; 0043d885
    POP EDI                             ; 0043d886
    POP ESI                             ; 0043d887
    POP EBX                             ; 0043d888
    RET                                 ; 0043d889
    XOR EDX,EDX                         ; 0043d88a
        ;   Label: LAB_0043d88a
    MOV dword ptr [0x007c8420],EBP      ; 0043d88c | DAT_007c8420
    MOV dword ptr [0x007c8424],EDX      ; 0043d892 | DAT_007c8424
    MOV dword ptr [0x007c8428],EDX      ; 0043d898 | DAT_007c8428
    MOV dword ptr [0x007c842c],EDX      ; 0043d89e | DAT_007c842c
    MOV dword ptr [0x007c7554],EDX      ; 0043d8a4 | DAT_007c7554
    MOV dword ptr [ESP + 0x4],EDX       ; 0043d8aa
    TEST EBP,EBP                        ; 0043d8ae
    JLE 0x0043d8f0                      ; 0043d8b0
        ;   XREF to: 0043d8f0 (CONDITIONAL_JUMP)  ; LAB_0043d8f0
    MOV EBX,dword ptr [ESP + 0x34]      ; 0043d8b2
    MOV EDX,0x7c8a30                    ; 0043d8b6
    IMUL ESI,dword ptr [EBX],0x30       ; 0043d8bb
        ;   Label: LAB_0043d8bb
    MOV ECX,0x30                        ; 0043d8be
    MOV EDI,EDX                         ; 0043d8c3
    ADD ESI,0x629014                    ; 0043d8c5
    PUSH EDI                            ; 0043d8cb
    MOV EAX,ECX                         ; 0043d8cc
    SHR ECX,0x2                         ; 0043d8ce
    MOVSD.REP ES:EDI,ESI                ; 0043d8d1
    MOV CL,AL                           ; 0043d8d3
    AND CL,0x3                          ; 0043d8d5
    MOVSB.REP ES:EDI,ESI                ; 0043d8d8
    POP EDI                             ; 0043d8da
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043d8db
    ADD EBX,0x4                         ; 0043d8df
    INC ECX                             ; 0043d8e2
    ADD EDX,0x30                        ; 0043d8e3
    MOV dword ptr [ESP + 0x4],ECX       ; 0043d8e6
    CMP EBP,ECX                         ; 0043d8ea
    JG 0x0043d8bb                       ; 0043d8ec
        ;   XREF to: 0043d8bb (CONDITIONAL_JUMP)  ; LAB_0043d8bb
    MOV EAX,EAX                         ; 0043d8ee
    XOR EDI,EDI                         ; 0043d8f0
        ;   Label: LAB_0043d8f0
    MOV EBP,dword ptr [0x007c8420]      ; 0043d8f2 | DAT_007c8420
    MOV dword ptr [ESP + 0xc],EDI       ; 0043d8f8
    TEST EBP,EBP                        ; 0043d8fc
    JLE 0x0043d990                      ; 0043d8fe
        ;   XREF to: 0043d990 (CONDITIONAL_JUMP)  ; LAB_0043d990
    MOV EBX,0x7c8a30                    ; 0043d904
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043d909
        ;   Label: LAB_0043d909
    MOV EDI,dword ptr [0x007c8420]      ; 0043d90d | DAT_007c8420
    INC EAX                             ; 0043d913
    CMP EAX,EDI                         ; 0043d914
    JNZ 0x0043d91a                      ; 0043d916
        ;   XREF to: 0043d91a (CONDITIONAL_JUMP)  ; LAB_0043d91a
    XOR EAX,EDI                         ; 0043d918
    IMUL EAX,EAX,0x30                   ; 0043d91a
        ;   Label: LAB_0043d91a
    MOV EBP,0x7c8a30                    ; 0043d91d | DAT_007c8a30
    MOV EDX,EBX                         ; 0043d922
    MOV ECX,dword ptr [EBX]             ; 0043d924
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043d926
    ADD EBP,EAX                         ; 0043d929
    XOR EAX,EAX                         ; 0043d92b
    CMP ECX,ESI                         ; 0043d92d
    JL 0x0043d936                       ; 0043d92f
        ;   XREF to: 0043d936 (CONDITIONAL_JUMP)  ; LAB_0043d936
    MOV EAX,0x1                         ; 0043d931
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043d936 | DAT_007c8a38
        ;   Label: LAB_0043d936
    CMP EDI,dword ptr [EBP]             ; 0043d939 | DAT_007c8a30
    JG 0x0043d940                       ; 0043d93c
        ;   XREF to: 0043d940 (CONDITIONAL_JUMP)  ; LAB_0043d940
    OR AL,0x2                           ; 0043d93e
    CMP EAX,0x3                         ; 0043d940
        ;   Label: LAB_0043d940
    JA 0x0043d976                       ; 0043d943
        ;   XREF to: 0043d976 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d69c]  ; 0043d945 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043d94c | DAT_007c8424
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043d953
    MOV ESI,EDX                         ; 0043d958
    ADD EDI,0x7c8430                    ; 0043d95a | DAT_007c8430
    PUSH EDI                            ; 0043d960
    MOV EAX,ECX                         ; 0043d961
    SHR ECX,0x2                         ; 0043d963
    MOVSD.REP ES:EDI,ESI                ; 0043d966 | DAT_007c8430 | DAT_007c8434
    MOV CL,AL                           ; 0043d968
    AND CL,0x3                          ; 0043d96a
    MOVSB.REP ES:EDI,ESI                ; 0043d96d | DAT_007c8434
    POP EDI                             ; 0043d96f
    INC dword ptr [0x007c8424]          ; 0043d970 | DAT_007c8424
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043d976
        ;   Label: caseD_3
    MOV EDX,dword ptr [0x007c8420]      ; 0043d97a | DAT_007c8420
    INC EAX                             ; 0043d980
    ADD EBX,0x30                        ; 0043d981
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d984
    CMP EAX,EDX                         ; 0043d988
    JL 0x0043d909                       ; 0043d98a
        ;   XREF to: 0043d909 (CONDITIONAL_JUMP)  ; LAB_0043d909
    MOV ECX,dword ptr [0x007c8424]      ; 0043d990 | DAT_007c8424
        ;   Label: LAB_0043d990
    CMP ECX,0x3                         ; 0043d996
    JL 0x0043dbd4                       ; 0043d999
        ;   XREF to: 0043dbd4 (CONDITIONAL_JUMP)  ; LAB_0043dbd4
    XOR EBX,EBX                         ; 0043d99f
    MOV dword ptr [ESP + 0x10],EBX      ; 0043d9a1
    TEST ECX,ECX                        ; 0043d9a5
    JLE 0x0043da3f                      ; 0043d9a7
        ;   XREF to: 0043da3f (CONDITIONAL_JUMP)  ; LAB_0043da3f
    MOV EBX,0x7c8430                    ; 0043d9ad | DAT_007c8430
    MOV EAX,dword ptr [ESP + 0x10]      ; 0043d9b2
        ;   Label: LAB_0043d9b2
    MOV EBP,dword ptr [0x007c8424]      ; 0043d9b6 | DAT_007c8424
    INC EAX                             ; 0043d9bc
    CMP EAX,EBP                         ; 0043d9bd
    JNZ 0x0043d9c3                      ; 0043d9bf
        ;   XREF to: 0043d9c3 (CONDITIONAL_JUMP)  ; LAB_0043d9c3
    XOR EAX,EBP                         ; 0043d9c1
    IMUL EAX,EAX,0x30                   ; 0043d9c3
        ;   Label: LAB_0043d9c3
    MOV EBP,0x7c8430                    ; 0043d9c6 | DAT_007c8430
    MOV EDX,EBX                         ; 0043d9cb
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043d9cd | DAT_007c8438 | DAT_007c8468
    MOV ESI,dword ptr [EBX]             ; 0043d9d0 | DAT_007c8430 | DAT_007c8460
    NEG ECX                             ; 0043d9d2
    ADD EBP,EAX                         ; 0043d9d4
    XOR EAX,EAX                         ; 0043d9d6
    CMP ECX,ESI                         ; 0043d9d8
    JL 0x0043d9e1                       ; 0043d9da
        ;   XREF to: 0043d9e1 (CONDITIONAL_JUMP)  ; LAB_0043d9e1
    MOV EAX,0x1                         ; 0043d9dc
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043d9e1 | DAT_007c8438
        ;   Label: LAB_0043d9e1
    MOV EDI,dword ptr [EBP]             ; 0043d9e4 | DAT_007c8430
    NEG ECX                             ; 0043d9e7
    CMP ECX,EDI                         ; 0043d9e9
    JL 0x0043d9ef                       ; 0043d9eb
        ;   XREF to: 0043d9ef (CONDITIONAL_JUMP)  ; LAB_0043d9ef
    OR AL,0x2                           ; 0043d9ed
    CMP EAX,0x3                         ; 0043d9ef
        ;   Label: LAB_0043d9ef
    JA 0x0043da25                       ; 0043d9f2
        ;   XREF to: 0043da25 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d6ac]  ; 0043d9f4 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043d9fb | DAT_007c8428
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043da02
    MOV ESI,EDX                         ; 0043da07
    ADD EDI,0x7c9030                    ; 0043da09 | DAT_007c9030
    PUSH EDI                            ; 0043da0f
    MOV EAX,ECX                         ; 0043da10
    SHR ECX,0x2                         ; 0043da12
    MOVSD.REP ES:EDI,ESI                ; 0043da15 | DAT_007c8430 | DAT_007c9030 | DAT_007c8434
    MOV CL,AL                           ; 0043da17
    AND CL,0x3                          ; 0043da19
    MOVSB.REP ES:EDI,ESI                ; 0043da1c | DAT_007c8434 | DAT_007c9034
    POP EDI                             ; 0043da1e
    INC dword ptr [0x007c8428]          ; 0043da1f | DAT_007c8428
    MOV EDX,dword ptr [ESP + 0x10]      ; 0043da25
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c8424]      ; 0043da29 | DAT_007c8424
    INC EDX                             ; 0043da2f
    ADD EBX,0x30                        ; 0043da30
    MOV dword ptr [ESP + 0x10],EDX      ; 0043da33
    CMP EDX,ECX                         ; 0043da37
    JL 0x0043d9b2                       ; 0043da39
        ;   XREF to: 0043d9b2 (CONDITIONAL_JUMP)  ; LAB_0043d9b2
    MOV EBX,dword ptr [0x007c8428]      ; 0043da3f | DAT_007c8428
        ;   Label: LAB_0043da3f
    CMP EBX,0x3                         ; 0043da45
    JL 0x0043dbd4                       ; 0043da48
        ;   XREF to: 0043dbd4 (CONDITIONAL_JUMP)  ; LAB_0043dbd4
    XOR ESI,ESI                         ; 0043da4e
    MOV dword ptr [ESP + 0x18],ESI      ; 0043da50
    TEST EBX,EBX                        ; 0043da54
    JLE 0x0043dae9                      ; 0043da56
        ;   XREF to: 0043dae9 (CONDITIONAL_JUMP)  ; LAB_0043dae9
    MOV EBX,0x7c9030                    ; 0043da5c | DAT_007c9030
    MOV EAX,dword ptr [ESP + 0x18]      ; 0043da61
        ;   Label: LAB_0043da61
    MOV EBP,dword ptr [0x007c8428]      ; 0043da65 | DAT_007c8428
    INC EAX                             ; 0043da6b
    CMP EAX,EBP                         ; 0043da6c
    JNZ 0x0043da72                      ; 0043da6e
        ;   XREF to: 0043da72 (CONDITIONAL_JUMP)  ; LAB_0043da72
    XOR EAX,EBP                         ; 0043da70
    IMUL EAX,EAX,0x30                   ; 0043da72
        ;   Label: LAB_0043da72
    MOV EBP,0x7c9030                    ; 0043da75 | DAT_007c9030
    MOV EDX,EBX                         ; 0043da7a
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043da7c | DAT_007c9034 | DAT_007c9064
    MOV ESI,dword ptr [EBX + 0x8]       ; 0043da7f | DAT_007c9038 | DAT_007c9068
    ADD EBP,EAX                         ; 0043da82
    XOR EAX,EAX                         ; 0043da84
    CMP ECX,ESI                         ; 0043da86
    JL 0x0043da8f                       ; 0043da88
        ;   XREF to: 0043da8f (CONDITIONAL_JUMP)  ; LAB_0043da8f
    MOV EAX,0x1                         ; 0043da8a
    MOV EDI,dword ptr [EBP + 0x8]       ; 0043da8f | DAT_007c9038
        ;   Label: LAB_0043da8f
    CMP EDI,dword ptr [EBP + 0x4]       ; 0043da92 | DAT_007c9034
    JG 0x0043da99                       ; 0043da95
        ;   XREF to: 0043da99 (CONDITIONAL_JUMP)  ; LAB_0043da99
    OR AL,0x2                           ; 0043da97
    CMP EAX,0x3                         ; 0043da99
        ;   Label: LAB_0043da99
    JA 0x0043dacf                       ; 0043da9c
        ;   XREF to: 0043dacf (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d6bc]  ; 0043da9e | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043daa5 | DAT_007c842c
        ;   Label: caseD_0
    MOV ECX,0x30                        ; 0043daac
    MOV ESI,EDX                         ; 0043dab1
    ADD EDI,0x7c9630                    ; 0043dab3 | DAT_007c9630
    PUSH EDI                            ; 0043dab9
    MOV EAX,ECX                         ; 0043daba
    SHR ECX,0x2                         ; 0043dabc
    MOVSD.REP ES:EDI,ESI                ; 0043dabf | DAT_007c9060 | DAT_007c9630 | DAT_007c9064
    MOV CL,AL                           ; 0043dac1
    AND CL,0x3                          ; 0043dac3
    MOVSB.REP ES:EDI,ESI                ; 0043dac6 | DAT_007c9064 | DAT_007c9634
    POP EDI                             ; 0043dac8
    INC dword ptr [0x007c842c]          ; 0043dac9 | DAT_007c842c
    MOV EDX,dword ptr [ESP + 0x18]      ; 0043dacf
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c8428]      ; 0043dad3 | DAT_007c8428
    INC EDX                             ; 0043dad9
    ADD EBX,0x30                        ; 0043dada
    MOV dword ptr [ESP + 0x18],EDX      ; 0043dadd
    CMP EDX,ECX                         ; 0043dae1
    JL 0x0043da61                       ; 0043dae3
        ;   XREF to: 0043da61 (CONDITIONAL_JUMP)  ; LAB_0043da61
    MOV EBX,dword ptr [0x007c842c]      ; 0043dae9 | DAT_007c842c
        ;   Label: LAB_0043dae9
    CMP EBX,0x3                         ; 0043daef
    JL 0x0043dbd4                       ; 0043daf2
        ;   XREF to: 0043dbd4 (CONDITIONAL_JUMP)  ; LAB_0043dbd4
    XOR ESI,ESI                         ; 0043daf8
    MOV dword ptr [ESP + 0x14],ESI      ; 0043dafa
    TEST EBX,EBX                        ; 0043dafe
    JLE 0x0043db99                      ; 0043db00
        ;   XREF to: 0043db99 (CONDITIONAL_JUMP)  ; LAB_0043db99
    MOV EBX,0x7c9630                    ; 0043db06 | DAT_007c9630
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043db0b
        ;   Label: LAB_0043db0b
    MOV EDI,dword ptr [0x007c842c]      ; 0043db0f | DAT_007c842c
    INC EAX                             ; 0043db15
    CMP EAX,EDI                         ; 0043db16
    JNZ 0x0043db1c                      ; 0043db18
        ;   XREF to: 0043db1c (CONDITIONAL_JUMP)  ; LAB_0043db1c
    XOR EAX,EDI                         ; 0043db1a
    IMUL EAX,EAX,0x30                   ; 0043db1c
        ;   Label: LAB_0043db1c
    MOV EBP,0x7c9630                    ; 0043db1f | DAT_007c9630
    MOV EDX,EBX                         ; 0043db24
    MOV ECX,dword ptr [EBX + 0x8]       ; 0043db26 | DAT_007c9638 | DAT_007c9668
    MOV ESI,dword ptr [EBX + 0x4]       ; 0043db29 | DAT_007c9634 | DAT_007c9664
    NEG ECX                             ; 0043db2c
    ADD EBP,EAX                         ; 0043db2e
    XOR EAX,EAX                         ; 0043db30
    CMP ECX,ESI                         ; 0043db32
    JL 0x0043db3b                       ; 0043db34
        ;   XREF to: 0043db3b (CONDITIONAL_JUMP)  ; LAB_0043db3b
    MOV EAX,0x1                         ; 0043db36
    MOV ECX,dword ptr [EBP + 0x8]       ; 0043db3b | DAT_007c9638
        ;   Label: LAB_0043db3b
    MOV EDI,dword ptr [EBP + 0x4]       ; 0043db3e | DAT_007c9634
    NEG ECX                             ; 0043db41
    CMP ECX,EDI                         ; 0043db43
    JL 0x0043db49                       ; 0043db45
        ;   XREF to: 0043db49 (CONDITIONAL_JUMP)  ; LAB_0043db49
    OR AL,0x2                           ; 0043db47
    CMP EAX,0x3                         ; 0043db49
        ;   Label: LAB_0043db49
    JA 0x0043db7f                       ; 0043db4c
        ;   XREF to: 0043db7f (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [EAX*0x4 + 0x43d6cc]  ; 0043db4e | = "k=Tu|" | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EDX,dword ptr [ESP + 0x14]      ; 0043db7f
        ;   Label: caseD_3
    MOV ECX,dword ptr [0x007c842c]      ; 0043db83 | DAT_007c842c
    INC EDX                             ; 0043db89
    ADD EBX,0x30                        ; 0043db8a
    MOV dword ptr [ESP + 0x14],EDX      ; 0043db8d
    CMP EDX,ECX                         ; 0043db91
    JL 0x0043db0b                       ; 0043db93
        ;   XREF to: 0043db0b (CONDITIONAL_JUMP)  ; LAB_0043db0b
    MOV EBX,dword ptr [0x007c7554]      ; 0043db99 | DAT_007c7554
        ;   Label: LAB_0043db99
    CMP EBX,0x3                         ; 0043db9f
    JL 0x0043dbd4                       ; 0043dba2
        ;   XREF to: 0043dbd4 (CONDITIONAL_JUMP)  ; LAB_0043dbd4
    MOV EAX,0x7c7558                    ; 0043dba4 | DAT_007c7558
    XOR EBP,EBP                         ; 0043dba9
    TEST EBX,EBX                        ; 0043dbab
    JLE 0x0043dbd4                      ; 0043dbad
        ;   XREF to: 0043dbd4 (CONDITIONAL_JUMP)  ; LAB_0043dbd4
    MOV ECX,dword ptr [EAX + 0x8]       ; 0043dbaf | DAT_007c7560 | DAT_007c7590
        ;   Label: LAB_0043dbaf
    TEST ECX,ECX                        ; 0043dbb2
    JNZ 0x0043ddda                      ; 0043dbb4
        ;   XREF to: 0043ddda (CONDITIONAL_JUMP)  ; LAB_0043ddda
    MOV dword ptr [EAX + 0x8],0x1       ; 0043dbba | DAT_007c7560 | DAT_007c7590
    MOV dword ptr [EAX],ECX             ; 0043dbc1 | DAT_007c7558 | DAT_007c7588
    MOV dword ptr [EAX + 0x4],ECX       ; 0043dbc3 | DAT_007c755c | DAT_007c758c
    MOV EDX,dword ptr [0x007c7554]      ; 0043dbc6 | DAT_007c7554
        ;   Label: LAB_0043dbc6
    INC EBP                             ; 0043dbcc
    ADD EAX,0x30                        ; 0043dbcd
    CMP EBP,EDX                         ; 0043dbd0
    JL 0x0043dbaf                       ; 0043dbd2
        ;   XREF to: 0043dbaf (CONDITIONAL_JUMP)  ; LAB_0043dbaf
    XOR EAX,EAX                         ; 0043dbd4
        ;   Label: LAB_0043dbd4
    ADD ESP,0x1c                        ; 0043dbd6
    POP EBP                             ; 0043dbd9
    POP EDI                             ; 0043dbda
    POP ESI                             ; 0043dbdb
    POP EBX                             ; 0043dbdc
    RET                                 ; 0043dbdd
    IMUL EAX,dword ptr [0x007c8424],0x30 ; 0043dbde | DAT_007c8424
        ;   Label: caseD_1
    ADD EAX,0x7c8430                    ; 0043dbe5 | DAT_007c8430
    PUSH EAX                            ; 0043dbea
    PUSH EDX                            ; 0043dbeb
    PUSH EBP                            ; 0043dbec
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043dbed
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c8424]      ; 0043dbf2 | DAT_007c8424
    INC ESI                             ; 0043dbf8
    ADD ESP,0xc                         ; 0043dbf9
    MOV dword ptr [0x007c8424],ESI      ; 0043dbfc | DAT_007c8424
    JMP 0x0043d976                      ; 0043dc02
        ;   XREF to: 0043d976 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8424],0x30 ; 0043dc07 | DAT_007c8424
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043dc0e
    MOV ESI,EDX                         ; 0043dc13
    ADD EDI,0x7c8430                    ; 0043dc15 | DAT_007c8430
    PUSH EDI                            ; 0043dc1b
    MOV EAX,ECX                         ; 0043dc1c
    SHR ECX,0x2                         ; 0043dc1e
    MOVSD.REP ES:EDI,ESI                ; 0043dc21 | DAT_007c8430 | DAT_007c8434
    MOV CL,AL                           ; 0043dc23
    AND CL,0x3                          ; 0043dc25
    MOVSB.REP ES:EDI,ESI                ; 0043dc28 | DAT_007c8434
    POP EDI                             ; 0043dc2a
    MOV ECX,dword ptr [0x007c8424]      ; 0043dc2b | DAT_007c8424
    INC ECX                             ; 0043dc31
    MOV dword ptr [0x007c8424],ECX      ; 0043dc32 | DAT_007c8424
    IMUL EAX,ECX,0x30                   ; 0043dc38
    ADD EAX,0x7c8430                    ; 0043dc3b | DAT_007c8430
    PUSH EAX                            ; 0043dc40
    PUSH EBP                            ; 0043dc41
    PUSH EDX                            ; 0043dc42
    CALL engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70 ; 0043dc43
        ;   XREF to: 0043cc70 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043cc70(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c8424]      ; 0043dc48 | DAT_007c8424
    INC EDI                             ; 0043dc4e
    ADD ESP,0xc                         ; 0043dc4f
    MOV dword ptr [0x007c8424],EDI      ; 0043dc52 | DAT_007c8424
    JMP 0x0043d976                      ; 0043dc58
        ;   XREF to: 0043d976 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c8428],0x30 ; 0043dc5d | DAT_007c8428
        ;   Label: caseD_1
    ADD EAX,0x7c9030                    ; 0043dc64 | DAT_007c9030
    PUSH EAX                            ; 0043dc69
    PUSH EDX                            ; 0043dc6a | DAT_007c8430
    PUSH EBP                            ; 0043dc6b
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043dc6c
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c8428]      ; 0043dc71 | DAT_007c8428
    INC ESI                             ; 0043dc77
    ADD ESP,0xc                         ; 0043dc78
    MOV dword ptr [0x007c8428],ESI      ; 0043dc7b | DAT_007c8428
    JMP 0x0043da25                      ; 0043dc81
        ;   XREF to: 0043da25 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c8428],0x30 ; 0043dc86 | DAT_007c8428
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043dc8d
    MOV ESI,EDX                         ; 0043dc92
    ADD EDI,0x7c9030                    ; 0043dc94 | DAT_007c9030
    PUSH EDI                            ; 0043dc9a
    MOV EAX,ECX                         ; 0043dc9b
    SHR ECX,0x2                         ; 0043dc9d
    MOVSD.REP ES:EDI,ESI                ; 0043dca0 | DAT_007c8430 | DAT_007c9030 | DAT_007c8434
    MOV CL,AL                           ; 0043dca2
    AND CL,0x3                          ; 0043dca4
    MOVSB.REP ES:EDI,ESI                ; 0043dca7 | DAT_007c8434 | DAT_007c9034
    POP EDI                             ; 0043dca9
    MOV ECX,dword ptr [0x007c8428]      ; 0043dcaa | DAT_007c8428
    INC ECX                             ; 0043dcb0
    MOV dword ptr [0x007c8428],ECX      ; 0043dcb1 | DAT_007c8428
    IMUL EAX,ECX,0x30                   ; 0043dcb7
    ADD EAX,0x7c9030                    ; 0043dcba | DAT_007c9030
    PUSH EAX                            ; 0043dcbf
    PUSH EBP                            ; 0043dcc0
    PUSH EDX                            ; 0043dcc1 | DAT_007c8430
    CALL engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0 ; 0043dcc2
        ;   XREF to: 0043cda0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_0043cda0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c8428]      ; 0043dcc7 | DAT_007c8428
    INC EDI                             ; 0043dccd
    ADD ESP,0xc                         ; 0043dcce
    MOV dword ptr [0x007c8428],EDI      ; 0043dcd1 | DAT_007c8428
    JMP 0x0043da25                      ; 0043dcd7
        ;   XREF to: 0043da25 (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c842c],0x30 ; 0043dcdc | DAT_007c842c
        ;   Label: caseD_1
    ADD EAX,0x7c9630                    ; 0043dce3 | DAT_007c9630
    PUSH EAX                            ; 0043dce8
    PUSH EDX                            ; 0043dce9 | DAT_007c9060
    PUSH EBP                            ; 0043dcea
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043dceb
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c842c]      ; 0043dcf0 | DAT_007c842c
    INC ESI                             ; 0043dcf6
    ADD ESP,0xc                         ; 0043dcf7
    MOV dword ptr [0x007c842c],ESI      ; 0043dcfa | DAT_007c842c
    JMP 0x0043dacf                      ; 0043dd00
        ;   XREF to: 0043dacf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EDI,dword ptr [0x007c842c],0x30 ; 0043dd05 | DAT_007c842c
        ;   Label: caseD_2
    MOV ECX,0x30                        ; 0043dd0c
    MOV ESI,EDX                         ; 0043dd11
    ADD EDI,0x7c9630                    ; 0043dd13 | DAT_007c9630
    PUSH EDI                            ; 0043dd19
    MOV EAX,ECX                         ; 0043dd1a
    SHR ECX,0x2                         ; 0043dd1c
    MOVSD.REP ES:EDI,ESI                ; 0043dd1f | DAT_007c9060 | DAT_007c9630 | DAT_007c9064
    MOV CL,AL                           ; 0043dd21
    AND CL,0x3                          ; 0043dd23
    MOVSB.REP ES:EDI,ESI                ; 0043dd26 | DAT_007c9064 | DAT_007c9634
    POP EDI                             ; 0043dd28
    MOV ECX,dword ptr [0x007c842c]      ; 0043dd29 | DAT_007c842c
    INC ECX                             ; 0043dd2f
    MOV dword ptr [0x007c842c],ECX      ; 0043dd30 | DAT_007c842c
    IMUL EAX,ECX,0x30                   ; 0043dd36
    ADD EAX,0x7c9630                    ; 0043dd39 | DAT_007c9630
    PUSH EAX                            ; 0043dd3e
    PUSH EBP                            ; 0043dd3f
    PUSH EDX                            ; 0043dd40 | DAT_007c9060
    CALL engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0 ; 0043dd41
        ;   XREF to: 0043ced0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_0043ced0(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV EDI,dword ptr [0x007c842c]      ; 0043dd46 | DAT_007c842c
    INC EDI                             ; 0043dd4c
    ADD ESP,0xc                         ; 0043dd4d
    MOV dword ptr [0x007c842c],EDI      ; 0043dd50 | DAT_007c842c
    JMP 0x0043dacf                      ; 0043dd56
        ;   XREF to: 0043dacf (UNCONDITIONAL_JUMP)  ; caseD_3
    IMUL EAX,dword ptr [0x007c7554],0x30 ; 0043dd5b | DAT_007c7554
        ;   Label: caseD_1
    ADD EAX,0x7c7558                    ; 0043dd62 | DAT_007c7558
    PUSH EAX                            ; 0043dd67
    PUSH EDX                            ; 0043dd68 | DAT_007c9630
    PUSH EBP                            ; 0043dd69
    CALL engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000 ; 0043dd6a
        ;   XREF to: 0043d000 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_interpolateVertexBottomClipAdvanced_FUN_0043d000(SRenderVertex * v1, SRenderVertex * v2, SRenderVertex * output)
    MOV ESI,dword ptr [0x007c7554]      ; 0043dd6f | DAT_007c7554
    INC ESI                             ; 0043dd75
    ADD ESP,0xc                         ; 0043dd76
    MOV dword ptr [0x007c7554],ESI      ; 0043dd79 | DAT_007c7554
    JMP 0x0043db7f                      ; 0043dd7f
        ;   XREF to: 0043db7f (UNCONDITIONAL_JUMP)  ; caseD_3
    CMP ECX,dword ptr [EAX]             ; 0043ddda | DAT_007c7588
        ;   Label: LAB_0043ddda
    JGE 0x0043dde5                      ; 0043dddc
        ;   XREF to: 0043dde5 (CONDITIONAL_JUMP)  ; LAB_0043dde5
    MOV dword ptr [EAX],ECX             ; 0043ddde | DAT_007c7588
    JMP 0x0043dbc6                      ; 0043dde0
        ;   XREF to: 0043dbc6 (UNCONDITIONAL_JUMP)  ; LAB_0043dbc6
    MOV EDX,ECX                         ; 0043dde5
        ;   Label: LAB_0043dde5
    MOV ESI,dword ptr [EAX]             ; 0043dde7 | DAT_007c7588
    NEG EDX                             ; 0043dde9
    CMP EDX,ESI                         ; 0043ddeb
    JLE 0x0043ddf6                      ; 0043dded
        ;   XREF to: 0043ddf6 (CONDITIONAL_JUMP)  ; LAB_0043ddf6
    MOV dword ptr [EAX],EDX             ; 0043ddef | DAT_007c7588
    JMP 0x0043dbc6                      ; 0043ddf1
        ;   XREF to: 0043dbc6 (UNCONDITIONAL_JUMP)  ; LAB_0043dbc6
    MOV EDI,dword ptr [EAX + 0x8]       ; 0043ddf6 | DAT_007c7590
        ;   Label: LAB_0043ddf6
    MOV ECX,dword ptr [EAX + 0x4]       ; 0043ddf9 | DAT_007c758c
    CMP ECX,EDI                         ; 0043ddfc
    JLE 0x0043de08                      ; 0043ddfe
        ;   XREF to: 0043de08 (CONDITIONAL_JUMP)  ; LAB_0043de08
    MOV dword ptr [EAX + 0x4],EDI       ; 0043de00 | DAT_007c758c
    JMP 0x0043dbc6                      ; 0043de03
        ;   XREF to: 0043dbc6 (UNCONDITIONAL_JUMP)  ; LAB_0043dbc6
    CMP EDX,ECX                         ; 0043de08
        ;   Label: LAB_0043de08
    JLE 0x0043dbc6                      ; 0043de0a
        ;   XREF to: 0043dbc6 (CONDITIONAL_JUMP)  ; LAB_0043dbc6
    MOV dword ptr [EAX + 0x4],EDX       ; 0043de10 | DAT_007c758c
    JMP 0x0043dbc6                      ; 0043de13
        ;   XREF to: 0043dbc6 (UNCONDITIONAL_JUMP)  ; LAB_0043dbc6

