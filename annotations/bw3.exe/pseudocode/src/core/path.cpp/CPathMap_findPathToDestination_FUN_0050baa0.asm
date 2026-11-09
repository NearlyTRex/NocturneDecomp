; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_CPathMap_findPathToDestination_FUN_0050baa0(CPathMap *this_ptr,CVector3f *dest_position,CVector3f *out_euler_angles,int direction_hint)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   dest_position
; CVector3f *      Stack[0xc]:4   out_euler_angles
; int              Stack[0x10]:4   direction_hint
; Local Variables:
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined4       Stack[-0x1d0]:4  local_1d0
; undefined4       Stack[-0x1cc]:4  local_1cc
; undefined4       Stack[-0x1c8]:4  local_1c8
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined        Stack[-0x1c0]:1  local_1c0
; undefined4       Stack[-0x1b4]:4  local_1b4
; undefined4       Stack[-0x1b0]:4  local_1b0
; undefined4       Stack[-0x1ac]:4  local_1ac
; undefined        Stack[-0x1a8]:1  local_1a8
; undefined4       Stack[-0x19c]:4  local_19c
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined        Stack[-0x190]:1  local_190
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined4       Stack[-0x15c]:4  local_15c
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x154]:1  local_154
; undefined        Stack[-0x148]:1  local_148
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined4       Stack[-0x128]:4  local_128
; undefined4       Stack[-0x124]:4  local_124
; undefined4       Stack[-0x11c]:4  local_11c
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined        Stack[-0x100]:1  local_100
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 at 0050c6be
;
; Referenced Globals:
;   void* switchdataD_0050ba74 = 0050bb09
;   TerminatedCString s_core_path_cpp_005cb864
;   TerminatedCString s_Out_of_bounds1_005cb875
;   TerminatedCString s_core_path_cpp_005cb885
;   TerminatedCString s_Out_of_bounds2_005cb896
;   TerminatedCString s_core_path_cpp_005cb8a6
;   TerminatedCString s_Out_of_bounds3_005cb8b7
;   TerminatedCString s_core_path_cpp_005cb8c7
;   TerminatedCString s_Out_of_bounds4_005cb8d8
;   undefined4 DAT_00603664
;   undefined4 DAT_00603688
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_01ec183c
;   undefined4 DAT_01ec1840
;   ... and 7 more
;
; Called Functions:
;   core_dtrace.cpp_FUN_00477ac0
;   core_main.c_FUN_004e4330
;   core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_0050b610
;   core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320
;   core_path.cpp_CPathMap_isLineWalkable_FUN_0050b3c0
;   core_path.cpp_CPathMap_searchGrid_FUN_0050d170
;   core_path.cpp_FUN_0050ae20
;   core_vecdir.cpp_FUN_00576250
;   crt_math.c_round_FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050baa0
        ;   Label: core_path.cpp_CPathMap_findPathToDestination_FUN_0050baa0
    PUSH ESI                            ; 0050baa1
    PUSH EDI                            ; 0050baa2
    PUSH EBP                            ; 0050baa3
    SUB ESP,0x1d4                       ; 0050baa4
    MOV EBP,dword ptr [ESP + 0x1e8]     ; 0050baaa
    MOV EBX,dword ptr [ESP + 0x1f4]     ; 0050bab1
    MOV EDX,dword ptr [ESP + 0x1ec]     ; 0050bab8
    PUSH EDX                            ; 0050babf
    PUSH 0x203b37c                      ; 0050bac0 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0xec]                ; 0050bac5
    CALL core_dtrace.cpp_FUN_00477ac0   ; 0050bacc
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477ac0()
    LEA ESI,[ESP + 0xec]                ; 0050bad1
    ADD ESP,0x8                         ; 0050bad8
    LEA EDI,[EBP + 0x18]                ; 0050badb
    MOV EAX,EBX                         ; 0050bade
    MOV EDX,EBX                         ; 0050bae0
    MOVSD ES:EDI,ESI                    ; 0050bae2
    MOVSD ES:EDI,ESI                    ; 0050bae3
    MOVSD ES:EDI,ESI                    ; 0050bae4
    SAR EDX,0x1f                        ; 0050bae5
    MOV ESI,0x9                         ; 0050bae8
    IDIV ESI                            ; 0050baed
    XOR ECX,ECX                         ; 0050baef
    MOV dword ptr [ESP + 0x30],ECX      ; 0050baf1
    MOV dword ptr [ESP + 0x34],ECX      ; 0050baf5
    MOV dword ptr [ESP + 0x38],ECX      ; 0050baf9
    CMP EDX,0x8                         ; 0050bafd
    JA 0x0050bb09                       ; 0050bb00
        ;   XREF to: 0050bb09 (CONDITIONAL_JUMP)  ; caseD_0
    JMP dword ptr [EDX*0x4 + 0x50ba74]  ; 0050bb02 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0xc]       ; 0050bb09
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x18]      ; 0050bb0c
    SUB EAX,EDX                         ; 0050bb0f
    MOV dword ptr [ESP + 0xc0],EAX      ; 0050bb11
    CDQ                                 ; 0050bb18
    XOR EAX,EDX                         ; 0050bb19
    SUB EAX,EDX                         ; 0050bb1b
    CMP EAX,0x32                        ; 0050bb1d
    JL 0x0050bc55                       ; 0050bb20
        ;   XREF to: 0050bc55 (CONDITIONAL_JUMP)  ; LAB_0050bc55
    FLD float ptr [EBP]                 ; 0050bb26
    FLD float ptr [EBP + 0x4]           ; 0050bb29
    FLD float ptr [EBP + 0x8]           ; 0050bb2c
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050bb2f
    LEA EDI,[ESP + 0x108]               ; 0050bb36
    LEA ESI,[ESP + 0xb4]                ; 0050bb3d
    FXCH ST2                            ; 0050bb44
    FSUB float ptr [EAX]                ; 0050bb46
    FXCH                                ; 0050bb48
    FSUB float ptr [EAX + 0x4]          ; 0050bb4a
    FXCH ST2                            ; 0050bb4d
    FSUB float ptr [EAX + 0x8]          ; 0050bb4f
    FXCH                                ; 0050bb52
    FSTP float ptr [ESP + 0xb4]         ; 0050bb54
    FXCH                                ; 0050bb5b
    FSTP float ptr [ESP + 0xb8]         ; 0050bb5d
    FSTP float ptr [ESP + 0xbc]         ; 0050bb64
    LEA EAX,[ESP + 0x108]               ; 0050bb6b
    MOVSD ES:EDI,ESI                    ; 0050bb72
    MOVSD ES:EDI,ESI                    ; 0050bb73
    MOVSD ES:EDI,ESI                    ; 0050bb74
    PUSH EAX                            ; 0050bb75
    LEA ESI,[ESP + 0x40]                ; 0050bb76
    LEA EDI,[ESP + 0x124]               ; 0050bb7a
    CALL core_vecdir.cpp_FUN_00576250   ; 0050bb81
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x40]                ; 0050bb86
    ADD ESP,0x4                         ; 0050bb8a
    LEA EAX,[ESP + 0x120]               ; 0050bb8d
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 0050bb94
    MOVSD ES:EDI,ESI                    ; 0050bb9b
    MOVSD ES:EDI,ESI                    ; 0050bb9c
    MOVSD ES:EDI,ESI                    ; 0050bb9d
    CMP EAX,ECX                         ; 0050bb9e
    JZ 0x0050bbbf                       ; 0050bba0
        ;   XREF to: 0050bbbf (CONDITIONAL_JUMP)  ; LAB_0050bbbf
    MOV EAX,dword ptr [ESP + 0x120]     ; 0050bba2
    MOV dword ptr [ECX],EAX             ; 0050bba9
    MOV EAX,dword ptr [ESP + 0x124]     ; 0050bbab
    MOV dword ptr [ECX + 0x4],EAX       ; 0050bbb2
    MOV EAX,dword ptr [ESP + 0x128]     ; 0050bbb5
    MOV dword ptr [ECX + 0x8],EAX       ; 0050bbbc
    MOV EAX,0x2                         ; 0050bbbf
        ;   Label: LAB_0050bbbf
    ADD ESP,0x1d4                       ; 0050bbc4
    POP EBP                             ; 0050bbca
    POP EDI                             ; 0050bbcb
    POP ESI                             ; 0050bbcc
    POP EBX                             ; 0050bbcd
    RET                                 ; 0050bbce
    MOV dword ptr [ESP + 0x30],0x4      ; 0050bbcf
        ;   Label: caseD_1
    JMP 0x0050bb09                      ; 0050bbd7
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x30],0xfffffffc ; 0050bbdc
        ;   Label: caseD_2
    JMP 0x0050bb09                      ; 0050bbe4
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x38],0x4      ; 0050bbe9
        ;   Label: caseD_3
    JMP 0x0050bb09                      ; 0050bbf1
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV dword ptr [ESP + 0x38],0xfffffffc ; 0050bbf6
        ;   Label: caseD_4
    JMP 0x0050bb09                      ; 0050bbfe
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,0x4                         ; 0050bc03
        ;   Label: caseD_5
    MOV dword ptr [ESP + 0x38],EAX      ; 0050bc08
    MOV dword ptr [ESP + 0x30],EAX      ; 0050bc0c
    JMP 0x0050bb09                      ; 0050bc10
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDI,0x4                         ; 0050bc15
        ;   Label: caseD_6
    MOV ESI,0xfffffffc                  ; 0050bc1a
    MOV dword ptr [ESP + 0x38],EDI      ; 0050bc1f
    MOV dword ptr [ESP + 0x30],ESI      ; 0050bc23
    JMP 0x0050bb09                      ; 0050bc27
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV ECX,0xfffffffc                  ; 0050bc2c
        ;   Label: caseD_7
    MOV dword ptr [ESP + 0x38],ECX      ; 0050bc31
    MOV dword ptr [ESP + 0x30],ECX      ; 0050bc35
    JMP 0x0050bb09                      ; 0050bc39
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EDX,0xfffffffc                  ; 0050bc3e
        ;   Label: caseD_8
    MOV EAX,0x4                         ; 0050bc43
    MOV dword ptr [ESP + 0x38],EDX      ; 0050bc48
    MOV dword ptr [ESP + 0x30],EAX      ; 0050bc4c
    JMP 0x0050bb09                      ; 0050bc50
        ;   XREF to: 0050bb09 (UNCONDITIONAL_JUMP)  ; caseD_0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050bc55
        ;   Label: LAB_0050bc55
    MOV ECX,dword ptr [EBP + 0x20]      ; 0050bc58
    SUB EAX,ECX                         ; 0050bc5b
    MOV dword ptr [ESP + 0xc8],EAX      ; 0050bc5d
    CDQ                                 ; 0050bc64
    XOR EAX,EDX                         ; 0050bc65
    SUB EAX,EDX                         ; 0050bc67
    CMP EAX,0x32                        ; 0050bc69
    JL 0x0050bd19                       ; 0050bc6c
        ;   XREF to: 0050bd19 (CONDITIONAL_JUMP)  ; LAB_0050bd19
    FLD float ptr [EBP]                 ; 0050bc72
    FLD float ptr [EBP + 0x4]           ; 0050bc75
    FLD float ptr [EBP + 0x8]           ; 0050bc78
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050bc7b
    LEA EDI,[ESP + 0x15c]               ; 0050bc82
    LEA ESI,[ESP + 0xc]                 ; 0050bc89
    FXCH ST2                            ; 0050bc8d
    FSUB float ptr [EAX]                ; 0050bc8f
    FXCH                                ; 0050bc91
    FSUB float ptr [EAX + 0x4]          ; 0050bc93
    FXCH ST2                            ; 0050bc96
    FSUB float ptr [EAX + 0x8]          ; 0050bc98
    FXCH                                ; 0050bc9b
    FSTP float ptr [ESP + 0xc]          ; 0050bc9d
    FXCH                                ; 0050bca1
    FSTP float ptr [ESP + 0x10]         ; 0050bca3
    FSTP float ptr [ESP + 0x14]         ; 0050bca7
    LEA EAX,[ESP + 0x15c]               ; 0050bcab
    MOVSD ES:EDI,ESI                    ; 0050bcb2
    MOVSD ES:EDI,ESI                    ; 0050bcb3
    MOVSD ES:EDI,ESI                    ; 0050bcb4
    PUSH EAX                            ; 0050bcb5
    LEA ESI,[ESP + 0x154]               ; 0050bcb6
    LEA EDI,[ESP + 0x190]               ; 0050bcbd
    CALL core_vecdir.cpp_FUN_00576250   ; 0050bcc4
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x154]               ; 0050bcc9
    ADD ESP,0x4                         ; 0050bcd0
    LEA EAX,[ESP + 0x18c]               ; 0050bcd3
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0050bcda
    MOVSD ES:EDI,ESI                    ; 0050bce1
    MOVSD ES:EDI,ESI                    ; 0050bce2
    MOVSD ES:EDI,ESI                    ; 0050bce3
    CMP EAX,EDX                         ; 0050bce4
    JZ 0x0050bbbf                       ; 0050bce6
        ;   XREF to: 0050bbbf (CONDITIONAL_JUMP)  ; LAB_0050bbbf
    MOV EAX,dword ptr [ESP + 0x18c]     ; 0050bcec
    MOV dword ptr [EDX],EAX             ; 0050bcf3
    MOV EAX,dword ptr [ESP + 0x190]     ; 0050bcf5
    MOV dword ptr [EDX + 0x4],EAX       ; 0050bcfc
    MOV EAX,dword ptr [ESP + 0x194]     ; 0050bcff
    MOV dword ptr [EDX + 0x8],EAX       ; 0050bd06
    MOV EAX,0x2                         ; 0050bd09
    ADD ESP,0x1d4                       ; 0050bd0e
    POP EBP                             ; 0050bd14
    POP EDI                             ; 0050bd15
    POP ESI                             ; 0050bd16
    POP EBX                             ; 0050bd17
    RET                                 ; 0050bd18
    MOV EBX,0x32                        ; 0050bd19
        ;   Label: LAB_0050bd19
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050bd1e
    MOV EDI,dword ptr [EBP + 0x24]      ; 0050bd21
    MOV EDX,dword ptr [EBP + 0x2c]      ; 0050bd24
    SUB EAX,EDI                         ; 0050bd27
    MOV dword ptr [0x01ec1848],EBX      ; 0050bd29 | DAT_01ec1848
    MOV [0x01ec183c],EAX                ; 0050bd2f | DAT_01ec183c
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050bd34
    MOV dword ptr [0x01ec1844],EBX      ; 0050bd37 | DAT_01ec1844
    SUB EAX,EDX                         ; 0050bd3d
    MOV ECX,dword ptr [0x01ec183c]      ; 0050bd3f | DAT_01ec183c
    MOV [0x01ec1840],EAX                ; 0050bd45 | DAT_01ec1840
    TEST ECX,ECX                        ; 0050bd4a
    JL 0x0050bd57                       ; 0050bd4c
        ;   XREF to: 0050bd57 (CONDITIONAL_JUMP)  ; LAB_0050bd57
    CMP ECX,0x64                        ; 0050bd4e
    JL 0x0050be02                       ; 0050bd51
        ;   XREF to: 0050be02 (CONDITIONAL_JUMP)  ; LAB_0050be02
    FLD float ptr [EBP]                 ; 0050bd57
        ;   Label: LAB_0050bd57
    FLD float ptr [EBP + 0x4]           ; 0050bd5a
    FLD float ptr [EBP + 0x8]           ; 0050bd5d
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050bd60
    LEA EDI,[ESP + 0x9c]                ; 0050bd67
    LEA ESI,[ESP + 0x78]                ; 0050bd6e
    FXCH ST2                            ; 0050bd72
    FSUB float ptr [EAX]                ; 0050bd74
    FXCH                                ; 0050bd76
    FSUB float ptr [EAX + 0x4]          ; 0050bd78
    FXCH ST2                            ; 0050bd7b
    FSUB float ptr [EAX + 0x8]          ; 0050bd7d
    FXCH                                ; 0050bd80
    FSTP float ptr [ESP + 0x78]         ; 0050bd82
    FXCH                                ; 0050bd86
    FSTP float ptr [ESP + 0x7c]         ; 0050bd88
    FSTP float ptr [ESP + 0x80]         ; 0050bd8c
    LEA EAX,[ESP + 0x9c]                ; 0050bd93
    MOVSD ES:EDI,ESI                    ; 0050bd9a
    MOVSD ES:EDI,ESI                    ; 0050bd9b
    MOVSD ES:EDI,ESI                    ; 0050bd9c
    PUSH EAX                            ; 0050bd9d
    LEA ESI,[ESP + 0x19c]               ; 0050bd9e
    LEA EDI,[ESP + 0x148]               ; 0050bda5
    CALL core_vecdir.cpp_FUN_00576250   ; 0050bdac
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x19c]               ; 0050bdb1
    ADD ESP,0x4                         ; 0050bdb8
    LEA EAX,[ESP + 0x144]               ; 0050bdbb
    MOV EBP,dword ptr [ESP + 0x1f0]     ; 0050bdc2
    MOVSD ES:EDI,ESI                    ; 0050bdc9
    MOVSD ES:EDI,ESI                    ; 0050bdca
    MOVSD ES:EDI,ESI                    ; 0050bdcb
    CMP EAX,EBP                         ; 0050bdcc
    JZ 0x0050bbbf                       ; 0050bdce
        ;   XREF to: 0050bbbf (CONDITIONAL_JUMP)  ; LAB_0050bbbf
    MOV EAX,dword ptr [ESP + 0x144]     ; 0050bdd4
    MOV dword ptr [EBP],EAX             ; 0050bddb
    MOV EAX,dword ptr [ESP + 0x148]     ; 0050bdde
    MOV dword ptr [EBP + 0x4],EAX       ; 0050bde5
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0050bde8
    MOV dword ptr [EBP + 0x8],EAX       ; 0050bdef
    MOV EAX,0x2                         ; 0050bdf2
    ADD ESP,0x1d4                       ; 0050bdf7
    POP EBP                             ; 0050bdfd
    POP EDI                             ; 0050bdfe
    POP ESI                             ; 0050bdff
    POP EBX                             ; 0050be00
    RET                                 ; 0050be01
    TEST EAX,EAX                        ; 0050be02
        ;   Label: LAB_0050be02
    JL 0x0050bd57                       ; 0050be04
        ;   XREF to: 0050bd57 (CONDITIONAL_JUMP)  ; LAB_0050bd57
    CMP EAX,0x64                        ; 0050be0a
    JGE 0x0050bd57                      ; 0050be0d
        ;   XREF to: 0050bd57 (CONDITIONAL_JUMP)  ; LAB_0050bd57
    CMP ECX,EBX                         ; 0050be13
    JNZ 0x0050be1f                      ; 0050be15
        ;   XREF to: 0050be1f (CONDITIONAL_JUMP)  ; LAB_0050be1f
    CMP EAX,EBX                         ; 0050be17
    JZ 0x0050c03f                       ; 0050be19
        ;   XREF to: 0050c03f (CONDITIONAL_JUMP)  ; LAB_0050c03f
    FLD float ptr [EBP]                 ; 0050be1f
        ;   Label: LAB_0050be1f
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050be22
    CALL crt_math.c_round_FUN_005a3120  ; 0050be29
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1d0]       ; 0050be2e
    FLD float ptr [EAX]                 ; 0050be35
    CALL crt_math.c_round_FUN_005a3120  ; 0050be37
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0050be3c
    FISTP dword ptr [ESP + 0x1d0]       ; 0050be43
    SUB EAX,dword ptr [ESP + 0x1d0]     ; 0050be4a
    CDQ                                 ; 0050be51
    XOR EAX,EDX                         ; 0050be52
    SUB EAX,EDX                         ; 0050be54
    FLD float ptr [EBP + 0x8]           ; 0050be56
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050be59
    CALL crt_math.c_round_FUN_005a3120  ; 0050be60
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x1d0]       ; 0050be65
    FLD float ptr [EAX + 0x8]           ; 0050be6c
    CALL crt_math.c_round_FUN_005a3120  ; 0050be6f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0050be74
    FISTP dword ptr [ESP + 0x1d0]       ; 0050be7b
    SUB EAX,dword ptr [ESP + 0x1d0]     ; 0050be82
    CDQ                                 ; 0050be89
    XOR EAX,EDX                         ; 0050be8a
    SUB EAX,EDX                         ; 0050be8c
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0050be8e
    PUSH ESI                            ; 0050be91
    MOV EDI,dword ptr [0x01ec183c]      ; 0050be92 | DAT_01ec183c
    PUSH EDI                            ; 0050be98
    MOV EAX,[0x01ec1840]                ; 0050be99 | DAT_01ec1840
    PUSH EAX                            ; 0050be9e
    PUSH EBP                            ; 0050be9f
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320 ; 0050bea0
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0050bea5
    MOV EDX,dword ptr [EBP + 0x10]      ; 0050bea8
    PUSH EDX                            ; 0050beab
    MOV ECX,dword ptr [0x01ec1844]      ; 0050beac | DAT_01ec1844
    PUSH ECX                            ; 0050beb2
    MOV ESI,dword ptr [0x01ec1848]      ; 0050beb3 | DAT_01ec1848
    PUSH ESI                            ; 0050beb9
    PUSH EBP                            ; 0050beba
    MOV EBX,EAX                         ; 0050bebb
    CALL core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320 ; 0050bebd
        ;   XREF to: 0050b320 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_getCachedVoxelHeight_FUN_0050b320(CPathMap * this_ptr, int grid_z, int grid_x, int current_height)
    ADD ESP,0x10                        ; 0050bec2
    PUSH EAX                            ; 0050bec5
    MOV EDI,dword ptr [0x01ec1848]      ; 0050bec6 | DAT_01ec1848
    PUSH EDI                            ; 0050becc
    MOV EAX,[0x01ec1844]                ; 0050becd | DAT_01ec1844
    PUSH EAX                            ; 0050bed2
    PUSH EBX                            ; 0050bed3
    MOV EDX,dword ptr [0x01ec1840]      ; 0050bed4 | DAT_01ec1840
    PUSH EDX                            ; 0050beda
    MOV ECX,dword ptr [0x01ec183c]      ; 0050bedb | DAT_01ec183c
    PUSH ECX                            ; 0050bee1
    PUSH EBP                            ; 0050bee2
    CALL core_path.cpp_CPathMap_isLineWalkable_FUN_0050b3c0 ; 0050bee3
        ;   XREF to: 0050b3c0 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_isLineWalkable_FUN_0050b3c0(CPathMap * this_ptr, int start_x, int start_z, int start_height, ...)
    ADD ESP,0x1c                        ; 0050bee8
    TEST EAX,EAX                        ; 0050beeb
    JZ 0x0050c0d6                       ; 0050beed
        ;   XREF to: 0050c0d6 (CONDITIONAL_JUMP)  ; LAB_0050c0d6
    LEA EDI,[ESP + 0x174]               ; 0050bef3
    MOV ESI,0x203b3b0                   ; 0050befa
    MOVSD ES:EDI,ESI                    ; 0050beff | g_CDemonRaytraceInstance.field52_0x34
    MOVSD ES:EDI,ESI                    ; 0050bf00 | g_CDemonRaytraceInstance.field56_0x38
    MOVSD ES:EDI,ESI                    ; 0050bf01 | g_CDemonRaytraceInstance.field60_0x3c
    LEA EDI,[ESP + 0x114]               ; 0050bf02
    LEA ESI,[ESP + 0x174]               ; 0050bf09
    LEA EAX,[ESP + 0xa8]                ; 0050bf10
    MOVSD ES:EDI,ESI                    ; 0050bf17
    MOVSD ES:EDI,ESI                    ; 0050bf18
    MOVSD ES:EDI,ESI                    ; 0050bf19
    CMP EAX,EBP                         ; 0050bf1a
    JZ 0x0050bf3c                       ; 0050bf1c
        ;   XREF to: 0050bf3c (CONDITIONAL_JUMP)  ; LAB_0050bf3c
    MOV EAX,dword ptr [EBP]             ; 0050bf1e
    MOV dword ptr [ESP + 0xa8],EAX      ; 0050bf21
    MOV EAX,dword ptr [EBP + 0x4]       ; 0050bf28
    MOV dword ptr [ESP + 0xac],EAX      ; 0050bf2b
    MOV EAX,dword ptr [EBP + 0x8]       ; 0050bf32
    MOV dword ptr [ESP + 0xb0],EAX      ; 0050bf35
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050bf3c
        ;   Label: LAB_0050bf3c
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0050bf40
    FILD dword ptr [ESP + 0x1d0]        ; 0050bf47
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050bf4e
    FMUL float ptr [ESP + 0x114]        ; 0050bf52
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0050bf59
    FILD dword ptr [ESP + 0x1d0]        ; 0050bf60
    FMUL float ptr [ESP + 0x11c]        ; 0050bf67
    LEA EDI,[ESP + 0xcc]                ; 0050bf6e
    LEA ESI,[ESP + 0xd8]                ; 0050bf75
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050bf7c
    FXCH                                ; 0050bf83
    FADD float ptr [ESP + 0xa8]         ; 0050bf85
    FXCH                                ; 0050bf8c
    FADD float ptr [ESP + 0xb0]         ; 0050bf8e
    FXCH                                ; 0050bf95
    FSTP float ptr [ESP + 0xa8]         ; 0050bf97
    FSTP float ptr [ESP + 0xb0]         ; 0050bf9e
    FLD float ptr [EBP]                 ; 0050bfa5
    FLD float ptr [EBP + 0x4]           ; 0050bfa8
    FLD float ptr [EBP + 0x8]           ; 0050bfab
    FXCH ST2                            ; 0050bfae
    FSUB float ptr [EAX]                ; 0050bfb0
    FXCH                                ; 0050bfb2
    FSUB float ptr [EAX + 0x4]          ; 0050bfb4
    FXCH ST2                            ; 0050bfb7
    FSUB float ptr [EAX + 0x8]          ; 0050bfb9
    FXCH                                ; 0050bfbc
    FSTP float ptr [ESP + 0xd8]         ; 0050bfbe
    FXCH                                ; 0050bfc5
    FSTP float ptr [ESP + 0xdc]         ; 0050bfc7
    FSTP float ptr [ESP + 0xe0]         ; 0050bfce
    LEA EAX,[ESP + 0xcc]                ; 0050bfd5
    MOVSD ES:EDI,ESI                    ; 0050bfdc
    MOVSD ES:EDI,ESI                    ; 0050bfdd
    MOVSD ES:EDI,ESI                    ; 0050bfde
    PUSH EAX                            ; 0050bfdf
    LEA ESI,[ESP + 0x13c]               ; 0050bfe0
    LEA EDI,[ESP + 0x100]               ; 0050bfe7
    CALL core_vecdir.cpp_FUN_00576250   ; 0050bfee
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x13c]               ; 0050bff3
    ADD ESP,0x4                         ; 0050bffa
    MOVSD ES:EDI,ESI                    ; 0050bffd
    MOVSD ES:EDI,ESI                    ; 0050bffe
    MOVSD ES:EDI,ESI                    ; 0050bfff
    LEA EAX,[ESP + 0xfc]                ; 0050c000
    MOV ESI,dword ptr [ESP + 0x1f0]     ; 0050c007
    CMP EAX,ESI                         ; 0050c00e
    JZ 0x0050c02f                       ; 0050c010
        ;   XREF to: 0050c02f (CONDITIONAL_JUMP)  ; LAB_0050c02f
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0050c012
    MOV dword ptr [ESI],EAX             ; 0050c019
    MOV EAX,dword ptr [ESP + 0x100]     ; 0050c01b
    MOV dword ptr [ESI + 0x4],EAX       ; 0050c022
    MOV EAX,dword ptr [ESP + 0x104]     ; 0050c025
    MOV dword ptr [ESI + 0x8],EAX       ; 0050c02c
    MOV EAX,0x1                         ; 0050c02f
        ;   Label: LAB_0050c02f
    ADD ESP,0x1d4                       ; 0050c034
    POP EBP                             ; 0050c03a
    POP EDI                             ; 0050c03b
    POP ESI                             ; 0050c03c
    POP EBX                             ; 0050c03d
    RET                                 ; 0050c03e
    FLD float ptr [EBP]                 ; 0050c03f
        ;   Label: LAB_0050c03f
    FLD float ptr [EBP + 0x4]           ; 0050c042
    FLD float ptr [EBP + 0x8]           ; 0050c045
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050c048
    LEA EDI,[ESP + 0x1a4]               ; 0050c04f
    LEA ESI,[ESP + 0x1b0]               ; 0050c056
    FXCH ST2                            ; 0050c05d
    FSUB float ptr [EAX]                ; 0050c05f
    FXCH                                ; 0050c061
    FSUB float ptr [EAX + 0x4]          ; 0050c063
    FXCH ST2                            ; 0050c066
    FSUB float ptr [EAX + 0x8]          ; 0050c068
    FXCH                                ; 0050c06b
    FSTP float ptr [ESP + 0x1b0]        ; 0050c06d
    FXCH                                ; 0050c074
    FSTP float ptr [ESP + 0x1b4]        ; 0050c076
    FSTP float ptr [ESP + 0x1b8]        ; 0050c07d
    LEA EAX,[ESP + 0x1a4]               ; 0050c084
    MOVSD ES:EDI,ESI                    ; 0050c08b
    MOVSD ES:EDI,ESI                    ; 0050c08c
    MOVSD ES:EDI,ESI                    ; 0050c08d
    PUSH EAX                            ; 0050c08e
    LEA ESI,[ESP + 0x28]                ; 0050c08f
    LEA EDI,[ESP + 0x4]                 ; 0050c093
    CALL core_vecdir.cpp_FUN_00576250   ; 0050c097
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x28]                ; 0050c09c
    ADD ESP,0x4                         ; 0050c0a0
    MOVSD ES:EDI,ESI                    ; 0050c0a3
    MOVSD ES:EDI,ESI                    ; 0050c0a4
    MOVSD ES:EDI,ESI                    ; 0050c0a5
    MOV EAX,ESP                         ; 0050c0a6
    MOV EDI,dword ptr [ESP + 0x1f0]     ; 0050c0a8
    CMP EAX,EDI                         ; 0050c0af
    JZ 0x0050c0c6                       ; 0050c0b1
        ;   XREF to: 0050c0c6 (CONDITIONAL_JUMP)  ; LAB_0050c0c6
    MOV EAX,dword ptr [ESP]             ; 0050c0b3
    MOV dword ptr [EDI],EAX             ; 0050c0b6
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050c0b8
    MOV dword ptr [EDI + 0x4],EAX       ; 0050c0bc
    MOV EAX,dword ptr [ESP + 0x8]       ; 0050c0bf
    MOV dword ptr [EDI + 0x8],EAX       ; 0050c0c3
    MOV EAX,0x1                         ; 0050c0c6
        ;   Label: LAB_0050c0c6
    ADD ESP,0x1d4                       ; 0050c0cb
    POP EBP                             ; 0050c0d1
    POP EDI                             ; 0050c0d2
    POP ESI                             ; 0050c0d3
    POP EBX                             ; 0050c0d4
    RET                                 ; 0050c0d5
    MOV EBX,dword ptr [0x01ec1840]      ; 0050c0d6 | DAT_01ec1840
        ;   Label: LAB_0050c0d6
    PUSH EBX                            ; 0050c0dc
    MOV ESI,dword ptr [0x01ec183c]      ; 0050c0dd | DAT_01ec183c
    PUSH ESI                            ; 0050c0e3
    MOV EDI,dword ptr [0x01ec1848]      ; 0050c0e4 | DAT_01ec1848
    PUSH EDI                            ; 0050c0ea
    MOV EAX,[0x01ec1844]                ; 0050c0eb | DAT_01ec1844
    PUSH EAX                            ; 0050c0f0
    PUSH EBP                            ; 0050c0f1
    CALL core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_0050b610 ; 0050c0f2
        ;   XREF to: 0050b610 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_checkAxisAlignedPath_FUN_0050b610(CPathMap * this_ptr, int start_x, int start_z, int end_x, ...)
    ADD ESP,0x14                        ; 0050c0f7
    TEST EAX,EAX                        ; 0050c0fa
    JZ 0x0050c1d7                       ; 0050c0fc
        ;   XREF to: 0050c1d7 (CONDITIONAL_JUMP)  ; LAB_0050c1d7
    CMP EAX,0x1                         ; 0050c102
    JNZ 0x0050c196                      ; 0050c105
        ;   XREF to: 0050c196 (CONDITIONAL_JUMP)  ; LAB_0050c196
    MOV EDI,dword ptr [0x01ec183c]      ; 0050c10b | DAT_01ec183c
    MOV EAX,[0x01ec1844]                ; 0050c111 | DAT_01ec1844
    CMP EAX,EDI                         ; 0050c116
    JLE 0x0050c171                      ; 0050c118
        ;   XREF to: 0050c171 (CONDITIONAL_JUMP)  ; LAB_0050c171
    MOV EAX,0x3                         ; 0050c11a
        ;   Label: LAB_0050c11a
    MOV EBX,dword ptr [ESP + 0x1ec]     ; 0050c11f
        ;   Label: LAB_0050c11f
    PUSH EBX                            ; 0050c126
    PUSH -0x1                           ; 0050c127
    PUSH -0x1                           ; 0050c129
    MOV EDX,dword ptr [ESP + 0x1fc]     ; 0050c12b
    PUSH EAX                            ; 0050c132
    MOV dword ptr [EDX],0x0             ; 0050c133
    PUSH EBP                            ; 0050c139
    MOV dword ptr [EDX + 0x8],0x0       ; 0050c13a
    CALL core_path.cpp_FUN_0050ae20     ; 0050c141
        ;   XREF to: 0050ae20 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_0050ae20()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0050c146
    FLD float ptr [ESP + 0x1e4]         ; 0050c14d
    ADD ESP,0x14                        ; 0050c154
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0050c157
    FSTP float ptr [EAX + 0x4]          ; 0050c15e
    MOV EAX,0x1                         ; 0050c161
    ADD ESP,0x1d4                       ; 0050c166
    POP EBP                             ; 0050c16c
    POP EDI                             ; 0050c16d
    POP ESI                             ; 0050c16e
    POP EBX                             ; 0050c16f
    RET                                 ; 0050c170
    JGE 0x0050c17a                      ; 0050c171
        ;   XREF to: 0050c17a (CONDITIONAL_JUMP)  ; LAB_0050c17a
        ;   Label: LAB_0050c171
    MOV EAX,0x4                         ; 0050c173
    JMP 0x0050c11f                      ; 0050c178
        ;   XREF to: 0050c11f (UNCONDITIONAL_JUMP)  ; LAB_0050c11f
    MOV ECX,dword ptr [0x01ec1840]      ; 0050c17a | DAT_01ec1840
        ;   Label: LAB_0050c17a
    CMP ECX,dword ptr [0x01ec1848]      ; 0050c180 | DAT_01ec1848
    JGE 0x0050c18f                      ; 0050c186
        ;   XREF to: 0050c18f (CONDITIONAL_JUMP)  ; LAB_0050c18f
    MOV EAX,0x1                         ; 0050c188
    JMP 0x0050c11f                      ; 0050c18d
        ;   XREF to: 0050c11f (UNCONDITIONAL_JUMP)  ; LAB_0050c11f
    MOV EAX,0x2                         ; 0050c18f
        ;   Label: LAB_0050c18f
    JMP 0x0050c11f                      ; 0050c194
        ;   XREF to: 0050c11f (UNCONDITIONAL_JUMP)  ; LAB_0050c11f
    MOV ECX,dword ptr [0x01ec1840]      ; 0050c196 | DAT_01ec1840
        ;   Label: LAB_0050c196
    MOV EAX,[0x01ec1848]                ; 0050c19c | DAT_01ec1848
    CMP EAX,ECX                         ; 0050c1a1
    JLE 0x0050c1af                      ; 0050c1a3
        ;   XREF to: 0050c1af (CONDITIONAL_JUMP)  ; LAB_0050c1af
    MOV EAX,0x1                         ; 0050c1a5
    JMP 0x0050c11f                      ; 0050c1aa
        ;   XREF to: 0050c11f (UNCONDITIONAL_JUMP)  ; LAB_0050c11f
    JGE 0x0050c1bb                      ; 0050c1af
        ;   XREF to: 0050c1bb (CONDITIONAL_JUMP)  ; LAB_0050c1bb
        ;   Label: LAB_0050c1af
    MOV EAX,0x2                         ; 0050c1b1
    JMP 0x0050c11f                      ; 0050c1b6
        ;   XREF to: 0050c11f (UNCONDITIONAL_JUMP)  ; LAB_0050c11f
    MOV ESI,dword ptr [0x01ec183c]      ; 0050c1bb | DAT_01ec183c
        ;   Label: LAB_0050c1bb
    CMP ESI,dword ptr [0x01ec1844]      ; 0050c1c1 | DAT_01ec1844
    JL 0x0050c11a                       ; 0050c1c7
        ;   XREF to: 0050c11a (CONDITIONAL_JUMP)  ; LAB_0050c11a
    MOV EAX,0x4                         ; 0050c1cd
    JMP 0x0050c11f                      ; 0050c1d2
        ;   XREF to: 0050c11f (UNCONDITIONAL_JUMP)  ; LAB_0050c11f
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0050c1d7
        ;   Label: LAB_0050c1d7
    PUSH EDX                            ; 0050c1da
    PUSH EBP                            ; 0050c1db
    CALL core_path.cpp_CPathMap_searchGrid_FUN_0050d170 ; 0050c1dc
        ;   XREF to: 0050d170 (UNCONDITIONAL_CALL)  ; uint core_path.cpp_CPathMap_searchGrid_FUN_0050d170(CPathMap * this_ptr, int start_height)
    ADD ESP,0x8                         ; 0050c1e1
    TEST EAX,EAX                        ; 0050c1e4
    JNZ 0x0050c293                      ; 0050c1e6
        ;   XREF to: 0050c293 (CONDITIONAL_JUMP)  ; LAB_0050c293
    FLD float ptr [EBP]                 ; 0050c1ec
    FLD float ptr [EBP + 0x4]           ; 0050c1ef
    FLD float ptr [EBP + 0x8]           ; 0050c1f2
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050c1f5
    LEA EDI,[ESP + 0x168]               ; 0050c1fc
    LEA ESI,[ESP + 0x48]                ; 0050c203
    FXCH ST2                            ; 0050c207
    FSUB float ptr [EAX]                ; 0050c209
    FXCH                                ; 0050c20b
    FSUB float ptr [EAX + 0x4]          ; 0050c20d
    FXCH ST2                            ; 0050c210
    FSUB float ptr [EAX + 0x8]          ; 0050c212
    FXCH                                ; 0050c215
    FSTP float ptr [ESP + 0x48]         ; 0050c217
    FXCH                                ; 0050c21b
    FSTP float ptr [ESP + 0x4c]         ; 0050c21d
    FSTP float ptr [ESP + 0x50]         ; 0050c221
    LEA EAX,[ESP + 0x168]               ; 0050c225
    MOVSD ES:EDI,ESI                    ; 0050c22c
    MOVSD ES:EDI,ESI                    ; 0050c22d
    MOVSD ES:EDI,ESI                    ; 0050c22e
    PUSH EAX                            ; 0050c22f
    LEA ESI,[ESP + 0x1c0]               ; 0050c230
    LEA EDI,[ESP + 0x184]               ; 0050c237
    CALL core_vecdir.cpp_FUN_00576250   ; 0050c23e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x1c0]               ; 0050c243
    ADD ESP,0x4                         ; 0050c24a
    LEA EAX,[ESP + 0x180]               ; 0050c24d
    MOV ECX,dword ptr [ESP + 0x1f0]     ; 0050c254
    MOVSD ES:EDI,ESI                    ; 0050c25b
    MOVSD ES:EDI,ESI                    ; 0050c25c
    MOVSD ES:EDI,ESI                    ; 0050c25d
    CMP EAX,ECX                         ; 0050c25e
    JZ 0x0050bbbf                       ; 0050c260
        ;   XREF to: 0050bbbf (CONDITIONAL_JUMP)  ; LAB_0050bbbf
    MOV EAX,dword ptr [ESP + 0x180]     ; 0050c266
    MOV dword ptr [ECX],EAX             ; 0050c26d
    MOV EAX,dword ptr [ESP + 0x184]     ; 0050c26f
    MOV dword ptr [ECX + 0x4],EAX       ; 0050c276
    MOV EAX,dword ptr [ESP + 0x188]     ; 0050c279
    MOV dword ptr [ECX + 0x8],EAX       ; 0050c280
    MOV EAX,0x2                         ; 0050c283
    ADD ESP,0x1d4                       ; 0050c288
    POP EBP                             ; 0050c28e
    POP EDI                             ; 0050c28f
    POP ESI                             ; 0050c290
    POP EBX                             ; 0050c291
    RET                                 ; 0050c292
    MOV EBX,dword ptr [0x01ec1848]      ; 0050c293 | DAT_01ec1848
        ;   Label: LAB_0050c293
    LEA EAX,[EBX*0x4 + 0x0]             ; 0050c299
    SUB EAX,EBX                         ; 0050c2a0
    SHL EAX,0x3                         ; 0050c2a2
    ADD EAX,EBX                         ; 0050c2a5
    SHL EAX,0x4                         ; 0050c2a7
    LEA EDX,[EAX + EBP*0x1]             ; 0050c2aa
    MOV EAX,[0x01ec1844]                ; 0050c2ad | DAT_01ec1844
    MOV EBX,dword ptr [EBP + 0x10]      ; 0050c2b2
    MOV EAX,dword ptr [EDX + EAX*0x4 + 0x30] ; 0050c2b5
    SUB EAX,EBX                         ; 0050c2b9
    CDQ                                 ; 0050c2bb
    XOR EAX,EDX                         ; 0050c2bc
    SUB EAX,EDX                         ; 0050c2be
    CMP EAX,0x3                         ; 0050c2c0
    JG 0x0050c3f0                       ; 0050c2c3
        ;   XREF to: 0050c3f0 (CONDITIONAL_JUMP)  ; LAB_0050c3f0
    MOV EBX,0xffffffff                  ; 0050c2c9
    MOV ESI,dword ptr [0x01ec1848]      ; 0050c2ce | DAT_01ec1848
    MOV EDI,dword ptr [0x01ec1844]      ; 0050c2d4 | DAT_01ec1844
    MOV dword ptr [ESP + 0x1cc],EBX     ; 0050c2da
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0050c2e1
        ;   Label: LAB_0050c2e1
    MOV dword ptr [ESP + 0x1c8],EAX     ; 0050c2e8
    IMUL EAX,ESI,0x64                   ; 0050c2ef
    MOV dword ptr [ESP + 0x1cc],EBX     ; 0050c2f2
    XOR EBX,EBX                         ; 0050c2f9
    MOV BL,byte ptr [EDI + EAX*0x1 + 0x1ed02b8] ; 0050c2fb | DAT_01ed1672
    TEST EBX,EBX                        ; 0050c302
    JZ 0x0050c488                       ; 0050c304
        ;   XREF to: 0050c488 (CONDITIONAL_JUMP)  ; LAB_0050c488
    MOV EAX,dword ptr [EBX*0x4 + 0x603664] ; 0050c30a | DAT_00603664
    MOV EDX,dword ptr [EBX*0x4 + 0x603688] ; 0050c311 | DAT_00603688
    SUB EDI,EAX                         ; 0050c318
    SUB ESI,EDX                         ; 0050c31a
    TEST EDI,EDI                        ; 0050c31c
    JL 0x0050c529                       ; 0050c31e
        ;   XREF to: 0050c529 (CONDITIONAL_JUMP)  ; LAB_0050c529
    TEST ESI,ESI                        ; 0050c324
        ;   Label: LAB_0050c324
    JL 0x0050c550                       ; 0050c326
        ;   XREF to: 0050c550 (CONDITIONAL_JUMP)  ; LAB_0050c550
    CMP EDI,0x64                        ; 0050c32c
        ;   Label: LAB_0050c32c
    JL 0x0050c353                       ; 0050c32f
        ;   XREF to: 0050c353 (CONDITIONAL_JUMP)  ; LAB_0050c353
    MOV EAX,0x5cb8a6                    ; 0050c331 | = "..\\core\\path.cpp"
    MOV EDX,0x54a                       ; 0050c336
    PUSH 0x5cb8b7                       ; 0050c33b | = "Out of bounds3!"
    MOV [0x01d71de0],EAX                ; 0050c340 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 0050c345 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050c34b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050c350
    CMP ESI,0x64                        ; 0050c353
        ;   Label: LAB_0050c353
    JL 0x0050c37a                       ; 0050c356
        ;   XREF to: 0050c37a (CONDITIONAL_JUMP)  ; LAB_0050c37a
    MOV ECX,0x5cb8c7                    ; 0050c358 | = "..\\core\\path.cpp"
    MOV EAX,0x54b                       ; 0050c35d
    PUSH 0x5cb8d8                       ; 0050c362 | = "Out of bounds4!"
    MOV dword ptr [0x01d71de0],ECX      ; 0050c367 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0050c36d | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050c372
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050c377
    CMP EDI,dword ptr [0x01ec183c]      ; 0050c37a | DAT_01ec183c
        ;   Label: LAB_0050c37a
    JNZ 0x0050c2e1                      ; 0050c380
        ;   XREF to: 0050c2e1 (CONDITIONAL_JUMP)  ; LAB_0050c2e1
    CMP ESI,dword ptr [0x01ec1840]      ; 0050c386 | DAT_01ec1840
    JNZ 0x0050c2e1                      ; 0050c38c
        ;   XREF to: 0050c2e1 (CONDITIONAL_JUMP)  ; LAB_0050c2e1
    MOV ESI,dword ptr [ESP + 0x1ec]     ; 0050c392
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0050c399
    PUSH ESI                            ; 0050c3a0
    MOV EDI,dword ptr [ESP + 0x1cc]     ; 0050c3a1
    MOV dword ptr [EAX],0x0             ; 0050c3a8
    PUSH EDI                            ; 0050c3ae
    MOV dword ptr [EAX + 0x8],0x0       ; 0050c3af
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0050c3b6
    PUSH EAX                            ; 0050c3bd
    PUSH EBX                            ; 0050c3be
    PUSH EBP                            ; 0050c3bf
    CALL core_path.cpp_FUN_0050ae20     ; 0050c3c0
        ;   XREF to: 0050ae20 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_FUN_0050ae20()
    MOV dword ptr [ESP + 0x1e4],EAX     ; 0050c3c5
    FLD float ptr [ESP + 0x1e4]         ; 0050c3cc
    ADD ESP,0x14                        ; 0050c3d3
    MOV EAX,dword ptr [ESP + 0x1f0]     ; 0050c3d6
    FSTP float ptr [EAX + 0x4]          ; 0050c3dd
    MOV EAX,0x1                         ; 0050c3e0
    ADD ESP,0x1d4                       ; 0050c3e5
    POP EBP                             ; 0050c3eb
    POP EDI                             ; 0050c3ec
    POP ESI                             ; 0050c3ed
    POP EBX                             ; 0050c3ee
    RET                                 ; 0050c3ef
    FLD float ptr [EBP]                 ; 0050c3f0
        ;   Label: LAB_0050c3f0
    FLD float ptr [EBP + 0x4]           ; 0050c3f3
    FLD float ptr [EBP + 0x8]           ; 0050c3f6
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050c3f9
    LEA EDI,[ESP + 0xf0]                ; 0050c400
    LEA ESI,[ESP + 0x6c]                ; 0050c407
    FXCH ST2                            ; 0050c40b
    FSUB float ptr [EAX]                ; 0050c40d
    FXCH                                ; 0050c40f
    FSUB float ptr [EAX + 0x4]          ; 0050c411
    FXCH ST2                            ; 0050c414
    FSUB float ptr [EAX + 0x8]          ; 0050c416
    FXCH                                ; 0050c419
    FSTP float ptr [ESP + 0x6c]         ; 0050c41b
    FXCH                                ; 0050c41f
    FSTP float ptr [ESP + 0x70]         ; 0050c421
    FSTP float ptr [ESP + 0x74]         ; 0050c425
    LEA EAX,[ESP + 0xf0]                ; 0050c429
    MOVSD ES:EDI,ESI                    ; 0050c430
    MOVSD ES:EDI,ESI                    ; 0050c431
    MOVSD ES:EDI,ESI                    ; 0050c432
    PUSH EAX                            ; 0050c433
    LEA ESI,[ESP + 0x130]               ; 0050c434
    LEA EDI,[ESP + 0x1c]                ; 0050c43b
    CALL core_vecdir.cpp_FUN_00576250   ; 0050c43f
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x130]               ; 0050c444
    ADD ESP,0x4                         ; 0050c44b
    LEA EAX,[ESP + 0x18]                ; 0050c44e
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0050c452
    MOVSD ES:EDI,ESI                    ; 0050c459
    MOVSD ES:EDI,ESI                    ; 0050c45a
    MOVSD ES:EDI,ESI                    ; 0050c45b
    CMP EAX,EDX                         ; 0050c45c
    JZ 0x0050bbbf                       ; 0050c45e
        ;   XREF to: 0050bbbf (CONDITIONAL_JUMP)  ; LAB_0050bbbf
    MOV EAX,dword ptr [ESP + 0x18]      ; 0050c464
    MOV dword ptr [EDX],EAX             ; 0050c468
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0050c46a
    MOV dword ptr [EDX + 0x4],EAX       ; 0050c46e
    MOV EAX,dword ptr [ESP + 0x20]      ; 0050c471
    MOV dword ptr [EDX + 0x8],EAX       ; 0050c475
    MOV EAX,0x2                         ; 0050c478
    ADD ESP,0x1d4                       ; 0050c47d
    POP EBP                             ; 0050c483
    POP EDI                             ; 0050c484
    POP ESI                             ; 0050c485
    POP EBX                             ; 0050c486
    RET                                 ; 0050c487
    FLD float ptr [EBP]                 ; 0050c488
        ;   Label: LAB_0050c488
    FLD float ptr [EBP + 0x4]           ; 0050c48b
    FLD float ptr [EBP + 0x8]           ; 0050c48e
    MOV EAX,dword ptr [ESP + 0x1ec]     ; 0050c491
    LEA EDI,[ESP + 0x54]                ; 0050c498
    LEA ESI,[ESP + 0x60]                ; 0050c49c
    FXCH ST2                            ; 0050c4a0
    FSUB float ptr [EAX]                ; 0050c4a2
    FXCH                                ; 0050c4a4
    FSUB float ptr [EAX + 0x4]          ; 0050c4a6
    FXCH ST2                            ; 0050c4a9
    FSUB float ptr [EAX + 0x8]          ; 0050c4ab
    FXCH                                ; 0050c4ae
    FSTP float ptr [ESP + 0x60]         ; 0050c4b0
    FXCH                                ; 0050c4b4
    FSTP float ptr [ESP + 0x64]         ; 0050c4b6
    FSTP float ptr [ESP + 0x68]         ; 0050c4ba
    LEA EAX,[ESP + 0x54]                ; 0050c4be
    MOVSD ES:EDI,ESI                    ; 0050c4c2
    MOVSD ES:EDI,ESI                    ; 0050c4c3
    MOVSD ES:EDI,ESI                    ; 0050c4c4
    PUSH EAX                            ; 0050c4c5
    LEA ESI,[ESP + 0x94]                ; 0050c4c6
    LEA EDI,[ESP + 0x88]                ; 0050c4cd
    CALL core_vecdir.cpp_FUN_00576250   ; 0050c4d4
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_00576250()
    LEA ESI,[ESP + 0x94]                ; 0050c4d9
    ADD ESP,0x4                         ; 0050c4e0
    LEA EAX,[ESP + 0x84]                ; 0050c4e3
    MOV EDX,dword ptr [ESP + 0x1f0]     ; 0050c4ea
    MOVSD ES:EDI,ESI                    ; 0050c4f1
    MOVSD ES:EDI,ESI                    ; 0050c4f2
    MOVSD ES:EDI,ESI                    ; 0050c4f3
    CMP EAX,EDX                         ; 0050c4f4
    JZ 0x0050bbbf                       ; 0050c4f6
        ;   XREF to: 0050bbbf (CONDITIONAL_JUMP)  ; LAB_0050bbbf
    MOV EAX,dword ptr [ESP + 0x84]      ; 0050c4fc
    MOV dword ptr [EDX],EAX             ; 0050c503
    MOV EAX,dword ptr [ESP + 0x88]      ; 0050c505
    MOV dword ptr [EDX + 0x4],EAX       ; 0050c50c
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0050c50f
    MOV dword ptr [EDX + 0x8],EAX       ; 0050c516
    MOV EAX,0x2                         ; 0050c519
    ADD ESP,0x1d4                       ; 0050c51e
    POP EBP                             ; 0050c524
    POP EDI                             ; 0050c525
    POP ESI                             ; 0050c526
    POP EBX                             ; 0050c527
    RET                                 ; 0050c528
    MOV ECX,0x5cb864                    ; 0050c529 | = "..\\core\\path.cpp"
        ;   Label: LAB_0050c529
    MOV EAX,0x548                       ; 0050c52e
    PUSH 0x5cb875                       ; 0050c533 | = "Out of bounds1!"
    MOV dword ptr [0x01d71de0],ECX      ; 0050c538 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0050c53e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050c543
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050c548
    JMP 0x0050c324                      ; 0050c54b
        ;   XREF to: 0050c324 (UNCONDITIONAL_JUMP)  ; LAB_0050c324
    MOV EDX,0x5cb885                    ; 0050c550 | = "..\\core\\path.cpp"
        ;   Label: LAB_0050c550
    MOV ECX,0x549                       ; 0050c555
    PUSH 0x5cb896                       ; 0050c55a | = "Out of bounds2!"
    MOV dword ptr [0x01d71de0],EDX      ; 0050c55f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0050c565 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0050c56b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0050c570
    JMP 0x0050c32c                      ; 0050c573
        ;   XREF to: 0050c32c (UNCONDITIONAL_JUMP)  ; LAB_0050c32c

