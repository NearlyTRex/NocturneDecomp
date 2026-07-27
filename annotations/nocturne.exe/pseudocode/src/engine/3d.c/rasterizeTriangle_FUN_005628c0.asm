; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_rasterizeTriangle_FUN_005628c0(int *param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0045ed80 at 0045ee3c
;
; Referenced Globals:
;   undefined4 DAT_005b7644
;   undefined4 DAT_006b0278
;   undefined4 DAT_006b0280
;   undefined4 DAT_01b4d1fc
;   undefined4 DAT_01b4d768
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c02594
;   undefined4 DAT_01c039a0
;   undefined4 DAT_01c039a4
;   undefined4 DAT_01e52ef8
;   undefined4 DAT_02de497c
;   undefined4 DAT_02de4980
;   ... and 3 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10
;   engine_prim.c_prepareDepthBuffer_FUN_004f9870
;   engine_prim.c_replaceWWithDepth_FUN_004f99d0
;   engine_special.cpp_drawPolygon_FUN_00532620
;   engine_special.cpp_renderScanline_FUN_00530710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005628c0
        ;   Label: engine_3d.c_rasterizeTriangle_FUN_005628c0
    PUSH ESI                            ; 005628c1
    PUSH EDI                            ; 005628c2
    PUSH EBP                            ; 005628c3
    SUB ESP,0x20                        ; 005628c4
    MOV EBP,dword ptr [0x02de497c]      ; 005628c7 | DAT_02de497c
    CMP dword ptr [0x005b7644],0x0      ; 005628cd | DAT_005b7644
    JZ 0x00562983                       ; 005628d4
        ;   XREF to: 00562983 (CONDITIONAL_JUMP)  ; LAB_00562983
    MOV EBX,dword ptr [ESP + 0x38]      ; 005628da
    MOV ECX,dword ptr [ESP + 0x34]      ; 005628de
    XOR ESI,ESI                         ; 005628e2
    TEST EBX,EBX                        ; 005628e4
    JLE 0x00562983                      ; 005628e6
        ;   XREF to: 00562983 (CONDITIONAL_JUMP)  ; LAB_00562983
    MOV EDI,dword ptr [ESP + 0x38]      ; 005628ec
    MOV AH,byte ptr [ECX + 0x13]        ; 005628f0
        ;   Label: LAB_005628f0
    MOV dword ptr [0x02de497c],EBP      ; 005628f3 | DAT_02de497c
    TEST AH,0x80                        ; 005628f9
    JZ 0x00562971                       ; 005628fc
        ;   XREF to: 00562971 (CONDITIONAL_JUMP)  ; LAB_00562971
    TEST byte ptr [0x01c039a4],0x6      ; 005628fe | DAT_01c039a4
    JZ 0x00562919                       ; 00562905
        ;   XREF to: 00562919 (CONDITIONAL_JUMP)  ; LAB_00562919
    MOV EAX,0x7fffffff                  ; 00562907
    MOV EDX,EAX                         ; 0056290c
    MOV EBX,dword ptr [ECX + 0x8]       ; 0056290e
    SAR EDX,0x1f                        ; 00562911
    IDIV EBX                            ; 00562914
    MOV dword ptr [ECX + 0xc],EAX       ; 00562916
    MOV DH,byte ptr [0x01c039a4]        ; 00562919 | DAT_01c039a4
        ;   Label: LAB_00562919
    MOV dword ptr [0x02de497c],EBP      ; 0056291f | DAT_02de497c
    TEST DH,0x1                         ; 00562925
    JZ 0x0056293c                       ; 00562928
        ;   XREF to: 0056293c (CONDITIONAL_JUMP)  ; LAB_0056293c
    MOV EAX,0x7fffffff                  ; 0056292a
    MOV EDX,EAX                         ; 0056292f
    MOV EBX,dword ptr [ECX + 0x8]       ; 00562931
    SAR EDX,0x1f                        ; 00562934
    IDIV EBX                            ; 00562937
    MOV dword ptr [ECX + 0xc],EAX       ; 00562939
    MOV EDX,dword ptr [0x01c00c48]      ; 0056293c | DAT_01c00c48
        ;   Label: LAB_0056293c
    MOV EBX,dword ptr [ECX + 0x8]       ; 00562942
    MOV EAX,dword ptr [ECX]             ; 00562945
    IMUL EDX                            ; 00562947
    IDIV EBX                            ; 00562949
    MOV EDX,dword ptr [0x01c00c50]      ; 0056294b | DAT_01c00c50
    ADD EAX,EDX                         ; 00562951
    MOV EBX,dword ptr [ECX + 0x8]       ; 00562953
    MOV dword ptr [ECX + 0x10],EAX      ; 00562956
    MOV EDX,dword ptr [0x01c00c4c]      ; 00562959 | DAT_01c00c4c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0056295f
    IMUL EDX                            ; 00562962
    IDIV EBX                            ; 00562964
    MOV EDX,dword ptr [0x01c00c54]      ; 00562966 | DAT_01c00c54
    ADD EAX,EDX                         ; 0056296c
    MOV dword ptr [ECX + 0x14],EAX      ; 0056296e
    MOV EBP,dword ptr [0x02de497c]      ; 00562971 | DAT_02de497c
        ;   Label: LAB_00562971
    INC ESI                             ; 00562977
    ADD ECX,0x30                        ; 00562978
    CMP ESI,EDI                         ; 0056297b
    JL 0x005628f0                       ; 0056297d
        ;   XREF to: 005628f0 (CONDITIONAL_JUMP)  ; LAB_005628f0
    MOV EAX,[0x006b0280]                ; 00562983 | DAT_006b0280
        ;   Label: LAB_00562983
    MOV dword ptr [0x02de497c],EBP      ; 00562988 | DAT_02de497c
    TEST EAX,EAX                        ; 0056298e
    JNZ 0x00562b6c                      ; 00562990
        ;   XREF to: 00562b6c (CONDITIONAL_JUMP)  ; LAB_00562b6c
    MOV ECX,dword ptr [0x01e52ef8]      ; 00562996 | DAT_01e52ef8
        ;   Label: LAB_00562996
    INC ECX                             ; 0056299c
    MOV EBX,dword ptr [0x01c02594]      ; 0056299d | DAT_01c02594
    MOV dword ptr [0x01e52ef8],ECX      ; 005629a3 | DAT_01e52ef8
    TEST EBX,EBX                        ; 005629a9
    JZ 0x005629ba                       ; 005629ab
        ;   XREF to: 005629ba (CONDITIONAL_JUMP)  ; LAB_005629ba
    CMP dword ptr [0x006b0278],0x0      ; 005629ad | DAT_006b0278
    JZ 0x00562b9f                       ; 005629b4
        ;   XREF to: 00562b9f (CONDITIONAL_JUMP)  ; LAB_00562b9f
    MOV EAX,[0x01c039a4]                ; 005629ba | DAT_01c039a4
        ;   Label: LAB_005629ba
    MOV EBP,dword ptr [0x02de497c]      ; 005629bf | DAT_02de497c
    CMP EAX,0x1                         ; 005629c5
    JNC 0x00562bf4                      ; 005629c8
        ;   XREF to: 00562bf4 (CONDITIONAL_JUMP)  ; LAB_00562bf4
    MOV ECX,0x4b0                       ; 005629ce
        ;   Label: LAB_005629ce
    MOV ESI,dword ptr [ESP + 0x38]      ; 005629d3
    XOR EBX,EBX                         ; 005629d7
    XOR EBP,EBP                         ; 005629d9
    XOR EDI,EDI                         ; 005629db
    MOV dword ptr [0x02de4e04],EBX      ; 005629dd | DAT_02de4e04
    MOV dword ptr [0x02de4e00],ECX      ; 005629e3 | DAT_02de4e00
    TEST ESI,ESI                        ; 005629e9
    JLE 0x00562a3b                      ; 005629eb
        ;   XREF to: 00562a3b (CONDITIONAL_JUMP)  ; LAB_00562a3b
    MOV ESI,dword ptr [ESP + 0x38]      ; 005629ed
        ;   Label: LAB_005629ed
    LEA EAX,[EDI + 0x1]                 ; 005629f1
    CMP EAX,ESI                         ; 005629f4
    JL 0x005629fa                       ; 005629f6
        ;   XREF to: 005629fa (CONDITIONAL_JUMP)  ; LAB_005629fa
    XOR EAX,EAX                         ; 005629f8
    IMUL EAX,EAX,0x30                   ; 005629fa
        ;   Label: LAB_005629fa
    MOV EDX,dword ptr [ESP + 0x34]      ; 005629fd
    ADD EDX,EAX                         ; 00562a01
    IMUL EAX,EDI,0x30                   ; 00562a03
    MOV dword ptr [ESP + 0xc],EDX       ; 00562a06
    MOV EDX,dword ptr [ESP + 0x34]      ; 00562a0a
    ADD EDX,EAX                         ; 00562a0e
    MOV EAX,dword ptr [ESP + 0xc]       ; 00562a10
    MOV dword ptr [ESP + 0x8],EDX       ; 00562a14
    MOV ESI,EDX                         ; 00562a18
    MOV dword ptr [ESP + 0x10],EAX      ; 00562a1a
    MOV EDX,dword ptr [EDX + 0x14]      ; 00562a1e
    MOV EAX,dword ptr [EAX + 0x14]      ; 00562a21
    SAR EDX,0x10                        ; 00562a24
    SAR EAX,0x10                        ; 00562a27
    CMP EDX,EAX                         ; 00562a2a
    JNZ 0x00562c00                      ; 00562a2c
        ;   XREF to: 00562c00 (CONDITIONAL_JUMP)  ; LAB_00562c00
    MOV ECX,dword ptr [ESP + 0x38]      ; 00562a32
        ;   Label: LAB_00562a32
    INC EDI                             ; 00562a36
    CMP EDI,ECX                         ; 00562a37
    JL 0x005629ed                       ; 00562a39
        ;   XREF to: 005629ed (CONDITIONAL_JUMP)  ; LAB_005629ed
    MOV ESI,0x2de4980                   ; 00562a3b
        ;   Label: LAB_00562a3b
    MOV EDI,dword ptr [0x02de4e00]      ; 00562a40 | DAT_02de4e00
    XOR EBX,EBX                         ; 00562a46
    XOR EAX,EAX                         ; 00562a48
    MOV dword ptr [0x01b4d768],EBX      ; 00562a4a | DAT_01b4d768
    TEST EBP,EBP                        ; 00562a50
    JLE 0x00562d0e                      ; 00562a52
        ;   XREF to: 00562d0e (CONDITIONAL_JUMP)  ; LAB_00562d0e
    CMP EDI,dword ptr [ESI]             ; 00562a58 | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562a58
    JNZ 0x00562d02                      ; 00562a5a
        ;   XREF to: 00562d02 (CONDITIONAL_JUMP)  ; LAB_00562d02
    TEST ESI,ESI                        ; 00562a60
    JZ 0x00562d02                       ; 00562a62
        ;   XREF to: 00562d02 (CONDITIONAL_JUMP)  ; LAB_00562d02
    MOV dword ptr [ESP + 0x1c],ESI      ; 00562a68 | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562a68
    MOV dword ptr [0x02de497c],EBP      ; 00562a6c | DAT_02de497c
    TEST ESI,ESI                        ; 00562a72
    JZ 0x00562b5e                       ; 00562a74
        ;   XREF to: 00562b5e (CONDITIONAL_JUMP)  ; LAB_00562b5e
    MOV EAX,0x2de4980                   ; 00562a7a
    MOV EBX,dword ptr [0x02de4e00]      ; 00562a7f | DAT_02de4e00
    MOV ECX,ESI                         ; 00562a85
    XOR EDX,EDX                         ; 00562a87
    TEST EBP,EBP                        ; 00562a89
    JLE 0x00562d21                      ; 00562a8b
        ;   XREF to: 00562d21 (CONDITIONAL_JUMP)  ; LAB_00562d21
    CMP EBX,dword ptr [EAX]             ; 00562a91 | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562a91
    JNZ 0x00562d15                      ; 00562a93
        ;   XREF to: 00562d15 (CONDITIONAL_JUMP)  ; LAB_00562d15
    CMP EAX,ECX                         ; 00562a99
    JZ 0x00562d15                       ; 00562a9b
        ;   XREF to: 00562d15 (CONDITIONAL_JUMP)  ; LAB_00562d15
    MOV dword ptr [ESP + 0x18],EAX      ; 00562aa1 | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562aa1
    MOV dword ptr [0x02de497c],EBP      ; 00562aa5 | DAT_02de497c
    TEST EAX,EAX                        ; 00562aab
    JZ 0x00562b5e                       ; 00562aad
        ;   XREF to: 00562b5e (CONDITIONAL_JUMP)  ; LAB_00562b5e
    MOV EAX,[0x02de4e00]                ; 00562ab3 | DAT_02de4e00
    MOV dword ptr [ESP + 0x14],EAX      ; 00562ab8
        ;   Label: LAB_00562ab8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00562abc
    MOV EAX,dword ptr [ESP + 0x14]      ; 00562ac0
    MOV EDI,dword ptr [EDX + 0x4]       ; 00562ac4
    MOV dword ptr [0x02de497c],EBP      ; 00562ac7 | DAT_02de497c
    CMP EAX,EDI                         ; 00562acd
    JL 0x00562b0a                       ; 00562acf
        ;   XREF to: 00562b0a (CONDITIONAL_JUMP)  ; LAB_00562b0a
    MOV ECX,dword ptr [ESP + 0x18]      ; 00562ad1
    MOV EBX,EAX                         ; 00562ad5
    MOV dword ptr [EDX],0xffffffff      ; 00562ad7
    MOV EAX,0x2de4980                   ; 00562add
    XOR EDX,EDX                         ; 00562ae2
    TEST EBP,EBP                        ; 00562ae4
    JLE 0x00562d34                      ; 00562ae6
        ;   XREF to: 00562d34 (CONDITIONAL_JUMP)  ; LAB_00562d34
    CMP EBX,dword ptr [EAX]             ; 00562aec | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562aec
    JNZ 0x00562d28                      ; 00562aee
        ;   XREF to: 00562d28 (CONDITIONAL_JUMP)  ; LAB_00562d28
    CMP EAX,ECX                         ; 00562af4
    JZ 0x00562d28                       ; 00562af6
        ;   XREF to: 00562d28 (CONDITIONAL_JUMP)  ; LAB_00562d28
    MOV dword ptr [ESP + 0x1c],EAX      ; 00562afc | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562afc
    MOV dword ptr [0x02de497c],EBP      ; 00562b00 | DAT_02de497c
    TEST EAX,EAX                        ; 00562b06
    JZ 0x00562b5e                       ; 00562b08
        ;   XREF to: 00562b5e (CONDITIONAL_JUMP)  ; LAB_00562b5e
    MOV EDX,dword ptr [ESP + 0x18]      ; 00562b0a
        ;   Label: LAB_00562b0a
    MOV EAX,dword ptr [ESP + 0x14]      ; 00562b0e
    CMP EAX,dword ptr [EDX + 0x4]       ; 00562b12
    JL 0x00562d4e                       ; 00562b15
        ;   XREF to: 00562d4e (CONDITIONAL_JUMP)  ; LAB_00562d4e
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00562b1b
    MOV EBP,dword ptr [0x02de497c]      ; 00562b1f | DAT_02de497c
    MOV EBX,EAX                         ; 00562b25
    MOV dword ptr [EDX],0xffffffff      ; 00562b27
    MOV EAX,0x2de4980                   ; 00562b2d
    XOR EDX,EDX                         ; 00562b32
    TEST EBP,EBP                        ; 00562b34
    JLE 0x00562d47                      ; 00562b36
        ;   XREF to: 00562d47 (CONDITIONAL_JUMP)  ; LAB_00562d47
    CMP EBX,dword ptr [EAX]             ; 00562b3c | DAT_02de4980 | DAT_02de49c8
        ;   Label: LAB_00562b3c
    JNZ 0x00562d3b                      ; 00562b3e
        ;   XREF to: 00562d3b (CONDITIONAL_JUMP)  ; LAB_00562d3b
    CMP EAX,ECX                         ; 00562b44
    JZ 0x00562d3b                       ; 00562b46
        ;   XREF to: 00562d3b (CONDITIONAL_JUMP)  ; LAB_00562d3b
    MOV dword ptr [ESP + 0x18],EAX      ; 00562b4c | DAT_02de49c8 | DAT_02de4980
        ;   Label: LAB_00562b4c
    MOV dword ptr [0x02de497c],EBP      ; 00562b50 | DAT_02de497c
    TEST EAX,EAX                        ; 00562b56
    JNZ 0x00562d4e                      ; 00562b58
        ;   XREF to: 00562d4e (CONDITIONAL_JUMP)  ; LAB_00562d4e
    MOV EBP,dword ptr [0x02de497c]      ; 00562b5e | DAT_02de497c
        ;   Label: LAB_00562b5e
    ADD ESP,0x20                        ; 00562b64
    POP EBP                             ; 00562b67
    POP EDI                             ; 00562b68
    POP ESI                             ; 00562b69
    POP EBX                             ; 00562b6a
    RET                                 ; 00562b6b
    MOV EAX,dword ptr [ESP + 0x34]      ; 00562b6c
        ;   Label: LAB_00562b6c
    ADD EAX,0x60                        ; 00562b70
    PUSH EAX                            ; 00562b73
    MOV EAX,dword ptr [ESP + 0x38]      ; 00562b74
    ADD EAX,0x30                        ; 00562b78
    PUSH EAX                            ; 00562b7b
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00562b7c
    PUSH EDX                            ; 00562b80
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10 ; 00562b81
        ;   XREF to: 004f9a10 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_004f9a10()
    ADD ESP,0xc                         ; 00562b86
    TEST EAX,EAX                        ; 00562b89
    JNZ 0x00562996                      ; 00562b8b
        ;   XREF to: 00562996 (CONDITIONAL_JUMP)  ; LAB_00562996
    MOV EBP,dword ptr [0x02de497c]      ; 00562b91 | DAT_02de497c
    ADD ESP,0x20                        ; 00562b97
    POP EBP                             ; 00562b9a
    POP EDI                             ; 00562b9b
    POP ESI                             ; 00562b9c
    POP EBX                             ; 00562b9d
    RET                                 ; 00562b9e
    MOV EDI,dword ptr [0x01c039a0]      ; 00562b9f | DAT_01c039a0
        ;   Label: LAB_00562b9f
    PUSH EDI                            ; 00562ba5
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00562ba6
    PUSH EAX                            ; 00562baa
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00562bab
    PUSH EDX                            ; 00562baf
    CALL engine_special.cpp_drawPolygon_FUN_00532620 ; 00562bb0
        ;   XREF to: 00532620 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon_FUN_00532620()
    ADD ESP,0xc                         ; 00562bb5
    MOV EBP,dword ptr [0x02de497c]      ; 00562bb8 | DAT_02de497c
    ADD ESP,0x20                        ; 00562bbe
    POP EBP                             ; 00562bc1
    POP EDI                             ; 00562bc2
    POP ESI                             ; 00562bc3
    POP EBX                             ; 00562bc4
    RET                                 ; 00562bc5
    MOV EAX,dword ptr [ESP + 0x38]      ; 00562bc6
        ;   Label: LAB_00562bc6
    PUSH EAX                            ; 00562bca
    MOV EDX,dword ptr [ESP + 0x38]      ; 00562bcb
    PUSH EDX                            ; 00562bcf
    CALL engine_prim.c_prepareDepthBuffer_FUN_004f9870 ; 00562bd0
        ;   XREF to: 004f9870 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_prepareDepthBuffer_FUN_004f9870()
    ADD ESP,0x8                         ; 00562bd5
    JMP 0x005629ce                      ; 00562bd8
        ;   XREF to: 005629ce (UNCONDITIONAL_JUMP)  ; LAB_005629ce
    MOV EDI,dword ptr [ESP + 0x38]      ; 00562bdd
        ;   Label: LAB_00562bdd
    PUSH EDI                            ; 00562be1
    MOV EBP,dword ptr [ESP + 0x38]      ; 00562be2
    PUSH EBP                            ; 00562be6
    CALL engine_prim.c_replaceWWithDepth_FUN_004f99d0 ; 00562be7
        ;   XREF to: 004f99d0 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_replaceWWithDepth_FUN_004f99d0()
    ADD ESP,0x8                         ; 00562bec
    JMP 0x005629ce                      ; 00562bef
        ;   XREF to: 005629ce (UNCONDITIONAL_JUMP)  ; LAB_005629ce
    JBE 0x00562bc6                      ; 00562bf4
        ;   XREF to: 00562bc6 (CONDITIONAL_JUMP)  ; LAB_00562bc6
        ;   Label: LAB_00562bf4
    CMP EAX,0x6                         ; 00562bf6
    JZ 0x00562bdd                       ; 00562bf9
        ;   XREF to: 00562bdd (CONDITIONAL_JUMP)  ; LAB_00562bdd
    JMP 0x005629ce                      ; 00562bfb
        ;   XREF to: 005629ce (UNCONDITIONAL_JUMP)  ; LAB_005629ce
    MOV ECX,ESI                         ; 00562c00
        ;   Label: LAB_00562c00
    MOV ECX,dword ptr [ECX + 0x14]      ; 00562c02
    MOV EBX,dword ptr [ESP + 0xc]       ; 00562c05
    CMP ECX,dword ptr [EBX + 0x14]      ; 00562c09
    JLE 0x00562c1e                      ; 00562c0c
        ;   XREF to: 00562c1e (CONDITIONAL_JUMP)  ; LAB_00562c1e
    MOV ECX,dword ptr [ESP + 0x8]       ; 00562c0e
    MOV ESI,EBX                         ; 00562c12
    MOV dword ptr [ESP + 0x10],ECX      ; 00562c14
    MOV ECX,EDX                         ; 00562c18
    MOV EDX,EAX                         ; 00562c1a
    MOV EAX,ECX                         ; 00562c1c
    IMUL EBX,EBP,0x48                   ; 00562c1e
        ;   Label: LAB_00562c1e
    ADD EBX,0x2de4980                   ; 00562c21
    MOV dword ptr [EBX],EDX             ; 00562c27 | DAT_02de4980
    MOV ECX,dword ptr [0x02de4e00]      ; 00562c29 | DAT_02de4e00
    MOV dword ptr [EBX + 0x4],EAX       ; 00562c2f
    CMP EDX,ECX                         ; 00562c32
    JGE 0x00562c3c                      ; 00562c34
        ;   XREF to: 00562c3c (CONDITIONAL_JUMP)  ; LAB_00562c3c
    MOV dword ptr [0x02de4e00],EDX      ; 00562c36 | DAT_02de4e00
    CMP EAX,dword ptr [0x02de4e04]      ; 00562c3c | DAT_02de4e04
        ;   Label: LAB_00562c3c
    JLE 0x00562c49                      ; 00562c42
        ;   XREF to: 00562c49 (CONDITIONAL_JUMP)  ; LAB_00562c49
    MOV [0x02de4e04],EAX                ; 00562c44 | DAT_02de4e04
    MOV ECX,dword ptr [ESP + 0x10]      ; 00562c49
        ;   Label: LAB_00562c49
    MOV EAX,dword ptr [ESI + 0x14]      ; 00562c4d
    MOV ECX,dword ptr [ECX + 0x14]      ; 00562c50
    SUB ECX,EAX                         ; 00562c53
    CMP ECX,0x10000                     ; 00562c55
    JNC 0x00562cf2                      ; 00562c5b
        ;   XREF to: 00562cf2 (CONDITIONAL_JUMP)  ; LAB_00562cf2
    XOR ECX,ECX                         ; 00562c61
    MOV EAX,dword ptr [ESI + 0x14]      ; 00562c63
        ;   Label: LAB_00562c63
    AND EAX,0xffff                      ; 00562c66
    XOR AX,0xffff                       ; 00562c6b
    MOV dword ptr [ESP],EAX             ; 00562c6f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00562c72
    MOV EDX,dword ptr [ESI + 0x10]      ; 00562c76
    MOV EAX,dword ptr [EAX + 0x10]      ; 00562c79
    SUB EAX,EDX                         ; 00562c7c
    MOV EDX,EAX                         ; 00562c7e
    MOV EAX,ECX                         ; 00562c80
    MOV dword ptr [0x02de497c],EBP      ; 00562c82 | DAT_02de497c
    IMUL EDX                            ; 00562c88
    SHRD EAX,EDX,0x10                   ; 00562c8a
    MOV EDX,EAX                         ; 00562c8e
    MOV dword ptr [EBX + 0xc],EAX       ; 00562c90
    MOV EAX,dword ptr [ESP]             ; 00562c93
    IMUL EDX                            ; 00562c96
    SHRD EAX,EDX,0x10                   ; 00562c98
    MOV dword ptr [ESP + 0x4],EAX       ; 00562c9c
    MOV EDX,dword ptr [ESP + 0x4]       ; 00562ca0
    MOV EAX,dword ptr [ESI + 0x10]      ; 00562ca4
    ADD EAX,EDX                         ; 00562ca7
    MOV dword ptr [EBX + 0x8],EAX       ; 00562ca9
    MOV EAX,dword ptr [ESP + 0x10]      ; 00562cac
    MOV EDX,dword ptr [ESI + 0x8]       ; 00562cb0
    MOV EAX,dword ptr [EAX + 0x8]       ; 00562cb3
    SUB EAX,EDX                         ; 00562cb6
    MOV EDX,EAX                         ; 00562cb8
    SHL EDX,0x8                         ; 00562cba
    MOV EAX,ECX                         ; 00562cbd
    IMUL EDX                            ; 00562cbf
    SHRD EAX,EDX,0x10                   ; 00562cc1
    MOV EDX,EAX                         ; 00562cc5
    MOV dword ptr [EBX + 0x2c],EAX      ; 00562cc7
    MOV EAX,dword ptr [ESP]             ; 00562cca
    MOV ECX,dword ptr [ESI + 0x8]       ; 00562ccd
    MOV ESI,dword ptr [0x01b4d1fc]      ; 00562cd0 | DAT_01b4d1fc
    SHL ECX,0x8                         ; 00562cd6
    IMUL EDX                            ; 00562cd9
    SHRD EAX,EDX,0x10                   ; 00562cdb
    SUB ECX,ESI                         ; 00562cdf
    MOV EBP,dword ptr [0x02de497c]      ; 00562ce1 | DAT_02de497c
    ADD ECX,EAX                         ; 00562ce7
    INC EBP                             ; 00562ce9
    MOV dword ptr [EBX + 0x28],ECX      ; 00562cea
    JMP 0x00562a32                      ; 00562ced
        ;   XREF to: 00562a32 (UNCONDITIONAL_JUMP)  ; LAB_00562a32
    MOV EAX,0xffffffff                  ; 00562cf2
        ;   Label: LAB_00562cf2
    XOR EDX,EDX                         ; 00562cf7
    DIV ECX                             ; 00562cf9
    MOV ECX,EAX                         ; 00562cfb
    JMP 0x00562c63                      ; 00562cfd
        ;   XREF to: 00562c63 (UNCONDITIONAL_JUMP)  ; LAB_00562c63
    INC EAX                             ; 00562d02
        ;   Label: LAB_00562d02
    ADD ESI,0x48                        ; 00562d03
    CMP EAX,EBP                         ; 00562d06
    JL 0x00562a58                       ; 00562d08
        ;   XREF to: 00562a58 (CONDITIONAL_JUMP)  ; LAB_00562a58
    XOR ESI,ESI                         ; 00562d0e
        ;   Label: LAB_00562d0e
    JMP 0x00562a68                      ; 00562d10
        ;   XREF to: 00562a68 (UNCONDITIONAL_JUMP)  ; LAB_00562a68
    INC EDX                             ; 00562d15
        ;   Label: LAB_00562d15
    ADD EAX,0x48                        ; 00562d16
    CMP EDX,EBP                         ; 00562d19
    JL 0x00562a91                       ; 00562d1b
        ;   XREF to: 00562a91 (CONDITIONAL_JUMP)  ; LAB_00562a91
    XOR EAX,EAX                         ; 00562d21
        ;   Label: LAB_00562d21
    JMP 0x00562aa1                      ; 00562d23
        ;   XREF to: 00562aa1 (UNCONDITIONAL_JUMP)  ; LAB_00562aa1
    INC EDX                             ; 00562d28
        ;   Label: LAB_00562d28
    ADD EAX,0x48                        ; 00562d29
    CMP EDX,EBP                         ; 00562d2c
    JL 0x00562aec                       ; 00562d2e
        ;   XREF to: 00562aec (CONDITIONAL_JUMP)  ; LAB_00562aec
    XOR EAX,EAX                         ; 00562d34
        ;   Label: LAB_00562d34
    JMP 0x00562afc                      ; 00562d36
        ;   XREF to: 00562afc (UNCONDITIONAL_JUMP)  ; LAB_00562afc
    INC EDX                             ; 00562d3b
        ;   Label: LAB_00562d3b
    ADD EAX,0x48                        ; 00562d3c | DAT_02de49c8
    CMP EDX,EBP                         ; 00562d3f
    JL 0x00562b3c                       ; 00562d41
        ;   XREF to: 00562b3c (CONDITIONAL_JUMP)  ; LAB_00562b3c
    XOR EAX,EAX                         ; 00562d47
        ;   Label: LAB_00562d47
    JMP 0x00562b4c                      ; 00562d49
        ;   XREF to: 00562b4c (UNCONDITIONAL_JUMP)  ; LAB_00562b4c
    MOV EDI,dword ptr [ESP + 0x18]      ; 00562d4e
        ;   Label: LAB_00562d4e
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00562d52
    MOV EBX,dword ptr [ESP + 0x14]      ; 00562d56
    CALL engine_special.cpp_renderScanline_FUN_00530710 ; 00562d5a
        ;   XREF to: 00530710 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_renderScanline_FUN_00530710()
    CMP dword ptr [0x01b4d768],0x0      ; 00562d5f | DAT_01b4d768
    JNZ 0x00562b5e                      ; 00562d66
        ;   XREF to: 00562b5e (CONDITIONAL_JUMP)  ; LAB_00562b5e
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00562d6c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00562d70
    MOV ECX,dword ptr [EDX + 0x8]       ; 00562d74
    MOV EAX,dword ptr [EAX + 0xc]       ; 00562d77
    MOV EBX,dword ptr [EDX + 0x28]      ; 00562d7a
    ADD ECX,EAX                         ; 00562d7d
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00562d7f
    MOV dword ptr [EDX + 0x8],ECX       ; 00562d82
    ADD EBX,EAX                         ; 00562d85
    MOV EAX,dword ptr [ESP + 0x18]      ; 00562d87
    MOV dword ptr [EDX + 0x28],EBX      ; 00562d8b
    MOV EDX,dword ptr [ESP + 0x18]      ; 00562d8e
    MOV EAX,dword ptr [EAX + 0xc]       ; 00562d92
    MOV ESI,dword ptr [EDX + 0x8]       ; 00562d95
    MOV EDI,dword ptr [EDX + 0x28]      ; 00562d98
    ADD ESI,EAX                         ; 00562d9b
    MOV EAX,dword ptr [EDX + 0x2c]      ; 00562d9d
    MOV EBP,dword ptr [0x02de497c]      ; 00562da0 | DAT_02de497c
    ADD EDI,EAX                         ; 00562da6
    MOV EAX,dword ptr [ESP + 0x14]      ; 00562da8
    MOV dword ptr [EDX + 0x8],ESI       ; 00562dac
    INC EAX                             ; 00562daf
    MOV dword ptr [EDX + 0x28],EDI      ; 00562db0
    JMP 0x00562ab8                      ; 00562db3
        ;   XREF to: 00562ab8 (UNCONDITIONAL_JUMP)  ; LAB_00562ab8

