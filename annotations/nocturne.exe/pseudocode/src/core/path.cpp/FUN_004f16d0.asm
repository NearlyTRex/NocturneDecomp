; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_path_cpp_FUN_004f16d0(void)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   undefined4 DAT_0058ce1f
;   undefined4 DAT_0058ce27
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01fba94c
;   undefined4 DAT_01fba96c
;   undefined4 DAT_01fba970
;   undefined4 DAT_01fba974
;
; Called Functions:
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150
;   engine_special.cpp_transformAndProjectPoint_FUN_0053075c
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f16d0
        ;   Label: core_path.cpp_FUN_004f16d0
    PUSH EDI                            ; 004f16d1
    PUSH EBP                            ; 004f16d2
    SUB ESP,0x24                        ; 004f16d3
    MOV EBP,dword ptr [ESP + 0x40]      ; 004f16d6
    MOV ESI,dword ptr [ESP + 0x44]      ; 004f16da
    MOV EDI,dword ptr [ESP + 0x48]      ; 004f16de
    PUSH EBX                            ; 004f16e2
    FLD float ptr [0x0058ce1f]          ; 004f16e3 | DAT_0058ce1f
    FLD float ptr [0x01fba96c]          ; 004f16e9 | DAT_01fba96c
    FMUL ST1                            ; 004f16ef
    FLD float ptr [0x01fba970]          ; 004f16f1 | DAT_01fba970
    FMUL ST2                            ; 004f16f7
    FLD float ptr [0x01fba974]          ; 004f16f9 | DAT_01fba974
    FMULP ST3                           ; 004f16ff
    FLD double ptr [0x0058ce27]         ; 004f1701 | DAT_0058ce27
    FLD float ptr [0x01fba94c]          ; 004f1707 | DAT_01fba94c
    FMUL ST1                            ; 004f170d
    FILD dword ptr [ESP + 0x38]         ; 004f170f
    FXCH ST4                            ; 004f1713
    FSTP float ptr [ESP + 0x10]         ; 004f1715
    FXCH ST3                            ; 004f1719
    FMUL float ptr [ESP + 0x10]         ; 004f171b
    FILD dword ptr [ESP + 0x3c]         ; 004f171f
    FXCH ST3                            ; 004f1723
    FSTP float ptr [ESP + 0x14]         ; 004f1725
    FXCH ST2                            ; 004f1729
    FMUL float ptr [ESP + 0x14]         ; 004f172b
    FILD dword ptr [ESP + 0x40]         ; 004f172f
    MOV EDX,dword ptr [ESP + 0x50]      ; 004f1733
    FXCH ST5                            ; 004f1737
    FSTP float ptr [ESP + 0x18]         ; 004f1739
    FXCH ST4                            ; 004f173d
    FMUL float ptr [ESP + 0x18]         ; 004f173f
    SHL EDX,0x8                         ; 004f1743
    MOV EAX,[0x005ae704]                ; 004f1746 | DAT_005ae704
    MOV dword ptr [ESP + 0x50],EDX      ; 004f174b
    LEA EDX,[ESP + 0x4]                 ; 004f174f
    FXCH ST2                            ; 004f1753
    CALL crt_math.c_round_FUN_00563a30  ; 004f1755
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004f175a
    CALL crt_math.c_round_FUN_00563a30  ; 004f175c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH ST2                            ; 004f1761
        ;   Label: LAB_004f1761
    FISTP dword ptr [ESP + 0x4]         ; 004f1763
    FXCH ST2                            ; 004f1767
    FADDP ST3,ST0                       ; 004f1769
    FISTP dword ptr [ESP + 0xc]         ; 004f176b
    FADDP                               ; 004f176f
    PUSH EDX                            ; 004f1771
    CALL crt_math.c_round_FUN_00563a30  ; 004f1772
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0xc]         ; 004f1777
    MOV EAX,dword ptr [EAX]             ; 004f177b
    PUSH EAX                            ; 004f177d
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f177e
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004f1783
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1786
    MOV dword ptr [ESP + 0x24],EAX      ; 004f178a | LAB_004f1761
    MOV EDX,dword ptr [0x005ae704]      ; 004f178e | DAT_005ae704
    FILD dword ptr [ESP + 0x24]         ; 004f1794
    LEA EAX,[ESP + 0x4]                 ; 004f1798
    FLD ST0                             ; 004f179c
    FADD float ptr [ESP + 0x10]         ; 004f179e
    PUSH EAX                            ; 004f17a2
    FSTP ST1                            ; 004f17a3
    CALL crt_math.c_round_FUN_00563a30  ; 004f17a5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 004f17aa
    MOV EAX,dword ptr [EDX]             ; 004f17ae | DAT_01b4d738
    ADD EAX,0x30                        ; 004f17b0
    PUSH EAX                            ; 004f17b3
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f17b4
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004f17b9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f17bc
    MOV dword ptr [ESP + 0x24],EAX      ; 004f17c0
    MOV EDX,dword ptr [0x005ae704]      ; 004f17c4 | DAT_005ae704
    FILD dword ptr [ESP + 0x24]         ; 004f17ca
    LEA EAX,[ESP + 0x4]                 ; 004f17ce
    FLD ST0                             ; 004f17d2
    FADD float ptr [ESP + 0x18]         ; 004f17d4
    PUSH EAX                            ; 004f17d8
    FSTP ST1                            ; 004f17d9
    CALL crt_math.c_round_FUN_00563a30  ; 004f17db
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x10]        ; 004f17e0
    MOV EAX,dword ptr [EDX]             ; 004f17e4 | DAT_01b4d738
    ADD EAX,0x60                        ; 004f17e6
    PUSH EAX                            ; 004f17e9
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f17ea
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004f17ef
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f17f2
    MOV dword ptr [ESP + 0x24],EAX      ; 004f17f6
    MOV EDX,dword ptr [0x005ae704]      ; 004f17fa | DAT_005ae704
    FILD dword ptr [ESP + 0x24]         ; 004f1800
    LEA EAX,[ESP + 0x4]                 ; 004f1804
    FLD ST0                             ; 004f1808
    FSUB float ptr [ESP + 0x10]         ; 004f180a
    PUSH EAX                            ; 004f180e
    FSTP ST1                            ; 004f180f
    CALL crt_math.c_round_FUN_00563a30  ; 004f1811
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FISTP dword ptr [ESP + 0x8]         ; 004f1816
    MOV EAX,dword ptr [EDX]             ; 004f181a | DAT_01b4d738
    SHL EBP,0x8                         ; 004f181c
    ADD EAX,0x90                        ; 004f181f
    SHL ESI,0x8                         ; 004f1824
    PUSH EAX                            ; 004f1827
    SHL EDI,0x8                         ; 004f1828
    CALL engine_special.cpp_transformAndProjectPoint_FUN_0053075c ; 004f182b
        ;   XREF to: 0053075c (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_transformAndProjectPoint_FUN_0053075c()
    ADD ESP,0x8                         ; 004f1830
    POP EBX                             ; 004f1833
    MOV EAX,[0x005ae704]                ; 004f1834 | DAT_005ae704
    MOV EDX,dword ptr [EAX]             ; 004f1839 | DAT_01b4d738
    MOV dword ptr [EDX + 0x20],EBP      ; 004f183b
    MOV EDX,dword ptr [EAX]             ; 004f183e | DAT_01b4d738
    MOV dword ptr [EDX + 0x24],ESI      ; 004f1840
    MOV EDX,dword ptr [EAX]             ; 004f1843 | DAT_01b4d738
    MOV dword ptr [EDX + 0x28],EDI      ; 004f1845
    MOV EDX,dword ptr [EAX]             ; 004f1848 | DAT_01b4d738
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004f184a
    MOV dword ptr [EDX + 0x2c],ECX      ; 004f184e
    MOV EDX,dword ptr [EAX]             ; 004f1851 | DAT_01b4d738
    MOV dword ptr [EDX + 0x50],EBP      ; 004f1853
    MOV EDX,dword ptr [EAX]             ; 004f1856 | DAT_01b4d738
    MOV dword ptr [EDX + 0x54],ESI      ; 004f1858
    MOV EDX,dword ptr [EAX]             ; 004f185b | DAT_01b4d738
    MOV dword ptr [EDX + 0x58],EDI      ; 004f185d
    MOV EDX,dword ptr [EAX]             ; 004f1860 | DAT_01b4d738
    MOV dword ptr [EDX + 0x5c],ECX      ; 004f1862
    MOV EDX,dword ptr [EAX]             ; 004f1865 | DAT_01b4d738
    MOV dword ptr [EDX + 0x80],EBP      ; 004f1867
    MOV EDX,dword ptr [EAX]             ; 004f186d | DAT_01b4d738
    MOV dword ptr [EDX + 0x84],ESI      ; 004f186f
    MOV EDX,dword ptr [EAX]             ; 004f1875 | DAT_01b4d738
    MOV dword ptr [EDX + 0x88],EDI      ; 004f1877
    MOV EDX,dword ptr [EAX]             ; 004f187d | DAT_01b4d738
    MOV dword ptr [EDX + 0x8c],ECX      ; 004f187f
    MOV EDX,dword ptr [EAX]             ; 004f1885 | DAT_01b4d738
    MOV dword ptr [EDX + 0xb0],EBP      ; 004f1887
    MOV EDX,dword ptr [EAX]             ; 004f188d | DAT_01b4d738
    MOV dword ptr [EDX + 0xb4],ESI      ; 004f188f
    MOV EDX,dword ptr [EAX]             ; 004f1895 | DAT_01b4d738
    MOV dword ptr [EDX + 0xb8],EDI      ; 004f1897
    PUSH 0x1e42810                      ; 004f189d
    MOV EDX,dword ptr [EAX]             ; 004f18a2 | DAT_01b4d738
    PUSH EAX                            ; 004f18a4 | DAT_01b4d738
    MOV dword ptr [EDX + 0xbc],ECX      ; 004f18a5
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150 ; 004f18ab
        ;   XREF to: 00460150 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150()
    ADD ESP,0x8                         ; 004f18b0
    ADD ESP,0x24                        ; 004f18b3
    POP EBP                             ; 004f18b6
    POP EDI                             ; 004f18b7
    POP ESI                             ; 004f18b8
    RET                                 ; 004f18b9

