; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_userClipPolyList_FUN_004f8750(float *vertices,int vertex_count,ushort *indices,int triangle_count)
;
; Parameters:
; float *          Stack[0x4]:4   vertices
; int              Stack[0x8]:4   vertex_count
; ushort *         Stack[0xc]:4   indices
; int              Stack[0x10]:4   triangle_count
;
; XREF[3]:
;   engine_mini3d.cpp_polyListD3DL_FUN_004f3c40 at 004f3def
;   engine_mini3d.cpp_polyListL_FUN_004f3ef0 at 004f400f
;   engine_mini3d.cpp_polyList_FUN_004f3920 at 004f3b6b
;
; Referenced Globals:
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d0988c
;   undefined4 DAT_01d09890
;   undefined4 DAT_01d09894
;   undefined4 DAT_01d09898
;   ... and 21 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_malloc_FUN_005b8580
;   engine_mini3d.cpp_clipToUserPlane_FUN_004f8610
;   engine_mini3d.cpp_drawTransformedList_FUN_004f6d00
;   engine_mini3d.cpp_projectVertex_FUN_004f5860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f8750
        ;   Label: engine_mini3d.cpp_userClipPolyList_FUN_004f8750
    PUSH ESI                            ; 004f8751
    PUSH EDI                            ; 004f8752
    PUSH EBP                            ; 004f8753
    SUB ESP,0x9c                        ; 004f8754
    MOV EDX,dword ptr [ESP + 0xb4]      ; 004f875a
    XOR EBP,EBP                         ; 004f8761
    TEST EDX,EDX                        ; 004f8763
    JLE 0x004f8829                      ; 004f8765
        ;   XREF to: 004f8829 (CONDITIONAL_JUMP)  ; LAB_004f8829
    FLD float ptr [0x01d098b4]          ; 004f876b | DAT_01d098b4
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004f8771
    MOV ECX,dword ptr [EAX]             ; 004f8778
        ;   Label: LAB_004f8778
    MOV dword ptr [ESP + 0x70],ECX      ; 004f877a
    FLD float ptr [ESP + 0x70]          ; 004f877e
    FMUL float ptr [0x01d0988c]         ; 004f8782 | DAT_01d0988c
    FLD float ptr [ESP + 0x70]          ; 004f8788
    FMUL float ptr [0x01d09890]         ; 004f878c | DAT_01d09890
    MOV ECX,dword ptr [EAX + 0x4]       ; 004f8792
    FLD float ptr [ESP + 0x70]          ; 004f8795
    MOV dword ptr [ESP + 0x74],ECX      ; 004f8799
    FMUL float ptr [0x01d09894]         ; 004f879d | DAT_01d09894
    FLD float ptr [ESP + 0x74]          ; 004f87a3
    FMUL float ptr [0x01d09898]         ; 004f87a7 | DAT_01d09898
    FLD float ptr [ESP + 0x74]          ; 004f87ad
    FMUL float ptr [0x01d0989c]         ; 004f87b1 | DAT_01d0989c
    MOV ECX,dword ptr [EAX + 0x8]       ; 004f87b7
    FLD float ptr [ESP + 0x74]          ; 004f87ba
    MOV dword ptr [ESP + 0x78],ECX      ; 004f87be
    FXCH ST2                            ; 004f87c2
    FADDP ST5,ST0                       ; 004f87c4
    FXCH                                ; 004f87c6
    FMUL float ptr [0x01d098a0]         ; 004f87c8 | DAT_01d098a0
    FLD float ptr [ESP + 0x78]          ; 004f87ce
    FMUL float ptr [0x01d098a4]         ; 004f87d2 | DAT_01d098a4
    FXCH ST2                            ; 004f87d8
    FADDP ST4,ST0                       ; 004f87da
    FADDP ST2,ST0                       ; 004f87dc
    FLD float ptr [ESP + 0x78]          ; 004f87de
    FMUL float ptr [0x01d098a8]         ; 004f87e2 | DAT_01d098a8
    FLD float ptr [ESP + 0x78]          ; 004f87e8
    FMUL float ptr [0x01d098ac]         ; 004f87ec | DAT_01d098ac
    ADD EAX,0x40                        ; 004f87f2
    INC EBP                             ; 004f87f5
    FXCH ST2                            ; 004f87f6
    FADDP ST5,ST0                       ; 004f87f8
    FADDP ST3,ST0                       ; 004f87fa
    FADDP                               ; 004f87fc
    FXCH ST2                            ; 004f87fe
    FADD float ptr [0x01d098b0]         ; 004f8800 | DAT_01d098b0
    FXCH                                ; 004f8806
    FADD ST0,ST3                        ; 004f8808
    FXCH ST2                            ; 004f880a
    FADD float ptr [0x01d098b8]         ; 004f880c | DAT_01d098b8
    FXCH                                ; 004f8812
    FSTP float ptr [EAX + -0x40]        ; 004f8814
    FXCH                                ; 004f8817
    FSTP float ptr [EAX + -0x3c]        ; 004f8819
    FSTP float ptr [EAX + -0x38]        ; 004f881c
    CMP EBP,EDX                         ; 004f881f
    JL 0x004f8778                       ; 004f8821
        ;   XREF to: 004f8778 (CONDITIONAL_JUMP)  ; LAB_004f8778
    FSTP ST0                            ; 004f8827
    CMP dword ptr [0x01d0d2cc],0x0      ; 004f8829 | DAT_01d0d2cc
        ;   Label: LAB_004f8829
    JZ 0x004f895d                       ; 004f8830
        ;   XREF to: 004f895d (CONDITIONAL_JUMP)  ; LAB_004f895d
    XOR EBP,EBP                         ; 004f8836
        ;   Label: LAB_004f8836
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004f8838
    MOV dword ptr [ESP + 0x90],EBP      ; 004f883f
    MOV dword ptr [ESP + 0x98],EBP      ; 004f8846
    TEST EDX,EDX                        ; 004f884d
    JLE 0x004f8a12                      ; 004f884f
        ;   XREF to: 004f8a12 (CONDITIONAL_JUMP)  ; LAB_004f8a12
    MOV dword ptr [ESP + 0x94],EBP      ; 004f8855
    MOV ECX,dword ptr [ESP + 0xb8]      ; 004f885c
        ;   Label: LAB_004f885c
    MOV ESI,dword ptr [ESP + 0x94]      ; 004f8863
    MOV EAX,ESP                         ; 004f886a
    MOV EDI,dword ptr [ESP + 0x94]      ; 004f886c
    ADD ECX,ESI                         ; 004f8873
    MOV ESI,dword ptr [ESP + 0xb8]      ; 004f8875
    MOV EBX,dword ptr [ESP + 0xb0]      ; 004f887c
    ADD ESI,0x6                         ; 004f8883
    ADD EAX,0x48                        ; 004f8886
    ADD ESI,EDI                         ; 004f8889
    XOR EDX,EDX                         ; 004f888b
        ;   Label: LAB_004f888b
    MOV DX,word ptr [ECX]               ; 004f888d
    SHL EDX,0x6                         ; 004f8890
    ADD EDX,EBX                         ; 004f8893
    SUB EAX,0x24                        ; 004f8895
    ADD ECX,0x2                         ; 004f8898
    MOV EDI,dword ptr [EDX]             ; 004f889b
    MOV dword ptr [EAX + 0x24],EDI      ; 004f889d
    MOV EDI,dword ptr [EDX + 0x4]       ; 004f88a0
    MOV dword ptr [EAX + 0x28],EDI      ; 004f88a3
    MOV EDI,dword ptr [EDX + 0x8]       ; 004f88a6
    MOV dword ptr [EAX + 0x2c],EDI      ; 004f88a9
    MOV EDI,dword ptr [EDX + 0x1c]      ; 004f88ac
    MOV dword ptr [EAX + 0x40],EDI      ; 004f88af
    MOV EDI,dword ptr [EDX + 0x20]      ; 004f88b2
    MOV dword ptr [EAX + 0x44],EDI      ; 004f88b5
    MOV EDI,dword ptr [EDX + 0x24]      ; 004f88b8
    MOV dword ptr [EAX + 0x30],EDI      ; 004f88bb
    MOV EDI,dword ptr [EDX + 0x28]      ; 004f88be
    MOV dword ptr [EAX + 0x34],EDI      ; 004f88c1
    MOV EDI,dword ptr [EDX + 0x2c]      ; 004f88c4
    MOV dword ptr [EAX + 0x38],EDI      ; 004f88c7
    MOV EDI,dword ptr [EDX + 0x30]      ; 004f88ca
    MOV dword ptr [EAX + 0x3c],EDI      ; 004f88cd
    CMP ECX,ESI                         ; 004f88d0
    JNZ 0x004f888b                      ; 004f88d2
        ;   XREF to: 004f888b (CONDITIONAL_JUMP)  ; LAB_004f888b
    LEA EAX,[ESP + 0x6c]                ; 004f88d4
    MOV EDI,dword ptr [ESP + 0x98]      ; 004f88d8
    PUSH EAX                            ; 004f88df
    IMUL EAX,EDI,0x24                   ; 004f88e0
    MOV EDX,dword ptr [0x01d0d2cc]      ; 004f88e3 | DAT_01d0d2cc
    ADD EAX,EDX                         ; 004f88e9
    PUSH EAX                            ; 004f88eb
    PUSH 0x3                            ; 004f88ec
    LEA EAX,[ESP + 0xc]                 ; 004f88ee
    XOR ESI,ESI                         ; 004f88f2
    PUSH EAX                            ; 004f88f4
    MOV dword ptr [ESP + 0x7c],ESI      ; 004f88f5
    CALL engine_mini3d.cpp_clipToUserPlane_FUN_004f8610 ; 004f88f9
        ;   XREF to: 004f8610 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_clipToUserPlane_FUN_004f8610(float * vertices, int vertex_count, float * out, int * out_count)
    ADD ESP,0x10                        ; 004f88fe
    CMP dword ptr [ESP + 0x6c],0x2      ; 004f8901
    JLE 0x004f89e3                      ; 004f8906
        ;   XREF to: 004f89e3 (CONDITIONAL_JUMP)  ; LAB_004f89e3
    MOV ECX,dword ptr [ESP + 0x98]      ; 004f890c
    MOV EBX,dword ptr [ESP + 0x98]      ; 004f8913
    MOV EDI,dword ptr [ESP + 0x98]      ; 004f891a
    XOR EDX,EDX                         ; 004f8921
    ADD EBX,0x2                         ; 004f8923
    INC ECX                             ; 004f8926
    ADD EBX,ESI                         ; 004f8927
    ADD ECX,ESI                         ; 004f8929
    LEA ESI,[EBP + EBP*0x1]             ; 004f892b
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004f892f
        ;   Label: LAB_004f892f
    SUB EAX,0x2                         ; 004f8933
    CMP EDX,EAX                         ; 004f8936
    JGE 0x004f89d8                      ; 004f8938
        ;   XREF to: 004f89d8 (CONDITIONAL_JUMP)  ; LAB_004f89d8
    MOV EAX,[0x01d0d2d0]                ; 004f893e | DAT_01d0d2d0
    ADD ESI,0x6                         ; 004f8943
    MOV word ptr [ESI + EAX*0x1 + -0x6],DI ; 004f8946
    ADD EBP,0x3                         ; 004f894b
    MOV word ptr [ESI + EAX*0x1 + -0x4],CX ; 004f894e
    INC EDX                             ; 004f8953
    MOV word ptr [ESI + EAX*0x1 + -0x2],BX ; 004f8954
    INC EBX                             ; 004f8959
    INC ECX                             ; 004f895a
    JMP 0x004f892f                      ; 004f895b
        ;   XREF to: 004f892f (UNCONDITIONAL_JUMP)  ; LAB_004f892f
    PUSH 0x57e40                        ; 004f895d
        ;   Label: LAB_004f895d
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004f8962
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004f8967
    MOV [0x01d0d2cc],EAX                ; 004f896a | DAT_01d0d2cc
    TEST EAX,EAX                        ; 004f896f
    JNZ 0x004f8996                      ; 004f8971
        ;   XREF to: 004f8996 (CONDITIONAL_JUMP)  ; LAB_004f8996
    MOV ECX,0x5ddf64                    ; 004f8973
    MOV EBX,0x14e7                      ; 004f8978
    PUSH 0x5ddf79                       ; 004f897d
    MOV dword ptr [0x01d046a0],ECX      ; 004f8982 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 004f8988 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f898e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f8993
    PUSH 0xea60                         ; 004f8996
        ;   Label: LAB_004f8996
    CALL crt_memory.c_malloc_FUN_005b8580 ; 004f899b
        ;   XREF to: 005b8580 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_malloc_FUN_005b8580(ulong size)
    ADD ESP,0x4                         ; 004f89a0
    MOV [0x01d0d2d0],EAX                ; 004f89a3 | DAT_01d0d2d0
    TEST EAX,EAX                        ; 004f89a8
    JNZ 0x004f8836                      ; 004f89aa
        ;   XREF to: 004f8836 (CONDITIONAL_JUMP)  ; LAB_004f8836
    MOV ESI,0x5ddfa3                    ; 004f89b0
    MOV EDI,0x14eb                      ; 004f89b5
    PUSH 0x5ddfb8                       ; 004f89ba
    MOV dword ptr [0x01d046a0],ESI      ; 004f89bf | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 004f89c5 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004f89cb
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004f89d0
    JMP 0x004f8836                      ; 004f89d3
        ;   XREF to: 004f8836 (UNCONDITIONAL_JUMP)  ; LAB_004f8836
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004f89d8
        ;   Label: LAB_004f89d8
    ADD dword ptr [ESP + 0x98],EAX      ; 004f89dc
    MOV ECX,dword ptr [ESP + 0x94]      ; 004f89e3
        ;   Label: LAB_004f89e3
    MOV EBX,dword ptr [ESP + 0x90]      ; 004f89ea
    MOV ESI,dword ptr [ESP + 0xbc]      ; 004f89f1
    ADD ECX,0x6                         ; 004f89f8
    INC EBX                             ; 004f89fb
    MOV dword ptr [ESP + 0x94],ECX      ; 004f89fc
    MOV dword ptr [ESP + 0x90],EBX      ; 004f8a03
    CMP EBX,ESI                         ; 004f8a0a
    JL 0x004f885c                       ; 004f8a0c
        ;   XREF to: 004f885c (CONDITIONAL_JUMP)  ; LAB_004f885c
    MOV ECX,0x3                         ; 004f8a12
        ;   Label: LAB_004f8a12
    MOV EDX,EBP                         ; 004f8a17
    MOV EAX,EBP                         ; 004f8a19
    SAR EDX,0x1f                        ; 004f8a1b
    IDIV ECX                            ; 004f8a1e
    MOV EDI,dword ptr [0x01d0991c]      ; 004f8a20 | DAT_01d0991c
    MOV EBP,EAX                         ; 004f8a26
    MOV EAX,dword ptr [ESP + 0x98]      ; 004f8a28
    XOR EBX,EBX                         ; 004f8a2f
    SHL EAX,0x6                         ; 004f8a31
    TEST EDI,EDI                        ; 004f8a34
    JNZ 0x004f8b8b                      ; 004f8a36
        ;   XREF to: 004f8b8b (CONDITIONAL_JUMP)  ; LAB_004f8b8b
    CMP dword ptr [ESP + 0x98],0x0      ; 004f8a3c
    JLE 0x004f8b60                      ; 004f8a44
        ;   XREF to: 004f8b60 (CONDITIONAL_JUMP)  ; LAB_004f8b60
    MOV dword ptr [ESP + 0x88],EAX      ; 004f8a4a
    XOR ESI,ESI                         ; 004f8a51
    FLD float ptr [0x01d098b0]          ; 004f8a53 | DAT_01d098b0
        ;   Label: LAB_004f8a53
    FLD float ptr [0x01d098b4]          ; 004f8a59 | DAT_01d098b4
    MOV EAX,[0x01d0d2cc]                ; 004f8a5f | DAT_01d0d2cc
    FILD dword ptr [0x01c38ba8]         ; 004f8a64 | DAT_01c38ba8
    FXCH                                ; 004f8a6a
    FSUBR float ptr [EDI + EAX*0x1 + 0x4] ; 004f8a6c
    FXCH ST2                            ; 004f8a70
    FSUBR float ptr [EDI + EAX*0x1]     ; 004f8a72
    FXCH ST2                            ; 004f8a75
    FSTP float ptr [EDI + EAX*0x1 + 0x4] ; 004f8a77
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 004f8a7b
    FXCH                                ; 004f8a7f
    FSTP float ptr [EDI + EAX*0x1]      ; 004f8a81
    FILD dword ptr [0x01c38b9c]         ; 004f8a84 | DAT_01c38b9c
    FMUL float ptr [EDI + EAX*0x1]      ; 004f8a8a
    FLD float ptr [0x01d098b8]          ; 004f8a8d | DAT_01d098b8
    MOV EDX,dword ptr [0x01d09b7c]      ; 004f8a93 | DAT_01d09b7c
    FSUBR float ptr [EDI + EAX*0x1 + 0x8] ; 004f8a99
    FXCH                                ; 004f8a9d
    FADDP ST2,ST0                       ; 004f8a9f
    FSTP float ptr [EDI + EAX*0x1 + 0x8] ; 004f8aa1
    FILD dword ptr [0x01c38bb4]         ; 004f8aa5 | DAT_01c38bb4
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 004f8aab
    ADD EDX,ESI                         ; 004f8aaf
    FADDP                               ; 004f8ab1
    FILD dword ptr [0x01c38bac]         ; 004f8ab3 | DAT_01c38bac
    FXCH                                ; 004f8ab9
    FSTP float ptr [EDX]                ; 004f8abb
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 004f8abd
    FILD dword ptr [0x01c38ba0]         ; 004f8ac1 | DAT_01c38ba0
    FMUL float ptr [EDI + EAX*0x1]      ; 004f8ac7
    FADDP                               ; 004f8aca
    FILD dword ptr [0x01c38bb8]         ; 004f8acc | DAT_01c38bb8
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 004f8ad2
    FADDP                               ; 004f8ad6
    FILD dword ptr [0x01c38bb0]         ; 004f8ad8 | DAT_01c38bb0
    FXCH                                ; 004f8ade
    FSTP float ptr [EDX + 0x4]          ; 004f8ae0
    FMUL float ptr [EDI + EAX*0x1 + 0x4] ; 004f8ae3
    FILD dword ptr [0x01c38ba4]         ; 004f8ae7 | DAT_01c38ba4
    FMUL float ptr [EDI + EAX*0x1]      ; 004f8aed
    FADDP                               ; 004f8af0
    FILD dword ptr [0x01c38bbc]         ; 004f8af2 | DAT_01c38bbc
    FMUL float ptr [EDI + EAX*0x1 + 0x8] ; 004f8af8
    ADD EDI,0x24                        ; 004f8afc
    PUSH EDX                            ; 004f8aff
    FADDP                               ; 004f8b00
    ADD ESI,0x40                        ; 004f8b02
    FSTP float ptr [EDX + 0x8]          ; 004f8b05
    CALL engine_mini3d.cpp_projectVertex_FUN_004f5860 ; 004f8b08
        ;   XREF to: 004f5860 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_projectVertex_FUN_004f5860(float * vertex)
    MOV EDX,dword ptr [0x01d0d2cc]      ; 004f8b0d | DAT_01d0d2cc
    MOV EAX,[0x01d09b7c]                ; 004f8b13 | DAT_01d09b7c
    ADD ESP,0x4                         ; 004f8b18
    FLD float ptr [EDX + EDI*0x1 + -0x8] ; 004f8b1b
    MOV ECX,dword ptr [ESP + 0x88]      ; 004f8b1f
    FSTP float ptr [ESI + EAX*0x1 + -0x24] ; 004f8b26
    FLD float ptr [EDX + EDI*0x1 + -0x4] ; 004f8b2a
    FSTP float ptr [ESI + EAX*0x1 + -0x20] ; 004f8b2e
    FLD float ptr [EDX + EDI*0x1 + -0x18] ; 004f8b32
    FSTP float ptr [ESI + EAX*0x1 + -0x1c] ; 004f8b36
    FLD float ptr [EDX + EDI*0x1 + -0x14] ; 004f8b3a
    FSTP float ptr [ESI + EAX*0x1 + -0x18] ; 004f8b3e
    FLD float ptr [EDX + EDI*0x1 + -0x10] ; 004f8b42
    FSTP float ptr [ESI + EAX*0x1 + -0x14] ; 004f8b46
    FLD float ptr [EDX + EDI*0x1 + -0xc] ; 004f8b4a
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x30] ; 004f8b4e
    FSTP float ptr [ESI + EAX*0x1 + -0x10] ; 004f8b52
    OR EBX,EDX                          ; 004f8b56
    CMP ESI,ECX                         ; 004f8b58
    JL 0x004f8a53                       ; 004f8b5a
        ;   XREF to: 004f8a53 (CONDITIONAL_JUMP)  ; LAB_004f8a53
    PUSH EBX                            ; 004f8b60
        ;   Label: LAB_004f8b60
    PUSH EBP                            ; 004f8b61
    MOV ECX,dword ptr [0x01d0d2d0]      ; 004f8b62 | DAT_01d0d2d0
    PUSH ECX                            ; 004f8b68
    MOV EBX,dword ptr [ESP + 0xa4]      ; 004f8b69
    PUSH EBX                            ; 004f8b70
    MOV ESI,dword ptr [0x01d09b7c]      ; 004f8b71 | DAT_01d09b7c
    PUSH ESI                            ; 004f8b77
    CALL engine_mini3d.cpp_drawTransformedList_FUN_004f6d00 ; 004f8b78
        ;   XREF to: 004f6d00 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_drawTransformedList_FUN_004f6d00(float * vertices, int vertex_count, ushort * indices, int triangle_count, ...)
    ADD ESP,0x14                        ; 004f8b7d
    ADD ESP,0x9c                        ; 004f8b80
    POP EBP                             ; 004f8b86
    POP EDI                             ; 004f8b87
    POP ESI                             ; 004f8b88
    POP EBX                             ; 004f8b89
    RET                                 ; 004f8b8a
    CMP dword ptr [ESP + 0x98],0x0      ; 004f8b8b
        ;   Label: LAB_004f8b8b
    JLE 0x004f8b60                      ; 004f8b93
        ;   XREF to: 004f8b60 (CONDITIONAL_JUMP)  ; LAB_004f8b60
    MOV dword ptr [ESP + 0x8c],EAX      ; 004f8b95
    XOR EDI,EDI                         ; 004f8b9c
    XOR ESI,ESI                         ; 004f8b9e
    MOV EAX,[0x01d0d2cc]                ; 004f8ba0 | DAT_01d0d2cc
        ;   Label: LAB_004f8ba0
    FLD float ptr [EDI + EAX*0x1 + 0x4] ; 004f8ba5
    FSUB float ptr [0x01d098b4]         ; 004f8ba9 | DAT_01d098b4
    FLD ST0                             ; 004f8baf
    FMUL float ptr [0x01d0992c]         ; 004f8bb1 | DAT_01d0992c
    FLD float ptr [EDI + EAX*0x1]       ; 004f8bb7
    FSUB float ptr [0x01d098b0]         ; 004f8bba | DAT_01d098b0
    FLD ST0                             ; 004f8bc0
    FMUL float ptr [0x01d09924]         ; 004f8bc2 | DAT_01d09924
    FLD ST1                             ; 004f8bc8
    FMUL float ptr [0x01d09928]         ; 004f8bca | DAT_01d09928
    FXCH ST2                            ; 004f8bd0
    FMUL float ptr [0x01d09920]         ; 004f8bd2 | DAT_01d09920
    FLD ST4                             ; 004f8bd8
    FMUL float ptr [0x01d09930]         ; 004f8bda | DAT_01d09930
    FXCH ST5                            ; 004f8be0
    FMUL float ptr [0x01d09934]         ; 004f8be2 | DAT_01d09934
    FLD float ptr [EDI + EAX*0x1 + 0x8] ; 004f8be8
    FSUB float ptr [0x01d098b8]         ; 004f8bec | DAT_01d098b8
    FXCH ST2                            ; 004f8bf2
    FADDP ST5,ST0                       ; 004f8bf4
    FXCH ST5                            ; 004f8bf6
    FADDP ST2,ST0                       ; 004f8bf8
    FLD ST0                             ; 004f8bfa
    FMUL float ptr [0x01d09938]         ; 004f8bfc | DAT_01d09938
    FLD ST1                             ; 004f8c02
    FMUL float ptr [0x01d0993c]         ; 004f8c04 | DAT_01d0993c
    FXCH ST6                            ; 004f8c0a
    FADDP ST4,ST0                       ; 004f8c0c
    MOV EAX,[0x01d09b7c]                ; 004f8c0e | DAT_01d09b7c
    FXCH                                ; 004f8c13
    FMUL float ptr [0x01d09940]         ; 004f8c15 | DAT_01d09940
    ADD EAX,ESI                         ; 004f8c1b
    ADD EDI,0x24                        ; 004f8c1d
    PUSH EAX                            ; 004f8c20
    ADD ESI,0x40                        ; 004f8c21
    FXCH                                ; 004f8c24
    FADDP ST4,ST0                       ; 004f8c26
    FXCH ST4                            ; 004f8c28
    FADDP                               ; 004f8c2a
    FXCH ST3                            ; 004f8c2c
    FADDP                               ; 004f8c2e
    FXCH                                ; 004f8c30
    FSTP float ptr [EAX]                ; 004f8c32
    FXCH                                ; 004f8c34
    FSTP float ptr [EAX + 0x4]          ; 004f8c36
    FSTP float ptr [EAX + 0x8]          ; 004f8c39
    CALL engine_mini3d.cpp_projectVertex_FUN_004f5860 ; 004f8c3c
        ;   XREF to: 004f5860 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_projectVertex_FUN_004f5860(float * vertex)
    MOV EDX,dword ptr [0x01d0d2cc]      ; 004f8c41 | DAT_01d0d2cc
    MOV EAX,[0x01d09b7c]                ; 004f8c47 | DAT_01d09b7c
    ADD ESP,0x4                         ; 004f8c4c
    FLD float ptr [EDX + EDI*0x1 + -0x8] ; 004f8c4f
    MOV ECX,dword ptr [ESP + 0x8c]      ; 004f8c53
    FSTP float ptr [ESI + EAX*0x1 + -0x24] ; 004f8c5a
    FLD float ptr [EDX + EDI*0x1 + -0x4] ; 004f8c5e
    FSTP float ptr [ESI + EAX*0x1 + -0x20] ; 004f8c62
    FLD float ptr [EDX + EDI*0x1 + -0x18] ; 004f8c66
    FSTP float ptr [ESI + EAX*0x1 + -0x1c] ; 004f8c6a
    FLD float ptr [EDX + EDI*0x1 + -0x14] ; 004f8c6e
    FSTP float ptr [ESI + EAX*0x1 + -0x18] ; 004f8c72
    FLD float ptr [EDX + EDI*0x1 + -0x10] ; 004f8c76
    FSTP float ptr [ESI + EAX*0x1 + -0x14] ; 004f8c7a
    FLD float ptr [EDX + EDI*0x1 + -0xc] ; 004f8c7e
    MOV EDX,dword ptr [ESI + EAX*0x1 + -0x30] ; 004f8c82
    FSTP float ptr [ESI + EAX*0x1 + -0x10] ; 004f8c86
    OR EBX,EDX                          ; 004f8c8a
    CMP ESI,ECX                         ; 004f8c8c
    JL 0x004f8ba0                       ; 004f8c8e
        ;   XREF to: 004f8ba0 (CONDITIONAL_JUMP)  ; LAB_004f8ba0
    JMP 0x004f8b60                      ; 004f8c94
        ;   XREF to: 004f8b60 (UNCONDITIONAL_JUMP)  ; LAB_004f8b60

