; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dpart_cpp_setupTriangleEdgeInterpolation_FUN_00482fb0(SEdgeData *vertex_a,SEdgeData *vertex_b)
;
; Parameters:
; SEdgeData *      Stack[0x4]:4   vertex_a
; SEdgeData *      Stack[0x8]:4   vertex_b
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   int g_TexturesDisabled
;   int g_RenderTriangleEdgeCount
;   SEdgeData[16] g_EdgeInterpolationArray
;   undefined4 DAT_02c6cb78
;   undefined4 DAT_02c6cb7c
;   undefined4 DAT_02c6cb80
;   undefined4 DAT_02c6cb84
;   undefined4 DAT_02c6cb88
;   undefined4 DAT_02c6cb8c
;   undefined4 DAT_02c6cb90
;   undefined4 DAT_02c6cb94
;   undefined4 DAT_02c6cb98
;   undefined4 DAT_02c6cb9c
;   undefined4 DAT_02c6cba0
;   undefined4 DAT_02c6cba4
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482fb0
        ;   Label: core_dpart.cpp_setupTriangleEdgeInterpolation_FUN_00482fb0
    PUSH ESI                            ; 00482fb1
    PUSH EDI                            ; 00482fb2
    PUSH EBP                            ; 00482fb3
    SUB ESP,0x4                         ; 00482fb4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00482fb7
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00482fbb
    MOV EBX,dword ptr [EBP + 0x14]      ; 00482fbf
    MOV EDI,dword ptr [ESI + 0x14]      ; 00482fc2
    SAR EBX,0x10                        ; 00482fc5
    SAR EDI,0x10                        ; 00482fc8
    CMP EDI,EBX                         ; 00482fcb
    JZ 0x004831bf                       ; 00482fcd
        ;   XREF to: 004831bf (CONDITIONAL_JUMP)  ; LAB_004831bf
    MOV EDX,dword ptr [EBP + 0x14]      ; 00482fd3
    CMP EDX,dword ptr [ESI + 0x14]      ; 00482fd6
    JGE 0x00482fe7                      ; 00482fd9
        ;   XREF to: 00482fe7 (CONDITIONAL_JUMP)  ; LAB_00482fe7
    MOV EAX,ESI                         ; 00482fdb
    MOV ESI,EBP                         ; 00482fdd
    MOV EBP,EAX                         ; 00482fdf
    MOV EAX,EDI                         ; 00482fe1
    MOV EDI,EBX                         ; 00482fe3
    MOV EBX,EAX                         ; 00482fe5
    MOV EAX,[0x02c6cb70]                ; 00482fe7 | g_RenderTriangleEdgeCount
        ;   Label: LAB_00482fe7
    LEA ECX,[EAX*0x8 + 0x0]             ; 00482fec
    ADD ECX,EAX                         ; 00482ff3
    SHL ECX,0x3                         ; 00482ff5
    ADD ECX,0x2c6cb74                   ; 00482ff8 | g_EdgeInterpolationArray
    MOV dword ptr [ECX],EDI             ; 00482ffe | g_EdgeInterpolationArray
    MOV EAX,[0x02c6cff4]                ; 00483000 | g_RenderTriangleMinScanlineY
    MOV dword ptr [ECX + 0x4],EBX       ; 00483005 | DAT_02c6cb78
    CMP EDI,EAX                         ; 00483008
    JGE 0x00483012                      ; 0048300a
        ;   XREF to: 00483012 (CONDITIONAL_JUMP)  ; LAB_00483012
    MOV dword ptr [0x02c6cff4],EDI      ; 0048300c | g_RenderTriangleMinScanlineY
    CMP EBX,dword ptr [0x02c6cff8]      ; 00483012 | g_RenderTriangleMaxScanlineY
        ;   Label: LAB_00483012
    JLE 0x00483020                      ; 00483018
        ;   XREF to: 00483020 (CONDITIONAL_JUMP)  ; LAB_00483020
    MOV dword ptr [0x02c6cff8],EBX      ; 0048301a | g_RenderTriangleMaxScanlineY
    MOV EDI,dword ptr [ESI + 0x14]      ; 00483020
        ;   Label: LAB_00483020
    MOV EBX,dword ptr [EBP + 0x14]      ; 00483023
    SUB EBX,EDI                         ; 00483026
    CMP EBX,0x10000                     ; 00483028
    JNC 0x004831c7                      ; 0048302e
        ;   XREF to: 004831c7 (CONDITIONAL_JUMP)  ; LAB_004831c7
    XOR EBX,EBX                         ; 00483034
    MOV EAX,dword ptr [EBP + 0x10]      ; 00483036
        ;   Label: LAB_00483036
    MOV EDX,dword ptr [ESI + 0x10]      ; 00483039
    MOV EDI,dword ptr [ESI + 0x14]      ; 0048303c
    SUB EAX,EDX                         ; 0048303f
    AND EDI,0xffff                      ; 00483041
    MOV EDX,EAX                         ; 00483047
    MOV EAX,EBX                         ; 00483049
    XOR DI,0xffff                       ; 0048304b
    IMUL EDX                            ; 0048304f
    SHRD EAX,EDX,0x10                   ; 00483051
    MOV EDX,EAX                         ; 00483055
    MOV dword ptr [ECX + 0xc],EAX       ; 00483057 | DAT_02c6cb80
    MOV EAX,EDI                         ; 0048305a
    IMUL EDX                            ; 0048305c
    SHRD EAX,EDX,0x10                   ; 0048305e
    MOV dword ptr [ESP],EAX             ; 00483062
    MOV EDX,dword ptr [ESP]             ; 00483065
    MOV EAX,dword ptr [ESI + 0x10]      ; 00483068
    ADD EAX,EDX                         ; 0048306b
    MOV dword ptr [ECX + 0x8],EAX       ; 0048306d | DAT_02c6cb7c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00483070
    MOV EDX,dword ptr [ESI + 0x18]      ; 00483073
    SUB EAX,EDX                         ; 00483076
    MOV EDX,EAX                         ; 00483078
    MOV EAX,EBX                         ; 0048307a
    IMUL EDX                            ; 0048307c
    SHRD EAX,EDX,0x10                   ; 0048307e
    MOV EDX,EAX                         ; 00483082
    MOV dword ptr [ECX + 0x1c],EAX      ; 00483084 | DAT_02c6cb90
    MOV EAX,EDI                         ; 00483087
    IMUL EDX                            ; 00483089
    SHRD EAX,EDX,0x10                   ; 0048308b
    MOV dword ptr [ESP],EAX             ; 0048308f
    MOV EDX,dword ptr [ESP]             ; 00483092
    MOV EAX,dword ptr [ESI + 0x18]      ; 00483095
    ADD EAX,EDX                         ; 00483098
    MOV dword ptr [ECX + 0x18],EAX      ; 0048309a | DAT_02c6cb8c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0048309d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004830a0
    SUB EAX,EDX                         ; 004830a3
    MOV EDX,EAX                         ; 004830a5
    MOV EAX,EBX                         ; 004830a7
    IMUL EDX                            ; 004830a9
    SHRD EAX,EDX,0x10                   ; 004830ab
    MOV EDX,EAX                         ; 004830af
    MOV dword ptr [ECX + 0x24],EAX      ; 004830b1 | DAT_02c6cb98
    MOV EAX,EDI                         ; 004830b4
    IMUL EDX                            ; 004830b6
    SHRD EAX,EDX,0x10                   ; 004830b8
    MOV dword ptr [ESP],EAX             ; 004830bc
    MOV EDX,dword ptr [ESP]             ; 004830bf
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004830c2
    ADD EAX,EDX                         ; 004830c5
    MOV dword ptr [ECX + 0x20],EAX      ; 004830c7 | DAT_02c6cb94
    MOV EAX,dword ptr [EBP + 0x20]      ; 004830ca
    MOV EDX,dword ptr [ESI + 0x20]      ; 004830cd
    SUB EAX,EDX                         ; 004830d0
    MOV EDX,EAX                         ; 004830d2
    MOV EAX,EBX                         ; 004830d4
    IMUL EDX                            ; 004830d6
    SHRD EAX,EDX,0x10                   ; 004830d8
    MOV EDX,EAX                         ; 004830dc
    MOV dword ptr [ECX + 0x14],EAX      ; 004830de | DAT_02c6cb88
    MOV EAX,EDI                         ; 004830e1
    IMUL EDX                            ; 004830e3
    SHRD EAX,EDX,0x10                   ; 004830e5
    MOV dword ptr [ESP],EAX             ; 004830e9
    MOV EDX,dword ptr [ESP]             ; 004830ec
    MOV EAX,dword ptr [ESI + 0x20]      ; 004830ef
    ADD EAX,EDX                         ; 004830f2
    MOV dword ptr [ECX + 0x10],EAX      ; 004830f4 | DAT_02c6cb84
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004830f7
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004830fa
    SUB EAX,EDX                         ; 004830fd
    MOV EDX,EAX                         ; 004830ff
    MOV EAX,EBX                         ; 00483101
    IMUL EDX                            ; 00483103
    SHRD EAX,EDX,0x10                   ; 00483105
    MOV EDX,EAX                         ; 00483109
    MOV dword ptr [ECX + 0x34],EAX      ; 0048310b | DAT_02c6cba8
    MOV EAX,EDI                         ; 0048310e
    IMUL EDX                            ; 00483110
    SHRD EAX,EDX,0x10                   ; 00483112
    MOV dword ptr [ESP],EAX             ; 00483116
    MOV EDX,dword ptr [ESP]             ; 00483119
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0048311c
    ADD EAX,EDX                         ; 0048311f
    MOV dword ptr [ECX + 0x30],EAX      ; 00483121 | DAT_02c6cba4
    CMP dword ptr [0x00772a74],0x0      ; 00483124 | g_TexturesDisabled
    JZ 0x004831d7                       ; 0048312b
        ;   XREF to: 004831d7 (CONDITIONAL_JUMP)  ; LAB_004831d7
    MOV EAX,dword ptr [EBP + 0x8]       ; 00483131
    MOV EDX,dword ptr [ESI + 0x8]       ; 00483134
    SUB EAX,EDX                         ; 00483137
    MOV EDX,EAX                         ; 00483139
    MOV EAX,EBX                         ; 0048313b
    IMUL EDX                            ; 0048313d
    SHRD EAX,EDX,0x10                   ; 0048313f
    MOV EDX,EAX                         ; 00483143
    MOV dword ptr [ECX + 0x2c],EAX      ; 00483145 | DAT_02c6cba0
    MOV EAX,EDI                         ; 00483148
    IMUL EDX                            ; 0048314a
    SHRD EAX,EDX,0x10                   ; 0048314c
    MOV dword ptr [ESP],EAX             ; 00483150
    MOV EDX,dword ptr [ESP]             ; 00483153
    MOV EAX,dword ptr [ESI + 0x8]       ; 00483156
    ADD EAX,EDX                         ; 00483159
        ;   Label: LAB_00483159
    MOV dword ptr [ECX + 0x28],EAX      ; 0048315b | DAT_02c6cb9c
    TEST byte ptr [0x02d052a1],0x2      ; 0048315e | DAT_02d052a1
    JZ 0x004831b9                       ; 00483165
        ;   XREF to: 004831b9 (CONDITIONAL_JUMP)  ; LAB_004831b9
    MOV EAX,dword ptr [EBP + 0x24]      ; 00483167
    MOV EDX,dword ptr [ESI + 0x24]      ; 0048316a
    SUB EAX,EDX                         ; 0048316d
    MOV EDX,EAX                         ; 0048316f
    MOV EAX,EBX                         ; 00483171
    IMUL EDX                            ; 00483173
    SHRD EAX,EDX,0x10                   ; 00483175
    MOV EDX,EAX                         ; 00483179
    MOV dword ptr [ECX + 0x3c],EAX      ; 0048317b | DAT_02c6cbb0
    MOV EAX,EDI                         ; 0048317e
    IMUL EDX                            ; 00483180
    SHRD EAX,EDX,0x10                   ; 00483182
    MOV dword ptr [ESP],EAX             ; 00483186
    MOV EDX,dword ptr [ESP]             ; 00483189
    MOV EAX,dword ptr [ESI + 0x24]      ; 0048318c
    ADD EAX,EDX                         ; 0048318f
    MOV dword ptr [ECX + 0x38],EAX      ; 00483191 | DAT_02c6cbac
    MOV EDX,dword ptr [EBP + 0x28]      ; 00483194
    MOV EBP,dword ptr [ESI + 0x28]      ; 00483197
    MOV EAX,EBX                         ; 0048319a
    SUB EDX,EBP                         ; 0048319c
    IMUL EDX                            ; 0048319e
    SHRD EAX,EDX,0x10                   ; 004831a0
    MOV EDX,EAX                         ; 004831a4
    MOV dword ptr [ECX + 0x44],EAX      ; 004831a6 | DAT_02c6cbb8
    MOV EAX,EDI                         ; 004831a9
    IMUL EDX                            ; 004831ab
    SHRD EAX,EDX,0x10                   ; 004831ad
    MOV EBX,dword ptr [ESI + 0x28]      ; 004831b1
    ADD EBX,EAX                         ; 004831b4
    MOV dword ptr [ECX + 0x40],EBX      ; 004831b6 | DAT_02c6cbb4
    INC dword ptr [0x02c6cb70]          ; 004831b9 | g_RenderTriangleEdgeCount
        ;   Label: LAB_004831b9
    ADD ESP,0x4                         ; 004831bf
        ;   Label: LAB_004831bf
    POP EBP                             ; 004831c2
    POP EDI                             ; 004831c3
    POP ESI                             ; 004831c4
    POP EBX                             ; 004831c5
    RET                                 ; 004831c6
    MOV EAX,0xffffffff                  ; 004831c7
        ;   Label: LAB_004831c7
    XOR EDX,EDX                         ; 004831cc
    DIV EBX                             ; 004831ce
    MOV EBX,EAX                         ; 004831d0
    JMP 0x00483036                      ; 004831d2
        ;   XREF to: 00483036 (UNCONDITIONAL_JUMP)  ; LAB_00483036
    MOV EAX,dword ptr [EBP + 0xc]       ; 004831d7
        ;   Label: LAB_004831d7
    MOV EDX,dword ptr [ESI + 0xc]       ; 004831da
    SUB EAX,EDX                         ; 004831dd
    MOV EDX,EAX                         ; 004831df
    MOV EAX,EBX                         ; 004831e1
    IMUL EDX                            ; 004831e3
    SHRD EAX,EDX,0x10                   ; 004831e5
    MOV EDX,EAX                         ; 004831e9
    MOV dword ptr [ECX + 0x2c],EAX      ; 004831eb | DAT_02c6cba0
    MOV EAX,EDI                         ; 004831ee
    IMUL EDX                            ; 004831f0
    SHRD EAX,EDX,0x10                   ; 004831f2
    MOV dword ptr [ESP],EAX             ; 004831f6
    MOV EDX,dword ptr [ESP]             ; 004831f9
    MOV EAX,dword ptr [ESI + 0xc]       ; 004831fc
    JMP 0x00483159                      ; 004831ff
        ;   XREF to: 00483159 (UNCONDITIONAL_JUMP)  ; LAB_00483159

