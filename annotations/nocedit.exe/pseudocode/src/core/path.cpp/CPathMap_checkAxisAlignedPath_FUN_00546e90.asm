; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   start_z
; int              Stack[0x10]:4   start_height
; int              Stack[0x14]:4   end_x
; int              Stack[0x18]:4   end_z
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; int              Stack[-0x40]:4  local_40
; int              Stack[-0x3c]:4  local_3c
; int              Stack[-0x38]:4  local_38
; int              Stack[-0x34]:4  local_34
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 at 00547858
;
; Referenced Globals:
;   int g_PathfindingMaxClimbHeight
;
; Called Functions:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546e90
        ;   Label: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_00546e90
    PUSH ESI                            ; 00546e91
    PUSH EDI                            ; 00546e92
    PUSH EBP                            ; 00546e93
    SUB ESP,0x5c                        ; 00546e94
    MOV EBX,dword ptr [ESP + 0x70]      ; 00546e97
    MOV EAX,dword ptr [ESP + 0x74]      ; 00546e9b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00546e9f
    SUB EAX,EDX                         ; 00546ea3
    MOV ECX,dword ptr [ESP + 0x80]      ; 00546ea5
    MOV dword ptr [ESP + 0x8],EAX       ; 00546eac
    MOV EAX,dword ptr [ESP + 0x78]      ; 00546eb0
    MOV EBP,EDX                         ; 00546eb4
    SUB EAX,ECX                         ; 00546eb6
    MOV dword ptr [ESP + 0x58],ECX      ; 00546eb8
    MOV dword ptr [ESP + 0x4],EAX       ; 00546ebc
    MOV EAX,dword ptr [ESP + 0x8]       ; 00546ec0
    MOV ESI,dword ptr [ESP + 0x8]       ; 00546ec4
    CDQ                                 ; 00546ec8
    XOR EAX,EDX                         ; 00546ec9
    SUB EAX,EDX                         ; 00546ecb
    MOV dword ptr [ESP + 0x40],EAX      ; 00546ecd
    TEST ESI,ESI                        ; 00546ed1
    JL 0x00546ff0                       ; 00546ed3
        ;   XREF to: 00546ff0 (CONDITIONAL_JUMP)  ; LAB_00546ff0
    MOV dword ptr [ESP + 0x30],0x1      ; 00546ed9
    CMP dword ptr [ESP + 0x4],0x0       ; 00546ee1
        ;   Label: LAB_00546ee1
    JL 0x00546ffd                       ; 00546ee6
        ;   XREF to: 00546ffd (CONDITIONAL_JUMP)  ; LAB_00546ffd
    MOV dword ptr [ESP + 0x2c],0x1      ; 00546eec
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00546ef4
        ;   Label: LAB_00546ef4
    PUSH EDX                            ; 00546ef7
    PUSH EBP                            ; 00546ef8
    MOV ECX,dword ptr [ESP + 0x60]      ; 00546ef9
    PUSH ECX                            ; 00546efd
    PUSH EBX                            ; 00546efe
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546eff
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546f04
    MOV ESI,EAX                         ; 00546f07
    CMP dword ptr [ESP + 0x40],0x0      ; 00546f09
    JLE 0x00546f51                      ; 00546f0e
        ;   XREF to: 00546f51 (CONDITIONAL_JUMP)  ; LAB_00546f51
    MOV EAX,dword ptr [ESP + 0x58]      ; 00546f10
    INC EAX                             ; 00546f14
    MOV dword ptr [ESP + 0x10],EAX      ; 00546f15
    MOV EAX,dword ptr [ESP + 0x58]      ; 00546f19
    DEC EAX                             ; 00546f1d
    MOV dword ptr [ESP + 0x1c],EAX      ; 00546f1e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00546f22
        ;   Label: LAB_00546f22
    PUSH ESI                            ; 00546f26
    ADD EAX,EBP                         ; 00546f27
    PUSH EAX                            ; 00546f29
    MOV EDI,dword ptr [ESP + 0x60]      ; 00546f2a
    PUSH EDI                            ; 00546f2e
    PUSH EBX                            ; 00546f2f
    MOV dword ptr [ESP + 0x58],EAX      ; 00546f30
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546f34
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546f39
    MOV EDI,EAX                         ; 00546f3c
    SUB EAX,ESI                         ; 00546f3e
    CDQ                                 ; 00546f40
    XOR EAX,EDX                         ; 00546f41
    SUB EAX,EDX                         ; 00546f43
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546f45 | g_PathfindingMaxClimbHeight
    JLE 0x0054700a                      ; 00546f4b
        ;   XREF to: 0054700a (CONDITIONAL_JUMP)  ; LAB_0054700a
    CMP dword ptr [ESP + 0x40],0x0      ; 00546f51
        ;   Label: LAB_00546f51
    JZ 0x00547080                       ; 00546f56
        ;   XREF to: 00547080 (CONDITIONAL_JUMP)  ; LAB_00547080
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00546f5c
        ;   Label: LAB_00546f5c
    MOV dword ptr [ESP + 0x54],EAX      ; 00546f60
    MOV EAX,dword ptr [ESP + 0x4]       ; 00546f64
    CDQ                                 ; 00546f68
    XOR EAX,EDX                         ; 00546f69
    SUB EAX,EDX                         ; 00546f6b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00546f6d
    PUSH EDX                            ; 00546f70
    MOV ECX,dword ptr [ESP + 0x80]      ; 00546f71
    PUSH ECX                            ; 00546f78
    MOV EBP,dword ptr [ESP + 0x88]      ; 00546f79
    PUSH EBP                            ; 00546f80
    PUSH EBX                            ; 00546f81
    MOV dword ptr [ESP + 0x10],EAX      ; 00546f82
    MOV dword ptr [ESP + 0x48],EAX      ; 00546f86
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546f8a
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546f8f
    MOV ESI,EAX                         ; 00546f92
    CMP dword ptr [ESP],0x0             ; 00546f94
    JLE 0x00546fdb                      ; 00546f98
        ;   XREF to: 00546fdb (CONDITIONAL_JUMP)  ; LAB_00546fdb
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00546f9a
    INC EAX                             ; 00546f9e
    MOV dword ptr [ESP + 0x14],EAX      ; 00546f9f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00546fa3
    DEC EAX                             ; 00546fa7
    MOV dword ptr [ESP + 0x20],EAX      ; 00546fa8
    PUSH ESI                            ; 00546fac
        ;   Label: LAB_00546fac
    MOV ECX,dword ptr [ESP + 0x58]      ; 00546fad
    MOV EAX,dword ptr [ESP + 0x30]      ; 00546fb1
    PUSH ECX                            ; 00546fb5
    ADD EAX,EBP                         ; 00546fb6
    PUSH EAX                            ; 00546fb8
    PUSH EBX                            ; 00546fb9
    MOV dword ptr [ESP + 0x54],EAX      ; 00546fba
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00546fbe
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00546fc3
    MOV EDI,EAX                         ; 00546fc6
    SUB EAX,ESI                         ; 00546fc8
    CDQ                                 ; 00546fca
    XOR EAX,EDX                         ; 00546fcb
    SUB EAX,EDX                         ; 00546fcd
    CMP EAX,dword ptr [0x030c3ab4]      ; 00546fcf | g_PathfindingMaxClimbHeight
    JLE 0x0054717e                      ; 00546fd5
        ;   XREF to: 0054717e (CONDITIONAL_JUMP)  ; LAB_0054717e
    CMP dword ptr [ESP + 0x38],0x0      ; 00546fdb
        ;   Label: LAB_00546fdb
    JZ 0x005471f4                       ; 00546fe0
        ;   XREF to: 005471f4 (CONDITIONAL_JUMP)  ; LAB_005471f4
    XOR EAX,EAX                         ; 00546fe6
        ;   Label: LAB_00546fe6
    ADD ESP,0x5c                        ; 00546fe8
    POP EBP                             ; 00546feb
    POP EDI                             ; 00546fec
    POP ESI                             ; 00546fed
    POP EBX                             ; 00546fee
    RET                                 ; 00546fef
    MOV dword ptr [ESP + 0x30],0xffffffff ; 00546ff0
        ;   Label: LAB_00546ff0
    JMP 0x00546ee1                      ; 00546ff8
        ;   XREF to: 00546ee1 (UNCONDITIONAL_JUMP)  ; LAB_00546ee1
    MOV dword ptr [ESP + 0x2c],0xffffffff ; 00546ffd
        ;   Label: LAB_00546ffd
    JMP 0x00546ef4                      ; 00547005
        ;   XREF to: 00546ef4 (UNCONDITIONAL_JUMP)  ; LAB_00546ef4
    PUSH ESI                            ; 0054700a
        ;   Label: LAB_0054700a
    PUSH EBP                            ; 0054700b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054700c
    PUSH ECX                            ; 00547010
    PUSH EBX                            ; 00547011
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547012
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547017
    MOV EDI,EAX                         ; 0054701a
    SUB EAX,ESI                         ; 0054701c
    CDQ                                 ; 0054701e
    XOR EAX,EDX                         ; 0054701f
    SUB EAX,EDX                         ; 00547021
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547023 | g_PathfindingMaxClimbHeight
    JG 0x00546f51                       ; 00547029
        ;   XREF to: 00546f51 (CONDITIONAL_JUMP)  ; LAB_00546f51
    PUSH ESI                            ; 0054702f
    PUSH EBP                            ; 00547030
    MOV ECX,dword ptr [ESP + 0x18]      ; 00547031
    PUSH ECX                            ; 00547035
    PUSH EBX                            ; 00547036
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547037
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0054703c
    MOV EDI,EAX                         ; 0054703f
    SUB EAX,ESI                         ; 00547041
    CDQ                                 ; 00547043
    XOR EAX,EDX                         ; 00547044
    SUB EAX,EDX                         ; 00547046
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547048 | g_PathfindingMaxClimbHeight
    JG 0x00546f51                       ; 0054704e
        ;   XREF to: 00546f51 (CONDITIONAL_JUMP)  ; LAB_00546f51
    PUSH ESI                            ; 00547054
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00547055
    PUSH EBP                            ; 00547059
    MOV ECX,dword ptr [ESP + 0x60]      ; 0054705a
    PUSH ECX                            ; 0054705e
    PUSH EBX                            ; 0054705f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547060
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547065
    MOV ESI,EAX                         ; 00547068
    MOV EAX,dword ptr [ESP + 0x40]      ; 0054706a
    DEC EAX                             ; 0054706e
    MOV dword ptr [ESP + 0x40],EAX      ; 0054706f
    TEST EAX,EAX                        ; 00547073
    JG 0x00546f22                       ; 00547075
        ;   XREF to: 00546f22 (CONDITIONAL_JUMP)  ; LAB_00546f22
    JMP 0x00546f51                      ; 0054707b
        ;   XREF to: 00546f51 (UNCONDITIONAL_JUMP)  ; LAB_00546f51
    MOV EAX,dword ptr [ESP + 0x4]       ; 00547080
        ;   Label: LAB_00547080
    CDQ                                 ; 00547084
    XOR EAX,EDX                         ; 00547085
    SUB EAX,EDX                         ; 00547087
    MOV dword ptr [ESP + 0x3c],EAX      ; 00547089
    TEST EAX,EAX                        ; 0054708d
    JLE 0x005470ca                      ; 0054708f
        ;   XREF to: 005470ca (CONDITIONAL_JUMP)  ; LAB_005470ca
    LEA EAX,[EBP + 0x1]                 ; 00547091
    MOV dword ptr [ESP + 0x18],EAX      ; 00547094
    LEA EAX,[EBP + -0x1]                ; 00547098
    MOV dword ptr [ESP + 0xc],EAX       ; 0054709b
    PUSH ESI                            ; 0054709f
        ;   Label: LAB_0054709f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005470a0
    MOV ECX,dword ptr [ESP + 0x30]      ; 005470a4
    PUSH EBP                            ; 005470a8
    ADD EAX,ECX                         ; 005470a9
    PUSH EAX                            ; 005470ab
    PUSH EBX                            ; 005470ac
    MOV dword ptr [ESP + 0x5c],EAX      ; 005470ad
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005470b1
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005470b6
    MOV EDI,EAX                         ; 005470b9
    SUB EAX,ESI                         ; 005470bb
    CDQ                                 ; 005470bd
    XOR EAX,EDX                         ; 005470be
    SUB EAX,EDX                         ; 005470c0
    CMP EAX,dword ptr [0x030c3ab4]      ; 005470c2 | g_PathfindingMaxClimbHeight
    JLE 0x00547104                      ; 005470c8
        ;   XREF to: 00547104 (CONDITIONAL_JUMP)  ; LAB_00547104
    CMP dword ptr [ESP + 0x3c],0x0      ; 005470ca
        ;   Label: LAB_005470ca
    JNZ 0x00546f5c                      ; 005470cf
        ;   XREF to: 00546f5c (CONDITIONAL_JUMP)  ; LAB_00546f5c
    MOV ESI,dword ptr [EBX + 0x10]      ; 005470d5
    PUSH ESI                            ; 005470d8
    MOV EBP,dword ptr [ESP + 0x78]      ; 005470d9
    PUSH EBP                            ; 005470dd
    MOV EAX,dword ptr [ESP + 0x80]      ; 005470de
    PUSH EAX                            ; 005470e5
    PUSH EBX                            ; 005470e6
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005470e7
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005470ec
    CMP EDI,EAX                         ; 005470ef
    JNZ 0x00546f5c                      ; 005470f1
        ;   XREF to: 00546f5c (CONDITIONAL_JUMP)  ; LAB_00546f5c
    MOV EAX,0x1                         ; 005470f7
    ADD ESP,0x5c                        ; 005470fc
    POP EBP                             ; 005470ff
    POP EDI                             ; 00547100
    POP ESI                             ; 00547101
    POP EBX                             ; 00547102
    RET                                 ; 00547103
    PUSH ESI                            ; 00547104
        ;   Label: LAB_00547104
    MOV ECX,dword ptr [ESP + 0x10]      ; 00547105
    PUSH ECX                            ; 00547109
    MOV EDI,dword ptr [ESP + 0x60]      ; 0054710a
    PUSH EDI                            ; 0054710e
    PUSH EBX                            ; 0054710f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547110
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547115
    MOV EDI,EAX                         ; 00547118
    SUB EAX,ESI                         ; 0054711a
    CDQ                                 ; 0054711c
    XOR EAX,EDX                         ; 0054711d
    SUB EAX,EDX                         ; 0054711f
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547121 | g_PathfindingMaxClimbHeight
    JG 0x005470ca                       ; 00547127
        ;   XREF to: 005470ca (CONDITIONAL_JUMP)  ; LAB_005470ca
    PUSH ESI                            ; 00547129
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0054712a
    PUSH ECX                            ; 0054712e
    MOV EDI,dword ptr [ESP + 0x60]      ; 0054712f
    PUSH EDI                            ; 00547133
    PUSH EBX                            ; 00547134
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547135
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0054713a
    MOV EDI,EAX                         ; 0054713d
    SUB EAX,ESI                         ; 0054713f
    CDQ                                 ; 00547141
    XOR EAX,EDX                         ; 00547142
    SUB EAX,EDX                         ; 00547144
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547146 | g_PathfindingMaxClimbHeight
    JG 0x005470ca                       ; 0054714c
        ;   XREF to: 005470ca (CONDITIONAL_JUMP)  ; LAB_005470ca
    PUSH ESI                            ; 00547152
    PUSH EBP                            ; 00547153
    MOV EAX,dword ptr [ESP + 0x54]      ; 00547154
    PUSH EAX                            ; 00547158
    PUSH EBX                            ; 00547159
    MOV dword ptr [ESP + 0x68],EAX      ; 0054715a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 0054715e
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547163
    MOV ESI,EAX                         ; 00547166
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00547168
    DEC EAX                             ; 0054716c
    MOV dword ptr [ESP + 0x3c],EAX      ; 0054716d
    TEST EAX,EAX                        ; 00547171
    JG 0x0054709f                       ; 00547173
        ;   XREF to: 0054709f (CONDITIONAL_JUMP)  ; LAB_0054709f
    JMP 0x005470ca                      ; 00547179
        ;   XREF to: 005470ca (UNCONDITIONAL_JUMP)  ; LAB_005470ca
    PUSH ESI                            ; 0054717e
        ;   Label: LAB_0054717e
    MOV ECX,dword ptr [ESP + 0x24]      ; 0054717f
    PUSH ECX                            ; 00547183
    PUSH EBP                            ; 00547184
    PUSH EBX                            ; 00547185
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547186
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0054718b
    MOV EDI,EAX                         ; 0054718e
    SUB EAX,ESI                         ; 00547190
    CDQ                                 ; 00547192
    XOR EAX,EDX                         ; 00547193
    SUB EAX,EDX                         ; 00547195
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547197 | g_PathfindingMaxClimbHeight
    JG 0x00546fdb                       ; 0054719d
        ;   XREF to: 00546fdb (CONDITIONAL_JUMP)  ; LAB_00546fdb
    PUSH ESI                            ; 005471a3
    MOV ECX,dword ptr [ESP + 0x18]      ; 005471a4
    PUSH ECX                            ; 005471a8
    PUSH EBP                            ; 005471a9
    PUSH EBX                            ; 005471aa
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005471ab
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005471b0
    MOV EDI,EAX                         ; 005471b3
    SUB EAX,ESI                         ; 005471b5
    CDQ                                 ; 005471b7
    XOR EAX,EDX                         ; 005471b8
    SUB EAX,EDX                         ; 005471ba
    CMP EAX,dword ptr [0x030c3ab4]      ; 005471bc | g_PathfindingMaxClimbHeight
    JG 0x00546fdb                       ; 005471c2
        ;   XREF to: 00546fdb (CONDITIONAL_JUMP)  ; LAB_00546fdb
    PUSH ESI                            ; 005471c8
    MOV EDX,dword ptr [ESP + 0x58]      ; 005471c9
    PUSH EDX                            ; 005471cd
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005471ce
    PUSH EBP                            ; 005471d2
    PUSH EBX                            ; 005471d3
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005471d4
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005471d9
    MOV ESI,EAX                         ; 005471dc
    MOV EAX,dword ptr [ESP + 0x38]      ; 005471de
    DEC EAX                             ; 005471e2
    MOV dword ptr [ESP + 0x38],EAX      ; 005471e3
    TEST EAX,EAX                        ; 005471e7
    JG 0x00546fac                       ; 005471e9
        ;   XREF to: 00546fac (CONDITIONAL_JUMP)  ; LAB_00546fac
    JMP 0x00546fdb                      ; 005471ef
        ;   XREF to: 00546fdb (UNCONDITIONAL_JUMP)  ; LAB_00546fdb
    MOV EAX,dword ptr [ESP + 0x8]       ; 005471f4
        ;   Label: LAB_005471f4
    CDQ                                 ; 005471f8
    XOR EAX,EDX                         ; 005471f9
    SUB EAX,EDX                         ; 005471fb
    MOV dword ptr [ESP + 0x34],EAX      ; 005471fd
    TEST EAX,EAX                        ; 00547201
    JLE 0x0054723e                      ; 00547203
        ;   XREF to: 0054723e (CONDITIONAL_JUMP)  ; LAB_0054723e
    LEA EAX,[EBP + 0x1]                 ; 00547205
    MOV dword ptr [ESP + 0x24],EAX      ; 00547208
    LEA EAX,[EBP + -0x1]                ; 0054720c
    MOV dword ptr [ESP + 0x28],EAX      ; 0054720f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00547213
        ;   Label: LAB_00547213
    MOV ECX,dword ptr [ESP + 0x30]      ; 00547217
    PUSH ESI                            ; 0054721b
    ADD EAX,ECX                         ; 0054721c
    PUSH EAX                            ; 0054721e
    PUSH EBP                            ; 0054721f
    PUSH EBX                            ; 00547220
    MOV dword ptr [ESP + 0x60],EAX      ; 00547221
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547225
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0054722a
    MOV EDI,EAX                         ; 0054722d
    SUB EAX,ESI                         ; 0054722f
    CDQ                                 ; 00547231
    XOR EAX,EDX                         ; 00547232
    SUB EAX,EDX                         ; 00547234
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547236 | g_PathfindingMaxClimbHeight
    JLE 0x00547278                      ; 0054723c
        ;   XREF to: 00547278 (CONDITIONAL_JUMP)  ; LAB_00547278
    CMP dword ptr [ESP + 0x34],0x0      ; 0054723e
        ;   Label: LAB_0054723e
    JNZ 0x00546fe6                      ; 00547243
        ;   XREF to: 00546fe6 (CONDITIONAL_JUMP)  ; LAB_00546fe6
    MOV ESI,dword ptr [EBX + 0x10]      ; 00547249
    PUSH ESI                            ; 0054724c
    MOV EBP,dword ptr [ESP + 0x78]      ; 0054724d
    PUSH EBP                            ; 00547251
    MOV EAX,dword ptr [ESP + 0x80]      ; 00547252
    PUSH EAX                            ; 00547259
    PUSH EBX                            ; 0054725a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 0054725b
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547260
    CMP EDI,EAX                         ; 00547263
    JNZ 0x00546fe6                      ; 00547265
        ;   XREF to: 00546fe6 (CONDITIONAL_JUMP)  ; LAB_00546fe6
    MOV EAX,0x2                         ; 0054726b
    ADD ESP,0x5c                        ; 00547270
    POP EBP                             ; 00547273
    POP EDI                             ; 00547274
    POP ESI                             ; 00547275
    POP EBX                             ; 00547276
    RET                                 ; 00547277
    PUSH ESI                            ; 00547278
        ;   Label: LAB_00547278
    MOV ECX,dword ptr [ESP + 0x58]      ; 00547279
    PUSH ECX                            ; 0054727d
    MOV EDI,dword ptr [ESP + 0x30]      ; 0054727e
    PUSH EDI                            ; 00547282
    PUSH EBX                            ; 00547283
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 00547284
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00547289
    MOV EDI,EAX                         ; 0054728c
    SUB EAX,ESI                         ; 0054728e
    CDQ                                 ; 00547290
    XOR EAX,EDX                         ; 00547291
    SUB EAX,EDX                         ; 00547293
    CMP EAX,dword ptr [0x030c3ab4]      ; 00547295 | g_PathfindingMaxClimbHeight
    JG 0x0054723e                       ; 0054729b
        ;   XREF to: 0054723e (CONDITIONAL_JUMP)  ; LAB_0054723e
    PUSH ESI                            ; 0054729d
    MOV ECX,dword ptr [ESP + 0x58]      ; 0054729e
    PUSH ECX                            ; 005472a2
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005472a3
    PUSH EDI                            ; 005472a7
    PUSH EBX                            ; 005472a8
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005472a9
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005472ae
    MOV EDI,EAX                         ; 005472b1
    SUB EAX,ESI                         ; 005472b3
    CDQ                                 ; 005472b5
    XOR EAX,EDX                         ; 005472b6
    SUB EAX,EDX                         ; 005472b8
    CMP EAX,dword ptr [0x030c3ab4]      ; 005472ba | g_PathfindingMaxClimbHeight
    JG 0x0054723e                       ; 005472c0
        ;   XREF to: 0054723e (CONDITIONAL_JUMP)  ; LAB_0054723e
    PUSH ESI                            ; 005472c6
    MOV EAX,dword ptr [ESP + 0x54]      ; 005472c7
    PUSH EAX                            ; 005472cb
    PUSH EBP                            ; 005472cc
    PUSH EBX                            ; 005472cd
    MOV dword ptr [ESP + 0x64],EAX      ; 005472ce
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0 ; 005472d2
        ;   XREF to: 00546ba0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00546ba0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005472d7
    MOV ESI,EAX                         ; 005472da
    MOV EAX,dword ptr [ESP + 0x34]      ; 005472dc
    DEC EAX                             ; 005472e0
    MOV dword ptr [ESP + 0x34],EAX      ; 005472e1
    TEST EAX,EAX                        ; 005472e5
    JG 0x00547213                       ; 005472e7
        ;   XREF to: 00547213 (CONDITIONAL_JUMP)  ; LAB_00547213
    JMP 0x0054723e                      ; 005472ed
        ;   XREF to: 0054723e (UNCONDITIONAL_JUMP)  ; LAB_0054723e

