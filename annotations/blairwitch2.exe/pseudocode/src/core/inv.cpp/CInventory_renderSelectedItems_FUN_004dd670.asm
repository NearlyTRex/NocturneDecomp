; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_inv_cpp_CInventory_renderSelectedItems_FUN_004dd670(CInventory *this_ptr)
;
; Parameters:
; CInventory *     Stack[0x4]:4   this_ptr
; Local Variables:
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
;   core_set.cpp_FUN_0052f2a0 at 0052faa8
;
; Referenced Globals:
;   undefined4 DAT_005dba86
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617cd0
;   undefined4 DAT_00617cd4
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.letterbox_mode
;   undefined4 DAT_01cedef4
;   undefined4 DAT_01d02f40
;
; Called Functions:
;   core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80
;   core_inv.cpp_drawItemIconBackground_FUN_004dd4e0
;   core_inv.cpp_drawWeaponIconBackground_FUN_004dd320
;   core_inv.cpp_loadAssets_FUN_004da990
;   crt_math.c_round_FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dd670
        ;   Label: core_inv.cpp_CInventory_renderSelectedItems_FUN_004dd670
    PUSH ESI                            ; 004dd671
    PUSH EDI                            ; 004dd672
    PUSH EBP                            ; 004dd673
    SUB ESP,0x2c                        ; 004dd674
    MOV EBX,dword ptr [ESP + 0x40]      ; 004dd677
    MOV EAX,[0x00616494]                ; 004dd67b | g_CGamePtr | g_CGameInstance
    CMP dword ptr [EAX + 0x244],0x0     ; 004dd680 | g_CGameInstance.letterbox_mode
    JNZ 0x004dd905                      ; 004dd687
        ;   XREF to: 004dd905 (CONDITIONAL_JUMP)  ; LAB_004dd905
    MOV EDX,dword ptr [0x01cedef4]      ; 004dd68d | DAT_01cedef4
    MOV EAX,dword ptr [EBX + 0x4]       ; 004dd693
    CMP EAX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004dd696
    JNZ 0x004dd905                      ; 004dd69d
        ;   XREF to: 004dd905 (CONDITIONAL_JUMP)  ; LAB_004dd905
    MOV ESI,dword ptr [0x006141bc]      ; 004dd6a3 | DAT_006141bc
    CMP ESI,dword ptr [0x01d02f40]      ; 004dd6a9 | DAT_01d02f40
    JNZ 0x004dd90d                      ; 004dd6af
        ;   XREF to: 004dd90d (CONDITIONAL_JUMP)  ; LAB_004dd90d
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd6b5
        ;   Label: LAB_004dd6b5
    CMP dword ptr [EBX + EAX*0x4 + 0x610],0x0 ; 004dd6bb
    JZ 0x004dd7de                       ; 004dd6c3
        ;   XREF to: 004dd7de (CONDITIONAL_JUMP)  ; LAB_004dd7de
    FLD float ptr [EBX + 0x340]         ; 004dd6c9
    FLDZ                                ; 004dd6cf
    FCOMPP                              ; 004dd6d1
    FNSTSW AX                           ; 004dd6d3
    SAHF                                ; 004dd6d5
    JNC 0x004dd7de                      ; 004dd6d6
        ;   XREF to: 004dd7de (CONDITIONAL_JUMP)  ; LAB_004dd7de
    MOV EDX,0x8                         ; 004dd6dc
    MOV EDI,0x50                        ; 004dd6e1
    MOV ESI,dword ptr [0x00617cd0]      ; 004dd6e6 | DAT_00617cd0
    MOV EBP,dword ptr [0x006141bc]      ; 004dd6ec | DAT_006141bc
    MOV ECX,dword ptr [0x00617cd4]      ; 004dd6f2 | DAT_00617cd4
    CMP EBP,0x180                       ; 004dd6f8
    JGE 0x004dd70d                      ; 004dd6fe
        ;   XREF to: 004dd70d (CONDITIONAL_JUMP)  ; LAB_004dd70d
    CMP dword ptr [EBX + 0x454],0x0     ; 004dd700
    JZ 0x004dd917                       ; 004dd707
        ;   XREF to: 004dd917 (CONDITIONAL_JUMP)  ; LAB_004dd917
    MOV EAX,[0x006141b8]                ; 004dd70d | DAT_006141b8
        ;   Label: LAB_004dd70d
    SUB EAX,EDI                         ; 004dd712
    SUB EAX,EDX                         ; 004dd714
    MOV dword ptr [ESP + 0xc],EAX       ; 004dd716
    MOV EAX,[0x006141bc]                ; 004dd71a | DAT_006141bc
    FLD float ptr [EBX + 0x340]         ; 004dd71f
    SUB EAX,EDI                         ; 004dd725
    FLD1                                ; 004dd727
    SUB EAX,EDX                         ; 004dd729
    MOV EDX,0xffff                      ; 004dd72b
    MOV dword ptr [ESP + 0x8],EAX       ; 004dd730
    MOV dword ptr [ESP + 0x20],EDX      ; 004dd734
    FCOMPP                              ; 004dd738
    FNSTSW AX                           ; 004dd73a
    SAHF                                ; 004dd73c
    JBE 0x004dd754                      ; 004dd73d
        ;   XREF to: 004dd754 (CONDITIONAL_JUMP)  ; LAB_004dd754
    FLD float ptr [EBX + 0x340]         ; 004dd73f
    FMUL float ptr [0x005dba86]         ; 004dd745 | DAT_005dba86
    CALL crt_math.c_round_FUN_005b7ff0  ; 004dd74b
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x20]        ; 004dd750
    MOV EAX,[0x006141b8]                ; 004dd754 | DAT_006141b8
        ;   Label: LAB_004dd754
    DEC EAX                             ; 004dd759
    MOV dword ptr [ESP + 0x18],EAX      ; 004dd75a
    MOV EAX,[0x006141bc]                ; 004dd75e | DAT_006141bc
    SUB EAX,ECX                         ; 004dd763
    MOV EDX,dword ptr [ESP + 0x20]      ; 004dd765
    MOV dword ptr [ESP + 0x14],EAX      ; 004dd769
    MOV EAX,0x3                         ; 004dd76d
    ADD EDX,EDX                         ; 004dd772
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd774
    MOV EAX,EDX                         ; 004dd778
    SAR EDX,0x1f                        ; 004dd77a
    IDIV dword ptr [ESP + 0x28]         ; 004dd77d
    MOV EBP,dword ptr [0x006141bc]      ; 004dd781 | DAT_006141bc
    MOV EDX,dword ptr [EBX + 0x454]     ; 004dd787
    DEC EBP                             ; 004dd78d
    TEST EDX,EDX                        ; 004dd78e
    JZ 0x004dd940                       ; 004dd790
        ;   XREF to: 004dd940 (CONDITIONAL_JUMP)  ; LAB_004dd940
    PUSH EAX                            ; 004dd796
    PUSH EBP                            ; 004dd797
    MOV EAX,dword ptr [ESP + 0x20]      ; 004dd798
    PUSH EAX                            ; 004dd79c
    MOV EDX,dword ptr [ESP + 0x20]      ; 004dd79d
    MOV EAX,[0x006141b8]                ; 004dd7a1 | DAT_006141b8
    PUSH EDX                            ; 004dd7a6
    SUB EAX,ESI                         ; 004dd7a7
    PUSH EAX                            ; 004dd7a9
    CALL core_inv.cpp_drawItemIconBackground_FUN_004dd4e0 ; 004dd7aa
        ;   XREF to: 004dd4e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004dd4e0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004dd7af
        ;   Label: LAB_004dd7af
    MOV ECX,dword ptr [ESP + 0x20]      ; 004dd7b2
    PUSH ECX                            ; 004dd7b6
    PUSH 0x3fc90fdb                     ; 004dd7b7
    PUSH EDI                            ; 004dd7bc
    MOV ESI,dword ptr [ESP + 0x14]      ; 004dd7bd
    PUSH ESI                            ; 004dd7c1
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004dd7c2
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd7c6
    PUSH EDI                            ; 004dd7cc
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x610] ; 004dd7cd
    PUSH EBP                            ; 004dd7d4
    PUSH EBX                            ; 004dd7d5
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 ; 004dd7d6
        ;   XREF to: 004dbd80 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 004dd7db
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd7de
        ;   Label: LAB_004dd7de
    CMP dword ptr [EBX + EAX*0x4 + 0x5fc],0x0 ; 004dd7e4
    JZ 0x004dd905                       ; 004dd7ec
        ;   XREF to: 004dd905 (CONDITIONAL_JUMP)  ; LAB_004dd905
    FLD float ptr [EBX + 0x344]         ; 004dd7f2
    FLDZ                                ; 004dd7f8
    FCOMPP                              ; 004dd7fa
    FNSTSW AX                           ; 004dd7fc
    SAHF                                ; 004dd7fe
    JNC 0x004dd905                      ; 004dd7ff
        ;   XREF to: 004dd905 (CONDITIONAL_JUMP)  ; LAB_004dd905
    MOV EAX,0x10                        ; 004dd805
    MOV EDI,0x40                        ; 004dd80a
    MOV ESI,dword ptr [0x00617cd0]      ; 004dd80f | DAT_00617cd0
    MOV EBP,dword ptr [0x006141bc]      ; 004dd815 | DAT_006141bc
    MOV ECX,dword ptr [0x00617cd4]      ; 004dd81b | DAT_00617cd4
    CMP EBP,0x180                       ; 004dd821
    JGE 0x004dd836                      ; 004dd827
        ;   XREF to: 004dd836 (CONDITIONAL_JUMP)  ; LAB_004dd836
    CMP dword ptr [EBX + 0x454],0x0     ; 004dd829
    JZ 0x004dd95e                       ; 004dd830
        ;   XREF to: 004dd95e (CONDITIONAL_JUMP)  ; LAB_004dd95e
    MOV EDX,dword ptr [0x006141b8]      ; 004dd836 | DAT_006141b8
        ;   Label: LAB_004dd836
    SUB EDX,EDI                         ; 004dd83c
    SUB EDX,EAX                         ; 004dd83e
    FLD float ptr [EBX + 0x344]         ; 004dd840
    MOV dword ptr [ESP + 0x4],EDX       ; 004dd846
    MOV EDX,dword ptr [0x006141bc]      ; 004dd84a | DAT_006141bc
    MOV EBP,0xffff                      ; 004dd850
    SUB EDX,EDI                         ; 004dd855
    FLD1                                ; 004dd857
    SUB EDX,EAX                         ; 004dd859
    MOV dword ptr [ESP + 0x24],EBP      ; 004dd85b
    MOV dword ptr [ESP],EDX             ; 004dd85f
    FCOMPP                              ; 004dd862
    FNSTSW AX                           ; 004dd864
    SAHF                                ; 004dd866
    JBE 0x004dd87e                      ; 004dd867
        ;   XREF to: 004dd87e (CONDITIONAL_JUMP)  ; LAB_004dd87e
    FLD float ptr [EBX + 0x344]         ; 004dd869
    FMUL float ptr [0x005dba86]         ; 004dd86f | DAT_005dba86
    CALL crt_math.c_round_FUN_005b7ff0  ; 004dd875
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x24]        ; 004dd87a
    MOV EAX,[0x006141b8]                ; 004dd87e | DAT_006141b8
        ;   Label: LAB_004dd87e
    DEC EAX                             ; 004dd883
    MOV dword ptr [ESP + 0x10],EAX      ; 004dd884
    MOV EAX,[0x006141bc]                ; 004dd888 | DAT_006141bc
    SUB EAX,ECX                         ; 004dd88d
    MOV EDX,dword ptr [ESP + 0x24]      ; 004dd88f
    MOV dword ptr [ESP + 0x1c],EAX      ; 004dd893
    MOV EAX,0x3                         ; 004dd897
    ADD EDX,EDX                         ; 004dd89c
    MOV dword ptr [ESP + 0x28],EAX      ; 004dd89e
    MOV EAX,EDX                         ; 004dd8a2
    SAR EDX,0x1f                        ; 004dd8a4
    IDIV dword ptr [ESP + 0x28]         ; 004dd8a7
    MOV EBP,dword ptr [0x006141bc]      ; 004dd8ab | DAT_006141bc
    MOV EDX,dword ptr [EBX + 0x454]     ; 004dd8b1
    DEC EBP                             ; 004dd8b7
    TEST EDX,EDX                        ; 004dd8b8
    JZ 0x004dd987                       ; 004dd8ba
        ;   XREF to: 004dd987 (CONDITIONAL_JUMP)  ; LAB_004dd987
    PUSH EAX                            ; 004dd8c0
    PUSH EBP                            ; 004dd8c1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004dd8c2
    PUSH EAX                            ; 004dd8c6
    MOV EDX,dword ptr [ESP + 0x28]      ; 004dd8c7
    MOV EAX,[0x006141b8]                ; 004dd8cb | DAT_006141b8
    PUSH EDX                            ; 004dd8d0
    SUB EAX,ESI                         ; 004dd8d1
    PUSH EAX                            ; 004dd8d3
    CALL core_inv.cpp_drawItemIconBackground_FUN_004dd4e0 ; 004dd8d4
        ;   XREF to: 004dd4e0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_drawItemIconBackground_FUN_004dd4e0(int x1, int y1, int x2, int y2, ...)
    ADD ESP,0x14                        ; 004dd8d9
        ;   Label: LAB_004dd8d9
    MOV ECX,dword ptr [ESP + 0x24]      ; 004dd8dc
    PUSH ECX                            ; 004dd8e0
    PUSH 0x0                            ; 004dd8e1
    PUSH EDI                            ; 004dd8e3
    MOV ESI,dword ptr [ESP + 0xc]       ; 004dd8e4
    PUSH ESI                            ; 004dd8e8
    MOV EDI,dword ptr [ESP + 0x14]      ; 004dd8e9
    MOV EAX,dword ptr [EBX + 0x468]     ; 004dd8ed
    PUSH EDI                            ; 004dd8f3
    MOV EBP,dword ptr [EBX + EAX*0x4 + 0x5fc] ; 004dd8f4
    PUSH EBP                            ; 004dd8fb
    PUSH EBX                            ; 004dd8fc
    CALL core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80 ; 004dd8fd
        ;   XREF to: 004dbd80 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_renderItemModel_FUN_004dbd80(CInventory * this_ptr, CDemonActor * item, int viewport_x, int viewport_y, ...)
    ADD ESP,0x1c                        ; 004dd902
    ADD ESP,0x2c                        ; 004dd905
        ;   Label: LAB_004dd905
    POP EBP                             ; 004dd908
    POP EDI                             ; 004dd909
    POP ESI                             ; 004dd90a
    POP EBX                             ; 004dd90b
    RET                                 ; 004dd90c
    CALL core_inv.cpp_loadAssets_FUN_004da990 ; 004dd90d
        ;   XREF to: 004da990 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_loadAssets_FUN_004da990()
        ;   Label: LAB_004dd90d
    JMP 0x004dd6b5                      ; 004dd912
        ;   XREF to: 004dd6b5 (UNCONDITIONAL_JUMP)  ; LAB_004dd6b5
    MOV EDX,ESI                         ; 004dd917
        ;   Label: LAB_004dd917
    MOV EAX,ESI                         ; 004dd919
    SAR EDX,0x1f                        ; 004dd91b
    SUB EAX,EDX                         ; 004dd91e
    SAR EAX,0x1                         ; 004dd920
    MOV ESI,EAX                         ; 004dd922
    MOV EDX,ECX                         ; 004dd924
    MOV EAX,ECX                         ; 004dd926
    SAR EDX,0x1f                        ; 004dd928
    SUB EAX,EDX                         ; 004dd92b
    SAR EAX,0x1                         ; 004dd92d
    MOV EDI,0x28                        ; 004dd92f
    MOV EDX,0x4                         ; 004dd934
    MOV ECX,EAX                         ; 004dd939
    JMP 0x004dd70d                      ; 004dd93b
        ;   XREF to: 004dd70d (UNCONDITIONAL_JUMP)  ; LAB_004dd70d
    PUSH EAX                            ; 004dd940
        ;   Label: LAB_004dd940
    PUSH EBP                            ; 004dd941
    MOV ESI,dword ptr [ESP + 0x20]      ; 004dd942
    PUSH ESI                            ; 004dd946
    MOV EBP,dword ptr [ESP + 0x20]      ; 004dd947
    MOV EAX,[0x006141b8]                ; 004dd94b | DAT_006141b8
    PUSH EBP                            ; 004dd950
    SUB EAX,ECX                         ; 004dd951
    PUSH EAX                            ; 004dd953
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004dd320 ; 004dd954
        ;   XREF to: 004dd320 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_drawWeaponIconBackground_FUN_004dd320()
    JMP 0x004dd7af                      ; 004dd959
        ;   XREF to: 004dd7af (UNCONDITIONAL_JUMP)  ; LAB_004dd7af
    MOV EDX,ESI                         ; 004dd95e
        ;   Label: LAB_004dd95e
    MOV EAX,ESI                         ; 004dd960
    SAR EDX,0x1f                        ; 004dd962
    SUB EAX,EDX                         ; 004dd965
    SAR EAX,0x1                         ; 004dd967
    MOV ESI,EAX                         ; 004dd969
    MOV EDX,ECX                         ; 004dd96b
    MOV EAX,ECX                         ; 004dd96d
    SAR EDX,0x1f                        ; 004dd96f
    SUB EAX,EDX                         ; 004dd972
    SAR EAX,0x1                         ; 004dd974
    MOV EDI,0x20                        ; 004dd976
    MOV ECX,EAX                         ; 004dd97b
    MOV EAX,0x8                         ; 004dd97d
    JMP 0x004dd836                      ; 004dd982
        ;   XREF to: 004dd836 (UNCONDITIONAL_JUMP)  ; LAB_004dd836
    PUSH EAX                            ; 004dd987
        ;   Label: LAB_004dd987
    PUSH EBP                            ; 004dd988
    MOV ESI,dword ptr [ESP + 0x18]      ; 004dd989
    PUSH ESI                            ; 004dd98d
    MOV EBP,dword ptr [ESP + 0x28]      ; 004dd98e
    MOV EAX,[0x006141b8]                ; 004dd992 | DAT_006141b8
    PUSH EBP                            ; 004dd997
    SUB EAX,ECX                         ; 004dd998
    PUSH EAX                            ; 004dd99a
    CALL core_inv.cpp_drawWeaponIconBackground_FUN_004dd320 ; 004dd99b
        ;   XREF to: 004dd320 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_drawWeaponIconBackground_FUN_004dd320()
    JMP 0x004dd8d9                      ; 004dd9a0
        ;   XREF to: 004dd8d9 (UNCONDITIONAL_JUMP)  ; LAB_004dd8d9

