; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_isLineWalkable_FUN_005336e0(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,int end_height)
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
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00533dc0 at 00534203
;
; Referenced Globals:
;   undefined4 DAT_01e6be44
;
; Called Functions:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005336e0
        ;   Label: core_path.cpp_CPathMap_isLineWalkable_FUN_005336e0
    PUSH ESI                            ; 005336e1
    PUSH EDI                            ; 005336e2
    PUSH EBP                            ; 005336e3
    SUB ESP,0x28                        ; 005336e4
    MOV EBP,dword ptr [ESP + 0x3c]      ; 005336e7
    MOV ESI,dword ptr [ESP + 0x40]      ; 005336eb
    MOV ECX,dword ptr [ESP + 0x44]      ; 005336ef
    MOV EBX,dword ptr [ESP + 0x48]      ; 005336f3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005336f7
    MOV EDI,dword ptr [ESP + 0x50]      ; 005336fb
    MOV dword ptr [ESP + 0x4],0x1       ; 005336ff
    CMP ECX,EDI                         ; 00533707
    JG 0x00533776                       ; 00533709
        ;   XREF to: 00533776 (CONDITIONAL_JUMP)  ; LAB_00533776
    SUB EDX,ESI                         ; 0053370b
        ;   Label: LAB_0053370b
    SUB EDI,ECX                         ; 0053370d
    MOV dword ptr [ESP + 0x1c],EDX      ; 0053370f
    MOV dword ptr [ESP + 0x18],EDI      ; 00533713
    TEST EDX,EDX                        ; 00533717
    JL 0x00533791                       ; 00533719
        ;   XREF to: 00533791 (CONDITIONAL_JUMP)  ; LAB_00533791
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0053371b
        ;   Label: LAB_0053371b
    MOV EDX,dword ptr [ESP + 0x18]      ; 0053371f
    MOV EDI,ECX                         ; 00533723
    CMP EAX,EDX                         ; 00533725
    JLE 0x00533849                      ; 00533727
        ;   XREF to: 00533849 (CONDITIONAL_JUMP)  ; LAB_00533849
    LEA EAX,[EDX + EDX*0x1]             ; 0053372d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00533730
    SUB EAX,EDX                         ; 00533734
    MOV dword ptr [ESP + 0x24],EAX      ; 00533736
    XOR EAX,EAX                         ; 0053373a
    MOV dword ptr [ESP + 0xc],EAX       ; 0053373c
    TEST EDX,EDX                        ; 00533740
    JL 0x00533837                       ; 00533742
        ;   XREF to: 00533837 (CONDITIONAL_JUMP)  ; LAB_00533837
    DEC ECX                             ; 00533748
    MOV dword ptr [ESP + 0x10],ECX      ; 00533749
    PUSH EBX                            ; 0053374d
        ;   Label: LAB_0053374d
    PUSH ESI                            ; 0053374e
    MOV ECX,dword ptr [ESP + 0x18]      ; 0053374f
    PUSH ECX                            ; 00533753
    PUSH EBP                            ; 00533754
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 00533755
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0053375a
    SUB EAX,EBX                         ; 0053375d
    CDQ                                 ; 0053375f
    XOR EAX,EDX                         ; 00533760
    SUB EAX,EDX                         ; 00533762
    CMP EAX,dword ptr [0x01e6be44]      ; 00533764 | DAT_01e6be44
    JLE 0x005337a7                      ; 0053376a
        ;   XREF to: 005337a7 (CONDITIONAL_JUMP)  ; LAB_005337a7
    XOR EAX,EAX                         ; 0053376c
        ;   Label: LAB_0053376c
    ADD ESP,0x28                        ; 0053376e
    POP EBP                             ; 00533771
    POP EDI                             ; 00533772
    POP ESI                             ; 00533773
    POP EBX                             ; 00533774
    RET                                 ; 00533775
    MOV EAX,ESI                         ; 00533776
        ;   Label: LAB_00533776
    MOV ESI,EDX                         ; 00533778
    MOV EDX,EAX                         ; 0053377a
    MOV EAX,ECX                         ; 0053377c
    MOV ECX,EDI                         ; 0053377e
    MOV EDI,EAX                         ; 00533780
    MOV EAX,EBX                         ; 00533782
    MOV EBX,dword ptr [ESP + 0x54]      ; 00533784
    MOV dword ptr [ESP + 0x54],EAX      ; 00533788
    JMP 0x0053370b                      ; 0053378c
        ;   XREF to: 0053370b (UNCONDITIONAL_JUMP)  ; LAB_0053370b
    MOV EDI,EDX                         ; 00533791
        ;   Label: LAB_00533791
    MOV EAX,0xffffffff                  ; 00533793
    NEG EDI                             ; 00533798
    MOV dword ptr [ESP + 0x4],EAX       ; 0053379a
    MOV dword ptr [ESP + 0x1c],EDI      ; 0053379e
    JMP 0x0053371b                      ; 005337a2
        ;   XREF to: 0053371b (UNCONDITIONAL_JUMP)  ; LAB_0053371b
    PUSH EBX                            ; 005337a7
        ;   Label: LAB_005337a7
    PUSH ESI                            ; 005337a8
    LEA EAX,[EDI + 0x1]                 ; 005337a9
    PUSH EAX                            ; 005337ac
    PUSH EBP                            ; 005337ad
    MOV dword ptr [ESP + 0x18],EAX      ; 005337ae
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 005337b2
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005337b7
    SUB EAX,EBX                         ; 005337ba
    CDQ                                 ; 005337bc
    XOR EAX,EDX                         ; 005337bd
    SUB EAX,EDX                         ; 005337bf
    CMP EAX,dword ptr [0x01e6be44]      ; 005337c1 | DAT_01e6be44
    JG 0x0053376c                       ; 005337c7
        ;   XREF to: 0053376c (CONDITIONAL_JUMP)  ; LAB_0053376c
    PUSH EBX                            ; 005337c9
    PUSH ESI                            ; 005337ca
    PUSH EDI                            ; 005337cb
    PUSH EBP                            ; 005337cc
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 005337cd
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005337d2
    MOV ECX,EAX                         ; 005337d5
    MOV dword ptr [ESP],EAX             ; 005337d7
    SUB EAX,EBX                         ; 005337da
    CDQ                                 ; 005337dc
    XOR EAX,EDX                         ; 005337dd
    SUB EAX,EDX                         ; 005337df
    CMP EAX,dword ptr [0x01e6be44]      ; 005337e1 | DAT_01e6be44
    JG 0x0053376c                       ; 005337e7
        ;   XREF to: 0053376c (CONDITIONAL_JUMP)  ; LAB_0053376c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005337e9
    MOV EBX,ECX                         ; 005337ed
    TEST EAX,EAX                        ; 005337ef
    JLE 0x0053380e                      ; 005337f1
        ;   XREF to: 0053380e (CONDITIONAL_JUMP)  ; LAB_0053380e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005337f3
    MOV ECX,dword ptr [ESP + 0x24]      ; 005337f7
    MOV EDX,dword ptr [ESP + 0x10]      ; 005337fb
    MOV EDI,dword ptr [ESP + 0x8]       ; 005337ff
    SUB ECX,EAX                         ; 00533803
    INC EDX                             ; 00533805
    MOV dword ptr [ESP + 0x24],ECX      ; 00533806
    MOV dword ptr [ESP + 0x10],EDX      ; 0053380a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0053380e
        ;   Label: LAB_0053380e
    MOV EDX,dword ptr [ESP + 0x24]      ; 00533812
    ADD ESI,EAX                         ; 00533816
    MOV EAX,dword ptr [ESP + 0x18]      ; 00533818
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053381c
    ADD EDX,EAX                         ; 00533820
    INC ECX                             ; 00533822
    MOV dword ptr [ESP + 0x24],EDX      ; 00533823
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00533827
    MOV dword ptr [ESP + 0xc],ECX       ; 0053382b
    CMP ECX,EDX                         ; 0053382f
    JLE 0x0053374d                      ; 00533831
        ;   XREF to: 0053374d (CONDITIONAL_JUMP)  ; LAB_0053374d
    MOV EAX,dword ptr [ESP]             ; 00533837
        ;   Label: LAB_00533837
    CMP EAX,dword ptr [ESP + 0x54]      ; 0053383a
    JZ 0x00533918                       ; 0053383e
        ;   XREF to: 00533918 (CONDITIONAL_JUMP)  ; LAB_00533918
    JMP 0x0053376c                      ; 00533844
        ;   XREF to: 0053376c (UNCONDITIONAL_JUMP)  ; LAB_0053376c
    ADD EAX,EAX                         ; 00533849
        ;   Label: LAB_00533849
    SUB EAX,EDX                         ; 0053384b
    MOV dword ptr [ESP + 0x20],EAX      ; 0053384d
    XOR EAX,EAX                         ; 00533851
    MOV dword ptr [ESP + 0x14],EAX      ; 00533853
    TEST EDX,EDX                        ; 00533857
    JL 0x00533837                       ; 00533859
        ;   XREF to: 00533837 (CONDITIONAL_JUMP)  ; LAB_00533837
    PUSH EBX                            ; 0053385b
        ;   Label: LAB_0053385b
    LEA EAX,[ESI + 0x1]                 ; 0053385c
    PUSH EAX                            ; 0053385f
    PUSH EDI                            ; 00533860
    PUSH EBP                            ; 00533861
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 00533862
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 00533867
    SUB EAX,EBX                         ; 0053386a
    CDQ                                 ; 0053386c
    XOR EAX,EDX                         ; 0053386d
    SUB EAX,EDX                         ; 0053386f
    CMP EAX,dword ptr [0x01e6be44]      ; 00533871 | DAT_01e6be44
    JLE 0x00533883                      ; 00533877
        ;   XREF to: 00533883 (CONDITIONAL_JUMP)  ; LAB_00533883
    XOR EAX,EAX                         ; 00533879
    ADD ESP,0x28                        ; 0053387b
    POP EBP                             ; 0053387e
    POP EDI                             ; 0053387f
    POP ESI                             ; 00533880
    POP EBX                             ; 00533881
    RET                                 ; 00533882
    PUSH EBX                            ; 00533883
        ;   Label: LAB_00533883
    LEA EAX,[ESI + -0x1]                ; 00533884
    PUSH EAX                            ; 00533887
    PUSH EDI                            ; 00533888
    PUSH EBP                            ; 00533889
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 0053388a
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0053388f
    SUB EAX,EBX                         ; 00533892
    CDQ                                 ; 00533894
    XOR EAX,EDX                         ; 00533895
    SUB EAX,EDX                         ; 00533897
    CMP EAX,dword ptr [0x01e6be44]      ; 00533899 | DAT_01e6be44
    JG 0x0053376c                       ; 0053389f
        ;   XREF to: 0053376c (CONDITIONAL_JUMP)  ; LAB_0053376c
    PUSH EBX                            ; 005338a5
    PUSH ESI                            ; 005338a6
    PUSH EDI                            ; 005338a7
    PUSH EBP                            ; 005338a8
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640 ; 005338a9
        ;   XREF to: 00533640 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_00533640(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 005338ae
    MOV ECX,EAX                         ; 005338b1
    MOV dword ptr [ESP],EAX             ; 005338b3
    SUB EAX,EBX                         ; 005338b6
    CDQ                                 ; 005338b8
    XOR EAX,EDX                         ; 005338b9
    SUB EAX,EDX                         ; 005338bb
    CMP EAX,dword ptr [0x01e6be44]      ; 005338bd | DAT_01e6be44
    JG 0x0053376c                       ; 005338c3
        ;   XREF to: 0053376c (CONDITIONAL_JUMP)  ; LAB_0053376c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005338c9
    MOV EBX,ECX                         ; 005338cd
    TEST EAX,EAX                        ; 005338cf
    JLE 0x005338e7                      ; 005338d1
        ;   XREF to: 005338e7 (CONDITIONAL_JUMP)  ; LAB_005338e7
    MOV EAX,dword ptr [ESP + 0x18]      ; 005338d3
    MOV ECX,dword ptr [ESP + 0x20]      ; 005338d7
    MOV EDX,dword ptr [ESP + 0x4]       ; 005338db
    SUB ECX,EAX                         ; 005338df
    ADD ESI,EDX                         ; 005338e1
    MOV dword ptr [ESP + 0x20],ECX      ; 005338e3
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005338e7
        ;   Label: LAB_005338e7
    MOV ECX,dword ptr [ESP + 0x20]      ; 005338eb
    MOV EDX,dword ptr [ESP + 0x18]      ; 005338ef
    ADD ECX,EAX                         ; 005338f3
    MOV EAX,dword ptr [ESP + 0x14]      ; 005338f5
    INC EDI                             ; 005338f9
    INC EAX                             ; 005338fa
    MOV dword ptr [ESP + 0x20],ECX      ; 005338fb
    MOV dword ptr [ESP + 0x14],EAX      ; 005338ff
    CMP EAX,EDX                         ; 00533903
    JLE 0x0053385b                      ; 00533905
        ;   XREF to: 0053385b (CONDITIONAL_JUMP)  ; LAB_0053385b
    MOV EAX,dword ptr [ESP]             ; 0053390b
    CMP EAX,dword ptr [ESP + 0x54]      ; 0053390e
    JNZ 0x0053376c                      ; 00533912
        ;   XREF to: 0053376c (CONDITIONAL_JUMP)  ; LAB_0053376c
    MOV EAX,0x1                         ; 00533918
        ;   Label: LAB_00533918
    ADD ESP,0x28                        ; 0053391d
    POP EBP                             ; 00533920
    POP EDI                             ; 00533921
    POP ESI                             ; 00533922
    POP EBX                             ; 00533923
    RET                                 ; 00533924

