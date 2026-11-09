; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042e8c0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_charactr.cpp_FUN_0042cd70 at 0042d089
;
; Referenced Globals:
;   undefined4 s_character_onfire_fallapa_005b82fd+1
;   TerminatedCString s_character_onfire_loop_wa_005b831d
;   undefined4 DAT_005b833e
;   undefined4 DAT_005b8346
;   undefined4 DAT_005b834e
;   undefined4 DAT_005b8356
;   undefined4 DAT_005b835e
;   undefined4 DAT_005b8366
;   undefined4 DAT_005dd22c
;   undefined4 DAT_005dd230
;   undefined4 DAT_007e2cf4
;   undefined4 DAT_007e2cf8
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0
;   core_charactr.cpp_FUN_004300e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
;   core_xform.cpp_FUN_00583260
;   sound_sndmain.cpp_FUN_00555df0
;   sound_sndmain.cpp_FUN_00555fd0
;   sound_sndmain.cpp_FUN_00556050
;   sound_sndmain.cpp_FUN_00556ab0
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e8c0
        ;   Label: core_charactr.cpp_FUN_0042e8c0
    PUSH ESI                            ; 0042e8c1
    PUSH EDI                            ; 0042e8c2
    PUSH EBP                            ; 0042e8c3
    MOV EBP,ESP                         ; 0042e8c4
    SUB ESP,0xb0                        ; 0042e8c6
    AND ESP,0xfffffff8                  ; 0042e8cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042e8cf
    LEA ESI,[EBX + 0x158]               ; 0042e8d2
    PUSH ESI                            ; 0042e8d8
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0042e8d9
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042e8de
    MOV EDX,dword ptr [EBX + 0xbc68]    ; 0042e8e1
    MOV dword ptr [ESP + 0xac],EAX      ; 0042e8e7
    TEST EDX,EDX                        ; 0042e8ee
    JNZ 0x0042ec9c                      ; 0042e8f0
        ;   XREF to: 0042ec9c (CONDITIONAL_JUMP)  ; LAB_0042ec9c
    CMP dword ptr [EBX + 0x33a0],0x0    ; 0042e8f6
    JLE 0x0042eaaf                      ; 0042e8fd
        ;   XREF to: 0042eaaf (CONDITIONAL_JUMP)  ; LAB_0042eaaf
    PUSH ESI                            ; 0042e903
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0 ; 0042e904
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042e909
    PUSH ESI                            ; 0042e90c
    MOV EDI,EAX                         ; 0042e90d
    MOV dword ptr [ESP + 0x88],EAX      ; 0042e90f
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042e916
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042e91b
    MOV ECX,EAX                         ; 0042e91e
    MOV ESI,dword ptr [EDI + 0x1de78]   ; 0042e920
    XOR EAX,EAX                         ; 0042e926
    TEST ESI,ESI                        ; 0042e928
    JLE 0x0042e950                      ; 0042e92a
        ;   XREF to: 0042e950 (CONDITIONAL_JUMP)  ; LAB_0042e950
    XOR EDX,EDX                         ; 0042e92c
    XOR ESI,ESI                         ; 0042e92e
        ;   Label: LAB_0042e92e
    MOV dword ptr [EDX + 0x7e2cf4],ESI  ; 0042e930 | DAT_007e2cf4 | DAT_007e2cf8
    MOV ESI,dword ptr [ESP + 0x84]      ; 0042e936
    INC EAX                             ; 0042e93d
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0042e93e
    ADD EDX,0x4                         ; 0042e944
    CMP EAX,EDI                         ; 0042e947
    JL 0x0042e92e                       ; 0042e949
        ;   XREF to: 0042e92e (CONDITIONAL_JUMP)  ; LAB_0042e92e
    LEA EAX,[EAX]                       ; 0042e94b
    MOV ECX,ECX                         ; 0042e94e
    MOV EAX,dword ptr [EBX + 0x33a0]    ; 0042e950
        ;   Label: LAB_0042e950
    XOR EDX,EDX                         ; 0042e956
    TEST EAX,EAX                        ; 0042e958
    JLE 0x0042e99e                      ; 0042e95a
        ;   XREF to: 0042e99e (CONDITIONAL_JUMP)  ; LAB_0042e99e
    FLD float ptr [0x005dd230]          ; 0042e95c | DAT_005dd230
    FLD double ptr [0x005b833e]         ; 0042e962 | DAT_005b833e
    MOV ESI,EBX                         ; 0042e968
    FLD float ptr [ESI + 0x33c0]        ; 0042e96a
        ;   Label: LAB_0042e96a
    MOV EAX,dword ptr [ESI + 0x33b0]    ; 0042e970
    FMUL ST1                            ; 0042e976
    FLD float ptr [EAX*0x4 + 0x7e2cf4]  ; 0042e978 | DAT_007e2cf4
    FLD ST3                             ; 0042e97f
    FDIVP ST2,ST0                       ; 0042e981
    FADDP                               ; 0042e983
    INC EDX                             ; 0042e985
    FSTP float ptr [EAX*0x4 + 0x7e2cf4] ; 0042e986 | DAT_007e2cf4
    MOV EDI,dword ptr [EBX + 0x33a0]    ; 0042e98d
    ADD ESI,0x18                        ; 0042e993
    CMP EDX,EDI                         ; 0042e996
    JL 0x0042e96a                       ; 0042e998
        ;   XREF to: 0042e96a (CONDITIONAL_JUMP)  ; LAB_0042e96a
    FSTP ST0                            ; 0042e99a
    FSTP ST0                            ; 0042e99c
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042e99e
        ;   Label: LAB_0042e99e
    XOR ESI,ESI                         ; 0042e9a5
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0042e9a7
    MOV dword ptr [ESP + 0x8c],ESI      ; 0042e9ad
    TEST EDX,EDX                        ; 0042e9b4
    JLE 0x0042ea49                      ; 0042e9b6
        ;   XREF to: 0042ea49 (CONDITIONAL_JUMP)  ; LAB_0042ea49
    LEA EAX,[EBX + 0x158]               ; 0042e9bc
    MOV dword ptr [ESP + 0x88],ECX      ; 0042e9c2
    XOR EDI,EDI                         ; 0042e9c9
    MOV dword ptr [ESP + 0x7c],EAX      ; 0042e9cb
    FLD float ptr [EDI + 0x7e2cf4]      ; 0042e9cf | DAT_007e2cf4 | DAT_007e2cf8
        ;   Label: LAB_0042e9cf
    FCOMP double ptr [0x005b833e]       ; 0042e9d5 | DAT_005b833e
    FNSTSW AX                           ; 0042e9db
    SAHF                                ; 0042e9dd
    JC 0x0042e9e1                       ; 0042e9de
        ;   XREF to: 0042e9e1 (CONDITIONAL_JUMP)  ; LAB_0042e9e1
    INC ESI                             ; 0042e9e0
    MOV EAX,dword ptr [ESP + 0x88]      ; 0042e9e1
        ;   Label: LAB_0042e9e1
    CMP dword ptr [EAX + 0x33cc],-0x1   ; 0042e9e8
    JNZ 0x0042e9f2                      ; 0042e9ef
        ;   XREF to: 0042e9f2 (CONDITIONAL_JUMP)  ; LAB_0042e9f2
    INC ESI                             ; 0042e9f1
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0042e9f2
        ;   Label: LAB_0042e9f2
    PUSH EAX                            ; 0042e9f6
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 0042e9f7
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x323c] ; 0042e9fc
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0042ea03
    ADD ESP,0x4                         ; 0042ea0a
    TEST EDX,EDX                        ; 0042ea0d
    JZ 0x0042ecf0                       ; 0042ea0f
        ;   XREF to: 0042ecf0 (CONDITIONAL_JUMP)  ; LAB_0042ecf0
    MOV ECX,dword ptr [ESP + 0x88]      ; 0042ea15
        ;   Label: LAB_0042ea15
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0042ea1c
    MOV EDX,dword ptr [ESP + 0x84]      ; 0042ea23
    ADD EDI,0x4                         ; 0042ea2a
    ADD ECX,0x4                         ; 0042ea2d
    INC EAX                             ; 0042ea30
    MOV dword ptr [ESP + 0x88],ECX      ; 0042ea31
    MOV ECX,dword ptr [EDX + 0x1de78]   ; 0042ea38
    MOV dword ptr [ESP + 0x8c],EAX      ; 0042ea3e
    CMP EAX,ECX                         ; 0042ea45
    JL 0x0042e9cf                       ; 0042ea47
        ;   XREF to: 0042e9cf (CONDITIONAL_JUMP)  ; LAB_0042e9cf
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042ea49
        ;   Label: LAB_0042ea49
    CMP ESI,dword ptr [EAX + 0x1de78]   ; 0042ea50
    JNZ 0x0042ea78                      ; 0042ea56
        ;   XREF to: 0042ea78 (CONDITIONAL_JUMP)  ; LAB_0042ea78
    CMP dword ptr [EBX + 0x2538],0x40a00000 ; 0042ea58
    JGE 0x0042ea78                      ; 0042ea62
        ;   XREF to: 0042ea78 (CONDITIONAL_JUMP)  ; LAB_0042ea78
    MOV dword ptr [EBX + 0xbc6c],0x3f800000 ; 0042ea64
    MOV dword ptr [EBX + 0xbc68],0x1    ; 0042ea6e
    FILD dword ptr [EBX + 0x33a0]       ; 0042ea78
        ;   Label: LAB_0042ea78
    FMUL double ptr [0x005b8346]        ; 0042ea7e | DAT_005b8346
    FMUL double ptr [0x005b834e]        ; 0042ea84 | DAT_005b834e
    FADD double ptr [0x005b8356]        ; 0042ea8a | DAT_005b8356
    MOV EDX,dword ptr [EBX + 0xbc64]    ; 0042ea90
    FSTP float ptr [ESP + 0x70]         ; 0042ea96
    PUSH dword ptr [ESP + 0x70]         ; 0042ea9a
    PUSH EDX                            ; 0042ea9e
    CALL sound_sndmain.cpp_FUN_00556ab0 ; 0042ea9f
        ;   XREF to: 00556ab0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00556ab0()
    ADD ESP,0x8                         ; 0042eaa4
    TEST EAX,EAX                        ; 0042eaa7
    JZ 0x0042ecf6                       ; 0042eaa9
        ;   XREF to: 0042ecf6 (CONDITIONAL_JUMP)  ; LAB_0042ecf6
    XOR ECX,ECX                         ; 0042eaaf
        ;   Label: LAB_0042eaaf
    MOV ESI,dword ptr [EBX + 0x33a0]    ; 0042eab1
    MOV dword ptr [ESP + 0x94],ECX      ; 0042eab7
    TEST ESI,ESI                        ; 0042eabe
    JLE 0x0042ec49                      ; 0042eac0
        ;   XREF to: 0042ec49 (CONDITIONAL_JUMP)  ; LAB_0042ec49
    LEA EAX,[EBX + 0xfd8]               ; 0042eac6
    MOV dword ptr [ESP + 0x78],EAX      ; 0042eacc
    LEA EAX,[EBX + 0x385c]              ; 0042ead0
    MOV dword ptr [ESP + 0x74],EAX      ; 0042ead6
    LEA EAX,[EBX + 0x33ac]              ; 0042eada
    MOV dword ptr [ESP + 0xa0],EAX      ; 0042eae0
    MOV dword ptr [ESP + 0x98],EBX      ; 0042eae7
    LEA EAX,[EBX + 0x387c]              ; 0042eaee
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042eaf4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042eafb
        ;   Label: LAB_0042eafb
    MOV EAX,dword ptr [EAX]             ; 0042eb02
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042eb04
    JZ 0x0042ebf4                       ; 0042eb0c
        ;   XREF to: 0042ebf4 (CONDITIONAL_JUMP)  ; LAB_0042ebf4
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042eb12
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042eb19
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 0042eb23
    ADD EAX,dword ptr [ESP + 0x78]      ; 0042eb27
    PUSH EAX                            ; 0042eb2b
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0042eb2c
    ADD EAX,0x8                         ; 0042eb33
    PUSH EAX                            ; 0042eb36
    LEA ESI,[ESP + 0x68]                ; 0042eb37
    LEA EDI,[ESP + 0x50]                ; 0042eb3b
    CALL core_xform.cpp_FUN_00583260    ; 0042eb3f
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0042eb44
    LEA EAX,[ESP + 0x48]                ; 0042eb47
    LEA ESI,[ESP + 0x60]                ; 0042eb4b
    PUSH EAX                            ; 0042eb4f
    MOVSD ES:EDI,ESI                    ; 0042eb50
    MOVSD ES:EDI,ESI                    ; 0042eb51
    MOVSD ES:EDI,ESI                    ; 0042eb52
    PUSH EBX                            ; 0042eb53
    LEA ESI,[ESP + 0x5c]                ; 0042eb54
    CALL core_actor.cpp_FUN_00408b80    ; 0042eb58
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0042eb5d
    IMUL EDX,dword ptr [ESP + 0x94],0x2a4 ; 0042eb60
    LEA EDI,[ESP + 0x3c]                ; 0042eb6b
    LEA ESI,[ESP + 0x54]                ; 0042eb6f
    MOV ECX,dword ptr [ESP + 0x74]      ; 0042eb73
    MOVSD ES:EDI,ESI                    ; 0042eb77
    MOVSD ES:EDI,ESI                    ; 0042eb78
    MOVSD ES:EDI,ESI                    ; 0042eb79
    ADD EDX,ECX                         ; 0042eb7a
    MOV ECX,dword ptr [ESP + 0x9c]      ; 0042eb7c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042eb83
    MOV dword ptr [ECX],EAX             ; 0042eb87
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042eb89
    MOV dword ptr [ECX + 0x4],EAX       ; 0042eb8d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042eb90
    MOV dword ptr [ECX + 0x8],EAX       ; 0042eb94
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042eb97
    FLD double ptr [0x005b835e]         ; 0042eb9e | DAT_005b835e
    FLD float ptr [EAX + 0x14]          ; 0042eba4
    FMUL ST1                            ; 0042eba7
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042eba9
    FSTP float ptr [EAX + 0x39b4]       ; 0042ebb0
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042ebb6
    FLD float ptr [EAX + 0x14]          ; 0042ebbd
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042ebc0
    FSTP float ptr [EAX + 0x39b8]       ; 0042ebc7
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0042ebcd
    FMUL float ptr [EAX + 0x14]         ; 0042ebd4
    PUSH dword ptr [EBP + 0x18]         ; 0042ebd7
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0042ebda
    PUSH EDX                            ; 0042ebe1
    FSTP float ptr [EAX + 0x39bc]       ; 0042ebe2
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042ebe8
    CALL dword ptr [EAX + 0xc]          ; 0042ebee
    ADD ESP,0x8                         ; 0042ebf1
    MOV EDI,dword ptr [ESP + 0xa0]      ; 0042ebf4
        ;   Label: LAB_0042ebf4
    MOV EAX,dword ptr [ESP + 0x98]      ; 0042ebfb
    MOV EDX,dword ptr [ESP + 0x9c]      ; 0042ec02
    MOV ECX,dword ptr [ESP + 0x94]      ; 0042ec09
    MOV ESI,dword ptr [EBX + 0x33a0]    ; 0042ec10
    ADD EDI,0x18                        ; 0042ec16
    ADD EAX,0x2a4                       ; 0042ec19
    ADD EDX,0x2a4                       ; 0042ec1e
    INC ECX                             ; 0042ec24
    MOV dword ptr [ESP + 0xa0],EDI      ; 0042ec25
    MOV dword ptr [ESP + 0x98],EAX      ; 0042ec2c
    MOV dword ptr [ESP + 0x9c],EDX      ; 0042ec33
    MOV dword ptr [ESP + 0x94],ECX      ; 0042ec3a
    CMP ECX,ESI                         ; 0042ec41
    JL 0x0042eafb                       ; 0042ec43
        ;   XREF to: 0042eafb (CONDITIONAL_JUMP)  ; LAB_0042eafb
    MOV EDI,dword ptr [EBX + 0x27a4]    ; 0042ec49
        ;   Label: LAB_0042ec49
    TEST EDI,EDI                        ; 0042ec4f
    JZ 0x0042ed29                       ; 0042ec51
        ;   XREF to: 0042ed29 (CONDITIONAL_JUMP)  ; LAB_0042ed29
    TEST dword ptr [EBX + 0x3260],0x7fffffff ; 0042ec57
        ;   Label: LAB_0042ec57
    JZ 0x0042ef42                       ; 0042ec61
        ;   XREF to: 0042ef42 (CONDITIONAL_JUMP)  ; LAB_0042ef42
    FLDZ                                ; 0042ec67
        ;   Label: LAB_0042ec67
    FCOMP float ptr [EBX + 0x3260]      ; 0042ec69
    FNSTSW AX                           ; 0042ec6f
    SAHF                                ; 0042ec71
    JNC 0x0042ec95                      ; 0042ec72
        ;   XREF to: 0042ec95 (CONDITIONAL_JUMP)  ; LAB_0042ec95
    CMP dword ptr [EBX + 0x2538],0x40a00000 ; 0042ec74
    JG 0x0042efa5                       ; 0042ec7e
        ;   XREF to: 0042efa5 (CONDITIONAL_JUMP)  ; LAB_0042efa5
    FLDZ                                ; 0042ec84
    FCOMP float ptr [EBX + 0x2538]      ; 0042ec86
    FNSTSW AX                           ; 0042ec8c
    SAHF                                ; 0042ec8e
    JNC 0x0042efa5                      ; 0042ec8f
        ;   XREF to: 0042efa5 (CONDITIONAL_JUMP)  ; LAB_0042efa5
    MOV ESP,EBP                         ; 0042ec95
        ;   Label: LAB_0042ec95
    POP EBP                             ; 0042ec97
    POP EDI                             ; 0042ec98
    POP ESI                             ; 0042ec99
    POP EBX                             ; 0042ec9a
    RET                                 ; 0042ec9b
    FLD float ptr [EBX + 0xbc6c]        ; 0042ec9c
        ;   Label: LAB_0042ec9c
    FSUB float ptr [EBP + 0x18]         ; 0042eca2
    FST float ptr [EBX + 0xbc6c]        ; 0042eca5
    FLDZ                                ; 0042ecab
    FCOMPP                              ; 0042ecad
    FNSTSW AX                           ; 0042ecaf
    SAHF                                ; 0042ecb1
    JBE 0x0042eaaf                      ; 0042ecb2
        ;   XREF to: 0042eaaf (CONDITIONAL_JUMP)  ; LAB_0042eaaf
    MOV EDI,dword ptr [EBX + 0xbc64]    ; 0042ecb8
    PUSH EDI                            ; 0042ecbe
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042ecbf
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042ecc4
    PUSH 0x5b82fe                       ; 0042ecc7 | s_character_onfire_fallapa_005b82fd+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042eccc
    PUSH EBX                            ; 0042ecd2
    CALL dword ptr [EAX + 0x2c]         ; 0042ecd3
    ADD ESP,0x8                         ; 0042ecd6
    PUSH 0x1                            ; 0042ecd9
    PUSH 0xbf800000                     ; 0042ecdb
    PUSH 0x0                            ; 0042ece0
    PUSH EBX                            ; 0042ece2
    CALL core_charactr.cpp_FUN_004300e0 ; 0042ece3
        ;   XREF to: 004300e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004300e0()
    ADD ESP,0x10                        ; 0042ece8
    JMP 0x0042eaaf                      ; 0042eceb
        ;   XREF to: 0042eaaf (UNCONDITIONAL_JUMP)  ; LAB_0042eaaf
    INC ESI                             ; 0042ecf0
        ;   Label: LAB_0042ecf0
    JMP 0x0042ea15                      ; 0042ecf1
        ;   XREF to: 0042ea15 (UNCONDITIONAL_JUMP)  ; LAB_0042ea15
    CALL sound_sndmain.cpp_FUN_00555fd0 ; 0042ecf6
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555fd0()
        ;   Label: LAB_0042ecf6
    PUSH dword ptr [ESP + 0x70]         ; 0042ecfb
    CALL sound_sndmain.cpp_FUN_00555df0 ; 0042ecff
        ;   XREF to: 00555df0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00555df0(float volume)
    ADD ESP,0x4                         ; 0042ed04
    PUSH 0x5b831d                       ; 0042ed07 | = "character-onfire-loop.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042ed0c
    PUSH EBX                            ; 0042ed12
    CALL dword ptr [EAX + 0x30]         ; 0042ed13
    ADD ESP,0x8                         ; 0042ed16
    MOV dword ptr [EBX + 0xbc64],EAX    ; 0042ed19
    CALL sound_sndmain.cpp_FUN_00556050 ; 0042ed1f
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_00556050()
    JMP 0x0042eaaf                      ; 0042ed24
        ;   XREF to: 0042eaaf (UNCONDITIONAL_JUMP)  ; LAB_0042eaaf
    MOV EDX,dword ptr [EBX + 0x33a0]    ; 0042ed29
        ;   Label: LAB_0042ed29
    MOV dword ptr [ESP + 0x90],EDI      ; 0042ed2f
    TEST EDX,EDX                        ; 0042ed36
    JLE 0x0042ec57                      ; 0042ed38
        ;   XREF to: 0042ec57 (CONDITIONAL_JUMP)  ; LAB_0042ec57
    FLD float ptr [EBP + 0x18]          ; 0042ed3e
    LEA EAX,[EBX + 0x33ac]              ; 0042ed41
    FMUL float ptr [0x005dd22c]         ; 0042ed47 | DAT_005dd22c
    MOV dword ptr [ESP + 0xa4],EAX      ; 0042ed4d
    FSTP float ptr [ESP + 0x80]         ; 0042ed54
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0042ed5b
        ;   Label: LAB_0042ed5b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042ed62
    MOV EAX,dword ptr [EAX]             ; 0042ed69
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042ed6b
    JZ 0x0042eeae                       ; 0042ed73
        ;   XREF to: 0042eeae (CONDITIONAL_JUMP)  ; LAB_0042eeae
    TEST dword ptr [EBX + 0x3260],0x7fffffff ; 0042ed79
    JZ 0x0042eee1                       ; 0042ed83
        ;   XREF to: 0042eee1 (CONDITIONAL_JUMP)  ; LAB_0042eee1
    FLD float ptr [ESP + 0x80]          ; 0042ed89
    FMUL float ptr [EBX + 0x33a8]       ; 0042ed90
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0042ed96
    FADD float ptr [EAX + 0x14]         ; 0042ed9d
    FSTP float ptr [EAX + 0x14]         ; 0042eda0
        ;   Label: LAB_0042eda0
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042eda3
    FLDZ                                ; 0042edaa
    FCOMP float ptr [EAX + 0x14]        ; 0042edac
    FNSTSW AX                           ; 0042edaf
    SAHF                                ; 0042edb1
    JC 0x0042edc2                       ; 0042edb2
        ;   XREF to: 0042edc2 (CONDITIONAL_JUMP)  ; LAB_0042edc2
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042edb4
    MOV dword ptr [EAX + 0x14],0x0      ; 0042edbb
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042edc2
        ;   Label: LAB_0042edc2
    FLD float ptr [EAX + 0x14]          ; 0042edc9
    FCOMP float ptr [0x005dd230]        ; 0042edcc | DAT_005dd230
    FNSTSW AX                           ; 0042edd2
    SAHF                                ; 0042edd4
    JBE 0x0042eeae                      ; 0042edd5
        ;   XREF to: 0042eeae (CONDITIONAL_JUMP)  ; LAB_0042eeae
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042eddb
    MOV EDX,dword ptr [0x005dd230]      ; 0042ede2 | DAT_005dd230
    MOV dword ptr [EAX + 0x14],EDX      ; 0042ede8
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042edeb
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 0042edf2
    XOR ESI,ESI                         ; 0042edf8
    TEST EDI,EDI                        ; 0042edfa
    JLE 0x0042ee4f                      ; 0042edfc
        ;   XREF to: 0042ee4f (CONDITIONAL_JUMP)  ; LAB_0042ee4f
    MOV EDI,EAX                         ; 0042edfe
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0042ee00
        ;   Label: LAB_0042ee00
    MOV EAX,dword ptr [EDI + 0x1de9c]   ; 0042ee07
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042ee0d
    CMP EAX,ECX                         ; 0042ee10
    JNZ 0x0042ee3a                      ; 0042ee12
        ;   XREF to: 0042ee3a (CONDITIONAL_JUMP)  ; LAB_0042ee3a
    MOV EDX,dword ptr [EBX + 0x33a0]    ; 0042ee14
    XOR EAX,ECX                         ; 0042ee1a
    TEST EDX,EDX                        ; 0042ee1c
    JLE 0x0042ee2e                      ; 0042ee1e
        ;   XREF to: 0042ee2e (CONDITIONAL_JUMP)  ; LAB_0042ee2e
    MOV EDX,EBX                         ; 0042ee20
    CMP ESI,dword ptr [EDX + 0x33b0]    ; 0042ee22
        ;   Label: LAB_0042ee22
    JNZ 0x0042eefd                      ; 0042ee28
        ;   XREF to: 0042eefd (CONDITIONAL_JUMP)  ; LAB_0042eefd
    CMP EAX,dword ptr [EBX + 0x33a0]    ; 0042ee2e
        ;   Label: LAB_0042ee2e
    JZ 0x0042ef14                       ; 0042ee34
        ;   XREF to: 0042ef14 (CONDITIONAL_JUMP)  ; LAB_0042ef14
    MOV EAX,dword ptr [ESP + 0xac]      ; 0042ee3a
        ;   Label: LAB_0042ee3a
    INC ESI                             ; 0042ee41
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0042ee42
    ADD EDI,0x24                        ; 0042ee48
    CMP ESI,EDX                         ; 0042ee4b
    JL 0x0042ee00                       ; 0042ee4d
        ;   XREF to: 0042ee00 (CONDITIONAL_JUMP)  ; LAB_0042ee00
    MOV ECX,dword ptr [EBX + 0x33a0]    ; 0042ee4f
        ;   Label: LAB_0042ee4f
    XOR EAX,EAX                         ; 0042ee55
    TEST ECX,ECX                        ; 0042ee57
    JLE 0x0042ee81                      ; 0042ee59
        ;   XREF to: 0042ee81 (CONDITIONAL_JUMP)  ; LAB_0042ee81
    MOV EDX,dword ptr [ESP + 0xa8]      ; 0042ee5b
    IMUL EDI,dword ptr [EDX + 0x4],0x24 ; 0042ee62
    ADD EDI,dword ptr [ESP + 0xac]      ; 0042ee66
    MOV EDX,EBX                         ; 0042ee6d
    MOV ECX,dword ptr [EDI + 0x1de9c]   ; 0042ee6f
        ;   Label: LAB_0042ee6f
    CMP ECX,dword ptr [EDX + 0x33b0]    ; 0042ee75
    JNZ 0x0042ef2b                      ; 0042ee7b
        ;   XREF to: 0042ef2b (CONDITIONAL_JUMP)  ; LAB_0042ef2b
    CMP EAX,dword ptr [EBX + 0x33a0]    ; 0042ee81
        ;   Label: LAB_0042ee81
    JNZ 0x0042eeae                      ; 0042ee87
        ;   XREF to: 0042eeae (CONDITIONAL_JUMP)  ; LAB_0042eeae
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0042ee89
    IMUL EAX,dword ptr [EAX + 0x4],0x24 ; 0042ee90
    MOV EDX,dword ptr [ESP + 0xac]      ; 0042ee94
    ADD EAX,EDX                         ; 0042ee9b
    MOV ECX,dword ptr [EAX + 0x1de9c]   ; 0042ee9d
    PUSH ECX                            ; 0042eea3
    PUSH EDX                            ; 0042eea4
    PUSH EBX                            ; 0042eea5
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0 ; 0042eea6
        ;   XREF to: 0042e4b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042eeab
    MOV ESI,dword ptr [ESP + 0xa4]      ; 0042eeae
        ;   Label: LAB_0042eeae
    MOV EDI,dword ptr [ESP + 0x90]      ; 0042eeb5
    MOV EDX,dword ptr [EBX + 0x33a0]    ; 0042eebc
    ADD ESI,0x18                        ; 0042eec2
    INC EDI                             ; 0042eec5
    MOV dword ptr [ESP + 0xa4],ESI      ; 0042eec6
    MOV dword ptr [ESP + 0x90],EDI      ; 0042eecd
    CMP EDI,EDX                         ; 0042eed4
    JGE 0x0042ec57                      ; 0042eed6
        ;   XREF to: 0042ec57 (CONDITIONAL_JUMP)  ; LAB_0042ec57
    JMP 0x0042ed5b                      ; 0042eedc
        ;   XREF to: 0042ed5b (UNCONDITIONAL_JUMP)  ; LAB_0042ed5b
    FLD float ptr [ESP + 0x80]          ; 0042eee1
        ;   Label: LAB_0042eee1
    FMUL float ptr [EBX + 0x33a8]       ; 0042eee8
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0042eeee
    FSUBR float ptr [EAX + 0x14]        ; 0042eef5
    JMP 0x0042eda0                      ; 0042eef8
        ;   XREF to: 0042eda0 (UNCONDITIONAL_JUMP)  ; LAB_0042eda0
    INC EAX                             ; 0042eefd
        ;   Label: LAB_0042eefd
    MOV ECX,dword ptr [EBX + 0x33a0]    ; 0042eefe
    ADD EDX,0x18                        ; 0042ef04
    CMP EAX,ECX                         ; 0042ef07
    JL 0x0042ee22                       ; 0042ef09
        ;   XREF to: 0042ee22 (CONDITIONAL_JUMP)  ; LAB_0042ee22
    JMP 0x0042ee2e                      ; 0042ef0f
        ;   XREF to: 0042ee2e (UNCONDITIONAL_JUMP)  ; LAB_0042ee2e
    PUSH ESI                            ; 0042ef14
        ;   Label: LAB_0042ef14
    MOV ECX,dword ptr [ESP + 0xb0]      ; 0042ef15
    PUSH ECX                            ; 0042ef1c
    PUSH EBX                            ; 0042ef1d
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0 ; 0042ef1e
        ;   XREF to: 0042e4b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042e4b0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042ef23
    JMP 0x0042ee3a                      ; 0042ef26
        ;   XREF to: 0042ee3a (UNCONDITIONAL_JUMP)  ; LAB_0042ee3a
    INC EAX                             ; 0042ef2b
        ;   Label: LAB_0042ef2b
    MOV ECX,dword ptr [EBX + 0x33a0]    ; 0042ef2c
    ADD EDX,0x18                        ; 0042ef32
    CMP EAX,ECX                         ; 0042ef35
    JL 0x0042ee6f                       ; 0042ef37
        ;   XREF to: 0042ee6f (CONDITIONAL_JUMP)  ; LAB_0042ee6f
    JMP 0x0042ee81                      ; 0042ef3d
        ;   XREF to: 0042ee81 (UNCONDITIONAL_JUMP)  ; LAB_0042ee81
    MOV ESI,dword ptr [EBX + 0x33a0]    ; 0042ef42
        ;   Label: LAB_0042ef42
    DEC ESI                             ; 0042ef48
    TEST ESI,ESI                        ; 0042ef49
    JL 0x0042ec67                       ; 0042ef4b
        ;   XREF to: 0042ec67 (CONDITIONAL_JUMP)  ; LAB_0042ec67
    LEA EDI,[ESI*0x4 + 0x0]             ; 0042ef51
    SUB EDI,ESI                         ; 0042ef58
    SHL EDI,0x3                         ; 0042ef5a
    ADD EDI,EBX                         ; 0042ef5d
    TEST dword ptr [EDI + 0x33c0],0x7fffffff ; 0042ef5f
        ;   Label: LAB_0042ef5f
    JZ 0x0042ef79                       ; 0042ef69
        ;   XREF to: 0042ef79 (CONDITIONAL_JUMP)  ; LAB_0042ef79
    DEC ESI                             ; 0042ef6b
        ;   Label: LAB_0042ef6b
    SUB EDI,0x18                        ; 0042ef6c
    TEST ESI,ESI                        ; 0042ef6f
    JL 0x0042ec67                       ; 0042ef71
        ;   XREF to: 0042ec67 (CONDITIONAL_JUMP)  ; LAB_0042ec67
    JMP 0x0042ef5f                      ; 0042ef77
        ;   XREF to: 0042ef5f (UNCONDITIONAL_JUMP)  ; LAB_0042ef5f
    MOV ECX,dword ptr [EBX + 0x33a0]    ; 0042ef79
        ;   Label: LAB_0042ef79
    DEC ECX                             ; 0042ef7f
    MOV dword ptr [EBX + 0x33a0],ECX    ; 0042ef80
    JNZ 0x0042ef6b                      ; 0042ef86
        ;   XREF to: 0042ef6b (CONDITIONAL_JUMP)  ; LAB_0042ef6b
    MOV EDX,dword ptr [EBX + 0xbc64]    ; 0042ef88
    PUSH EDX                            ; 0042ef8e
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0042ef8f
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0042ef94
    DEC ESI                             ; 0042ef97
    SUB EDI,0x18                        ; 0042ef98
    TEST ESI,ESI                        ; 0042ef9b
    JL 0x0042ec67                       ; 0042ef9d
        ;   XREF to: 0042ec67 (CONDITIONAL_JUMP)  ; LAB_0042ec67
    JMP 0x0042ef5f                      ; 0042efa3
        ;   XREF to: 0042ef5f (UNCONDITIONAL_JUMP)  ; LAB_0042ef5f
    FLD float ptr [EBX + 0x3260]        ; 0042efa5
        ;   Label: LAB_0042efa5
    MOV EAX,ESP                         ; 0042efab
    FSUB float ptr [EBP + 0x18]         ; 0042efad
    PUSH EAX                            ; 0042efb0
    FSTP float ptr [EBX + 0x3260]       ; 0042efb1
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0042efb7
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0042efbc
    FLD float ptr [EBP + 0x18]          ; 0042efbf
    FMUL double ptr [0x005b8366]        ; 0042efc2 | DAT_005b8366
    MOV EAX,ESP                         ; 0042efc8
    MOV ESI,0x66                        ; 0042efca
    PUSH EAX                            ; 0042efcf
    MOV dword ptr [ESP + 0x34],ESI      ; 0042efd0
    PUSH EBX                            ; 0042efd4
    FSTP float ptr [ESP + 0xc]          ; 0042efd5
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042efd9
    CALL dword ptr [EDX + 0x108]        ; 0042efdf
    FLDZ                                ; 0042efe5
    ADD ESP,0x8                         ; 0042efe7
    FCOMP float ptr [EBX + 0x3260]      ; 0042efea
    FNSTSW AX                           ; 0042eff0
    SAHF                                ; 0042eff2
    JBE 0x0042ec95                      ; 0042eff3
        ;   XREF to: 0042ec95 (CONDITIONAL_JUMP)  ; LAB_0042ec95
    MOV dword ptr [EBX + 0x3260],0x0    ; 0042eff9
    MOV ESP,EBP                         ; 0042f003
    POP EBP                             ; 0042f005
    POP EDI                             ; 0042f006
    POP ESI                             ; 0042f007
    POP EBX                             ; 0042f008
    RET                                 ; 0042f009

