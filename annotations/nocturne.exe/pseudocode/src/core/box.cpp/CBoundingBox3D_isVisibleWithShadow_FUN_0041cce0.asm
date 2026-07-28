; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0(CBoundingBox3D *this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 at 0041d038
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_014b9920
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0041cce0
        ;   Label: core_box.cpp_CBoundingBox3D_isVisibleWithShadow_FUN_0041cce0
    SUB ESP,0x1c                        ; 0041cce1
    CMP dword ptr [0x014b9920],0x0      ; 0041cce4 | DAT_014b9920
    JZ 0x0041ce6d                       ; 0041cceb
        ;   XREF to: 0041ce6d (CONDITIONAL_JUMP)  ; LAB_0041ce6d
    PUSH EDI                            ; 0041ccf1
    PUSH ESI                            ; 0041ccf2
    PUSH EBX                            ; 0041ccf3
    MOV EDX,dword ptr [0x005ae704]      ; 0041ccf4 | DAT_005ae704
    MOV EAX,[0x01c00c50]                ; 0041ccfa | DAT_01c00c50
    MOV ECX,dword ptr [0x01c00c48]      ; 0041ccff | DAT_01c00c48
    MOV EDI,dword ptr [0x01c00c50]      ; 0041cd05 | DAT_01c00c50
    MOV ESI,dword ptr [0x01c00c4c]      ; 0041cd0b | DAT_01c00c4c
    MOV EBP,dword ptr [0x01c00c54]      ; 0041cd11 | DAT_01c00c54
    MOV EDX,dword ptr [EDX]             ; 0041cd17 | DAT_01b4d738
    ADD EAX,ECX                         ; 0041cd19
    SUB EDI,ECX                         ; 0041cd1b
    MOV dword ptr [ESP + 0x20],EAX      ; 0041cd1d
    MOV EAX,[0x01c00c54]                ; 0041cd21 | DAT_01c00c54
    ADD EBP,ESI                         ; 0041cd26
    SUB EAX,ESI                         ; 0041cd28
    MOV ESI,EDX                         ; 0041cd2a
    ADD EDX,0x180                       ; 0041cd2c
    MOV dword ptr [ESP + 0x24],EAX      ; 0041cd32
    MOV dword ptr [ESP + 0x1c],EDX      ; 0041cd36
    MOV AH,byte ptr [ESI + 0x13]        ; 0041cd3a
        ;   Label: LAB_0041cd3a
    MOV ECX,ESI                         ; 0041cd3d
    TEST AH,0x80                        ; 0041cd3f
    JZ 0x0041ce77                       ; 0041cd42
        ;   XREF to: 0041ce77 (CONDITIONAL_JUMP)  ; LAB_0041ce77
    MOV EAX,dword ptr [ESI + 0x8]       ; 0041cd48
    MOV EDX,dword ptr [ESI]             ; 0041cd4b
    NEG EAX                             ; 0041cd4d
    CMP EAX,EDX                         ; 0041cd4f
    JGE 0x0041cd7c                      ; 0041cd51
        ;   XREF to: 0041cd7c (CONDITIONAL_JUMP)  ; LAB_0041cd7c
    MOV EBX,dword ptr [ESI + 0x8]       ; 0041cd53
    CMP EDX,EBX                         ; 0041cd56
    JGE 0x0041cd7c                      ; 0041cd58
        ;   XREF to: 0041cd7c (CONDITIONAL_JUMP)  ; LAB_0041cd7c
    MOV EDX,dword ptr [0x01c00c48]      ; 0041cd5a | DAT_01c00c48
    MOV EAX,dword ptr [ESI]             ; 0041cd60
    IMUL EDX                            ; 0041cd62
    IDIV EBX                            ; 0041cd64
    ADD EAX,dword ptr [0x01c00c50]      ; 0041cd66 | DAT_01c00c50
    CMP EAX,EDI                         ; 0041cd6c
    JLE 0x0041cd72                      ; 0041cd6e
        ;   XREF to: 0041cd72 (CONDITIONAL_JUMP)  ; LAB_0041cd72
    MOV EDI,EAX                         ; 0041cd70
    CMP EAX,dword ptr [ESP + 0x20]      ; 0041cd72
        ;   Label: LAB_0041cd72
    JGE 0x0041cd7c                      ; 0041cd76
        ;   XREF to: 0041cd7c (CONDITIONAL_JUMP)  ; LAB_0041cd7c
    MOV dword ptr [ESP + 0x20],EAX      ; 0041cd78
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041cd7c
        ;   Label: LAB_0041cd7c
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041cd7f
    NEG EAX                             ; 0041cd82
    CMP EAX,EDX                         ; 0041cd84
    JGE 0x0041cdb2                      ; 0041cd86
        ;   XREF to: 0041cdb2 (CONDITIONAL_JUMP)  ; LAB_0041cdb2
    MOV EBX,dword ptr [ECX + 0x8]       ; 0041cd88
    CMP EDX,EBX                         ; 0041cd8b
    JGE 0x0041cdb2                      ; 0041cd8d
        ;   XREF to: 0041cdb2 (CONDITIONAL_JUMP)  ; LAB_0041cdb2
    MOV EDX,dword ptr [0x01c00c4c]      ; 0041cd8f | DAT_01c00c4c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0041cd95
    IMUL EDX                            ; 0041cd98
    IDIV EBX                            ; 0041cd9a
    ADD EAX,dword ptr [0x01c00c54]      ; 0041cd9c | DAT_01c00c54
    CMP EAX,EBP                         ; 0041cda2
    JLE 0x0041cda8                      ; 0041cda4
        ;   XREF to: 0041cda8 (CONDITIONAL_JUMP)  ; LAB_0041cda8
    MOV EBP,EAX                         ; 0041cda6
    CMP EAX,dword ptr [ESP + 0x24]      ; 0041cda8
        ;   Label: LAB_0041cda8
    JGE 0x0041cdb2                      ; 0041cdac
        ;   XREF to: 0041cdb2 (CONDITIONAL_JUMP)  ; LAB_0041cdb2
    MOV dword ptr [ESP + 0x24],EAX      ; 0041cdae
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041cdb2
        ;   Label: LAB_0041cdb2
    CMP EDX,dword ptr [ECX]             ; 0041cdb5
    JG 0x0041cdc7                       ; 0041cdb7
        ;   XREF to: 0041cdc7 (CONDITIONAL_JUMP)  ; LAB_0041cdc7
    MOV EBX,dword ptr [0x01c00c50]      ; 0041cdb9 | DAT_01c00c50
    MOV EDI,dword ptr [0x01c00c48]      ; 0041cdbf | DAT_01c00c48
    ADD EDI,EBX                         ; 0041cdc5
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041cdc7
        ;   Label: LAB_0041cdc7
    MOV EDX,dword ptr [ECX]             ; 0041cdca
    NEG EAX                             ; 0041cdcc
    CMP EAX,EDX                         ; 0041cdce
    JL 0x0041cde3                       ; 0041cdd0
        ;   XREF to: 0041cde3 (CONDITIONAL_JUMP)  ; LAB_0041cde3
    MOV EBX,dword ptr [0x01c00c48]      ; 0041cdd2 | DAT_01c00c48
    MOV EAX,[0x01c00c50]                ; 0041cdd8 | DAT_01c00c50
    SUB EAX,EBX                         ; 0041cddd
    MOV dword ptr [ESP + 0x20],EAX      ; 0041cddf
    MOV EDX,dword ptr [ECX + 0x8]       ; 0041cde3
        ;   Label: LAB_0041cde3
    CMP EDX,dword ptr [ECX + 0x4]       ; 0041cde6
    JG 0x0041cdfc                       ; 0041cde9
        ;   XREF to: 0041cdfc (CONDITIONAL_JUMP)  ; LAB_0041cdfc
    MOV EBX,dword ptr [0x01c00c54]      ; 0041cdeb | DAT_01c00c54
    MOV EAX,[0x01c00c4c]                ; 0041cdf1 | DAT_01c00c4c
    ADD EAX,EBX                         ; 0041cdf6
    MOV dword ptr [ESP + 0x24],EAX      ; 0041cdf8
    MOV EAX,dword ptr [ECX + 0x8]       ; 0041cdfc
        ;   Label: LAB_0041cdfc
    MOV EDX,dword ptr [ECX + 0x4]       ; 0041cdff
    NEG EAX                             ; 0041ce02
    CMP EAX,EDX                         ; 0041ce04
    JL 0x0041ce16                       ; 0041ce06
        ;   XREF to: 0041ce16 (CONDITIONAL_JUMP)  ; LAB_0041ce16
    MOV ECX,dword ptr [0x01c00c4c]      ; 0041ce08 | DAT_01c00c4c
    MOV EBP,dword ptr [0x01c00c54]      ; 0041ce0e | DAT_01c00c54
    SUB EBP,ECX                         ; 0041ce14
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041ce16
        ;   Label: LAB_0041ce16
    ADD ESI,0x30                        ; 0041ce1a
    CMP ESI,EBX                         ; 0041ce1d
    JNZ 0x0041cd3a                      ; 0041ce1f
        ;   XREF to: 0041cd3a (CONDITIONAL_JUMP)  ; LAB_0041cd3a
    MOV ESI,dword ptr [ESP + 0x20]      ; 0041ce25
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041ce29
    MOV EDX,dword ptr [0x014b9920]      ; 0041ce2d | DAT_014b9920
    SAR EDI,0x10                        ; 0041ce33
    SAR EAX,0x10                        ; 0041ce36
    SAR EBP,0x10                        ; 0041ce39
    MOV dword ptr [ESP + 0x24],EAX      ; 0041ce3c
    MOV dword ptr [ESP + 0x14],EAX      ; 0041ce40
    LEA EAX,[ESP + 0xc]                 ; 0041ce44
    SAR ESI,0x10                        ; 0041ce48
    PUSH EAX                            ; 0041ce4b
    MOV dword ptr [ESP + 0x14],EDI      ; 0041ce4c
    MOV dword ptr [ESP + 0x1c],EBP      ; 0041ce50
    PUSH EDX                            ; 0041ce54
    MOV dword ptr [ESP + 0x28],ESI      ; 0041ce55
    MOV dword ptr [ESP + 0x14],ESI      ; 0041ce59
    CALL core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0 ; 0041ce5d
        ;   XREF to: 00451aa0 (UNCONDITIONAL_CALL)  ; int core_dlight.cpp_CDemonLight_testShadowMapRegion_FUN_00451aa0(CDemonLight * this_ptr, CRect * rect)
    ADD ESP,0x8                         ; 0041ce62
    POP EBX                             ; 0041ce65
    POP ESI                             ; 0041ce66
    POP EDI                             ; 0041ce67
    ADD ESP,0x1c                        ; 0041ce68
    POP EBP                             ; 0041ce6b
    RET                                 ; 0041ce6c
    MOV EAX,0x1                         ; 0041ce6d
        ;   Label: LAB_0041ce6d
    ADD ESP,0x1c                        ; 0041ce72
    POP EBP                             ; 0041ce75
    RET                                 ; 0041ce76
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041ce77
        ;   Label: LAB_0041ce77
    MOV EDX,dword ptr [ESI + 0x10]      ; 0041ce7b
    CMP EAX,EDX                         ; 0041ce7e
    JLE 0x0041ce86                      ; 0041ce80
        ;   XREF to: 0041ce86 (CONDITIONAL_JUMP)  ; LAB_0041ce86
    MOV dword ptr [ESP + 0x20],EDX      ; 0041ce82
    MOV EBX,dword ptr [ECX + 0x10]      ; 0041ce86
        ;   Label: LAB_0041ce86
    CMP EDI,EBX                         ; 0041ce89
    JGE 0x0041ce8f                      ; 0041ce8b
        ;   XREF to: 0041ce8f (CONDITIONAL_JUMP)  ; LAB_0041ce8f
    MOV EDI,EBX                         ; 0041ce8d
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041ce8f
        ;   Label: LAB_0041ce8f
    MOV EDX,dword ptr [ECX + 0x14]      ; 0041ce93
    CMP EAX,EDX                         ; 0041ce96
    JLE 0x0041ce9e                      ; 0041ce98
        ;   XREF to: 0041ce9e (CONDITIONAL_JUMP)  ; LAB_0041ce9e
    MOV dword ptr [ESP + 0x24],EDX      ; 0041ce9a
    MOV EBX,dword ptr [ECX + 0x14]      ; 0041ce9e
        ;   Label: LAB_0041ce9e
    CMP EBP,EBX                         ; 0041cea1
    JGE 0x0041ce16                      ; 0041cea3
        ;   XREF to: 0041ce16 (CONDITIONAL_JUMP)  ; LAB_0041ce16
    MOV EBP,EBX                         ; 0041cea9
    JMP 0x0041ce16                      ; 0041ceab
        ;   XREF to: 0041ce16 (UNCONDITIONAL_JUMP)  ; LAB_0041ce16

