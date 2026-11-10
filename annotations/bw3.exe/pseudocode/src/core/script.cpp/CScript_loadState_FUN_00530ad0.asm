; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_script_cpp_CScript_loadState_FUN_00530ad0(CScript *this_ptr,_FILE *file_handle)
;
; Parameters:
; CScript *        Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; Local Variables:
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004bdfb0 at 004be69e
;
; Referenced Globals:
;   undefined4 DAT_005cfcf3
;   TerminatedCString s_core_script_cpp_005cfcf7
;   TerminatedCString s_CScript_loadState_file_v_005cfd0a
;   undefined4 DAT_005cfd3f
;   undefined4 DAT_005cfd43
;   undefined4 DAT_005cfd47
;   undefined4 DAT_005cfd4b
;   undefined4 DAT_005cfd4f
;   TerminatedCString s_anon_005cfd53
;   undefined4 DAT_005cfd5a
;   undefined4 DAT_005cfd5d
;   undefined4 DAT_005cfd61
;   undefined4 DAT_005cfd65
;   undefined4 DAT_005cfd69
;   undefined4 DAT_005cfd6d
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   core_script.cpp_CScript_computeChecksum_FUN_00531030
;   core_script.cpp_readActorReference_FUN_00530a10
;   crt_stdio.c_fgets_FUN_005a3f00
;   crt_stdio.c_fscanf_FUN_005a3230
;   shape_edittool.cpp_FUN_0047cee0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00530ad0
        ;   Label: core_script.cpp_CScript_loadState_FUN_00530ad0
    PUSH ESI                            ; 00530ad1
    PUSH EDI                            ; 00530ad2
    PUSH EBP                            ; 00530ad3
    SUB ESP,0x108                       ; 00530ad4
    MOV EBP,dword ptr [ESP + 0x11c]     ; 00530ada
    MOV EDI,dword ptr [ESP + 0x120]     ; 00530ae1
    PUSH EDI                            ; 00530ae8
    PUSH 0xff                           ; 00530ae9
    LEA EAX,[ESP + 0x8]                 ; 00530aee
    PUSH EAX                            ; 00530af2
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530af3
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530af8
    LEA EAX,[ESP + 0x100]               ; 00530afb
    PUSH EAX                            ; 00530b02
    PUSH 0x5cfcf3                       ; 00530b03 | DAT_005cfcf3
    PUSH EDI                            ; 00530b08
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530b09
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530b0e
    CMP dword ptr [ESP + 0x100],0x6     ; 00530b11
    JG 0x00530d75                       ; 00530b19
        ;   XREF to: 00530d75 (CONDITIONAL_JUMP)  ; LAB_00530d75
    PUSH EDI                            ; 00530b1f
        ;   Label: LAB_00530b1f
    PUSH 0xff                           ; 00530b20
    LEA EAX,[ESP + 0x8]                 ; 00530b25
    PUSH EAX                            ; 00530b29
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530b2a
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    MOV EAX,[0x005fe9dc]                ; 00530b2f | g_CGamePtr
    ADD ESP,0xc                         ; 00530b34
    ADD EAX,0x24c                       ; 00530b37
    PUSH EAX                            ; 00530b3c | g_CGameInstance.field540_0x24c
    PUSH 0x5cfd3f                       ; 00530b3d | DAT_005cfd3f
    PUSH EDI                            ; 00530b42
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530b43
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530b48
    CMP dword ptr [ESP + 0x100],0x2     ; 00530b4b
    JL 0x00530b81                       ; 00530b53
        ;   XREF to: 00530b81 (CONDITIONAL_JUMP)  ; LAB_00530b81
    PUSH EDI                            ; 00530b55
    PUSH 0xff                           ; 00530b56
    LEA EAX,[ESP + 0x8]                 ; 00530b5b
    PUSH EAX                            ; 00530b5f
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530b60
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    MOV EAX,[0x005fe9dc]                ; 00530b65 | g_CGamePtr
    ADD ESP,0xc                         ; 00530b6a
    ADD EAX,0x250                       ; 00530b6d
    PUSH EAX                            ; 00530b72
    PUSH 0x5cfd43                       ; 00530b73 | DAT_005cfd43
    PUSH EDI                            ; 00530b78
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530b79
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530b7e
    CMP dword ptr [ESP + 0x100],0x3     ; 00530b81
        ;   Label: LAB_00530b81
    JL 0x00530bb7                       ; 00530b89
        ;   XREF to: 00530bb7 (CONDITIONAL_JUMP)  ; LAB_00530bb7
    PUSH EDI                            ; 00530b8b
    PUSH 0xff                           ; 00530b8c
    LEA EAX,[ESP + 0x8]                 ; 00530b91
    PUSH EAX                            ; 00530b95
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530b96
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    MOV EAX,[0x005fe9dc]                ; 00530b9b | g_CGamePtr
    ADD ESP,0xc                         ; 00530ba0
    ADD EAX,0x254                       ; 00530ba3
    PUSH EAX                            ; 00530ba8
    PUSH 0x5cfd47                       ; 00530ba9 | DAT_005cfd47
    PUSH EDI                            ; 00530bae
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530baf
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530bb4
    PUSH EDI                            ; 00530bb7
        ;   Label: LAB_00530bb7
    PUSH 0xff                           ; 00530bb8
    LEA EAX,[ESP + 0x8]                 ; 00530bbd
    PUSH EAX                            ; 00530bc1
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530bc2
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530bc7
    PUSH 0x1ed7010                      ; 00530bca | DAT_01ed7010
    PUSH 0x5cfd4b                       ; 00530bcf | DAT_005cfd4b
    PUSH EDI                            ; 00530bd4
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530bd5
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530bda
    PUSH EDI                            ; 00530bdd
    PUSH 0xff                           ; 00530bde
    LEA EAX,[ESP + 0x8]                 ; 00530be3
    PUSH EAX                            ; 00530be7
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530be8
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530bed
    LEA EAX,[EBP + 0x44]                ; 00530bf0
    PUSH EAX                            ; 00530bf3
    PUSH 0x5cfd4f                       ; 00530bf4 | DAT_005cfd4f
    PUSH EDI                            ; 00530bf9
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530bfa
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530bff
    PUSH EDI                            ; 00530c02
    PUSH 0xff                           ; 00530c03
    LEA EAX,[ESP + 0x8]                 ; 00530c08
    PUSH EAX                            ; 00530c0c
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530c0d
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530c12
    LEA EBX,[EBP + 0x50]                ; 00530c15
    PUSH EBX                            ; 00530c18
    PUSH 0x5cfd53                       ; 00530c19 | = "\"%[^\"]"
    PUSH EDI                            ; 00530c1e
    MOV byte ptr [EBP + 0x50],0x0       ; 00530c1f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530c23
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530c28
    PUSH EBX                            ; 00530c2b
    PUSH 0x5cfd5a                       ; 00530c2c | DAT_005cfd5a
    PUSH EDI                            ; 00530c31
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530c32
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530c37
    PUSH EDI                            ; 00530c3a
    PUSH 0xff                           ; 00530c3b
    LEA EAX,[ESP + 0x8]                 ; 00530c40
    PUSH EAX                            ; 00530c44
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530c45
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530c4a
    LEA EAX,[EBP + 0x48]                ; 00530c4d
    PUSH EAX                            ; 00530c50
    PUSH 0x5cfd5d                       ; 00530c51 | DAT_005cfd5d
    PUSH EDI                            ; 00530c56
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530c57
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530c5c
    PUSH EDI                            ; 00530c5f
    PUSH 0xff                           ; 00530c60
    LEA EAX,[ESP + 0x8]                 ; 00530c65
    PUSH EAX                            ; 00530c69
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530c6a
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530c6f
    LEA EAX,[EBP + 0x4c]                ; 00530c72
    PUSH EAX                            ; 00530c75
    PUSH 0x5cfd61                       ; 00530c76 | DAT_005cfd61
    PUSH EDI                            ; 00530c7b
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530c7c
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530c81
    PUSH EDI                            ; 00530c84
    PUSH 0xff                           ; 00530c85
    LEA EAX,[ESP + 0x8]                 ; 00530c8a
    PUSH EAX                            ; 00530c8e
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530c8f
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530c94
    LEA EAX,[EBP + 0x4]                 ; 00530c97
    PUSH EAX                            ; 00530c9a
    PUSH EDI                            ; 00530c9b
    CALL core_script.cpp_readActorReference_FUN_00530a10 ; 00530c9c
        ;   XREF to: 00530a10 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_readActorReference_FUN_00530a10()
    ADD ESP,0x8                         ; 00530ca1
    PUSH EDI                            ; 00530ca4
    PUSH 0xff                           ; 00530ca5
    LEA EAX,[ESP + 0x8]                 ; 00530caa
    PUSH EAX                            ; 00530cae
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530caf
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530cb4
    LEA EAX,[EBP + 0xc]                 ; 00530cb7
    PUSH EAX                            ; 00530cba
    PUSH EDI                            ; 00530cbb
    CALL core_script.cpp_readActorReference_FUN_00530a10 ; 00530cbc
        ;   XREF to: 00530a10 (UNCONDITIONAL_CALL)  ; undefined core_script.cpp_readActorReference_FUN_00530a10()
    ADD ESP,0x8                         ; 00530cc1
    CMP dword ptr [ESP + 0x100],0x5     ; 00530cc4
    JL 0x00530cf3                       ; 00530ccc
        ;   XREF to: 00530cf3 (CONDITIONAL_JUMP)  ; LAB_00530cf3
    PUSH EDI                            ; 00530cce
    PUSH 0xff                           ; 00530ccf
    LEA EAX,[ESP + 0x8]                 ; 00530cd4
    PUSH EAX                            ; 00530cd8
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530cd9
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530cde
    LEA EAX,[EBP + 0x14]                ; 00530ce1
    PUSH EAX                            ; 00530ce4
    PUSH 0x5cfd65                       ; 00530ce5 | DAT_005cfd65
    PUSH EDI                            ; 00530cea
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530ceb
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530cf0
    CMP dword ptr [ESP + 0x100],0x4     ; 00530cf3
        ;   Label: LAB_00530cf3
    JL 0x00530d60                       ; 00530cfb
        ;   XREF to: 00530d60 (CONDITIONAL_JUMP)  ; LAB_00530d60
    PUSH EDI                            ; 00530cfd
    PUSH 0xff                           ; 00530cfe
    LEA EAX,[ESP + 0x8]                 ; 00530d03
    PUSH EAX                            ; 00530d07
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530d08
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530d0d
    LEA EAX,[EBP + 0x458]               ; 00530d10
    PUSH EAX                            ; 00530d16
    PUSH 0x5cfd69                       ; 00530d17 | DAT_005cfd69
    PUSH EDI                            ; 00530d1c
    XOR ESI,ESI                         ; 00530d1d
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530d1f
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EBX,dword ptr [EBP + 0x458]     ; 00530d24
    ADD ESP,0xc                         ; 00530d2a
    TEST EBX,EBX                        ; 00530d2d
    JLE 0x00530d60                      ; 00530d2f
        ;   XREF to: 00530d60 (CONDITIONAL_JUMP)  ; LAB_00530d60
    LEA EBX,[EBP + 0x45c]               ; 00530d31
    PUSH EBX                            ; 00530d37
        ;   Label: LAB_00530d37
    PUSH 0x5cfd6d                       ; 00530d38 | DAT_005cfd6d
    PUSH EDI                            ; 00530d3d
    INC ESI                             ; 00530d3e
    ADD EBX,0x4                         ; 00530d3f
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530d42
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    MOV EAX,dword ptr [EBP + 0x458]     ; 00530d47
    ADD ESP,0xc                         ; 00530d4d
    CMP ESI,EAX                         ; 00530d50
    JL 0x00530d37                       ; 00530d52
        ;   XREF to: 00530d37 (CONDITIONAL_JUMP)  ; LAB_00530d37
    LEA EAX,[EAX]                       ; 00530d54
    LEA EDX,[EDX]                       ; 00530d5a
    CMP dword ptr [ESP + 0x100],0x6     ; 00530d60
        ;   Label: LAB_00530d60
    JGE 0x00530d9d                      ; 00530d68
        ;   XREF to: 00530d9d (CONDITIONAL_JUMP)  ; LAB_00530d9d
    ADD ESP,0x108                       ; 00530d6a
        ;   Label: LAB_00530d6a
    POP EBP                             ; 00530d70
    POP EDI                             ; 00530d71
    POP ESI                             ; 00530d72
    POP EBX                             ; 00530d73
    RET                                 ; 00530d74
    MOV ECX,0x5cfcf7                    ; 00530d75 | = "..\\core\\script.cpp"
        ;   Label: LAB_00530d75
    MOV EBX,0x10ec                      ; 00530d7a
    PUSH 0x5cfd0a                       ; 00530d7f | = "CScript::loadState - file version is ..."
    MOV dword ptr [0x01d71de0],ECX      ; 00530d84 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00530d8a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00530d90
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00530d95
    JMP 0x00530b1f                      ; 00530d98
        ;   XREF to: 00530b1f (UNCONDITIONAL_JUMP)  ; LAB_00530b1f
    PUSH EDI                            ; 00530d9d
        ;   Label: LAB_00530d9d
    PUSH 0xff                           ; 00530d9e
    LEA EAX,[ESP + 0x8]                 ; 00530da3
    PUSH EAX                            ; 00530da7
    CALL crt_stdio.c_fgets_FUN_005a3f00 ; 00530da8
        ;   XREF to: 005a3f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005a3f00()
    ADD ESP,0xc                         ; 00530dad
    LEA EAX,[ESP + 0x104]               ; 00530db0
    PUSH EAX                            ; 00530db7
    PUSH 0x5cfd71                       ; 00530db8 | DAT_005cfd71
    PUSH EDI                            ; 00530dbd
    CALL crt_stdio.c_fscanf_FUN_005a3230 ; 00530dbe
        ;   XREF to: 005a3230 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fscanf_FUN_005a3230()
    ADD ESP,0xc                         ; 00530dc3
    PUSH EBP                            ; 00530dc6
    CALL core_script.cpp_CScript_computeChecksum_FUN_00531030 ; 00530dc7
        ;   XREF to: 00531030 (UNCONDITIONAL_CALL)  ; uint core_script.cpp_CScript_computeChecksum_FUN_00531030(CScript * this_ptr)
    ADD ESP,0x4                         ; 00530dcc
    CMP EAX,dword ptr [ESP + 0x104]     ; 00530dcf
    JZ 0x00530d6a                       ; 00530dd6
        ;   XREF to: 00530d6a (CONDITIONAL_JUMP)  ; LAB_00530d6a
    PUSH 0x5cfd75                       ; 00530dd8 | = "The script you were using when this g..."
    MOV EBX,dword ptr [0x005fb140]      ; 00530ddd | g_CEditorToolsPtr
    PUSH EBX                            ; 00530de3
    CALL shape_edittool.cpp_FUN_0047cee0 ; 00530de4
        ;   XREF to: 0047cee0 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_FUN_0047cee0()
    ADD ESP,0x8                         ; 00530de9
    ADD ESP,0x108                       ; 00530dec
    POP EBP                             ; 00530df2
    POP EDI                             ; 00530df3
    POP ESI                             ; 00530df4
    POP EBX                             ; 00530df5
    RET                                 ; 00530df6

