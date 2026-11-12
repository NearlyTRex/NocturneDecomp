; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_0042abe0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x140]:1  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined        Stack[-0xec]:1  local_ec
; undefined        Stack[-0xe0]:1  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined        Stack[-0xd4]:1  local_d4
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x5c]:1  local_5c
; undefined        Stack[-0x44]:1  local_44
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d22a5
;   core_icepick.cpp_CIcePick_processAI_FUN_004d5950 at 004d5f15
;   core_moloch.cpp_CMoloch_processAI_FUN_00501c60 at 00502051
;   core_svetlana.cpp_CSvetlana_processAI_FUN_00570c80 at 00571245
;
; Referenced Globals:
;   TerminatedCString s_s_was_in_the_way_but_cou_005cd2aa
;   undefined4 DAT_005cd2e6
;   undefined4 DAT_005cd2ee
;   undefined4 DAT_005cd2f6
;   undefined4 DAT_005cd2fe
;   undefined4 DAT_005cd306
;   undefined4 DAT_005cd30e
;   undefined4 DAT_005cd316
;   undefined4 DAT_005cd31a
;   undefined4 DAT_005cd31e
;   undefined4 DAT_005cd326
;   undefined4 DAT_00609aa0
;   CConsole* g_CConsolePtr = 007c158c
;   CConsole g_CConsoleInstance
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;   core_dirmat.cpp_FUN_00449530
;   core_hero.cpp_closestHeroToPoint_FUN_004ce050
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042abe0
        ;   Label: core_charactr.cpp_FUN_0042abe0
    PUSH ESI                            ; 0042abe1
    PUSH EDI                            ; 0042abe2
    PUSH EBP                            ; 0042abe3
    MOV EBP,ESP                         ; 0042abe4
    SUB ESP,0x188                       ; 0042abe6
    AND ESP,0xfffffff8                  ; 0042abec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042abef
    FLD float ptr [EAX + 0x303c]        ; 0042abf2
    FLDZ                                ; 0042abf8
    FCOMPP                              ; 0042abfa
    FNSTSW AX                           ; 0042abfc
    SAHF                                ; 0042abfe
    JBE 0x0042ac8f                      ; 0042abff
        ;   XREF to: 0042ac8f (CONDITIONAL_JUMP)  ; LAB_0042ac8f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ac05
    FLD float ptr [EAX + 0x303c]        ; 0042ac08
    FADD float ptr [EBP + 0x18]         ; 0042ac0e
    FST float ptr [EAX + 0x303c]        ; 0042ac11
    FLDZ                                ; 0042ac17
    FCOMPP                              ; 0042ac19
    FNSTSW AX                           ; 0042ac1b
    SAHF                                ; 0042ac1d
    JBE 0x0042ac34                      ; 0042ac1e
        ;   XREF to: 0042ac34 (CONDITIONAL_JUMP)  ; LAB_0042ac34
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ac20
    FLD float ptr [EAX + 0x304c]        ; 0042ac23
    FCOMP double ptr [0x005cd2ee]       ; 0042ac29 | DAT_005cd2ee
    FNSTSW AX                           ; 0042ac2f
    SAHF                                ; 0042ac31
    JBE 0x0042ac4a                      ; 0042ac32
        ;   XREF to: 0042ac4a (CONDITIONAL_JUMP)  ; LAB_0042ac4a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ac34
        ;   Label: LAB_0042ac34
    MOV dword ptr [EAX + 0x303c],0x0    ; 0042ac37
    XOR EAX,EAX                         ; 0042ac41
        ;   Label: LAB_0042ac41
    MOV ESP,EBP                         ; 0042ac43
    POP EBP                             ; 0042ac45
    POP EDI                             ; 0042ac46
    POP ESI                             ; 0042ac47
    POP EBX                             ; 0042ac48
    RET                                 ; 0042ac49
    PUSH 0x0                            ; 0042ac4a
        ;   Label: LAB_0042ac4a
    PUSH 0x0                            ; 0042ac4c
    PUSH 0x265370c                      ; 0042ac4e | DAT_0265370c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ac53
    PUSH 0x0                            ; 0042ac56
    ADD EAX,0x3040                      ; 0042ac58
    PUSH EAX                            ; 0042ac5d
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042ac5e
    PUSH ESI                            ; 0042ac61
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0042ac62
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042ac67
    TEST EAX,EAX                        ; 0042ac6a
    JZ 0x0042ac83                       ; 0042ac6c
        ;   XREF to: 0042ac83 (CONDITIONAL_JUMP)  ; LAB_0042ac83
    MOV EAX,ESI                         ; 0042ac6e
    MOV dword ptr [ESI + 0x303c],0x0    ; 0042ac70
    XOR EAX,ESI                         ; 0042ac7a
    MOV ESP,EBP                         ; 0042ac7c
    POP EBP                             ; 0042ac7e
    POP EDI                             ; 0042ac7f
    POP ESI                             ; 0042ac80
    POP EBX                             ; 0042ac81
    RET                                 ; 0042ac82
    MOV EAX,0x1                         ; 0042ac83
        ;   Label: LAB_0042ac83
    MOV ESP,EBP                         ; 0042ac88
    POP EBP                             ; 0042ac8a
    POP EDI                             ; 0042ac8b
    POP ESI                             ; 0042ac8c
    POP EBX                             ; 0042ac8d
    RET                                 ; 0042ac8e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042ac8f
        ;   Label: LAB_0042ac8f
    ADD EAX,0x20                        ; 0042ac92
    PUSH EAX                            ; 0042ac95
    MOV dword ptr [ESP + 0x188],EAX     ; 0042ac96
    CALL core_hero.cpp_closestHeroToPoint_FUN_004ce050 ; 0042ac9d
        ;   XREF to: 004ce050 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_closestHeroToPoint_FUN_004ce050(CLocation * location)
    ADD ESP,0x4                         ; 0042aca2
    MOV ECX,dword ptr [ESP + 0x184]     ; 0042aca5
    PUSH ECX                            ; 0042acac
    LEA ESI,[ESP + 0xc8]                ; 0042acad
    LEA EDI,[ESP + 0x110]               ; 0042acb4
    PUSH EAX                            ; 0042acbb
    MOV EBX,EAX                         ; 0042acbc
    MOV dword ptr [ESP + 0x16c],EAX     ; 0042acbe
    CALL core_actor.cpp_FUN_00408de0    ; 0042acc5
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xcc]                ; 0042acca
    ADD ESP,0x8                         ; 0042acd1
    LEA EAX,[ESP + 0x10c]               ; 0042acd4
    MOVSD ES:EDI,ESI                    ; 0042acdb
    MOVSD ES:EDI,ESI                    ; 0042acdc
    MOVSD ES:EDI,ESI                    ; 0042acdd
    PUSH EAX                            ; 0042acde
    LEA ESI,[ESP + 0x140]               ; 0042acdf
    LEA EDI,[ESP + 0x5c]                ; 0042ace6
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0042acea
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x140]               ; 0042acef
    ADD ESP,0x4                         ; 0042acf6
    MOVSD ES:EDI,ESI                    ; 0042acf9
    MOVSD ES:EDI,ESI                    ; 0042acfa
    MOVSD ES:EDI,ESI                    ; 0042acfb
    FLD float ptr [ESP + 0x5c]          ; 0042acfc
    FABS                                ; 0042ad00
    MOV ESI,dword ptr [ESP + 0x184]     ; 0042ad02
    LEA EDI,[ESP + 0xac]                ; 0042ad09
    FLD float ptr [ESI]                 ; 0042ad10
    FLD float ptr [ESI + 0x4]           ; 0042ad12
    FLD float ptr [ESI + 0x8]           ; 0042ad15
    LEA ESI,[ESP + 0x88]                ; 0042ad18
    LEA EAX,[EBX + 0x20]                ; 0042ad1f
    FXCH ST3                            ; 0042ad22
    FSTP float ptr [ESP + 0x160]        ; 0042ad24
    FXCH                                ; 0042ad2b
    FSUB float ptr [EAX]                ; 0042ad2d
    FXCH                                ; 0042ad2f
    FSUB float ptr [EAX + 0x4]          ; 0042ad31
    FXCH ST2                            ; 0042ad34
    FSUB float ptr [EAX + 0x8]          ; 0042ad36
    FXCH                                ; 0042ad39
    FSTP float ptr [ESP + 0x88]         ; 0042ad3b
    FXCH                                ; 0042ad42
    FSTP float ptr [ESP + 0x8c]         ; 0042ad44
    FSTP float ptr [ESP + 0x90]         ; 0042ad4b
    LEA EAX,[ESP + 0xac]                ; 0042ad52
    MOVSD ES:EDI,ESI                    ; 0042ad59
    MOVSD ES:EDI,ESI                    ; 0042ad5a
    MOVSD ES:EDI,ESI                    ; 0042ad5b
    PUSH EAX                            ; 0042ad5c
    LEA ESI,[ESP + 0x158]               ; 0042ad5d
    LEA EDI,[ESP + 0xbc]                ; 0042ad64
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 0042ad6b
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x158]               ; 0042ad70
    ADD ESP,0x4                         ; 0042ad77
    MOVSD ES:EDI,ESI                    ; 0042ad7a
    MOVSD ES:EDI,ESI                    ; 0042ad7b
    MOVSD ES:EDI,ESI                    ; 0042ad7c
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0042ad7d
    PUSH EBX                            ; 0042ad84
    MOV dword ptr [ESP + 0x170],EAX     ; 0042ad85
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0042ad8c
    CALL dword ptr [EAX + 0x154]        ; 0042ad92
    ADD ESP,0x4                         ; 0042ad98
    TEST EAX,EAX                        ; 0042ad9b
    JZ 0x0042af8e                       ; 0042ad9d
        ;   XREF to: 0042af8e (CONDITIONAL_JUMP)  ; LAB_0042af8e
    FLD float ptr [ESP + 0x160]         ; 0042ada3
    FCOMP float ptr [0x005cd2e6]        ; 0042adaa | DAT_005cd2e6
    FNSTSW AX                           ; 0042adb0
    SAHF                                ; 0042adb2
    JNC 0x0042af8e                      ; 0042adb3
        ;   XREF to: 0042af8e (CONDITIONAL_JUMP)  ; LAB_0042af8e
    FLD float ptr [ESP + 0x10c]         ; 0042adb9
    FLDZ                                ; 0042adc0
    FCOMPP                              ; 0042adc2
    FNSTSW AX                           ; 0042adc4
    SAHF                                ; 0042adc6
    JBE 0x0042af6f                      ; 0042adc7
        ;   XREF to: 0042af6f (CONDITIONAL_JUMP)  ; LAB_0042af6f
    MOV EAX,0x1                         ; 0042adcd
    MOV dword ptr [ESP + 0x168],EAX     ; 0042add2
        ;   Label: LAB_0042add2
    XOR EBX,EBX                         ; 0042add9
    MOV EAX,dword ptr [ESP + 0x164]     ; 0042addb
    MOV dword ptr [ESP + 0x178],EBX     ; 0042ade2
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042ade9
    ADD EAX,0x20                        ; 0042adec
    ADD EBX,0x3040                      ; 0042adef
    MOV dword ptr [ESP + 0x17c],EAX     ; 0042adf5
    MOV EDI,dword ptr [ESP + 0x168]     ; 0042adfc
        ;   Label: LAB_0042adfc
    MOV EAX,dword ptr [ESP + 0x178]     ; 0042ae03
    TEST EDI,EDI                        ; 0042ae0a
    JNZ 0x0042b122                      ; 0042ae0c
        ;   XREF to: 0042b122 (CONDITIONAL_JUMP)  ; LAB_0042b122
    FLD float ptr [ESP + 0x16c]         ; 0042ae12
        ;   Label: LAB_0042ae12
    FADD float ptr [EAX*0x4 + 0x609aa0] ; 0042ae19 | DAT_00609aa0
    XOR EAX,EAX                         ; 0042ae20
    FSTP float ptr [ESP + 0x184]        ; 0042ae22
    MOV dword ptr [ESP + 0x148],EAX     ; 0042ae29
    MOV dword ptr [ESP + 0x150],EAX     ; 0042ae30
    MOV EAX,dword ptr [ESP + 0x184]     ; 0042ae37
    MOV dword ptr [ESP + 0x14c],EAX     ; 0042ae3e
    LEA EAX,[ESP + 0xf4]                ; 0042ae45
    LEA EDI,[ESP + 0xf4]                ; 0042ae4c
    PUSH EAX                            ; 0042ae53
    LEA EAX,[ESP + 0x34]                ; 0042ae54
    LEA ESI,[ESP + 0x14c]               ; 0042ae58
    PUSH EAX                            ; 0042ae5f
    MOVSD ES:EDI,ESI                    ; 0042ae60
    MOVSD ES:EDI,ESI                    ; 0042ae61
    MOVSD ES:EDI,ESI                    ; 0042ae62
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0042ae63
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ECX,0x40d00000                  ; 0042ae68
    ADD ESP,0x8                         ; 0042ae6d
    MOV dword ptr [ESP + 0x4],ECX       ; 0042ae70
    FLD float ptr [ESP + 0x4]           ; 0042ae74
        ;   Label: LAB_0042ae74
    FCOMP double ptr [0x005cd31e]       ; 0042ae78 | DAT_005cd31e
    FNSTSW AX                           ; 0042ae7e
    SAHF                                ; 0042ae80
    JBE 0x0042af76                      ; 0042ae81
        ;   XREF to: 0042af76 (CONDITIONAL_JUMP)  ; LAB_0042af76
    XOR EAX,EAX                         ; 0042ae87
    MOV dword ptr [ESP + 0xa0],EAX      ; 0042ae89
    MOV dword ptr [ESP + 0xa4],EAX      ; 0042ae90
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ae97
    MOV dword ptr [ESP + 0xa8],EAX      ; 0042ae9b
    LEA EAX,[ESP + 0xa0]                ; 0042aea2
    PUSH EAX                            ; 0042aea9
    LEA EAX,[ESP + 0x34]                ; 0042aeaa
    PUSH EAX                            ; 0042aeae
    LEA ESI,[ESP + 0x138]               ; 0042aeaf
    LEA EDI,[ESP + 0x108]               ; 0042aeb6
    CALL core_dirmat.cpp_FUN_00449530   ; 0042aebd
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 0042aec2
    LEA ESI,[ESP + 0x130]               ; 0042aec5
    MOV EAX,dword ptr [ESP + 0x17c]     ; 0042aecc
    MOVSD ES:EDI,ESI                    ; 0042aed3
    MOVSD ES:EDI,ESI                    ; 0042aed4
    MOVSD ES:EDI,ESI                    ; 0042aed5
    FLD float ptr [EAX + 0x4]           ; 0042aed6
    FLD float ptr [EAX + 0x8]           ; 0042aed9
    FLD float ptr [EAX]                 ; 0042aedc
    LEA EDI,[ESP + 0x64]                ; 0042aede
    LEA ESI,[ESP + 0x70]                ; 0042aee2
    LEA EAX,[ESP + 0x64]                ; 0042aee6
    FADD float ptr [ESP + 0x100]        ; 0042aeea
    FXCH ST2                            ; 0042aef1
    FADD float ptr [ESP + 0x104]        ; 0042aef3
    FXCH                                ; 0042aefa
    FADD float ptr [ESP + 0x108]        ; 0042aefc
    FXCH ST2                            ; 0042af03
    FSTP float ptr [ESP + 0x70]         ; 0042af05
    FSTP float ptr [ESP + 0x74]         ; 0042af09
    FSTP float ptr [ESP + 0x78]         ; 0042af0d
    MOVSD ES:EDI,ESI                    ; 0042af11
    MOVSD ES:EDI,ESI                    ; 0042af12
    MOVSD ES:EDI,ESI                    ; 0042af13
    CMP EBX,EAX                         ; 0042af14
    JZ 0x0042af2c                       ; 0042af16
        ;   XREF to: 0042af2c (CONDITIONAL_JUMP)  ; LAB_0042af2c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042af18
    MOV dword ptr [EBX],EAX             ; 0042af1c
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042af1e
    MOV dword ptr [EBX + 0x4],EAX       ; 0042af22
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042af25
    MOV dword ptr [EBX + 0x8],EAX       ; 0042af29
    PUSH 0x0                            ; 0042af2c
        ;   Label: LAB_0042af2c
    PUSH 0x0                            ; 0042af2e
    PUSH 0x265370c                      ; 0042af30 | DAT_0265370c
    PUSH 0x0                            ; 0042af35
    PUSH EBX                            ; 0042af37
    MOV ECX,dword ptr [EBP + 0x14]      ; 0042af38
    PUSH ECX                            ; 0042af3b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0042af3c
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042af41
    TEST EAX,EAX                        ; 0042af44
    JL 0x0042b129                       ; 0042af46
        ;   XREF to: 0042b129 (CONDITIONAL_JUMP)  ; LAB_0042b129
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042af4c
    MOV dword ptr [EAX + 0x304c],0x0    ; 0042af4f
    MOV dword ptr [EAX + 0x303c],0xc0800000 ; 0042af59
    MOV EAX,0x2                         ; 0042af63
    MOV ESP,EBP                         ; 0042af68
    POP EBP                             ; 0042af6a
    POP EDI                             ; 0042af6b
    POP ESI                             ; 0042af6c
    POP EBX                             ; 0042af6d
    RET                                 ; 0042af6e
    XOR EAX,EAX                         ; 0042af6f
        ;   Label: LAB_0042af6f
    JMP 0x0042add2                      ; 0042af71
        ;   XREF to: 0042add2 (UNCONDITIONAL_JUMP)  ; LAB_0042add2
    MOV ESI,dword ptr [ESP + 0x178]     ; 0042af76
        ;   Label: LAB_0042af76
    INC ESI                             ; 0042af7d
    MOV dword ptr [ESP + 0x178],ESI     ; 0042af7e
    CMP ESI,0x6                         ; 0042af85
    JL 0x0042adfc                       ; 0042af88
        ;   XREF to: 0042adfc (CONDITIONAL_JUMP)  ; LAB_0042adfc
    FLD float ptr [ESP + 0x110]         ; 0042af8e
        ;   Label: LAB_0042af8e
    FABS                                ; 0042af95
    FCOMP double ptr [0x005cd2f6]       ; 0042af97 | DAT_005cd2f6
    FNSTSW AX                           ; 0042af9d
    SAHF                                ; 0042af9f
    JA 0x0042ac34                       ; 0042afa0
        ;   XREF to: 0042ac34 (CONDITIONAL_JUMP)  ; LAB_0042ac34
    FLD float ptr [ESP + 0x160]         ; 0042afa6
    FCOMP float ptr [0x005cd2fe]        ; 0042afad | DAT_005cd2fe
    FNSTSW AX                           ; 0042afb3
    SAHF                                ; 0042afb5
    JA 0x0042ac34                       ; 0042afb6
        ;   XREF to: 0042ac34 (CONDITIONAL_JUMP)  ; LAB_0042ac34
    FLD float ptr [ESP + 0x110]         ; 0042afbc
    FMUL ST0                            ; 0042afc3
    FLD float ptr [ESP + 0x10c]         ; 0042afc5
    FMUL ST0                            ; 0042afcc
    FADDP                               ; 0042afce
    FLD float ptr [ESP + 0x114]         ; 0042afd0
    FMUL ST0                            ; 0042afd7
    FADDP                               ; 0042afd9
    FSQRT                               ; 0042afdb
    FCOMP double ptr [0x005cd306]       ; 0042afdd | DAT_005cd306
    FNSTSW AX                           ; 0042afe3
    SAHF                                ; 0042afe5
    JA 0x0042ac34                       ; 0042afe6
        ;   XREF to: 0042ac34 (CONDITIONAL_JUMP)  ; LAB_0042ac34
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042afec
    FLD float ptr [EAX + 0x303c]        ; 0042afef
    FADD float ptr [EBP + 0x18]         ; 0042aff5
    FST float ptr [EAX + 0x303c]        ; 0042aff8
    FCOMP double ptr [0x005cd30e]       ; 0042affe | DAT_005cd30e
    FNSTSW AX                           ; 0042b004
    SAHF                                ; 0042b006
    JC 0x0042ac41                       ; 0042b007
        ;   XREF to: 0042ac41 (CONDITIONAL_JUMP)  ; LAB_0042ac41
    XOR EBX,EBX                         ; 0042b00d
    MOV EAX,dword ptr [ESP + 0x164]     ; 0042b00f
    MOV dword ptr [ESP + 0x174],EBX     ; 0042b016
    ADD EAX,0x20                        ; 0042b01d
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b020
    MOV dword ptr [ESP + 0x180],EAX     ; 0042b023
    ADD EBX,0x3040                      ; 0042b02a
    MOV EAX,dword ptr [ESP + 0x174]     ; 0042b030
        ;   Label: LAB_0042b030
    MOV EDX,EAX                         ; 0042b037
    SAR EDX,0x1f                        ; 0042b039
    SUB EAX,EDX                         ; 0042b03c
    SAR EAX,0x1                         ; 0042b03e
    MOV dword ptr [ESP + 0x184],EAX     ; 0042b040
    FILD dword ptr [ESP + 0x184]        ; 0042b047
    FMUL float ptr [0x005cd316]         ; 0042b04e | DAT_005cd316
    FMUL float ptr [0x005cd31a]         ; 0042b054 | DAT_005cd31a
    MOV AH,byte ptr [ESP + 0x174]       ; 0042b05a
    FSTP float ptr [ESP + 0x170]        ; 0042b061
    TEST AH,0x1                         ; 0042b068
    JNZ 0x0042b13c                      ; 0042b06b
        ;   XREF to: 0042b13c (CONDITIONAL_JUMP)  ; LAB_0042b13c
    FLD float ptr [ESP + 0x16c]         ; 0042b071
        ;   Label: LAB_0042b071
    LEA EDI,[ESP + 0xdc]                ; 0042b078
    FADD float ptr [ESP + 0x170]        ; 0042b07f
    XOR ESI,ESI                         ; 0042b086
    FSTP float ptr [ESP + 0x184]        ; 0042b088
    MOV EAX,dword ptr [ESP + 0x184]     ; 0042b08f
    MOV dword ptr [ESP + 0x7c],ESI      ; 0042b096
    MOV dword ptr [ESP + 0x80],EAX      ; 0042b09a
    LEA EAX,[ESP + 0xdc]                ; 0042b0a1
    MOV dword ptr [ESP + 0x84],ESI      ; 0042b0a8
    PUSH EAX                            ; 0042b0af
    LEA EAX,[ESP + 0xc]                 ; 0042b0b0
    LEA ESI,[ESP + 0x80]                ; 0042b0b4
    PUSH EAX                            ; 0042b0bb
    MOVSD ES:EDI,ESI                    ; 0042b0bc
    MOVSD ES:EDI,ESI                    ; 0042b0bd
    MOVSD ES:EDI,ESI                    ; 0042b0be
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 0042b0bf
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EAX,0x40900000                  ; 0042b0c4
    ADD ESP,0x8                         ; 0042b0c9
    MOV dword ptr [ESP],EAX             ; 0042b0cc
    FLD float ptr [ESP]                 ; 0042b0cf
        ;   Label: LAB_0042b0cf
    FCOMP double ptr [0x005cd31e]       ; 0042b0d2 | DAT_005cd31e
    FNSTSW AX                           ; 0042b0d8
    SAHF                                ; 0042b0da
    JA 0x0042b15a                       ; 0042b0db
        ;   XREF to: 0042b15a (CONDITIONAL_JUMP)  ; LAB_0042b15a
    MOV EDX,dword ptr [ESP + 0x174]     ; 0042b0dd
    INC EDX                             ; 0042b0e4
    MOV dword ptr [ESP + 0x174],EDX     ; 0042b0e5
    CMP EDX,0x8                         ; 0042b0ec
    JLE 0x0042b030                      ; 0042b0ef
        ;   XREF to: 0042b030 (CONDITIONAL_JUMP)  ; LAB_0042b030
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b0f5
    PUSH EBX                            ; 0042b0f8
    PUSH 0x5cd2aa                       ; 0042b0f9 | = "%s was in the way, but couldn't figur..."
    MOV ESI,dword ptr [0x00609ed0]      ; 0042b0fe | g_CConsolePtr
    PUSH ESI                            ; 0042b104 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0042b105
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0042b10a
    MOV EAX,EBX                         ; 0042b10d
    MOV dword ptr [EBX + 0x303c],0x0    ; 0042b10f
    XOR EAX,EBX                         ; 0042b119
    MOV ESP,EBP                         ; 0042b11b
    POP EBP                             ; 0042b11d
    POP EDI                             ; 0042b11e
    POP ESI                             ; 0042b11f
    POP EBX                             ; 0042b120
    RET                                 ; 0042b121
    XOR AL,0x1                          ; 0042b122
        ;   Label: LAB_0042b122
    JMP 0x0042ae12                      ; 0042b124
        ;   XREF to: 0042ae12 (UNCONDITIONAL_JUMP)  ; LAB_0042ae12
    FLD float ptr [ESP + 0x4]           ; 0042b129
        ;   Label: LAB_0042b129
    FADD float ptr [0x005cd326]         ; 0042b12d | DAT_005cd326
    FSTP float ptr [ESP + 0x4]          ; 0042b133
    JMP 0x0042ae74                      ; 0042b137
        ;   XREF to: 0042ae74 (UNCONDITIONAL_JUMP)  ; LAB_0042ae74
    XOR byte ptr [ESP + 0x173],0x80     ; 0042b13c
        ;   Label: LAB_0042b13c
    JMP 0x0042b071                      ; 0042b144
        ;   XREF to: 0042b071 (UNCONDITIONAL_JUMP)  ; LAB_0042b071
    FLD float ptr [ESP]                 ; 0042b149
        ;   Label: LAB_0042b149
    FADD float ptr [0x005cd326]         ; 0042b14c | DAT_005cd326
    FSTP float ptr [ESP]                ; 0042b152
    JMP 0x0042b0cf                      ; 0042b155
        ;   XREF to: 0042b0cf (UNCONDITIONAL_JUMP)  ; LAB_0042b0cf
    MOV EAX,dword ptr [ESP]             ; 0042b15a
        ;   Label: LAB_0042b15a
    LEA ESI,[ESP + 0x94]                ; 0042b15d
    MOV dword ptr [ESP + 0x12c],EAX     ; 0042b164
    LEA EAX,[ESP + 0x124]               ; 0042b16b
    XOR EDI,EDI                         ; 0042b172
    PUSH EAX                            ; 0042b174
    LEA EAX,[ESP + 0xc]                 ; 0042b175
    MOV dword ptr [ESP + 0x128],EDI     ; 0042b179
    PUSH EAX                            ; 0042b180
    MOV dword ptr [ESP + 0x130],EDI     ; 0042b181
    LEA EDI,[ESP + 0x120]               ; 0042b188
    CALL core_dirmat.cpp_FUN_00449530   ; 0042b18f
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_00449530()
    ADD ESP,0x8                         ; 0042b194
    LEA ESI,[ESP + 0x94]                ; 0042b197
    MOV EAX,dword ptr [ESP + 0x180]     ; 0042b19e
    MOVSD ES:EDI,ESI                    ; 0042b1a5
    MOVSD ES:EDI,ESI                    ; 0042b1a6
    MOVSD ES:EDI,ESI                    ; 0042b1a7
    FLD float ptr [EAX + 0x4]           ; 0042b1a8
    FLD float ptr [EAX + 0x8]           ; 0042b1ab
    FLD float ptr [EAX]                 ; 0042b1ae
    LEA EDI,[ESP + 0xd0]                ; 0042b1b0
    LEA ESI,[ESP + 0xe8]                ; 0042b1b7
    LEA EAX,[ESP + 0xd0]                ; 0042b1be
    FADD float ptr [ESP + 0x118]        ; 0042b1c5
    FXCH ST2                            ; 0042b1cc
    FADD float ptr [ESP + 0x11c]        ; 0042b1ce
    FXCH                                ; 0042b1d5
    FADD float ptr [ESP + 0x120]        ; 0042b1d7
    FXCH ST2                            ; 0042b1de
    FSTP float ptr [ESP + 0xe8]         ; 0042b1e0
    FSTP float ptr [ESP + 0xec]         ; 0042b1e7
    FSTP float ptr [ESP + 0xf0]         ; 0042b1ee
    MOVSD ES:EDI,ESI                    ; 0042b1f5
    MOVSD ES:EDI,ESI                    ; 0042b1f6
    MOVSD ES:EDI,ESI                    ; 0042b1f7
    CMP EBX,EAX                         ; 0042b1f8
    JZ 0x0042b219                       ; 0042b1fa
        ;   XREF to: 0042b219 (CONDITIONAL_JUMP)  ; LAB_0042b219
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0042b1fc
    MOV dword ptr [EBX],EAX             ; 0042b203
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0042b205
    MOV dword ptr [EBX + 0x4],EAX       ; 0042b20c
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0042b20f
    MOV dword ptr [EBX + 0x8],EAX       ; 0042b216
    PUSH 0x0                            ; 0042b219
        ;   Label: LAB_0042b219
    PUSH 0x0                            ; 0042b21b
    PUSH 0x265370c                      ; 0042b21d | DAT_0265370c
    PUSH 0x0                            ; 0042b222
    PUSH EBX                            ; 0042b224
    MOV EDX,dword ptr [EBP + 0x14]      ; 0042b225
    PUSH EDX                            ; 0042b228
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0042b229
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042b22e
    TEST EAX,EAX                        ; 0042b231
    JL 0x0042b149                       ; 0042b233
        ;   XREF to: 0042b149 (CONDITIONAL_JUMP)  ; LAB_0042b149
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042b239
    MOV dword ptr [EAX + 0x304c],0x0    ; 0042b23c
    MOV dword ptr [EAX + 0x303c],0xc0a00000 ; 0042b246
    MOV EAX,0x1                         ; 0042b250
    MOV ESP,EBP                         ; 0042b255
    POP EBP                             ; 0042b257
    POP EDI                             ; 0042b258
    POP ESI                             ; 0042b259
    POP EBX                             ; 0042b25a
    RET                                 ; 0042b25b

