; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ghoul_cpp_CGhoul_setup_FUN_004c1710(CGhoul *this_ptr)
;
; Parameters:
; CGhoul *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 s_Bip01_Head_005d8e9e+1
;   TerminatedCString s_Bip01_L_ForeArm_005d8eaa
;   TerminatedCString s_Bip01_R_ForeArm_005d8eba
;   TerminatedCString s_Bip01_L_UpperArm_005d8eca
;   TerminatedCString s_Bip01_R_UpperArm_005d8edb
;   TerminatedCString s_Bip01_L_Foot_005d8eec
;   TerminatedCString s_Bip01_R_Foot_005d8ef9
;   TerminatedCString s_Bip01_L_Hand_005d8f06
;   TerminatedCString s_Bip01_R_Hand_005d8f13
;   TerminatedCString s_Bip01_Spine_005d8f20
;   TerminatedCString s_Bip01_Spine2_005d8f2c
;   TerminatedCString s_r_high_arm01_005d8f39
;   TerminatedCString s_r_lo_arm01_005d8f46
;   TerminatedCString s_l_high_arm01_005d8f51
;   TerminatedCString s_l_lo_arm01_005d8f5e
;   ... and 18 more
;
; Called Functions:
;   core_enemy.cpp_CEnemy_setup_FUN_00487eb0
;   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480
;   core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c1710
        ;   Label: core_ghoul.cpp_CGhoul_setup_FUN_004c1710
    PUSH ESI                            ; 004c1711
    MOV EBX,dword ptr [ESP + 0xc]       ; 004c1712
    PUSH EDI                            ; 004c1716
    LEA EDI,[EBX + 0x2b4]               ; 004c1717
    PUSH EDI                            ; 004c171d
    CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480 ; 004c171e
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_00547480(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c1723
    PUSH EDI                            ; 004c1726
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 004c1727
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c172c
    PUSH 0x1                            ; 004c172f
    PUSH 0x5d8e9f                       ; 004c1731 | s_Bip01_Head_005d8e9e+1
    PUSH EAX                            ; 004c1736
    MOV ESI,EAX                         ; 004c1737
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c1739
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c173e
    PUSH 0x1                            ; 004c1741
    PUSH 0x5d8eaa                       ; 004c1743 | = "Bip01 L ForeArm"
    PUSH ESI                            ; 004c1748
    MOV [0x01cb821c],EAX                ; 004c1749 | DAT_01cb821c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c174e
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c1753
    PUSH 0x1                            ; 004c1756
    PUSH 0x5d8eba                       ; 004c1758 | = "Bip01 R ForeArm"
    PUSH ESI                            ; 004c175d
    MOV [0x01cb8228],EAX                ; 004c175e | DAT_01cb8228
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c1763
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c1768
    PUSH 0x1                            ; 004c176b
    PUSH 0x5d8eca                       ; 004c176d | = "Bip01 L UpperArm"
    PUSH ESI                            ; 004c1772
    MOV [0x01cb822c],EAX                ; 004c1773 | DAT_01cb822c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c1778
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c177d
    PUSH 0x1                            ; 004c1780
    PUSH 0x5d8edb                       ; 004c1782 | = "Bip01 R UpperArm"
    PUSH ESI                            ; 004c1787
    MOV [0x01cb8230],EAX                ; 004c1788 | DAT_01cb8230
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c178d
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c1792
    PUSH 0x1                            ; 004c1795
    PUSH 0x5d8eec                       ; 004c1797 | = "Bip01 L Foot"
    PUSH ESI                            ; 004c179c
    MOV [0x01cb8234],EAX                ; 004c179d | DAT_01cb8234
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c17a2
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c17a7
    PUSH 0x1                            ; 004c17aa
    PUSH 0x5d8ef9                       ; 004c17ac | = "Bip01 R Foot"
    PUSH ESI                            ; 004c17b1
    MOV [0x01cb8238],EAX                ; 004c17b2 | DAT_01cb8238
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c17b7
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c17bc
    PUSH 0x1                            ; 004c17bf
    PUSH 0x5d8f06                       ; 004c17c1 | = "Bip01 L Hand"
    PUSH ESI                            ; 004c17c6
    MOV [0x01cb823c],EAX                ; 004c17c7 | DAT_01cb823c
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c17cc
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c17d1
    PUSH 0x1                            ; 004c17d4
    PUSH 0x5d8f13                       ; 004c17d6 | = "Bip01 R Hand"
    PUSH ESI                            ; 004c17db
    MOV [0x01cb8220],EAX                ; 004c17dc | DAT_01cb8220
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c17e1
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c17e6
    MOV [0x01cb8224],EAX                ; 004c17e9 | DAT_01cb8224
    PUSH 0x1                            ; 004c17ee
    PUSH 0x5d8f20                       ; 004c17f0 | = "Bip01 Spine"
    PUSH ESI                            ; 004c17f5
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c17f6
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c17fb
    PUSH 0x1                            ; 004c17fe
    PUSH 0x5d8f2c                       ; 004c1800 | = "Bip01 Spine2"
    PUSH ESI                            ; 004c1805
    MOV [0x01cb8240],EAX                ; 004c1806 | DAT_01cb8240
    CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80 ; 004c180b
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CSkeleton_findBone_FUN_00540e80(CSkeleton * this_ptr, char * bone_name, int assert_if_not_found)
    ADD ESP,0xc                         ; 004c1810
    PUSH EDI                            ; 004c1813
    MOV [0x01cb8244],EAX                ; 004c1814 | DAT_01cb8244
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004c1819
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c181e
    PUSH 0x1                            ; 004c1821
    PUSH 0x5d8f39                       ; 004c1823 | = "r high arm01"
    PUSH EAX                            ; 004c1828
    MOV ESI,EAX                         ; 004c1829
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c182b
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c1830
    PUSH 0x1                            ; 004c1833
    PUSH 0x5d8f46                       ; 004c1835 | = "r lo arm01"
    PUSH ESI                            ; 004c183a
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 004c183b
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c1841
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c1846
    PUSH 0x1                            ; 004c1849
    PUSH 0x5d8f51                       ; 004c184b | = "l high arm01"
    PUSH ESI                            ; 004c1850
    MOV dword ptr [EBX + 0x10b20],EAX   ; 004c1851
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c1857
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c185c
    PUSH 0x1                            ; 004c185f
    PUSH 0x5d8f5e                       ; 004c1861 | = "l lo arm01"
    PUSH ESI                            ; 004c1866
    MOV dword ptr [EBX + 0x10b24],EAX   ; 004c1867
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c186d
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c1872
    PUSH 0x1                            ; 004c1875
    PUSH 0x5d8f69                       ; 004c1877 | = "r thigh01"
    PUSH ESI                            ; 004c187c
    MOV dword ptr [EBX + 0x10b28],EAX   ; 004c187d
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c1883
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c1888
    PUSH 0x1                            ; 004c188b
    PUSH 0x5d8f73                       ; 004c188d | = "r shin01"
    PUSH ESI                            ; 004c1892
    MOV dword ptr [EBX + 0x10b2c],EAX   ; 004c1893
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c1899
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c189e
    PUSH 0x1                            ; 004c18a1
    PUSH 0x5d8f7c                       ; 004c18a3 | = "l thigh01"
    PUSH ESI                            ; 004c18a8
    MOV dword ptr [EBX + 0x10b30],EAX   ; 004c18a9
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c18af
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c18b4
    MOV dword ptr [EBX + 0x10b34],EAX   ; 004c18b7
    POP EDI                             ; 004c18bd
    PUSH 0x1                            ; 004c18be
    PUSH 0x5d8f86                       ; 004c18c0 | = "l shin01"
    PUSH ESI                            ; 004c18c5
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c18c6
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c18cb
    PUSH 0x1                            ; 004c18ce
    PUSH 0x5d8f8f                       ; 004c18d0 | = "lo torso01"
    PUSH ESI                            ; 004c18d5
    MOV dword ptr [EBX + 0x10b38],EAX   ; 004c18d6
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c18dc
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c18e1
    PUSH 0x1                            ; 004c18e4
    PUSH 0x5d8f9a                       ; 004c18e6 | = "high torso01"
    PUSH ESI                            ; 004c18eb
    MOV dword ptr [EBX + 0x10b3c],EAX   ; 004c18ec
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c18f2
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c18f7
    PUSH 0x1                            ; 004c18fa
    PUSH 0x5d8fa7                       ; 004c18fc | = "head01"
    PUSH ESI                            ; 004c1901
    MOV dword ptr [EBX + 0x10b40],EAX   ; 004c1902
    CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100 ; 004c1908
        ;   XREF to: 00543100 (UNCONDITIONAL_CALL)  ; int core_skeleton.cpp_CDeformableModel_findPartByName_FUN_00543100(CDeformableModel * this_ptr, char * part_name, int error_if_not_found)
    ADD ESP,0xc                         ; 004c190d
    PUSH EBX                            ; 004c1910
    MOV dword ptr [EBX + 0x10b44],EAX   ; 004c1911
    CALL core_enemy.cpp_CEnemy_setup_FUN_00487eb0 ; 004c1917
        ;   XREF to: 00487eb0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00487eb0(CEnemy * this_ptr)
    MOV dword ptr [EBX + 0x10b54],0x0   ; 004c191c
    MOV dword ptr [EBX + 0x10b58],0x0   ; 004c1926
    MOV dword ptr [EBX + 0x10b5c],0x0   ; 004c1930
    MOV dword ptr [EBX + 0x10b60],0x0   ; 004c193a
    MOV dword ptr [EBX + 0x10b64],0x0   ; 004c1944
    MOV dword ptr [EBX + 0x10b48],0x0   ; 004c194e
    MOV dword ptr [EBX + 0x10b4c],0x0   ; 004c1958
    ADD ESP,0x4                         ; 004c1962
    MOV dword ptr [EBX + 0x10b50],0x0   ; 004c1965
    POP ESI                             ; 004c196f
    POP EBX                             ; 004c1970
    RET                                 ; 004c1971

