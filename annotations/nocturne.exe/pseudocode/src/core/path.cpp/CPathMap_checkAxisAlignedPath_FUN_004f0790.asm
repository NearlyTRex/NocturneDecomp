; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   start_z
; int              Stack[0x10]:4   end_x
; int              Stack[0x14]:4   end_z
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
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
;   core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20 at 004f1158
;
; Referenced Globals:
;   undefined4 DAT_01e312f4
;
; Called Functions:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0790
        ;   Label: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_004f0790
    PUSH ESI                            ; 004f0791
    PUSH EDI                            ; 004f0792
    PUSH EBP                            ; 004f0793
    SUB ESP,0x5c                        ; 004f0794
    MOV EBX,dword ptr [ESP + 0x70]      ; 004f0797
    MOV EAX,dword ptr [ESP + 0x74]      ; 004f079b
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004f079f
    SUB EAX,EDX                         ; 004f07a3
    MOV ECX,dword ptr [ESP + 0x80]      ; 004f07a5
    MOV dword ptr [ESP + 0x8],EAX       ; 004f07ac
    MOV EAX,dword ptr [ESP + 0x78]      ; 004f07b0
    MOV EBP,EDX                         ; 004f07b4
    SUB EAX,ECX                         ; 004f07b6
    MOV dword ptr [ESP + 0x58],ECX      ; 004f07b8
    MOV dword ptr [ESP + 0x4],EAX       ; 004f07bc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f07c0
    MOV ESI,dword ptr [ESP + 0x8]       ; 004f07c4
    CDQ                                 ; 004f07c8
    XOR EAX,EDX                         ; 004f07c9
    SUB EAX,EDX                         ; 004f07cb
    MOV dword ptr [ESP + 0x40],EAX      ; 004f07cd
    TEST ESI,ESI                        ; 004f07d1
    JL 0x004f08f0                       ; 004f07d3
        ;   XREF to: 004f08f0 (CONDITIONAL_JUMP)  ; LAB_004f08f0
    MOV dword ptr [ESP + 0x30],0x1      ; 004f07d9
    CMP dword ptr [ESP + 0x4],0x0       ; 004f07e1
        ;   Label: LAB_004f07e1
    JL 0x004f08fd                       ; 004f07e6
        ;   XREF to: 004f08fd (CONDITIONAL_JUMP)  ; LAB_004f08fd
    MOV dword ptr [ESP + 0x2c],0x1      ; 004f07ec
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004f07f4
        ;   Label: LAB_004f07f4
    PUSH EDX                            ; 004f07f7
    PUSH EBP                            ; 004f07f8
    MOV ECX,dword ptr [ESP + 0x60]      ; 004f07f9
    PUSH ECX                            ; 004f07fd
    PUSH EBX                            ; 004f07fe
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f07ff
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0804
    MOV ESI,EAX                         ; 004f0807
    CMP dword ptr [ESP + 0x40],0x0      ; 004f0809
    JLE 0x004f0851                      ; 004f080e
        ;   XREF to: 004f0851 (CONDITIONAL_JUMP)  ; LAB_004f0851
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f0810
    INC EAX                             ; 004f0814
    MOV dword ptr [ESP + 0x10],EAX      ; 004f0815
    MOV EAX,dword ptr [ESP + 0x58]      ; 004f0819
    DEC EAX                             ; 004f081d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f081e
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f0822
        ;   Label: LAB_004f0822
    PUSH ESI                            ; 004f0826
    ADD EAX,EBP                         ; 004f0827
    PUSH EAX                            ; 004f0829
    MOV EDI,dword ptr [ESP + 0x60]      ; 004f082a
    PUSH EDI                            ; 004f082e
    PUSH EBX                            ; 004f082f
    MOV dword ptr [ESP + 0x58],EAX      ; 004f0830
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0834
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0839
    MOV EDI,EAX                         ; 004f083c
    SUB EAX,ESI                         ; 004f083e
    CDQ                                 ; 004f0840
    XOR EAX,EDX                         ; 004f0841
    SUB EAX,EDX                         ; 004f0843
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0845 | DAT_01e312f4
    JLE 0x004f090a                      ; 004f084b
        ;   XREF to: 004f090a (CONDITIONAL_JUMP)  ; LAB_004f090a
    CMP dword ptr [ESP + 0x40],0x0      ; 004f0851
        ;   Label: LAB_004f0851
    JZ 0x004f0980                       ; 004f0856
        ;   XREF to: 004f0980 (CONDITIONAL_JUMP)  ; LAB_004f0980
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f085c
        ;   Label: LAB_004f085c
    MOV dword ptr [ESP + 0x54],EAX      ; 004f0860
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0864
    CDQ                                 ; 004f0868
    XOR EAX,EDX                         ; 004f0869
    SUB EAX,EDX                         ; 004f086b
    MOV EDX,dword ptr [EBX + 0x1c]      ; 004f086d
    PUSH EDX                            ; 004f0870
    MOV ECX,dword ptr [ESP + 0x80]      ; 004f0871
    PUSH ECX                            ; 004f0878
    MOV EBP,dword ptr [ESP + 0x88]      ; 004f0879
    PUSH EBP                            ; 004f0880
    PUSH EBX                            ; 004f0881
    MOV dword ptr [ESP + 0x10],EAX      ; 004f0882
    MOV dword ptr [ESP + 0x48],EAX      ; 004f0886
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f088a
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f088f
    MOV ESI,EAX                         ; 004f0892
    CMP dword ptr [ESP],0x0             ; 004f0894
    JLE 0x004f08db                      ; 004f0898
        ;   XREF to: 004f08db (CONDITIONAL_JUMP)  ; LAB_004f08db
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f089a
    INC EAX                             ; 004f089e
    MOV dword ptr [ESP + 0x14],EAX      ; 004f089f
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004f08a3
    DEC EAX                             ; 004f08a7
    MOV dword ptr [ESP + 0x20],EAX      ; 004f08a8
    PUSH ESI                            ; 004f08ac
        ;   Label: LAB_004f08ac
    MOV ECX,dword ptr [ESP + 0x58]      ; 004f08ad
    MOV EAX,dword ptr [ESP + 0x30]      ; 004f08b1
    PUSH ECX                            ; 004f08b5
    ADD EAX,EBP                         ; 004f08b6
    PUSH EAX                            ; 004f08b8
    PUSH EBX                            ; 004f08b9
    MOV dword ptr [ESP + 0x54],EAX      ; 004f08ba
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f08be
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f08c3
    MOV EDI,EAX                         ; 004f08c6
    SUB EAX,ESI                         ; 004f08c8
    CDQ                                 ; 004f08ca
    XOR EAX,EDX                         ; 004f08cb
    SUB EAX,EDX                         ; 004f08cd
    CMP EAX,dword ptr [0x01e312f4]      ; 004f08cf | DAT_01e312f4
    JLE 0x004f0a7e                      ; 004f08d5
        ;   XREF to: 004f0a7e (CONDITIONAL_JUMP)  ; LAB_004f0a7e
    CMP dword ptr [ESP + 0x38],0x0      ; 004f08db
        ;   Label: LAB_004f08db
    JZ 0x004f0af4                       ; 004f08e0
        ;   XREF to: 004f0af4 (CONDITIONAL_JUMP)  ; LAB_004f0af4
    XOR EAX,EAX                         ; 004f08e6
        ;   Label: LAB_004f08e6
    ADD ESP,0x5c                        ; 004f08e8
    POP EBP                             ; 004f08eb
    POP EDI                             ; 004f08ec
    POP ESI                             ; 004f08ed
    POP EBX                             ; 004f08ee
    RET                                 ; 004f08ef
    MOV dword ptr [ESP + 0x30],0xffffffff ; 004f08f0
        ;   Label: LAB_004f08f0
    JMP 0x004f07e1                      ; 004f08f8
        ;   XREF to: 004f07e1 (UNCONDITIONAL_JUMP)  ; LAB_004f07e1
    MOV dword ptr [ESP + 0x2c],0xffffffff ; 004f08fd
        ;   Label: LAB_004f08fd
    JMP 0x004f07f4                      ; 004f0905
        ;   XREF to: 004f07f4 (UNCONDITIONAL_JUMP)  ; LAB_004f07f4
    PUSH ESI                            ; 004f090a
        ;   Label: LAB_004f090a
    PUSH EBP                            ; 004f090b
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f090c
    PUSH ECX                            ; 004f0910
    PUSH EBX                            ; 004f0911
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0912
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0917
    MOV EDI,EAX                         ; 004f091a
    SUB EAX,ESI                         ; 004f091c
    CDQ                                 ; 004f091e
    XOR EAX,EDX                         ; 004f091f
    SUB EAX,EDX                         ; 004f0921
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0923 | DAT_01e312f4
    JG 0x004f0851                       ; 004f0929
        ;   XREF to: 004f0851 (CONDITIONAL_JUMP)  ; LAB_004f0851
    PUSH ESI                            ; 004f092f
    PUSH EBP                            ; 004f0930
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f0931
    PUSH ECX                            ; 004f0935
    PUSH EBX                            ; 004f0936
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0937
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f093c
    MOV EDI,EAX                         ; 004f093f
    SUB EAX,ESI                         ; 004f0941
    CDQ                                 ; 004f0943
    XOR EAX,EDX                         ; 004f0944
    SUB EAX,EDX                         ; 004f0946
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0948 | DAT_01e312f4
    JG 0x004f0851                       ; 004f094e
        ;   XREF to: 004f0851 (CONDITIONAL_JUMP)  ; LAB_004f0851
    PUSH ESI                            ; 004f0954
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004f0955
    PUSH EBP                            ; 004f0959
    MOV ECX,dword ptr [ESP + 0x60]      ; 004f095a
    PUSH ECX                            ; 004f095e
    PUSH EBX                            ; 004f095f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0960
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0965
    MOV ESI,EAX                         ; 004f0968
    MOV EAX,dword ptr [ESP + 0x40]      ; 004f096a
    DEC EAX                             ; 004f096e
    MOV dword ptr [ESP + 0x40],EAX      ; 004f096f
    TEST EAX,EAX                        ; 004f0973
    JG 0x004f0822                       ; 004f0975
        ;   XREF to: 004f0822 (CONDITIONAL_JUMP)  ; LAB_004f0822
    JMP 0x004f0851                      ; 004f097b
        ;   XREF to: 004f0851 (UNCONDITIONAL_JUMP)  ; LAB_004f0851
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f0980
        ;   Label: LAB_004f0980
    CDQ                                 ; 004f0984
    XOR EAX,EDX                         ; 004f0985
    SUB EAX,EDX                         ; 004f0987
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f0989
    TEST EAX,EAX                        ; 004f098d
    JLE 0x004f09ca                      ; 004f098f
        ;   XREF to: 004f09ca (CONDITIONAL_JUMP)  ; LAB_004f09ca
    LEA EAX,[EBP + 0x1]                 ; 004f0991
    MOV dword ptr [ESP + 0x18],EAX      ; 004f0994
    LEA EAX,[EBP + -0x1]                ; 004f0998
    MOV dword ptr [ESP + 0xc],EAX       ; 004f099b
    PUSH ESI                            ; 004f099f
        ;   Label: LAB_004f099f
    MOV EAX,dword ptr [ESP + 0x5c]      ; 004f09a0
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f09a4
    PUSH EBP                            ; 004f09a8
    ADD EAX,ECX                         ; 004f09a9
    PUSH EAX                            ; 004f09ab
    PUSH EBX                            ; 004f09ac
    MOV dword ptr [ESP + 0x5c],EAX      ; 004f09ad
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f09b1
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f09b6
    MOV EDI,EAX                         ; 004f09b9
    SUB EAX,ESI                         ; 004f09bb
    CDQ                                 ; 004f09bd
    XOR EAX,EDX                         ; 004f09be
    SUB EAX,EDX                         ; 004f09c0
    CMP EAX,dword ptr [0x01e312f4]      ; 004f09c2 | DAT_01e312f4
    JLE 0x004f0a04                      ; 004f09c8
        ;   XREF to: 004f0a04 (CONDITIONAL_JUMP)  ; LAB_004f0a04
    CMP dword ptr [ESP + 0x3c],0x0      ; 004f09ca
        ;   Label: LAB_004f09ca
    JNZ 0x004f085c                      ; 004f09cf
        ;   XREF to: 004f085c (CONDITIONAL_JUMP)  ; LAB_004f085c
    MOV ESI,dword ptr [EBX + 0x10]      ; 004f09d5
    PUSH ESI                            ; 004f09d8
    MOV EBP,dword ptr [ESP + 0x78]      ; 004f09d9
    PUSH EBP                            ; 004f09dd
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f09de
    PUSH EAX                            ; 004f09e5
    PUSH EBX                            ; 004f09e6
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f09e7
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f09ec
    CMP EDI,EAX                         ; 004f09ef
    JNZ 0x004f085c                      ; 004f09f1
        ;   XREF to: 004f085c (CONDITIONAL_JUMP)  ; LAB_004f085c
    MOV EAX,0x1                         ; 004f09f7
    ADD ESP,0x5c                        ; 004f09fc
    POP EBP                             ; 004f09ff
    POP EDI                             ; 004f0a00
    POP ESI                             ; 004f0a01
    POP EBX                             ; 004f0a02
    RET                                 ; 004f0a03
    PUSH ESI                            ; 004f0a04
        ;   Label: LAB_004f0a04
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f0a05
    PUSH ECX                            ; 004f0a09
    MOV EDI,dword ptr [ESP + 0x60]      ; 004f0a0a
    PUSH EDI                            ; 004f0a0e
    PUSH EBX                            ; 004f0a0f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0a10
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0a15
    MOV EDI,EAX                         ; 004f0a18
    SUB EAX,ESI                         ; 004f0a1a
    CDQ                                 ; 004f0a1c
    XOR EAX,EDX                         ; 004f0a1d
    SUB EAX,EDX                         ; 004f0a1f
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0a21 | DAT_01e312f4
    JG 0x004f09ca                       ; 004f0a27
        ;   XREF to: 004f09ca (CONDITIONAL_JUMP)  ; LAB_004f09ca
    PUSH ESI                            ; 004f0a29
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f0a2a
    PUSH ECX                            ; 004f0a2e
    MOV EDI,dword ptr [ESP + 0x60]      ; 004f0a2f
    PUSH EDI                            ; 004f0a33
    PUSH EBX                            ; 004f0a34
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0a35
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0a3a
    MOV EDI,EAX                         ; 004f0a3d
    SUB EAX,ESI                         ; 004f0a3f
    CDQ                                 ; 004f0a41
    XOR EAX,EDX                         ; 004f0a42
    SUB EAX,EDX                         ; 004f0a44
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0a46 | DAT_01e312f4
    JG 0x004f09ca                       ; 004f0a4c
        ;   XREF to: 004f09ca (CONDITIONAL_JUMP)  ; LAB_004f09ca
    PUSH ESI                            ; 004f0a52
    PUSH EBP                            ; 004f0a53
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f0a54
    PUSH EAX                            ; 004f0a58
    PUSH EBX                            ; 004f0a59
    MOV dword ptr [ESP + 0x68],EAX      ; 004f0a5a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0a5e
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0a63
    MOV ESI,EAX                         ; 004f0a66
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f0a68
    DEC EAX                             ; 004f0a6c
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f0a6d
    TEST EAX,EAX                        ; 004f0a71
    JG 0x004f099f                       ; 004f0a73
        ;   XREF to: 004f099f (CONDITIONAL_JUMP)  ; LAB_004f099f
    JMP 0x004f09ca                      ; 004f0a79
        ;   XREF to: 004f09ca (UNCONDITIONAL_JUMP)  ; LAB_004f09ca
    PUSH ESI                            ; 004f0a7e
        ;   Label: LAB_004f0a7e
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f0a7f
    PUSH ECX                            ; 004f0a83
    PUSH EBP                            ; 004f0a84
    PUSH EBX                            ; 004f0a85
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0a86
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0a8b
    MOV EDI,EAX                         ; 004f0a8e
    SUB EAX,ESI                         ; 004f0a90
    CDQ                                 ; 004f0a92
    XOR EAX,EDX                         ; 004f0a93
    SUB EAX,EDX                         ; 004f0a95
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0a97 | DAT_01e312f4
    JG 0x004f08db                       ; 004f0a9d
        ;   XREF to: 004f08db (CONDITIONAL_JUMP)  ; LAB_004f08db
    PUSH ESI                            ; 004f0aa3
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f0aa4
    PUSH ECX                            ; 004f0aa8
    PUSH EBP                            ; 004f0aa9
    PUSH EBX                            ; 004f0aaa
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0aab
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0ab0
    MOV EDI,EAX                         ; 004f0ab3
    SUB EAX,ESI                         ; 004f0ab5
    CDQ                                 ; 004f0ab7
    XOR EAX,EDX                         ; 004f0ab8
    SUB EAX,EDX                         ; 004f0aba
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0abc | DAT_01e312f4
    JG 0x004f08db                       ; 004f0ac2
        ;   XREF to: 004f08db (CONDITIONAL_JUMP)  ; LAB_004f08db
    PUSH ESI                            ; 004f0ac8
    MOV EDX,dword ptr [ESP + 0x58]      ; 004f0ac9
    PUSH EDX                            ; 004f0acd
    MOV EBP,dword ptr [ESP + 0x4c]      ; 004f0ace
    PUSH EBP                            ; 004f0ad2
    PUSH EBX                            ; 004f0ad3
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0ad4
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0ad9
    MOV ESI,EAX                         ; 004f0adc
    MOV EAX,dword ptr [ESP + 0x38]      ; 004f0ade
    DEC EAX                             ; 004f0ae2
    MOV dword ptr [ESP + 0x38],EAX      ; 004f0ae3
    TEST EAX,EAX                        ; 004f0ae7
    JG 0x004f08ac                       ; 004f0ae9
        ;   XREF to: 004f08ac (CONDITIONAL_JUMP)  ; LAB_004f08ac
    JMP 0x004f08db                      ; 004f0aef
        ;   XREF to: 004f08db (UNCONDITIONAL_JUMP)  ; LAB_004f08db
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f0af4
        ;   Label: LAB_004f0af4
    CDQ                                 ; 004f0af8
    XOR EAX,EDX                         ; 004f0af9
    SUB EAX,EDX                         ; 004f0afb
    MOV dword ptr [ESP + 0x34],EAX      ; 004f0afd
    TEST EAX,EAX                        ; 004f0b01
    JLE 0x004f0b3e                      ; 004f0b03
        ;   XREF to: 004f0b3e (CONDITIONAL_JUMP)  ; LAB_004f0b3e
    LEA EAX,[EBP + 0x1]                 ; 004f0b05
    MOV dword ptr [ESP + 0x24],EAX      ; 004f0b08
    LEA EAX,[EBP + -0x1]                ; 004f0b0c
    MOV dword ptr [ESP + 0x28],EAX      ; 004f0b0f
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f0b13
        ;   Label: LAB_004f0b13
    MOV ECX,dword ptr [ESP + 0x30]      ; 004f0b17
    PUSH ESI                            ; 004f0b1b
    ADD EAX,ECX                         ; 004f0b1c
    PUSH EAX                            ; 004f0b1e
    PUSH EBP                            ; 004f0b1f
    PUSH EBX                            ; 004f0b20
    MOV dword ptr [ESP + 0x60],EAX      ; 004f0b21
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0b25
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0b2a
    MOV EDI,EAX                         ; 004f0b2d
    SUB EAX,ESI                         ; 004f0b2f
    CDQ                                 ; 004f0b31
    XOR EAX,EDX                         ; 004f0b32
    SUB EAX,EDX                         ; 004f0b34
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0b36 | DAT_01e312f4
    JLE 0x004f0b78                      ; 004f0b3c
        ;   XREF to: 004f0b78 (CONDITIONAL_JUMP)  ; LAB_004f0b78
    CMP dword ptr [ESP + 0x34],0x0      ; 004f0b3e
        ;   Label: LAB_004f0b3e
    JNZ 0x004f08e6                      ; 004f0b43
        ;   XREF to: 004f08e6 (CONDITIONAL_JUMP)  ; LAB_004f08e6
    MOV ESI,dword ptr [EBX + 0x10]      ; 004f0b49
    PUSH ESI                            ; 004f0b4c
    MOV EBP,dword ptr [ESP + 0x78]      ; 004f0b4d
    PUSH EBP                            ; 004f0b51
    MOV EAX,dword ptr [ESP + 0x80]      ; 004f0b52
    PUSH EAX                            ; 004f0b59
    PUSH EBX                            ; 004f0b5a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0b5b
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0b60
    CMP EDI,EAX                         ; 004f0b63
    JNZ 0x004f08e6                      ; 004f0b65
        ;   XREF to: 004f08e6 (CONDITIONAL_JUMP)  ; LAB_004f08e6
    MOV EAX,0x2                         ; 004f0b6b
    ADD ESP,0x5c                        ; 004f0b70
    POP EBP                             ; 004f0b73
    POP EDI                             ; 004f0b74
    POP ESI                             ; 004f0b75
    POP EBX                             ; 004f0b76
    RET                                 ; 004f0b77
    PUSH ESI                            ; 004f0b78
        ;   Label: LAB_004f0b78
    MOV ECX,dword ptr [ESP + 0x58]      ; 004f0b79
    PUSH ECX                            ; 004f0b7d
    MOV EDI,dword ptr [ESP + 0x30]      ; 004f0b7e
    PUSH EDI                            ; 004f0b82
    PUSH EBX                            ; 004f0b83
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0b84
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0b89
    MOV EDI,EAX                         ; 004f0b8c
    SUB EAX,ESI                         ; 004f0b8e
    CDQ                                 ; 004f0b90
    XOR EAX,EDX                         ; 004f0b91
    SUB EAX,EDX                         ; 004f0b93
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0b95 | DAT_01e312f4
    JG 0x004f0b3e                       ; 004f0b9b
        ;   XREF to: 004f0b3e (CONDITIONAL_JUMP)  ; LAB_004f0b3e
    PUSH ESI                            ; 004f0b9d
    MOV ECX,dword ptr [ESP + 0x58]      ; 004f0b9e
    PUSH ECX                            ; 004f0ba2
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004f0ba3
    PUSH EDI                            ; 004f0ba7
    PUSH EBX                            ; 004f0ba8
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0ba9
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0bae
    MOV EDI,EAX                         ; 004f0bb1
    SUB EAX,ESI                         ; 004f0bb3
    CDQ                                 ; 004f0bb5
    XOR EAX,EDX                         ; 004f0bb6
    SUB EAX,EDX                         ; 004f0bb8
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0bba | DAT_01e312f4
    JG 0x004f0b3e                       ; 004f0bc0
        ;   XREF to: 004f0b3e (CONDITIONAL_JUMP)  ; LAB_004f0b3e
    PUSH ESI                            ; 004f0bc6
    MOV EAX,dword ptr [ESP + 0x54]      ; 004f0bc7
    PUSH EAX                            ; 004f0bcb
    PUSH EBP                            ; 004f0bcc
    PUSH EBX                            ; 004f0bcd
    MOV dword ptr [ESP + 0x64],EAX      ; 004f0bce
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0bd2
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0bd7
    MOV ESI,EAX                         ; 004f0bda
    MOV EAX,dword ptr [ESP + 0x34]      ; 004f0bdc
    DEC EAX                             ; 004f0be0
    MOV dword ptr [ESP + 0x34],EAX      ; 004f0be1
    TEST EAX,EAX                        ; 004f0be5
    JG 0x004f0b13                       ; 004f0be7
        ;   XREF to: 004f0b13 (CONDITIONAL_JUMP)  ; LAB_004f0b13
    JMP 0x004f0b3e                      ; 004f0bed
        ;   XREF to: 004f0b3e (UNCONDITIONAL_JUMP)  ; LAB_004f0b3e

