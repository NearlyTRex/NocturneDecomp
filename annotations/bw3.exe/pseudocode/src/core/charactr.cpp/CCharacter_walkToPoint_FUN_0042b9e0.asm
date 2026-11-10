; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target_pos
; CPathMap *       Stack[0xc]:4   path_map
; CVector3f *      Stack[0x10]:4   direction
; float            Stack[0x14]:4   min_distance
; float            Stack[0x18]:4   max_distance
; Local Variables:
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined        Stack[-0x124]:1  local_124
; undefined4       Stack[-0x118]:4  local_118
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined        Stack[-0x10c]:1  local_10c
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined        Stack[-0xf4]:1  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined        Stack[-0xb8]:1  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0xa0]:1  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined        Stack[-0x94]:1  local_94
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined        Stack[-0x70]:1  local_70
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
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
; XREF[35]:
;   core_baal.cpp_CBaal_process_FUN_005968a0 at 0059739a
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a715
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 004185c4
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930 at 00418c24
;   core_carved.cpp_CCarved_process_FUN_00425da0 at 00426e88
;   core_carved.cpp_FUN_00427bc0 at 0042801a
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660 at 004317aa
;   core_charactr.cpp_FUN_004310e0 at 0043140c
;   core_charactr.cpp_FUN_004333e0 at 0043353f
;   core_charactr.cpp_FUN_00434190 at 00434212
;   ... and 25 more
;
; Referenced Globals:
;   TerminatedCString s_CCharacter_walkToPoint_g_005b81c3
;   undefined4 DAT_005b81f6
;   undefined4 DAT_005b81fe
;   undefined4 DAT_005b8206
;   undefined4 DAT_005b820e
;   undefined4 DAT_005b8216
;   undefined4 DAT_005b821e
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_FUN_00408bf0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
;   core_path.cpp_getPathMap_FUN_0050ced0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b9e0
        ;   Label: core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
    PUSH ESI                            ; 0042b9e1
    PUSH EDI                            ; 0042b9e2
    PUSH EBP                            ; 0042b9e3
    MOV EBP,ESP                         ; 0042b9e4
    SUB ESP,0x130                       ; 0042b9e6
    AND ESP,0xfffffff8                  ; 0042b9ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042b9ef
    MOV EAX,dword ptr [EBX + 0x2524]    ; 0042b9f2
    MOV dword ptr [ESP + 0x124],EAX     ; 0042b9f8
    MOV EAX,dword ptr [EBX + 0x2528]    ; 0042b9ff
    MOV dword ptr [ESP + 0x120],EAX     ; 0042ba05
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042ba0c
    FLD float ptr [EAX + 0x8]           ; 0042ba0f
    FMUL ST0                            ; 0042ba12
    FLD float ptr [EAX]                 ; 0042ba14
    FMUL ST0                            ; 0042ba16
    FADDP                               ; 0042ba18
    FSQRT                               ; 0042ba1a
    MOV EDX,dword ptr [EBP + 0x20]      ; 0042ba1c
    LEA ESI,[ESP + 0x70]                ; 0042ba1f
    LEA EDI,[ESP + 0x88]                ; 0042ba23
    PUSH EDX                            ; 0042ba2a
    FSTP float ptr [ESP + 0x10]         ; 0042ba2b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0042ba2f
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 0042ba34
    LEA ESI,[ESP + 0x70]                ; 0042ba37
    MOV ECX,dword ptr [EBP + 0x18]      ; 0042ba3b
    MOVSD ES:EDI,ESI                    ; 0042ba3e
    MOVSD ES:EDI,ESI                    ; 0042ba3f
    MOVSD ES:EDI,ESI                    ; 0042ba40
    PUSH ECX                            ; 0042ba41
    MOV EAX,dword ptr [ESP + 0x90]      ; 0042ba42
    LEA ESI,[ESP + 0xb0]                ; 0042ba49
    PUSH EBX                            ; 0042ba50
    LEA EDI,[ESP + 0x30]                ; 0042ba51
    MOV dword ptr [ESP + 0x8],EAX       ; 0042ba55
    CALL core_actor.cpp_FUN_00408bf0    ; 0042ba59
        ;   XREF to: 00408bf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bf0()
    LEA ESI,[ESP + 0xb4]                ; 0042ba5e
    ADD ESP,0x8                         ; 0042ba65
    MOVSD ES:EDI,ESI                    ; 0042ba68
    MOVSD ES:EDI,ESI                    ; 0042ba69
    MOVSD ES:EDI,ESI                    ; 0042ba6a
    FLD float ptr [ESP + 0x30]          ; 0042ba6b
    FMUL ST0                            ; 0042ba6f
    FLD float ptr [ESP + 0x28]          ; 0042ba71
    FMUL ST0                            ; 0042ba75
    FADDP                               ; 0042ba77
    FSQRT                               ; 0042ba79
    LEA EAX,[ESP + 0x28]                ; 0042ba7b
    LEA ESI,[ESP + 0xd0]                ; 0042ba7f
    PUSH EAX                            ; 0042ba86
    FSTP float ptr [ESP + 0x120]        ; 0042ba87
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0042ba8e
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    ADD ESP,0x4                         ; 0042ba93
    FLD float ptr [ESP + 0x11c]         ; 0042ba96
    FSUB float ptr [ESP + 0xc]          ; 0042ba9d
    FABS                                ; 0042baa1
    LEA EDI,[ESP + 0x10]                ; 0042baa3
    LEA ESI,[ESP + 0xd0]                ; 0042baa7
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042baae
    MOVSD ES:EDI,ESI                    ; 0042bab1
    MOVSD ES:EDI,ESI                    ; 0042bab2
    MOVSD ES:EDI,ESI                    ; 0042bab3
    FLD float ptr [EAX + 0x4]           ; 0042bab4
    FMUL ST0                            ; 0042bab7
    FLD float ptr [EAX]                 ; 0042bab9
    FMUL ST0                            ; 0042babb
    FADDP                               ; 0042babd
    FLD float ptr [EAX + 0x8]           ; 0042babf
    FMUL ST0                            ; 0042bac2
    FADDP                               ; 0042bac4
    FSQRT                               ; 0042bac6
    XOR ESI,ESI                         ; 0042bac8
    MOV dword ptr [ESP + 0xf0],ESI      ; 0042baca
    MOV dword ptr [ESP + 0x8],ESI       ; 0042bad1
    FXCH                                ; 0042bad5
    FSTP float ptr [ESP + 0x4]          ; 0042bad7
    FLDZ                                ; 0042badb
    FCOMPP                              ; 0042badd
    FNSTSW AX                           ; 0042badf
    SAHF                                ; 0042bae1
    JC 0x0042bda6                       ; 0042bae2
        ;   XREF to: 0042bda6 (CONDITIONAL_JUMP)  ; LAB_0042bda6
    FLD float ptr [EBP + 0x24]          ; 0042bae8
        ;   Label: LAB_0042bae8
    FADD double ptr [0x005b81f6]        ; 0042baeb | DAT_005b81f6
    FLD float ptr [ESP + 0x4]           ; 0042baf1
    FCOMPP                              ; 0042baf5
    FNSTSW AX                           ; 0042baf7
    SAHF                                ; 0042baf9
    JNC 0x0042bb2c                      ; 0042bafa
        ;   XREF to: 0042bb2c (CONDITIONAL_JUMP)  ; LAB_0042bb2c
    FLD float ptr [EBP + 0x28]          ; 0042bafc
    FADD double ptr [0x005b81f6]        ; 0042baff | DAT_005b81f6
    FLD float ptr [ESP + 0x8]           ; 0042bb05
    FCOMPP                              ; 0042bb09
    FNSTSW AX                           ; 0042bb0b
    SAHF                                ; 0042bb0d
    JNC 0x0042bb2c                      ; 0042bb0e
        ;   XREF to: 0042bb2c (CONDITIONAL_JUMP)  ; LAB_0042bb2c
    FLD float ptr [ESP + 0x2c]          ; 0042bb10
    FABS                                ; 0042bb14
    FCOMP double ptr [0x005b81fe]       ; 0042bb16 | DAT_005b81fe
    FNSTSW AX                           ; 0042bb1c
    SAHF                                ; 0042bb1e
    JNC 0x0042bb2c                      ; 0042bb1f
        ;   XREF to: 0042bb2c (CONDITIONAL_JUMP)  ; LAB_0042bb2c
    MOV dword ptr [ESP + 0xf0],0x1      ; 0042bb21
    FLD float ptr [ESP]                 ; 0042bb2c
        ;   Label: LAB_0042bb2c
    FABS                                ; 0042bb2f
    FMUL double ptr [0x005b8206]        ; 0042bb31 | DAT_005b8206
    LEA ESI,[EBX + 0x249c]              ; 0042bb37
    FMUL double ptr [0x005b820e]        ; 0042bb3d | DAT_005b820e
    MOV dword ptr [ESI + 0x8],0x0       ; 0042bb43
    FLD float ptr [ESP + 0xc]           ; 0042bb4a
    FMUL double ptr [0x005b8216]        ; 0042bb4e | DAT_005b8216
    MOV EAX,dword ptr [ESI + 0x8]       ; 0042bb54
    MOV dword ptr [ESI + 0x4],EAX       ; 0042bb57
    FLD float ptr [ESI + 0x4]           ; 0042bb5a
    FXCH                                ; 0042bb5d
    FADD double ptr [0x005b821e]        ; 0042bb5f | DAT_005b821e
    FXCH                                ; 0042bb65
    FSTP float ptr [ESI]                ; 0042bb67
    FADDP                               ; 0042bb69
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0042bb6b
    FSTP float ptr [ESP + 0xdc]         ; 0042bb71
    TEST EDX,EDX                        ; 0042bb78
    JZ 0x0042bdd8                       ; 0042bb7a
        ;   XREF to: 0042bdd8 (CONDITIONAL_JUMP)  ; LAB_0042bdd8
    FLD float ptr [ESP + 0x11c]         ; 0042bb80
        ;   Label: LAB_0042bb80
    FLD float ptr [ESP + 0x124]         ; 0042bb87
    LEA ESI,[EBX + 0x2514]              ; 0042bb8e
    FCHS                                ; 0042bb94
    FXCH                                ; 0042bb96
    FSUB float ptr [ESP + 0xc]          ; 0042bb98
    FXCH                                ; 0042bb9c
    FSTP float ptr [ESP + 0xe4]         ; 0042bb9e
    FST float ptr [ESP + 0x110]         ; 0042bba5
    FCOMP float ptr [ESP + 0xe4]        ; 0042bbac
    FNSTSW AX                           ; 0042bbb3
    SAHF                                ; 0042bbb5
    JNC 0x0042bf86                      ; 0042bbb6
        ;   XREF to: 0042bf86 (CONDITIONAL_JUMP)  ; LAB_0042bf86
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0042bbbc
    MOV dword ptr [ESP + 0x104],EAX     ; 0042bbc3
        ;   Label: LAB_0042bbc3
    FLD float ptr [ESI]                 ; 0042bbca
    LEA EAX,[EBX + 0x250c]              ; 0042bbcc
    FADD float ptr [ESP + 0x104]        ; 0042bbd2
    PUSH EAX                            ; 0042bbd9
    FSTP float ptr [ESI]                ; 0042bbda
    PUSH EBX                            ; 0042bbdc
    LEA ESI,[ESP + 0x3c]                ; 0042bbdd
    LEA EDI,[ESP + 0x48]                ; 0042bbe1
    CALL core_actor.cpp_FUN_00408b80    ; 0042bbe5
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x3c]                ; 0042bbea
    ADD ESP,0x8                         ; 0042bbee
    MOVSD ES:EDI,ESI                    ; 0042bbf1
    MOVSD ES:EDI,ESI                    ; 0042bbf2
    MOVSD ES:EDI,ESI                    ; 0042bbf3
    MOV ESI,dword ptr [EBP + 0x20]      ; 0042bbf4
    PUSH ESI                            ; 0042bbf7
    PUSH EBX                            ; 0042bbf8
    LEA ESI,[ESP + 0x9c]                ; 0042bbf9
    LEA EDI,[ESP + 0x60]                ; 0042bc00
    CALL core_actor.cpp_FUN_00408b00    ; 0042bc04
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    ADD ESP,0x8                         ; 0042bc09
    LEA ESI,[ESP + 0x94]                ; 0042bc0c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0042bc13
    MOVSD ES:EDI,ESI                    ; 0042bc16
    MOVSD ES:EDI,ESI                    ; 0042bc17
    MOVSD ES:EDI,ESI                    ; 0042bc18
    FLD float ptr [EAX]                 ; 0042bc19
    FLD float ptr [EAX + 0x4]           ; 0042bc1b
    FLD float ptr [EAX + 0x8]           ; 0042bc1e
    LEA EDI,[ESP + 0xb8]                ; 0042bc21
    LEA ESI,[ESP + 0xc4]                ; 0042bc28
    FXCH ST2                            ; 0042bc2f
    FSUB float ptr [ESP + 0x58]         ; 0042bc31
    FXCH                                ; 0042bc35
    FSUB float ptr [ESP + 0x5c]         ; 0042bc37
    FXCH ST2                            ; 0042bc3b
    FSUB float ptr [ESP + 0x60]         ; 0042bc3d
    FXCH                                ; 0042bc41
    FSTP float ptr [ESP + 0xc4]         ; 0042bc43
    FXCH                                ; 0042bc4a
    FSTP float ptr [ESP + 0xc8]         ; 0042bc4c
    FSTP float ptr [ESP + 0xcc]         ; 0042bc53
    MOVSD ES:EDI,ESI                    ; 0042bc5a
    MOVSD ES:EDI,ESI                    ; 0042bc5b
    MOVSD ES:EDI,ESI                    ; 0042bc5c
    LEA EAX,[ESP + 0x64]                ; 0042bc5d
    FLD float ptr [ESP + 0xb8]          ; 0042bc61
    FLD float ptr [ESP + 0xbc]          ; 0042bc68
    FLD float ptr [ESP + 0xc0]          ; 0042bc6f
    LEA EDI,[ESP + 0x64]                ; 0042bc76
    LEA ESI,[ESP + 0x7c]                ; 0042bc7a
    FXCH ST2                            ; 0042bc7e
    FSUB float ptr [ESP + 0x40]         ; 0042bc80
    FXCH                                ; 0042bc84
    FSUB float ptr [ESP + 0x44]         ; 0042bc86
    FXCH ST2                            ; 0042bc8a
    FSUB float ptr [ESP + 0x48]         ; 0042bc8c
    FXCH                                ; 0042bc90
    FSTP float ptr [ESP + 0x7c]         ; 0042bc92
    FXCH                                ; 0042bc96
    FSTP float ptr [ESP + 0x80]         ; 0042bc98
    FSTP float ptr [ESP + 0x84]         ; 0042bc9f
    MOVSD ES:EDI,ESI                    ; 0042bca6
    MOVSD ES:EDI,ESI                    ; 0042bca7
    MOVSD ES:EDI,ESI                    ; 0042bca8
    PUSH EAX                            ; 0042bca9
    LEA ESI,[ESP + 0x20]                ; 0042bcaa
    LEA EDI,[ESP + 0xa4]                ; 0042bcae
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0042bcb5
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[ESP + 0x20]                ; 0042bcba
    ADD ESP,0x4                         ; 0042bcbe
    MOVSD ES:EDI,ESI                    ; 0042bcc1
    MOVSD ES:EDI,ESI                    ; 0042bcc2
    MOVSD ES:EDI,ESI                    ; 0042bcc3
    FLD float ptr [ESP + 0xa4]          ; 0042bcc4
    FSUB float ptr [EBX + 0x34]         ; 0042bccb
    SUB ESP,0x4                         ; 0042bcce
    FSTP float ptr [ESP]                ; 0042bcd1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0042bcd4
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x130],EAX     ; 0042bcd9
    FLD float ptr [ESP + 0x130]         ; 0042bce0
    ADD ESP,0x4                         ; 0042bce7
    FLD float ptr [ESP + 0x120]         ; 0042bcea
    FXCH                                ; 0042bcf1
    FST float ptr [ESP + 0x114]         ; 0042bcf3
    FXCH                                ; 0042bcfa
    FCHS                                ; 0042bcfc
    FSTP float ptr [ESP + 0xe8]         ; 0042bcfe
    FCOMP float ptr [ESP + 0xe8]        ; 0042bd05
    FNSTSW AX                           ; 0042bd0c
    SAHF                                ; 0042bd0e
    JNC 0x0042bfb1                      ; 0042bd0f
        ;   XREF to: 0042bfb1 (CONDITIONAL_JUMP)  ; LAB_0042bfb1
    MOV EAX,dword ptr [ESP + 0xe8]      ; 0042bd15
    MOV dword ptr [ESP + 0x10c],EAX     ; 0042bd1c
        ;   Label: LAB_0042bd1c
    MOV EAX,dword ptr [ESP + 0x10c]     ; 0042bd23
    MOV EDI,dword ptr [EBX + 0x27a8]    ; 0042bd2a
    MOV dword ptr [EBX + 0x2508],EAX    ; 0042bd30
    TEST EDI,EDI                        ; 0042bd36
    JZ 0x0042bd8a                       ; 0042bd38
        ;   XREF to: 0042bd8a (CONDITIONAL_JUMP)  ; LAB_0042bd8a
    FLD float ptr [ESP + 0x2c]          ; 0042bd3a
    FLD float ptr [ESP + 0x124]         ; 0042bd3e
    MOV EAX,dword ptr [EBP + 0x20]      ; 0042bd45
    FCHS                                ; 0042bd48
    FXCH                                ; 0042bd4a
    FSUB float ptr [EAX + 0x4]          ; 0042bd4c
    FXCH                                ; 0042bd4f
    FSTP float ptr [ESP + 0x100]        ; 0042bd51
    FST float ptr [ESP + 0xf4]          ; 0042bd58
    FCOMP float ptr [ESP + 0x100]       ; 0042bd5f
    FNSTSW AX                           ; 0042bd66
    SAHF                                ; 0042bd68
    JNC 0x0042bfdc                      ; 0042bd69
        ;   XREF to: 0042bfdc (CONDITIONAL_JUMP)  ; LAB_0042bfdc
    MOV EAX,dword ptr [ESP + 0x100]     ; 0042bd6f
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042bd76
        ;   Label: LAB_0042bd76
    MOV EAX,dword ptr [ESP + 0xf8]      ; 0042bd7d
    MOV dword ptr [EBX + 0x2510],EAX    ; 0042bd84
    CMP dword ptr [ESP + 0xf0],0x0      ; 0042bd8a
        ;   Label: LAB_0042bd8a
    JZ 0x0042c007                       ; 0042bd92
        ;   XREF to: 0042c007 (CONDITIONAL_JUMP)  ; LAB_0042c007
    MOV ESI,0x1                         ; 0042bd98
    MOV EAX,ESI                         ; 0042bd9d
    MOV ESP,EBP                         ; 0042bd9f
    POP EBP                             ; 0042bda1
    POP EDI                             ; 0042bda2
    POP ESI                             ; 0042bda3
    POP EBX                             ; 0042bda4
    RET                                 ; 0042bda5
    FLD float ptr [ESP + 0x14]          ; 0042bda6
        ;   Label: LAB_0042bda6
    FSUB float ptr [ESP + 0x8c]         ; 0042bdaa
    SUB ESP,0x4                         ; 0042bdb1
    FSTP float ptr [ESP]                ; 0042bdb4
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0042bdb7
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x130],EAX     ; 0042bdbc
    FLD float ptr [ESP + 0x130]         ; 0042bdc3
    FABS                                ; 0042bdca
    ADD ESP,0x4                         ; 0042bdcc
    FSTP float ptr [ESP + 0x8]          ; 0042bdcf
    JMP 0x0042bae8                      ; 0042bdd3
        ;   XREF to: 0042bae8 (UNCONDITIONAL_JUMP)  ; LAB_0042bae8
    FLD float ptr [ESP + 0x11c]         ; 0042bdd8
        ;   Label: LAB_0042bdd8
    FCOMP float ptr [ESP + 0xdc]        ; 0042bddf
    FNSTSW AX                           ; 0042bde6
    SAHF                                ; 0042bde8
    JC 0x0042be35                       ; 0042bde9
        ;   XREF to: 0042be35 (CONDITIONAL_JUMP)  ; LAB_0042be35
    CMP dword ptr [EBP + 0x1c],0x0      ; 0042bdeb
        ;   Label: LAB_0042bdeb
    JNZ 0x0042be00                      ; 0042bdef
        ;   XREF to: 0042be00 (CONDITIONAL_JUMP)  ; LAB_0042be00
    MOV ESI,dword ptr [EBP + 0x18]      ; 0042bdf1
    PUSH ESI                            ; 0042bdf4
    CALL core_path.cpp_getPathMap_FUN_0050ced0 ; 0042bdf5
        ;   XREF to: 0050ced0 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_getPathMap_FUN_0050ced0(CLocation * location)
    ADD ESP,0x4                         ; 0042bdfa
    MOV dword ptr [EBP + 0x1c],EAX      ; 0042bdfd
    MOV EDI,dword ptr [EBX + 0x6c]      ; 0042be00
        ;   Label: LAB_0042be00
    PUSH EDI                            ; 0042be03
    LEA EAX,[ESP + 0x50]                ; 0042be04
    PUSH EAX                            ; 0042be08
    LEA EAX,[EBX + 0x20]                ; 0042be09
    PUSH EAX                            ; 0042be0c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0042be0d
    PUSH EAX                            ; 0042be10
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 ; 0042be11
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0042be16
    TEST EAX,EAX                        ; 0042be19
    JNZ 0x0042be6b                      ; 0042be1b
        ;   XREF to: 0042be6b (CONDITIONAL_JUMP)  ; LAB_0042be6b
    CMP dword ptr [ESP + 0xf0],0x0      ; 0042be1d
    JZ 0x0042be49                       ; 0042be25
        ;   XREF to: 0042be49 (CONDITIONAL_JUMP)  ; LAB_0042be49
    MOV ESI,0x1                         ; 0042be27
    MOV EAX,ESI                         ; 0042be2c
    MOV ESP,EBP                         ; 0042be2e
    POP EBP                             ; 0042be30
    POP EDI                             ; 0042be31
    POP ESI                             ; 0042be32
    POP EBX                             ; 0042be33
    RET                                 ; 0042be34
    FLD float ptr [ESP + 0x2c]          ; 0042be35
        ;   Label: LAB_0042be35
    FABS                                ; 0042be39
    FLD1                                ; 0042be3b
    FCOMPP                              ; 0042be3d
    FNSTSW AX                           ; 0042be3f
    SAHF                                ; 0042be41
    JC 0x0042bdeb                       ; 0042be42
        ;   XREF to: 0042bdeb (CONDITIONAL_JUMP)  ; LAB_0042bdeb
    JMP 0x0042bb80                      ; 0042be44
        ;   XREF to: 0042bb80 (UNCONDITIONAL_JUMP)  ; LAB_0042bb80
    PUSH 0x5b81c3                       ; 0042be49 | = "CCharacter::walkToPoint - go somewher..."
        ;   Label: LAB_0042be49
    MOV ECX,dword ptr [0x005f1690]      ; 0042be4e | g_CConsolePtr
    PUSH ECX                            ; 0042be54 | g_CConsoleInstance
    MOV ESI,0xffffffff                  ; 0042be55
    CALL engine_console.cpp_FUN_00441ff0 ; 0042be5a
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0x8                         ; 0042be5f
    MOV EAX,ESI                         ; 0042be62
    MOV ESP,EBP                         ; 0042be64
    POP EBP                             ; 0042be66
    POP EDI                             ; 0042be67
    POP ESI                             ; 0042be68
    POP EBX                             ; 0042be69
    RET                                 ; 0042be6a
    FLD float ptr [ESP + 0x11c]         ; 0042be6b
        ;   Label: LAB_0042be6b
    FLD float ptr [ESP + 0x124]         ; 0042be72
    LEA ESI,[EBX + 0x2514]              ; 0042be79
    FCHS                                ; 0042be7f
    FXCH                                ; 0042be81
    FSUB float ptr [ESP + 0xc]          ; 0042be83
    FXCH                                ; 0042be87
    FSTP float ptr [ESP + 0xe0]         ; 0042be89
    FST float ptr [ESP + 0x108]         ; 0042be90
    FCOMP float ptr [ESP + 0xe0]        ; 0042be97
    FNSTSW AX                           ; 0042be9e
    SAHF                                ; 0042bea0
    JNC 0x0042bf36                      ; 0042bea1
        ;   XREF to: 0042bf36 (CONDITIONAL_JUMP)  ; LAB_0042bf36
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0042bea7
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042beae
        ;   Label: LAB_0042beae
    FLD float ptr [ESI]                 ; 0042beb5
    FADD float ptr [ESP + 0xfc]         ; 0042beb7
    FSTP float ptr [ESI]                ; 0042bebe
    FLD float ptr [ESP + 0x50]          ; 0042bec0
    FSUB float ptr [EBX + 0x34]         ; 0042bec4
    FSTP float ptr [ESP + 0x12c]        ; 0042bec7
    PUSH dword ptr [ESP + 0x12c]        ; 0042bece
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0042bed5
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x130],EAX     ; 0042beda
    FLD float ptr [ESP + 0x130]         ; 0042bee1
    ADD ESP,0x4                         ; 0042bee8
    ADD EBX,0x2508                      ; 0042beeb
    FLD float ptr [ESP + 0x120]         ; 0042bef1
    FXCH                                ; 0042bef8
    FST float ptr [ESP + 0x118]         ; 0042befa
    FXCH                                ; 0042bf01
    FCHS                                ; 0042bf03
    FSTP float ptr [ESP + 0x128]        ; 0042bf05
    FCOMP float ptr [ESP + 0x128]       ; 0042bf0c
    FNSTSW AX                           ; 0042bf13
    SAHF                                ; 0042bf15
    JNC 0x0042bf61                      ; 0042bf16
        ;   XREF to: 0042bf61 (CONDITIONAL_JUMP)  ; LAB_0042bf61
    MOV EAX,dword ptr [ESP + 0x128]     ; 0042bf18
    MOV dword ptr [ESP + 0xec],EAX      ; 0042bf1f
        ;   Label: LAB_0042bf1f
    FLD float ptr [EBX]                 ; 0042bf26
    FADD float ptr [ESP + 0xec]         ; 0042bf28
    FSTP float ptr [EBX]                ; 0042bf2f
    JMP 0x0042bd8a                      ; 0042bf31
        ;   XREF to: 0042bd8a (UNCONDITIONAL_JUMP)  ; LAB_0042bd8a
    FLD float ptr [ESP + 0x108]         ; 0042bf36
        ;   Label: LAB_0042bf36
    FCOMP float ptr [ESP + 0x124]       ; 0042bf3d
    FNSTSW AX                           ; 0042bf44
    SAHF                                ; 0042bf46
    JBE 0x0042bf55                      ; 0042bf47
        ;   XREF to: 0042bf55 (CONDITIONAL_JUMP)  ; LAB_0042bf55
    MOV EAX,dword ptr [ESP + 0x124]     ; 0042bf49
    JMP 0x0042beae                      ; 0042bf50
        ;   XREF to: 0042beae (UNCONDITIONAL_JUMP)  ; LAB_0042beae
    MOV EAX,dword ptr [ESP + 0x108]     ; 0042bf55
        ;   Label: LAB_0042bf55
    JMP 0x0042beae                      ; 0042bf5c
        ;   XREF to: 0042beae (UNCONDITIONAL_JUMP)  ; LAB_0042beae
    FLD float ptr [ESP + 0x118]         ; 0042bf61
        ;   Label: LAB_0042bf61
    FCOMP float ptr [ESP + 0x120]       ; 0042bf68
    FNSTSW AX                           ; 0042bf6f
    SAHF                                ; 0042bf71
    JBE 0x0042bf7d                      ; 0042bf72
        ;   XREF to: 0042bf7d (CONDITIONAL_JUMP)  ; LAB_0042bf7d
    MOV EAX,dword ptr [ESP + 0x120]     ; 0042bf74
    JMP 0x0042bf1f                      ; 0042bf7b
        ;   XREF to: 0042bf1f (UNCONDITIONAL_JUMP)  ; LAB_0042bf1f
    MOV EAX,dword ptr [ESP + 0x118]     ; 0042bf7d
        ;   Label: LAB_0042bf7d
    JMP 0x0042bf1f                      ; 0042bf84
        ;   XREF to: 0042bf1f (UNCONDITIONAL_JUMP)  ; LAB_0042bf1f
    FLD float ptr [ESP + 0x110]         ; 0042bf86
        ;   Label: LAB_0042bf86
    FCOMP float ptr [ESP + 0x124]       ; 0042bf8d
    FNSTSW AX                           ; 0042bf94
    SAHF                                ; 0042bf96
    JBE 0x0042bfa5                      ; 0042bf97
        ;   XREF to: 0042bfa5 (CONDITIONAL_JUMP)  ; LAB_0042bfa5
    MOV EAX,dword ptr [ESP + 0x124]     ; 0042bf99
    JMP 0x0042bbc3                      ; 0042bfa0
        ;   XREF to: 0042bbc3 (UNCONDITIONAL_JUMP)  ; LAB_0042bbc3
    MOV EAX,dword ptr [ESP + 0x110]     ; 0042bfa5
        ;   Label: LAB_0042bfa5
    JMP 0x0042bbc3                      ; 0042bfac
        ;   XREF to: 0042bbc3 (UNCONDITIONAL_JUMP)  ; LAB_0042bbc3
    FLD float ptr [ESP + 0x114]         ; 0042bfb1
        ;   Label: LAB_0042bfb1
    FCOMP float ptr [ESP + 0x120]       ; 0042bfb8
    FNSTSW AX                           ; 0042bfbf
    SAHF                                ; 0042bfc1
    JBE 0x0042bfd0                      ; 0042bfc2
        ;   XREF to: 0042bfd0 (CONDITIONAL_JUMP)  ; LAB_0042bfd0
    MOV EAX,dword ptr [ESP + 0x120]     ; 0042bfc4
    JMP 0x0042bd1c                      ; 0042bfcb
        ;   XREF to: 0042bd1c (UNCONDITIONAL_JUMP)  ; LAB_0042bd1c
    MOV EAX,dword ptr [ESP + 0x114]     ; 0042bfd0
        ;   Label: LAB_0042bfd0
    JMP 0x0042bd1c                      ; 0042bfd7
        ;   XREF to: 0042bd1c (UNCONDITIONAL_JUMP)  ; LAB_0042bd1c
    FLD float ptr [ESP + 0xf4]          ; 0042bfdc
        ;   Label: LAB_0042bfdc
    FCOMP float ptr [ESP + 0x124]       ; 0042bfe3
    FNSTSW AX                           ; 0042bfea
    SAHF                                ; 0042bfec
    JBE 0x0042bffb                      ; 0042bfed
        ;   XREF to: 0042bffb (CONDITIONAL_JUMP)  ; LAB_0042bffb
    MOV EAX,dword ptr [ESP + 0x124]     ; 0042bfef
    JMP 0x0042bd76                      ; 0042bff6
        ;   XREF to: 0042bd76 (UNCONDITIONAL_JUMP)  ; LAB_0042bd76
    MOV EAX,dword ptr [ESP + 0xf4]      ; 0042bffb
        ;   Label: LAB_0042bffb
    JMP 0x0042bd76                      ; 0042c002
        ;   XREF to: 0042bd76 (UNCONDITIONAL_JUMP)  ; LAB_0042bd76
    XOR ESI,ESI                         ; 0042c007
        ;   Label: LAB_0042c007
    MOV EAX,ESI                         ; 0042c009
    MOV ESP,EBP                         ; 0042c00b
    POP EBP                             ; 0042c00d
    POP EDI                             ; 0042c00e
    POP ESI                             ; 0042c00f
    POP EBX                             ; 0042c010
    RET                                 ; 0042c011

