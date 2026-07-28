; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_enemy_cpp_CEnemy_updateVictim_FUN_00479b60(CEnemy *param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Capture_0057f36f
;   TerminatedCString s_s_can_see_hero_0057f377
;   float FLOAT_0057f38b = 3
;   undefined4 DAT_0059cda8
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_005b7650
;   undefined4 DAT_005b9354
;   undefined4 DAT_005be368
;   undefined4 DAT_0077ad0c
;   undefined4 g_CEnemyActorType_01bcdebc.name_hash
;   undefined4 DAT_01bcdef8
;   undefined4 DAT_01bcdefc
;   undefined4 DAT_01bcfe34
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c777c0
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0
;   core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479b60
        ;   Label: core_enemy.cpp_CEnemy_updateVictim_FUN_00479b60
    PUSH ESI                            ; 00479b61
    PUSH EDI                            ; 00479b62
    PUSH EBP                            ; 00479b63
    MOV EBP,ESP                         ; 00479b64
    SUB ESP,0x48                        ; 00479b66
    AND ESP,0xfffffff8                  ; 00479b69
    MOV EDI,dword ptr [EBP + 0x14]      ; 00479b6c
    MOV EAX,dword ptr [EDI + 0xbd18]    ; 00479b6f
    MOV EDX,dword ptr [EDI + 0xbd1c]    ; 00479b75
    MOV dword ptr [ESP],EAX             ; 00479b7b
    TEST EDX,EDX                        ; 00479b7e
    JZ 0x00479bb7                       ; 00479b80
        ;   XREF to: 00479bb7 (CONDITIONAL_JUMP)  ; LAB_00479bb7
    CMP EDX,dword ptr [0x0059cda8]      ; 00479b82 | DAT_0059cda8
    JNZ 0x00479baf                      ; 00479b88
        ;   XREF to: 00479baf (CONDITIONAL_JUMP)  ; LAB_00479baf
    MOV dword ptr [EDI + 0xbca4],0x0    ; 00479b8a
    MOV dword ptr [EDI + 0xbc98],0x0    ; 00479b94
        ;   Label: LAB_00479b94
    MOV dword ptr [EDI + 0xbca8],0x0    ; 00479b9e
    MOV ESP,EBP                         ; 00479ba8
        ;   Label: LAB_00479ba8
    POP EBP                             ; 00479baa
    POP EDI                             ; 00479bab
    POP ESI                             ; 00479bac
    POP EBX                             ; 00479bad
    RET                                 ; 00479bae
    MOV dword ptr [EDI + 0xbca4],EDX    ; 00479baf
        ;   Label: LAB_00479baf
    JMP 0x00479b94                      ; 00479bb5
        ;   XREF to: 00479b94 (UNCONDITIONAL_JUMP)  ; LAB_00479b94
    MOV EAX,[0x005b9354]                ; 00479bb7 | DAT_005b9354 | DAT_01c775ec
        ;   Label: LAB_00479bb7
    CMP dword ptr [EAX + 0x1d4],0x0     ; 00479bbc | DAT_01c777c0
    JNZ 0x00479bce                      ; 00479bc3
        ;   XREF to: 00479bce (CONDITIONAL_JUMP)  ; LAB_00479bce
    CMP dword ptr [EAX + 0x230],0x0     ; 00479bc5 | DAT_01c7781c
    JNZ 0x00479bf3                      ; 00479bcc
        ;   XREF to: 00479bf3 (CONDITIONAL_JUMP)  ; LAB_00479bf3
    MOV dword ptr [EDI + 0xbc98],0x0    ; 00479bce
        ;   Label: LAB_00479bce
    MOV dword ptr [EDI + 0xbca8],0x0    ; 00479bd8
    MOV dword ptr [EDI + 0xbca4],0x0    ; 00479be2
    MOV ESP,EBP                         ; 00479bec
    POP EBP                             ; 00479bee
    POP EDI                             ; 00479bef
    POP ESI                             ; 00479bf0
    POP EBX                             ; 00479bf1
    RET                                 ; 00479bf2
    PUSH 0x57f36f                       ; 00479bf3 | = "Capture"
        ;   Label: LAB_00479bf3
    MOV ESI,dword ptr [0x005b7650]      ; 00479bf8 | DAT_005b7650
    PUSH ESI                            ; 00479bfe
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30 ; 00479bff
        ;   XREF to: 0047dc30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00479c04
    TEST EAX,EAX                        ; 00479c07
    JNZ 0x00479bce                      ; 00479c09
        ;   XREF to: 00479bce (CONDITIONAL_JUMP)  ; LAB_00479bce
    FLD float ptr [EDI + 0xbca8]        ; 00479c0b
    FSUB float ptr [EBP + 0x18]         ; 00479c11
    FST float ptr [EDI + 0xbca8]        ; 00479c14
    FLDZ                                ; 00479c1a
    FCOMPP                              ; 00479c1c
    FNSTSW AX                           ; 00479c1e
    SAHF                                ; 00479c20
    JNC 0x00479c6e                      ; 00479c21
        ;   XREF to: 00479c6e (CONDITIONAL_JUMP)  ; LAB_00479c6e
    MOV EBX,dword ptr [EDI + 0xbca4]    ; 00479c23
    TEST EBX,EBX                        ; 00479c29
    JZ 0x00479ba8                       ; 00479c2b
        ;   XREF to: 00479ba8 (CONDITIONAL_JUMP)  ; LAB_00479ba8
    PUSH EBX                            ; 00479c31
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00479c32
    CALL dword ptr [EDX + 0x104]        ; 00479c38
    ADD ESP,0x4                         ; 00479c3e
    TEST EAX,EAX                        ; 00479c41
    JZ 0x00479ba8                       ; 00479c43
        ;   XREF to: 00479ba8 (CONDITIONAL_JUMP)  ; LAB_00479ba8
    MOV dword ptr [EDI + 0xbca8],0x0    ; 00479c49
    MOV dword ptr [EDI + 0xbc98],0x0    ; 00479c53
    MOV dword ptr [EDI + 0xbca4],0x0    ; 00479c5d
    MOV ESP,EBP                         ; 00479c67
    POP EBP                             ; 00479c69
    POP EDI                             ; 00479c6a
    POP ESI                             ; 00479c6b
    POP EBX                             ; 00479c6c
    RET                                 ; 00479c6d
    PUSH 0x3fc00000                     ; 00479c6e
        ;   Label: LAB_00479c6e
    PUSH 0x3f000000                     ; 00479c73
    MOV dword ptr [EDI + 0xbc98],0x0    ; 00479c78
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00479c82
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    FLD float ptr [EDI + 0xbcac]        ; 00479c87
    FMUL ST0                            ; 00479c8d
    MOV dword ptr [ESP + 0x4c],EAX      ; 00479c8f
    XOR ESI,ESI                         ; 00479c93
    FLD float ptr [ESP + 0x4c]          ; 00479c95
    MOV EAX,dword ptr [EDI + 0xbca4]    ; 00479c99
    ADD ESP,0x8                         ; 00479c9f
    FSTP float ptr [EDI + 0xbca8]       ; 00479ca2
    FSTP float ptr [ESP + 0x20]         ; 00479ca8
    TEST EAX,EAX                        ; 00479cac
    JZ 0x00479dd0                       ; 00479cae
        ;   XREF to: 00479dd0 (CONDITIONAL_JUMP)  ; LAB_00479dd0
    XOR EDX,EDX                         ; 00479cb4
        ;   Label: LAB_00479cb4
    LEA EAX,[EDI + 0x20]                ; 00479cb6
    MOV dword ptr [ESP + 0x34],EDX      ; 00479cb9
    MOV dword ptr [ESP + 0x30],EAX      ; 00479cbd
    LEA EAX,[ESI*0x4 + 0x0]             ; 00479cc1
    MOV dword ptr [ESP + 0x2c],EDX      ; 00479cc8
    MOV dword ptr [ESP + 0x38],EAX      ; 00479ccc
    MOV EAX,[0x005be368]                ; 00479cd0 | DAT_005be368
        ;   Label: LAB_00479cd0
    MOV EDX,dword ptr [ESP + 0x34]      ; 00479cd5
    CMP EDX,dword ptr [EAX + 0x14ecb0]  ; 00479cd9 | DAT_01fa5f34
    JL 0x00479df6                       ; 00479cdf
        ;   XREF to: 00479df6 (CONDITIONAL_JUMP)  ; LAB_00479df6
    MOV EAX,dword ptr [EDI + 0xbca4]    ; 00479ce5
    MOV dword ptr [ESP + 0x24],EAX      ; 00479ceb
    LEA EAX,[EDI + 0x20]                ; 00479cef
    MOV dword ptr [EDI + 0xbca4],0x0    ; 00479cf2
    MOV dword ptr [ESP + 0x1c],EAX      ; 00479cfc
    MOV EBX,0x60ad78ec                  ; 00479d00
        ;   Label: LAB_00479d00
    XOR EDX,EDX                         ; 00479d05
    MOV dword ptr [ESP + 0x40],EBX      ; 00479d07
    MOV EBX,0xffffffff                  ; 00479d0b
    TEST ESI,ESI                        ; 00479d10
    JLE 0x00479d39                      ; 00479d12
        ;   XREF to: 00479d39 (CONDITIONAL_JUMP)  ; LAB_00479d39
    XOR ECX,ECX                         ; 00479d14
    FLD float ptr [ECX + 0x1bcfe38]     ; 00479d16
        ;   Label: LAB_00479d16
    FCOMP float ptr [ESP + 0x40]        ; 00479d1c
    FNSTSW AX                           ; 00479d20
    SAHF                                ; 00479d22
    JNC 0x00479d31                      ; 00479d23
        ;   XREF to: 00479d31 (CONDITIONAL_JUMP)  ; LAB_00479d31
    MOV EAX,dword ptr [ECX + 0x1bcfe38] ; 00479d25
    MOV EBX,EDX                         ; 00479d2b
    MOV dword ptr [ESP + 0x40],EAX      ; 00479d2d
    INC EDX                             ; 00479d31
        ;   Label: LAB_00479d31
    ADD ECX,0x4                         ; 00479d32
    CMP EDX,ESI                         ; 00479d35
    JL 0x00479d16                       ; 00479d37
        ;   XREF to: 00479d16 (CONDITIONAL_JUMP)  ; LAB_00479d16
    TEST EBX,EBX                        ; 00479d39
        ;   Label: LAB_00479d39
    JL 0x00479ba8                       ; 00479d3b
        ;   XREF to: 00479ba8 (CONDITIONAL_JUMP)  ; LAB_00479ba8
    MOV EAX,dword ptr [EBX*0x4 + 0x1bcdef8] ; 00479d41 | g_CEnemyActorType_01bcdebc.name_hash | DAT_01bcdef8 | DAT_01bcdefc
    PUSH EAX                            ; 00479d48
    PUSH EDI                            ; 00479d49
    MOV dword ptr [ESP + 0x44],EAX      ; 00479d4a
    CALL core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0 ; 00479d4e
        ;   XREF to: 00479ab0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_canSeeTarget_FUN_00479ab0(CEnemy * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 00479d53
    TEST EAX,EAX                        ; 00479d56
    JNZ 0x00479ef4                      ; 00479d58
        ;   XREF to: 00479ef4 (CONDITIONAL_JUMP)  ; LAB_00479ef4
    CMP dword ptr [EDI + 0xbd20],0x0    ; 00479d5e
    JZ 0x00479f1a                       ; 00479d65
        ;   XREF to: 00479f1a (CONDITIONAL_JUMP)  ; LAB_00479f1a
    MOV ECX,dword ptr [ESP + 0x3c]      ; 00479d6b
        ;   Label: LAB_00479d6b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00479d6f
    PUSH ECX                            ; 00479d73
    MOV EAX,dword ptr [EAX + 0x14c]     ; 00479d74
    CALL dword ptr [EAX + 0xbc]         ; 00479d7a
    ADD ESP,0x4                         ; 00479d80
    TEST EAX,EAX                        ; 00479d83
    JZ 0x00479da7                       ; 00479d85
        ;   XREF to: 00479da7 (CONDITIONAL_JUMP)  ; LAB_00479da7
    MOV EDX,dword ptr [EDI + 0x6c]      ; 00479d87
    PUSH EDX                            ; 00479d8a
    LEA EDX,[ESP + 0x14]                ; 00479d8b
    PUSH EDX                            ; 00479d8f
    MOV ECX,dword ptr [ESP + 0x24]      ; 00479d90
    PUSH ECX                            ; 00479d94
    PUSH EAX                            ; 00479d95
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 00479d96
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00479d9b
    CMP EAX,0x1                         ; 00479d9e
    JZ 0x00479f3a                       ; 00479da1
        ;   XREF to: 00479f3a (CONDITIONAL_JUMP)  ; LAB_00479f3a
    MOV EAX,0x7149f2ca                  ; 00479da7
        ;   Label: LAB_00479da7
    MOV EDX,dword ptr [ESP + 0x24]      ; 00479dac
    MOV dword ptr [EBX*0x4 + 0x1bcfe38],EAX ; 00479db0 | DAT_01bcfe34
    CMP EDX,dword ptr [ESP + 0x3c]      ; 00479db7
    JNZ 0x00479d00                      ; 00479dbb
        ;   XREF to: 00479d00 (CONDITIONAL_JUMP)  ; LAB_00479d00
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00479dc1
    MOV dword ptr [EDI + 0xbca4],EAX    ; 00479dc5
    JMP 0x00479d00                      ; 00479dcb
        ;   XREF to: 00479d00 (UNCONDITIONAL_JUMP)  ; LAB_00479d00
    FLD float ptr [EDI + 0xbc9c]        ; 00479dd0
        ;   Label: LAB_00479dd0
    FCOMP float ptr [EDI + 0xbcac]      ; 00479dd6
    FNSTSW AX                           ; 00479ddc
    SAHF                                ; 00479dde
    JNC 0x00479cb4                      ; 00479ddf
        ;   XREF to: 00479cb4 (CONDITIONAL_JUMP)  ; LAB_00479cb4
    FLD float ptr [EDI + 0xbc9c]        ; 00479de5
    FMUL ST0                            ; 00479deb
    FSTP float ptr [ESP + 0x20]         ; 00479ded
    JMP 0x00479cb4                      ; 00479df1
        ;   XREF to: 00479cb4 (UNCONDITIONAL_JUMP)  ; LAB_00479cb4
    ADD EAX,dword ptr [ESP + 0x2c]      ; 00479df6
        ;   Label: LAB_00479df6
    PUSH EDI                            ; 00479dfa
    MOV EBX,dword ptr [EAX + 0x14ecb4]  ; 00479dfb | DAT_01fa5f38
    PUSH EBX                            ; 00479e01
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479e02
    CALL dword ptr [EAX + 0xdc]         ; 00479e08
    ADD ESP,0x8                         ; 00479e0e
    TEST EAX,EAX                        ; 00479e11
    JZ 0x00479edb                       ; 00479e13
        ;   XREF to: 00479edb (CONDITIONAL_JUMP)  ; LAB_00479edb
    PUSH EBX                            ; 00479e19
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479e1a
    CALL dword ptr [EAX + 0x104]        ; 00479e20
    ADD ESP,0x4                         ; 00479e26
    TEST EAX,EAX                        ; 00479e29
    JNZ 0x00479edb                      ; 00479e2b
        ;   XREF to: 00479edb (CONDITIONAL_JUMP)  ; LAB_00479edb
    PUSH EBX                            ; 00479e31
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00479e32
    CALL dword ptr [EAX + 0x68]         ; 00479e38
    ADD ESP,0x4                         ; 00479e3b
    TEST EAX,EAX                        ; 00479e3e
    JNZ 0x00479edb                      ; 00479e40
        ;   XREF to: 00479edb (CONDITIONAL_JUMP)  ; LAB_00479edb
    FLD float ptr [EBX + 0x2610]        ; 00479e46
    FLDZ                                ; 00479e4c
    FCOMPP                              ; 00479e4e
    FNSTSW AX                           ; 00479e50
    SAHF                                ; 00479e52
    JC 0x00479edb                       ; 00479e53
        ;   XREF to: 00479edb (CONDITIONAL_JUMP)  ; LAB_00479edb
    LEA EAX,[EBX + 0x20]                ; 00479e59
    MOV EDX,dword ptr [ESP + 0x30]      ; 00479e5c
    FLD float ptr [EAX]                 ; 00479e60
    FSUB float ptr [EDX]                ; 00479e62
    FSTP float ptr [ESP + 0x4]          ; 00479e64
    FLD float ptr [EAX + 0x4]           ; 00479e68
    FSUB float ptr [EDX + 0x4]          ; 00479e6b
    FST float ptr [ESP + 0x8]           ; 00479e6e
    FLD float ptr [EAX + 0x8]           ; 00479e72
    FXCH                                ; 00479e75
    FABS                                ; 00479e77
    FXCH                                ; 00479e79
    FSUB float ptr [EDX + 0x8]          ; 00479e7b
    FSTP float ptr [ESP + 0xc]          ; 00479e7e
    FLD float ptr [ESP]                 ; 00479e82
    FCOMPP                              ; 00479e85
    FNSTSW AX                           ; 00479e87
    SAHF                                ; 00479e89
    JC 0x00479edb                       ; 00479e8a
        ;   XREF to: 00479edb (CONDITIONAL_JUMP)  ; LAB_00479edb
    FLD float ptr [ESP + 0x8]           ; 00479e8c
    FMUL float ptr [0x0057f38b]         ; 00479e90 | FLOAT_0057f38b
    FST float ptr [ESP + 0x8]           ; 00479e96
    FMUL float ptr [ESP + 0x8]          ; 00479e9a
    FLD float ptr [ESP + 0x4]           ; 00479e9e
    FMUL ST0                            ; 00479ea2
    FADDP                               ; 00479ea4
    FLD float ptr [ESP + 0xc]           ; 00479ea6
    FMUL ST0                            ; 00479eaa
    FADDP                               ; 00479eac
    FST float ptr [ESP + 0x28]          ; 00479eae
    FCOMP float ptr [ESP + 0x20]        ; 00479eb2
    FNSTSW AX                           ; 00479eb6
    SAHF                                ; 00479eb8
    JA 0x00479edb                       ; 00479eb9
        ;   XREF to: 00479edb (CONDITIONAL_JUMP)  ; LAB_00479edb
    MOV EAX,dword ptr [ESP + 0x38]      ; 00479ebb
    MOV EDX,dword ptr [ESP + 0x38]      ; 00479ebf
    MOV dword ptr [EAX + 0x1bcdef8],EBX ; 00479ec3 | DAT_01bcdef8
    MOV EAX,dword ptr [ESP + 0x28]      ; 00479ec9
    MOV dword ptr [EDX + 0x1bcfe38],EAX ; 00479ecd
    LEA EAX,[EDX + 0x4]                 ; 00479ed3
    INC ESI                             ; 00479ed6
    MOV dword ptr [ESP + 0x38],EAX      ; 00479ed7
    MOV ECX,dword ptr [ESP + 0x34]      ; 00479edb
        ;   Label: LAB_00479edb
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00479edf
    INC ECX                             ; 00479ee3
    ADD EDX,0x4                         ; 00479ee4
    MOV dword ptr [ESP + 0x34],ECX      ; 00479ee7
    MOV dword ptr [ESP + 0x2c],EDX      ; 00479eeb
    JMP 0x00479cd0                      ; 00479eef
        ;   XREF to: 00479cd0 (UNCONDITIONAL_JUMP)  ; LAB_00479cd0
    PUSH EDI                            ; 00479ef4
        ;   Label: LAB_00479ef4
    PUSH 0x57f377                       ; 00479ef5 | = "%s can see hero\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00479efa | PTR_DAT_005ad350
    MOV EAX,dword ptr [ESP + 0x44]      ; 00479f00
    PUSH ECX                            ; 00479f04 | DAT_0077ad0c
    MOV dword ptr [EDI + 0xbca4],EAX    ; 00479f05
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00479f0b
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 00479f10
    MOV ESP,EBP                         ; 00479f13
    POP EBP                             ; 00479f15
    POP EDI                             ; 00479f16
    POP ESI                             ; 00479f17
    POP EBX                             ; 00479f18
    RET                                 ; 00479f19
    CMP dword ptr [EDI + 0xbd20],0x0    ; 00479f1a
        ;   Label: LAB_00479f1a
    JNZ 0x00479da7                      ; 00479f21
        ;   XREF to: 00479da7 (CONDITIONAL_JUMP)  ; LAB_00479da7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00479f27
    CMP EAX,dword ptr [ESP + 0x24]      ; 00479f2b
    JZ 0x00479d6b                       ; 00479f2f
        ;   XREF to: 00479d6b (CONDITIONAL_JUMP)  ; LAB_00479d6b
    JMP 0x00479da7                      ; 00479f35
        ;   XREF to: 00479da7 (UNCONDITIONAL_JUMP)  ; LAB_00479da7
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00479f3a
        ;   Label: LAB_00479f3a
    MOV dword ptr [EDI + 0xbca4],EAX    ; 00479f3e
    MOV ESP,EBP                         ; 00479f44
    POP EBP                             ; 00479f46
    POP EDI                             ; 00479f47
    POP ESI                             ; 00479f48
    POP EBX                             ; 00479f49
    RET                                 ; 00479f4a

