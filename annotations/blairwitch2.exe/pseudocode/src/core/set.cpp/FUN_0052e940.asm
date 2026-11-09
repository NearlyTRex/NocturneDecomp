; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_FUN_0052e940(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0xb0]:4  local_b0
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_game.cpp_FUN_004bd570 at 004bd994
;
; Referenced Globals:
;   TerminatedCString s_d_s_3_2f_ms_005e582c
;   TerminatedCString s_Process_time_d_actors_3_005e583f
;   undefined4 DAT_005e586a
;   undefined4 DAT_005e5872
;   undefined4 DAT_005e587a
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_00614d30
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 DAT_007bbff4
;   undefined4 g_CCharacterClassInfo.name_hash
;   CConsole g_CConsoleInstance
;   undefined4 g_CFlameCanClassInfo.name_hash
;   undefined4 g_CGameInstance.field552_0x228
;   undefined4 g_CGameInstance.field644_0x284
;   undefined4 g_CGlassClassInfo.name_hash
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_fire.cpp_FUN_0049e3e0
;   core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0
;   core_glass.cpp_FUN_004c6d40
;   core_glass.cpp_FUN_004c72d0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0
;   core_setcolid.cpp_FUN_00537fc0
;   core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0
;   engine_console.cpp_FUN_00436710
;   wincore_winrun.cpp_FUN_0058e9e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052e940
        ;   Label: core_set.cpp_FUN_0052e940
    PUSH ESI                            ; 0052e941
    PUSH EDI                            ; 0052e942
    PUSH EBP                            ; 0052e943
    MOV EBP,ESP                         ; 0052e944
    SUB ESP,0x9c                        ; 0052e946
    AND ESP,0xfffffff8                  ; 0052e94c
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e94f
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 0052e952
    XOR EAX,EAX                         ; 0052e958
    TEST ECX,ECX                        ; 0052e95a
    JLE 0x0052e970                      ; 0052e95c
        ;   XREF to: 0052e970 (CONDITIONAL_JUMP)  ; LAB_0052e970
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e95e
    INC EAX                             ; 0052e961
        ;   Label: LAB_0052e961
    CMP EAX,dword ptr [EDX + 0x14d164]  ; 0052e962
    JL 0x0052e961                       ; 0052e968
        ;   XREF to: 0052e961 (CONDITIONAL_JUMP)  ; LAB_0052e961
    LEA EAX,[EAX]                       ; 0052e96a
    MOV EAX,[0x00616494]                ; 0052e970 | g_CGamePtr
        ;   Label: LAB_0052e970
    CMP dword ptr [EAX + 0x228],0x0     ; 0052e975 | g_CGameInstance.field552_0x228
    JNZ 0x0052ea9f                      ; 0052e97c
        ;   XREF to: 0052ea9f (CONDITIONAL_JUMP)  ; LAB_0052ea9f
    XOR EAX,EAX                         ; 0052e982
        ;   Label: LAB_0052e982
    MOV [0x01fc9608],EAX                ; 0052e984 | DAT_01fc9608
    MOV [0x01fc961c],EAX                ; 0052e989 | DAT_01fc961c
    MOV EAX,[0x00616494]                ; 0052e98e | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x284]     ; 0052e993 | g_CGameInstance.field644_0x284
    MOV dword ptr [ESP + 0x5c],EAX      ; 0052e999
    MOV dword ptr [ESP],EAX             ; 0052e99d
    FLD float ptr [ESP + 0x5c]          ; 0052e9a0
    FLDZ                                ; 0052e9a4
    FCOMPP                              ; 0052e9a6
    FNSTSW AX                           ; 0052e9a8
    SAHF                                ; 0052e9aa
    JNC 0x0052ef70                      ; 0052e9ab
        ;   XREF to: 0052ef70 (CONDITIONAL_JUMP)  ; LAB_0052ef70
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e9b1
    PUSH ECX                            ; 0052e9b4
    CALL core_setcolid.cpp_FUN_00537fc0 ; 0052e9b5
        ;   XREF to: 00537fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00537fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0052e9ba
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052e9bd
    MOV EBX,dword ptr [EDX + 0x14d164]  ; 0052e9c0
    XOR EAX,EAX                         ; 0052e9c6
    TEST EBX,EBX                        ; 0052e9c8
    JLE 0x0052e9f0                      ; 0052e9ca
        ;   XREF to: 0052e9f0 (CONDITIONAL_JUMP)  ; LAB_0052e9f0
    MOV ECX,dword ptr [EDX + 0x14d168]  ; 0052e9cc
        ;   Label: LAB_0052e9cc
    MOV dword ptr [ECX + 0x6c],EAX      ; 0052e9d2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0052e9d5
    INC EAX                             ; 0052e9d8
    MOV ESI,dword ptr [ECX + 0x14d164]  ; 0052e9d9
    ADD EDX,0x4                         ; 0052e9df
    CMP EAX,ESI                         ; 0052e9e2
    JL 0x0052e9cc                       ; 0052e9e4
        ;   XREF to: 0052e9cc (CONDITIONAL_JUMP)  ; LAB_0052e9cc
    LEA EAX,[EAX]                       ; 0052e9e6
    LEA EDX,[EDX]                       ; 0052e9ec
    FLD float ptr [ESP]                 ; 0052e9f0
        ;   Label: LAB_0052e9f0
    FLDZ                                ; 0052e9f3
    FCOMPP                              ; 0052e9f5
    FNSTSW AX                           ; 0052e9f7
    SAHF                                ; 0052e9f9
    JNC 0x0052ebf5                      ; 0052e9fa
        ;   XREF to: 0052ebf5 (CONDITIONAL_JUMP)  ; LAB_0052ebf5
    MOV dword ptr [ESP + 0x84],0xfff0bdc1 ; 0052ea00
    MOV dword ptr [ESP + 0x8c],0xf423f  ; 0052ea0b
        ;   Label: LAB_0052ea0b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ea16
    XOR EDX,EDX                         ; 0052ea19
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0052ea1b
    MOV dword ptr [ESP + 0x94],EDX      ; 0052ea21
    TEST ECX,ECX                        ; 0052ea28
    JLE 0x0052ea80                      ; 0052ea2a
        ;   XREF to: 0052ea80 (CONDITIONAL_JUMP)  ; LAB_0052ea80
    MOV EBX,dword ptr [ESP + 0x88]      ; 0052ea2c
    MOV dword ptr [ESP + 0x90],EAX      ; 0052ea33
    SHL EBX,0x2                         ; 0052ea3a
    MOV ESI,dword ptr [ESP + 0x90]      ; 0052ea3d
        ;   Label: LAB_0052ea3d
    MOV ESI,dword ptr [ESI + 0x14d168]  ; 0052ea44
    CMP dword ptr [ESI + 0x104],0x0     ; 0052ea4a
    JZ 0x0052eab6                       ; 0052ea51
        ;   XREF to: 0052eab6 (CONDITIONAL_JUMP)  ; LAB_0052eab6
    MOV ESI,dword ptr [ESP + 0x90]      ; 0052ea53
        ;   Label: LAB_0052ea53
    MOV EDI,dword ptr [ESP + 0x94]      ; 0052ea5a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052ea61
    ADD ESI,0x4                         ; 0052ea64
    INC EDI                             ; 0052ea67
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 0052ea68
    MOV dword ptr [ESP + 0x90],ESI      ; 0052ea6e
    MOV dword ptr [ESP + 0x94],EDI      ; 0052ea75
    CMP EDI,ECX                         ; 0052ea7c
    JL 0x0052ea3d                       ; 0052ea7e
        ;   XREF to: 0052ea3d (CONDITIONAL_JUMP)  ; LAB_0052ea3d
    MOV EBX,dword ptr [ESP + 0x8c]      ; 0052ea80
        ;   Label: LAB_0052ea80
    CMP EBX,0xf423f                     ; 0052ea87
    JGE 0x0052ebf5                      ; 0052ea8d
        ;   XREF to: 0052ebf5 (CONDITIONAL_JUMP)  ; LAB_0052ebf5
    MOV dword ptr [ESP + 0x84],EBX      ; 0052ea93
    JMP 0x0052ea0b                      ; 0052ea9a
        ;   XREF to: 0052ea0b (UNCONDITIONAL_JUMP)  ; LAB_0052ea0b
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0052ea9f
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
        ;   Label: LAB_0052ea9f
    XOR EDI,EDI                         ; 0052eaa4
    MOV dword ptr [ESP + 0x64],EAX      ; 0052eaa6
    MOV dword ptr [ESP + 0x88],EDI      ; 0052eaaa
    JMP 0x0052e982                      ; 0052eab1
        ;   XREF to: 0052e982 (UNCONDITIONAL_JUMP)  ; LAB_0052e982
    MOV EDX,dword ptr [ESP + 0x84]      ; 0052eab6
        ;   Label: LAB_0052eab6
    MOV EAX,dword ptr [ESI + 0x64]      ; 0052eabd
    CMP EAX,EDX                         ; 0052eac0
    JNZ 0x0052ebd6                      ; 0052eac2
        ;   XREF to: 0052ebd6 (CONDITIONAL_JUMP)  ; LAB_0052ebd6
    LEA EDI,[ESP + 0x4c]                ; 0052eac8
    MOV dword ptr [0x007bbff4],ESI      ; 0052eacc | DAT_007bbff4
    LEA ESI,[ESI + 0x30]                ; 0052ead2
    MOV EAX,[0x00616494]                ; 0052ead5 | g_CGamePtr
    MOVSD ES:EDI,ESI                    ; 0052eada
    MOVSD ES:EDI,ESI                    ; 0052eadb
    MOVSD ES:EDI,ESI                    ; 0052eadc
    CMP dword ptr [EAX + 0x228],0x2     ; 0052eadd | g_CGameInstance.field552_0x228
    JNZ 0x0052eaf2                      ; 0052eae4
        ;   XREF to: 0052eaf2 (CONDITIONAL_JUMP)  ; LAB_0052eaf2
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0052eae6
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV dword ptr [ESP + 0x80],EAX      ; 0052eaeb
    MOV EAX,[0x007bbff4]                ; 0052eaf2 | DAT_007bbff4
        ;   Label: LAB_0052eaf2
    PUSH dword ptr [ESP]                ; 0052eaf7
    PUSH EAX                            ; 0052eafa
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052eafb
    CALL dword ptr [EDX + 0x14]         ; 0052eb01
    MOV EAX,[0x00616494]                ; 0052eb04 | g_CGamePtr
    MOV EDX,dword ptr [EAX + 0x228]     ; 0052eb09 | g_CGameInstance.field552_0x228
    ADD ESP,0x8                         ; 0052eb0f
    CMP EDX,0x2                         ; 0052eb12
    JNZ 0x0052eb36                      ; 0052eb15
        ;   XREF to: 0052eb36 (CONDITIONAL_JUMP)  ; LAB_0052eb36
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0052eb17
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    MOV ECX,dword ptr [ESP + 0x80]      ; 0052eb1c
    SUB EAX,ECX                         ; 0052eb23
    MOV dword ptr [EBX + 0x200a3bc],EAX ; 0052eb25
    MOV EAX,[0x007bbff4]                ; 0052eb2b | DAT_007bbff4
    MOV dword ptr [EBX + 0x200c2fc],EAX ; 0052eb30
    MOV EAX,[0x00616494]                ; 0052eb36 | g_CGamePtr
        ;   Label: LAB_0052eb36
    CMP dword ptr [EAX + 0x228],0x0     ; 0052eb3b | g_CGameInstance.field552_0x228
    JZ 0x0052eb56                       ; 0052eb42
        ;   XREF to: 0052eb56 (CONDITIONAL_JUMP)  ; LAB_0052eb56
    MOV EDI,dword ptr [ESP + 0x88]      ; 0052eb44
    INC EDI                             ; 0052eb4b
    ADD EBX,0x4                         ; 0052eb4c
    MOV dword ptr [ESP + 0x88],EDI      ; 0052eb4f
    MOV EAX,[0x007bbff4]                ; 0052eb56 | DAT_007bbff4
        ;   Label: LAB_0052eb56
    PUSH EAX                            ; 0052eb5b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0052eb5c
    CALL dword ptr [EDX + 0xcc]         ; 0052eb62
    ADD ESP,0x4                         ; 0052eb68
    TEST EAX,EAX                        ; 0052eb6b
    JZ 0x0052eb84                       ; 0052eb6d
        ;   XREF to: 0052eb84 (CONDITIONAL_JUMP)  ; LAB_0052eb84
    MOV EDX,dword ptr [0x007bbff4]      ; 0052eb6f | DAT_007bbff4
    PUSH 0x0                            ; 0052eb75
    ADD EDX,0x20                        ; 0052eb77
    PUSH EDX                            ; 0052eb7a
    PUSH EAX                            ; 0052eb7b
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0 ; 0052eb7c
        ;   XREF to: 005121a0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 0052eb81
    MOV EDX,dword ptr [0x007bbff4]      ; 0052eb84 | DAT_007bbff4
        ;   Label: LAB_0052eb84
    FLD float ptr [ESP + 0x50]          ; 0052eb8a
    FCOMP float ptr [EDX + 0x34]        ; 0052eb8e
    FNSTSW AX                           ; 0052eb91
    SAHF                                ; 0052eb93
    JZ 0x0052ebb1                       ; 0052eb94
        ;   XREF to: 0052ebb1 (CONDITIONAL_JUMP)  ; LAB_0052ebb1
    MOV EAX,[0x007bbff4]                ; 0052eb96 | DAT_007bbff4
        ;   Label: LAB_0052eb96
    PUSH EAX                            ; 0052eb9b
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0052eb9c
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0052eba1
    XOR EDX,EDX                         ; 0052eba4
    MOV dword ptr [0x007bbff4],EDX      ; 0052eba6 | DAT_007bbff4
    JMP 0x0052ea53                      ; 0052ebac
        ;   XREF to: 0052ea53 (UNCONDITIONAL_JUMP)  ; LAB_0052ea53
    FLD float ptr [ESP + 0x4c]          ; 0052ebb1
        ;   Label: LAB_0052ebb1
    FCOMP float ptr [EDX + 0x30]        ; 0052ebb5
    FNSTSW AX                           ; 0052ebb8
    SAHF                                ; 0052ebba
    JNZ 0x0052eb96                      ; 0052ebbb
        ;   XREF to: 0052eb96 (CONDITIONAL_JUMP)  ; LAB_0052eb96
    FLD float ptr [ESP + 0x54]          ; 0052ebbd
    FCOMP float ptr [EDX + 0x38]        ; 0052ebc1
    FNSTSW AX                           ; 0052ebc4
    SAHF                                ; 0052ebc6
    JNZ 0x0052eb96                      ; 0052ebc7
        ;   XREF to: 0052eb96 (CONDITIONAL_JUMP)  ; LAB_0052eb96
    XOR EDX,EDX                         ; 0052ebc9
    MOV dword ptr [0x007bbff4],EDX      ; 0052ebcb | DAT_007bbff4
    JMP 0x0052ea53                      ; 0052ebd1
        ;   XREF to: 0052ea53 (UNCONDITIONAL_JUMP)  ; LAB_0052ea53
    JLE 0x0052ea53                      ; 0052ebd6
        ;   XREF to: 0052ea53 (CONDITIONAL_JUMP)  ; LAB_0052ea53
        ;   Label: LAB_0052ebd6
    CMP EAX,dword ptr [ESP + 0x8c]      ; 0052ebdc
    JGE 0x0052ea53                      ; 0052ebe3
        ;   XREF to: 0052ea53 (CONDITIONAL_JUMP)  ; LAB_0052ea53
    MOV dword ptr [ESP + 0x8c],EAX      ; 0052ebe9
    JMP 0x0052ea53                      ; 0052ebf0
        ;   XREF to: 0052ea53 (UNCONDITIONAL_JUMP)  ; LAB_0052ea53
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052ebf5
        ;   Label: LAB_0052ebf5
    MOV ECX,dword ptr [EAX + 0x14d164]  ; 0052ebf8
    XOR EDI,EDI                         ; 0052ebfe
    TEST ECX,ECX                        ; 0052ec00
    JLE 0x0052eddc                      ; 0052ec02
        ;   XREF to: 0052eddc (CONDITIONAL_JUMP)  ; LAB_0052eddc
    MOV ESI,EAX                         ; 0052ec08
    MOV EBX,dword ptr [0x007bdc94]      ; 0052ec0a | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0052ec0a
    PUSH EBX                            ; 0052ec10
    MOV EAX,dword ptr [ESI + 0x14d168]  ; 0052ec11
    PUSH EAX                            ; 0052ec17
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0052ec18
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0052ec1d
    MOV EBX,EAX                         ; 0052ec20
    MOV dword ptr [ESP + 0x74],EAX      ; 0052ec22
    TEST EAX,EAX                        ; 0052ec26
    JZ 0x0052eccc                       ; 0052ec28
        ;   XREF to: 0052eccc (CONDITIONAL_JUMP)  ; LAB_0052eccc
    PUSH EBX                            ; 0052ec2e
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0052ec2f
    CALL dword ptr [EAX + 0x114]        ; 0052ec35
    ADD ESP,0x4                         ; 0052ec3b
    TEST EAX,EAX                        ; 0052ec3e
    JNZ 0x0052eccc                      ; 0052ec40
        ;   XREF to: 0052eccc (CONDITIONAL_JUMP)  ; LAB_0052eccc
    MOV dword ptr [ESP + 0x60],EAX      ; 0052ec46
    LEA EAX,[ESP + 0x60]                ; 0052ec4a
    PUSH EAX                            ; 0052ec4e
    LEA EAX,[ESP + 0x44]                ; 0052ec4f
    PUSH EAX                            ; 0052ec53
    ADD EBX,0x20                        ; 0052ec54
    PUSH 0x0                            ; 0052ec57
    PUSH EBX                            ; 0052ec59
    MOV ECX,dword ptr [0x00614d30]      ; 0052ec5a | DAT_00614d30
    PUSH ECX                            ; 0052ec60
    CALL core_fire.cpp_FUN_0049e3e0     ; 0052ec61
        ;   XREF to: 0049e3e0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_FUN_0049e3e0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0052ec66
    TEST EAX,EAX                        ; 0052ec69
    JZ 0x0052eccc                       ; 0052ec6b
        ;   XREF to: 0052eccc (CONDITIONAL_JUMP)  ; LAB_0052eccc
    LEA EAX,[ESP + 0x4]                 ; 0052ec6d
    PUSH EAX                            ; 0052ec71
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0052ec72
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0052ec77
    MOV EBX,0x4                         ; 0052ec7a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0052ec7f
    LEA EDX,[ESP + 0x10]                ; 0052ec83
    MOV dword ptr [ESP + 0x8],EAX       ; 0052ec87
    LEA EAX,[ESP + 0x40]                ; 0052ec8b
    MOV dword ptr [ESP + 0x34],EBX      ; 0052ec8f
    CMP EDX,EAX                         ; 0052ec93
    JZ 0x0052ecaf                       ; 0052ec95
        ;   XREF to: 0052ecaf (CONDITIONAL_JUMP)  ; LAB_0052ecaf
    MOV EAX,dword ptr [ESP + 0x40]      ; 0052ec97
    MOV dword ptr [ESP + 0x10],EAX      ; 0052ec9b
    MOV EAX,dword ptr [ESP + 0x44]      ; 0052ec9f
    MOV dword ptr [ESP + 0x14],EAX      ; 0052eca3
    MOV EAX,dword ptr [ESP + 0x48]      ; 0052eca7
    MOV dword ptr [ESP + 0x18],EAX      ; 0052ecab
    LEA EAX,[ESP + 0x4]                 ; 0052ecaf
        ;   Label: LAB_0052ecaf
    MOV EDX,dword ptr [ESP + 0x74]      ; 0052ecb3
    PUSH EAX                            ; 0052ecb7
    MOV EAX,dword ptr [ESP + 0x78]      ; 0052ecb8
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0052ecbc
    PUSH EAX                            ; 0052ecc2
    CALL dword ptr [EDX + 0x110]        ; 0052ecc3
    ADD ESP,0x8                         ; 0052ecc9
    MOV EDX,dword ptr [0x01cb8280]      ; 0052eccc | g_CGlassClassInfo.name_hash
        ;   Label: LAB_0052eccc
    PUSH EDX                            ; 0052ecd2
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 0052ecd3
    PUSH ECX                            ; 0052ecd9
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0052ecda
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 0052ecdf
    ADD ESP,0x8                         ; 0052ece1
    TEST EAX,EAX                        ; 0052ece4
    JZ 0x0052ed27                       ; 0052ece6
        ;   XREF to: 0052ed27 (CONDITIONAL_JUMP)  ; LAB_0052ed27
    PUSH 0x0                            ; 0052ece8
    PUSH 0x0                            ; 0052ecea
    ADD EAX,0x20                        ; 0052ecec
    PUSH 0x0                            ; 0052ecef
    PUSH EAX                            ; 0052ecf1
    MOV EDX,dword ptr [0x00614d30]      ; 0052ecf2 | DAT_00614d30
    PUSH EDX                            ; 0052ecf8
    MOV dword ptr [ESP + 0x84],EAX      ; 0052ecf9
    CALL core_fire.cpp_FUN_0049e3e0     ; 0052ed00
        ;   XREF to: 0049e3e0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_FUN_0049e3e0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0052ed05
    TEST EAX,EAX                        ; 0052ed08
    JZ 0x0052ed27                       ; 0052ed0a
        ;   XREF to: 0052ed27 (CONDITIONAL_JUMP)  ; LAB_0052ed27
    PUSH EBX                            ; 0052ed0c
    CALL core_glass.cpp_FUN_004c72d0    ; 0052ed0d
        ;   XREF to: 004c72d0 (UNCONDITIONAL_CALL)  ; int core_glass.cpp_FUN_004c72d0(CGlass * this_ptr)
    ADD ESP,0x4                         ; 0052ed12
    TEST EAX,EAX                        ; 0052ed15
    JZ 0x0052ed27                       ; 0052ed17
        ;   XREF to: 0052ed27 (CONDITIONAL_JUMP)  ; LAB_0052ed27
    MOV ECX,dword ptr [ESP + 0x70]      ; 0052ed19
    PUSH ECX                            ; 0052ed1d
    PUSH EBX                            ; 0052ed1e
    CALL core_glass.cpp_FUN_004c6d40    ; 0052ed1f
        ;   XREF to: 004c6d40 (UNCONDITIONAL_CALL)  ; undefined core_glass.cpp_FUN_004c6d40()
    ADD ESP,0x8                         ; 0052ed24
    MOV EBX,dword ptr [0x02653628]      ; 0052ed27 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0052ed27
    PUSH EBX                            ; 0052ed2d
    MOV EAX,dword ptr [ESI + 0x14d168]  ; 0052ed2e
    PUSH EAX                            ; 0052ed34
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0052ed35
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 0052ed3a
    ADD ESP,0x8                         ; 0052ed3c
    TEST EAX,EAX                        ; 0052ed3f
    JZ 0x0052ed86                       ; 0052ed41
        ;   XREF to: 0052ed86 (CONDITIONAL_JUMP)  ; LAB_0052ed86
    CMP dword ptr [EAX + 0x2d0],0x7     ; 0052ed43
    JNZ 0x0052ed86                      ; 0052ed4a
        ;   XREF to: 0052ed86 (CONDITIONAL_JUMP)  ; LAB_0052ed86
    CMP byte ptr [EAX + 0x464],0x0      ; 0052ed4c
    JNZ 0x0052ed86                      ; 0052ed53
        ;   XREF to: 0052ed86 (CONDITIONAL_JUMP)  ; LAB_0052ed86
    LEA EAX,[ESP + 0x58]                ; 0052ed55
    PUSH EAX                            ; 0052ed59
    XOR ECX,ECX                         ; 0052ed5a
    PUSH ECX                            ; 0052ed5c
    LEA EAX,[EBX + 0x20]                ; 0052ed5d
    PUSH 0x0                            ; 0052ed60
    PUSH EAX                            ; 0052ed62
    MOV EAX,[0x00614d30]                ; 0052ed63 | DAT_00614d30
    PUSH EAX                            ; 0052ed68
    MOV dword ptr [ESP + 0x6c],ECX      ; 0052ed69
    CALL core_fire.cpp_FUN_0049e3e0     ; 0052ed6d
        ;   XREF to: 0049e3e0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_FUN_0049e3e0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0052ed72
    TEST EAX,EAX                        ; 0052ed75
    JZ 0x0052ed86                       ; 0052ed77
        ;   XREF to: 0052ed86 (CONDITIONAL_JUMP)  ; LAB_0052ed86
    PUSH dword ptr [ESP + 0x58]         ; 0052ed79
    PUSH EBX                            ; 0052ed7d
    CALL core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0 ; 0052ed7e
        ;   XREF to: 005785b0 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_applyDamage_FUN_005785b0(CTrigger * this_ptr, float hit_points)
    ADD ESP,0x8                         ; 0052ed83
    MOV EDX,dword ptr [0x01cab6f8]      ; 0052ed86 | g_CFlameCanClassInfo.name_hash
        ;   Label: LAB_0052ed86
    PUSH EDX                            ; 0052ed8c
    MOV ECX,dword ptr [ESI + 0x14d168]  ; 0052ed8d
    PUSH ECX                            ; 0052ed93
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0052ed94
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    MOV EBX,EAX                         ; 0052ed99
    ADD ESP,0x8                         ; 0052ed9b
    TEST EAX,EAX                        ; 0052ed9e
    JZ 0x0052edc7                       ; 0052eda0
        ;   XREF to: 0052edc7 (CONDITIONAL_JUMP)  ; LAB_0052edc7
    PUSH 0x0                            ; 0052eda2
    PUSH 0x0                            ; 0052eda4
    ADD EAX,0x20                        ; 0052eda6
    PUSH 0x0                            ; 0052eda9
    PUSH EAX                            ; 0052edab
    MOV EAX,[0x00614d30]                ; 0052edac | DAT_00614d30
    PUSH EAX                            ; 0052edb1
    CALL core_fire.cpp_FUN_0049e3e0     ; 0052edb2
        ;   XREF to: 0049e3e0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_FUN_0049e3e0(CFireEffect * this_ptr, CVector3f * position, float radius, CVector3f * out_force_dir, ...)
    ADD ESP,0x14                        ; 0052edb7
    TEST EAX,EAX                        ; 0052edba
    JZ 0x0052edc7                       ; 0052edbc
        ;   XREF to: 0052edc7 (CONDITIONAL_JUMP)  ; LAB_0052edc7
    PUSH EBX                            ; 0052edbe
    CALL core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0 ; 0052edbf
        ;   XREF to: 004a08d0 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_ignite_FUN_004a08d0(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 0052edc4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052edc7
        ;   Label: LAB_0052edc7
    INC EDI                             ; 0052edca
    MOV EBX,dword ptr [EAX + 0x14d164]  ; 0052edcb
    ADD ESI,0x4                         ; 0052edd1
    CMP EDI,EBX                         ; 0052edd4
    JL 0x0052ec0a                       ; 0052edd6
        ;   XREF to: 0052ec0a (CONDITIONAL_JUMP)  ; LAB_0052ec0a
    MOV EAX,[0x00616494]                ; 0052eddc | g_CGamePtr
        ;   Label: LAB_0052eddc
    MOV ESI,dword ptr [EAX + 0x228]     ; 0052ede1 | g_CGameInstance.field552_0x228
    TEST ESI,ESI                        ; 0052ede7
    JZ 0x0052ef50                       ; 0052ede9
        ;   XREF to: 0052ef50 (CONDITIONAL_JUMP)  ; LAB_0052ef50
    CMP ESI,0x2                         ; 0052edef
    JNZ 0x0052ef00                      ; 0052edf2
        ;   XREF to: 0052ef00 (CONDITIONAL_JUMP)  ; LAB_0052ef00
    XOR EAX,EAX                         ; 0052edf8
    MOV dword ptr [ESP + 0x7c],EAX      ; 0052edfa
    MOV EAX,dword ptr [ESP + 0x88]      ; 0052edfe
    XOR EDX,EDX                         ; 0052ee05
    DEC EAX                             ; 0052ee07
    MOV dword ptr [ESP + 0x78],EDX      ; 0052ee08
    MOV dword ptr [ESP + 0x6c],EAX      ; 0052ee0c
    TEST EAX,EAX                        ; 0052ee10
    JLE 0x0052ee9d                      ; 0052ee12
        ;   XREF to: 0052ee9d (CONDITIONAL_JUMP)  ; LAB_0052ee9d
    MOV EAX,dword ptr [ESP + 0x88]      ; 0052ee18
    SHL EAX,0x2                         ; 0052ee1f
    MOV dword ptr [ESP + 0x68],EAX      ; 0052ee22
    MOV EBX,dword ptr [ESP + 0x7c]      ; 0052ee26
        ;   Label: LAB_0052ee26
    MOV EDI,dword ptr [ESP + 0x88]      ; 0052ee2a
    INC EBX                             ; 0052ee31
    CMP EBX,EDI                         ; 0052ee32
    JGE 0x0052ee81                      ; 0052ee34
        ;   XREF to: 0052ee81 (CONDITIONAL_JUMP)  ; LAB_0052ee81
    MOV EDI,dword ptr [ESP + 0x68]      ; 0052ee36
    MOV EDX,dword ptr [ESP + 0x78]      ; 0052ee3a
    LEA EAX,[EBX*0x4 + 0x0]             ; 0052ee3e
    MOV ESI,dword ptr [EAX + 0x200a3bc] ; 0052ee45
        ;   Label: LAB_0052ee45
    MOV ECX,dword ptr [EDX + 0x200a3bc] ; 0052ee4b
    CMP ECX,ESI                         ; 0052ee51
    JGE 0x0052ee79                      ; 0052ee53
        ;   XREF to: 0052ee79 (CONDITIONAL_JUMP)  ; LAB_0052ee79
    MOV dword ptr [EDX + 0x200a3bc],ESI ; 0052ee55
    MOV dword ptr [EAX + 0x200a3bc],ECX ; 0052ee5b
    MOV ECX,dword ptr [EAX + 0x200c2fc] ; 0052ee61
    MOV ESI,dword ptr [EDX + 0x200c2fc] ; 0052ee67
    MOV dword ptr [EDX + 0x200c2fc],ECX ; 0052ee6d
    MOV dword ptr [EAX + 0x200c2fc],ESI ; 0052ee73
    ADD EAX,0x4                         ; 0052ee79
        ;   Label: LAB_0052ee79
    INC EBX                             ; 0052ee7c
    CMP EAX,EDI                         ; 0052ee7d
    JL 0x0052ee45                       ; 0052ee7f
        ;   XREF to: 0052ee45 (CONDITIONAL_JUMP)  ; LAB_0052ee45
    MOV EDX,dword ptr [ESP + 0x78]      ; 0052ee81
        ;   Label: LAB_0052ee81
    MOV ECX,dword ptr [ESP + 0x7c]      ; 0052ee85
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0052ee89
    ADD EDX,0x4                         ; 0052ee8d
    INC ECX                             ; 0052ee90
    MOV dword ptr [ESP + 0x78],EDX      ; 0052ee91
    MOV dword ptr [ESP + 0x7c],ECX      ; 0052ee95
    CMP ECX,EBX                         ; 0052ee99
    JL 0x0052ee26                       ; 0052ee9b
        ;   XREF to: 0052ee26 (CONDITIONAL_JUMP)  ; LAB_0052ee26
    MOV ESI,dword ptr [ESP + 0x88]      ; 0052ee9d
        ;   Label: LAB_0052ee9d
    MOV EDI,0x14                        ; 0052eea4
    CMP ESI,EDI                         ; 0052eea9
    JGE 0x0052eeaf                      ; 0052eeab
        ;   XREF to: 0052eeaf (CONDITIONAL_JUMP)  ; LAB_0052eeaf
    MOV EDI,ESI                         ; 0052eead
    XOR EBX,EBX                         ; 0052eeaf
        ;   Label: LAB_0052eeaf
    TEST EDI,EDI                        ; 0052eeb1
    JLE 0x0052ef00                      ; 0052eeb3
        ;   XREF to: 0052ef00 (CONDITIONAL_JUMP)  ; LAB_0052ef00
    XOR ESI,ESI                         ; 0052eeb5
    FILD dword ptr [ESI + 0x200a3bc]    ; 0052eeb7
        ;   Label: LAB_0052eeb7
    FMUL double ptr [0x005e586a]        ; 0052eebd | DAT_005e586a
    FMUL double ptr [0x005e5872]        ; 0052eec3 | DAT_005e5872
    FMUL double ptr [0x005e587a]        ; 0052eec9 | DAT_005e587a
    FDIV float ptr [ESP]                ; 0052eecf
    SUB ESP,0x8                         ; 0052eed2
    FSTP double ptr [ESP]               ; 0052eed5
    MOV EAX,dword ptr [ESI + 0x200c2fc] ; 0052eed8
    PUSH EAX                            ; 0052eede
    PUSH EBX                            ; 0052eedf
    PUSH 0x5e582c                       ; 0052eee0 | = "%d. %s : %3.2f ms\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0052eee5 | g_CConsolePtr
    PUSH EDX                            ; 0052eeeb | g_CConsoleInstance
    ADD ESI,0x4                         ; 0052eeec
    INC EBX                             ; 0052eeef
    CALL engine_console.cpp_FUN_00436710 ; 0052eef0
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x18                        ; 0052eef5
    CMP EBX,EDI                         ; 0052eef8
    JL 0x0052eeb7                       ; 0052eefa
        ;   XREF to: 0052eeb7 (CONDITIONAL_JUMP)  ; LAB_0052eeb7
    LEA EAX,[EAX]                       ; 0052eefc
    MOV EDI,dword ptr [ESP + 0x64]      ; 0052ef00
        ;   Label: LAB_0052ef00
    CALL wincore_winrun.cpp_FUN_0058e9e0 ; 0052ef04
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined wincore_winrun.cpp_FUN_0058e9e0()
    SUB EAX,EDI                         ; 0052ef09
    MOV dword ptr [ESP + 0x98],EAX      ; 0052ef0b
    FILD dword ptr [ESP + 0x98]         ; 0052ef12
    FMUL double ptr [0x005e586a]        ; 0052ef19 | DAT_005e586a
    FMUL double ptr [0x005e5872]        ; 0052ef1f | DAT_005e5872
    FMUL double ptr [0x005e587a]        ; 0052ef25 | DAT_005e587a
    FDIV float ptr [ESP]                ; 0052ef2b
    SUB ESP,0x8                         ; 0052ef2e
    MOV EAX,dword ptr [ESP + 0x90]      ; 0052ef31
    FSTP double ptr [ESP]               ; 0052ef38
    PUSH EAX                            ; 0052ef3b
    PUSH 0x5e583f                       ; 0052ef3c | = "Process time (%d actors) : %3.2f ms\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0052ef41 | g_CConsolePtr
    PUSH EDX                            ; 0052ef47 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0052ef48
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x14                        ; 0052ef4d
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052ef50
        ;   Label: LAB_0052ef50
    MOV ECX,dword ptr [EDX + 0x14d164]  ; 0052ef53
    XOR EAX,EAX                         ; 0052ef59
    TEST ECX,ECX                        ; 0052ef5b
    JLE 0x0052ef70                      ; 0052ef5d
        ;   XREF to: 0052ef70 (CONDITIONAL_JUMP)  ; LAB_0052ef70
    MOV EDX,dword ptr [EBP + 0x14]      ; 0052ef5f
    INC EAX                             ; 0052ef62
        ;   Label: LAB_0052ef62
    CMP EAX,dword ptr [EDX + 0x14d164]  ; 0052ef63
    JL 0x0052ef62                       ; 0052ef69
        ;   XREF to: 0052ef62 (CONDITIONAL_JUMP)  ; LAB_0052ef62
    LEA EAX,[EAX]                       ; 0052ef6b
    MOV ECX,ECX                         ; 0052ef6e
    MOV ESP,EBP                         ; 0052ef70
        ;   Label: LAB_0052ef70
    POP EBP                             ; 0052ef72
    POP EDI                             ; 0052ef73
    POP ESI                             ; 0052ef74
    POP EBX                             ; 0052ef75
    RET                                 ; 0052ef76

