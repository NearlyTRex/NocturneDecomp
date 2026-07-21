; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004b1ff0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_render_FUN_004b2110 at 004b2171
;
; Called Functions:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b1ff0
        ;   Label: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004b1ff0
    PUSH ESI                            ; 004b1ff1
    PUSH EDI                            ; 004b1ff2
    PUSH EBP                            ; 004b1ff3
    SUB ESP,0x10                        ; 004b1ff4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b1ff7
    MOV EBP,dword ptr [EBX + 0x10]      ; 004b1ffb
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004b1ffe
    NEG EBP                             ; 004b2001
    CMP EBP,EDX                         ; 004b2003
    JGE 0x004b2009                      ; 004b2005
        ;   XREF to: 004b2009 (CONDITIONAL_JUMP)  ; LAB_004b2009
    MOV EBP,EDX                         ; 004b2007
    MOV EAX,dword ptr [EBX + 0x10]      ; 004b2009
        ;   Label: LAB_004b2009
    MOV dword ptr [ESP + 0x4],EAX       ; 004b200c
    MOV ECX,dword ptr [ESP + 0x4]       ; 004b2010
    MOV EAX,dword ptr [EBX + 0x40]      ; 004b2014
    CMP EAX,ECX                         ; 004b2017
    JGE 0x004b201f                      ; 004b2019
        ;   XREF to: 004b201f (CONDITIONAL_JUMP)  ; LAB_004b201f
    MOV dword ptr [ESP + 0x4],EAX       ; 004b201b
    MOV EAX,dword ptr [EBX + 0x14]      ; 004b201f
        ;   Label: LAB_004b201f
    MOV ESI,dword ptr [EBX + 0x44]      ; 004b2022
    NEG EAX                             ; 004b2025
    CMP EAX,ESI                         ; 004b2027
    JGE 0x004b202d                      ; 004b2029
        ;   XREF to: 004b202d (CONDITIONAL_JUMP)  ; LAB_004b202d
    MOV EAX,ESI                         ; 004b202b
    MOV ESI,dword ptr [EBX + 0x14]      ; 004b202d
        ;   Label: LAB_004b202d
    MOV dword ptr [ESP],ESI             ; 004b2030
    MOV EDI,dword ptr [ESP]             ; 004b2033
    MOV ESI,dword ptr [EBX + 0x48]      ; 004b2036
    CMP ESI,EDI                         ; 004b2039
    JGE 0x004b2040                      ; 004b203b
        ;   XREF to: 004b2040 (CONDITIONAL_JUMP)  ; LAB_004b2040
    MOV dword ptr [ESP],ESI             ; 004b203d
    MOV EDI,EAX                         ; 004b2040
        ;   Label: LAB_004b2040
    TEST EAX,EAX                        ; 004b2042
    JL 0x004b20bf                       ; 004b2044
        ;   XREF to: 004b20bf (CONDITIONAL_JUMP)  ; LAB_004b20bf
    MOV EDI,dword ptr [ESP]             ; 004b204a
        ;   Label: LAB_004b204a
    DEC EDI                             ; 004b204d
    TEST EDI,EDI                        ; 004b204e
    JL 0x004b208c                       ; 004b2050
        ;   XREF to: 004b208c (CONDITIONAL_JUMP)  ; LAB_004b208c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b2052
    DEC EAX                             ; 004b2056
    MOV dword ptr [ESP + 0xc],EAX       ; 004b2057
    MOV ESI,EBP                         ; 004b205b
        ;   Label: LAB_004b205b
    TEST EBP,EBP                        ; 004b205d
    JL 0x004b20e4                       ; 004b205f
        ;   XREF to: 004b20e4 (CONDITIONAL_JUMP)  ; LAB_004b20e4
        ;   Label: LAB_004b205f
    MOV ESI,dword ptr [ESP + 0xc]       ; 004b2065
    TEST ESI,ESI                        ; 004b2069
    JL 0x004b2087                       ; 004b206b
        ;   XREF to: 004b2087 (CONDITIONAL_JUMP)  ; LAB_004b2087
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b206d
        ;   Label: LAB_004b206d
    ADD EAX,EDI                         ; 004b2070
    PUSH EAX                            ; 004b2072
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004b2073
    ADD EAX,ESI                         ; 004b2076
    PUSH EAX                            ; 004b2078
    PUSH EBX                            ; 004b2079
    DEC ESI                             ; 004b207a
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10 ; 004b207b
        ;   XREF to: 004b1e10 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10()
    ADD ESP,0xc                         ; 004b2080
    TEST ESI,ESI                        ; 004b2083
    JGE 0x004b206d                      ; 004b2085
        ;   XREF to: 004b206d (CONDITIONAL_JUMP)  ; LAB_004b206d
    DEC EDI                             ; 004b2087
        ;   Label: LAB_004b2087
    TEST EDI,EDI                        ; 004b2088
    JGE 0x004b205b                      ; 004b208a
        ;   XREF to: 004b205b (CONDITIONAL_JUMP)  ; LAB_004b205b
    ADD ESP,0x10                        ; 004b208c
        ;   Label: LAB_004b208c
    POP EBP                             ; 004b208f
    POP EDI                             ; 004b2090
    POP ESI                             ; 004b2091
    POP EBX                             ; 004b2092
    RET                                 ; 004b2093
    INC EDI                             ; 004b2094
        ;   Label: LAB_004b2094
    TEST EDI,EDI                        ; 004b2095
    JGE 0x004b204a                      ; 004b2097
        ;   XREF to: 004b204a (CONDITIONAL_JUMP)  ; LAB_004b204a
    MOV ESI,EBP                         ; 004b2099
        ;   Label: LAB_004b2099
    TEST EBP,EBP                        ; 004b209b
    JL 0x004b20ca                       ; 004b209d
        ;   XREF to: 004b20ca (CONDITIONAL_JUMP)  ; LAB_004b20ca
        ;   Label: LAB_004b209d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b209f
    TEST ESI,ESI                        ; 004b20a3
        ;   Label: LAB_004b20a3
    JL 0x004b2094                       ; 004b20a5
        ;   XREF to: 004b2094 (CONDITIONAL_JUMP)  ; LAB_004b2094
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b20a7
    ADD EAX,EDI                         ; 004b20aa
    PUSH EAX                            ; 004b20ac
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004b20ad
    ADD EAX,ESI                         ; 004b20b0
    PUSH EAX                            ; 004b20b2
    PUSH EBX                            ; 004b20b3
    DEC ESI                             ; 004b20b4
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10 ; 004b20b5
        ;   XREF to: 004b1e10 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10()
    ADD ESP,0xc                         ; 004b20ba
    JMP 0x004b20a3                      ; 004b20bd
        ;   XREF to: 004b20a3 (UNCONDITIONAL_JUMP)  ; LAB_004b20a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004b20bf
        ;   Label: LAB_004b20bf
    DEC EAX                             ; 004b20c3
    MOV dword ptr [ESP + 0x8],EAX       ; 004b20c4
    JMP 0x004b2099                      ; 004b20c8
        ;   XREF to: 004b2099 (UNCONDITIONAL_JUMP)  ; LAB_004b2099
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b20ca
        ;   Label: LAB_004b20ca
    ADD EAX,EDI                         ; 004b20cd
    PUSH EAX                            ; 004b20cf
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004b20d0
    ADD EAX,ESI                         ; 004b20d3
    PUSH EAX                            ; 004b20d5
    PUSH EBX                            ; 004b20d6
    INC ESI                             ; 004b20d7
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10 ; 004b20d8
        ;   XREF to: 004b1e10 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10()
    ADD ESP,0xc                         ; 004b20dd
    TEST ESI,ESI                        ; 004b20e0
    JMP 0x004b209d                      ; 004b20e2
        ;   XREF to: 004b209d (UNCONDITIONAL_JUMP)  ; LAB_004b209d
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b20e4
        ;   Label: LAB_004b20e4
    ADD EAX,EDI                         ; 004b20e7
    PUSH EAX                            ; 004b20e9
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004b20ea
    ADD EAX,ESI                         ; 004b20ed
    PUSH EAX                            ; 004b20ef
    PUSH EBX                            ; 004b20f0
    INC ESI                             ; 004b20f1
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10 ; 004b20f2
        ;   XREF to: 004b1e10 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_renderTerrainQuad_FUN_004b1e10()
    ADD ESP,0xc                         ; 004b20f7
    TEST ESI,ESI                        ; 004b20fa
    JMP 0x004b205f                      ; 004b20fc
        ;   XREF to: 004b205f (UNCONDITIONAL_JUMP)  ; LAB_004b205f

