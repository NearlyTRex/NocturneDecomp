; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_isLineWalkable_FUN_004f0540(CPathMap *this_ptr,int start_x,int start_z,int start_height,int end_x,int end_z,int end_height)
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
;   core_path.cpp_CPathMap_findPathToDestination_FUN_004f0c20 at 004f0fae
;
; Referenced Globals:
;   undefined4 DAT_01e312f4
;
; Called Functions:
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0540
        ;   Label: core_path.cpp_CPathMap_isLineWalkable_FUN_004f0540
    PUSH ESI                            ; 004f0541
    PUSH EDI                            ; 004f0542
    PUSH EBP                            ; 004f0543
    SUB ESP,0x28                        ; 004f0544
    MOV EBP,dword ptr [ESP + 0x3c]      ; 004f0547
    MOV ESI,dword ptr [ESP + 0x40]      ; 004f054b
    MOV ECX,dword ptr [ESP + 0x44]      ; 004f054f
    MOV EBX,dword ptr [ESP + 0x48]      ; 004f0553
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004f0557
    MOV EDI,dword ptr [ESP + 0x50]      ; 004f055b
    MOV dword ptr [ESP + 0x4],0x1       ; 004f055f
    CMP ECX,EDI                         ; 004f0567
    JG 0x004f05d6                       ; 004f0569
        ;   XREF to: 004f05d6 (CONDITIONAL_JUMP)  ; LAB_004f05d6
    SUB EDX,ESI                         ; 004f056b
        ;   Label: LAB_004f056b
    SUB EDI,ECX                         ; 004f056d
    MOV dword ptr [ESP + 0x1c],EDX      ; 004f056f
    MOV dword ptr [ESP + 0x18],EDI      ; 004f0573
    TEST EDX,EDX                        ; 004f0577
    JL 0x004f05f1                       ; 004f0579
        ;   XREF to: 004f05f1 (CONDITIONAL_JUMP)  ; LAB_004f05f1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f057b
        ;   Label: LAB_004f057b
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f057f
    MOV EDI,ECX                         ; 004f0583
    CMP EAX,EDX                         ; 004f0585
    JLE 0x004f06a9                      ; 004f0587
        ;   XREF to: 004f06a9 (CONDITIONAL_JUMP)  ; LAB_004f06a9
    LEA EAX,[EDX + EDX*0x1]             ; 004f058d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f0590
    SUB EAX,EDX                         ; 004f0594
    MOV dword ptr [ESP + 0x24],EAX      ; 004f0596
    XOR EAX,EAX                         ; 004f059a
    MOV dword ptr [ESP + 0xc],EAX       ; 004f059c
    TEST EDX,EDX                        ; 004f05a0
    JL 0x004f0697                       ; 004f05a2
        ;   XREF to: 004f0697 (CONDITIONAL_JUMP)  ; LAB_004f0697
    DEC ECX                             ; 004f05a8
    MOV dword ptr [ESP + 0x10],ECX      ; 004f05a9
    PUSH EBX                            ; 004f05ad
        ;   Label: LAB_004f05ad
    PUSH ESI                            ; 004f05ae
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f05af
    PUSH ECX                            ; 004f05b3
    PUSH EBP                            ; 004f05b4
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f05b5
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f05ba
    SUB EAX,EBX                         ; 004f05bd
    CDQ                                 ; 004f05bf
    XOR EAX,EDX                         ; 004f05c0
    SUB EAX,EDX                         ; 004f05c2
    CMP EAX,dword ptr [0x01e312f4]      ; 004f05c4 | DAT_01e312f4
    JLE 0x004f0607                      ; 004f05ca
        ;   XREF to: 004f0607 (CONDITIONAL_JUMP)  ; LAB_004f0607
    XOR EAX,EAX                         ; 004f05cc
        ;   Label: LAB_004f05cc
    ADD ESP,0x28                        ; 004f05ce
    POP EBP                             ; 004f05d1
    POP EDI                             ; 004f05d2
    POP ESI                             ; 004f05d3
    POP EBX                             ; 004f05d4
    RET                                 ; 004f05d5
    MOV EAX,ESI                         ; 004f05d6
        ;   Label: LAB_004f05d6
    MOV ESI,EDX                         ; 004f05d8
    MOV EDX,EAX                         ; 004f05da
    MOV EAX,ECX                         ; 004f05dc
    MOV ECX,EDI                         ; 004f05de
    MOV EDI,EAX                         ; 004f05e0
    MOV EAX,EBX                         ; 004f05e2
    MOV EBX,dword ptr [ESP + 0x54]      ; 004f05e4
    MOV dword ptr [ESP + 0x54],EAX      ; 004f05e8
    JMP 0x004f056b                      ; 004f05ec
        ;   XREF to: 004f056b (UNCONDITIONAL_JUMP)  ; LAB_004f056b
    MOV EDI,EDX                         ; 004f05f1
        ;   Label: LAB_004f05f1
    MOV EAX,0xffffffff                  ; 004f05f3
    NEG EDI                             ; 004f05f8
    MOV dword ptr [ESP + 0x4],EAX       ; 004f05fa
    MOV dword ptr [ESP + 0x1c],EDI      ; 004f05fe
    JMP 0x004f057b                      ; 004f0602
        ;   XREF to: 004f057b (UNCONDITIONAL_JUMP)  ; LAB_004f057b
    PUSH EBX                            ; 004f0607
        ;   Label: LAB_004f0607
    PUSH ESI                            ; 004f0608
    LEA EAX,[EDI + 0x1]                 ; 004f0609
    PUSH EAX                            ; 004f060c
    PUSH EBP                            ; 004f060d
    MOV dword ptr [ESP + 0x18],EAX      ; 004f060e
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0612
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0617
    SUB EAX,EBX                         ; 004f061a
    CDQ                                 ; 004f061c
    XOR EAX,EDX                         ; 004f061d
    SUB EAX,EDX                         ; 004f061f
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0621 | DAT_01e312f4
    JG 0x004f05cc                       ; 004f0627
        ;   XREF to: 004f05cc (CONDITIONAL_JUMP)  ; LAB_004f05cc
    PUSH EBX                            ; 004f0629
    PUSH ESI                            ; 004f062a
    PUSH EDI                            ; 004f062b
    PUSH EBP                            ; 004f062c
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f062d
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f0632
    MOV ECX,EAX                         ; 004f0635
    MOV dword ptr [ESP],EAX             ; 004f0637
    SUB EAX,EBX                         ; 004f063a
    CDQ                                 ; 004f063c
    XOR EAX,EDX                         ; 004f063d
    SUB EAX,EDX                         ; 004f063f
    CMP EAX,dword ptr [0x01e312f4]      ; 004f0641 | DAT_01e312f4
    JG 0x004f05cc                       ; 004f0647
        ;   XREF to: 004f05cc (CONDITIONAL_JUMP)  ; LAB_004f05cc
    MOV EAX,dword ptr [ESP + 0x24]      ; 004f0649
    MOV EBX,ECX                         ; 004f064d
    TEST EAX,EAX                        ; 004f064f
    JLE 0x004f066e                      ; 004f0651
        ;   XREF to: 004f066e (CONDITIONAL_JUMP)  ; LAB_004f066e
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f0653
    MOV ECX,dword ptr [ESP + 0x24]      ; 004f0657
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f065b
    MOV EDI,dword ptr [ESP + 0x8]       ; 004f065f
    SUB ECX,EAX                         ; 004f0663
    INC EDX                             ; 004f0665
    MOV dword ptr [ESP + 0x24],ECX      ; 004f0666
    MOV dword ptr [ESP + 0x10],EDX      ; 004f066a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f066e
        ;   Label: LAB_004f066e
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f0672
    ADD ESI,EAX                         ; 004f0676
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f0678
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f067c
    ADD EDX,EAX                         ; 004f0680
    INC ECX                             ; 004f0682
    MOV dword ptr [ESP + 0x24],EDX      ; 004f0683
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f0687
    MOV dword ptr [ESP + 0xc],ECX       ; 004f068b
    CMP ECX,EDX                         ; 004f068f
    JLE 0x004f05ad                      ; 004f0691
        ;   XREF to: 004f05ad (CONDITIONAL_JUMP)  ; LAB_004f05ad
    MOV EAX,dword ptr [ESP]             ; 004f0697
        ;   Label: LAB_004f0697
    CMP EAX,dword ptr [ESP + 0x54]      ; 004f069a
    JZ 0x004f0778                       ; 004f069e
        ;   XREF to: 004f0778 (CONDITIONAL_JUMP)  ; LAB_004f0778
    JMP 0x004f05cc                      ; 004f06a4
        ;   XREF to: 004f05cc (UNCONDITIONAL_JUMP)  ; LAB_004f05cc
    ADD EAX,EAX                         ; 004f06a9
        ;   Label: LAB_004f06a9
    SUB EAX,EDX                         ; 004f06ab
    MOV dword ptr [ESP + 0x20],EAX      ; 004f06ad
    XOR EAX,EAX                         ; 004f06b1
    MOV dword ptr [ESP + 0x14],EAX      ; 004f06b3
    TEST EDX,EDX                        ; 004f06b7
    JL 0x004f0697                       ; 004f06b9
        ;   XREF to: 004f0697 (CONDITIONAL_JUMP)  ; LAB_004f0697
    PUSH EBX                            ; 004f06bb
        ;   Label: LAB_004f06bb
    LEA EAX,[ESI + 0x1]                 ; 004f06bc
    PUSH EAX                            ; 004f06bf
    PUSH EDI                            ; 004f06c0
    PUSH EBP                            ; 004f06c1
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f06c2
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f06c7
    SUB EAX,EBX                         ; 004f06ca
    CDQ                                 ; 004f06cc
    XOR EAX,EDX                         ; 004f06cd
    SUB EAX,EDX                         ; 004f06cf
    CMP EAX,dword ptr [0x01e312f4]      ; 004f06d1 | DAT_01e312f4
    JLE 0x004f06e3                      ; 004f06d7
        ;   XREF to: 004f06e3 (CONDITIONAL_JUMP)  ; LAB_004f06e3
    XOR EAX,EAX                         ; 004f06d9
    ADD ESP,0x28                        ; 004f06db
    POP EBP                             ; 004f06de
    POP EDI                             ; 004f06df
    POP ESI                             ; 004f06e0
    POP EBX                             ; 004f06e1
    RET                                 ; 004f06e2
    PUSH EBX                            ; 004f06e3
        ;   Label: LAB_004f06e3
    LEA EAX,[ESI + -0x1]                ; 004f06e4
    PUSH EAX                            ; 004f06e7
    PUSH EDI                            ; 004f06e8
    PUSH EBP                            ; 004f06e9
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f06ea
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f06ef
    SUB EAX,EBX                         ; 004f06f2
    CDQ                                 ; 004f06f4
    XOR EAX,EDX                         ; 004f06f5
    SUB EAX,EDX                         ; 004f06f7
    CMP EAX,dword ptr [0x01e312f4]      ; 004f06f9 | DAT_01e312f4
    JG 0x004f05cc                       ; 004f06ff
        ;   XREF to: 004f05cc (CONDITIONAL_JUMP)  ; LAB_004f05cc
    PUSH EBX                            ; 004f0705
    PUSH ESI                            ; 004f0706
    PUSH EDI                            ; 004f0707
    PUSH EBP                            ; 004f0708
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0 ; 004f0709
        ;   XREF to: 004f04a0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_004f04a0(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 004f070e
    MOV ECX,EAX                         ; 004f0711
    MOV dword ptr [ESP],EAX             ; 004f0713
    SUB EAX,EBX                         ; 004f0716
    CDQ                                 ; 004f0718
    XOR EAX,EDX                         ; 004f0719
    SUB EAX,EDX                         ; 004f071b
    CMP EAX,dword ptr [0x01e312f4]      ; 004f071d | DAT_01e312f4
    JG 0x004f05cc                       ; 004f0723
        ;   XREF to: 004f05cc (CONDITIONAL_JUMP)  ; LAB_004f05cc
    MOV EAX,dword ptr [ESP + 0x20]      ; 004f0729
    MOV EBX,ECX                         ; 004f072d
    TEST EAX,EAX                        ; 004f072f
    JLE 0x004f0747                      ; 004f0731
        ;   XREF to: 004f0747 (CONDITIONAL_JUMP)  ; LAB_004f0747
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f0733
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f0737
    MOV EDX,dword ptr [ESP + 0x4]       ; 004f073b
    SUB ECX,EAX                         ; 004f073f
    ADD ESI,EDX                         ; 004f0741
    MOV dword ptr [ESP + 0x20],ECX      ; 004f0743
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f0747
        ;   Label: LAB_004f0747
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f074b
    MOV EDX,dword ptr [ESP + 0x18]      ; 004f074f
    ADD ECX,EAX                         ; 004f0753
    MOV EAX,dword ptr [ESP + 0x14]      ; 004f0755
    INC EDI                             ; 004f0759
    INC EAX                             ; 004f075a
    MOV dword ptr [ESP + 0x20],ECX      ; 004f075b
    MOV dword ptr [ESP + 0x14],EAX      ; 004f075f
    CMP EAX,EDX                         ; 004f0763
    JLE 0x004f06bb                      ; 004f0765
        ;   XREF to: 004f06bb (CONDITIONAL_JUMP)  ; LAB_004f06bb
    MOV EAX,dword ptr [ESP]             ; 004f076b
    CMP EAX,dword ptr [ESP + 0x54]      ; 004f076e
    JNZ 0x004f05cc                      ; 004f0772
        ;   XREF to: 004f05cc (CONDITIONAL_JUMP)  ; LAB_004f05cc
    MOV EAX,0x1                         ; 004f0778
        ;   Label: LAB_004f0778
    ADD ESP,0x28                        ; 004f077d
    POP EBP                             ; 004f0780
    POP EDI                             ; 004f0781
    POP ESI                             ; 004f0782
    POP EBX                             ; 004f0783
    RET                                 ; 004f0784

