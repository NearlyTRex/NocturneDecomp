; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_isLineWalkable_FUN_00546c40(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,int end_height)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   start_z
; int              Stack[0x10]:4   start_height
; int              Stack[0x14]:4   end_x
; int              Stack[0x18]:4   end_z
; int              Stack[0x1c]:4   end_height
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 at 005476ae
;
; Referenced Globals:
;   int g_PathfindingMaxClimbHeight
;
; Called Functions:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546c40
        ;   Label: core_path.cpp_CPathMap_isLineWalkable_FUN_00546c40
    PUSH ESI                            ; 00546c41
    PUSH EDI                            ; 00546c42
    PUSH EBP                            ; 00546c43
    SUB ESP,0x28                        ; 00546c44
    MOV EBP,dword ptr [ESP + 0x3c]      ; 00546c47
    MOV ESI,dword ptr [ESP + 0x40]      ; 00546c4b
    MOV ECX,dword ptr [ESP + 0x44]      ; 00546c4f
    MOV EBX,dword ptr [ESP + 0x48]      ; 00546c53
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00546c57
    MOV EDI,dword ptr [ESP + 0x50]      ; 00546c5b
    MOV dword ptr [ESP + 0x4],0x1       ; 00546c5f
    CMP ECX,EDI                         ; 00546c67
    JG 0x00546cd6                       ; 00546c69
        ;   XREF to: 00546cd6 (CONDITIONAL_JUMP)  ; LAB_00546cd6
    SUB EDX,ESI                         ; 00546c6b
        ;   Label: LAB_00546c6b
    SUB EDI,ECX                         ; 00546c6d
    MOV dword ptr [ESP + 0x1c],EDX      ; 00546c6f
    MOV dword ptr [ESP + 0x18],EDI      ; 00546c73
    TEST EDX,EDX                        ; 00546c77
    JL 0x00546cf1                       ; 00546c79
        ;   XREF to: 00546cf1 (CONDITIONAL_JUMP)  ; LAB_00546cf1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00546c7b
        ;   Label: LAB_00546c7b
    MOV EDX,dword ptr [ESP + 0x18]      ; 00546c7f
    MOV EDI,ECX                         ; 00546c83
    CMP EAX,EDX                         ; 00546c85
    JLE 0x00546da9                      ; 00546c87
        ;   XREF to: 00546da9 (CONDITIONAL_JUMP)  ; LAB_00546da9
    LEA EAX,[EDX + EDX*0x1]             ; 00546c8d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00546c90
    SUB EAX,EDX                         ; 00546c94
    MOV dword ptr [ESP + 0x24],EAX      ; 00546c96
    XOR EAX,EAX                         ; 00546c9a
    MOV dword ptr [ESP + 0xc],EAX       ; 00546c9c
    TEST EDX,EDX                        ; 00546ca0
    JL 0x00546d97                       ; 00546ca2
        ;   XREF to: 00546d97 (CONDITIONAL_JUMP)  ; LAB_00546d97
    DEC ECX                             ; 00546ca8
    MOV dword ptr [ESP + 0x10],ECX      ; 00546ca9
    PUSH EBX                            ; 00546cad
        ;   Label: LAB_00546cad
    PUSH ESI                            ; 00546cae
    MOV ECX,dword ptr [ESP + 0x18]      ; 00546caf
    PUSH ECX                            ; 00546cb3
    PUSH EBP                            ; 00546cb4
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546cb5
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546cba
    SUB EAX,EBX                         ; 00546cbd
    CDQ                                 ; 00546cbf
    XOR EAX,EDX                         ; 00546cc0
    SUB EAX,EDX                         ; 00546cc2
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546cc4 | g_PathfindingMaxClimbHeight
    JLE 0x00546d07                      ; 00546cca
        ;   XREF to: 00546d07 (CONDITIONAL_JUMP)  ; LAB_00546d07
    XOR EAX,EAX                         ; 00546ccc
        ;   Label: LAB_00546ccc
    ADD ESP,0x28                        ; 00546cce
    POP EBP                             ; 00546cd1
    POP EDI                             ; 00546cd2
    POP ESI                             ; 00546cd3
    POP EBX                             ; 00546cd4
    RET                                 ; 00546cd5
    MOV EAX,ESI                         ; 00546cd6
        ;   Label: LAB_00546cd6
    MOV ESI,EDX                         ; 00546cd8
    MOV EDX,EAX                         ; 00546cda
    MOV EAX,ECX                         ; 00546cdc
    MOV ECX,EDI                         ; 00546cde
    MOV EDI,EAX                         ; 00546ce0
    MOV EAX,EBX                         ; 00546ce2
    MOV EBX,dword ptr [ESP + 0x54]      ; 00546ce4
    MOV dword ptr [ESP + 0x54],EAX      ; 00546ce8
    JMP 0x00546c6b                      ; 00546cec
        ;   XREF to: 00546c6b (UNCONDITIONAL_JUMP)  ; LAB_00546c6b
    MOV EDI,EDX                         ; 00546cf1
        ;   Label: LAB_00546cf1
    MOV EAX,0xffffffff                  ; 00546cf3
    NEG EDI                             ; 00546cf8
    MOV dword ptr [ESP + 0x4],EAX       ; 00546cfa
    MOV dword ptr [ESP + 0x1c],EDI      ; 00546cfe
    JMP 0x00546c7b                      ; 00546d02
        ;   XREF to: 00546c7b (UNCONDITIONAL_JUMP)  ; LAB_00546c7b
    PUSH EBX                            ; 00546d07
        ;   Label: LAB_00546d07
    PUSH ESI                            ; 00546d08
    LEA EAX,[EDI + 0x1]                 ; 00546d09
    PUSH EAX                            ; 00546d0c
    PUSH EBP                            ; 00546d0d
    MOV dword ptr [ESP + 0x18],EAX      ; 00546d0e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546d12
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546d17
    SUB EAX,EBX                         ; 00546d1a
    CDQ                                 ; 00546d1c
    XOR EAX,EDX                         ; 00546d1d
    SUB EAX,EDX                         ; 00546d1f
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546d21 | g_PathfindingMaxClimbHeight
    JG 0x00546ccc                       ; 00546d27
        ;   XREF to: 00546ccc (CONDITIONAL_JUMP)  ; LAB_00546ccc
    PUSH EBX                            ; 00546d29
    PUSH ESI                            ; 00546d2a
    PUSH EDI                            ; 00546d2b
    PUSH EBP                            ; 00546d2c
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546d2d
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546d32
    MOV ECX,EAX                         ; 00546d35
    MOV dword ptr [ESP],EAX             ; 00546d37
    SUB EAX,EBX                         ; 00546d3a
    CDQ                                 ; 00546d3c
    XOR EAX,EDX                         ; 00546d3d
    SUB EAX,EDX                         ; 00546d3f
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546d41 | g_PathfindingMaxClimbHeight
    JG 0x00546ccc                       ; 00546d47
        ;   XREF to: 00546ccc (CONDITIONAL_JUMP)  ; LAB_00546ccc
    MOV EAX,dword ptr [ESP + 0x24]      ; 00546d49
    MOV EBX,ECX                         ; 00546d4d
    TEST EAX,EAX                        ; 00546d4f
    JLE 0x00546d6e                      ; 00546d51
        ;   XREF to: 00546d6e (CONDITIONAL_JUMP)  ; LAB_00546d6e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00546d53
    MOV ECX,dword ptr [ESP + 0x24]      ; 00546d57
    MOV EDX,dword ptr [ESP + 0x10]      ; 00546d5b
    MOV EDI,dword ptr [ESP + 0x8]       ; 00546d5f
    SUB ECX,EAX                         ; 00546d63
    INC EDX                             ; 00546d65
    MOV dword ptr [ESP + 0x24],ECX      ; 00546d66
    MOV dword ptr [ESP + 0x10],EDX      ; 00546d6a
    MOV EAX,dword ptr [ESP + 0x4]       ; 00546d6e
        ;   Label: LAB_00546d6e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00546d72
    ADD ESI,EAX                         ; 00546d76
    MOV EAX,dword ptr [ESP + 0x18]      ; 00546d78
    MOV ECX,dword ptr [ESP + 0xc]       ; 00546d7c
    ADD EDX,EAX                         ; 00546d80
    INC ECX                             ; 00546d82
    MOV dword ptr [ESP + 0x24],EDX      ; 00546d83
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00546d87
    MOV dword ptr [ESP + 0xc],ECX       ; 00546d8b
    CMP ECX,EDX                         ; 00546d8f
    JLE 0x00546cad                      ; 00546d91
        ;   XREF to: 00546cad (CONDITIONAL_JUMP)  ; LAB_00546cad
    MOV EAX,dword ptr [ESP]             ; 00546d97
        ;   Label: LAB_00546d97
    CMP EAX,dword ptr [ESP + 0x54]      ; 00546d9a
    JZ 0x00546e78                       ; 00546d9e
        ;   XREF to: 00546e78 (CONDITIONAL_JUMP)  ; LAB_00546e78
    JMP 0x00546ccc                      ; 00546da4
        ;   XREF to: 00546ccc (UNCONDITIONAL_JUMP)  ; LAB_00546ccc
    ADD EAX,EAX                         ; 00546da9
        ;   Label: LAB_00546da9
    SUB EAX,EDX                         ; 00546dab
    MOV dword ptr [ESP + 0x20],EAX      ; 00546dad
    XOR EAX,EAX                         ; 00546db1
    MOV dword ptr [ESP + 0x14],EAX      ; 00546db3
    TEST EDX,EDX                        ; 00546db7
    JL 0x00546d97                       ; 00546db9
        ;   XREF to: 00546d97 (CONDITIONAL_JUMP)  ; LAB_00546d97
    PUSH EBX                            ; 00546dbb
        ;   Label: LAB_00546dbb
    LEA EAX,[ESI + 0x1]                 ; 00546dbc
    PUSH EAX                            ; 00546dbf
    PUSH EDI                            ; 00546dc0
    PUSH EBP                            ; 00546dc1
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546dc2
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546dc7
    SUB EAX,EBX                         ; 00546dca
    CDQ                                 ; 00546dcc
    XOR EAX,EDX                         ; 00546dcd
    SUB EAX,EDX                         ; 00546dcf
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546dd1 | g_PathfindingMaxClimbHeight
    JLE 0x00546de3                      ; 00546dd7
        ;   XREF to: 00546de3 (CONDITIONAL_JUMP)  ; LAB_00546de3
    XOR EAX,EAX                         ; 00546dd9
    ADD ESP,0x28                        ; 00546ddb
    POP EBP                             ; 00546dde
    POP EDI                             ; 00546ddf
    POP ESI                             ; 00546de0
    POP EBX                             ; 00546de1
    RET                                 ; 00546de2
    PUSH EBX                            ; 00546de3
        ;   Label: LAB_00546de3
    LEA EAX,[ESI + -0x1]                ; 00546de4
    PUSH EAX                            ; 00546de7
    PUSH EDI                            ; 00546de8
    PUSH EBP                            ; 00546de9
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546dea
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546def
    SUB EAX,EBX                         ; 00546df2
    CDQ                                 ; 00546df4
    XOR EAX,EDX                         ; 00546df5
    SUB EAX,EDX                         ; 00546df7
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546df9 | g_PathfindingMaxClimbHeight
    JG 0x00546ccc                       ; 00546dff
        ;   XREF to: 00546ccc (CONDITIONAL_JUMP)  ; LAB_00546ccc
    PUSH EBX                            ; 00546e05
    PUSH ESI                            ; 00546e06
    PUSH EDI                            ; 00546e07
    PUSH EBP                            ; 00546e08
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546e09
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546e0e
    MOV ECX,EAX                         ; 00546e11
    MOV dword ptr [ESP],EAX             ; 00546e13
    SUB EAX,EBX                         ; 00546e16
    CDQ                                 ; 00546e18
    XOR EAX,EDX                         ; 00546e19
    SUB EAX,EDX                         ; 00546e1b
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546e1d | g_PathfindingMaxClimbHeight
    JG 0x00546ccc                       ; 00546e23
        ;   XREF to: 00546ccc (CONDITIONAL_JUMP)  ; LAB_00546ccc
    MOV EAX,dword ptr [ESP + 0x20]      ; 00546e29
    MOV EBX,ECX                         ; 00546e2d
    TEST EAX,EAX                        ; 00546e2f
    JLE 0x00546e47                      ; 00546e31
        ;   XREF to: 00546e47 (CONDITIONAL_JUMP)  ; LAB_00546e47
    MOV EAX,dword ptr [ESP + 0x18]      ; 00546e33
    MOV ECX,dword ptr [ESP + 0x20]      ; 00546e37
    MOV EDX,dword ptr [ESP + 0x4]       ; 00546e3b
    SUB ECX,EAX                         ; 00546e3f
    ADD ESI,EDX                         ; 00546e41
    MOV dword ptr [ESP + 0x20],ECX      ; 00546e43
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00546e47
        ;   Label: LAB_00546e47
    MOV ECX,dword ptr [ESP + 0x20]      ; 00546e4b
    MOV EDX,dword ptr [ESP + 0x18]      ; 00546e4f
    ADD ECX,EAX                         ; 00546e53
    MOV EAX,dword ptr [ESP + 0x14]      ; 00546e55
    INC EDI                             ; 00546e59
    INC EAX                             ; 00546e5a
    MOV dword ptr [ESP + 0x20],ECX      ; 00546e5b
    MOV dword ptr [ESP + 0x14],EAX      ; 00546e5f
    CMP EAX,EDX                         ; 00546e63
    JLE 0x00546dbb                      ; 00546e65
        ;   XREF to: 00546dbb (CONDITIONAL_JUMP)  ; LAB_00546dbb
    MOV EAX,dword ptr [ESP]             ; 00546e6b
    CMP EAX,dword ptr [ESP + 0x54]      ; 00546e6e
    JNZ 0x00546ccc                      ; 00546e72
        ;   XREF to: 00546ccc (CONDITIONAL_JUMP)  ; LAB_00546ccc
    MOV EAX,0x1                         ; 00546e78
        ;   Label: LAB_00546e78
    ADD ESP,0x28                        ; 00546e7d
    POP EBP                             ; 00546e80
    POP EDI                             ; 00546e81
    POP ESI                             ; 00546e82
    POP EBX                             ; 00546e83
    RET                                 ; 00546e84

