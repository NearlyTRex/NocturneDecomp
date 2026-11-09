; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004d07f0(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_render_FUN_004d0910 at 004d0971
;
; Called Functions:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d07f0
        ;   Label: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004d07f0
    PUSH ESI                            ; 004d07f1
    PUSH EDI                            ; 004d07f2
    PUSH EBP                            ; 004d07f3
    SUB ESP,0x10                        ; 004d07f4
    MOV EBX,dword ptr [ESP + 0x24]      ; 004d07f7
    MOV EBP,dword ptr [EBX + 0x10]      ; 004d07fb
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004d07fe
    NEG EBP                             ; 004d0801
    CMP EBP,EDX                         ; 004d0803
    JGE 0x004d0809                      ; 004d0805
        ;   XREF to: 004d0809 (CONDITIONAL_JUMP)  ; LAB_004d0809
    MOV EBP,EDX                         ; 004d0807
    MOV EAX,dword ptr [EBX + 0x10]      ; 004d0809
        ;   Label: LAB_004d0809
    MOV dword ptr [ESP + 0x4],EAX       ; 004d080c
    MOV ECX,dword ptr [ESP + 0x4]       ; 004d0810
    MOV EAX,dword ptr [EBX + 0x40]      ; 004d0814
    CMP EAX,ECX                         ; 004d0817
    JGE 0x004d081f                      ; 004d0819
        ;   XREF to: 004d081f (CONDITIONAL_JUMP)  ; LAB_004d081f
    MOV dword ptr [ESP + 0x4],EAX       ; 004d081b
    MOV EAX,dword ptr [EBX + 0x14]      ; 004d081f
        ;   Label: LAB_004d081f
    MOV ESI,dword ptr [EBX + 0x44]      ; 004d0822
    NEG EAX                             ; 004d0825
    CMP EAX,ESI                         ; 004d0827
    JGE 0x004d082d                      ; 004d0829
        ;   XREF to: 004d082d (CONDITIONAL_JUMP)  ; LAB_004d082d
    MOV EAX,ESI                         ; 004d082b
    MOV ESI,dword ptr [EBX + 0x14]      ; 004d082d
        ;   Label: LAB_004d082d
    MOV dword ptr [ESP],ESI             ; 004d0830
    MOV EDI,dword ptr [ESP]             ; 004d0833
    MOV ESI,dword ptr [EBX + 0x48]      ; 004d0836
    CMP ESI,EDI                         ; 004d0839
    JGE 0x004d0840                      ; 004d083b
        ;   XREF to: 004d0840 (CONDITIONAL_JUMP)  ; LAB_004d0840
    MOV dword ptr [ESP],ESI             ; 004d083d
    MOV EDI,EAX                         ; 004d0840
        ;   Label: LAB_004d0840
    TEST EAX,EAX                        ; 004d0842
    JL 0x004d08bf                       ; 004d0844
        ;   XREF to: 004d08bf (CONDITIONAL_JUMP)  ; LAB_004d08bf
    MOV EDI,dword ptr [ESP]             ; 004d084a
        ;   Label: LAB_004d084a
    DEC EDI                             ; 004d084d
    TEST EDI,EDI                        ; 004d084e
    JL 0x004d088c                       ; 004d0850
        ;   XREF to: 004d088c (CONDITIONAL_JUMP)  ; LAB_004d088c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d0852
    DEC EAX                             ; 004d0856
    MOV dword ptr [ESP + 0xc],EAX       ; 004d0857
    MOV ESI,EBP                         ; 004d085b
        ;   Label: LAB_004d085b
    TEST EBP,EBP                        ; 004d085d
    JL 0x004d08e4                       ; 004d085f
        ;   XREF to: 004d08e4 (CONDITIONAL_JUMP)  ; LAB_004d08e4
        ;   Label: LAB_004d085f
    MOV ESI,dword ptr [ESP + 0xc]       ; 004d0865
    TEST ESI,ESI                        ; 004d0869
    JL 0x004d0887                       ; 004d086b
        ;   XREF to: 004d0887 (CONDITIONAL_JUMP)  ; LAB_004d0887
    MOV EAX,dword ptr [EBX + 0x30]      ; 004d086d
        ;   Label: LAB_004d086d
    ADD EAX,EDI                         ; 004d0870
    PUSH EAX                            ; 004d0872
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004d0873
    ADD EAX,ESI                         ; 004d0876
    PUSH EAX                            ; 004d0878
    PUSH EBX                            ; 004d0879
    DEC ESI                             ; 004d087a
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610 ; 004d087b
        ;   XREF to: 004d0610 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004d0880
    TEST ESI,ESI                        ; 004d0883
    JGE 0x004d086d                      ; 004d0885
        ;   XREF to: 004d086d (CONDITIONAL_JUMP)  ; LAB_004d086d
    DEC EDI                             ; 004d0887
        ;   Label: LAB_004d0887
    TEST EDI,EDI                        ; 004d0888
    JGE 0x004d085b                      ; 004d088a
        ;   XREF to: 004d085b (CONDITIONAL_JUMP)  ; LAB_004d085b
    ADD ESP,0x10                        ; 004d088c
        ;   Label: LAB_004d088c
    POP EBP                             ; 004d088f
    POP EDI                             ; 004d0890
    POP ESI                             ; 004d0891
    POP EBX                             ; 004d0892
    RET                                 ; 004d0893
    INC EDI                             ; 004d0894
        ;   Label: LAB_004d0894
    TEST EDI,EDI                        ; 004d0895
    JGE 0x004d084a                      ; 004d0897
        ;   XREF to: 004d084a (CONDITIONAL_JUMP)  ; LAB_004d084a
    MOV ESI,EBP                         ; 004d0899
        ;   Label: LAB_004d0899
    TEST EBP,EBP                        ; 004d089b
    JL 0x004d08ca                       ; 004d089d
        ;   XREF to: 004d08ca (CONDITIONAL_JUMP)  ; LAB_004d08ca
        ;   Label: LAB_004d089d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004d089f
    TEST ESI,ESI                        ; 004d08a3
        ;   Label: LAB_004d08a3
    JL 0x004d0894                       ; 004d08a5
        ;   XREF to: 004d0894 (CONDITIONAL_JUMP)  ; LAB_004d0894
    MOV EAX,dword ptr [EBX + 0x30]      ; 004d08a7
    ADD EAX,EDI                         ; 004d08aa
    PUSH EAX                            ; 004d08ac
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004d08ad
    ADD EAX,ESI                         ; 004d08b0
    PUSH EAX                            ; 004d08b2
    PUSH EBX                            ; 004d08b3
    DEC ESI                             ; 004d08b4
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610 ; 004d08b5
        ;   XREF to: 004d0610 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004d08ba
    JMP 0x004d08a3                      ; 004d08bd
        ;   XREF to: 004d08a3 (UNCONDITIONAL_JUMP)  ; LAB_004d08a3
    MOV EAX,dword ptr [ESP + 0x4]       ; 004d08bf
        ;   Label: LAB_004d08bf
    DEC EAX                             ; 004d08c3
    MOV dword ptr [ESP + 0x8],EAX       ; 004d08c4
    JMP 0x004d0899                      ; 004d08c8
        ;   XREF to: 004d0899 (UNCONDITIONAL_JUMP)  ; LAB_004d0899
    MOV EAX,dword ptr [EBX + 0x30]      ; 004d08ca
        ;   Label: LAB_004d08ca
    ADD EAX,EDI                         ; 004d08cd
    PUSH EAX                            ; 004d08cf
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004d08d0
    ADD EAX,ESI                         ; 004d08d3
    PUSH EAX                            ; 004d08d5
    PUSH EBX                            ; 004d08d6
    INC ESI                             ; 004d08d7
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610 ; 004d08d8
        ;   XREF to: 004d0610 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004d08dd
    TEST ESI,ESI                        ; 004d08e0
    JMP 0x004d089d                      ; 004d08e2
        ;   XREF to: 004d089d (UNCONDITIONAL_JUMP)  ; LAB_004d089d
    MOV EAX,dword ptr [EBX + 0x30]      ; 004d08e4
        ;   Label: LAB_004d08e4
    ADD EAX,EDI                         ; 004d08e7
    PUSH EAX                            ; 004d08e9
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004d08ea
    ADD EAX,ESI                         ; 004d08ed
    PUSH EAX                            ; 004d08ef
    PUSH EBX                            ; 004d08f0
    INC ESI                             ; 004d08f1
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610 ; 004d08f2
        ;   XREF to: 004d0610 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004d0610(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004d08f7
    TEST ESI,ESI                        ; 004d08fa
    JMP 0x004d085f                      ; 004d08fc
        ;   XREF to: 004d085f (UNCONDITIONAL_JUMP)  ; LAB_004d085f

