; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004be8a0(int param_1,undefined4 *param_2)
;
; Local Variables:
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_game.cpp_CGame_playerControls_FUN_004b7050 at 004b70f0
;
; Referenced Globals:
;   undefined4 DAT_005d8ac7
;   undefined4 DAT_005d8acb
;   undefined4 DAT_005d8acf
;   undefined4 DAT_005d8ad3
;   undefined4 DAT_005d8adb
;   undefined4 DAT_005d8ae3
;   undefined4 DAT_005f7558
;   undefined4 DAT_006141b8
;   undefined4 DAT_006141bc
;   undefined4 DAT_00617dd4
;   CScript* g_CScriptPtr = 01e65cd0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDocClassInfo.name_hash
;   undefined4 g_CDoorClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040d0c0
;   core_dcamera.cpp_FUN_0043c6b0
;   core_dcamera.cpp_FUN_0043c780
;   core_door.cpp_FUN_0045fec0
;   core_inv.cpp_FUN_004db9d0
;   core_inv.cpp_FUN_004dbb50
;   core_inv.cpp_FUN_004dbc60
;   core_inv.cpp_FUN_004defa0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650
;   core_path.cpp_getPathMap_FUN_00513ea0
;   core_script.cpp_CScript_getLetterboxHeight_FUN_00521840
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30
;   core_setcolid.cpp_CDemonSet_init_FUN_00537e00
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004be8a0
        ;   Label: core_game.cpp_FUN_004be8a0
    PUSH ESI                            ; 004be8a1
    PUSH EDI                            ; 004be8a2
    PUSH EBP                            ; 004be8a3
    MOV EBP,ESP                         ; 004be8a4
    SUB ESP,0x208                       ; 004be8a6
    AND ESP,0xfffffff8                  ; 004be8ac
    MOV AH,byte ptr [0x01cb394c]        ; 004be8af | DAT_01cb394c
    TEST AH,0x1                         ; 004be8b5
    JZ 0x004bf5d3                       ; 004be8b8
        ;   XREF to: 004bf5d3 (CONDITIONAL_JUMP)  ; LAB_004bf5d3
    MOV dword ptr [ESP + 0x1ec],0x3e800000 ; 004be8be
        ;   Label: LAB_004be8be
    MOV DH,byte ptr [0x01cb394c]        ; 004be8c9 | DAT_01cb394c
    TEST DH,0x2                         ; 004be8cf
    JZ 0x004bf5e3                       ; 004be8d2
        ;   XREF to: 004bf5e3 (CONDITIONAL_JUMP)  ; LAB_004bf5e3
    MOV EAX,[0x01c2a37c]                ; 004be8d8 | DAT_01c2a37c
        ;   Label: LAB_004be8d8
    MOV dword ptr [ESP + 0x1f4],EAX     ; 004be8dd
    MOV EAX,[0x01c2a380]                ; 004be8e4 | DAT_01c2a380
    MOV dword ptr [ESP + 0x1f0],EAX     ; 004be8e9
    MOV EAX,[0x006141b8]                ; 004be8f0 | DAT_006141b8
    MOV ECX,0x40800000                  ; 004be8f5
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004be8fa
    MOV EAX,[0x006141bc]                ; 004be901 | DAT_006141bc
    MOV dword ptr [ESP + 0x1dc],ECX     ; 004be906
    MOV dword ptr [ESP + 0x1e8],EAX     ; 004be90d
    CMP EAX,0x1e0                       ; 004be914
    JLE 0x004be965                      ; 004be919
        ;   XREF to: 004be965 (CONDITIONAL_JUMP)  ; LAB_004be965
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 004be91b
    IMUL EDX,EAX                        ; 004be922
    MOV EBX,0x1e0                       ; 004be925
    MOV EDI,EAX                         ; 004be92a
    MOV EAX,EDX                         ; 004be92c
    SAR EDX,0x1f                        ; 004be92e
    IDIV EBX                            ; 004be931
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 004be933
    IMUL EDX,EDI                        ; 004be93a
    MOV dword ptr [ESP + 0x1f4],EAX     ; 004be93d
    MOV EAX,EDX                         ; 004be944
    SAR EDX,0x1f                        ; 004be946
    IDIV EBX                            ; 004be949
    MOV dword ptr [ESP + 0x1f0],EAX     ; 004be94b
    MOV EAX,0x280                       ; 004be952
    MOV dword ptr [ESP + 0x1e8],EBX     ; 004be957
    MOV dword ptr [ESP + 0x1f8],EAX     ; 004be95e
    CMP dword ptr [ESP + 0x1f4],0x2     ; 004be965
        ;   Label: LAB_004be965
    JGE 0x004be97a                      ; 004be96d
        ;   XREF to: 004be97a (CONDITIONAL_JUMP)  ; LAB_004be97a
    MOV dword ptr [ESP + 0x1f4],0x2     ; 004be96f
    MOV EAX,[0x006141b8]                ; 004be97a | DAT_006141b8
        ;   Label: LAB_004be97a
    MOV ESI,dword ptr [ESP + 0x1f4]     ; 004be97f
    SUB EAX,0x2                         ; 004be986
    CMP EAX,ESI                         ; 004be989
    JGE 0x004be994                      ; 004be98b
        ;   XREF to: 004be994 (CONDITIONAL_JUMP)  ; LAB_004be994
    MOV dword ptr [ESP + 0x1f4],EAX     ; 004be98d
    CMP dword ptr [ESP + 0x1f0],0x2     ; 004be994
        ;   Label: LAB_004be994
    JGE 0x004be9a9                      ; 004be99c
        ;   XREF to: 004be9a9 (CONDITIONAL_JUMP)  ; LAB_004be9a9
    MOV dword ptr [ESP + 0x1f0],0x2     ; 004be99e
    MOV EAX,[0x006141bc]                ; 004be9a9 | DAT_006141bc
        ;   Label: LAB_004be9a9
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 004be9ae
    SUB EAX,0x2                         ; 004be9b5
    CMP EAX,EDX                         ; 004be9b8
    JGE 0x004be9c3                      ; 004be9ba
        ;   XREF to: 004be9c3 (CONDITIONAL_JUMP)  ; LAB_004be9c3
    MOV dword ptr [ESP + 0x1f0],EAX     ; 004be9bc
    PUSH 0x34                           ; 004be9c3
        ;   Label: LAB_004be9c3
    PUSH 0x0                            ; 004be9c5
    MOV ECX,dword ptr [EBP + 0x18]      ; 004be9c7
    PUSH ECX                            ; 004be9ca
    CALL crt_memory.c_memset_FUN_005b77c0 ; 004be9cb
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004be9d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be9d3
    MOV EAX,dword ptr [EAX + 0x4c]      ; 004be9d6
    MOV BL,byte ptr [EAX + 0x1cb7528]   ; 004be9d9
    MOV EDX,dword ptr [EBP + 0x18]      ; 004be9df
    MOV BH,byte ptr [EAX + 0x1c37790]   ; 004be9e2
    ADD EDX,0x10                        ; 004be9e8
    CMP BL,BH                           ; 004be9eb
    JZ 0x004bf5f3                       ; 004be9ed
        ;   XREF to: 004bf5f3 (CONDITIONAL_JUMP)  ; LAB_004bf5f3
    MOV AL,BH                           ; 004be9f3
    AND EAX,0xff                        ; 004be9f5
    MOV dword ptr [EDX],EAX             ; 004be9fa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004be9fc
        ;   Label: LAB_004be9fc
    MOV EAX,dword ptr [EAX + 0x50]      ; 004be9ff
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bea02
    MOV BL,byte ptr [EAX + 0x1cb7528]   ; 004bea05
    MOV CL,byte ptr [EAX + 0x1c37790]   ; 004bea0b
    ADD EDX,0x14                        ; 004bea11
    CMP BL,CL                           ; 004bea14
    JZ 0x004bf5fe                       ; 004bea16
        ;   XREF to: 004bf5fe (CONDITIONAL_JUMP)  ; LAB_004bf5fe
    MOV AL,CL                           ; 004bea1c
    AND EAX,0xff                        ; 004bea1e
    MOV dword ptr [EDX],EAX             ; 004bea23
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bea25
        ;   Label: LAB_004bea25
    MOV EAX,dword ptr [EAX + 0x68]      ; 004bea28
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bea2b
    MOV BL,byte ptr [EAX + 0x1cb7528]   ; 004bea2e
    MOV CH,byte ptr [EAX + 0x1c37790]   ; 004bea34
    ADD EDX,0x18                        ; 004bea3a
    CMP BL,CH                           ; 004bea3d
    JZ 0x004bf609                       ; 004bea3f
        ;   XREF to: 004bf609 (CONDITIONAL_JUMP)  ; LAB_004bf609
    MOV AL,CH                           ; 004bea45
    AND EAX,0xff                        ; 004bea47
    MOV dword ptr [EDX],EAX             ; 004bea4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bea4e
        ;   Label: LAB_004bea4e
    MOV EAX,dword ptr [EAX + 0xaf0]     ; 004bea51
    MOV BL,byte ptr [EAX + 0x1cb7528]   ; 004bea57
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bea5d
    MOV BH,byte ptr [EAX + 0x1c37790]   ; 004bea60
    ADD EDX,0x30                        ; 004bea66
    CMP BL,BH                           ; 004bea69
    JZ 0x004bf614                       ; 004bea6b
        ;   XREF to: 004bf614 (CONDITIONAL_JUMP)  ; LAB_004bf614
    MOV AL,BH                           ; 004bea71
    AND EAX,0xff                        ; 004bea73
    MOV dword ptr [EDX],EAX             ; 004bea78
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bea7a
        ;   Label: LAB_004bea7a
    MOV ESI,dword ptr [EBX + 0x90]      ; 004bea7d
    MOV EAX,[0x00617dd4]                ; 004bea83 | DAT_00617dd4
    PUSH ESI                            ; 004bea88
    MOV EDX,dword ptr [EAX]             ; 004bea89 | DAT_01d02f84
    PUSH EAX                            ; 004bea8b | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004bea8c
    ADD ESP,0x8                         ; 004bea8f
    TEST EAX,EAX                        ; 004bea92
    JZ 0x004beacd                       ; 004bea94
        ;   XREF to: 004beacd (CONDITIONAL_JUMP)  ; LAB_004beacd
    MOV EDI,dword ptr [0x01b4d2ec]      ; 004bea96 | g_CDocClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004bea9c | DAT_01cedef4
    PUSH EDI                            ; 004beaa1
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004beaa2
    PUSH EDX                            ; 004beaa9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004beaaa
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004beaaf
    TEST EAX,EAX                        ; 004beab2
    JZ 0x004bf61f                       ; 004beab4
        ;   XREF to: 004bf61f (CONDITIONAL_JUMP)  ; LAB_004bf61f
    FLD float ptr [EAX + 0x259b0]       ; 004beaba
    FLDZ                                ; 004beac0
    FCOMPP                              ; 004beac2
    FNSTSW AX                           ; 004beac4
    SAHF                                ; 004beac6
    JNC 0x004bf61f                      ; 004beac7
        ;   XREF to: 004bf61f (CONDITIONAL_JUMP)  ; LAB_004bf61f
    MOV EBX,dword ptr [EBP + 0x14]      ; 004beacd
        ;   Label: LAB_004beacd
    MOV ECX,dword ptr [EBX + 0x94]      ; 004bead0
    MOV EAX,[0x00617dd4]                ; 004bead6 | DAT_00617dd4
    PUSH ECX                            ; 004beadb
    MOV EDX,dword ptr [EAX]             ; 004beadc | DAT_01d02f84
    PUSH EAX                            ; 004beade | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004beadf
    ADD ESP,0x8                         ; 004beae2
    TEST EAX,EAX                        ; 004beae5
    JZ 0x004beb20                       ; 004beae7
        ;   XREF to: 004beb20 (CONDITIONAL_JUMP)  ; LAB_004beb20
    MOV EBX,dword ptr [0x01b4d2ec]      ; 004beae9 | g_CDocClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004beaef | DAT_01cedef4
    PUSH EBX                            ; 004beaf4
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004beaf5
    PUSH ESI                            ; 004beafc
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004beafd
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004beb02
    TEST EAX,EAX                        ; 004beb05
    JZ 0x004bf644                       ; 004beb07
        ;   XREF to: 004bf644 (CONDITIONAL_JUMP)  ; LAB_004bf644
    FLD float ptr [EAX + 0x259b0]       ; 004beb0d
    FLDZ                                ; 004beb13
    FCOMPP                              ; 004beb15
    FNSTSW AX                           ; 004beb17
    SAHF                                ; 004beb19
    JNC 0x004bf644                      ; 004beb1a
        ;   XREF to: 004bf644 (CONDITIONAL_JUMP)  ; LAB_004bf644
    MOV EBX,dword ptr [EBP + 0x14]      ; 004beb20
        ;   Label: LAB_004beb20
    MOV EDI,dword ptr [EBX + 0x98]      ; 004beb23
    MOV EAX,[0x00617dd4]                ; 004beb29 | DAT_00617dd4
    PUSH EDI                            ; 004beb2e
    MOV EDX,dword ptr [EAX]             ; 004beb2f | DAT_01d02f84
    PUSH EAX                            ; 004beb31 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004beb32
    ADD ESP,0x8                         ; 004beb35
    TEST EAX,EAX                        ; 004beb38
    JZ 0x004beb58                       ; 004beb3a
        ;   XREF to: 004beb58 (CONDITIONAL_JUMP)  ; LAB_004beb58
    MOV EAX,[0x01cedef4]                ; 004beb3c | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004beb41
    PUSH 0x1                            ; 004beb48
    ADD EAX,0x2437c                     ; 004beb4a
    PUSH EAX                            ; 004beb4f
    CALL core_inv.cpp_FUN_004dbb50      ; 004beb50
        ;   XREF to: 004dbb50 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb50(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004beb55
    MOV EBX,dword ptr [EBP + 0x14]      ; 004beb58
        ;   Label: LAB_004beb58
    MOV ECX,dword ptr [EBX + 0x9c]      ; 004beb5b
    MOV EAX,[0x00617dd4]                ; 004beb61 | DAT_00617dd4
    PUSH ECX                            ; 004beb66
    MOV EDX,dword ptr [EAX]             ; 004beb67 | DAT_01d02f84
    PUSH EAX                            ; 004beb69 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004beb6a
    ADD ESP,0x8                         ; 004beb6d
    TEST EAX,EAX                        ; 004beb70
    JZ 0x004beb90                       ; 004beb72
        ;   XREF to: 004beb90 (CONDITIONAL_JUMP)  ; LAB_004beb90
    MOV EAX,[0x01cedef4]                ; 004beb74 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004beb79
    PUSH -0x1                           ; 004beb80
    ADD EAX,0x2437c                     ; 004beb82
    PUSH EAX                            ; 004beb87
    CALL core_inv.cpp_FUN_004dbb50      ; 004beb88
        ;   XREF to: 004dbb50 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbb50(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004beb8d
    MOV EBX,dword ptr [EBP + 0x14]      ; 004beb90
        ;   Label: LAB_004beb90
    MOV ESI,dword ptr [EBX + 0xa4]      ; 004beb93
    MOV EAX,[0x00617dd4]                ; 004beb99 | DAT_00617dd4
    PUSH ESI                            ; 004beb9e
    MOV EDX,dword ptr [EAX]             ; 004beb9f | DAT_01d02f84
    PUSH EAX                            ; 004beba1 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004beba2
    ADD ESP,0x8                         ; 004beba5
    TEST EAX,EAX                        ; 004beba8
    JZ 0x004bebc8                       ; 004bebaa
        ;   XREF to: 004bebc8 (CONDITIONAL_JUMP)  ; LAB_004bebc8
    MOV EAX,[0x01cedef4]                ; 004bebac | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bebb1
    PUSH 0x1                            ; 004bebb8
    ADD EAX,0x2437c                     ; 004bebba
    PUSH EAX                            ; 004bebbf
    CALL core_inv.cpp_FUN_004dbc60      ; 004bebc0
        ;   XREF to: 004dbc60 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004dbc60(CInventory * this_ptr, int direction)
    ADD ESP,0x8                         ; 004bebc5
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bebc8
        ;   Label: LAB_004bebc8
    MOV EDI,dword ptr [EBX + 0xa0]      ; 004bebcb
    MOV EAX,[0x00617dd4]                ; 004bebd1 | DAT_00617dd4
    PUSH EDI                            ; 004bebd6
    MOV EDX,dword ptr [EAX]             ; 004bebd7 | DAT_01d02f84
    PUSH EAX                            ; 004bebd9 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004bebda
    ADD ESP,0x8                         ; 004bebdd
    TEST EAX,EAX                        ; 004bebe0
    JZ 0x004bebfe                       ; 004bebe2
        ;   XREF to: 004bebfe (CONDITIONAL_JUMP)  ; LAB_004bebfe
    MOV EAX,[0x01cedef4]                ; 004bebe4 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bebe9
    ADD EAX,0x2437c                     ; 004bebf0
    PUSH EAX                            ; 004bebf5
    CALL core_inv.cpp_FUN_004defa0      ; 004bebf6
        ;   XREF to: 004defa0 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004defa0(CInventory * this_ptr)
    ADD ESP,0x4                         ; 004bebfb
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bebfe
        ;   Label: LAB_004bebfe
    MOV ECX,dword ptr [EBX + 0x7c]      ; 004bec01
    MOV EAX,[0x00617dd4]                ; 004bec04 | DAT_00617dd4
    PUSH ECX                            ; 004bec09
    MOV EDX,dword ptr [EAX]             ; 004bec0a | DAT_01d02f84
    PUSH EAX                            ; 004bec0c | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004bec0d
    ADD ESP,0x8                         ; 004bec10
    TEST EAX,EAX                        ; 004bec13
    JZ 0x004bec4e                       ; 004bec15
        ;   XREF to: 004bec4e (CONDITIONAL_JUMP)  ; LAB_004bec4e
    MOV EBX,dword ptr [0x01b4d2ec]      ; 004bec17 | g_CDocClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004bec1d | DAT_01cedef4
    PUSH EBX                            ; 004bec22
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bec23
    PUSH ESI                            ; 004bec2a
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004bec2b
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004bec30
    TEST EAX,EAX                        ; 004bec33
    JZ 0x004bf669                       ; 004bec35
        ;   XREF to: 004bf669 (CONDITIONAL_JUMP)  ; LAB_004bf669
    FLD float ptr [EAX + 0x259b0]       ; 004bec3b
    FLDZ                                ; 004bec41
    FCOMPP                              ; 004bec43
    FNSTSW AX                           ; 004bec45
    SAHF                                ; 004bec47
    JNC 0x004bf669                      ; 004bec48
        ;   XREF to: 004bf669 (CONDITIONAL_JUMP)  ; LAB_004bf669
    MOV EBX,dword ptr [EBP + 0x14]      ; 004bec4e
        ;   Label: LAB_004bec4e
    MOV EDI,dword ptr [EBX + 0x80]      ; 004bec51
    MOV EAX,[0x00617dd4]                ; 004bec57 | DAT_00617dd4
    PUSH EDI                            ; 004bec5c
    MOV EDX,dword ptr [EAX]             ; 004bec5d | DAT_01d02f84
    PUSH EAX                            ; 004bec5f | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004bec60
    ADD ESP,0x8                         ; 004bec63
    TEST EAX,EAX                        ; 004bec66
    JZ 0x004beca0                       ; 004bec68
        ;   XREF to: 004beca0 (CONDITIONAL_JUMP)  ; LAB_004beca0
    MOV EAX,[0x01b4d2ec]                ; 004bec6a | g_CDocClassInfo.name_hash
    PUSH EAX                            ; 004bec6f
    MOV EAX,[0x01cedef4]                ; 004bec70 | DAT_01cedef4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bec75
    PUSH EDX                            ; 004bec7c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004bec7d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004bec82
    TEST EAX,EAX                        ; 004bec85
    JZ 0x004bf68e                       ; 004bec87
        ;   XREF to: 004bf68e (CONDITIONAL_JUMP)  ; LAB_004bf68e
    FLD float ptr [EAX + 0x259b0]       ; 004bec8d
    FLDZ                                ; 004bec93
    FCOMPP                              ; 004bec95
    FNSTSW AX                           ; 004bec97
    SAHF                                ; 004bec99
    JNC 0x004bf68e                      ; 004bec9a
        ;   XREF to: 004bf68e (CONDITIONAL_JUMP)  ; LAB_004bf68e
    MOV EBX,dword ptr [EBP + 0x14]      ; 004beca0
        ;   Label: LAB_004beca0
    MOV ECX,dword ptr [EBX + 0x84]      ; 004beca3
    MOV EAX,[0x00617dd4]                ; 004beca9 | DAT_00617dd4
    PUSH ECX                            ; 004becae
    MOV EDX,dword ptr [EAX]             ; 004becaf | DAT_01d02f84
    PUSH EAX                            ; 004becb1 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004becb2
    ADD ESP,0x8                         ; 004becb5
    TEST EAX,EAX                        ; 004becb8
    JZ 0x004becf3                       ; 004becba
        ;   XREF to: 004becf3 (CONDITIONAL_JUMP)  ; LAB_004becf3
    MOV EBX,dword ptr [0x01b4d2ec]      ; 004becbc | g_CDocClassInfo.name_hash
    MOV EAX,[0x01cedef4]                ; 004becc2 | DAT_01cedef4
    PUSH EBX                            ; 004becc7
    MOV ESI,dword ptr [EAX*0x4 + 0x1cedee4] ; 004becc8
    PUSH ESI                            ; 004beccf
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004becd0
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004becd5
    TEST EAX,EAX                        ; 004becd8
    JZ 0x004bf6b3                       ; 004becda
        ;   XREF to: 004bf6b3 (CONDITIONAL_JUMP)  ; LAB_004bf6b3
    FLD float ptr [EAX + 0x259b0]       ; 004bece0
    FLDZ                                ; 004bece6
    FCOMPP                              ; 004bece8
    FNSTSW AX                           ; 004becea
    SAHF                                ; 004becec
    JNC 0x004bf6b3                      ; 004beced
        ;   XREF to: 004bf6b3 (CONDITIONAL_JUMP)  ; LAB_004bf6b3
    CMP dword ptr [0x01cb811c],0x0      ; 004becf3 | DAT_01cb811c
        ;   Label: LAB_004becf3
    JZ 0x004bf6d8                       ; 004becfa
        ;   XREF to: 004bf6d8 (CONDITIONAL_JUMP)  ; LAB_004bf6d8
    XOR EDX,EDX                         ; 004bed00
        ;   Label: LAB_004bed00
    MOV dword ptr [0x01cb3930],EDX      ; 004bed02 | DAT_01cb3930
    MOV dword ptr [0x01cb3920],EDX      ; 004bed08 | DAT_01cb3920
    MOV dword ptr [0x01c2a384],EDX      ; 004bed0e | DAT_01c2a384
    MOV dword ptr [0x01cb3948],EDX      ; 004bed14 | DAT_01cb3948
    MOV dword ptr [0x01cb811c],EDX      ; 004bed1a | DAT_01cb811c
    MOV EAX,[0x01cedef4]                ; 004bed20 | DAT_01cedef4
        ;   Label: LAB_004bed20
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bed25
    PUSH EAX                            ; 004bed2c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004bed2d
    CALL dword ptr [EDX + 0x154]        ; 004bed33
    ADD ESP,0x4                         ; 004bed39
    MOV dword ptr [ESP + 0x1e0],EAX     ; 004bed3c
    XOR EAX,EAX                         ; 004bed43
    MOV EDX,dword ptr [0x01cb3920]      ; 004bed45 | DAT_01cb3920
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004bed4b
    TEST EDX,EDX                        ; 004bed52
    JNZ 0x004beeb7                      ; 004bed54
        ;   XREF to: 004beeb7 (CONDITIONAL_JUMP)  ; LAB_004beeb7
    CMP dword ptr [0x01c2a384],0x1      ; 004bed5a | DAT_01c2a384
    JNZ 0x004beeb7                      ; 004bed61
        ;   XREF to: 004beeb7 (CONDITIONAL_JUMP)  ; LAB_004beeb7
    MOV EBX,dword ptr [0x0061b5a8]      ; 004bed67 | g_CDemonSetPtr
    PUSH EBX                            ; 004bed6d
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004bed6e
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004bed73
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 004bed76
    PUSH ESI                            ; 004bed7d
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 004bed7e
    PUSH EDI                            ; 004bed85
    PUSH 0x1fc7838                      ; 004bed86
    LEA ESI,[ESP + 0x1b0]               ; 004bed8b
    LEA EDI,[ESP + 0xa8]                ; 004bed92
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 004bed99
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    LEA ESI,[ESP + 0x1b0]               ; 004bed9e
    ADD ESP,0xc                         ; 004beda5
    LEA EAX,[ESP + 0x9c]                ; 004beda8
    LEA EBX,[ESP + 0x150]               ; 004bedaf
    PUSH EAX                            ; 004bedb6
    MOVSD ES:EDI,ESI                    ; 004bedb7
    MOVSD ES:EDI,ESI                    ; 004bedb8
    MOVSD ES:EDI,ESI                    ; 004bedb9
    PUSH 0x1fc7838                      ; 004bedba
    LEA ESI,[ESP + 0xd4]                ; 004bedbf
    LEA EDI,[ESP + 0xa4]                ; 004bedc6
    CALL core_dcamera.cpp_FUN_0043c780  ; 004bedcd
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[ESP + 0xd4]                ; 004bedd2
    ADD ESP,0x8                         ; 004bedd9
    LEA EAX,[ESP + 0x9c]                ; 004beddc
    MOVSD ES:EDI,ESI                    ; 004bede3
    MOVSD ES:EDI,ESI                    ; 004bede4
    MOVSD ES:EDI,ESI                    ; 004bede5
    FILD dword ptr [EAX]                ; 004bede6
    FMUL float ptr [0x005f7558]         ; 004bede8 | DAT_005f7558
    FSTP float ptr [EBX]                ; 004bedee
    FILD dword ptr [EAX + 0x4]          ; 004bedf0
    FMUL float ptr [0x005f7558]         ; 004bedf3 | DAT_005f7558
    FSTP float ptr [EBX + 0x4]          ; 004bedf9
    FILD dword ptr [EAX + 0x8]          ; 004bedfc
    FMUL float ptr [0x005f7558]         ; 004bedff | DAT_005f7558
    FSTP float ptr [EBX + 0x8]          ; 004bee05
    LEA EDI,[ESP + 0x198]               ; 004bee08
    MOV ESI,0x1fc783c                   ; 004bee0f
    PUSH 0x1                            ; 004bee14
    MOVSD ES:EDI,ESI                    ; 004bee16 | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 004bee17 | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 004bee18 | g_CDemonCameraInstance.field12_0xc
    MOV EAX,[0x0061b5a8]                ; 004bee19 | g_CDemonSetPtr
    LEA EDI,[ESP + 0x160]               ; 004bee1e
    LEA ESI,[ESP + 0x19c]               ; 004bee25
    PUSH EAX                            ; 004bee2c
    MOVSD ES:EDI,ESI                    ; 004bee2d
    MOVSD ES:EDI,ESI                    ; 004bee2e
    MOVSD ES:EDI,ESI                    ; 004bee2f
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 004bee30
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01cedef4]                ; 004bee35 | DAT_01cedef4
    ADD ESP,0x8                         ; 004bee3a
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bee3d
    PUSH EDX                            ; 004bee44
    MOV ECX,dword ptr [0x0061b5a8]      ; 004bee45 | g_CDemonSetPtr
    PUSH ECX                            ; 004bee4b
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004bee4c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004bee51
    LEA EAX,[ESP + 0x150]               ; 004bee54
    PUSH EAX                            ; 004bee5b
    LEA EAX,[ESP + 0x160]               ; 004bee5c
    PUSH EAX                            ; 004bee63
    MOV EBX,dword ptr [0x0061b5a8]      ; 004bee64 | g_CDemonSetPtr
    PUSH EBX                            ; 004bee6a
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004bee6b
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x210],EAX     ; 004bee70
    FLD float ptr [ESP + 0x210]         ; 004bee77
    ADD ESP,0xc                         ; 004bee7e
    FLDZ                                ; 004bee81
    FXCH                                ; 004bee83
    FSTP float ptr [ESP + 0x1cc]        ; 004bee85
    FCOMP float ptr [ESP + 0x1cc]       ; 004bee8c
    FNSTSW AX                           ; 004bee93
    SAHF                                ; 004bee95
    JA 0x004beeb7                       ; 004bee96
        ;   XREF to: 004beeb7 (CONDITIONAL_JUMP)  ; LAB_004beeb7
    CMP dword ptr [ESP + 0x1cc],0x3f800000 ; 004bee98
    JG 0x004beeb7                       ; 004beea3
        ;   XREF to: 004beeb7 (CONDITIONAL_JUMP)  ; LAB_004beeb7
    MOV EAX,[0x0061b5a8]                ; 004beea5 | g_CDemonSetPtr
    MOV EAX,dword ptr [EAX + 0x14d144]  ; 004beeaa | g_CDemonSetInstance.field1364292_0x14d144
    MOV dword ptr [ESP + 0x1e4],EAX     ; 004beeb0
    CMP dword ptr [ESP + 0x1e0],0x0     ; 004beeb7
        ;   Label: LAB_004beeb7
    JZ 0x004bf6f4                       ; 004beebf
        ;   XREF to: 004bf6f4 (CONDITIONAL_JUMP)  ; LAB_004bf6f4
    TEST byte ptr [0x01c2a384],0x2      ; 004beec5 | DAT_01c2a384
    JZ 0x004bf6f4                       ; 004beecc
        ;   XREF to: 004bf6f4 (CONDITIONAL_JUMP)  ; LAB_004bf6f4
    MOV ECX,dword ptr [0x0061b5a8]      ; 004beed2 | g_CDemonSetPtr
    PUSH ECX                            ; 004beed8
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004beed9
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004beede
    MOV EBX,dword ptr [ESP + 0x1f0]     ; 004beee1
    PUSH EBX                            ; 004beee8
    MOV ESI,dword ptr [ESP + 0x1f8]     ; 004beee9
    PUSH ESI                            ; 004beef0
    PUSH 0x1fc7838                      ; 004beef1
    LEA ESI,[ESP + 0x12c]               ; 004beef6
    LEA EDI,[ESP + 0x54]                ; 004beefd
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 004bef01
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    ADD ESP,0xc                         ; 004bef06
    LEA EAX,[ESP + 0x48]                ; 004bef09
    LEA ESI,[ESP + 0x120]               ; 004bef0d
    PUSH EAX                            ; 004bef14
    MOVSD ES:EDI,ESI                    ; 004bef15
    MOVSD ES:EDI,ESI                    ; 004bef16
    MOVSD ES:EDI,ESI                    ; 004bef17
    PUSH 0x1fc7838                      ; 004bef18
    LEA ESI,[ESP + 0x1b8]               ; 004bef1d
    LEA EDI,[ESP + 0x50]                ; 004bef24
    CALL core_dcamera.cpp_FUN_0043c780  ; 004bef28
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[ESP + 0x1b8]               ; 004bef2d
    ADD ESP,0x8                         ; 004bef34
    LEA EBX,[ESP + 0x60]                ; 004bef37
    MOVSD ES:EDI,ESI                    ; 004bef3b
    MOVSD ES:EDI,ESI                    ; 004bef3c
    MOVSD ES:EDI,ESI                    ; 004bef3d
    LEA EAX,[ESP + 0x48]                ; 004bef3e
    LEA EDI,[ESP + 0x12c]               ; 004bef42
    FILD dword ptr [EAX]                ; 004bef49
    FMUL float ptr [0x005f7558]         ; 004bef4b | DAT_005f7558
    FSTP float ptr [EBX]                ; 004bef51
    FILD dword ptr [EAX + 0x4]          ; 004bef53
    FMUL float ptr [0x005f7558]         ; 004bef56 | DAT_005f7558
    FSTP float ptr [EBX + 0x4]          ; 004bef5c
    FILD dword ptr [EAX + 0x8]          ; 004bef5f
    FMUL float ptr [0x005f7558]         ; 004bef62 | DAT_005f7558
    FSTP float ptr [EBX + 0x8]          ; 004bef68
    MOV ESI,0x1fc783c                   ; 004bef6b
    MOVSD ES:EDI,ESI                    ; 004bef70 | g_CDemonCameraInstance.field4_0x4
    MOVSD ES:EDI,ESI                    ; 004bef71 | g_CDemonCameraInstance.field8_0x8
    MOVSD ES:EDI,ESI                    ; 004bef72 | g_CDemonCameraInstance.field12_0xc
    LEA EDI,[ESP + 0x114]               ; 004bef73
    LEA ESI,[ESP + 0x12c]               ; 004bef7a
    MOVSD ES:EDI,ESI                    ; 004bef81
    MOVSD ES:EDI,ESI                    ; 004bef82
    MOVSD ES:EDI,ESI                    ; 004bef83
    PUSH 0x1                            ; 004bef84
    MOV EDI,dword ptr [0x0061b5a8]      ; 004bef86 | g_CDemonSetPtr
    PUSH EDI                            ; 004bef8c
    CALL core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0 ; 004bef8d
        ;   XREF to: 00537eb0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet * this_ptr, int ray_type)
    MOV EAX,[0x01cedef4]                ; 004bef92 | DAT_01cedef4
    ADD ESP,0x8                         ; 004bef97
    MOV EDX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bef9a
    PUSH EDX                            ; 004befa1
    MOV ECX,dword ptr [0x0061b5a8]      ; 004befa2 | g_CDemonSetPtr
    PUSH ECX                            ; 004befa8
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004befa9
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004befae
    LEA EAX,[ESP + 0x60]                ; 004befb1
    PUSH EAX                            ; 004befb5
    LEA EAX,[ESP + 0x118]               ; 004befb6
    PUSH EAX                            ; 004befbd
    MOV EBX,dword ptr [0x0061b5a8]      ; 004befbe | g_CDemonSetPtr
    PUSH EBX                            ; 004befc4
    CALL core_setcolid.cpp_FUN_00535ee0 ; 004befc5
        ;   XREF to: 00535ee0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00535ee0()
    MOV dword ptr [ESP + 0x210],EAX     ; 004befca
    FLD float ptr [ESP + 0x210]         ; 004befd1
    ADD ESP,0xc                         ; 004befd8
    FLDZ                                ; 004befdb
    FXCH                                ; 004befdd
    FSTP float ptr [ESP + 0x1d4]        ; 004befdf
    FCOMP float ptr [ESP + 0x1d4]       ; 004befe6
    FNSTSW AX                           ; 004befed
    SAHF                                ; 004befef
    JA 0x004bf023                       ; 004beff0
        ;   XREF to: 004bf023 (CONDITIONAL_JUMP)  ; LAB_004bf023
    CMP dword ptr [ESP + 0x1d4],0x3f800000 ; 004beff2
    JG 0x004bf023                       ; 004beffd
        ;   XREF to: 004bf023 (CONDITIONAL_JUMP)  ; LAB_004bf023
    MOV EDI,dword ptr [0x01c264e0]      ; 004befff | g_CEnemyClassInfo.name_hash
    MOV EAX,[0x0061b5a8]                ; 004bf005 | g_CDemonSetPtr
    PUSH EDI                            ; 004bf00a
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 004bf00b | g_CDemonSetInstance.field1364292_0x14d144
    PUSH EDX                            ; 004bf011
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004bf012
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004bf017
    TEST EAX,EAX                        ; 004bf01a
    JZ 0x004bf023                       ; 004bf01c
        ;   XREF to: 004bf023 (CONDITIONAL_JUMP)  ; LAB_004bf023
    MOV [0x01cb3948],EAX                ; 004bf01e | DAT_01cb3948
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf023
        ;   Label: LAB_004bf023
    MOV dword ptr [EAX + 0xc],0x1       ; 004bf026
    CMP dword ptr [0x01cb3920],0x0      ; 004bf02d | DAT_01cb3920
        ;   Label: LAB_004bf02d
    JNZ 0x004bf18b                      ; 004bf034
        ;   XREF to: 004bf18b (CONDITIONAL_JUMP)  ; LAB_004bf18b
    CMP dword ptr [0x01c2a384],0x1      ; 004bf03a | DAT_01c2a384
    JNZ 0x004bf18b                      ; 004bf041
        ;   XREF to: 004bf18b (CONDITIONAL_JUMP)  ; LAB_004bf18b
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 004bf047
    PUSH ESI                            ; 004bf04e
    MOV EDI,dword ptr [ESP + 0x1f8]     ; 004bf04f
    PUSH EDI                            ; 004bf056
    PUSH 0x1fc7838                      ; 004bf057
    LEA ESI,[ESP + 0xcc]                ; 004bf05c
    LEA EDI,[ESP + 0x174]               ; 004bf063
    CALL core_dcamera.cpp_FUN_0043c6b0  ; 004bf06a
        ;   XREF to: 0043c6b0 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c6b0()
    ADD ESP,0xc                         ; 004bf06f
    LEA ESI,[ESP + 0xc0]                ; 004bf072
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004bf079
    MOVSD ES:EDI,ESI                    ; 004bf080
    MOVSD ES:EDI,ESI                    ; 004bf081
    MOVSD ES:EDI,ESI                    ; 004bf082
    TEST EAX,EAX                        ; 004bf083
    JZ 0x004bf741                       ; 004bf085
        ;   XREF to: 004bf741 (CONDITIONAL_JUMP)  ; LAB_004bf741
    MOV EDX,dword ptr [0x01b4d36c]      ; 004bf08b | g_CDoorClassInfo.name_hash
    PUSH EDX                            ; 004bf091
    PUSH EAX                            ; 004bf092
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004bf093
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 004bf098
    TEST EAX,EAX                        ; 004bf09b
    JZ 0x004bf70d                       ; 004bf09d
        ;   XREF to: 004bf70d (CONDITIONAL_JUMP)  ; LAB_004bf70d
    PUSH EAX                            ; 004bf0a3
    LEA ESI,[ESP + 0x10c]               ; 004bf0a4
    LEA EDI,[ESP + 0x34]                ; 004bf0ab
    CALL core_door.cpp_FUN_0045fec0     ; 004bf0af
        ;   XREF to: 0045fec0 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_FUN_0045fec0()
    LEA ESI,[ESP + 0x10c]               ; 004bf0b4
    ADD ESP,0x4                         ; 004bf0bb
    LEA EAX,[ESP + 0x30]                ; 004bf0be
    MOVSD ES:EDI,ESI                    ; 004bf0c2
    MOVSD ES:EDI,ESI                    ; 004bf0c3
    MOVSD ES:EDI,ESI                    ; 004bf0c4
    CMP EAX,0x1cb3924                   ; 004bf0c5
    JZ 0x004bf0e7                       ; 004bf0ca
        ;   XREF to: 004bf0e7 (CONDITIONAL_JUMP)  ; LAB_004bf0e7
    MOV EAX,dword ptr [ESP + 0x30]      ; 004bf0cc
    MOV [0x01cb3924],EAX                ; 004bf0d0 | DAT_01cb3924
    MOV EAX,dword ptr [ESP + 0x34]      ; 004bf0d5
    MOV [0x01cb3928],EAX                ; 004bf0d9 | DAT_01cb3928
    MOV EAX,dword ptr [ESP + 0x38]      ; 004bf0de
    MOV [0x01cb392c],EAX                ; 004bf0e2 | DAT_01cb392c
    XOR ESI,ESI                         ; 004bf0e7
        ;   Label: LAB_004bf0e7
    MOV EBX,0x1                         ; 004bf0e9
    MOV dword ptr [0x01cb3940],ESI      ; 004bf0ee | DAT_01cb3940
    MOV dword ptr [0x01cb3930],EBX      ; 004bf0f4 | DAT_01cb3930
    FLD float ptr [0x01cb3924]          ; 004bf0fa | DAT_01cb3924
        ;   Label: LAB_004bf0fa
    FLD float ptr [0x01cb3928]          ; 004bf100 | DAT_01cb3928
    MOV EAX,[0x01cedef4]                ; 004bf106 | DAT_01cedef4
    FLD float ptr [0x01cb392c]          ; 004bf10b | DAT_01cb392c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf111
    LEA EDI,[ESP + 0xb4]                ; 004bf118
    LEA ESI,[ESP + 0xf0]                ; 004bf11f
    FXCH ST2                            ; 004bf126
    FSUB float ptr [EAX + 0x20]         ; 004bf128
    FXCH                                ; 004bf12b
    FSUB float ptr [EAX + 0x24]         ; 004bf12d
    FXCH ST2                            ; 004bf130
    FSUB float ptr [EAX + 0x28]         ; 004bf132
    FXCH                                ; 004bf135
    FSTP float ptr [ESP + 0xf0]         ; 004bf137
    FXCH                                ; 004bf13e
    FSTP float ptr [ESP + 0xf4]         ; 004bf140
    FSTP float ptr [ESP + 0xf8]         ; 004bf147
    MOVSD ES:EDI,ESI                    ; 004bf14e
    MOVSD ES:EDI,ESI                    ; 004bf14f
    MOVSD ES:EDI,ESI                    ; 004bf150
    FLD float ptr [ESP + 0xb8]          ; 004bf151
    FMUL ST0                            ; 004bf158
    FLD float ptr [ESP + 0xb4]          ; 004bf15a
    FMUL ST0                            ; 004bf161
    FADDP                               ; 004bf163
    FLD float ptr [ESP + 0xbc]          ; 004bf165
    FMUL ST0                            ; 004bf16c
    FADDP                               ; 004bf16e
    FSQRT                               ; 004bf170
    FCOMP float ptr [0x005d8ac7]        ; 004bf172 | DAT_005d8ac7
    FNSTSW AX                           ; 004bf178
    SAHF                                ; 004bf17a
    JBE 0x004bfa03                      ; 004bf17b
        ;   XREF to: 004bfa03 (CONDITIONAL_JUMP)  ; LAB_004bfa03
    MOV dword ptr [0x01cb3944],0x1      ; 004bf181 | DAT_01cb3944
    MOV EAX,[0x01cedef4]                ; 004bf18b | DAT_01cedef4
        ;   Label: LAB_004bf18b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf190
    LEA EDI,[ESP + 0x6c]                ; 004bf197
    LEA ESI,[ESP + 0x144]               ; 004bf19b
    FLD float ptr [EAX + 0x20]          ; 004bf1a2
    FLD float ptr [EAX + 0x24]          ; 004bf1a5
    FLD float ptr [EAX + 0x28]          ; 004bf1a8
    FXCH ST2                            ; 004bf1ab
    FSUB float ptr [0x01cb3924]         ; 004bf1ad | DAT_01cb3924
    FXCH                                ; 004bf1b3
    FSUB float ptr [0x01cb3928]         ; 004bf1b5 | DAT_01cb3928
    FXCH ST2                            ; 004bf1bb
    FSUB float ptr [0x01cb392c]         ; 004bf1bd | DAT_01cb392c
    FXCH                                ; 004bf1c3
    FSTP float ptr [ESP + 0x144]        ; 004bf1c5
    FXCH                                ; 004bf1cc
    FSTP float ptr [ESP + 0x148]        ; 004bf1ce
    FSTP float ptr [ESP + 0x14c]        ; 004bf1d5
    MOVSD ES:EDI,ESI                    ; 004bf1dc
    MOVSD ES:EDI,ESI                    ; 004bf1dd
    MOVSD ES:EDI,ESI                    ; 004bf1de
    FLD float ptr [ESP + 0x70]          ; 004bf1df
    FMUL ST0                            ; 004bf1e3
    FLD float ptr [ESP + 0x6c]          ; 004bf1e5
    FMUL ST0                            ; 004bf1e9
    FADDP                               ; 004bf1eb
    FLD float ptr [ESP + 0x74]          ; 004bf1ed
    FMUL ST0                            ; 004bf1f1
    FADDP                               ; 004bf1f3
    FSQRT                               ; 004bf1f5
    MOV EDX,dword ptr [0x01cb3930]      ; 004bf1f7 | DAT_01cb3930
    FSTP float ptr [ESP + 0x1c8]        ; 004bf1fd
    TEST EDX,EDX                        ; 004bf204
    JZ 0x004bf3c7                       ; 004bf206
        ;   XREF to: 004bf3c7 (CONDITIONAL_JUMP)  ; LAB_004bf3c7
    MOV ECX,dword ptr [0x01cb3948]      ; 004bf20c | DAT_01cb3948
    TEST ECX,ECX                        ; 004bf212
    JNZ 0x004bf3c7                      ; 004bf214
        ;   XREF to: 004bf3c7 (CONDITIONAL_JUMP)  ; LAB_004bf3c7
    FLD float ptr [ESP + 0x1c8]         ; 004bf21a
    FCOMP float ptr [0x005d8acb]        ; 004bf221 | DAT_005d8acb
    FNSTSW AX                           ; 004bf227
    SAHF                                ; 004bf229
    JNC 0x004bf241                      ; 004bf22a
        ;   XREF to: 004bf241 (CONDITIONAL_JUMP)  ; LAB_004bf241
    MOV ESI,dword ptr [ESP + 0x1e0]     ; 004bf22c
    MOV dword ptr [0x01cb3930],ECX      ; 004bf233 | DAT_01cb3930
    TEST ESI,ESI                        ; 004bf239
    JZ 0x004bfa10                       ; 004bf23b
        ;   XREF to: 004bfa10 (CONDITIONAL_JUMP)  ; LAB_004bfa10
    FLD float ptr [0x01cb3934]          ; 004bf241 | DAT_01cb3934
        ;   Label: LAB_004bf241
    FLD float ptr [0x01cb3938]          ; 004bf247 | DAT_01cb3938
    MOV EAX,[0x01cedef4]                ; 004bf24d | DAT_01cedef4
    FLD float ptr [0x01cb393c]          ; 004bf252 | DAT_01cb393c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf258
    LEA EDI,[ESP + 0x3c]                ; 004bf25f
    LEA ESI,[ESP + 0x18]                ; 004bf263
    FXCH ST2                            ; 004bf267
    FSUB float ptr [EAX + 0x20]         ; 004bf269
    FXCH                                ; 004bf26c
    FSUB float ptr [EAX + 0x24]         ; 004bf26e
    FXCH ST2                            ; 004bf271
    FSUB float ptr [EAX + 0x28]         ; 004bf273
    FXCH                                ; 004bf276
    FSTP float ptr [ESP + 0x18]         ; 004bf278
    FXCH                                ; 004bf27c
    FSTP float ptr [ESP + 0x1c]         ; 004bf27e
    FSTP float ptr [ESP + 0x20]         ; 004bf282
    MOVSD ES:EDI,ESI                    ; 004bf286
    MOVSD ES:EDI,ESI                    ; 004bf287
    MOVSD ES:EDI,ESI                    ; 004bf288
    FLD float ptr [ESP + 0x40]          ; 004bf289
    FMUL ST0                            ; 004bf28d
    FLD float ptr [ESP + 0x3c]          ; 004bf28f
    FMUL ST0                            ; 004bf293
    FADDP                               ; 004bf295
    FLD float ptr [ESP + 0x44]          ; 004bf297
    FMUL ST0                            ; 004bf29b
    FADDP                               ; 004bf29d
    FSQRT                               ; 004bf29f
    FCOMP float ptr [0x005d8acf]        ; 004bf2a1 | DAT_005d8acf
    FNSTSW AX                           ; 004bf2a7
    SAHF                                ; 004bf2a9
    JNC 0x004bfa2e                      ; 004bf2aa
        ;   XREF to: 004bfa2e (CONDITIONAL_JUMP)  ; LAB_004bfa2e
    MOV EAX,dword ptr [EBP + 0x14]      ; 004bf2b0
    FLD float ptr [EAX + 0x284]         ; 004bf2b3
    FADD float ptr [0x01cb3940]         ; 004bf2b9 | DAT_01cb3940
    FSTP float ptr [0x01cb3940]         ; 004bf2bf | DAT_01cb3940
    CMP dword ptr [0x01cb3940],0x3f800000 ; 004bf2c5 | DAT_01cb3940
    JL 0x004bf2e8                       ; 004bf2cf
        ;   XREF to: 004bf2e8 (CONDITIONAL_JUMP)  ; LAB_004bf2e8
    XOR ECX,ECX                         ; 004bf2d1
    MOV EBX,dword ptr [ESP + 0x1e0]     ; 004bf2d3
    MOV dword ptr [0x01cb3930],ECX      ; 004bf2da | DAT_01cb3930
    TEST EBX,EBX                        ; 004bf2e0
    JZ 0x004bfa1f                       ; 004bf2e2
        ;   XREF to: 004bfa1f (CONDITIONAL_JUMP)  ; LAB_004bfa1f
    PUSH 0x1cb3924                      ; 004bf2e8 | DAT_01cb3924
        ;   Label: LAB_004bf2e8
    CALL core_path.cpp_getPathMap_FUN_00513ea0 ; 004bf2ed
        ;   XREF to: 00513ea0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_00513ea0(CLocation * location)
    ADD ESP,0x4                         ; 004bf2f2
    PUSH 0x0                            ; 004bf2f5
    LEA EDX,[ESP + 0x100]               ; 004bf2f7
    PUSH EDX                            ; 004bf2fe
    MOV EDX,dword ptr [0x01cedef4]      ; 004bf2ff | DAT_01cedef4
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 004bf305
    ADD EDX,0x20                        ; 004bf30c
    PUSH EDX                            ; 004bf30f
    PUSH EAX                            ; 004bf310
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650 ; 004bf311
        ;   XREF to: 00513650 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00513650(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004bf316
    TEST EAX,EAX                        ; 004bf319
    JZ 0x004bfa3b                       ; 004bf31b
        ;   XREF to: 004bfa3b (CONDITIONAL_JUMP)  ; LAB_004bfa3b
    MOV EAX,[0x01cedef4]                ; 004bf321 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf326
    FLD float ptr [ESP + 0x100]         ; 004bf32d
    FSUB float ptr [EAX + 0x34]         ; 004bf334
    SUB ESP,0x4                         ; 004bf337
    FSTP float ptr [ESP]                ; 004bf33a
    CALL core_actor.cpp_FUN_0040d0c0    ; 004bf33d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x208],EAX     ; 004bf342
    FLD float ptr [ESP + 0x208]         ; 004bf349
    FMUL float ptr [0x005d8ad3]         ; 004bf350 | DAT_005d8ad3
    ADD ESP,0x4                         ; 004bf356
    FMUL double ptr [0x005d8adb]        ; 004bf359 | DAT_005d8adb
    FLD float ptr [ESP + 0x1ec]         ; 004bf35f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf366
    FCHS                                ; 004bf369
    FSTP float ptr [ESP + 0x1d8]        ; 004bf36b
    FST float ptr [EAX + 0x28]          ; 004bf372
    FCOMP float ptr [ESP + 0x1d8]       ; 004bf375
    FNSTSW AX                           ; 004bf37c
    SAHF                                ; 004bf37e
    JNC 0x004bf38e                      ; 004bf37f
        ;   XREF to: 004bf38e (CONDITIONAL_JUMP)  ; LAB_004bf38e
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bf381
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 004bf384
    MOV dword ptr [EDX + 0x28],EAX      ; 004bf38b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf38e
        ;   Label: LAB_004bf38e
    FLD float ptr [EAX + 0x28]          ; 004bf391
    FCOMP float ptr [ESP + 0x1ec]       ; 004bf394
    FNSTSW AX                           ; 004bf39b
    SAHF                                ; 004bf39d
    JBE 0x004bf3ad                      ; 004bf39e
        ;   XREF to: 004bf3ad (CONDITIONAL_JUMP)  ; LAB_004bf3ad
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bf3a0
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004bf3a3
    MOV dword ptr [EDX + 0x28],EAX      ; 004bf3aa
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf3ad
        ;   Label: LAB_004bf3ad
    MOV EDI,dword ptr [0x01cb3944]      ; 004bf3b0 | DAT_01cb3944
    MOV dword ptr [EAX],0x1             ; 004bf3b6
    TEST EDI,EDI                        ; 004bf3bc
    JZ 0x004bf3c7                       ; 004bf3be
        ;   XREF to: 004bf3c7 (CONDITIONAL_JUMP)  ; LAB_004bf3c7
    MOV dword ptr [EAX + 0x8],0x1       ; 004bf3c0
    CMP dword ptr [0x01cb3948],0x0      ; 004bf3c7 | DAT_01cb3948
        ;   Label: LAB_004bf3c7
    JZ 0x004bf5a8                       ; 004bf3ce
        ;   XREF to: 004bf5a8 (CONDITIONAL_JUMP)  ; LAB_004bf5a8
    LEA EDI,[ESP + 0x1bc]               ; 004bf3d4
    MOV EDX,dword ptr [0x01cb3948]      ; 004bf3db | DAT_01cb3948
    MOV ESI,ESP                         ; 004bf3e1
    MOV EAX,[0x01cedef4]                ; 004bf3e3 | DAT_01cedef4
    FLD float ptr [EDX + 0x20]          ; 004bf3e8
    FLD float ptr [EDX + 0x24]          ; 004bf3eb
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf3ee
    FLD float ptr [EDX + 0x28]          ; 004bf3f5
    FXCH ST2                            ; 004bf3f8
    FSUB float ptr [EAX + 0x20]         ; 004bf3fa
    FXCH                                ; 004bf3fd
    FSUB float ptr [EAX + 0x24]         ; 004bf3ff
    FXCH ST2                            ; 004bf402
    FSUB float ptr [EAX + 0x28]         ; 004bf404
    FXCH                                ; 004bf407
    FSTP float ptr [ESP]                ; 004bf409
    FXCH                                ; 004bf40c
    FSTP float ptr [ESP + 0x4]          ; 004bf40e
    FSTP float ptr [ESP + 0x8]          ; 004bf412
    LEA EAX,[ESP + 0x1bc]               ; 004bf416
    MOVSD ES:EDI,ESI                    ; 004bf41d
    MOVSD ES:EDI,ESI                    ; 004bf41e
    MOVSD ES:EDI,ESI                    ; 004bf41f
    PUSH EAX                            ; 004bf420
    LEA ESI,[ESP + 0x94]                ; 004bf421
    LEA EDI,[ESP + 0x184]               ; 004bf428
    CALL core_vecdir.cpp_FUN_005838f0   ; 004bf42f
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x94]                ; 004bf434
    ADD ESP,0x4                         ; 004bf43b
    MOV EAX,[0x01cedef4]                ; 004bf43e | DAT_01cedef4
    MOVSD ES:EDI,ESI                    ; 004bf443
    MOVSD ES:EDI,ESI                    ; 004bf444
    MOVSD ES:EDI,ESI                    ; 004bf445
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf446
    FLD float ptr [ESP + 0x184]         ; 004bf44d
    FSUB float ptr [EAX + 0x34]         ; 004bf454
    SUB ESP,0x4                         ; 004bf457
    FSTP float ptr [ESP]                ; 004bf45a
    CALL core_actor.cpp_FUN_0040d0c0    ; 004bf45d
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040d0c0()
    MOV dword ptr [ESP + 0x208],EAX     ; 004bf462
    FLD float ptr [ESP + 0x208]         ; 004bf469
    FMUL float ptr [0x005d8ad3]         ; 004bf470 | DAT_005d8ad3
    ADD ESP,0x4                         ; 004bf476
    FMUL double ptr [0x005d8adb]        ; 004bf479 | DAT_005d8adb
    FLD float ptr [ESP + 0x1ec]         ; 004bf47f
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf486
    FCHS                                ; 004bf489
    FSTP float ptr [ESP + 0x1fc]        ; 004bf48b
    FST float ptr [EAX + 0x28]          ; 004bf492
    FCOMP float ptr [ESP + 0x1fc]       ; 004bf495
    FNSTSW AX                           ; 004bf49c
    SAHF                                ; 004bf49e
    JNC 0x004bf4ae                      ; 004bf49f
        ;   XREF to: 004bf4ae (CONDITIONAL_JUMP)  ; LAB_004bf4ae
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bf4a1
    MOV EAX,dword ptr [ESP + 0x1fc]     ; 004bf4a4
    MOV dword ptr [EDX + 0x28],EAX      ; 004bf4ab
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf4ae
        ;   Label: LAB_004bf4ae
    FLD float ptr [EAX + 0x28]          ; 004bf4b1
    FCOMP float ptr [ESP + 0x1ec]       ; 004bf4b4
    FNSTSW AX                           ; 004bf4bb
    SAHF                                ; 004bf4bd
    JBE 0x004bf4cd                      ; 004bf4be
        ;   XREF to: 004bf4cd (CONDITIONAL_JUMP)  ; LAB_004bf4cd
    MOV EDX,dword ptr [EBP + 0x18]      ; 004bf4c0
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 004bf4c3
    MOV dword ptr [EDX + 0x28],EAX      ; 004bf4ca
    CMP dword ptr [0x01cb3930],0x0      ; 004bf4cd | DAT_01cb3930
        ;   Label: LAB_004bf4cd
    JZ 0x004bf587                       ; 004bf4d4
        ;   XREF to: 004bf587 (CONDITIONAL_JUMP)  ; LAB_004bf587
    MOV EAX,[0x01cedef4]                ; 004bf4da | DAT_01cedef4
    PUSH 0x1cb3924                      ; 004bf4df | DAT_01cb3924
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf4e4
    PUSH ECX                            ; 004bf4eb
    LEA ESI,[ESP + 0x5c]                ; 004bf4ec
    LEA EDI,[ESP + 0xe0]                ; 004bf4f0
    CALL core_actor.cpp_FUN_00408de0    ; 004bf4f7
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x5c]                ; 004bf4fc
    ADD ESP,0x8                         ; 004bf500
    MOVSD ES:EDI,ESI                    ; 004bf503
    MOVSD ES:EDI,ESI                    ; 004bf504
    MOVSD ES:EDI,ESI                    ; 004bf505
    CMP dword ptr [ESP + 0xd8],0x40000000 ; 004bf506
    JLE 0x004bf524                      ; 004bf511
        ;   XREF to: 004bf524 (CONDITIONAL_JUMP)  ; LAB_004bf524
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf513
    MOV dword ptr [EAX + 0x8],0x1       ; 004bf516
    MOV dword ptr [EAX + 0x24],0x3f800000 ; 004bf51d
    FLD float ptr [ESP + 0xd8]          ; 004bf524
        ;   Label: LAB_004bf524
    FCOMP float ptr [0x005d8ae3]        ; 004bf52b | DAT_005d8ae3
    FNSTSW AX                           ; 004bf531
    SAHF                                ; 004bf533
    JNC 0x004bf547                      ; 004bf534
        ;   XREF to: 004bf547 (CONDITIONAL_JUMP)  ; LAB_004bf547
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf536
    MOV dword ptr [EAX + 0x8],0x1       ; 004bf539
    MOV dword ptr [EAX + 0x24],0xbf800000 ; 004bf540
    CMP dword ptr [ESP + 0xe0],0x40000000 ; 004bf547
        ;   Label: LAB_004bf547
    JLE 0x004bf564                      ; 004bf552
        ;   XREF to: 004bf564 (CONDITIONAL_JUMP)  ; LAB_004bf564
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf554
    MOV dword ptr [EAX + 0x8],0x1       ; 004bf557
    MOV dword ptr [EAX],0x1             ; 004bf55e
    FLD float ptr [ESP + 0xe0]          ; 004bf564
        ;   Label: LAB_004bf564
    FCOMP float ptr [0x005d8ae3]        ; 004bf56b | DAT_005d8ae3
    FNSTSW AX                           ; 004bf571
    SAHF                                ; 004bf573
    JNC 0x004bf587                      ; 004bf574
        ;   XREF to: 004bf587 (CONDITIONAL_JUMP)  ; LAB_004bf587
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bf576
    MOV dword ptr [EAX + 0x8],0x1       ; 004bf579
    MOV dword ptr [EAX + 0x4],0x1       ; 004bf580
    MOV EAX,[0x01cb3948]                ; 004bf587 | DAT_01cb3948
        ;   Label: LAB_004bf587
    PUSH EAX                            ; 004bf58c
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004bf58d
    CALL dword ptr [EDX + 0x114]        ; 004bf593
    ADD ESP,0x4                         ; 004bf599
    TEST EAX,EAX                        ; 004bf59c
    JZ 0x004bf5a8                       ; 004bf59e
        ;   XREF to: 004bf5a8 (CONDITIONAL_JUMP)  ; LAB_004bf5a8
    XOR EDI,EDI                         ; 004bf5a0
    MOV dword ptr [0x01cb3948],EDI      ; 004bf5a2 | DAT_01cb3948
    MOV EAX,[0x01c2a384]                ; 004bf5a8 | DAT_01c2a384
        ;   Label: LAB_004bf5a8
    MOV [0x01cb3920],EAX                ; 004bf5ad | DAT_01cb3920
    MOV EAX,[0x01cedef4]                ; 004bf5b2 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf5b7
    ADD EAX,0x20                        ; 004bf5be
    CMP EAX,0x1cb3934                   ; 004bf5c1
    JNZ 0x004bfa45                      ; 004bf5c6
        ;   XREF to: 004bfa45 (CONDITIONAL_JUMP)  ; LAB_004bfa45
    MOV ESP,EBP                         ; 004bf5cc
    POP EBP                             ; 004bf5ce
    POP EDI                             ; 004bf5cf
    POP ESI                             ; 004bf5d0
    POP EBX                             ; 004bf5d1
    RET                                 ; 004bf5d2
    MOV DL,AH                           ; 004bf5d3
        ;   Label: LAB_004bf5d3
    OR DL,0x1                           ; 004bf5d5
    MOV byte ptr [0x01cb394c],DL        ; 004bf5d8 | DAT_01cb394c
    JMP 0x004be8be                      ; 004bf5de
        ;   XREF to: 004be8be (UNCONDITIONAL_JUMP)  ; LAB_004be8be
    MOV BL,DH                           ; 004bf5e3
        ;   Label: LAB_004bf5e3
    OR BL,0x2                           ; 004bf5e5
    MOV byte ptr [0x01cb394c],BL        ; 004bf5e8 | DAT_01cb394c
    JMP 0x004be8d8                      ; 004bf5ee
        ;   XREF to: 004be8d8 (UNCONDITIONAL_JUMP)  ; LAB_004be8d8
    MOV dword ptr [EDX],0x0             ; 004bf5f3
        ;   Label: LAB_004bf5f3
    JMP 0x004be9fc                      ; 004bf5f9
        ;   XREF to: 004be9fc (UNCONDITIONAL_JUMP)  ; LAB_004be9fc
    MOV dword ptr [EDX],0x0             ; 004bf5fe
        ;   Label: LAB_004bf5fe
    JMP 0x004bea25                      ; 004bf604
        ;   XREF to: 004bea25 (UNCONDITIONAL_JUMP)  ; LAB_004bea25
    MOV dword ptr [EDX],0x0             ; 004bf609
        ;   Label: LAB_004bf609
    JMP 0x004bea4e                      ; 004bf60f
        ;   XREF to: 004bea4e (UNCONDITIONAL_JUMP)  ; LAB_004bea4e
    MOV dword ptr [EDX],0x0             ; 004bf614
        ;   Label: LAB_004bf614
    JMP 0x004bea7a                      ; 004bf61a
        ;   XREF to: 004bea7a (UNCONDITIONAL_JUMP)  ; LAB_004bea7a
    PUSH 0x1                            ; 004bf61f
        ;   Label: LAB_004bf61f
    MOV EAX,[0x01cedef4]                ; 004bf621 | DAT_01cedef4
    PUSH 0x5                            ; 004bf626
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf628
    PUSH 0x0                            ; 004bf62f
    ADD EAX,0x2437c                     ; 004bf631
    PUSH EAX                            ; 004bf636
    CALL core_inv.cpp_FUN_004db9d0      ; 004bf637
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004bf63c
    JMP 0x004beacd                      ; 004bf63f
        ;   XREF to: 004beacd (UNCONDITIONAL_JUMP)  ; LAB_004beacd
    PUSH -0x1                           ; 004bf644
        ;   Label: LAB_004bf644
    MOV EAX,[0x01cedef4]                ; 004bf646 | DAT_01cedef4
    PUSH 0x5                            ; 004bf64b
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf64d
    PUSH 0x0                            ; 004bf654
    ADD EAX,0x2437c                     ; 004bf656
    PUSH EAX                            ; 004bf65b
    CALL core_inv.cpp_FUN_004db9d0      ; 004bf65c
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004bf661
    JMP 0x004beb20                      ; 004bf664
        ;   XREF to: 004beb20 (UNCONDITIONAL_JUMP)  ; LAB_004beb20
    PUSH 0x1                            ; 004bf669
        ;   Label: LAB_004bf669
    MOV EAX,[0x01cedef4]                ; 004bf66b | DAT_01cedef4
    PUSH 0x0                            ; 004bf670
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf672
    PUSH 0x0                            ; 004bf679
    ADD EAX,0x2437c                     ; 004bf67b
    PUSH EAX                            ; 004bf680
    CALL core_inv.cpp_FUN_004db9d0      ; 004bf681
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004bf686
    JMP 0x004bec4e                      ; 004bf689
        ;   XREF to: 004bec4e (UNCONDITIONAL_JUMP)  ; LAB_004bec4e
    PUSH 0x1                            ; 004bf68e
        ;   Label: LAB_004bf68e
    MOV EAX,[0x01cedef4]                ; 004bf690 | DAT_01cedef4
    PUSH 0x3                            ; 004bf695
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf697
    PUSH 0x0                            ; 004bf69e
    ADD EAX,0x2437c                     ; 004bf6a0
    PUSH EAX                            ; 004bf6a5
    CALL core_inv.cpp_FUN_004db9d0      ; 004bf6a6
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004bf6ab
    JMP 0x004beca0                      ; 004bf6ae
        ;   XREF to: 004beca0 (UNCONDITIONAL_JUMP)  ; LAB_004beca0
    PUSH 0x1                            ; 004bf6b3
        ;   Label: LAB_004bf6b3
    MOV EAX,[0x01cedef4]                ; 004bf6b5 | DAT_01cedef4
    PUSH 0x6                            ; 004bf6ba
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf6bc
    PUSH 0x0                            ; 004bf6c3
    ADD EAX,0x2437c                     ; 004bf6c5
    PUSH EAX                            ; 004bf6ca
    CALL core_inv.cpp_FUN_004db9d0      ; 004bf6cb
        ;   XREF to: 004db9d0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004db9d0()
    ADD ESP,0x10                        ; 004bf6d0
    JMP 0x004becf3                      ; 004bf6d3
        ;   XREF to: 004becf3 (UNCONDITIONAL_JUMP)  ; LAB_004becf3
    MOV EAX,[0x0061b460]                ; 004bf6d8 | g_CScriptPtr
        ;   Label: LAB_004bf6d8
    PUSH EAX                            ; 004bf6dd
    CALL core_script.cpp_CScript_getLetterboxHeight_FUN_00521840 ; 004bf6de
        ;   XREF to: 00521840 (UNCONDITIONAL_CALL)  ; int core_script.cpp_CScript_getLetterboxHeight_FUN_00521840(CScript * this_ptr)
    ADD ESP,0x4                         ; 004bf6e3
    CMP EAX,0x2                         ; 004bf6e6
    JG 0x004bed00                       ; 004bf6e9
        ;   XREF to: 004bed00 (CONDITIONAL_JUMP)  ; LAB_004bed00
    JMP 0x004bed20                      ; 004bf6ef
        ;   XREF to: 004bed20 (UNCONDITIONAL_JUMP)  ; LAB_004bed20
    MOV EAX,dword ptr [ESP + 0x1e0]     ; 004bf6f4
        ;   Label: LAB_004bf6f4
    TEST EAX,EAX                        ; 004bf6fb
    JNZ 0x004bf02d                      ; 004bf6fd
        ;   XREF to: 004bf02d (CONDITIONAL_JUMP)  ; LAB_004bf02d
    MOV [0x01cb3948],EAX                ; 004bf703 | DAT_01cb3948
    JMP 0x004bf02d                      ; 004bf708
        ;   XREF to: 004bf02d (UNCONDITIONAL_JUMP)  ; LAB_004bf02d
    MOV EAX,dword ptr [ESP + 0x1e4]     ; 004bf70d
        ;   Label: LAB_004bf70d
    ADD EAX,0x20                        ; 004bf714
    CMP EAX,0x1cb3924                   ; 004bf717
    JZ 0x004bf0e7                       ; 004bf71c
        ;   XREF to: 004bf0e7 (CONDITIONAL_JUMP)  ; LAB_004bf0e7
    FLD float ptr [EAX]                 ; 004bf722
    FLD float ptr [EAX + 0x8]           ; 004bf724
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bf727
    MOV dword ptr [0x01cb3928],EDX      ; 004bf72a | DAT_01cb3928
    FSTP float ptr [0x01cb392c]         ; 004bf730 | DAT_01cb392c
    FSTP float ptr [0x01cb3924]         ; 004bf736 | DAT_01cb3924
    JMP 0x004bf0e7                      ; 004bf73c
        ;   XREF to: 004bf0e7 (UNCONDITIONAL_JUMP)  ; LAB_004bf0e7
    MOV EDX,dword ptr [ESP + 0x1f4]     ; 004bf741
        ;   Label: LAB_004bf741
    CMP EDX,0x20                        ; 004bf748
    JGE 0x004bf94a                      ; 004bf74b
        ;   XREF to: 004bf94a (CONDITIONAL_JUMP)  ; LAB_004bf94a
    LEA EAX,[ESP + 0x168]               ; 004bf751
        ;   Label: LAB_004bf751
    PUSH EAX                            ; 004bf758
    LEA ESI,[ESP + 0xe8]                ; 004bf759
    PUSH 0x1fc7838                      ; 004bf760
    LEA EDI,[ESP + 0x170]               ; 004bf765
    LEA EBX,[ESP + 0x17c]               ; 004bf76c
    CALL core_dcamera.cpp_FUN_0043c780  ; 004bf773
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[ESP + 0xec]                ; 004bf778
    ADD ESP,0x8                         ; 004bf77f
    LEA EAX,[ESP + 0x168]               ; 004bf782
    MOVSD ES:EDI,ESI                    ; 004bf789
    MOVSD ES:EDI,ESI                    ; 004bf78a
    MOVSD ES:EDI,ESI                    ; 004bf78b
    FILD dword ptr [EAX]                ; 004bf78c
    FMUL float ptr [0x005f7558]         ; 004bf78e | DAT_005f7558
    FSTP float ptr [EBX]                ; 004bf794
    FILD dword ptr [EAX + 0x4]          ; 004bf796
    FMUL float ptr [0x005f7558]         ; 004bf799 | DAT_005f7558
    FSTP float ptr [EBX + 0x4]          ; 004bf79f
    FILD dword ptr [EAX + 0x8]          ; 004bf7a2
    FMUL float ptr [0x005f7558]         ; 004bf7a5 | DAT_005f7558
    FSTP float ptr [EBX + 0x8]          ; 004bf7ab
    FLD float ptr [ESP + 0x174]         ; 004bf7ae
    FLD float ptr [ESP + 0x178]         ; 004bf7b5
    MOV EAX,[0x01cedef4]                ; 004bf7bc | DAT_01cedef4
    FLD float ptr [ESP + 0x17c]         ; 004bf7c1
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004bf7c8
    LEA EDI,[ESP + 0x138]               ; 004bf7cf
    LEA ESI,[ESP + 0x24]                ; 004bf7d6
    FXCH ST2                            ; 004bf7da
    FSUB float ptr [EAX + 0x20]         ; 004bf7dc
    FXCH                                ; 004bf7df
    FSUB float ptr [EAX + 0x24]         ; 004bf7e1
    FXCH ST2                            ; 004bf7e4
    FSUB float ptr [EAX + 0x28]         ; 004bf7e6
    FXCH                                ; 004bf7e9
    FSTP float ptr [ESP + 0x24]         ; 004bf7eb
    FXCH                                ; 004bf7ef
    FSTP float ptr [ESP + 0x28]         ; 004bf7f1
    FSTP float ptr [ESP + 0x2c]         ; 004bf7f5
    MOVSD ES:EDI,ESI                    ; 004bf7f9
    MOVSD ES:EDI,ESI                    ; 004bf7fa
    MOVSD ES:EDI,ESI                    ; 004bf7fb
    FLD float ptr [ESP + 0x138]         ; 004bf7fc
    FMUL ST0                            ; 004bf803
    FLD float ptr [ESP + 0x140]         ; 004bf805
    FMUL ST0                            ; 004bf80c
    FADDP                               ; 004bf80e
    FSQRT                               ; 004bf810
    XOR EDX,EDX                         ; 004bf812
    FLDZ                                ; 004bf814
    MOV dword ptr [ESP + 0x13c],EDX     ; 004bf816
    FXCH                                ; 004bf81d
    FSTP float ptr [ESP + 0x1d0]        ; 004bf81f
    FCOMP float ptr [ESP + 0x1d0]       ; 004bf826
    FNSTSW AX                           ; 004bf82d
    SAHF                                ; 004bf82f
    JNC 0x004bf9f0                      ; 004bf830
        ;   XREF to: 004bf9f0 (CONDITIONAL_JUMP)  ; LAB_004bf9f0
    FLD1                                ; 004bf836
    FLD float ptr [ESP + 0x138]         ; 004bf838
    FXCH                                ; 004bf83f
    FDIV float ptr [ESP + 0x1d0]        ; 004bf841
    FXCH                                ; 004bf848
    FMUL ST1                            ; 004bf84a
    FLDZ                                ; 004bf84c
    FMUL ST2                            ; 004bf84e
    FLD float ptr [ESP + 0x140]         ; 004bf850
    FMULP ST3                           ; 004bf857
    FXCH                                ; 004bf859
    FSTP float ptr [ESP + 0x138]        ; 004bf85b
    FSTP float ptr [ESP + 0x13c]        ; 004bf862
    FSTP float ptr [ESP + 0x140]        ; 004bf869
    FLD float ptr [ESP + 0x1dc]         ; 004bf870
        ;   Label: LAB_004bf870
    FLD float ptr [ESP + 0x138]         ; 004bf877
    FMUL ST1                            ; 004bf87e
    FLD float ptr [ESP + 0x13c]         ; 004bf880
    FMUL ST2                            ; 004bf887
    FLD float ptr [ESP + 0x140]         ; 004bf889
    FMULP ST3                           ; 004bf890
    FLD float ptr [ESP + 0x174]         ; 004bf892
    FLD float ptr [ESP + 0x178]         ; 004bf899
    FLD float ptr [ESP + 0x17c]         ; 004bf8a0
    LEA EDI,[ESP + 0x84]                ; 004bf8a7
    LEA ESI,[ESP + 0x78]                ; 004bf8ae
    FXCH ST4                            ; 004bf8b2
    FSTP float ptr [ESP + 0x78]         ; 004bf8b4
    FXCH ST2                            ; 004bf8b8
    FSTP float ptr [ESP + 0x7c]         ; 004bf8ba
    FXCH ST3                            ; 004bf8be
    FSTP float ptr [ESP + 0x80]         ; 004bf8c0
    MOVSD ES:EDI,ESI                    ; 004bf8c7
    MOVSD ES:EDI,ESI                    ; 004bf8c8
    MOVSD ES:EDI,ESI                    ; 004bf8c9
    LEA EAX,[ESP + 0x18c]               ; 004bf8ca
    LEA EDI,[ESP + 0x18c]               ; 004bf8d1
    LEA ESI,[ESP + 0xc]                 ; 004bf8d8
    FXCH ST2                            ; 004bf8dc
    FADD float ptr [ESP + 0x84]         ; 004bf8de
    FXCH ST2                            ; 004bf8e5
    FADD float ptr [ESP + 0x88]         ; 004bf8e7
    FXCH                                ; 004bf8ee
    FADD float ptr [ESP + 0x8c]         ; 004bf8f0
    FXCH ST2                            ; 004bf8f7
    FSTP float ptr [ESP + 0xc]          ; 004bf8f9
    FSTP float ptr [ESP + 0x10]         ; 004bf8fd
    FSTP float ptr [ESP + 0x14]         ; 004bf901
    MOVSD ES:EDI,ESI                    ; 004bf905
    MOVSD ES:EDI,ESI                    ; 004bf906
    MOVSD ES:EDI,ESI                    ; 004bf907
    CMP EAX,0x1cb3924                   ; 004bf908
    JZ 0x004bf933                       ; 004bf90d
        ;   XREF to: 004bf933 (CONDITIONAL_JUMP)  ; LAB_004bf933
    MOV EAX,dword ptr [ESP + 0x18c]     ; 004bf90f
    MOV [0x01cb3924],EAX                ; 004bf916 | DAT_01cb3924
    MOV EAX,dword ptr [ESP + 0x190]     ; 004bf91b
    MOV [0x01cb3928],EAX                ; 004bf922 | DAT_01cb3928
    MOV EAX,dword ptr [ESP + 0x194]     ; 004bf927
    MOV [0x01cb392c],EAX                ; 004bf92e | DAT_01cb392c
    XOR EAX,EAX                         ; 004bf933
        ;   Label: LAB_004bf933
    MOV EDI,0x1                         ; 004bf935
    MOV [0x01cb3940],EAX                ; 004bf93a | DAT_01cb3940
    MOV dword ptr [0x01cb3930],EDI      ; 004bf93f | DAT_01cb3930
    JMP 0x004bf0fa                      ; 004bf945
        ;   XREF to: 004bf0fa (UNCONDITIONAL_JUMP)  ; LAB_004bf0fa
    MOV EAX,dword ptr [ESP + 0x1f8]     ; 004bf94a
        ;   Label: LAB_004bf94a
    SUB EAX,0x20                        ; 004bf951
    CMP EAX,EDX                         ; 004bf954
    JL 0x004bf751                       ; 004bf956
        ;   XREF to: 004bf751 (CONDITIONAL_JUMP)  ; LAB_004bf751
    MOV EBX,dword ptr [ESP + 0x1f0]     ; 004bf95c
    CMP EBX,0x20                        ; 004bf963
    JL 0x004bf751                       ; 004bf966
        ;   XREF to: 004bf751 (CONDITIONAL_JUMP)  ; LAB_004bf751
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 004bf96c
    SUB EAX,0x20                        ; 004bf973
    CMP EAX,EBX                         ; 004bf976
    JL 0x004bf751                       ; 004bf978
        ;   XREF to: 004bf751 (CONDITIONAL_JUMP)  ; LAB_004bf751
    LEA EAX,[ESP + 0x168]               ; 004bf97e
    PUSH EAX                            ; 004bf985
    LEA ESI,[ESP + 0xac]                ; 004bf986
    PUSH 0x1fc7838                      ; 004bf98d
    LEA EDI,[ESP + 0x170]               ; 004bf992
    MOV EBX,0x1cb3924                   ; 004bf999
    CALL core_dcamera.cpp_FUN_0043c780  ; 004bf99e
        ;   XREF to: 0043c780 (UNCONDITIONAL_CALL)  ; undefined core_dcamera.cpp_FUN_0043c780()
    LEA ESI,[ESP + 0xb0]                ; 004bf9a3
    ADD ESP,0x8                         ; 004bf9aa
    LEA EAX,[ESP + 0x168]               ; 004bf9ad
    MOVSD ES:EDI,ESI                    ; 004bf9b4
    MOVSD ES:EDI,ESI                    ; 004bf9b5
    MOVSD ES:EDI,ESI                    ; 004bf9b6
    FILD dword ptr [EAX]                ; 004bf9b7
    FMUL float ptr [0x005f7558]         ; 004bf9b9 | DAT_005f7558
    FSTP float ptr [EBX]                ; 004bf9bf | DAT_01cb3924
    FILD dword ptr [EAX + 0x4]          ; 004bf9c1
    FMUL float ptr [0x005f7558]         ; 004bf9c4 | DAT_005f7558
    FSTP float ptr [EBX + 0x4]          ; 004bf9ca | DAT_01cb3928
    FILD dword ptr [EAX + 0x8]          ; 004bf9cd
    FMUL float ptr [0x005f7558]         ; 004bf9d0 | DAT_005f7558
    FSTP float ptr [EBX + 0x8]          ; 004bf9d6 | DAT_01cb392c
    MOV EDI,0x1                         ; 004bf9d9
    XOR EAX,EAX                         ; 004bf9de
    MOV dword ptr [0x01cb3930],EDI      ; 004bf9e0 | DAT_01cb3930
    MOV [0x01cb3940],EAX                ; 004bf9e6 | DAT_01cb3940
    JMP 0x004bf0fa                      ; 004bf9eb
        ;   XREF to: 004bf0fa (UNCONDITIONAL_JUMP)  ; LAB_004bf0fa
    MOV dword ptr [ESP + 0x138],EDX     ; 004bf9f0
        ;   Label: LAB_004bf9f0
    MOV dword ptr [ESP + 0x140],EDX     ; 004bf9f7
    JMP 0x004bf870                      ; 004bf9fe
        ;   XREF to: 004bf870 (UNCONDITIONAL_JUMP)  ; LAB_004bf870
    XOR EDI,EDI                         ; 004bfa03
        ;   Label: LAB_004bfa03
    MOV dword ptr [0x01cb3944],EDI      ; 004bfa05 | DAT_01cb3944
    JMP 0x004bf18b                      ; 004bfa0b
        ;   XREF to: 004bf18b (UNCONDITIONAL_JUMP)  ; LAB_004bf18b
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bfa10
        ;   Label: LAB_004bfa10
    MOV dword ptr [EAX + 0xc],0x1       ; 004bfa13
    JMP 0x004bf241                      ; 004bfa1a
        ;   XREF to: 004bf241 (UNCONDITIONAL_JUMP)  ; LAB_004bf241
    MOV EAX,dword ptr [EBP + 0x18]      ; 004bfa1f
        ;   Label: LAB_004bfa1f
    MOV dword ptr [EAX + 0xc],0x1       ; 004bfa22
    JMP 0x004bf2e8                      ; 004bfa29
        ;   XREF to: 004bf2e8 (UNCONDITIONAL_JUMP)  ; LAB_004bf2e8
    XOR EDI,EDI                         ; 004bfa2e
        ;   Label: LAB_004bfa2e
    MOV dword ptr [0x01cb3940],EDI      ; 004bfa30 | DAT_01cb3940
    JMP 0x004bf2e8                      ; 004bfa36
        ;   XREF to: 004bf2e8 (UNCONDITIONAL_JUMP)  ; LAB_004bf2e8
    MOV [0x01cb3930],EAX                ; 004bfa3b | DAT_01cb3930
        ;   Label: LAB_004bfa3b
    JMP 0x004bf3c7                      ; 004bfa40
        ;   XREF to: 004bf3c7 (UNCONDITIONAL_JUMP)  ; LAB_004bf3c7
    FLD float ptr [EAX]                 ; 004bfa45
        ;   Label: LAB_004bfa45
    FLD float ptr [EAX + 0x8]           ; 004bfa47
    MOV EDX,dword ptr [EAX + 0x4]       ; 004bfa4a
    MOV dword ptr [0x01cb3938],EDX      ; 004bfa4d | DAT_01cb3938
    FSTP float ptr [0x01cb393c]         ; 004bfa53 | DAT_01cb393c
    FSTP float ptr [0x01cb3934]         ; 004bfa59 | DAT_01cb3934
    MOV ESP,EBP                         ; 004bfa5f
    POP EBP                             ; 004bfa61
    POP EDI                             ; 004bfa62
    POP ESI                             ; 004bfa63
    POP EBX                             ; 004bfa64
    RET                                 ; 004bfa65

