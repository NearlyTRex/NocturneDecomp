; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b76c0(CGame *this_ptr,SPlayerInput *player_control)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
; SPlayerInput *   Stack[0x8]:4   player_control
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_game.cpp_CGame_playerControls_FUN_004b7050 at 004b7097
;   core_game.cpp_CGame_processJoystickControls_FUN_004b7510 at 004b7528
;   core_game.cpp_CGame_processMouseControls_FUN_004b80a0 at 004b80b4
;
; Referenced Globals:
;   undefined4 DAT_005d78c3
;   undefined4 DAT_005d78c7
;   undefined4 DAT_005d78cb
;   undefined4 DAT_005d78cf
;   undefined4 DAT_005d78d3
;   undefined4 DAT_005d78db
;   undefined4 DAT_005d78e3
;   undefined4 DAT_005d78e7
;   undefined4 DAT_005d78eb
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_00617dd4
;   undefined4 g_CDocClassInfo.name_hash
;   undefined4 DAT_01c37790
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 DAT_01cb7528
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60
;   core_inv.cpp_CInventory_selectItem_FUN_004dbb50
;   core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0
;   core_inv.cpp_FUN_004db9d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b76c0
        ;   Label: core_game.cpp_FUN_004b76c0
    PUSH ESI                            ; 004b76c1
    PUSH EDI                            ; 004b76c2
    PUSH EBP                            ; 004b76c3
    SUB ESP,0x14                        ; 004b76c4
    MOV EBX,dword ptr [ESP + 0x28]      ; 004b76c7
    MOV ESI,dword ptr [ESP + 0x2c]      ; 004b76cb
    CMP dword ptr [EBX + 0x29c],0x0     ; 004b76cf
    JNZ 0x004b7bc0                      ; 004b76d6
        ;   XREF to: 004b7bc0 (CONDITIONAL_JUMP)  ; LAB_004b7bc0
    MOV dword ptr [ESI + 0x24],0x0      ; 004b76dc
        ;   Label: LAB_004b76dc
    MOV ECX,dword ptr [EBX + 0x38]      ; 004b76e3
    LEA EDX,[ESI + 0x24]                ; 004b76e6
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b76e9
    CMP byte ptr [ECX + 0x1c37790],0x0  ; 004b76ec | DAT_01c37790
    JZ 0x004b7beb                       ; 004b76f3
        ;   XREF to: 004b7beb (CONDITIONAL_JUMP)  ; LAB_004b7beb
    FLD float ptr [EDX]                 ; 004b76f9
    FCOMP float ptr [0x005d78c7]        ; 004b76fb | DAT_005d78c7
    FNSTSW AX                           ; 004b7701
    SAHF                                ; 004b7703
    JBE 0x004b772c                      ; 004b7704
        ;   XREF to: 004b772c (CONDITIONAL_JUMP)  ; LAB_004b772c
    MOV EAX,[0x00616494]                ; 004b7706 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b770b | g_CGameInstance.delta_time_float
    FDIV float ptr [0x005d78c3]         ; 004b7711 | DAT_005d78c3
    FSUBR float ptr [EDX]               ; 004b7717
    FST float ptr [EDX]                 ; 004b7719
    FCOMP float ptr [0x005d78c7]        ; 004b771b | DAT_005d78c7
    FNSTSW AX                           ; 004b7721
    SAHF                                ; 004b7723
    JNC 0x004b772c                      ; 004b7724
        ;   XREF to: 004b772c (CONDITIONAL_JUMP)  ; LAB_004b772c
    MOV dword ptr [EDX],0xbf800000      ; 004b7726
    MOV EAX,dword ptr [EBX + 0x34]      ; 004b772c
        ;   Label: LAB_004b772c
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b772f | DAT_01c37790
    JZ 0x004b7c91                       ; 004b7736
        ;   XREF to: 004b7c91 (CONDITIONAL_JUMP)  ; LAB_004b7c91
    MOV EAX,dword ptr [EBX + 0x44]      ; 004b773c
    LEA EDX,[ESI + 0x24]                ; 004b773f
    MOV ECX,dword ptr [EBX + 0x40]      ; 004b7742
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7745 | DAT_01c37790
    JZ 0x004b7c30                       ; 004b774c
        ;   XREF to: 004b7c30 (CONDITIONAL_JUMP)  ; LAB_004b7c30
    FLD float ptr [EDX]                 ; 004b7752
    FCOMP float ptr [0x005d78c7]        ; 004b7754 | DAT_005d78c7
    FNSTSW AX                           ; 004b775a
    SAHF                                ; 004b775c
    JBE 0x004b7785                      ; 004b775d
        ;   XREF to: 004b7785 (CONDITIONAL_JUMP)  ; LAB_004b7785
    MOV EAX,[0x00616494]                ; 004b775f | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7764 | g_CGameInstance.delta_time_float
    FDIV float ptr [0x005d78c3]         ; 004b776a | DAT_005d78c3
    FSUBR float ptr [EDX]               ; 004b7770
    FST float ptr [EDX]                 ; 004b7772
    FCOMP float ptr [0x005d78c7]        ; 004b7774 | DAT_005d78c7
    FNSTSW AX                           ; 004b777a
    SAHF                                ; 004b777c
    JNC 0x004b7785                      ; 004b777d
        ;   XREF to: 004b7785 (CONDITIONAL_JUMP)  ; LAB_004b7785
    MOV dword ptr [EDX],0xbf800000      ; 004b777f
    MOV EAX,[0x00616494]                ; 004b7785 | g_CGamePtr
        ;   Label: LAB_004b7785
    FLD float ptr [EAX + 0x284]         ; 004b778a | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b7790 | DAT_005d78cb
    FDIV float ptr [0x005d78cf]         ; 004b7796 | DAT_005d78cf
    FLDZ                                ; 004b779c
    LEA EDX,[ESI + 0x28]                ; 004b779e
    FXCH                                ; 004b77a1
    FSTP float ptr [ESP + 0x10]         ; 004b77a3
    FCOMP float ptr [EDX]               ; 004b77a7
    FNSTSW AX                           ; 004b77a9
    SAHF                                ; 004b77ab
    JBE 0x004b7c75                      ; 004b77ac
        ;   XREF to: 004b7c75 (CONDITIONAL_JUMP)  ; LAB_004b7c75
    FLD float ptr [EDX]                 ; 004b77b2
    FADD float ptr [ESP + 0x10]         ; 004b77b4
    FLDZ                                ; 004b77b8
        ;   Label: LAB_004b77b8
    FXCH                                ; 004b77ba
    FSTP float ptr [EDX]                ; 004b77bc
    FCOMP float ptr [EDX]               ; 004b77be
    FNSTSW AX                           ; 004b77c0
    SAHF                                ; 004b77c2
    JNC 0x004b77cb                      ; 004b77c3
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    MOV dword ptr [EDX],0x0             ; 004b77c5
        ;   Label: LAB_004b77c5
    MOV EAX,dword ptr [EBX + 0x74]      ; 004b77cb
        ;   Label: LAB_004b77cb
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b77ce | DAT_01c37790
    JZ 0x004b7db2                       ; 004b77d5
        ;   XREF to: 004b7db2 (CONDITIONAL_JUMP)  ; LAB_004b7db2
    FILD dword ptr [EBX + 0xb4]         ; 004b77db
        ;   Label: LAB_004b77db
    FMUL double ptr [0x005d78eb]        ; 004b77e1 | DAT_005d78eb
    FMUL double ptr [0x005d78db]        ; 004b77e7 | DAT_005d78db
    LEA EDX,[ESI + 0x2c]                ; 004b77ed
    MOV ECX,dword ptr [EBX + 0x74]      ; 004b77f0
    MOV EAX,dword ptr [EBX + 0x78]      ; 004b77f3
    FSTP float ptr [ESP]                ; 004b77f6
    CMP byte ptr [ECX + 0x1c37790],0x0  ; 004b77f9 | DAT_01c37790
    JZ 0x004b7e0d                       ; 004b7800
        ;   XREF to: 004b7e0d (CONDITIONAL_JUMP)  ; LAB_004b7e0d
    FLD float ptr [EDX]                 ; 004b7806
    FCOMP float ptr [0x005d78e3]        ; 004b7808 | DAT_005d78e3
    FNSTSW AX                           ; 004b780e
    SAHF                                ; 004b7810
    JBE 0x004b783c                      ; 004b7811
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    MOV EAX,[0x00616494]                ; 004b7813 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7818 | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b781e | DAT_005d78cb
    FDIV float ptr [ESP]                ; 004b7824
    FSUBR float ptr [EDX]               ; 004b7827
    FST float ptr [EDX]                 ; 004b7829
    FCOMP float ptr [0x005d78e3]        ; 004b782b | DAT_005d78e3
    FNSTSW AX                           ; 004b7831
    SAHF                                ; 004b7833
    JNC 0x004b783c                      ; 004b7834
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    MOV dword ptr [EDX],0xbe800000      ; 004b7836
    CMP dword ptr [EBX + 0xac],0x0      ; 004b783c
        ;   Label: LAB_004b783c
    JZ 0x004b7e77                       ; 004b7843
        ;   XREF to: 004b7e77 (CONDITIONAL_JUMP)  ; LAB_004b7e77
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b7849
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b784c | DAT_01c37790
    SETZ AL                             ; 004b7853
    AND EAX,0xff                        ; 004b7856
        ;   Label: LAB_004b7856
    MOV dword ptr [ESI + 0x8],EAX       ; 004b785b
    MOV EAX,dword ptr [EBX + 0x28]      ; 004b785e
    MOV DL,byte ptr [EAX + 0x1cb7528]   ; 004b7861 | DAT_01cb7528
    MOV DH,byte ptr [EAX + 0x1c37790]   ; 004b7867 | DAT_01c37790
    CMP DL,DH                           ; 004b786d
    JZ 0x004b787a                       ; 004b786f
        ;   XREF to: 004b787a (CONDITIONAL_JUMP)  ; LAB_004b787a
    MOV AL,DH                           ; 004b7871
    AND EAX,0xff                        ; 004b7873
    MOV dword ptr [ESI],EAX             ; 004b7878
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004b787a
        ;   Label: LAB_004b787a
    MOV DL,byte ptr [EAX + 0x1cb7528]   ; 004b787d | DAT_01cb7528
    MOV DH,byte ptr [EAX + 0x1c37790]   ; 004b7883 | DAT_01c37790
    LEA ECX,[ESI + 0x4]                 ; 004b7889
    CMP DL,DH                           ; 004b788c
    JZ 0x004b7899                       ; 004b788e
        ;   XREF to: 004b7899 (CONDITIONAL_JUMP)  ; LAB_004b7899
    MOV AL,DH                           ; 004b7890
    AND EAX,0xff                        ; 004b7892
    MOV dword ptr [ECX],EAX             ; 004b7897
    MOV EAX,[0x01cedef4]                ; 004b7899 | DAT_01cedef4
        ;   Label: LAB_004b7899
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b789e
    PUSH EAX                            ; 004b78a5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004b78a6
    CALL dword ptr [EDX + 0x114]        ; 004b78ac
    ADD ESP,0x4                         ; 004b78b2
    TEST EAX,EAX                        ; 004b78b5
    JNZ 0x004b7e85                      ; 004b78b7
        ;   XREF to: 004b7e85 (CONDITIONAL_JUMP)  ; LAB_004b7e85
    MOV EAX,dword ptr [EBX + 0x48]      ; 004b78bd
    MOV DL,byte ptr [EAX + 0x1cb7528]   ; 004b78c0 | DAT_01cb7528
    MOV DH,byte ptr [EAX + 0x1c37790]   ; 004b78c6 | DAT_01c37790
    LEA ECX,[ESI + 0xc]                 ; 004b78cc
    CMP DL,DH                           ; 004b78cf
    JZ 0x004b78dc                       ; 004b78d1
        ;   XREF to: 004b78dc (CONDITIONAL_JUMP)  ; LAB_004b78dc
    MOV AL,DH                           ; 004b78d3
    AND EAX,0xff                        ; 004b78d5
    MOV dword ptr [ECX],EAX             ; 004b78da
    MOV EAX,dword ptr [EBX + 0x4c]      ; 004b78dc
        ;   Label: LAB_004b78dc
    MOV CL,byte ptr [EAX + 0x1cb7528]   ; 004b78df | DAT_01cb7528
    MOV CH,byte ptr [EAX + 0x1c37790]   ; 004b78e5 | DAT_01c37790
    LEA EDX,[ESI + 0x10]                ; 004b78eb
    CMP CL,CH                           ; 004b78ee
    JZ 0x004b7e91                       ; 004b78f0
        ;   XREF to: 004b7e91 (CONDITIONAL_JUMP)  ; LAB_004b7e91
    MOV AL,CH                           ; 004b78f6
    AND EAX,0xff                        ; 004b78f8
    MOV dword ptr [EDX],EAX             ; 004b78fd
    MOV EAX,dword ptr [EBX + 0x50]      ; 004b78ff
        ;   Label: LAB_004b78ff
    MOV CL,byte ptr [EAX + 0x1cb7528]   ; 004b7902 | DAT_01cb7528
    MOV CH,byte ptr [EAX + 0x1c37790]   ; 004b7908 | DAT_01c37790
    LEA EDX,[ESI + 0x14]                ; 004b790e
    CMP CL,CH                           ; 004b7911
    JZ 0x004b7e9c                       ; 004b7913
        ;   XREF to: 004b7e9c (CONDITIONAL_JUMP)  ; LAB_004b7e9c
    MOV AL,CH                           ; 004b7919
    AND EAX,0xff                        ; 004b791b
    MOV dword ptr [EDX],EAX             ; 004b7920
    MOV EAX,dword ptr [EBX + 0x68]      ; 004b7922
        ;   Label: LAB_004b7922
    MOV CL,byte ptr [EAX + 0x1cb7528]   ; 004b7925 | DAT_01cb7528
    MOV CH,byte ptr [EAX + 0x1c37790]   ; 004b792b | DAT_01c37790
    LEA EDX,[ESI + 0x18]                ; 004b7931
    CMP CL,CH                           ; 004b7934
    JZ 0x004b7ea7                       ; 004b7936
        ;   XREF to: 004b7ea7 (CONDITIONAL_JUMP)  ; LAB_004b7ea7
    MOV AL,CH                           ; 004b793c
    AND EAX,0xff                        ; 004b793e
    MOV dword ptr [EDX],EAX             ; 004b7943
    MOV EAX,dword ptr [EBX + 0x70]      ; 004b7945
        ;   Label: LAB_004b7945
    MOV CL,byte ptr [EAX + 0x1cb7528]   ; 004b7948 | DAT_01cb7528
    MOV CH,byte ptr [EAX + 0x1c37790]   ; 004b794e | DAT_01c37790
    LEA EDX,[ESI + 0x20]                ; 004b7954
    CMP CL,CH                           ; 004b7957
    JZ 0x004b7eb2                       ; 004b7959
        ;   XREF to: 004b7eb2 (CONDITIONAL_JUMP)  ; LAB_004b7eb2
    MOV AL,CH                           ; 004b795f
    AND EAX,0xff                        ; 004b7961
    MOV dword ptr [EDX],EAX             ; 004b7966
    MOV EAX,dword ptr [EBX + 0xaf0]     ; 004b7968
        ;   Label: LAB_004b7968
    MOV DL,byte ptr [EAX + 0x1cb7528]   ; 004b796e | DAT_01cb7528
    MOV DH,byte ptr [EAX + 0x1c37790]   ; 004b7974 | DAT_01c37790
    ADD ESI,0x30                        ; 004b797a
    CMP DL,DH                           ; 004b797d
    JZ 0x004b7ebd                       ; 004b797f
        ;   XREF to: 004b7ebd (CONDITIONAL_JUMP)  ; LAB_004b7ebd
    MOV AL,DH                           ; 004b7985
    AND EAX,0xff                        ; 004b7987
    MOV dword ptr [ESI],EAX             ; 004b798c
    MOV ECX,dword ptr [EBX + 0x90]      ; 004b798e
        ;   Label: LAB_004b798e
    MOV EAX,[0x00617dd4]                ; 004b7994 | DAT_00617dd4
    PUSH ECX                            ; 004b7999
    MOV EDX,dword ptr [EAX]             ; 004b799a | DAT_01d02f84
    PUSH EAX                            ; 004b799c | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b799d
    ADD ESP,0x8                         ; 004b79a0
    TEST EAX,EAX                        ; 004b79a3
    JZ 0x004b79de                       ; 004b79a5
        ;   XREF to: 004b79de (CONDITIONAL_JUMP)  ; LAB_004b79de
    MOV ESI,dword ptr [0x01b4d2ec]      ; 004b79a7 | g_CDocClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004b79ad | DAT_01cedef4
    PUSH ESI                            ; 004b79b2
    MOV EDI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b79b3
    PUSH EDI                            ; 004b79ba
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b79bb
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b79c0
    TEST EAX,EAX                        ; 004b79c3
    JZ 0x004b7ec8                       ; 004b79c5
        ;   XREF to: 004b7ec8 (CONDITIONAL_JUMP)  ; LAB_004b7ec8
    FLD float ptr [EAX + 0x259b0]       ; 004b79cb
    FLDZ                                ; 004b79d1
    FCOMPP                              ; 004b79d3
    FNSTSW AX                           ; 004b79d5
    SAHF                                ; 004b79d7
    JNC 0x004b7ec8                      ; 004b79d8
        ;   XREF to: 004b7ec8 (CONDITIONAL_JUMP)  ; LAB_004b7ec8
    MOV EBP,dword ptr [EBX + 0x94]      ; 004b79de
        ;   Label: LAB_004b79de
    MOV EAX,[0x00617dd4]                ; 004b79e4 | DAT_00617dd4
    PUSH EBP                            ; 004b79e9
    MOV EDX,dword ptr [EAX]             ; 004b79ea | DAT_01d02f84
    PUSH EAX                            ; 004b79ec | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b79ed
    ADD ESP,0x8                         ; 004b79f0
    TEST EAX,EAX                        ; 004b79f3
    JZ 0x004b7a2d                       ; 004b79f5
        ;   XREF to: 004b7a2d (CONDITIONAL_JUMP)  ; LAB_004b7a2d
    MOV EAX,[0x01b4d2ec]                ; 004b79f7 | g_CDocClassInfo.name_hash
    PUSH EAX                            ; 004b79fc
    MOV EAX,[0x01cedef4]                ; 004b79fd | DAT_01cedef4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7a02
    PUSH EDX                            ; 004b7a09
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b7a0a
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b7a0f
    TEST EAX,EAX                        ; 004b7a12
    JZ 0x004b7eed                       ; 004b7a14
        ;   XREF to: 004b7eed (CONDITIONAL_JUMP)  ; LAB_004b7eed
    FLD float ptr [EAX + 0x259b0]       ; 004b7a1a
    FLDZ                                ; 004b7a20
    FCOMPP                              ; 004b7a22
    FNSTSW AX                           ; 004b7a24
    SAHF                                ; 004b7a26
    JNC 0x004b7eed                      ; 004b7a27
        ;   XREF to: 004b7eed (CONDITIONAL_JUMP)  ; LAB_004b7eed
    MOV ECX,dword ptr [EBX + 0x98]      ; 004b7a2d
        ;   Label: LAB_004b7a2d
    MOV EAX,[0x00617dd4]                ; 004b7a33 | DAT_00617dd4
    PUSH ECX                            ; 004b7a38
    MOV EDX,dword ptr [EAX]             ; 004b7a39 | DAT_01d02f84
    PUSH EAX                            ; 004b7a3b | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7a3c
    ADD ESP,0x8                         ; 004b7a3f
    TEST EAX,EAX                        ; 004b7a42
    JZ 0x004b7a62                       ; 004b7a44
        ;   XREF to: 004b7a62 (CONDITIONAL_JUMP)  ; LAB_004b7a62
    MOV EAX,[0x01cedef4]                ; 004b7a46 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7a4b
    PUSH 0x1                            ; 004b7a52
    ADD EAX,0x2437c                     ; 004b7a54
    PUSH EAX                            ; 004b7a59
    CALL core_inv.cpp_CInventory_selectItem_FUN_004dbb50 ; 004b7a5a
        ;   XREF to: 004dbb50 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectItem_FUN_004dbb50(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004b7a5f
    MOV ESI,dword ptr [EBX + 0x9c]      ; 004b7a62
        ;   Label: LAB_004b7a62
    MOV EAX,[0x00617dd4]                ; 004b7a68 | DAT_00617dd4
    PUSH ESI                            ; 004b7a6d
    MOV EDX,dword ptr [EAX]             ; 004b7a6e | DAT_01d02f84
    PUSH EAX                            ; 004b7a70 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7a71
    ADD ESP,0x8                         ; 004b7a74
    TEST EAX,EAX                        ; 004b7a77
    JZ 0x004b7a97                       ; 004b7a79
        ;   XREF to: 004b7a97 (CONDITIONAL_JUMP)  ; LAB_004b7a97
    MOV EAX,[0x01cedef4]                ; 004b7a7b | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7a80
    PUSH -0x1                           ; 004b7a87
    ADD EAX,0x2437c                     ; 004b7a89
    PUSH EAX                            ; 004b7a8e
    CALL core_inv.cpp_CInventory_selectItem_FUN_004dbb50 ; 004b7a8f
        ;   XREF to: 004dbb50 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_selectItem_FUN_004dbb50(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004b7a94
    MOV EDI,dword ptr [EBX + 0xa4]      ; 004b7a97
        ;   Label: LAB_004b7a97
    MOV EAX,[0x00617dd4]                ; 004b7a9d | DAT_00617dd4
    PUSH EDI                            ; 004b7aa2
    MOV EDX,dword ptr [EAX]             ; 004b7aa3 | DAT_01d02f84
    PUSH EAX                            ; 004b7aa5 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7aa6
    ADD ESP,0x8                         ; 004b7aa9
    TEST EAX,EAX                        ; 004b7aac
    JZ 0x004b7acc                       ; 004b7aae
        ;   XREF to: 004b7acc (CONDITIONAL_JUMP)  ; LAB_004b7acc
    MOV EAX,[0x01cedef4]                ; 004b7ab0 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7ab5
    PUSH 0x1                            ; 004b7abc
    ADD EAX,0x2437c                     ; 004b7abe
    PUSH EAX                            ; 004b7ac3
    CALL core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60 ; 004b7ac4
        ;   XREF to: 004dbc60 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004dbc60(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004b7ac9
    MOV EBP,dword ptr [EBX + 0xa0]      ; 004b7acc
        ;   Label: LAB_004b7acc
    MOV EAX,[0x00617dd4]                ; 004b7ad2 | DAT_00617dd4
    PUSH EBP                            ; 004b7ad7
    MOV EDX,dword ptr [EAX]             ; 004b7ad8 | DAT_01d02f84
    PUSH EAX                            ; 004b7ada | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7adb
    ADD ESP,0x8                         ; 004b7ade
    TEST EAX,EAX                        ; 004b7ae1
    JZ 0x004b7aff                       ; 004b7ae3
        ;   XREF to: 004b7aff (CONDITIONAL_JUMP)  ; LAB_004b7aff
    MOV EAX,[0x01cedef4]                ; 004b7ae5 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7aea
    ADD EAX,0x2437c                     ; 004b7af1
    PUSH EAX                            ; 004b7af6
    CALL core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0 ; 004b7af7
        ;   XREF to: 004defa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004b7afc
    MOV ECX,dword ptr [EBX + 0x7c]      ; 004b7aff
        ;   Label: LAB_004b7aff
    MOV EAX,[0x00617dd4]                ; 004b7b02 | DAT_00617dd4
    PUSH ECX                            ; 004b7b07
    MOV EDX,dword ptr [EAX]             ; 004b7b08 | DAT_01d02f84
    PUSH EAX                            ; 004b7b0a | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7b0b
    ADD ESP,0x8                         ; 004b7b0e
    TEST EAX,EAX                        ; 004b7b11
    JZ 0x004b7b4c                       ; 004b7b13
        ;   XREF to: 004b7b4c (CONDITIONAL_JUMP)  ; LAB_004b7b4c
    MOV ESI,dword ptr [0x01b4d2ec]      ; 004b7b15 | g_CDocClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004b7b1b | DAT_01cedef4
    PUSH ESI                            ; 004b7b20
    MOV EDI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7b21
    PUSH EDI                            ; 004b7b28
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b7b29
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b7b2e
    TEST EAX,EAX                        ; 004b7b31
    JZ 0x004b7f12                       ; 004b7b33
        ;   XREF to: 004b7f12 (CONDITIONAL_JUMP)  ; LAB_004b7f12
    FLD float ptr [EAX + 0x259b0]       ; 004b7b39
    FLDZ                                ; 004b7b3f
    FCOMPP                              ; 004b7b41
    FNSTSW AX                           ; 004b7b43
    SAHF                                ; 004b7b45
    JNC 0x004b7f12                      ; 004b7b46
        ;   XREF to: 004b7f12 (CONDITIONAL_JUMP)  ; LAB_004b7f12
    MOV EBP,dword ptr [EBX + 0x80]      ; 004b7b4c
        ;   Label: LAB_004b7b4c
    MOV EAX,[0x00617dd4]                ; 004b7b52 | DAT_00617dd4
    PUSH EBP                            ; 004b7b57
    MOV EDX,dword ptr [EAX]             ; 004b7b58 | DAT_01d02f84
    PUSH EAX                            ; 004b7b5a | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7b5b
    ADD ESP,0x8                         ; 004b7b5e
    TEST EAX,EAX                        ; 004b7b61
    JZ 0x004b7b9b                       ; 004b7b63
        ;   XREF to: 004b7b9b (CONDITIONAL_JUMP)  ; LAB_004b7b9b
    MOV EAX,[0x01b4d2ec]                ; 004b7b65 | g_CDocClassInfo.name_hash
    PUSH EAX                            ; 004b7b6a
    MOV EAX,[0x01cedef4]                ; 004b7b6b | DAT_01cedef4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7b70
    PUSH EDX                            ; 004b7b77
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b7b78
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b7b7d
    TEST EAX,EAX                        ; 004b7b80
    JZ 0x004b7f37                       ; 004b7b82
        ;   XREF to: 004b7f37 (CONDITIONAL_JUMP)  ; LAB_004b7f37
    FLD float ptr [EAX + 0x259b0]       ; 004b7b88
    FLDZ                                ; 004b7b8e
    FCOMPP                              ; 004b7b90
    FNSTSW AX                           ; 004b7b92
    SAHF                                ; 004b7b94
    JNC 0x004b7f37                      ; 004b7b95
        ;   XREF to: 004b7f37 (CONDITIONAL_JUMP)  ; LAB_004b7f37
    MOV ECX,dword ptr [EBX + 0x84]      ; 004b7b9b
        ;   Label: LAB_004b7b9b
    MOV EAX,[0x00617dd4]                ; 004b7ba1 | DAT_00617dd4
    PUSH ECX                            ; 004b7ba6
    MOV EDX,dword ptr [EAX]             ; 004b7ba7 | DAT_01d02f84
    PUSH EAX                            ; 004b7ba9 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7baa
    ADD ESP,0x8                         ; 004b7bad
    TEST EAX,EAX                        ; 004b7bb0
    JNZ 0x004b7f5c                      ; 004b7bb2
        ;   XREF to: 004b7f5c (CONDITIONAL_JUMP)  ; LAB_004b7f5c
    ADD ESP,0x14                        ; 004b7bb8
        ;   Label: LAB_004b7bb8
    POP EBP                             ; 004b7bbb
    POP EDI                             ; 004b7bbc
    POP ESI                             ; 004b7bbd
    POP EBX                             ; 004b7bbe
    RET                                 ; 004b7bbf
    PUSH 0x200                          ; 004b7bc0
        ;   Label: LAB_004b7bc0
    MOV EAX,[0x00617dd4]                ; 004b7bc5 | DAT_00617dd4
    PUSH EAX                            ; 004b7bca | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004b7bcb | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7bcd
    ADD ESP,0x8                         ; 004b7bd0
    MOV EAX,[0x00617dd4]                ; 004b7bd3 | DAT_00617dd4
    PUSH 0x201                          ; 004b7bd8
    MOV EDX,dword ptr [EAX]             ; 004b7bdd | DAT_01d02f84
    PUSH EAX                            ; 004b7bdf | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004b7be0
    ADD ESP,0x8                         ; 004b7be3
    JMP 0x004b76dc                      ; 004b7be6
        ;   XREF to: 004b76dc (UNCONDITIONAL_JUMP)  ; LAB_004b76dc
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7beb | DAT_01c37790
        ;   Label: LAB_004b7beb
    JZ 0x004b772c                       ; 004b7bf2
        ;   XREF to: 004b772c (CONDITIONAL_JUMP)  ; LAB_004b772c
    CMP dword ptr [EDX],0x3f800000      ; 004b7bf8
    JGE 0x004b772c                      ; 004b7bfe
        ;   XREF to: 004b772c (CONDITIONAL_JUMP)  ; LAB_004b772c
    MOV EAX,[0x00616494]                ; 004b7c04 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7c09 | g_CGameInstance.delta_time_float
    FDIV float ptr [0x005d78c3]         ; 004b7c0f | DAT_005d78c3
    FADD float ptr [EDX]                ; 004b7c15
    FSTP float ptr [EDX]                ; 004b7c17
    CMP dword ptr [EDX],0x3f800000      ; 004b7c19
    JLE 0x004b772c                      ; 004b7c1f
        ;   XREF to: 004b772c (CONDITIONAL_JUMP)  ; LAB_004b772c
    MOV dword ptr [EDX],0x3f800000      ; 004b7c25
    JMP 0x004b772c                      ; 004b7c2b
        ;   XREF to: 004b772c (UNCONDITIONAL_JUMP)  ; LAB_004b772c
    CMP byte ptr [ECX + 0x1c37790],0x0  ; 004b7c30 | DAT_01c37790
        ;   Label: LAB_004b7c30
    JZ 0x004b7785                       ; 004b7c37
        ;   XREF to: 004b7785 (CONDITIONAL_JUMP)  ; LAB_004b7785
    CMP dword ptr [EDX],0x3f800000      ; 004b7c3d
    JGE 0x004b7785                      ; 004b7c43
        ;   XREF to: 004b7785 (CONDITIONAL_JUMP)  ; LAB_004b7785
    MOV EAX,[0x00616494]                ; 004b7c49 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7c4e | g_CGameInstance.delta_time_float
    FDIV float ptr [0x005d78c3]         ; 004b7c54 | DAT_005d78c3
    FADD float ptr [EDX]                ; 004b7c5a
    FSTP float ptr [EDX]                ; 004b7c5c
    CMP dword ptr [EDX],0x3f800000      ; 004b7c5e
    JLE 0x004b7785                      ; 004b7c64
        ;   XREF to: 004b7785 (CONDITIONAL_JUMP)  ; LAB_004b7785
    MOV dword ptr [EDX],0x3f800000      ; 004b7c6a
    JMP 0x004b7785                      ; 004b7c70
        ;   XREF to: 004b7785 (UNCONDITIONAL_JUMP)  ; LAB_004b7785
    FLD float ptr [EDX]                 ; 004b7c75
        ;   Label: LAB_004b7c75
    FSUB float ptr [ESP + 0x10]         ; 004b7c77
    FLDZ                                ; 004b7c7b
    FXCH                                ; 004b7c7d
    FSTP float ptr [EDX]                ; 004b7c7f
    FCOMP float ptr [EDX]               ; 004b7c81
    FNSTSW AX                           ; 004b7c83
    SAHF                                ; 004b7c85
    JBE 0x004b77cb                      ; 004b7c86
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    JMP 0x004b77c5                      ; 004b7c8c
        ;   XREF to: 004b77c5 (UNCONDITIONAL_JUMP)  ; LAB_004b77c5
    MOV EAX,dword ptr [EBX + 0x44]      ; 004b7c91
        ;   Label: LAB_004b7c91
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7c94 | DAT_01c37790
    JZ 0x004b7d0d                       ; 004b7c9b
        ;   XREF to: 004b7d0d (CONDITIONAL_JUMP)  ; LAB_004b7d0d
    FILD dword ptr [EBX + 0xb0]         ; 004b7c9d
        ;   Label: LAB_004b7c9d
    FMUL double ptr [0x005d78d3]        ; 004b7ca3 | DAT_005d78d3
    FMUL double ptr [0x005d78db]        ; 004b7ca9 | DAT_005d78db
    LEA EDX,[ESI + 0x28]                ; 004b7caf
    MOV ECX,dword ptr [EBX + 0x44]      ; 004b7cb2
    MOV EAX,dword ptr [EBX + 0x40]      ; 004b7cb5
    FSTP float ptr [ESP + 0xc]          ; 004b7cb8
    CMP byte ptr [ECX + 0x1c37790],0x0  ; 004b7cbc | DAT_01c37790
    JZ 0x004b7d4d                       ; 004b7cc3
        ;   XREF to: 004b7d4d (CONDITIONAL_JUMP)  ; LAB_004b7d4d
    FLD float ptr [EDX]                 ; 004b7cc9
    FCOMP float ptr [0x005d78e3]        ; 004b7ccb | DAT_005d78e3
    FNSTSW AX                           ; 004b7cd1
    SAHF                                ; 004b7cd3
    JBE 0x004b77cb                      ; 004b7cd4
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    MOV EAX,[0x00616494]                ; 004b7cda | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7cdf | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b7ce5 | DAT_005d78cb
    FDIV float ptr [ESP + 0xc]          ; 004b7ceb
    FSUBR float ptr [EDX]               ; 004b7cef
    FST float ptr [EDX]                 ; 004b7cf1
    FCOMP float ptr [0x005d78e3]        ; 004b7cf3 | DAT_005d78e3
    FNSTSW AX                           ; 004b7cf9
    SAHF                                ; 004b7cfb
    JNC 0x004b77cb                      ; 004b7cfc
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    MOV dword ptr [EDX],0xbe800000      ; 004b7d02
    JMP 0x004b77cb                      ; 004b7d08
        ;   XREF to: 004b77cb (UNCONDITIONAL_JUMP)  ; LAB_004b77cb
    MOV EAX,dword ptr [EBX + 0x40]      ; 004b7d0d
        ;   Label: LAB_004b7d0d
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7d10 | DAT_01c37790
    JNZ 0x004b7c9d                      ; 004b7d17
        ;   XREF to: 004b7c9d (CONDITIONAL_JUMP)  ; LAB_004b7c9d
    MOV EAX,[0x00616494]                ; 004b7d19 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7d1e | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b7d24 | DAT_005d78cb
    FDIV float ptr [0x005d78cf]         ; 004b7d2a | DAT_005d78cf
    FLDZ                                ; 004b7d30
    LEA EDX,[ESI + 0x28]                ; 004b7d32
    FXCH                                ; 004b7d35
    FSTP float ptr [ESP + 0x4]          ; 004b7d37
    FCOMP float ptr [EDX]               ; 004b7d3b
    FNSTSW AX                           ; 004b7d3d
    SAHF                                ; 004b7d3f
    JBE 0x004b7d96                      ; 004b7d40
        ;   XREF to: 004b7d96 (CONDITIONAL_JUMP)  ; LAB_004b7d96
    FLD float ptr [EDX]                 ; 004b7d42
    FADD float ptr [ESP + 0x4]          ; 004b7d44
    JMP 0x004b77b8                      ; 004b7d48
        ;   XREF to: 004b77b8 (UNCONDITIONAL_JUMP)  ; LAB_004b77b8
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7d4d | DAT_01c37790
        ;   Label: LAB_004b7d4d
    JZ 0x004b77cb                       ; 004b7d54
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    CMP dword ptr [EDX],0x3e800000      ; 004b7d5a
    JGE 0x004b77cb                      ; 004b7d60
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    MOV EAX,[0x00616494]                ; 004b7d66 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7d6b | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b7d71 | DAT_005d78cb
    FDIV float ptr [ESP + 0xc]          ; 004b7d77
    FADD float ptr [EDX]                ; 004b7d7b
    FSTP float ptr [EDX]                ; 004b7d7d
    CMP dword ptr [EDX],0x3e800000      ; 004b7d7f
    JLE 0x004b77cb                      ; 004b7d85
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    MOV dword ptr [EDX],0x3e800000      ; 004b7d8b
    JMP 0x004b77cb                      ; 004b7d91
        ;   XREF to: 004b77cb (UNCONDITIONAL_JUMP)  ; LAB_004b77cb
    FLD float ptr [EDX]                 ; 004b7d96
        ;   Label: LAB_004b7d96
    FSUB float ptr [ESP + 0x4]          ; 004b7d98
    FLDZ                                ; 004b7d9c
    FXCH                                ; 004b7d9e
    FSTP float ptr [EDX]                ; 004b7da0
    FCOMP float ptr [EDX]               ; 004b7da2
    FNSTSW AX                           ; 004b7da4
    SAHF                                ; 004b7da6
    JBE 0x004b77cb                      ; 004b7da7
        ;   XREF to: 004b77cb (CONDITIONAL_JUMP)  ; LAB_004b77cb
    JMP 0x004b77c5                      ; 004b7dad
        ;   XREF to: 004b77c5 (UNCONDITIONAL_JUMP)  ; LAB_004b77c5
    MOV EAX,dword ptr [EBX + 0x78]      ; 004b7db2
        ;   Label: LAB_004b7db2
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7db5 | DAT_01c37790
    JNZ 0x004b77db                      ; 004b7dbc
        ;   XREF to: 004b77db (CONDITIONAL_JUMP)  ; LAB_004b77db
    MOV EAX,[0x00616494]                ; 004b7dc2 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7dc7 | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b7dcd | DAT_005d78cb
    FDIV float ptr [0x005d78e7]         ; 004b7dd3 | DAT_005d78e7
    FLDZ                                ; 004b7dd9
    LEA EDX,[ESI + 0x2c]                ; 004b7ddb
    FXCH                                ; 004b7dde
    FSTP float ptr [ESP + 0x8]          ; 004b7de0
    FCOMP float ptr [EDX]               ; 004b7de4
    FNSTSW AX                           ; 004b7de6
    SAHF                                ; 004b7de8
    JBE 0x004b7e55                      ; 004b7de9
        ;   XREF to: 004b7e55 (CONDITIONAL_JUMP)  ; LAB_004b7e55
    FLD float ptr [EDX]                 ; 004b7deb
    FADD float ptr [ESP + 0x8]          ; 004b7ded
    FLDZ                                ; 004b7df1
    FXCH                                ; 004b7df3
    FSTP float ptr [EDX]                ; 004b7df5
    FCOMP float ptr [EDX]               ; 004b7df7
    FNSTSW AX                           ; 004b7df9
    SAHF                                ; 004b7dfb
    JNC 0x004b783c                      ; 004b7dfc
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    MOV dword ptr [EDX],0x0             ; 004b7e02
    JMP 0x004b783c                      ; 004b7e08
        ;   XREF to: 004b783c (UNCONDITIONAL_JUMP)  ; LAB_004b783c
    CMP byte ptr [EAX + 0x1c37790],0x0  ; 004b7e0d | DAT_01c37790
        ;   Label: LAB_004b7e0d
    JZ 0x004b783c                       ; 004b7e14
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    CMP dword ptr [EDX],0x3e800000      ; 004b7e1a
    JGE 0x004b783c                      ; 004b7e20
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    MOV EAX,[0x00616494]                ; 004b7e26 | g_CGamePtr
    FLD float ptr [EAX + 0x284]         ; 004b7e2b | g_CGameInstance.delta_time_float
    FMUL float ptr [0x005d78cb]         ; 004b7e31 | DAT_005d78cb
    FDIV float ptr [ESP]                ; 004b7e37
    FADD float ptr [EDX]                ; 004b7e3a
    FSTP float ptr [EDX]                ; 004b7e3c
    CMP dword ptr [EDX],0x3e800000      ; 004b7e3e
    JLE 0x004b783c                      ; 004b7e44
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    MOV dword ptr [EDX],0x3e800000      ; 004b7e4a
    JMP 0x004b783c                      ; 004b7e50
        ;   XREF to: 004b783c (UNCONDITIONAL_JUMP)  ; LAB_004b783c
    FLD float ptr [EDX]                 ; 004b7e55
        ;   Label: LAB_004b7e55
    FSUB float ptr [ESP + 0x8]          ; 004b7e57
    FLDZ                                ; 004b7e5b
    FXCH                                ; 004b7e5d
    FSTP float ptr [EDX]                ; 004b7e5f
    FCOMP float ptr [EDX]               ; 004b7e61
    FNSTSW AX                           ; 004b7e63
    SAHF                                ; 004b7e65
    JBE 0x004b783c                      ; 004b7e66
        ;   XREF to: 004b783c (CONDITIONAL_JUMP)  ; LAB_004b783c
    MOV dword ptr [EDX],0x0             ; 004b7e6c
    JMP 0x004b783c                      ; 004b7e72
        ;   XREF to: 004b783c (UNCONDITIONAL_JUMP)  ; LAB_004b783c
    MOV EAX,dword ptr [EBX + 0x30]      ; 004b7e77
        ;   Label: LAB_004b7e77
    MOV AL,byte ptr [EAX + 0x1c37790]   ; 004b7e7a | DAT_01c37790
    JMP 0x004b7856                      ; 004b7e80
        ;   XREF to: 004b7856 (UNCONDITIONAL_JUMP)  ; LAB_004b7856
    MOV dword ptr [ESI + 0xc],0x0       ; 004b7e85
        ;   Label: LAB_004b7e85
    JMP 0x004b78dc                      ; 004b7e8c
        ;   XREF to: 004b78dc (UNCONDITIONAL_JUMP)  ; LAB_004b78dc
    MOV dword ptr [EDX],0x0             ; 004b7e91
        ;   Label: LAB_004b7e91
    JMP 0x004b78ff                      ; 004b7e97
        ;   XREF to: 004b78ff (UNCONDITIONAL_JUMP)  ; LAB_004b78ff
    MOV dword ptr [EDX],0x0             ; 004b7e9c
        ;   Label: LAB_004b7e9c
    JMP 0x004b7922                      ; 004b7ea2
        ;   XREF to: 004b7922 (UNCONDITIONAL_JUMP)  ; LAB_004b7922
    MOV dword ptr [EDX],0x0             ; 004b7ea7
        ;   Label: LAB_004b7ea7
    JMP 0x004b7945                      ; 004b7ead
        ;   XREF to: 004b7945 (UNCONDITIONAL_JUMP)  ; LAB_004b7945
    MOV dword ptr [EDX],0x0             ; 004b7eb2
        ;   Label: LAB_004b7eb2
    JMP 0x004b7968                      ; 004b7eb8
        ;   XREF to: 004b7968 (UNCONDITIONAL_JUMP)  ; LAB_004b7968
    MOV dword ptr [ESI],0x0             ; 004b7ebd
        ;   Label: LAB_004b7ebd
    JMP 0x004b798e                      ; 004b7ec3
        ;   XREF to: 004b798e (UNCONDITIONAL_JUMP)  ; LAB_004b798e
    PUSH 0x1                            ; 004b7ec8
        ;   Label: LAB_004b7ec8
    MOV EAX,[0x01cedef4]                ; 004b7eca | DAT_01cedef4
    PUSH 0x5                            ; 004b7ecf
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7ed1
    PUSH 0x0                            ; 004b7ed8
    ADD EAX,0x2437c                     ; 004b7eda
    PUSH EAX                            ; 004b7edf
    CALL core_inv.cpp_FUN_004db9d0      ; 004b7ee0
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004b7ee5
    JMP 0x004b79de                      ; 004b7ee8
        ;   XREF to: 004b79de (UNCONDITIONAL_JUMP)  ; LAB_004b79de
    PUSH -0x1                           ; 004b7eed
        ;   Label: LAB_004b7eed
    MOV EAX,[0x01cedef4]                ; 004b7eef | DAT_01cedef4
    PUSH 0x5                            ; 004b7ef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7ef6
    PUSH 0x0                            ; 004b7efd
    ADD EAX,0x2437c                     ; 004b7eff
    PUSH EAX                            ; 004b7f04
    CALL core_inv.cpp_FUN_004db9d0      ; 004b7f05
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004b7f0a
    JMP 0x004b7a2d                      ; 004b7f0d
        ;   XREF to: 004b7a2d (UNCONDITIONAL_JUMP)  ; LAB_004b7a2d
    PUSH 0x1                            ; 004b7f12
        ;   Label: LAB_004b7f12
    MOV EAX,[0x01cedef4]                ; 004b7f14 | DAT_01cedef4
    PUSH 0x0                            ; 004b7f19
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7f1b
    PUSH 0x0                            ; 004b7f22
    ADD EAX,0x2437c                     ; 004b7f24
    PUSH EAX                            ; 004b7f29
    CALL core_inv.cpp_FUN_004db9d0      ; 004b7f2a
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004b7f2f
    JMP 0x004b7b4c                      ; 004b7f32
        ;   XREF to: 004b7b4c (UNCONDITIONAL_JUMP)  ; LAB_004b7b4c
    PUSH 0x1                            ; 004b7f37
        ;   Label: LAB_004b7f37
    MOV EAX,[0x01cedef4]                ; 004b7f39 | DAT_01cedef4
    PUSH 0x3                            ; 004b7f3e
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7f40
    PUSH 0x0                            ; 004b7f47
    ADD EAX,0x2437c                     ; 004b7f49
    PUSH EAX                            ; 004b7f4e
    CALL core_inv.cpp_FUN_004db9d0      ; 004b7f4f
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004b7f54
    JMP 0x004b7b9b                      ; 004b7f57
        ;   XREF to: 004b7b9b (UNCONDITIONAL_JUMP)  ; LAB_004b7b9b
    MOV EBX,dword ptr [0x01b4d2ec]      ; 004b7f5c | g_CDocClassInfo.name_hash
        ;   Label: LAB_004b7f5c
    MOV EAX,[0x01cedef4]                ; 004b7f62 | DAT_01cedef4
    PUSH EBX                            ; 004b7f67
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7f68
    PUSH ESI                            ; 004b7f6f
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004b7f70
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004b7f75
    TEST EAX,EAX                        ; 004b7f78
    JZ 0x004b7f8f                       ; 004b7f7a
        ;   XREF to: 004b7f8f (CONDITIONAL_JUMP)  ; LAB_004b7f8f
    FLD float ptr [EAX + 0x259b0]       ; 004b7f7c
    FLDZ                                ; 004b7f82
    FCOMPP                              ; 004b7f84
    FNSTSW AX                           ; 004b7f86
    SAHF                                ; 004b7f88
    JC 0x004b7bb8                       ; 004b7f89
        ;   XREF to: 004b7bb8 (CONDITIONAL_JUMP)  ; LAB_004b7bb8
    PUSH 0x1                            ; 004b7f8f
        ;   Label: LAB_004b7f8f
    MOV EAX,[0x01cedef4]                ; 004b7f91 | DAT_01cedef4
    PUSH 0x6                            ; 004b7f96
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004b7f98
    PUSH 0x0                            ; 004b7f9f
    ADD EAX,0x2437c                     ; 004b7fa1
    PUSH EAX                            ; 004b7fa6
    CALL core_inv.cpp_FUN_004db9d0      ; 004b7fa7
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004b7fac
    ADD ESP,0x14                        ; 004b7faf
    POP EBP                             ; 004b7fb2
    POP EDI                             ; 004b7fb3
    POP ESI                             ; 004b7fb4
    POP EBX                             ; 004b7fb5
    RET                                 ; 004b7fb6

