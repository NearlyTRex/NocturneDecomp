; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010(undefined4 param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   core_morph.cpp_CMorphModel_rotatePoints_FUN_004dfcb0 at 004dfe49
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 at 0050c27a
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_007f7374
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;
; Called Functions:
;   FUN_004405d0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0050c010
        ;   Label: core_set.cpp_CDemonSet_pushScreenBoundsToCamera_FUN_0050c010
    SUB ESP,0x1c                        ; 0050c011
    CMP dword ptr [0x007f7374],0x0      ; 0050c014 | DAT_007f7374
    JZ 0x0050c1b5                       ; 0050c01b
        ;   XREF to: 0050c1b5 (CONDITIONAL_JUMP)  ; LAB_0050c1b5
    PUSH EDI                            ; 0050c021
    PUSH ESI                            ; 0050c022
    PUSH EBX                            ; 0050c023
    MOV EBX,dword ptr [ESP + 0x34]      ; 0050c024
    MOV EAX,[0x005ae704]                ; 0050c028 | DAT_005ae704
    MOV EDI,dword ptr [0x01c00c50]      ; 0050c02d | DAT_01c00c50
    MOV ECX,dword ptr [0x01c00c48]      ; 0050c033 | DAT_01c00c48
    MOV ESI,dword ptr [EAX]             ; 0050c039 | DAT_01b4d738
    MOV EAX,[0x01c00c50]                ; 0050c03b | DAT_01c00c50
    MOV EBP,dword ptr [0x01c00c54]      ; 0050c040 | DAT_01c00c54
    SUB EAX,ECX                         ; 0050c046
    MOV EDX,dword ptr [0x01c00c4c]      ; 0050c048 | DAT_01c00c4c
    MOV dword ptr [ESP + 0x20],EAX      ; 0050c04e
    MOV EAX,[0x01c00c4c]                ; 0050c052 | DAT_01c00c4c
    ADD EDI,ECX                         ; 0050c057
    SUB EBP,EAX                         ; 0050c059
    MOV EAX,[0x01c00c54]                ; 0050c05b | DAT_01c00c54
    XOR ECX,ECX                         ; 0050c060
    ADD EAX,EDX                         ; 0050c062
    MOV dword ptr [ESP + 0x1c],ECX      ; 0050c064
    MOV dword ptr [ESP + 0x24],EAX      ; 0050c068
    TEST EBX,EBX                        ; 0050c06c
    JLE 0x0050c173                      ; 0050c06e
        ;   XREF to: 0050c173 (CONDITIONAL_JUMP)  ; LAB_0050c173
    MOV AH,byte ptr [ESI + 0x13]        ; 0050c074
        ;   Label: LAB_0050c074
    MOV ECX,ESI                         ; 0050c077
    TEST AH,0x80                        ; 0050c079
    JZ 0x0050c1ba                       ; 0050c07c
        ;   XREF to: 0050c1ba (CONDITIONAL_JUMP)  ; LAB_0050c1ba
    MOV EAX,dword ptr [ESI + 0x8]       ; 0050c082
    MOV EBX,dword ptr [ESI]             ; 0050c085
    NEG EAX                             ; 0050c087
    CMP EAX,EBX                         ; 0050c089
    JGE 0x0050c0bc                      ; 0050c08b
        ;   XREF to: 0050c0bc (CONDITIONAL_JUMP)  ; LAB_0050c0bc
    MOV EDX,dword ptr [ESI + 0x8]       ; 0050c08d
    CMP EBX,EDX                         ; 0050c090
    JGE 0x0050c0bc                      ; 0050c092
        ;   XREF to: 0050c0bc (CONDITIONAL_JUMP)  ; LAB_0050c0bc
    MOV EBX,EDX                         ; 0050c094
    MOV EAX,dword ptr [ESI]             ; 0050c096
    MOV EDX,dword ptr [0x01c00c48]      ; 0050c098 | DAT_01c00c48
    IMUL EDX                            ; 0050c09e
    IDIV EBX                            ; 0050c0a0
    MOV EBX,dword ptr [0x01c00c50]      ; 0050c0a2 | DAT_01c00c50
    MOV EDX,dword ptr [ESP + 0x20]      ; 0050c0a8
    ADD EAX,EBX                         ; 0050c0ac
    CMP EAX,EDX                         ; 0050c0ae
    JLE 0x0050c0b6                      ; 0050c0b0
        ;   XREF to: 0050c0b6 (CONDITIONAL_JUMP)  ; LAB_0050c0b6
    MOV dword ptr [ESP + 0x20],EAX      ; 0050c0b2
    CMP EAX,EDI                         ; 0050c0b6
        ;   Label: LAB_0050c0b6
    JGE 0x0050c0bc                      ; 0050c0b8
        ;   XREF to: 0050c0bc (CONDITIONAL_JUMP)  ; LAB_0050c0bc
    MOV EDI,EAX                         ; 0050c0ba
    MOV EAX,dword ptr [ECX + 0x8]       ; 0050c0bc
        ;   Label: LAB_0050c0bc
    MOV EBX,dword ptr [ECX + 0x4]       ; 0050c0bf
    NEG EAX                             ; 0050c0c2
    CMP EAX,EBX                         ; 0050c0c4
    JGE 0x0050c0f8                      ; 0050c0c6
        ;   XREF to: 0050c0f8 (CONDITIONAL_JUMP)  ; LAB_0050c0f8
    MOV EDX,dword ptr [ECX + 0x8]       ; 0050c0c8
    CMP EBX,EDX                         ; 0050c0cb
    JGE 0x0050c0f8                      ; 0050c0cd
        ;   XREF to: 0050c0f8 (CONDITIONAL_JUMP)  ; LAB_0050c0f8
    MOV EBX,EDX                         ; 0050c0cf
    MOV EAX,dword ptr [ECX + 0x4]       ; 0050c0d1
    MOV EDX,dword ptr [0x01c00c4c]      ; 0050c0d4 | DAT_01c00c4c
    IMUL EDX                            ; 0050c0da
    IDIV EBX                            ; 0050c0dc
    MOV EBX,dword ptr [0x01c00c54]      ; 0050c0de | DAT_01c00c54
    MOV EDX,dword ptr [ESP + 0x24]      ; 0050c0e4
    ADD EAX,EBX                         ; 0050c0e8
    CMP EAX,EDX                         ; 0050c0ea
    JLE 0x0050c0f2                      ; 0050c0ec
        ;   XREF to: 0050c0f2 (CONDITIONAL_JUMP)  ; LAB_0050c0f2
    MOV dword ptr [ESP + 0x24],EAX      ; 0050c0ee
    CMP EAX,EBP                         ; 0050c0f2
        ;   Label: LAB_0050c0f2
    JGE 0x0050c0f8                      ; 0050c0f4
        ;   XREF to: 0050c0f8 (CONDITIONAL_JUMP)  ; LAB_0050c0f8
    MOV EBP,EAX                         ; 0050c0f6
    MOV EBX,dword ptr [ECX + 0x8]       ; 0050c0f8
        ;   Label: LAB_0050c0f8
    CMP EBX,dword ptr [ECX]             ; 0050c0fb
    JG 0x0050c110                       ; 0050c0fd
        ;   XREF to: 0050c110 (CONDITIONAL_JUMP)  ; LAB_0050c110
    MOV EDX,dword ptr [0x01c00c50]      ; 0050c0ff | DAT_01c00c50
    MOV EAX,[0x01c00c48]                ; 0050c105 | DAT_01c00c48
    ADD EAX,EDX                         ; 0050c10a
    MOV dword ptr [ESP + 0x20],EAX      ; 0050c10c
    MOV EAX,dword ptr [ECX + 0x8]       ; 0050c110
        ;   Label: LAB_0050c110
    MOV EBX,dword ptr [ECX]             ; 0050c113
    NEG EAX                             ; 0050c115
    CMP EAX,EBX                         ; 0050c117
    JL 0x0050c128                       ; 0050c119
        ;   XREF to: 0050c128 (CONDITIONAL_JUMP)  ; LAB_0050c128
    MOV EAX,[0x01c00c48]                ; 0050c11b | DAT_01c00c48
    MOV EDI,dword ptr [0x01c00c50]      ; 0050c120 | DAT_01c00c50
    SUB EDI,EAX                         ; 0050c126
    MOV EDX,dword ptr [ECX + 0x8]       ; 0050c128
        ;   Label: LAB_0050c128
    CMP EDX,dword ptr [ECX + 0x4]       ; 0050c12b
    JG 0x0050c13e                       ; 0050c12e
        ;   XREF to: 0050c13e (CONDITIONAL_JUMP)  ; LAB_0050c13e
    MOV EBX,dword ptr [0x01c00c54]      ; 0050c130 | DAT_01c00c54
    MOV EBP,dword ptr [0x01c00c4c]      ; 0050c136 | DAT_01c00c4c
    ADD EBP,EBX                         ; 0050c13c
    MOV EAX,dword ptr [ECX + 0x8]       ; 0050c13e
        ;   Label: LAB_0050c13e
    MOV EDX,dword ptr [ECX + 0x4]       ; 0050c141
    NEG EAX                             ; 0050c144
    CMP EAX,EDX                         ; 0050c146
    JL 0x0050c15b                       ; 0050c148
        ;   XREF to: 0050c15b (CONDITIONAL_JUMP)  ; LAB_0050c15b
    MOV ECX,dword ptr [0x01c00c4c]      ; 0050c14a | DAT_01c00c4c
    MOV EAX,[0x01c00c54]                ; 0050c150 | DAT_01c00c54
    SUB EAX,ECX                         ; 0050c155
    MOV dword ptr [ESP + 0x24],EAX      ; 0050c157
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050c15b
        ;   Label: LAB_0050c15b
    MOV EDX,dword ptr [ESP + 0x34]      ; 0050c15f
    INC EAX                             ; 0050c163
    ADD ESI,0x30                        ; 0050c164
    MOV dword ptr [ESP + 0x1c],EAX      ; 0050c167
    CMP EAX,EDX                         ; 0050c16b
    JL 0x0050c074                       ; 0050c16d
        ;   XREF to: 0050c074 (CONDITIONAL_JUMP)  ; LAB_0050c074
    MOV ECX,dword ptr [ESP + 0x20]      ; 0050c173
        ;   Label: LAB_0050c173
    MOV EBX,dword ptr [ESP + 0x24]      ; 0050c177
    MOV EDX,dword ptr [0x007f7374]      ; 0050c17b | DAT_007f7374
    SAR EBX,0x10                        ; 0050c181
    SAR EBP,0x10                        ; 0050c184
    PUSH EBX                            ; 0050c187
    SAR ECX,0x10                        ; 0050c188
    PUSH EBP                            ; 0050c18b
    SAR EDI,0x10                        ; 0050c18c
    PUSH ECX                            ; 0050c18f
    MOV dword ptr [ESP + 0x18],EDI      ; 0050c190
    MOV dword ptr [ESP + 0x20],EBP      ; 0050c194
    PUSH EDI                            ; 0050c198
    MOV dword ptr [ESP + 0x30],ECX      ; 0050c199
    MOV dword ptr [ESP + 0x34],EBX      ; 0050c19d
    PUSH EDX                            ; 0050c1a1
    MOV dword ptr [ESP + 0x24],ECX      ; 0050c1a2
    MOV dword ptr [ESP + 0x2c],EBX      ; 0050c1a6
    CALL FUN_004405d0                   ; 0050c1aa
        ;   XREF to: 004405d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004405d0()
    ADD ESP,0x14                        ; 0050c1af
    POP EBX                             ; 0050c1b2
    POP ESI                             ; 0050c1b3
    POP EDI                             ; 0050c1b4
    ADD ESP,0x1c                        ; 0050c1b5
        ;   Label: LAB_0050c1b5
    POP EBP                             ; 0050c1b8
    RET                                 ; 0050c1b9
    MOV EBX,dword ptr [ESI + 0x10]      ; 0050c1ba
        ;   Label: LAB_0050c1ba
    CMP EDI,EBX                         ; 0050c1bd
    JLE 0x0050c1c3                      ; 0050c1bf
        ;   XREF to: 0050c1c3 (CONDITIONAL_JUMP)  ; LAB_0050c1c3
    MOV EDI,EBX                         ; 0050c1c1
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050c1c3
        ;   Label: LAB_0050c1c3
    MOV EDX,dword ptr [ECX + 0x10]      ; 0050c1c7
    CMP EAX,EDX                         ; 0050c1ca
    JGE 0x0050c1d2                      ; 0050c1cc
        ;   XREF to: 0050c1d2 (CONDITIONAL_JUMP)  ; LAB_0050c1d2
    MOV dword ptr [ESP + 0x20],EDX      ; 0050c1ce
    MOV EBX,dword ptr [ECX + 0x14]      ; 0050c1d2
        ;   Label: LAB_0050c1d2
    CMP EBP,EBX                         ; 0050c1d5
    JLE 0x0050c1db                      ; 0050c1d7
        ;   XREF to: 0050c1db (CONDITIONAL_JUMP)  ; LAB_0050c1db
    MOV EBP,EBX                         ; 0050c1d9
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050c1db
        ;   Label: LAB_0050c1db
    MOV EDX,dword ptr [ECX + 0x14]      ; 0050c1df
    CMP EAX,EDX                         ; 0050c1e2
    JGE 0x0050c15b                      ; 0050c1e4
        ;   XREF to: 0050c15b (CONDITIONAL_JUMP)  ; LAB_0050c15b
    MOV dword ptr [ESP + 0x24],EDX      ; 0050c1ea
    JMP 0x0050c15b                      ; 0050c1ee
        ;   XREF to: 0050c15b (UNCONDITIONAL_JUMP)  ; LAB_0050c15b

