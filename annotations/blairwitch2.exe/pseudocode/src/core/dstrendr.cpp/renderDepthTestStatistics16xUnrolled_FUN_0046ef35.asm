; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ef35(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_countVisiblePixelsPoly_FUN_004698a0 at 00469979
;
; Referenced Globals:
;   undefined4 DAT_01ba5c7c
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c35e70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046ef35
        ;   Label: core_dstrendr.cpp_renderDepthTestStatistics16xUnrolled_FUN_0046ef35
    PUSH EDI                            ; 0046ef36
    PUSH EBP                            ; 0046ef37
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046ef38
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046ef3b
    CMP EAX,ECX                         ; 0046ef3e
    JBE 0x0046ef45                      ; 0046ef40
        ;   XREF to: 0046ef45 (CONDITIONAL_JUMP)  ; LAB_0046ef45
    XCHG EAX,ECX                        ; 0046ef42
    XCHG EDI,ESI                        ; 0046ef43
    SHR EAX,0x10                        ; 0046ef45
        ;   Label: LAB_0046ef45
    SHR ECX,0x10                        ; 0046ef48
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0046ef4b | DAT_01c2b64c
    MOV EBX,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046ef52 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046ef59
    JLE 0x0046f0bc                      ; 0046ef5b
        ;   XREF to: 0046f0bc (CONDITIONAL_JUMP)  ; LAB_0046f0bc
    ADD EBX,EAX                         ; 0046ef61
    SHL EAX,0x2                         ; 0046ef63
    ADD EBP,EAX                         ; 0046ef66
    INC ECX                             ; 0046ef68
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046ef69
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046ef6c
    IMUL dword ptr [ECX*0x4 + 0x1c35e70] ; 0046ef6f | DAT_01c35e70
    MOV EDI,EBX                         ; 0046ef76
    MOV EBX,EBP                         ; 0046ef78
    DEC ECX                             ; 0046ef7a
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046ef7b
    MOV EAX,[0x01ba5c7c]                ; 0046ef7e | DAT_01ba5c7c
    SUB ECX,0x4                         ; 0046ef83
        ;   Label: LAB_0046ef83
    JL 0x0046f088                       ; 0046ef86
        ;   XREF to: 0046f088 (CONDITIONAL_JUMP)  ; LAB_0046f088
    MOV EBP,ESI                         ; 0046ef8c
    SHR EBP,0x8                         ; 0046ef8e
    CMP EBP,dword ptr [EBX]             ; 0046ef91
    SBB EAX,-0x1                        ; 0046ef93
    ADD ESI,EDX                         ; 0046ef96
    MOV EBP,ESI                         ; 0046ef98
    SHR EBP,0x8                         ; 0046ef9a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046ef9d
    SBB EAX,-0x1                        ; 0046efa0
    ADD ESI,EDX                         ; 0046efa3
    MOV EBP,ESI                         ; 0046efa5
    SHR EBP,0x8                         ; 0046efa7
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046efaa
    SBB EAX,-0x1                        ; 0046efad
    ADD ESI,EDX                         ; 0046efb0
    MOV EBP,ESI                         ; 0046efb2
    SHR EBP,0x8                         ; 0046efb4
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046efb7
    SBB EAX,-0x1                        ; 0046efba
    ADD ESI,EDX                         ; 0046efbd
    ADD EBX,0x10                        ; 0046efbf
    ADD EDI,0x4                         ; 0046efc2
    SUB ECX,0x4                         ; 0046efc5
    JL 0x0046f088                       ; 0046efc8
        ;   XREF to: 0046f088 (CONDITIONAL_JUMP)  ; LAB_0046f088
    MOV EBP,ESI                         ; 0046efce
    SHR EBP,0x8                         ; 0046efd0
    CMP EBP,dword ptr [EBX]             ; 0046efd3
    SBB EAX,-0x1                        ; 0046efd5
    ADD ESI,EDX                         ; 0046efd8
    MOV EBP,ESI                         ; 0046efda
    SHR EBP,0x8                         ; 0046efdc
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046efdf
    SBB EAX,-0x1                        ; 0046efe2
    ADD ESI,EDX                         ; 0046efe5
    MOV EBP,ESI                         ; 0046efe7
    SHR EBP,0x8                         ; 0046efe9
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046efec
    SBB EAX,-0x1                        ; 0046efef
    ADD ESI,EDX                         ; 0046eff2
    MOV EBP,ESI                         ; 0046eff4
    SHR EBP,0x8                         ; 0046eff6
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046eff9
    SBB EAX,-0x1                        ; 0046effc
    ADD ESI,EDX                         ; 0046efff
    ADD EBX,0x10                        ; 0046f001
    ADD EDI,0x4                         ; 0046f004
    SUB ECX,0x4                         ; 0046f007
    JL 0x0046f088                       ; 0046f00a
        ;   XREF to: 0046f088 (CONDITIONAL_JUMP)  ; LAB_0046f088
    MOV EBP,ESI                         ; 0046f00c
    SHR EBP,0x8                         ; 0046f00e
    CMP EBP,dword ptr [EBX]             ; 0046f011
    SBB EAX,-0x1                        ; 0046f013
    ADD ESI,EDX                         ; 0046f016
    MOV EBP,ESI                         ; 0046f018
    SHR EBP,0x8                         ; 0046f01a
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046f01d
    SBB EAX,-0x1                        ; 0046f020
    ADD ESI,EDX                         ; 0046f023
    MOV EBP,ESI                         ; 0046f025
    SHR EBP,0x8                         ; 0046f027
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046f02a
    SBB EAX,-0x1                        ; 0046f02d
    ADD ESI,EDX                         ; 0046f030
    MOV EBP,ESI                         ; 0046f032
    SHR EBP,0x8                         ; 0046f034
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046f037
    SBB EAX,-0x1                        ; 0046f03a
    ADD ESI,EDX                         ; 0046f03d
    ADD EBX,0x10                        ; 0046f03f
    ADD EDI,0x4                         ; 0046f042
    SUB ECX,0x4                         ; 0046f045
    JL 0x0046f088                       ; 0046f048
        ;   XREF to: 0046f088 (CONDITIONAL_JUMP)  ; LAB_0046f088
    MOV EBP,ESI                         ; 0046f04a
    SHR EBP,0x8                         ; 0046f04c
    CMP EBP,dword ptr [EBX]             ; 0046f04f
    SBB EAX,-0x1                        ; 0046f051
    ADD ESI,EDX                         ; 0046f054
    MOV EBP,ESI                         ; 0046f056
    SHR EBP,0x8                         ; 0046f058
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046f05b
    SBB EAX,-0x1                        ; 0046f05e
    ADD ESI,EDX                         ; 0046f061
    MOV EBP,ESI                         ; 0046f063
    SHR EBP,0x8                         ; 0046f065
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046f068
    SBB EAX,-0x1                        ; 0046f06b
    ADD ESI,EDX                         ; 0046f06e
    MOV EBP,ESI                         ; 0046f070
    SHR EBP,0x8                         ; 0046f072
    CMP EBP,dword ptr [EBX + 0xc]       ; 0046f075
    SBB EAX,-0x1                        ; 0046f078
    ADD ESI,EDX                         ; 0046f07b
    ADD EBX,0x10                        ; 0046f07d
    ADD EDI,0x4                         ; 0046f080
    JMP 0x0046ef83                      ; 0046f083
        ;   XREF to: 0046ef83 (UNCONDITIONAL_JUMP)  ; LAB_0046ef83
    ADD ECX,0x4                         ; 0046f088
        ;   Label: LAB_0046f088
    JLE 0x0046f0b7                      ; 0046f08b
        ;   XREF to: 0046f0b7 (CONDITIONAL_JUMP)  ; LAB_0046f0b7
    MOV EBP,ESI                         ; 0046f08d
    SHR EBP,0x8                         ; 0046f08f
    CMP EBP,dword ptr [EBX]             ; 0046f092
    SBB EAX,-0x1                        ; 0046f094
    ADD ESI,EDX                         ; 0046f097
    DEC ECX                             ; 0046f099
    JLE 0x0046f0b7                      ; 0046f09a
        ;   XREF to: 0046f0b7 (CONDITIONAL_JUMP)  ; LAB_0046f0b7
    MOV EBP,ESI                         ; 0046f09c
    SHR EBP,0x8                         ; 0046f09e
    CMP EBP,dword ptr [EBX + 0x4]       ; 0046f0a1
    SBB EAX,-0x1                        ; 0046f0a4
    ADD ESI,EDX                         ; 0046f0a7
    DEC ECX                             ; 0046f0a9
    JLE 0x0046f0b7                      ; 0046f0aa
        ;   XREF to: 0046f0b7 (CONDITIONAL_JUMP)  ; LAB_0046f0b7
    MOV EBP,ESI                         ; 0046f0ac
    SHR EBP,0x8                         ; 0046f0ae
    CMP EBP,dword ptr [EBX + 0x8]       ; 0046f0b1
    SBB EAX,-0x1                        ; 0046f0b4
    MOV [0x01ba5c7c],EAX                ; 0046f0b7 | DAT_01ba5c7c
        ;   Label: LAB_0046f0b7
    POP EBP                             ; 0046f0bc
        ;   Label: LAB_0046f0bc
    POP EDI                             ; 0046f0bd
    POP ESI                             ; 0046f0be
    RET                                 ; 0046f0bf

