; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_00489730(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_Capture_005bdc7e+1
;   TerminatedCString s_s_can_see_hero_005bdc87
;   undefined4 DAT_005bdc9b
;   undefined4 DAT_005df358
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005fba60
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CConsole g_CConsoleInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01c5bc4c
;   undefined4 DAT_01c5db8c
;   undefined4 g_CGameInstance.field456_0x1f8
;   undefined4 g_CGameInstance.field548_0x254
;   undefined4 g_CDemonSetInstance.character_count
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_enemy.cpp_FUN_00489600
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680
;   engine_console.cpp_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00489730
        ;   Label: core_enemy.cpp_CEnemy_updateVictim_FUN_00489730
    PUSH ESI                            ; 00489731
    PUSH EDI                            ; 00489732
    PUSH EBP                            ; 00489733
    MOV EBP,ESP                         ; 00489734
    SUB ESP,0x50                        ; 00489736
    AND ESP,0xfffffff8                  ; 00489739
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048973c
    MOV EAX,dword ptr [EAX + 0xce58]    ; 0048973f
    MOV dword ptr [ESP],EAX             ; 00489745
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489748
    MOV EDX,dword ptr [EAX + 0xd04c]    ; 0048974b
    TEST EDX,EDX                        ; 00489751
    JZ 0x00489792                       ; 00489753
        ;   XREF to: 00489792 (CONDITIONAL_JUMP)  ; LAB_00489792
    CMP EDX,dword ptr [0x005df358]      ; 00489755 | DAT_005df358
    JNZ 0x00489785                      ; 0048975b
        ;   XREF to: 00489785 (CONDITIONAL_JUMP)  ; LAB_00489785
    MOV dword ptr [EAX + 0xcde4],0x0    ; 0048975d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489767
        ;   Label: LAB_00489767
    MOV dword ptr [EAX + 0xcdd8],0x0    ; 0048976a
    MOV dword ptr [EAX + 0xcde8],0x0    ; 00489774
    MOV ESP,EBP                         ; 0048977e
        ;   Label: LAB_0048977e
    POP EBP                             ; 00489780
    POP EDI                             ; 00489781
    POP ESI                             ; 00489782
    POP EBX                             ; 00489783
    RET                                 ; 00489784
    MOV EAX,EDX                         ; 00489785
        ;   Label: LAB_00489785
    MOV EDX,dword ptr [EBP + 0x14]      ; 00489787
    MOV dword ptr [EDX + 0xcde4],EAX    ; 0048978a
    JMP 0x00489767                      ; 00489790
        ;   XREF to: 00489767 (UNCONDITIONAL_JUMP)  ; LAB_00489767
    MOV EAX,[0x005fe9dc]                ; 00489792 | g_CGamePtr
        ;   Label: LAB_00489792
    CMP dword ptr [EAX + 0x1f8],0x0     ; 00489797 | g_CGameInstance.field456_0x1f8
    JNZ 0x004897a9                      ; 0048979e
        ;   XREF to: 004897a9 (CONDITIONAL_JUMP)  ; LAB_004897a9
    CMP dword ptr [EAX + 0x254],0x0     ; 004897a0 | g_CGameInstance.field548_0x254
    JNZ 0x004897d1                      ; 004897a7
        ;   XREF to: 004897d1 (CONDITIONAL_JUMP)  ; LAB_004897d1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004897a9
        ;   Label: LAB_004897a9
    MOV dword ptr [EAX + 0xcdd8],0x0    ; 004897ac
    MOV dword ptr [EAX + 0xcde8],0x0    ; 004897b6
    MOV dword ptr [EAX + 0xcde4],0x0    ; 004897c0
    MOV ESP,EBP                         ; 004897ca
    POP EBP                             ; 004897cc
    POP EDI                             ; 004897cd
    POP ESI                             ; 004897ce
    POP EBX                             ; 004897cf
    RET                                 ; 004897d0
    PUSH 0x5bdc7f                       ; 004897d1 | s_Capture_005bdc7e+1
        ;   Label: LAB_004897d1
    MOV ESI,dword ptr [0x005fba60]      ; 004897d6 | DAT_005fba60
    PUSH ESI                            ; 004897dc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 004897dd
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004897e2
    TEST EAX,EAX                        ; 004897e5
    JNZ 0x004897a9                      ; 004897e7
        ;   XREF to: 004897a9 (CONDITIONAL_JUMP)  ; LAB_004897a9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004897e9
    FLD float ptr [EAX + 0xcde8]        ; 004897ec
    FSUB float ptr [EBP + 0x18]         ; 004897f2
    FST float ptr [EAX + 0xcde8]        ; 004897f5
    FLDZ                                ; 004897fb
    FCOMPP                              ; 004897fd
    FNSTSW AX                           ; 004897ff
    SAHF                                ; 00489801
    JNC 0x00489855                      ; 00489802
        ;   XREF to: 00489855 (CONDITIONAL_JUMP)  ; LAB_00489855
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489804
    MOV ESI,dword ptr [EAX + 0xcde4]    ; 00489807
    TEST ESI,ESI                        ; 0048980d
    JZ 0x0048977e                       ; 0048980f
        ;   XREF to: 0048977e (CONDITIONAL_JUMP)  ; LAB_0048977e
    PUSH ESI                            ; 00489815
    MOV EDX,dword ptr [ESI + 0x154]     ; 00489816
    CALL dword ptr [EDX + 0x10c]        ; 0048981c
    ADD ESP,0x4                         ; 00489822
    TEST EAX,EAX                        ; 00489825
    JZ 0x0048977e                       ; 00489827
        ;   XREF to: 0048977e (CONDITIONAL_JUMP)  ; LAB_0048977e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048982d
    MOV dword ptr [EAX + 0xcde8],0x0    ; 00489830
    MOV dword ptr [EAX + 0xcdd8],0x0    ; 0048983a
    MOV dword ptr [EAX + 0xcde4],0x0    ; 00489844
    MOV ESP,EBP                         ; 0048984e
    POP EBP                             ; 00489850
    POP EDI                             ; 00489851
    POP ESI                             ; 00489852
    POP EBX                             ; 00489853
    RET                                 ; 00489854
    PUSH 0x3fc00000                     ; 00489855
        ;   Label: LAB_00489855
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048985a
    PUSH 0x3f000000                     ; 0048985d
    MOV dword ptr [EAX + 0xcdd8],0x0    ; 00489862
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0048986c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00489871
    FLD float ptr [ESP + 0x54]          ; 00489875
    ADD ESP,0x8                         ; 00489879
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048987c
    XOR EDI,EDI                         ; 0048987f
    FLD float ptr [EAX + 0xcdec]        ; 00489881
    FMUL ST0                            ; 00489887
    MOV dword ptr [ESP + 0x44],EDI      ; 00489889
    FXCH                                ; 0048988d
    FSTP float ptr [EAX + 0xcde8]       ; 0048988f
    MOV EDX,dword ptr [EAX + 0xcde4]    ; 00489895
    FSTP float ptr [ESP + 0x2c]         ; 0048989b
    TEST EDX,EDX                        ; 0048989f
    JZ 0x004899c6                       ; 004898a1
        ;   XREF to: 004899c6 (CONDITIONAL_JUMP)  ; LAB_004899c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 004898a7
        ;   Label: LAB_004898a7
    ADD EAX,0x20                        ; 004898aa
    XOR ECX,ECX                         ; 004898ad
    MOV dword ptr [ESP + 0x34],EAX      ; 004898af
    MOV EAX,dword ptr [ESP + 0x44]      ; 004898b3
    MOV dword ptr [ESP + 0x38],ECX      ; 004898b7
    SHL EAX,0x2                         ; 004898bb
    MOV dword ptr [ESP + 0x40],ECX      ; 004898be
    MOV dword ptr [ESP + 0x3c],EAX      ; 004898c2
    MOV EAX,[0x00603b28]                ; 004898c6 | g_CDemonSetPtr
        ;   Label: LAB_004898c6
    MOV EDX,dword ptr [ESP + 0x38]      ; 004898cb
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 004898cf | g_CDemonSetInstance.character_count
    JL 0x004899ef                       ; 004898d5
        ;   XREF to: 004899ef (CONDITIONAL_JUMP)  ; LAB_004899ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 004898db
    MOV EDI,dword ptr [EBP + 0x14]      ; 004898de
    ADD EAX,0x20                        ; 004898e1
    MOV EDI,dword ptr [EDI + 0xcde4]    ; 004898e4
    MOV dword ptr [ESP + 0x28],EAX      ; 004898ea
    MOV dword ptr [EAX + 0xcdc4],0x0    ; 004898ee
    MOV ESI,0x60ad78ec                  ; 004898f8
        ;   Label: LAB_004898f8
    MOV EBX,0xffffffff                  ; 004898fd
    MOV EAX,dword ptr [ESP + 0x44]      ; 00489902
    XOR EDX,EDX                         ; 00489906
    MOV dword ptr [ESP + 0x48],ESI      ; 00489908
    TEST EAX,EAX                        ; 0048990c
    JLE 0x00489939                      ; 0048990e
        ;   XREF to: 00489939 (CONDITIONAL_JUMP)  ; LAB_00489939
    MOV ESI,dword ptr [ESP + 0x44]      ; 00489910
    XOR ECX,ECX                         ; 00489914
    FLD float ptr [ECX + 0x1c5db8c]     ; 00489916 | DAT_01c5db8c
        ;   Label: LAB_00489916
    FCOMP float ptr [ESP + 0x48]        ; 0048991c
    FNSTSW AX                           ; 00489920
    SAHF                                ; 00489922
    JNC 0x00489931                      ; 00489923
        ;   XREF to: 00489931 (CONDITIONAL_JUMP)  ; LAB_00489931
    MOV EAX,dword ptr [ECX + 0x1c5db8c] ; 00489925 | DAT_01c5db8c
    MOV EBX,EDX                         ; 0048992b
    MOV dword ptr [ESP + 0x48],EAX      ; 0048992d
    INC EDX                             ; 00489931
        ;   Label: LAB_00489931
    ADD ECX,0x4                         ; 00489932
    CMP EDX,ESI                         ; 00489935
    JL 0x00489916                       ; 00489937
        ;   XREF to: 00489916 (CONDITIONAL_JUMP)  ; LAB_00489916
    TEST EBX,EBX                        ; 00489939
        ;   Label: LAB_00489939
    JL 0x0048977e                       ; 0048993b
        ;   XREF to: 0048977e (CONDITIONAL_JUMP)  ; LAB_0048977e
    MOV ESI,dword ptr [EBX*0x4 + 0x1c5bc4c] ; 00489941 | DAT_01c5bc4c | g_CEnemyClassInfo.name_hash
    PUSH ESI                            ; 00489948
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489949
    PUSH EAX                            ; 0048994c
    CALL core_enemy.cpp_FUN_00489600    ; 0048994d
        ;   XREF to: 00489600 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489600()
    ADD ESP,0x8                         ; 00489952
    TEST EAX,EAX                        ; 00489955
    JNZ 0x00489b17                      ; 00489957
        ;   XREF to: 00489b17 (CONDITIONAL_JUMP)  ; LAB_00489b17
    MOV EAX,dword ptr [EBP + 0x14]      ; 0048995d
    MOV EDX,dword ptr [EAX + 0xd050]    ; 00489960
    TEST EDX,EDX                        ; 00489966
    JZ 0x00489b3c                       ; 00489968
        ;   XREF to: 00489b3c (CONDITIONAL_JUMP)  ; LAB_00489b3c
    PUSH ESI                            ; 0048996e
        ;   Label: LAB_0048996e
    MOV EAX,dword ptr [ESI + 0x154]     ; 0048996f
    CALL dword ptr [EAX + 0xc4]         ; 00489975
    ADD ESP,0x4                         ; 0048997b
    TEST EAX,EAX                        ; 0048997e
    JZ 0x004899a5                       ; 00489980
        ;   XREF to: 004899a5 (CONDITIONAL_JUMP)  ; LAB_004899a5
    MOV EDX,dword ptr [EBP + 0x14]      ; 00489982
    MOV ECX,dword ptr [EDX + 0x6c]      ; 00489985
    PUSH ECX                            ; 00489988
    LEA EDX,[ESP + 0x14]                ; 00489989
    PUSH EDX                            ; 0048998d
    MOV EDX,dword ptr [ESP + 0x30]      ; 0048998e
    PUSH EDX                            ; 00489992
    PUSH EAX                            ; 00489993
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680 ; 00489994
        ;   XREF to: 0050c680 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_0050c680(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 00489999
    CMP EAX,0x1                         ; 0048999c
    JZ 0x00489b4f                       ; 0048999f
        ;   XREF to: 00489b4f (CONDITIONAL_JUMP)  ; LAB_00489b4f
    MOV dword ptr [EBX*0x4 + 0x1c5db8c],0x7149f2ca ; 004899a5 | DAT_01c5db8c
        ;   Label: LAB_004899a5
    CMP ESI,EDI                         ; 004899b0
    JNZ 0x004898f8                      ; 004899b2
        ;   XREF to: 004898f8 (CONDITIONAL_JUMP)  ; LAB_004898f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004899b8
    MOV dword ptr [EAX + 0xcde4],EDI    ; 004899bb
    JMP 0x004898f8                      ; 004899c1
        ;   XREF to: 004898f8 (UNCONDITIONAL_JUMP)  ; LAB_004898f8
    FLD float ptr [EAX + 0xcddc]        ; 004899c6
        ;   Label: LAB_004899c6
    FCOMP float ptr [EAX + 0xcdec]      ; 004899cc
    FNSTSW AX                           ; 004899d2
    SAHF                                ; 004899d4
    JNC 0x004898a7                      ; 004899d5
        ;   XREF to: 004898a7 (CONDITIONAL_JUMP)  ; LAB_004898a7
    MOV EAX,dword ptr [EBP + 0x14]      ; 004899db
    FLD float ptr [EAX + 0xcddc]        ; 004899de
    FMUL ST0                            ; 004899e4
    FSTP float ptr [ESP + 0x2c]         ; 004899e6
    JMP 0x004898a7                      ; 004899ea
        ;   XREF to: 004898a7 (UNCONDITIONAL_JUMP)  ; LAB_004898a7
    MOV EBX,dword ptr [ESP + 0x40]      ; 004899ef
        ;   Label: LAB_004899ef
    MOV ESI,dword ptr [EBP + 0x14]      ; 004899f3
    ADD EAX,EBX                         ; 004899f6
    PUSH ESI                            ; 004899f8
    MOV EBX,dword ptr [EAX + 0x14f0ac]  ; 004899f9
    PUSH EBX                            ; 004899ff
    MOV EAX,dword ptr [EBX + 0x154]     ; 00489a00
    CALL dword ptr [EAX + 0xe4]         ; 00489a06
    ADD ESP,0x8                         ; 00489a0c
    TEST EAX,EAX                        ; 00489a0f
    JZ 0x00489afe                       ; 00489a11
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    PUSH EBX                            ; 00489a17
    MOV EAX,dword ptr [EBX + 0x154]     ; 00489a18
    CALL dword ptr [EAX + 0x10c]        ; 00489a1e
    ADD ESP,0x4                         ; 00489a24
    TEST EAX,EAX                        ; 00489a27
    JNZ 0x00489afe                      ; 00489a29
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    PUSH EBX                            ; 00489a2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00489a30
    CALL dword ptr [EAX + 0x70]         ; 00489a36
    ADD ESP,0x4                         ; 00489a39
    TEST EAX,EAX                        ; 00489a3c
    JNZ 0x00489afe                      ; 00489a3e
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    FLD float ptr [EBX + 0x27b4]        ; 00489a44
    FLDZ                                ; 00489a4a
    FCOMPP                              ; 00489a4c
    FNSTSW AX                           ; 00489a4e
    SAHF                                ; 00489a50
    JC 0x00489afe                       ; 00489a51
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    CMP EBX,ESI                         ; 00489a57
    JZ 0x00489afe                       ; 00489a59
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    MOV EDX,dword ptr [ESP + 0x34]      ; 00489a5f
    LEA EAX,[EBX + 0x20]                ; 00489a63
    LEA EDI,[ESP + 0x4]                 ; 00489a66
    LEA ESI,[ESP + 0x1c]                ; 00489a6a
    FLD float ptr [EAX]                 ; 00489a6e
    FLD float ptr [EAX + 0x4]           ; 00489a70
    FLD float ptr [EAX + 0x8]           ; 00489a73
    FXCH ST2                            ; 00489a76
    FSUB float ptr [EDX]                ; 00489a78
    FXCH                                ; 00489a7a
    FSUB float ptr [EDX + 0x4]          ; 00489a7c
    FXCH ST2                            ; 00489a7f
    FSUB float ptr [EDX + 0x8]          ; 00489a81
    FXCH                                ; 00489a84
    FSTP float ptr [ESP + 0x1c]         ; 00489a86
    FXCH                                ; 00489a8a
    FSTP float ptr [ESP + 0x20]         ; 00489a8c
    FSTP float ptr [ESP + 0x24]         ; 00489a90
    MOVSD ES:EDI,ESI                    ; 00489a94
    MOVSD ES:EDI,ESI                    ; 00489a95
    MOVSD ES:EDI,ESI                    ; 00489a96
    FLD float ptr [ESP + 0x8]           ; 00489a97
    FABS                                ; 00489a9b
    FLD float ptr [ESP]                 ; 00489a9d
    FCOMPP                              ; 00489aa0
    FNSTSW AX                           ; 00489aa2
    SAHF                                ; 00489aa4
    JC 0x00489afe                       ; 00489aa5
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    FLD float ptr [ESP + 0x8]           ; 00489aa7
    FMUL float ptr [0x005bdc9b]         ; 00489aab | DAT_005bdc9b
    FST float ptr [ESP + 0x8]           ; 00489ab1
    FMUL float ptr [ESP + 0x8]          ; 00489ab5
    FLD float ptr [ESP + 0x4]           ; 00489ab9
    FMUL ST0                            ; 00489abd
    FADDP                               ; 00489abf
    FLD float ptr [ESP + 0xc]           ; 00489ac1
    FMUL ST0                            ; 00489ac5
    FADDP                               ; 00489ac7
    FST float ptr [ESP + 0x30]          ; 00489ac9
    FCOMP float ptr [ESP + 0x2c]        ; 00489acd
    FNSTSW AX                           ; 00489ad1
    SAHF                                ; 00489ad3
    JA 0x00489afe                       ; 00489ad4
        ;   XREF to: 00489afe (CONDITIONAL_JUMP)  ; LAB_00489afe
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00489ad6
    MOV EDX,dword ptr [ESP + 0x3c]      ; 00489ada
    MOV dword ptr [EAX + 0x1c5bc4c],EBX ; 00489ade | DAT_01c5bc4c
    MOV EAX,dword ptr [ESP + 0x30]      ; 00489ae4
    MOV dword ptr [EDX + 0x1c5db8c],EAX ; 00489ae8 | DAT_01c5db8c
    LEA EAX,[EDX + 0x4]                 ; 00489aee
    MOV EDX,dword ptr [ESP + 0x44]      ; 00489af1
    INC EDX                             ; 00489af5
    MOV dword ptr [ESP + 0x3c],EAX      ; 00489af6
    MOV dword ptr [ESP + 0x44],EDX      ; 00489afa
    MOV EBX,dword ptr [ESP + 0x38]      ; 00489afe
        ;   Label: LAB_00489afe
    MOV ECX,dword ptr [ESP + 0x40]      ; 00489b02
    INC EBX                             ; 00489b06
    ADD ECX,0x4                         ; 00489b07
    MOV dword ptr [ESP + 0x38],EBX      ; 00489b0a
    MOV dword ptr [ESP + 0x40],ECX      ; 00489b0e
    JMP 0x004898c6                      ; 00489b12
        ;   XREF to: 004898c6 (UNCONDITIONAL_JUMP)  ; LAB_004898c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489b17
        ;   Label: LAB_00489b17
    PUSH EAX                            ; 00489b1a
    PUSH 0x5bdc87                       ; 00489b1b | = "%s can see hero\n"
    MOV dword ptr [EAX + 0xcde4],ESI    ; 00489b20
    MOV ESI,dword ptr [0x005f1690]      ; 00489b26 | g_CConsolePtr
    PUSH ESI                            ; 00489b2c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 00489b2d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    ADD ESP,0xc                         ; 00489b32
    MOV ESP,EBP                         ; 00489b35
    POP EBP                             ; 00489b37
    POP EDI                             ; 00489b38
    POP ESI                             ; 00489b39
    POP EBX                             ; 00489b3a
    RET                                 ; 00489b3b
    JNZ 0x004899a5                      ; 00489b3c
        ;   XREF to: 004899a5 (CONDITIONAL_JUMP)  ; LAB_004899a5
        ;   Label: LAB_00489b3c
    CMP ESI,EDI                         ; 00489b42
    JZ 0x0048996e                       ; 00489b44
        ;   XREF to: 0048996e (CONDITIONAL_JUMP)  ; LAB_0048996e
    JMP 0x004899a5                      ; 00489b4a
        ;   XREF to: 004899a5 (UNCONDITIONAL_JUMP)  ; LAB_004899a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00489b4f
        ;   Label: LAB_00489b4f
    MOV dword ptr [EAX + 0xcde4],ESI    ; 00489b52
    MOV ESP,EBP                         ; 00489b58
    POP EBP                             ; 00489b5a
    POP EDI                             ; 00489b5b
    POP ESI                             ; 00489b5c
    POP EBX                             ; 00489b5d
    RET                                 ; 00489b5e

