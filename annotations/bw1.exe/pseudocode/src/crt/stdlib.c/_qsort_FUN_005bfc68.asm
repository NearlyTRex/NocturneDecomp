; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__qsort_FUN_005bfc68(undefined4 *param_1,uint param_2,uint param_3,code *param_4)
;
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[5]:
;   core_set.cpp_FUN_005545a0 at 005546ae
;   engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10 at 00406f63
;   engine_drender.cpp_CDemonRenderer_processCapturedFaces_FUN_00484e00 at 00484e5d
;   engine_pod.cpp_FUN_0053b250 at 0053b6e2
;   shape_edittool.cpp_CStrList_sort_FUN_00499830 at 00499889
;
; Called Functions:
;   crt_unknown.c_FUN_005bfbd0
;   crt_unknown.c_FUN_005bfc40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bfc68
        ;   Label: crt_stdlib.c__qsort_FUN_005bfc68
    PUSH ESI                            ; 005bfc69
    PUSH EDI                            ; 005bfc6a
    PUSH ES                             ; 005bfc6b
    PUSH FS                             ; 005bfc6c
    PUSH GS                             ; 005bfc6e
    PUSH EBP                            ; 005bfc70
    SUB ESP,0x150                       ; 005bfc71
    MOV EAX,dword ptr [ESP + 0x170]     ; 005bfc77
    MOV EBP,dword ptr [ESP + 0x178]     ; 005bfc7e
    MOV EDX,dword ptr [ESP + 0x17c]     ; 005bfc85
    MOV dword ptr [ESP + 0x124],EAX     ; 005bfc8c
    OR EAX,EBP                          ; 005bfc93
    MOV dword ptr [ESP + 0x130],EDX     ; 005bfc95
    TEST AL,0x3                         ; 005bfc9c
    JZ 0x005bfca7                       ; 005bfc9e
        ;   XREF to: 005bfca7 (CONDITIONAL_JUMP)  ; LAB_005bfca7
    MOV EAX,0x2                         ; 005bfca0
    JMP 0x005bfcb2                      ; 005bfca5
        ;   XREF to: 005bfcb2 (UNCONDITIONAL_JUMP)  ; LAB_005bfcb2
    CMP EBP,0x4                         ; 005bfca7
        ;   Label: LAB_005bfca7
    SETA AL                             ; 005bfcaa
    AND EAX,0xff                        ; 005bfcad
    MOV dword ptr [ESP + 0x134],EAX     ; 005bfcb2
        ;   Label: LAB_005bfcb2
    LEA EAX,[EBP + EBP*0x1]             ; 005bfcb9
    MOV dword ptr [ESP + 0x10c],EAX     ; 005bfcbd
    LEA EAX,[EBP*0x4 + 0x0]             ; 005bfcc4
    XOR EDX,EDX                         ; 005bfccb
    SUB EAX,EBP                         ; 005bfccd
    MOV dword ptr [ESP + 0x114],EDX     ; 005bfccf
    MOV dword ptr [ESP + 0x108],EAX     ; 005bfcd6
    MOV EBX,dword ptr [ESP + 0x174]     ; 005bfcdd
        ;   Label: LAB_005bfcdd
    CMP EBX,0x1                         ; 005bfce4
    JBE 0x005bfe1c                      ; 005bfce7
        ;   XREF to: 005bfe1c (CONDITIONAL_JUMP)  ; LAB_005bfe1c
    CMP EBX,0x10                        ; 005bfced
    JNC 0x005bfe52                      ; 005bfcf0
        ;   XREF to: 005bfe52 (CONDITIONAL_JUMP)  ; LAB_005bfe52
    MOV EAX,dword ptr [ESP + 0x108]     ; 005bfcf6
    MOV dword ptr [ESP + 0x12c],EAX     ; 005bfcfd
    TEST EAX,EAX                        ; 005bfd04
    JLE 0x005bfe1c                      ; 005bfd06
        ;   XREF to: 005bfe1c (CONDITIONAL_JUMP)  ; LAB_005bfe1c
    MOV EAX,EBX                         ; 005bfd0c
    IMUL EAX,EBP                        ; 005bfd0e
    MOV EDX,dword ptr [ESP + 0x124]     ; 005bfd11
    ADD EDX,EAX                         ; 005bfd18
    MOV dword ptr [ESP + 0x11c],EDX     ; 005bfd1a
    MOV EAX,dword ptr [ESP + 0x124]     ; 005bfd21
        ;   Label: LAB_005bfd21
    ADD EAX,dword ptr [ESP + 0x12c]     ; 005bfd28
    MOV EBX,dword ptr [ESP + 0x11c]     ; 005bfd2f
    MOV dword ptr [ESP + 0x120],EAX     ; 005bfd36
    CMP EAX,EBX                         ; 005bfd3d
    JNC 0x005bfdfd                      ; 005bfd3f
        ;   XREF to: 005bfdfd (CONDITIONAL_JUMP)  ; LAB_005bfdfd
    MOV EAX,dword ptr [ESP + 0x120]     ; 005bfd45
        ;   Label: LAB_005bfd45
    MOV EDI,dword ptr [ESP + 0x124]     ; 005bfd4c
    MOV dword ptr [ESP + 0x14c],EAX     ; 005bfd53
    CMP EAX,EDI                         ; 005bfd5a
    JA 0x005bfdb5                       ; 005bfd5c
        ;   XREF to: 005bfdb5 (CONDITIONAL_JUMP)  ; LAB_005bfdb5
    JMP 0x005bfdd7                      ; 005bfd5e
        ;   XREF to: 005bfdd7 (UNCONDITIONAL_JUMP)  ; LAB_005bfdd7
    CMP dword ptr [ESP + 0x134],0x0     ; 005bfd63
        ;   Label: LAB_005bfd63
    JZ 0x005bfd7d                       ; 005bfd6b
        ;   XREF to: 005bfd7d (CONDITIONAL_JUMP)  ; LAB_005bfd7d
    MOV ESI,dword ptr [ESP + 0x14c]     ; 005bfd6d
    MOV ECX,EBP                         ; 005bfd74
    CALL crt_unknown.c_FUN_005bfc40     ; 005bfd76
        ;   XREF to: 005bfc40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc40()
    JMP 0x005bfd93                      ; 005bfd7b
        ;   XREF to: 005bfd93 (UNCONDITIONAL_JUMP)  ; LAB_005bfd93
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005bfd7d
        ;   Label: LAB_005bfd7d
    MOV EBX,dword ptr [ESP + 0x14c]     ; 005bfd84
    MOV EAX,dword ptr [EDI]             ; 005bfd8b
    MOV EDX,dword ptr [EDX]             ; 005bfd8d
    MOV dword ptr [EBX],EAX             ; 005bfd8f
    MOV dword ptr [EDI],EDX             ; 005bfd91
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005bfd93
        ;   Label: LAB_005bfd93
    MOV EDX,dword ptr [ESP + 0x14c]     ; 005bfd9a
    SUB EDX,EAX                         ; 005bfda1
    MOV EBX,dword ptr [ESP + 0x124]     ; 005bfda3
    MOV dword ptr [ESP + 0x14c],EDX     ; 005bfdaa
    CMP EDX,EBX                         ; 005bfdb1
    JBE 0x005bfdd7                      ; 005bfdb3
        ;   XREF to: 005bfdd7 (CONDITIONAL_JUMP)  ; LAB_005bfdd7
    MOV ECX,dword ptr [ESP + 0x14c]     ; 005bfdb5
        ;   Label: LAB_005bfdb5
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005bfdbc
    MOV EDI,ECX                         ; 005bfdc3
    PUSH ECX                            ; 005bfdc5
    SUB EDI,ESI                         ; 005bfdc6
    PUSH EDI                            ; 005bfdc8
    CALL dword ptr [ESP + 0x138]        ; 005bfdc9
    ADD ESP,0x8                         ; 005bfdd0
    TEST EAX,EAX                        ; 005bfdd3
    JG 0x005bfd63                       ; 005bfdd5
        ;   XREF to: 005bfd63 (CONDITIONAL_JUMP)  ; LAB_005bfd63
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005bfdd7
        ;   Label: LAB_005bfdd7
    MOV ECX,dword ptr [ESP + 0x120]     ; 005bfdde
    ADD ECX,EAX                         ; 005bfde5
    MOV ESI,dword ptr [ESP + 0x11c]     ; 005bfde7
    MOV dword ptr [ESP + 0x120],ECX     ; 005bfdee
    CMP ECX,ESI                         ; 005bfdf5
    JC 0x005bfd45                       ; 005bfdf7
        ;   XREF to: 005bfd45 (CONDITIONAL_JUMP)  ; LAB_005bfd45
    MOV EAX,dword ptr [ESP + 0x10c]     ; 005bfdfd
        ;   Label: LAB_005bfdfd
    MOV ESI,dword ptr [ESP + 0x12c]     ; 005bfe04
    SUB ESI,EAX                         ; 005bfe0b
    MOV dword ptr [ESP + 0x12c],ESI     ; 005bfe0d
    TEST ESI,ESI                        ; 005bfe14
    JG 0x005bfd21                       ; 005bfe16
        ;   XREF to: 005bfd21 (CONDITIONAL_JUMP)  ; LAB_005bfd21
    MOV EDX,dword ptr [ESP + 0x114]     ; 005bfe1c
        ;   Label: LAB_005bfe1c
    TEST EDX,EDX                        ; 005bfe23
    JZ 0x005c02ff                       ; 005bfe25
        ;   XREF to: 005c02ff (CONDITIONAL_JUMP)  ; LAB_005c02ff
    LEA EBX,[EDX + -0x1]                ; 005bfe2b
    MOV dword ptr [ESP + 0x114],EBX     ; 005bfe2e
    MOV EDX,dword ptr [ESP + EBX*0x4]   ; 005bfe35
    MOV EAX,dword ptr [ESP + EBX*0x4 + 0x80] ; 005bfe38
    MOV dword ptr [ESP + 0x124],EDX     ; 005bfe3f
    MOV dword ptr [ESP + 0x174],EAX     ; 005bfe46
    JMP 0x005bfcdd                      ; 005bfe4d
        ;   XREF to: 005bfcdd (UNCONDITIONAL_JUMP)  ; LAB_005bfcdd
    MOV EAX,EBX                         ; 005bfe52
        ;   Label: LAB_005bfe52
    SHR EAX,0x1                         ; 005bfe54
    IMUL EAX,EBP                        ; 005bfe56
    MOV EDI,dword ptr [ESP + 0x124]     ; 005bfe59
    ADD EDI,EAX                         ; 005bfe60
    CMP EBX,0x1d                        ; 005bfe62
    JBE 0x005bff3c                      ; 005bfe65
        ;   XREF to: 005bff3c (CONDITIONAL_JUMP)  ; LAB_005bff3c
    MOV EAX,dword ptr [ESP + 0x124]     ; 005bfe6b
    MOV dword ptr [ESP + 0x110],EAX     ; 005bfe72
    LEA EAX,[EBX + -0x1]                ; 005bfe79
    IMUL EAX,EBP                        ; 005bfe7c
    MOV EBX,dword ptr [ESP + 0x124]     ; 005bfe7f
    ADD EBX,EAX                         ; 005bfe86
    MOV EAX,dword ptr [ESP + 0x174]     ; 005bfe88
    CMP EAX,0x2a                        ; 005bfe8f
    JBE 0x005bff20                      ; 005bfe92
        ;   XREF to: 005bff20 (CONDITIONAL_JUMP)  ; LAB_005bff20
    MOV ESI,EAX                         ; 005bfe98
    SHR ESI,0x3                         ; 005bfe9a
    IMUL ESI,EBP                        ; 005bfe9d
    LEA EAX,[ESI + ESI*0x1]             ; 005bfea0
    MOV EDX,dword ptr [ESP + 0x130]     ; 005bfea3
    MOV dword ptr [ESP + 0x104],EAX     ; 005bfeaa
    MOV EAX,dword ptr [ESP + 0x124]     ; 005bfeb1
    MOV ECX,dword ptr [ESP + 0x104]     ; 005bfeb8
    PUSH EDX                            ; 005bfebf
    ADD EAX,ECX                         ; 005bfec0
    PUSH EAX                            ; 005bfec2
    MOV EAX,dword ptr [ESP + 0x12c]     ; 005bfec3
    ADD EAX,ESI                         ; 005bfeca
    PUSH EAX                            ; 005bfecc
    MOV EAX,dword ptr [ESP + 0x130]     ; 005bfecd
    PUSH EAX                            ; 005bfed4
    CALL crt_unknown.c_FUN_005bfbd0     ; 005bfed5
        ;   XREF to: 005bfbd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfbd0()
    ADD ESP,0x10                        ; 005bfeda
    MOV EDX,dword ptr [ESP + 0x130]     ; 005bfedd
    PUSH EDX                            ; 005bfee4
    MOV dword ptr [ESP + 0x114],EAX     ; 005bfee5
    LEA EAX,[EDI + ESI*0x1]             ; 005bfeec
    PUSH EAX                            ; 005bfeef
    PUSH EDI                            ; 005bfef0
    SUB EDI,ESI                         ; 005bfef1
    PUSH EDI                            ; 005bfef3
    CALL crt_unknown.c_FUN_005bfbd0     ; 005bfef4
        ;   XREF to: 005bfbd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfbd0()
    ADD ESP,0x10                        ; 005bfef9
    MOV ECX,dword ptr [ESP + 0x130]     ; 005bfefc
    PUSH ECX                            ; 005bff03
    MOV EDI,EAX                         ; 005bff04
    MOV EAX,EBX                         ; 005bff06
    PUSH EBX                            ; 005bff08
    SUB EAX,ESI                         ; 005bff09
    MOV ESI,dword ptr [ESP + 0x10c]     ; 005bff0b
    PUSH EAX                            ; 005bff12
    SUB EBX,ESI                         ; 005bff13
    PUSH EBX                            ; 005bff15
    CALL crt_unknown.c_FUN_005bfbd0     ; 005bff16
        ;   XREF to: 005bfbd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfbd0()
    ADD ESP,0x10                        ; 005bff1b
    MOV EBX,EAX                         ; 005bff1e
    MOV EAX,dword ptr [ESP + 0x130]     ; 005bff20
        ;   Label: LAB_005bff20
    PUSH EAX                            ; 005bff27
    PUSH EBX                            ; 005bff28
    PUSH EDI                            ; 005bff29
    MOV EDX,dword ptr [ESP + 0x11c]     ; 005bff2a
    PUSH EDX                            ; 005bff31
    CALL crt_unknown.c_FUN_005bfbd0     ; 005bff32
        ;   XREF to: 005bfbd0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfbd0()
    ADD ESP,0x10                        ; 005bff37
    MOV EDI,EAX                         ; 005bff3a
    MOV EBX,dword ptr [ESP + 0x134]     ; 005bff3c
        ;   Label: LAB_005bff3c
    TEST EBX,EBX                        ; 005bff43
    JZ 0x005bff73                       ; 005bff45
        ;   XREF to: 005bff73 (CONDITIONAL_JUMP)  ; LAB_005bff73
    MOV EAX,dword ptr [ESP + 0x124]     ; 005bff47
    MOV dword ptr [ESP + 0x128],EAX     ; 005bff4e
    JZ 0x005bff62                       ; 005bff55
        ;   XREF to: 005bff62 (CONDITIONAL_JUMP)  ; LAB_005bff62
    MOV ECX,EBP                         ; 005bff57
    MOV ESI,EAX                         ; 005bff59
    CALL crt_unknown.c_FUN_005bfc40     ; 005bff5b
        ;   XREF to: 005bfc40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc40()
    JMP 0x005bff8a                      ; 005bff60
        ;   XREF to: 005bff8a (UNCONDITIONAL_JUMP)  ; LAB_005bff8a
    MOV EBX,dword ptr [ESP + 0x124]     ; 005bff62
        ;   Label: LAB_005bff62
    MOV EDX,dword ptr [EAX]             ; 005bff69
    MOV EAX,dword ptr [EDI]             ; 005bff6b
    MOV dword ptr [EBX],EAX             ; 005bff6d
    MOV dword ptr [EDI],EDX             ; 005bff6f
    JMP 0x005bff8a                      ; 005bff71
        ;   XREF to: 005bff8a (UNCONDITIONAL_JUMP)  ; LAB_005bff8a
    LEA EAX,[ESP + 0x100]               ; 005bff73
        ;   Label: LAB_005bff73
    MOV dword ptr [ESP + 0x128],EAX     ; 005bff7a
    MOV EAX,dword ptr [EDI]             ; 005bff81
    MOV dword ptr [ESP + 0x100],EAX     ; 005bff83
    MOV EAX,dword ptr [ESP + 0x124]     ; 005bff8a
        ;   Label: LAB_005bff8a
    MOV dword ptr [ESP + 0x144],EAX     ; 005bff91
    MOV dword ptr [ESP + 0x138],EAX     ; 005bff98
    MOV EAX,dword ptr [ESP + 0x174]     ; 005bff9f
    DEC EAX                             ; 005bffa6
    IMUL EAX,EBP                        ; 005bffa7
    MOV EDX,dword ptr [ESP + 0x124]     ; 005bffaa
    ADD EDX,EAX                         ; 005bffb1
    MOV EAX,dword ptr [ESP + 0x174]     ; 005bffb3
    MOV dword ptr [ESP + 0x13c],EDX     ; 005bffba
    MOV dword ptr [ESP + 0x140],EDX     ; 005bffc1
    MOV dword ptr [ESP + 0x148],EAX     ; 005bffc8
    CMP dword ptr [ESP + 0x148],0x0     ; 005bffcf
        ;   Label: LAB_005bffcf
    JZ 0x005c006d                       ; 005bffd7
        ;   XREF to: 005c006d (CONDITIONAL_JUMP)  ; LAB_005c006d
    MOV EAX,dword ptr [ESP + 0x128]     ; 005bffdd
    PUSH EAX                            ; 005bffe4
    MOV EDX,dword ptr [ESP + 0x148]     ; 005bffe5
    PUSH EDX                            ; 005bffec
    CALL dword ptr [ESP + 0x138]        ; 005bffed
    ADD ESP,0x8                         ; 005bfff4
    TEST EAX,EAX                        ; 005bfff7
    JG 0x005c006d                       ; 005bfff9
        ;   XREF to: 005c006d (CONDITIONAL_JUMP)  ; LAB_005c006d
    JNZ 0x005c0049                      ; 005bfffb
        ;   XREF to: 005c0049 (CONDITIONAL_JUMP)  ; LAB_005c0049
    CMP dword ptr [ESP + 0x134],0x0     ; 005bfffd
    JZ 0x005c001e                       ; 005c0005
        ;   XREF to: 005c001e (CONDITIONAL_JUMP)  ; LAB_005c001e
    MOV EDI,dword ptr [ESP + 0x144]     ; 005c0007
    MOV ESI,dword ptr [ESP + 0x138]     ; 005c000e
    MOV ECX,EBP                         ; 005c0015
    CALL crt_unknown.c_FUN_005bfc40     ; 005c0017
        ;   XREF to: 005bfc40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc40()
    JMP 0x005c0042                      ; 005c001c
        ;   XREF to: 005c0042 (UNCONDITIONAL_JUMP)  ; LAB_005c0042
    MOV EAX,dword ptr [ESP + 0x144]     ; 005c001e
        ;   Label: LAB_005c001e
    MOV EDI,dword ptr [ESP + 0x138]     ; 005c0025
    MOV EDX,dword ptr [ESP + 0x138]     ; 005c002c
    MOV EAX,dword ptr [EAX]             ; 005c0033
    MOV EDI,dword ptr [EDI]             ; 005c0035
    MOV dword ptr [EDX],EAX             ; 005c0037
    MOV EAX,dword ptr [ESP + 0x144]     ; 005c0039
    MOV dword ptr [EAX],EDI             ; 005c0040
    ADD dword ptr [ESP + 0x138],EBP     ; 005c0042
        ;   Label: LAB_005c0042
    MOV ESI,dword ptr [ESP + 0x144]     ; 005c0049
        ;   Label: LAB_005c0049
    MOV EDI,dword ptr [ESP + 0x148]     ; 005c0050
    ADD ESI,EBP                         ; 005c0057
    DEC EDI                             ; 005c0059
    MOV dword ptr [ESP + 0x144],ESI     ; 005c005a
    MOV dword ptr [ESP + 0x148],EDI     ; 005c0061
    JMP 0x005bffcf                      ; 005c0068
        ;   XREF to: 005bffcf (UNCONDITIONAL_JUMP)  ; LAB_005bffcf
    CMP dword ptr [ESP + 0x148],0x0     ; 005c006d
        ;   Label: LAB_005c006d
    JZ 0x005c010b                       ; 005c0075
        ;   XREF to: 005c010b (CONDITIONAL_JUMP)  ; LAB_005c010b
    MOV EDX,dword ptr [ESP + 0x128]     ; 005c007b
    PUSH EDX                            ; 005c0082
    MOV EBX,dword ptr [ESP + 0x144]     ; 005c0083
    PUSH EBX                            ; 005c008a
    CALL dword ptr [ESP + 0x138]        ; 005c008b
    ADD ESP,0x8                         ; 005c0092
    TEST EAX,EAX                        ; 005c0095
    JL 0x005c010b                       ; 005c0097
        ;   XREF to: 005c010b (CONDITIONAL_JUMP)  ; LAB_005c010b
    JNZ 0x005c00e7                      ; 005c0099
        ;   XREF to: 005c00e7 (CONDITIONAL_JUMP)  ; LAB_005c00e7
    CMP dword ptr [ESP + 0x134],0x0     ; 005c009b
    JZ 0x005c00bc                       ; 005c00a3
        ;   XREF to: 005c00bc (CONDITIONAL_JUMP)  ; LAB_005c00bc
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005c00a5
    MOV ESI,dword ptr [ESP + 0x140]     ; 005c00ac
    MOV ECX,EBP                         ; 005c00b3
    CALL crt_unknown.c_FUN_005bfc40     ; 005c00b5
        ;   XREF to: 005bfc40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc40()
    JMP 0x005c00e0                      ; 005c00ba
        ;   XREF to: 005c00e0 (UNCONDITIONAL_JUMP)  ; LAB_005c00e0
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005c00bc
        ;   Label: LAB_005c00bc
    MOV EDX,dword ptr [ESP + 0x140]     ; 005c00c3
    MOV EBX,dword ptr [ESP + 0x140]     ; 005c00ca
    MOV EAX,dword ptr [EAX]             ; 005c00d1
    MOV EDX,dword ptr [EDX]             ; 005c00d3
    MOV dword ptr [EBX],EAX             ; 005c00d5
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005c00d7
    MOV dword ptr [EAX],EDX             ; 005c00de
    SUB dword ptr [ESP + 0x13c],EBP     ; 005c00e0
        ;   Label: LAB_005c00e0
    MOV EBX,dword ptr [ESP + 0x140]     ; 005c00e7
        ;   Label: LAB_005c00e7
    MOV ECX,dword ptr [ESP + 0x148]     ; 005c00ee
    SUB EBX,EBP                         ; 005c00f5
    DEC ECX                             ; 005c00f7
    MOV dword ptr [ESP + 0x140],EBX     ; 005c00f8
    MOV dword ptr [ESP + 0x148],ECX     ; 005c00ff
    JMP 0x005c006d                      ; 005c0106
        ;   XREF to: 005c006d (UNCONDITIONAL_JUMP)  ; LAB_005c006d
    CMP dword ptr [ESP + 0x148],0x0     ; 005c010b
        ;   Label: LAB_005c010b
    JZ 0x005c019e                       ; 005c0113
        ;   XREF to: 005c019e (CONDITIONAL_JUMP)  ; LAB_005c019e
    CMP dword ptr [ESP + 0x134],0x0     ; 005c0119
    JZ 0x005c013a                       ; 005c0121
        ;   XREF to: 005c013a (CONDITIONAL_JUMP)  ; LAB_005c013a
    MOV EDI,dword ptr [ESP + 0x140]     ; 005c0123
    MOV ESI,dword ptr [ESP + 0x144]     ; 005c012a
    MOV ECX,EBP                         ; 005c0131
    CALL crt_unknown.c_FUN_005bfc40     ; 005c0133
        ;   XREF to: 005bfc40 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bfc40()
    JMP 0x005c015e                      ; 005c0138
        ;   XREF to: 005c015e (UNCONDITIONAL_JUMP)  ; LAB_005c015e
    MOV EDX,dword ptr [ESP + 0x140]     ; 005c013a
        ;   Label: LAB_005c013a
    MOV EAX,dword ptr [ESP + 0x144]     ; 005c0141
    MOV EBX,dword ptr [ESP + 0x144]     ; 005c0148
    MOV EDX,dword ptr [EDX]             ; 005c014f
    MOV EAX,dword ptr [EAX]             ; 005c0151
    MOV dword ptr [EBX],EDX             ; 005c0153
    MOV EDX,dword ptr [ESP + 0x140]     ; 005c0155
    MOV dword ptr [EDX],EAX             ; 005c015c
    MOV EDI,dword ptr [ESP + 0x144]     ; 005c015e
        ;   Label: LAB_005c015e
    ADD EDI,EBP                         ; 005c0165
    MOV EAX,dword ptr [ESP + 0x148]     ; 005c0167
    MOV dword ptr [ESP + 0x144],EDI     ; 005c016e
    DEC EAX                             ; 005c0175
    MOV dword ptr [ESP + 0x148],EAX     ; 005c0176
    JZ 0x005c019e                       ; 005c017d
        ;   XREF to: 005c019e (CONDITIONAL_JUMP)  ; LAB_005c019e
    MOV EBX,dword ptr [ESP + 0x140]     ; 005c017f
    LEA ECX,[EAX + -0x1]                ; 005c0186
    SUB EBX,EBP                         ; 005c0189
    MOV dword ptr [ESP + 0x148],ECX     ; 005c018b
    MOV dword ptr [ESP + 0x140],EBX     ; 005c0192
    JMP 0x005bffcf                      ; 005c0199
        ;   XREF to: 005bffcf (UNCONDITIONAL_JUMP)  ; LAB_005bffcf
    MOV EAX,dword ptr [ESP + 0x174]     ; 005c019e
        ;   Label: LAB_005c019e
    IMUL EAX,EBP                        ; 005c01a5
    MOV EDX,dword ptr [ESP + 0x124]     ; 005c01a8
    MOV ECX,dword ptr [ESP + 0x138]     ; 005c01af
    MOV ESI,dword ptr [ESP + 0x124]     ; 005c01b6
    MOV EDI,dword ptr [ESP + 0x138]     ; 005c01bd
    ADD EDX,EAX                         ; 005c01c4
    MOV EAX,dword ptr [ESP + 0x144]     ; 005c01c6
    SUB ECX,ESI                         ; 005c01cd
    SUB EAX,EDI                         ; 005c01cf
    MOV dword ptr [ESP + 0x118],EDX     ; 005c01d1
    CMP ECX,EAX                         ; 005c01d8
    JL 0x005c01de                       ; 005c01da
        ;   XREF to: 005c01de (CONDITIONAL_JUMP)  ; LAB_005c01de
    MOV ECX,EAX                         ; 005c01dc
    TEST ECX,ECX                        ; 005c01de
        ;   Label: LAB_005c01de
    JBE 0x005c0217                      ; 005c01e0
        ;   XREF to: 005c0217 (CONDITIONAL_JUMP)  ; LAB_005c0217
    MOV EDI,dword ptr [ESP + 0x144]     ; 005c01e2
    MOV ESI,dword ptr [ESP + 0x124]     ; 005c01e9
    SUB EDI,ECX                         ; 005c01f0
    PUSH ES                             ; 005c01f2
    PUSH DS                             ; 005c01f3
    POP ES                              ; 005c01f4
    MOVZX EDX,CL                        ; 005c01f5
    SHR ECX,0x2                         ; 005c01f8
    JZ 0x005c0208                       ; 005c01fb
        ;   XREF to: 005c0208 (CONDITIONAL_JUMP)  ; LAB_005c0208
    MOV EAX,dword ptr [EDI]             ; 005c01fd
        ;   Label: LAB_005c01fd
    XCHG dword ptr [ESI],EAX            ; 005c01ff
    STOSD ES:EDI                        ; 005c0201
    ADD ESI,0x4                         ; 005c0202
    DEC ECX                             ; 005c0205
    JNZ 0x005c01fd                      ; 005c0206
        ;   XREF to: 005c01fd (CONDITIONAL_JUMP)  ; LAB_005c01fd
    AND DL,0x3                          ; 005c0208
        ;   Label: LAB_005c0208
    JZ 0x005c0216                       ; 005c020b
        ;   XREF to: 005c0216 (CONDITIONAL_JUMP)  ; LAB_005c0216
    MOV AL,byte ptr [EDI]               ; 005c020d
        ;   Label: LAB_005c020d
    XCHG byte ptr [ESI],AL              ; 005c020f
    STOSB ES:EDI                        ; 005c0211
    INC ESI                             ; 005c0212
    DEC EDX                             ; 005c0213
    JNZ 0x005c020d                      ; 005c0214
        ;   XREF to: 005c020d (CONDITIONAL_JUMP)  ; LAB_005c020d
    POP ES                              ; 005c0216
        ;   Label: LAB_005c0216
    MOV ECX,dword ptr [ESP + 0x118]     ; 005c0217
        ;   Label: LAB_005c0217
    MOV EAX,dword ptr [ESP + 0x13c]     ; 005c021e
    SUB ECX,EAX                         ; 005c0225
    MOV EDX,dword ptr [ESP + 0x140]     ; 005c0227
    SUB ECX,EBP                         ; 005c022e
    SUB EAX,EDX                         ; 005c0230
    CMP EAX,ECX                         ; 005c0232
    JNC 0x005c0238                      ; 005c0234
        ;   XREF to: 005c0238 (CONDITIONAL_JUMP)  ; LAB_005c0238
    MOV ECX,EAX                         ; 005c0236
    TEST ECX,ECX                        ; 005c0238
        ;   Label: LAB_005c0238
    JBE 0x005c0271                      ; 005c023a
        ;   XREF to: 005c0271 (CONDITIONAL_JUMP)  ; LAB_005c0271
    MOV EDI,dword ptr [ESP + 0x118]     ; 005c023c
    MOV ESI,dword ptr [ESP + 0x144]     ; 005c0243
    SUB EDI,ECX                         ; 005c024a
    PUSH ES                             ; 005c024c
    PUSH DS                             ; 005c024d
    POP ES                              ; 005c024e
    MOVZX EDX,CL                        ; 005c024f
    SHR ECX,0x2                         ; 005c0252
    JZ 0x005c0262                       ; 005c0255
        ;   XREF to: 005c0262 (CONDITIONAL_JUMP)  ; LAB_005c0262
    MOV EAX,dword ptr [EDI]             ; 005c0257
        ;   Label: LAB_005c0257
    XCHG dword ptr [ESI],EAX            ; 005c0259
    STOSD ES:EDI                        ; 005c025b
    ADD ESI,0x4                         ; 005c025c
    DEC ECX                             ; 005c025f
    JNZ 0x005c0257                      ; 005c0260
        ;   XREF to: 005c0257 (CONDITIONAL_JUMP)  ; LAB_005c0257
    AND DL,0x3                          ; 005c0262
        ;   Label: LAB_005c0262
    JZ 0x005c0270                       ; 005c0265
        ;   XREF to: 005c0270 (CONDITIONAL_JUMP)  ; LAB_005c0270
    MOV AL,byte ptr [EDI]               ; 005c0267
        ;   Label: LAB_005c0267
    XCHG byte ptr [ESI],AL              ; 005c0269
    STOSB ES:EDI                        ; 005c026b
    INC ESI                             ; 005c026c
    DEC EDX                             ; 005c026d
    JNZ 0x005c0267                      ; 005c026e
        ;   XREF to: 005c0267 (CONDITIONAL_JUMP)  ; LAB_005c0267
    POP ES                              ; 005c0270
        ;   Label: LAB_005c0270
    MOV EBX,dword ptr [ESP + 0x144]     ; 005c0271
        ;   Label: LAB_005c0271
    MOV ECX,dword ptr [ESP + 0x138]     ; 005c0278
    MOV EDI,dword ptr [ESP + 0x13c]     ; 005c027f
    MOV ESI,dword ptr [ESP + 0x140]     ; 005c0286
    SUB EBX,ECX                         ; 005c028d
    SUB EDI,ESI                         ; 005c028f
    MOV ECX,dword ptr [ESP + 0x114]     ; 005c0291
    MOV ESI,dword ptr [ESP + 0x118]     ; 005c0298
    SHL ECX,0x2                         ; 005c029f
    SUB ESI,EDI                         ; 005c02a2
    CMP EDI,EBX                         ; 005c02a4
    JC 0x005c02c0                       ; 005c02a6
        ;   XREF to: 005c02c0 (CONDITIONAL_JUMP)  ; LAB_005c02c0
    MOV EAX,EDI                         ; 005c02a8
    XOR EDX,EDX                         ; 005c02aa
    DIV EBP                             ; 005c02ac
    XOR EDX,EDX                         ; 005c02ae
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005c02b0
    MOV EAX,EBX                         ; 005c02b7
    DIV EBP                             ; 005c02b9
    MOV dword ptr [ESP + ECX*0x1],ESI   ; 005c02bb
    JMP 0x005c02ec                      ; 005c02be
        ;   XREF to: 005c02ec (UNCONDITIONAL_JUMP)  ; LAB_005c02ec
    CMP EBX,EBP                         ; 005c02c0
        ;   Label: LAB_005c02c0
    JBE 0x005bfe1c                      ; 005c02c2
        ;   XREF to: 005bfe1c (CONDITIONAL_JUMP)  ; LAB_005bfe1c
    MOV EAX,dword ptr [ESP + 0x124]     ; 005c02c8
    XOR EDX,EDX                         ; 005c02cf
    MOV dword ptr [ESP + ECX*0x1],EAX   ; 005c02d1
    MOV EAX,EBX                         ; 005c02d4
    DIV EBP                             ; 005c02d6
    XOR EDX,EDX                         ; 005c02d8
    MOV dword ptr [ESP + ECX*0x1 + 0x80],EAX ; 005c02da
    MOV EAX,EDI                         ; 005c02e1
    DIV EBP                             ; 005c02e3
    MOV dword ptr [ESP + 0x124],ESI     ; 005c02e5
    MOV dword ptr [ESP + 0x174],EAX     ; 005c02ec
        ;   Label: LAB_005c02ec
    INC dword ptr [ESP + 0x114]         ; 005c02f3
    JMP 0x005bfcdd                      ; 005c02fa
        ;   XREF to: 005bfcdd (UNCONDITIONAL_JUMP)  ; LAB_005bfcdd
    ADD ESP,0x150                       ; 005c02ff
        ;   Label: LAB_005c02ff
    POP EBP                             ; 005c0305
    POP GS                              ; 005c0306
    POP FS                              ; 005c0308
    POP ES                              ; 005c030a
    POP EDI                             ; 005c030b
    POP ESI                             ; 005c030c
    POP EBX                             ; 005c030d
    RET                                 ; 005c030e

