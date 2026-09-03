; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_moveOutOfHeroWay_FUN_0042af70(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0xbc]:1  local_bc
; undefined        Stack[-0xa4]:1  local_a4
; undefined        Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[4]:
;   core_hostage.cpp_CHostage_process_FUN_004b6d80 at 004b781f
;   core_icepick.cpp_CIcePick_processAI_FUN_004baba0 at 004bb08c
;   core_moloch.cpp_CMoloch_processAI_FUN_004de1b0 at 004de4e5
;   core_svetlana.cpp_CSvetlana_processAI_FUN_005423c0 at 005428ac
;
; Referenced Globals:
;   TerminatedCString s_s_was_in_the_way_but_cou_0057a4ce
;   double DOUBLE_0057a50a = 0.785398163375000
;   double DOUBLE_0057a512 = 1.5
;   double DOUBLE_0057a51a = 4
;   double DOUBLE_0057a522 = 0.523598775583333
;   double DOUBLE_0057a52a = 4.5
;   double DOUBLE_0057a532 = 1.75
;   double DOUBLE_0057a53a = 1.57079632675000
;   double DOUBLE_0057a542 = 0.25
;   double DOUBLE_0057a54a = 2.40000000000000
;   float FLOAT_0057a552 = -1
;   undefined4 DAT_005ad1d0
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CConsole g_CConsole_0077ad0c
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_hero.cpp_closestHeroToPoint_FUN_004b4500
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042af70
        ;   Label: core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042af70
    PUSH ESI                            ; 0042af71
    PUSH EDI                            ; 0042af72
    PUSH EBP                            ; 0042af73
    MOV EBP,ESP                         ; 0042af74
    SUB ESP,0x108                       ; 0042af76
    AND ESP,0xfffffff8                  ; 0042af7c
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042af7f
    FLD float ptr [EDI + 0x2dbc]        ; 0042af82
    FLDZ                                ; 0042af88
    FCOMPP                              ; 0042af8a
    FNSTSW AX                           ; 0042af8c
    SAHF                                ; 0042af8e
    JBE 0x0042aff3                      ; 0042af8f
        ;   XREF to: 0042aff3 (CONDITIONAL_JUMP)  ; LAB_0042aff3
    FLD float ptr [EDI + 0x2dbc]        ; 0042af91
    FADD float ptr [EBP + 0x18]         ; 0042af97
    FST float ptr [EDI + 0x2dbc]        ; 0042af9a
    FLDZ                                ; 0042afa0
    FCOMPP                              ; 0042afa2
    FNSTSW AX                           ; 0042afa4
    SAHF                                ; 0042afa6
    JBE 0x0042afba                      ; 0042afa7
        ;   XREF to: 0042afba (CONDITIONAL_JUMP)  ; LAB_0042afba
    FLD float ptr [EDI + 0x2dcc]        ; 0042afa9
    FCOMP double ptr [0x0057a512]       ; 0042afaf | DOUBLE_0057a512
    FNSTSW AX                           ; 0042afb5
    SAHF                                ; 0042afb7
    JBE 0x0042afcd                      ; 0042afb8
        ;   XREF to: 0042afcd (CONDITIONAL_JUMP)  ; LAB_0042afcd
    MOV dword ptr [EDI + 0x2dbc],0x0    ; 0042afba
        ;   Label: LAB_0042afba
    XOR EAX,EAX                         ; 0042afc4
        ;   Label: LAB_0042afc4
    MOV ESP,EBP                         ; 0042afc6
        ;   Label: LAB_0042afc6
    POP EBP                             ; 0042afc8
    POP EDI                             ; 0042afc9
    POP ESI                             ; 0042afca
    POP EBX                             ; 0042afcb
    RET                                 ; 0042afcc
    PUSH 0x0                            ; 0042afcd
        ;   Label: LAB_0042afcd
    PUSH 0x0                            ; 0042afcf
    PUSH 0x2dd1184                      ; 0042afd1 | DAT_02dd1184
    PUSH 0x0                            ; 0042afd6
    LEA EAX,[EDI + 0x2dc0]              ; 0042afd8
    PUSH EAX                            ; 0042afde
    PUSH EDI                            ; 0042afdf
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0042afe0
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042afe5
    TEST EAX,EAX                        ; 0042afe8
    JNZ 0x0042afba                      ; 0042afea
        ;   XREF to: 0042afba (CONDITIONAL_JUMP)  ; LAB_0042afba
    MOV EAX,0x1                         ; 0042afec
    JMP 0x0042afc6                      ; 0042aff1
        ;   XREF to: 0042afc6 (UNCONDITIONAL_JUMP)  ; LAB_0042afc6
    LEA ESI,[EDI + 0x20]                ; 0042aff3
        ;   Label: LAB_0042aff3
    PUSH ESI                            ; 0042aff6
    CALL core_hero.cpp_closestHeroToPoint_FUN_004b4500 ; 0042aff7
        ;   XREF to: 004b4500 (UNCONDITIONAL_CALL)  ; CHero * core_hero.cpp_closestHeroToPoint_FUN_004b4500(CLocation * location)
    ADD ESP,0x4                         ; 0042affc
    MOV EBX,EAX                         ; 0042afff
    PUSH ESI                            ; 0042b001
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042b002
    LEA EAX,[ESP + 0x78]                ; 0042b009
    PUSH EAX                            ; 0042b00d
    PUSH EBX                            ; 0042b00e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0042b00f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042b014
    LEA EAX,[ESP + 0x74]                ; 0042b017
    PUSH EAX                            ; 0042b01b
    LEA EAX,[ESP + 0x60]                ; 0042b01c
    PUSH EAX                            ; 0042b020
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0042b021
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 0042b026
    FABS                                ; 0042b029
    LEA EAX,[EBX + 0x20]                ; 0042b02b
    FLD float ptr [ESI]                 ; 0042b02e
    FSUB float ptr [EAX]                ; 0042b030
    ADD ESP,0x8                         ; 0042b032
    FSTP float ptr [ESP + 0xd4]         ; 0042b035
    FLD float ptr [ESI + 0x4]           ; 0042b03c
    FSUB float ptr [EAX + 0x4]          ; 0042b03f
    FSTP float ptr [ESP + 0xd8]         ; 0042b042
    FLD float ptr [ESI + 0x8]           ; 0042b049
    FSUB float ptr [EAX + 0x8]          ; 0042b04c
    LEA EAX,[ESP + 0xd4]                ; 0042b04f
    PUSH EAX                            ; 0042b056
    LEA EAX,[ESP + 0x90]                ; 0042b057
    FXCH                                ; 0042b05e
    FSTP float ptr [ESP + 0x8]          ; 0042b060
    PUSH EAX                            ; 0042b064
    FSTP float ptr [ESP + 0xe4]         ; 0042b065
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 0042b06c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042b071
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042b074
    PUSH EBX                            ; 0042b077
    MOV dword ptr [ESP + 0xf8],EAX      ; 0042b078
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0042b07f
    CALL dword ptr [EAX + 0x140]        ; 0042b085
    ADD ESP,0x4                         ; 0042b08b
    TEST EAX,EAX                        ; 0042b08e
    JZ 0x0042b22e                       ; 0042b090
        ;   XREF to: 0042b22e (CONDITIONAL_JUMP)  ; LAB_0042b22e
    FLD float ptr [ESP + 0x4]           ; 0042b096
    FCOMP double ptr [0x0057a50a]       ; 0042b09a | DOUBLE_0057a50a
    FNSTSW AX                           ; 0042b0a0
    SAHF                                ; 0042b0a2
    JNC 0x0042b22e                      ; 0042b0a3
        ;   XREF to: 0042b22e (CONDITIONAL_JUMP)  ; LAB_0042b22e
    FLD float ptr [ESP + 0x74]          ; 0042b0a9
    FLDZ                                ; 0042b0ad
    FCOMPP                              ; 0042b0af
    FNSTSW AX                           ; 0042b0b1
    SAHF                                ; 0042b0b3
    JBE 0x0042b20f                      ; 0042b0b4
        ;   XREF to: 0042b20f (CONDITIONAL_JUMP)  ; LAB_0042b20f
    MOV EAX,0x1                         ; 0042b0ba
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042b0bf
        ;   Label: LAB_0042b0bf
    MOV dword ptr [ESP + 0xf0],EAX      ; 0042b0c6
    XOR EDX,EDX                         ; 0042b0cd
    LEA EBX,[EDI + 0x2dc0]              ; 0042b0cf
    MOV dword ptr [ESP + 0xfc],EDX      ; 0042b0d5
    ADD ESI,0x20                        ; 0042b0dc
    MOV ECX,dword ptr [ESP + 0xf0]      ; 0042b0df
        ;   Label: LAB_0042b0df
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0042b0e6
    TEST ECX,ECX                        ; 0042b0ed
    JNZ 0x0042b393                      ; 0042b0ef
        ;   XREF to: 0042b393 (CONDITIONAL_JUMP)  ; LAB_0042b393
    FLD float ptr [ESP + 0xf4]          ; 0042b0f5
        ;   Label: LAB_0042b0f5
    FADD float ptr [EAX*0x4 + 0x5ad1d0] ; 0042b0fc | DAT_005ad1d0
    XOR EAX,EAX                         ; 0042b103
    FSTP float ptr [ESP + 0x104]        ; 0042b105
    MOV dword ptr [ESP + 0x98],EAX      ; 0042b10c
    MOV dword ptr [ESP + 0xa0],EAX      ; 0042b113
    MOV EAX,dword ptr [ESP + 0x104]     ; 0042b11a
    MOV dword ptr [ESP + 0x9c],EAX      ; 0042b121
    LEA EAX,[ESP + 0x98]                ; 0042b128
    PUSH EAX                            ; 0042b12f
    LEA EAX,[ESP + 0x10]                ; 0042b130
    PUSH EAX                            ; 0042b134
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0042b135
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV ECX,0x40d00000                  ; 0042b13a
    ADD ESP,0x8                         ; 0042b13f
    MOV dword ptr [ESP + 0x8],ECX       ; 0042b142
    FLD float ptr [ESP + 0x8]           ; 0042b146
        ;   Label: LAB_0042b146
    FCOMP double ptr [0x0057a54a]       ; 0042b14a | DOUBLE_0057a54a
    FNSTSW AX                           ; 0042b150
    SAHF                                ; 0042b152
    JBE 0x0042b216                      ; 0042b153
        ;   XREF to: 0042b216 (CONDITIONAL_JUMP)  ; LAB_0042b216
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042b159
    MOV dword ptr [ESP + 0x70],EAX      ; 0042b15d
    LEA EAX,[ESP + 0x68]                ; 0042b161
    PUSH EAX                            ; 0042b165
    LEA EAX,[ESP + 0xa8]                ; 0042b166
    PUSH EAX                            ; 0042b16d
    LEA EAX,[ESP + 0x14]                ; 0042b16e
    XOR ECX,ECX                         ; 0042b172
    PUSH EAX                            ; 0042b174
    MOV dword ptr [ESP + 0x74],ECX      ; 0042b175
    MOV dword ptr [ESP + 0x78],ECX      ; 0042b179
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0042b17d
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0042b182
    FADD float ptr [EAX]                ; 0042b184
    ADD ESP,0xc                         ; 0042b186
    FSTP float ptr [ESP + 0xb0]         ; 0042b189
    FLD float ptr [ESI + 0x4]           ; 0042b190
    FADD float ptr [EAX + 0x4]          ; 0042b193
    FSTP float ptr [ESP + 0xb4]         ; 0042b196
    FLD float ptr [ESI + 0x8]           ; 0042b19d
    FADD float ptr [EAX + 0x8]          ; 0042b1a0
    LEA EAX,[ESP + 0xb0]                ; 0042b1a3
    FSTP float ptr [ESP + 0xb8]         ; 0042b1aa
    CMP EBX,EAX                         ; 0042b1b1
    JZ 0x0042b1d2                       ; 0042b1b3
        ;   XREF to: 0042b1d2 (CONDITIONAL_JUMP)  ; LAB_0042b1d2
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0042b1b5
    MOV dword ptr [EBX],EAX             ; 0042b1bc
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0042b1be
    MOV dword ptr [EBX + 0x4],EAX       ; 0042b1c5
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0042b1c8
    MOV dword ptr [EBX + 0x8],EAX       ; 0042b1cf
    PUSH 0x0                            ; 0042b1d2
        ;   Label: LAB_0042b1d2
    PUSH 0x0                            ; 0042b1d4
    PUSH 0x2dd1184                      ; 0042b1d6 | DAT_02dd1184
    PUSH 0x0                            ; 0042b1db
    PUSH EBX                            ; 0042b1dd
    PUSH EDI                            ; 0042b1de
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0042b1df
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042b1e4
    TEST EAX,EAX                        ; 0042b1e7
    JL 0x0042b39a                       ; 0042b1e9
        ;   XREF to: 0042b39a (CONDITIONAL_JUMP)  ; LAB_0042b39a
    MOV dword ptr [EDI + 0x2dcc],0x0    ; 0042b1ef
    MOV EAX,0x2                         ; 0042b1f9
    MOV dword ptr [EDI + 0x2dbc],0xc0800000 ; 0042b1fe
    MOV ESP,EBP                         ; 0042b208
    POP EBP                             ; 0042b20a
    POP EDI                             ; 0042b20b
    POP ESI                             ; 0042b20c
    POP EBX                             ; 0042b20d
    RET                                 ; 0042b20e
    XOR EAX,EAX                         ; 0042b20f
        ;   Label: LAB_0042b20f
    JMP 0x0042b0bf                      ; 0042b211
        ;   XREF to: 0042b0bf (UNCONDITIONAL_JUMP)  ; LAB_0042b0bf
    MOV EAX,dword ptr [ESP + 0xfc]      ; 0042b216
        ;   Label: LAB_0042b216
    INC EAX                             ; 0042b21d
    MOV dword ptr [ESP + 0xfc],EAX      ; 0042b21e
    CMP EAX,0x6                         ; 0042b225
    JL 0x0042b0df                       ; 0042b228
        ;   XREF to: 0042b0df (CONDITIONAL_JUMP)  ; LAB_0042b0df
    FLD float ptr [ESP + 0x78]          ; 0042b22e
        ;   Label: LAB_0042b22e
    FABS                                ; 0042b232
    FCOMP double ptr [0x0057a51a]       ; 0042b234 | DOUBLE_0057a51a
    FNSTSW AX                           ; 0042b23a
    SAHF                                ; 0042b23c
    JA 0x0042afba                       ; 0042b23d
        ;   XREF to: 0042afba (CONDITIONAL_JUMP)  ; LAB_0042afba
    FLD float ptr [ESP + 0x4]           ; 0042b243
    FCOMP double ptr [0x0057a522]       ; 0042b247 | DOUBLE_0057a522
    FNSTSW AX                           ; 0042b24d
    SAHF                                ; 0042b24f
    JA 0x0042afba                       ; 0042b250
        ;   XREF to: 0042afba (CONDITIONAL_JUMP)  ; LAB_0042afba
    FLD float ptr [ESP + 0x78]          ; 0042b256
    FMUL ST0                            ; 0042b25a
    FLD float ptr [ESP + 0x74]          ; 0042b25c
    FMUL ST0                            ; 0042b260
    FADDP                               ; 0042b262
    FLD float ptr [ESP + 0x7c]          ; 0042b264
    FMUL ST0                            ; 0042b268
    FADDP                               ; 0042b26a
    FSQRT                               ; 0042b26c
    FCOMP double ptr [0x0057a52a]       ; 0042b26e | DOUBLE_0057a52a
    FNSTSW AX                           ; 0042b274
    SAHF                                ; 0042b276
    JA 0x0042afba                       ; 0042b277
        ;   XREF to: 0042afba (CONDITIONAL_JUMP)  ; LAB_0042afba
    FLD float ptr [EDI + 0x2dbc]        ; 0042b27d
    FADD float ptr [EBP + 0x18]         ; 0042b283
    FST float ptr [EDI + 0x2dbc]        ; 0042b286
    FCOMP double ptr [0x0057a532]       ; 0042b28c | DOUBLE_0057a532
    FNSTSW AX                           ; 0042b292
    SAHF                                ; 0042b294
    JC 0x0042afc4                       ; 0042b295
        ;   XREF to: 0042afc4 (CONDITIONAL_JUMP)  ; LAB_0042afc4
    MOV ESI,dword ptr [ESP + 0xec]      ; 0042b29b
    XOR EDX,EDX                         ; 0042b2a2
    LEA EBX,[EDI + 0x2dc0]              ; 0042b2a4
    MOV dword ptr [ESP + 0x100],EDX     ; 0042b2aa
    ADD ESI,0x20                        ; 0042b2b1
    MOV EAX,dword ptr [ESP + 0x100]     ; 0042b2b4
        ;   Label: LAB_0042b2b4
    MOV EDX,EAX                         ; 0042b2bb
    SAR EDX,0x1f                        ; 0042b2bd
    SUB EAX,EDX                         ; 0042b2c0
    SAR EAX,0x1                         ; 0042b2c2
    MOV dword ptr [ESP + 0x104],EAX     ; 0042b2c4
    FILD dword ptr [ESP + 0x104]        ; 0042b2cb
    FMUL double ptr [0x0057a53a]        ; 0042b2d2 | DOUBLE_0057a53a
    FMUL double ptr [0x0057a542]        ; 0042b2d8 | DOUBLE_0057a542
    MOV AH,byte ptr [ESP + 0x100]       ; 0042b2de
    FSTP float ptr [ESP + 0xf8]         ; 0042b2e5
    TEST AH,0x1                         ; 0042b2ec
    JNZ 0x0042b3ad                      ; 0042b2ef
        ;   XREF to: 0042b3ad (CONDITIONAL_JUMP)  ; LAB_0042b3ad
    FLD float ptr [ESP + 0xf4]          ; 0042b2f5
        ;   Label: LAB_0042b2f5
    FADD float ptr [ESP + 0xf8]         ; 0042b2fc
    FSTP float ptr [ESP + 0x104]        ; 0042b303
    MOV EAX,dword ptr [ESP + 0x104]     ; 0042b30a
    MOV dword ptr [ESP + 0xc0],EAX      ; 0042b311
    LEA EAX,[ESP + 0xbc]                ; 0042b318
    PUSH EAX                            ; 0042b31f
    LEA EAX,[ESP + 0x38]                ; 0042b320
    XOR ECX,ECX                         ; 0042b324
    PUSH EAX                            ; 0042b326
    MOV dword ptr [ESP + 0xc4],ECX      ; 0042b327
    MOV dword ptr [ESP + 0xcc],ECX      ; 0042b32e
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 0042b335
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    MOV EDX,0x40900000                  ; 0042b33a
    ADD ESP,0x8                         ; 0042b33f
    MOV dword ptr [ESP],EDX             ; 0042b342
    FLD float ptr [ESP]                 ; 0042b345
        ;   Label: LAB_0042b345
    FCOMP double ptr [0x0057a54a]       ; 0042b348 | DOUBLE_0057a54a
    FNSTSW AX                           ; 0042b34e
    SAHF                                ; 0042b350
    JA 0x0042b3cb                       ; 0042b351
        ;   XREF to: 0042b3cb (CONDITIONAL_JUMP)  ; LAB_0042b3cb
    MOV ECX,dword ptr [ESP + 0x100]     ; 0042b353
    INC ECX                             ; 0042b35a
    MOV dword ptr [ESP + 0x100],ECX     ; 0042b35b
    CMP ECX,0x8                         ; 0042b362
    JLE 0x0042b2b4                      ; 0042b365
        ;   XREF to: 0042b2b4 (CONDITIONAL_JUMP)  ; LAB_0042b2b4
    PUSH EDI                            ; 0042b36b
    PUSH 0x57a4ce                       ; 0042b36c | = "%s was in the way, but couldn't figur..."
    MOV EDX,dword ptr [0x005ad350]      ; 0042b371 | g_CConsole_PTR_005ad350
    PUSH EDX                            ; 0042b377 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0042b378
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0042b37d
    MOV dword ptr [EDI + 0x2dbc],0x0    ; 0042b380
    XOR EAX,EAX                         ; 0042b38a
    MOV ESP,EBP                         ; 0042b38c
    POP EBP                             ; 0042b38e
    POP EDI                             ; 0042b38f
    POP ESI                             ; 0042b390
    POP EBX                             ; 0042b391
    RET                                 ; 0042b392
    XOR AL,0x1                          ; 0042b393
        ;   Label: LAB_0042b393
    JMP 0x0042b0f5                      ; 0042b395
        ;   XREF to: 0042b0f5 (UNCONDITIONAL_JUMP)  ; LAB_0042b0f5
    FLD float ptr [ESP + 0x8]           ; 0042b39a
        ;   Label: LAB_0042b39a
    FADD float ptr [0x0057a552]         ; 0042b39e | FLOAT_0057a552
    FSTP float ptr [ESP + 0x8]          ; 0042b3a4
    JMP 0x0042b146                      ; 0042b3a8
        ;   XREF to: 0042b146 (UNCONDITIONAL_JUMP)  ; LAB_0042b146
    XOR byte ptr [ESP + 0xfb],0x80      ; 0042b3ad
        ;   Label: LAB_0042b3ad
    JMP 0x0042b2f5                      ; 0042b3b5
        ;   XREF to: 0042b2f5 (UNCONDITIONAL_JUMP)  ; LAB_0042b2f5
    FLD float ptr [ESP]                 ; 0042b3ba
        ;   Label: LAB_0042b3ba
    FADD float ptr [0x0057a552]         ; 0042b3bd | FLOAT_0057a552
    FSTP float ptr [ESP]                ; 0042b3c3
    JMP 0x0042b345                      ; 0042b3c6
        ;   XREF to: 0042b345 (UNCONDITIONAL_JUMP)  ; LAB_0042b345
    MOV EAX,dword ptr [ESP]             ; 0042b3cb
        ;   Label: LAB_0042b3cb
    MOV dword ptr [ESP + 0xe8],EAX      ; 0042b3ce
    LEA EAX,[ESP + 0xe0]                ; 0042b3d5
    PUSH EAX                            ; 0042b3dc
    LEA EAX,[ESP + 0xcc]                ; 0042b3dd
    PUSH EAX                            ; 0042b3e4
    LEA EAX,[ESP + 0x3c]                ; 0042b3e5
    XOR ECX,ECX                         ; 0042b3e9
    PUSH EAX                            ; 0042b3eb
    MOV dword ptr [ESP + 0xec],ECX      ; 0042b3ec
    MOV dword ptr [ESP + 0xf0],ECX      ; 0042b3f3
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 0042b3fa
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; CVector3f * core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40(CMatrix3x3f * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [ESI]                 ; 0042b3ff
    FADD float ptr [EAX]                ; 0042b401
    ADD ESP,0xc                         ; 0042b403
    FSTP float ptr [ESP + 0x80]         ; 0042b406
    FLD float ptr [ESI + 0x4]           ; 0042b40d
    FADD float ptr [EAX + 0x4]          ; 0042b410
    FSTP float ptr [ESP + 0x84]         ; 0042b413
    FLD float ptr [ESI + 0x8]           ; 0042b41a
    FADD float ptr [EAX + 0x8]          ; 0042b41d
    LEA EAX,[ESP + 0x80]                ; 0042b420
    FSTP float ptr [ESP + 0x88]         ; 0042b427
    CMP EBX,EAX                         ; 0042b42e
    JZ 0x0042b44f                       ; 0042b430
        ;   XREF to: 0042b44f (CONDITIONAL_JUMP)  ; LAB_0042b44f
    MOV EAX,dword ptr [ESP + 0x80]      ; 0042b432
    MOV dword ptr [EBX],EAX             ; 0042b439
    MOV EAX,dword ptr [ESP + 0x84]      ; 0042b43b
    MOV dword ptr [EBX + 0x4],EAX       ; 0042b442
    MOV EAX,dword ptr [ESP + 0x88]      ; 0042b445
    MOV dword ptr [EBX + 0x8],EAX       ; 0042b44c
    PUSH 0x0                            ; 0042b44f
        ;   Label: LAB_0042b44f
    PUSH 0x0                            ; 0042b451
    PUSH 0x2dd1184                      ; 0042b453 | DAT_02dd1184
    PUSH 0x0                            ; 0042b458
    PUSH EBX                            ; 0042b45a
    PUSH EDI                            ; 0042b45b
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 0042b45c
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042b461
    TEST EAX,EAX                        ; 0042b464
    JL 0x0042b3ba                       ; 0042b466
        ;   XREF to: 0042b3ba (CONDITIONAL_JUMP)  ; LAB_0042b3ba
    MOV dword ptr [EDI + 0x2dcc],0x0    ; 0042b46c
    MOV EAX,0x1                         ; 0042b476
    MOV dword ptr [EDI + 0x2dbc],0xc0a00000 ; 0042b47b
    MOV ESP,EBP                         ; 0042b485
    POP EBP                             ; 0042b487
    POP EDI                             ; 0042b488
    POP ESI                             ; 0042b489
    POP EBX                             ; 0042b48a
    RET                                 ; 0042b48b

