; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0(CPathMap *this_ptr,int start_x,int start_z,int end_x,int end_z)
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
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00512a70 at 005130c2
;
; Referenced Globals:
;   undefined4 DAT_01e4fed4
;
; Called Functions:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005125e0
        ;   Label: core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_005125e0
    PUSH ESI                            ; 005125e1
    PUSH EDI                            ; 005125e2
    PUSH EBP                            ; 005125e3
    SUB ESP,0x5c                        ; 005125e4
    MOV EBX,dword ptr [ESP + 0x70]      ; 005125e7
    MOV EAX,dword ptr [ESP + 0x74]      ; 005125eb
    MOV EDX,dword ptr [ESP + 0x7c]      ; 005125ef
    SUB EAX,EDX                         ; 005125f3
    MOV ECX,dword ptr [ESP + 0x80]      ; 005125f5
    MOV dword ptr [ESP + 0x8],EAX       ; 005125fc
    MOV EAX,dword ptr [ESP + 0x78]      ; 00512600
    MOV EBP,EDX                         ; 00512604
    SUB EAX,ECX                         ; 00512606
    MOV dword ptr [ESP + 0x58],ECX      ; 00512608
    MOV dword ptr [ESP + 0x4],EAX       ; 0051260c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00512610
    MOV ESI,dword ptr [ESP + 0x8]       ; 00512614
    CDQ                                 ; 00512618
    XOR EAX,EDX                         ; 00512619
    SUB EAX,EDX                         ; 0051261b
    MOV dword ptr [ESP + 0x40],EAX      ; 0051261d
    TEST ESI,ESI                        ; 00512621
    JL 0x00512740                       ; 00512623
        ;   XREF to: 00512740 (CONDITIONAL_JUMP)  ; LAB_00512740
    MOV dword ptr [ESP + 0x30],0x1      ; 00512629
    CMP dword ptr [ESP + 0x4],0x0       ; 00512631
        ;   Label: LAB_00512631
    JL 0x0051274d                       ; 00512636
        ;   XREF to: 0051274d (CONDITIONAL_JUMP)  ; LAB_0051274d
    MOV dword ptr [ESP + 0x2c],0x1      ; 0051263c
    MOV EDX,dword ptr [EBX + 0x1c]      ; 00512644
        ;   Label: LAB_00512644
    PUSH EDX                            ; 00512647
    PUSH EBP                            ; 00512648
    MOV ECX,dword ptr [ESP + 0x60]      ; 00512649
    PUSH ECX                            ; 0051264d
    PUSH EBX                            ; 0051264e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 0051264f
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512654
    MOV ESI,EAX                         ; 00512657
    CMP dword ptr [ESP + 0x40],0x0      ; 00512659
    JLE 0x005126a1                      ; 0051265e
        ;   XREF to: 005126a1 (CONDITIONAL_JUMP)  ; LAB_005126a1
    MOV EAX,dword ptr [ESP + 0x58]      ; 00512660
    INC EAX                             ; 00512664
    MOV dword ptr [ESP + 0x10],EAX      ; 00512665
    MOV EAX,dword ptr [ESP + 0x58]      ; 00512669
    DEC EAX                             ; 0051266d
    MOV dword ptr [ESP + 0x1c],EAX      ; 0051266e
    MOV EAX,dword ptr [ESP + 0x30]      ; 00512672
        ;   Label: LAB_00512672
    PUSH ESI                            ; 00512676
    ADD EAX,EBP                         ; 00512677
    PUSH EAX                            ; 00512679
    MOV EDI,dword ptr [ESP + 0x60]      ; 0051267a
    PUSH EDI                            ; 0051267e
    PUSH EBX                            ; 0051267f
    MOV dword ptr [ESP + 0x58],EAX      ; 00512680
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512684
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512689
    MOV EDI,EAX                         ; 0051268c
    SUB EAX,ESI                         ; 0051268e
    CDQ                                 ; 00512690
    XOR EAX,EDX                         ; 00512691
    SUB EAX,EDX                         ; 00512693
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512695 | DAT_01e4fed4
    JLE 0x0051275a                      ; 0051269b
        ;   XREF to: 0051275a (CONDITIONAL_JUMP)  ; LAB_0051275a
    CMP dword ptr [ESP + 0x40],0x0      ; 005126a1
        ;   Label: LAB_005126a1
    JZ 0x005127d0                       ; 005126a6
        ;   XREF to: 005127d0 (CONDITIONAL_JUMP)  ; LAB_005127d0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005126ac
        ;   Label: LAB_005126ac
    MOV dword ptr [ESP + 0x54],EAX      ; 005126b0
    MOV EAX,dword ptr [ESP + 0x4]       ; 005126b4
    CDQ                                 ; 005126b8
    XOR EAX,EDX                         ; 005126b9
    SUB EAX,EDX                         ; 005126bb
    MOV EDX,dword ptr [EBX + 0x1c]      ; 005126bd
    PUSH EDX                            ; 005126c0
    MOV ECX,dword ptr [ESP + 0x80]      ; 005126c1
    PUSH ECX                            ; 005126c8
    MOV EBP,dword ptr [ESP + 0x88]      ; 005126c9
    PUSH EBP                            ; 005126d0
    PUSH EBX                            ; 005126d1
    MOV dword ptr [ESP + 0x10],EAX      ; 005126d2
    MOV dword ptr [ESP + 0x48],EAX      ; 005126d6
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005126da
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005126df
    MOV ESI,EAX                         ; 005126e2
    CMP dword ptr [ESP],0x0             ; 005126e4
    JLE 0x0051272b                      ; 005126e8
        ;   XREF to: 0051272b (CONDITIONAL_JUMP)  ; LAB_0051272b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005126ea
    INC EAX                             ; 005126ee
    MOV dword ptr [ESP + 0x14],EAX      ; 005126ef
    MOV EAX,dword ptr [ESP + 0x7c]      ; 005126f3
    DEC EAX                             ; 005126f7
    MOV dword ptr [ESP + 0x20],EAX      ; 005126f8
    PUSH ESI                            ; 005126fc
        ;   Label: LAB_005126fc
    MOV ECX,dword ptr [ESP + 0x58]      ; 005126fd
    MOV EAX,dword ptr [ESP + 0x30]      ; 00512701
    PUSH ECX                            ; 00512705
    ADD EAX,EBP                         ; 00512706
    PUSH EAX                            ; 00512708
    PUSH EBX                            ; 00512709
    MOV dword ptr [ESP + 0x54],EAX      ; 0051270a
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 0051270e
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512713
    MOV EDI,EAX                         ; 00512716
    SUB EAX,ESI                         ; 00512718
    CDQ                                 ; 0051271a
    XOR EAX,EDX                         ; 0051271b
    SUB EAX,EDX                         ; 0051271d
    CMP EAX,dword ptr [0x01e4fed4]      ; 0051271f | DAT_01e4fed4
    JLE 0x005128ce                      ; 00512725
        ;   XREF to: 005128ce (CONDITIONAL_JUMP)  ; LAB_005128ce
    CMP dword ptr [ESP + 0x38],0x0      ; 0051272b
        ;   Label: LAB_0051272b
    JZ 0x00512944                       ; 00512730
        ;   XREF to: 00512944 (CONDITIONAL_JUMP)  ; LAB_00512944
    XOR EAX,EAX                         ; 00512736
        ;   Label: LAB_00512736
    ADD ESP,0x5c                        ; 00512738
    POP EBP                             ; 0051273b
    POP EDI                             ; 0051273c
    POP ESI                             ; 0051273d
    POP EBX                             ; 0051273e
    RET                                 ; 0051273f
    MOV dword ptr [ESP + 0x30],0xffffffff ; 00512740
        ;   Label: LAB_00512740
    JMP 0x00512631                      ; 00512748
        ;   XREF to: 00512631 (UNCONDITIONAL_JUMP)  ; LAB_00512631
    MOV dword ptr [ESP + 0x2c],0xffffffff ; 0051274d
        ;   Label: LAB_0051274d
    JMP 0x00512644                      ; 00512755
        ;   XREF to: 00512644 (UNCONDITIONAL_JUMP)  ; LAB_00512644
    PUSH ESI                            ; 0051275a
        ;   Label: LAB_0051275a
    PUSH EBP                            ; 0051275b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0051275c
    PUSH ECX                            ; 00512760
    PUSH EBX                            ; 00512761
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512762
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512767
    MOV EDI,EAX                         ; 0051276a
    SUB EAX,ESI                         ; 0051276c
    CDQ                                 ; 0051276e
    XOR EAX,EDX                         ; 0051276f
    SUB EAX,EDX                         ; 00512771
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512773 | DAT_01e4fed4
    JG 0x005126a1                       ; 00512779
        ;   XREF to: 005126a1 (CONDITIONAL_JUMP)  ; LAB_005126a1
    PUSH ESI                            ; 0051277f
    PUSH EBP                            ; 00512780
    MOV ECX,dword ptr [ESP + 0x18]      ; 00512781
    PUSH ECX                            ; 00512785
    PUSH EBX                            ; 00512786
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512787
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0051278c
    MOV EDI,EAX                         ; 0051278f
    SUB EAX,ESI                         ; 00512791
    CDQ                                 ; 00512793
    XOR EAX,EDX                         ; 00512794
    SUB EAX,EDX                         ; 00512796
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512798 | DAT_01e4fed4
    JG 0x005126a1                       ; 0051279e
        ;   XREF to: 005126a1 (CONDITIONAL_JUMP)  ; LAB_005126a1
    PUSH ESI                            ; 005127a4
    MOV EBP,dword ptr [ESP + 0x4c]      ; 005127a5
    PUSH EBP                            ; 005127a9
    MOV ECX,dword ptr [ESP + 0x60]      ; 005127aa
    PUSH ECX                            ; 005127ae
    PUSH EBX                            ; 005127af
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005127b0
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005127b5
    MOV ESI,EAX                         ; 005127b8
    MOV EAX,dword ptr [ESP + 0x40]      ; 005127ba
    DEC EAX                             ; 005127be
    MOV dword ptr [ESP + 0x40],EAX      ; 005127bf
    TEST EAX,EAX                        ; 005127c3
    JG 0x00512672                       ; 005127c5
        ;   XREF to: 00512672 (CONDITIONAL_JUMP)  ; LAB_00512672
    JMP 0x005126a1                      ; 005127cb
        ;   XREF to: 005126a1 (UNCONDITIONAL_JUMP)  ; LAB_005126a1
    MOV EAX,dword ptr [ESP + 0x4]       ; 005127d0
        ;   Label: LAB_005127d0
    CDQ                                 ; 005127d4
    XOR EAX,EDX                         ; 005127d5
    SUB EAX,EDX                         ; 005127d7
    MOV dword ptr [ESP + 0x3c],EAX      ; 005127d9
    TEST EAX,EAX                        ; 005127dd
    JLE 0x0051281a                      ; 005127df
        ;   XREF to: 0051281a (CONDITIONAL_JUMP)  ; LAB_0051281a
    LEA EAX,[EBP + 0x1]                 ; 005127e1
    MOV dword ptr [ESP + 0x18],EAX      ; 005127e4
    LEA EAX,[EBP + -0x1]                ; 005127e8
    MOV dword ptr [ESP + 0xc],EAX       ; 005127eb
    PUSH ESI                            ; 005127ef
        ;   Label: LAB_005127ef
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005127f0
    MOV ECX,dword ptr [ESP + 0x30]      ; 005127f4
    PUSH EBP                            ; 005127f8
    ADD EAX,ECX                         ; 005127f9
    PUSH EAX                            ; 005127fb
    PUSH EBX                            ; 005127fc
    MOV dword ptr [ESP + 0x5c],EAX      ; 005127fd
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512801
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512806
    MOV EDI,EAX                         ; 00512809
    SUB EAX,ESI                         ; 0051280b
    CDQ                                 ; 0051280d
    XOR EAX,EDX                         ; 0051280e
    SUB EAX,EDX                         ; 00512810
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512812 | DAT_01e4fed4
    JLE 0x00512854                      ; 00512818
        ;   XREF to: 00512854 (CONDITIONAL_JUMP)  ; LAB_00512854
    CMP dword ptr [ESP + 0x3c],0x0      ; 0051281a
        ;   Label: LAB_0051281a
    JNZ 0x005126ac                      ; 0051281f
        ;   XREF to: 005126ac (CONDITIONAL_JUMP)  ; LAB_005126ac
    MOV ESI,dword ptr [EBX + 0x10]      ; 00512825
    PUSH ESI                            ; 00512828
    MOV EBP,dword ptr [ESP + 0x78]      ; 00512829
    PUSH EBP                            ; 0051282d
    MOV EAX,dword ptr [ESP + 0x80]      ; 0051282e
    PUSH EAX                            ; 00512835
    PUSH EBX                            ; 00512836
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512837
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0051283c
    CMP EDI,EAX                         ; 0051283f
    JNZ 0x005126ac                      ; 00512841
        ;   XREF to: 005126ac (CONDITIONAL_JUMP)  ; LAB_005126ac
    MOV EAX,0x1                         ; 00512847
    ADD ESP,0x5c                        ; 0051284c
    POP EBP                             ; 0051284f
    POP EDI                             ; 00512850
    POP ESI                             ; 00512851
    POP EBX                             ; 00512852
    RET                                 ; 00512853
    PUSH ESI                            ; 00512854
        ;   Label: LAB_00512854
    MOV ECX,dword ptr [ESP + 0x10]      ; 00512855
    PUSH ECX                            ; 00512859
    MOV EDI,dword ptr [ESP + 0x60]      ; 0051285a
    PUSH EDI                            ; 0051285e
    PUSH EBX                            ; 0051285f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512860
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512865
    MOV EDI,EAX                         ; 00512868
    SUB EAX,ESI                         ; 0051286a
    CDQ                                 ; 0051286c
    XOR EAX,EDX                         ; 0051286d
    SUB EAX,EDX                         ; 0051286f
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512871 | DAT_01e4fed4
    JG 0x0051281a                       ; 00512877
        ;   XREF to: 0051281a (CONDITIONAL_JUMP)  ; LAB_0051281a
    PUSH ESI                            ; 00512879
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0051287a
    PUSH ECX                            ; 0051287e
    MOV EDI,dword ptr [ESP + 0x60]      ; 0051287f
    PUSH EDI                            ; 00512883
    PUSH EBX                            ; 00512884
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512885
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0051288a
    MOV EDI,EAX                         ; 0051288d
    SUB EAX,ESI                         ; 0051288f
    CDQ                                 ; 00512891
    XOR EAX,EDX                         ; 00512892
    SUB EAX,EDX                         ; 00512894
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512896 | DAT_01e4fed4
    JG 0x0051281a                       ; 0051289c
        ;   XREF to: 0051281a (CONDITIONAL_JUMP)  ; LAB_0051281a
    PUSH ESI                            ; 005128a2
    PUSH EBP                            ; 005128a3
    MOV EAX,dword ptr [ESP + 0x54]      ; 005128a4
    PUSH EAX                            ; 005128a8
    PUSH EBX                            ; 005128a9
    MOV dword ptr [ESP + 0x68],EAX      ; 005128aa
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005128ae
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005128b3
    MOV ESI,EAX                         ; 005128b6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005128b8
    DEC EAX                             ; 005128bc
    MOV dword ptr [ESP + 0x3c],EAX      ; 005128bd
    TEST EAX,EAX                        ; 005128c1
    JG 0x005127ef                       ; 005128c3
        ;   XREF to: 005127ef (CONDITIONAL_JUMP)  ; LAB_005127ef
    JMP 0x0051281a                      ; 005128c9
        ;   XREF to: 0051281a (UNCONDITIONAL_JUMP)  ; LAB_0051281a
    PUSH ESI                            ; 005128ce
        ;   Label: LAB_005128ce
    MOV ECX,dword ptr [ESP + 0x24]      ; 005128cf
    PUSH ECX                            ; 005128d3
    PUSH EBP                            ; 005128d4
    PUSH EBX                            ; 005128d5
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005128d6
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005128db
    MOV EDI,EAX                         ; 005128de
    SUB EAX,ESI                         ; 005128e0
    CDQ                                 ; 005128e2
    XOR EAX,EDX                         ; 005128e3
    SUB EAX,EDX                         ; 005128e5
    CMP EAX,dword ptr [0x01e4fed4]      ; 005128e7 | DAT_01e4fed4
    JG 0x0051272b                       ; 005128ed
        ;   XREF to: 0051272b (CONDITIONAL_JUMP)  ; LAB_0051272b
    PUSH ESI                            ; 005128f3
    MOV ECX,dword ptr [ESP + 0x18]      ; 005128f4
    PUSH ECX                            ; 005128f8
    PUSH EBP                            ; 005128f9
    PUSH EBX                            ; 005128fa
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005128fb
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512900
    MOV EDI,EAX                         ; 00512903
    SUB EAX,ESI                         ; 00512905
    CDQ                                 ; 00512907
    XOR EAX,EDX                         ; 00512908
    SUB EAX,EDX                         ; 0051290a
    CMP EAX,dword ptr [0x01e4fed4]      ; 0051290c | DAT_01e4fed4
    JG 0x0051272b                       ; 00512912
        ;   XREF to: 0051272b (CONDITIONAL_JUMP)  ; LAB_0051272b
    PUSH ESI                            ; 00512918
    MOV EDX,dword ptr [ESP + 0x58]      ; 00512919
    PUSH EDX                            ; 0051291d
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0051291e
    PUSH EBP                            ; 00512922
    PUSH EBX                            ; 00512923
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512924
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512929
    MOV ESI,EAX                         ; 0051292c
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051292e
    DEC EAX                             ; 00512932
    MOV dword ptr [ESP + 0x38],EAX      ; 00512933
    TEST EAX,EAX                        ; 00512937
    JG 0x005126fc                       ; 00512939
        ;   XREF to: 005126fc (CONDITIONAL_JUMP)  ; LAB_005126fc
    JMP 0x0051272b                      ; 0051293f
        ;   XREF to: 0051272b (UNCONDITIONAL_JUMP)  ; LAB_0051272b
    MOV EAX,dword ptr [ESP + 0x8]       ; 00512944
        ;   Label: LAB_00512944
    CDQ                                 ; 00512948
    XOR EAX,EDX                         ; 00512949
    SUB EAX,EDX                         ; 0051294b
    MOV dword ptr [ESP + 0x34],EAX      ; 0051294d
    TEST EAX,EAX                        ; 00512951
    JLE 0x0051298e                      ; 00512953
        ;   XREF to: 0051298e (CONDITIONAL_JUMP)  ; LAB_0051298e
    LEA EAX,[EBP + 0x1]                 ; 00512955
    MOV dword ptr [ESP + 0x24],EAX      ; 00512958
    LEA EAX,[EBP + -0x1]                ; 0051295c
    MOV dword ptr [ESP + 0x28],EAX      ; 0051295f
    MOV EAX,dword ptr [ESP + 0x54]      ; 00512963
        ;   Label: LAB_00512963
    MOV ECX,dword ptr [ESP + 0x30]      ; 00512967
    PUSH ESI                            ; 0051296b
    ADD EAX,ECX                         ; 0051296c
    PUSH EAX                            ; 0051296e
    PUSH EBP                            ; 0051296f
    PUSH EBX                            ; 00512970
    MOV dword ptr [ESP + 0x60],EAX      ; 00512971
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512975
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0051297a
    MOV EDI,EAX                         ; 0051297d
    SUB EAX,ESI                         ; 0051297f
    CDQ                                 ; 00512981
    XOR EAX,EDX                         ; 00512982
    SUB EAX,EDX                         ; 00512984
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512986 | DAT_01e4fed4
    JLE 0x005129c8                      ; 0051298c
        ;   XREF to: 005129c8 (CONDITIONAL_JUMP)  ; LAB_005129c8
    CMP dword ptr [ESP + 0x34],0x0      ; 0051298e
        ;   Label: LAB_0051298e
    JNZ 0x00512736                      ; 00512993
        ;   XREF to: 00512736 (CONDITIONAL_JUMP)  ; LAB_00512736
    MOV ESI,dword ptr [EBX + 0x10]      ; 00512999
    PUSH ESI                            ; 0051299c
    MOV EBP,dword ptr [ESP + 0x78]      ; 0051299d
    PUSH EBP                            ; 005129a1
    MOV EAX,dword ptr [ESP + 0x80]      ; 005129a2
    PUSH EAX                            ; 005129a9
    PUSH EBX                            ; 005129aa
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005129ab
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005129b0
    CMP EDI,EAX                         ; 005129b3
    JNZ 0x00512736                      ; 005129b5
        ;   XREF to: 00512736 (CONDITIONAL_JUMP)  ; LAB_00512736
    MOV EAX,0x2                         ; 005129bb
    ADD ESP,0x5c                        ; 005129c0
    POP EBP                             ; 005129c3
    POP EDI                             ; 005129c4
    POP ESI                             ; 005129c5
    POP EBX                             ; 005129c6
    RET                                 ; 005129c7
    PUSH ESI                            ; 005129c8
        ;   Label: LAB_005129c8
    MOV ECX,dword ptr [ESP + 0x58]      ; 005129c9
    PUSH ECX                            ; 005129cd
    MOV EDI,dword ptr [ESP + 0x30]      ; 005129ce
    PUSH EDI                            ; 005129d2
    PUSH EBX                            ; 005129d3
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005129d4
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005129d9
    MOV EDI,EAX                         ; 005129dc
    SUB EAX,ESI                         ; 005129de
    CDQ                                 ; 005129e0
    XOR EAX,EDX                         ; 005129e1
    SUB EAX,EDX                         ; 005129e3
    CMP EAX,dword ptr [0x01e4fed4]      ; 005129e5 | DAT_01e4fed4
    JG 0x0051298e                       ; 005129eb
        ;   XREF to: 0051298e (CONDITIONAL_JUMP)  ; LAB_0051298e
    PUSH ESI                            ; 005129ed
    MOV ECX,dword ptr [ESP + 0x58]      ; 005129ee
    PUSH ECX                            ; 005129f2
    MOV EDI,dword ptr [ESP + 0x2c]      ; 005129f3
    PUSH EDI                            ; 005129f7
    PUSH EBX                            ; 005129f8
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 005129f9
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005129fe
    MOV EDI,EAX                         ; 00512a01
    SUB EAX,ESI                         ; 00512a03
    CDQ                                 ; 00512a05
    XOR EAX,EDX                         ; 00512a06
    SUB EAX,EDX                         ; 00512a08
    CMP EAX,dword ptr [0x01e4fed4]      ; 00512a0a | DAT_01e4fed4
    JG 0x0051298e                       ; 00512a10
        ;   XREF to: 0051298e (CONDITIONAL_JUMP)  ; LAB_0051298e
    PUSH ESI                            ; 00512a16
    MOV EAX,dword ptr [ESP + 0x54]      ; 00512a17
    PUSH EAX                            ; 00512a1b
    PUSH EBP                            ; 00512a1c
    PUSH EBX                            ; 00512a1d
    MOV dword ptr [ESP + 0x64],EAX      ; 00512a1e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0 ; 00512a22
        ;   XREF to: 005122f0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_005122f0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00512a27
    MOV ESI,EAX                         ; 00512a2a
    MOV EAX,dword ptr [ESP + 0x34]      ; 00512a2c
    DEC EAX                             ; 00512a30
    MOV dword ptr [ESP + 0x34],EAX      ; 00512a31
    TEST EAX,EAX                        ; 00512a35
    JG 0x00512963                       ; 00512a37
        ;   XREF to: 00512963 (CONDITIONAL_JUMP)  ; LAB_00512963
    JMP 0x0051298e                      ; 00512a3d
        ;   XREF to: 0051298e (UNCONDITIONAL_JUMP)  ; LAB_0051298e

