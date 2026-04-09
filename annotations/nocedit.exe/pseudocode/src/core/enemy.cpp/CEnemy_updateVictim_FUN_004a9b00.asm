; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_updateVictim_FUN_004a9b00(CEnemy *this_ptr,float delta_time)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CVector3f        Stack[-0x48]:12  CStack_48
; CVector3f *      Stack[-0x3c]:4  local_3c
; float            Stack[-0x38]:4  local_38
; CCharacter *     Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  fStack_30
; int              Stack[-0x2c]:4  local_2c
; CLocation *      Stack[-0x28]:4  local_28
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; CCharacter *     Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_Capture_006243ba
;   TerminatedCString s_s_can_see_hero_006243c2
;   float FLOAT_006243d6 = 3
;   float FLOAT_0065d7c8 = NaN
;   CConsole* g_CConsolePtr = 0083b1a4
;   CEventList* g_CEventListPtr = 02d05310
;   CGame* g_CGamePtr = 02d81a9c
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_CConsoleInstance
;   undefined4 g_CEnemyClassInfo.name_hash
;   CDemonActor*[2000] g_EnemyVictimCandidates
;   undefined4 g_EnemyVictimCandidates[1]
;   undefined4 g_EnemyVictimCandidates[1999]
;   float[2000] g_EnemyVictimCandidateDistances
;   undefined4 g_EnemyVictimCandidateDistances[1]
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_enemy.cpp_CEnemy_canSeeTarget_FUN_004a9a50
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9b00
        ;   Label: core_enemy.cpp_CEnemy_updateVictim_FUN_004a9b00
    PUSH ESI                            ; 004a9b01
    PUSH EDI                            ; 004a9b02
    PUSH EBP                            ; 004a9b03
    MOV EBP,ESP                         ; 004a9b04
    SUB ESP,0x48                        ; 004a9b06
    AND ESP,0xfffffff8                  ; 004a9b09
    MOV EDI,dword ptr [EBP + 0x14]      ; 004a9b0c
    MOV EAX,dword ptr [EDI + 0xbeb0]    ; 004a9b0f
    MOV EDX,dword ptr [EDI + 0xbeb4]    ; 004a9b15
    MOV dword ptr [ESP],EAX             ; 004a9b1b
    TEST EDX,EDX                        ; 004a9b1e
    JZ 0x004a9b57                       ; 004a9b20
        ;   XREF to: 004a9b57 (CONDITIONAL_JUMP)  ; LAB_004a9b57
    CMP EDX,dword ptr [0x0065d7c8]      ; 004a9b22 | FLOAT_0065d7c8
    JNZ 0x004a9b4f                      ; 004a9b28
        ;   XREF to: 004a9b4f (CONDITIONAL_JUMP)  ; LAB_004a9b4f
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9b2a
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9b34
        ;   Label: LAB_004a9b34
    MOV dword ptr [EDI + 0xbe40],0x0    ; 004a9b3e
    MOV ESP,EBP                         ; 004a9b48
        ;   Label: LAB_004a9b48
    POP EBP                             ; 004a9b4a
    POP EDI                             ; 004a9b4b
    POP ESI                             ; 004a9b4c
    POP EBX                             ; 004a9b4d
    RET                                 ; 004a9b4e
    MOV dword ptr [EDI + 0xbe3c],EDX    ; 004a9b4f
        ;   Label: LAB_004a9b4f
    JMP 0x004a9b34                      ; 004a9b55
        ;   XREF to: 004a9b34 (UNCONDITIONAL_JUMP)  ; LAB_004a9b34
    MOV EAX,[0x0067b654]                ; 004a9b57 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_004a9b57
    CMP dword ptr [EAX + 0x1d4],0x0     ; 004a9b5c | g_CGameInstance.freeze_enemies_enabled
    JNZ 0x004a9b6e                      ; 004a9b63
        ;   XREF to: 004a9b6e (CONDITIONAL_JUMP)  ; LAB_004a9b6e
    CMP dword ptr [EAX + 0x230],0x0     ; 004a9b65 | g_CGameInstance.allow_enemy_attack_flag
    JNZ 0x004a9b93                      ; 004a9b6c
        ;   XREF to: 004a9b93 (CONDITIONAL_JUMP)  ; LAB_004a9b93
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9b6e
        ;   Label: LAB_004a9b6e
    MOV dword ptr [EDI + 0xbe40],0x0    ; 004a9b78
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9b82
    MOV ESP,EBP                         ; 004a9b8c
    POP EBP                             ; 004a9b8e
    POP EDI                             ; 004a9b8f
    POP ESI                             ; 004a9b90
    POP EBX                             ; 004a9b91
    RET                                 ; 004a9b92
    PUSH 0x6243ba                       ; 004a9b93 | = "Capture"
        ;   Label: LAB_004a9b93
    MOV ESI,dword ptr [0x006793d0]      ; 004a9b98 | g_CEventListPtr
    PUSH ESI                            ; 004a9b9e | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 004a9b9f
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004a9ba4
    TEST EAX,EAX                        ; 004a9ba7
    JNZ 0x004a9b6e                      ; 004a9ba9
        ;   XREF to: 004a9b6e (CONDITIONAL_JUMP)  ; LAB_004a9b6e
    FLD float ptr [EDI + 0xbe40]        ; 004a9bab
    FSUB float ptr [EBP + 0x18]         ; 004a9bb1
    FST float ptr [EDI + 0xbe40]        ; 004a9bb4
    FLDZ                                ; 004a9bba
    FCOMPP                              ; 004a9bbc
    FNSTSW AX                           ; 004a9bbe
    SAHF                                ; 004a9bc0
    JNC 0x004a9c0e                      ; 004a9bc1
        ;   XREF to: 004a9c0e (CONDITIONAL_JUMP)  ; LAB_004a9c0e
    MOV EBX,dword ptr [EDI + 0xbe3c]    ; 004a9bc3
    TEST EBX,EBX                        ; 004a9bc9
    JZ 0x004a9b48                       ; 004a9bcb
        ;   XREF to: 004a9b48 (CONDITIONAL_JUMP)  ; LAB_004a9b48
    PUSH EBX                            ; 004a9bd1
    MOV EDX,dword ptr [EBX + 0x154]     ; 004a9bd2
    CALL dword ptr [EDX + 0x120]        ; 004a9bd8
    ADD ESP,0x4                         ; 004a9bde
    TEST EAX,EAX                        ; 004a9be1
    JZ 0x004a9b48                       ; 004a9be3
        ;   XREF to: 004a9b48 (CONDITIONAL_JUMP)  ; LAB_004a9b48
    MOV dword ptr [EDI + 0xbe40],0x0    ; 004a9be9
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9bf3
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9bfd
    MOV ESP,EBP                         ; 004a9c07
    POP EBP                             ; 004a9c09
    POP EDI                             ; 004a9c0a
    POP ESI                             ; 004a9c0b
    POP EBX                             ; 004a9c0c
    RET                                 ; 004a9c0d
    PUSH 0x3fc00000                     ; 004a9c0e
        ;   Label: LAB_004a9c0e
    PUSH 0x3f000000                     ; 004a9c13
    MOV dword ptr [EDI + 0xbe30],0x0    ; 004a9c18
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 004a9c22
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    FLD float ptr [EDI + 0xbe44]        ; 004a9c27
    FMUL ST0                            ; 004a9c2d
    MOV dword ptr [ESP + 0x4c],EAX      ; 004a9c2f
    XOR ESI,ESI                         ; 004a9c33
    FLD float ptr [ESP + 0x4c]          ; 004a9c35
    MOV EAX,dword ptr [EDI + 0xbe3c]    ; 004a9c39
    ADD ESP,0x8                         ; 004a9c3f
    FSTP float ptr [EDI + 0xbe40]       ; 004a9c42
    FSTP float ptr [ESP + 0x20]         ; 004a9c48
    TEST EAX,EAX                        ; 004a9c4c
    JZ 0x004a9d70                       ; 004a9c4e
        ;   XREF to: 004a9d70 (CONDITIONAL_JUMP)  ; LAB_004a9d70
    XOR EDX,EDX                         ; 004a9c54
        ;   Label: LAB_004a9c54
    LEA EAX,[EDI + 0x20]                ; 004a9c56
    MOV dword ptr [ESP + 0x34],EDX      ; 004a9c59
    MOV dword ptr [ESP + 0x30],EAX      ; 004a9c5d
    LEA EAX,[ESI*0x4 + 0x0]             ; 004a9c61
    MOV dword ptr [ESP + 0x2c],EDX      ; 004a9c68
    MOV dword ptr [ESP + 0x38],EAX      ; 004a9c6c
    MOV EAX,[0x006810c8]                ; 004a9c70 | g_CDemonSetPtr
        ;   Label: LAB_004a9c70
    MOV EDX,dword ptr [ESP + 0x34]      ; 004a9c75
    CMP EDX,dword ptr [EAX + 0x14f098]  ; 004a9c79 | g_CDemonSetInstance.character_count
    JL 0x004a9d96                       ; 004a9c7f
        ;   XREF to: 004a9d96 (CONDITIONAL_JUMP)  ; LAB_004a9d96
    MOV EAX,dword ptr [EDI + 0xbe3c]    ; 004a9c85
    MOV dword ptr [ESP + 0x24],EAX      ; 004a9c8b
    LEA EAX,[EDI + 0x20]                ; 004a9c8f
    MOV dword ptr [EDI + 0xbe3c],0x0    ; 004a9c92
    MOV dword ptr [ESP + 0x1c],EAX      ; 004a9c9c
    MOV EBX,0x60ad78ec                  ; 004a9ca0
        ;   Label: LAB_004a9ca0
    XOR EDX,EDX                         ; 004a9ca5
    MOV dword ptr [ESP + 0x40],EBX      ; 004a9ca7
    MOV EBX,0xffffffff                  ; 004a9cab
    TEST ESI,ESI                        ; 004a9cb0
    JLE 0x004a9cd9                      ; 004a9cb2
        ;   XREF to: 004a9cd9 (CONDITIONAL_JUMP)  ; LAB_004a9cd9
    XOR ECX,ECX                         ; 004a9cb4
    FLD float ptr [ECX + 0x2cf4b34]     ; 004a9cb6 | g_EnemyVictimCandidateDistances | g_EnemyVictimCandidateDistances[1]
        ;   Label: LAB_004a9cb6
    FCOMP float ptr [ESP + 0x40]        ; 004a9cbc
    FNSTSW AX                           ; 004a9cc0
    SAHF                                ; 004a9cc2
    JNC 0x004a9cd1                      ; 004a9cc3
        ;   XREF to: 004a9cd1 (CONDITIONAL_JUMP)  ; LAB_004a9cd1
    MOV EAX,dword ptr [ECX + 0x2cf4b34] ; 004a9cc5 | g_EnemyVictimCandidateDistances | g_EnemyVictimCandidateDistances[1]
    MOV EBX,EDX                         ; 004a9ccb
    MOV dword ptr [ESP + 0x40],EAX      ; 004a9ccd
    INC EDX                             ; 004a9cd1
        ;   Label: LAB_004a9cd1
    ADD ECX,0x4                         ; 004a9cd2
    CMP EDX,ESI                         ; 004a9cd5
    JL 0x004a9cb6                       ; 004a9cd7
        ;   XREF to: 004a9cb6 (CONDITIONAL_JUMP)  ; LAB_004a9cb6
    TEST EBX,EBX                        ; 004a9cd9
        ;   Label: LAB_004a9cd9
    JL 0x004a9b48                       ; 004a9cdb
        ;   XREF to: 004a9b48 (CONDITIONAL_JUMP)  ; LAB_004a9b48
    MOV EAX,dword ptr [EBX*0x4 + 0x2cf2bf4] ; 004a9ce1 | g_EnemyVictimCandidates | g_CEnemyClassInfo.name_hash | g_EnemyVictimCandidates[1]
    PUSH EAX                            ; 004a9ce8
    PUSH EDI                            ; 004a9ce9
    MOV dword ptr [ESP + 0x44],EAX      ; 004a9cea
    CALL core_enemy.cpp_CEnemy_canSeeTarget_FUN_004a9a50 ; 004a9cee
        ;   XREF to: 004a9a50 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_canSeeTarget_FUN_004a9a50(CEnemy * this_ptr, CDemonActor * target)
    ADD ESP,0x8                         ; 004a9cf3
    TEST EAX,EAX                        ; 004a9cf6
    JNZ 0x004a9e94                      ; 004a9cf8
        ;   XREF to: 004a9e94 (CONDITIONAL_JUMP)  ; LAB_004a9e94
    CMP dword ptr [EDI + 0xbeb8],0x0    ; 004a9cfe
    JZ 0x004a9eba                       ; 004a9d05
        ;   XREF to: 004a9eba (CONDITIONAL_JUMP)  ; LAB_004a9eba
    MOV ECX,dword ptr [ESP + 0x3c]      ; 004a9d0b
        ;   Label: LAB_004a9d0b
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a9d0f
    PUSH ECX                            ; 004a9d13
    MOV EAX,dword ptr [EAX + 0x154]     ; 004a9d14
    CALL dword ptr [EAX + 0xbc]         ; 004a9d1a
    ADD ESP,0x4                         ; 004a9d20
    TEST EAX,EAX                        ; 004a9d23
    JZ 0x004a9d47                       ; 004a9d25
        ;   XREF to: 004a9d47 (CONDITIONAL_JUMP)  ; LAB_004a9d47
    MOV EDX,dword ptr [EDI + 0x6c]      ; 004a9d27
    PUSH EDX                            ; 004a9d2a
    LEA EDX,[ESP + 0x14]                ; 004a9d2b
    PUSH EDX                            ; 004a9d2f
    MOV ECX,dword ptr [ESP + 0x24]      ; 004a9d30
    PUSH ECX                            ; 004a9d34
    PUSH EAX                            ; 004a9d35
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 004a9d36
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 004a9d3b
    CMP EAX,0x1                         ; 004a9d3e
    JZ 0x004a9eda                       ; 004a9d41
        ;   XREF to: 004a9eda (CONDITIONAL_JUMP)  ; LAB_004a9eda
    MOV EAX,0x7149f2ca                  ; 004a9d47
        ;   Label: LAB_004a9d47
    MOV EDX,dword ptr [ESP + 0x24]      ; 004a9d4c
    MOV dword ptr [EBX*0x4 + 0x2cf4b34],EAX ; 004a9d50 | g_EnemyVictimCandidates[1999]
    CMP EDX,dword ptr [ESP + 0x3c]      ; 004a9d57
    JNZ 0x004a9ca0                      ; 004a9d5b
        ;   XREF to: 004a9ca0 (CONDITIONAL_JUMP)  ; LAB_004a9ca0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a9d61
    MOV dword ptr [EDI + 0xbe3c],EAX    ; 004a9d65
    JMP 0x004a9ca0                      ; 004a9d6b
        ;   XREF to: 004a9ca0 (UNCONDITIONAL_JUMP)  ; LAB_004a9ca0
    FLD float ptr [EDI + 0xbe34]        ; 004a9d70
        ;   Label: LAB_004a9d70
    FCOMP float ptr [EDI + 0xbe44]      ; 004a9d76
    FNSTSW AX                           ; 004a9d7c
    SAHF                                ; 004a9d7e
    JNC 0x004a9c54                      ; 004a9d7f
        ;   XREF to: 004a9c54 (CONDITIONAL_JUMP)  ; LAB_004a9c54
    FLD float ptr [EDI + 0xbe34]        ; 004a9d85
    FMUL ST0                            ; 004a9d8b
    FSTP float ptr [ESP + 0x20]         ; 004a9d8d
    JMP 0x004a9c54                      ; 004a9d91
        ;   XREF to: 004a9c54 (UNCONDITIONAL_JUMP)  ; LAB_004a9c54
    ADD EAX,dword ptr [ESP + 0x2c]      ; 004a9d96
        ;   Label: LAB_004a9d96
    PUSH EDI                            ; 004a9d9a
    MOV EBX,dword ptr [EAX + 0x14f09c]  ; 004a9d9b | g_CDemonSetInstance.characters[0]
    PUSH EBX                            ; 004a9da1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9da2
    CALL dword ptr [EAX + 0xf8]         ; 004a9da8
    ADD ESP,0x8                         ; 004a9dae
    TEST EAX,EAX                        ; 004a9db1
    JZ 0x004a9e7b                       ; 004a9db3
        ;   XREF to: 004a9e7b (CONDITIONAL_JUMP)  ; LAB_004a9e7b
    PUSH EBX                            ; 004a9db9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9dba
    CALL dword ptr [EAX + 0x120]        ; 004a9dc0
    ADD ESP,0x4                         ; 004a9dc6
    TEST EAX,EAX                        ; 004a9dc9
    JNZ 0x004a9e7b                      ; 004a9dcb
        ;   XREF to: 004a9e7b (CONDITIONAL_JUMP)  ; LAB_004a9e7b
    PUSH EBX                            ; 004a9dd1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004a9dd2
    CALL dword ptr [EAX + 0x68]         ; 004a9dd8
    ADD ESP,0x4                         ; 004a9ddb
    TEST EAX,EAX                        ; 004a9dde
    JNZ 0x004a9e7b                      ; 004a9de0
        ;   XREF to: 004a9e7b (CONDITIONAL_JUMP)  ; LAB_004a9e7b
    FLD float ptr [EBX + 0x2618]        ; 004a9de6
    FLDZ                                ; 004a9dec
    FCOMPP                              ; 004a9dee
    FNSTSW AX                           ; 004a9df0
    SAHF                                ; 004a9df2
    JC 0x004a9e7b                       ; 004a9df3
        ;   XREF to: 004a9e7b (CONDITIONAL_JUMP)  ; LAB_004a9e7b
    LEA EAX,[EBX + 0x20]                ; 004a9df9
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a9dfc
    FLD float ptr [EAX]                 ; 004a9e00
    FSUB float ptr [EDX]                ; 004a9e02
    FSTP float ptr [ESP + 0x4]          ; 004a9e04
    FLD float ptr [EAX + 0x4]           ; 004a9e08
    FSUB float ptr [EDX + 0x4]          ; 004a9e0b
    FST float ptr [ESP + 0x8]           ; 004a9e0e
    FLD float ptr [EAX + 0x8]           ; 004a9e12
    FXCH                                ; 004a9e15
    FABS                                ; 004a9e17
    FXCH                                ; 004a9e19
    FSUB float ptr [EDX + 0x8]          ; 004a9e1b
    FSTP float ptr [ESP + 0xc]          ; 004a9e1e
    FLD float ptr [ESP]                 ; 004a9e22
    FCOMPP                              ; 004a9e25
    FNSTSW AX                           ; 004a9e27
    SAHF                                ; 004a9e29
    JC 0x004a9e7b                       ; 004a9e2a
        ;   XREF to: 004a9e7b (CONDITIONAL_JUMP)  ; LAB_004a9e7b
    FLD float ptr [ESP + 0x8]           ; 004a9e2c
    FMUL float ptr [0x006243d6]         ; 004a9e30 | FLOAT_006243d6
    FST float ptr [ESP + 0x8]           ; 004a9e36
    FMUL float ptr [ESP + 0x8]          ; 004a9e3a
    FLD float ptr [ESP + 0x4]           ; 004a9e3e
    FMUL ST0                            ; 004a9e42
    FADDP                               ; 004a9e44
    FLD float ptr [ESP + 0xc]           ; 004a9e46
    FMUL ST0                            ; 004a9e4a
    FADDP                               ; 004a9e4c
    FST float ptr [ESP + 0x28]          ; 004a9e4e
    FCOMP float ptr [ESP + 0x20]        ; 004a9e52
    FNSTSW AX                           ; 004a9e56
    SAHF                                ; 004a9e58
    JA 0x004a9e7b                       ; 004a9e59
        ;   XREF to: 004a9e7b (CONDITIONAL_JUMP)  ; LAB_004a9e7b
    MOV EAX,dword ptr [ESP + 0x38]      ; 004a9e5b
    MOV EDX,dword ptr [ESP + 0x38]      ; 004a9e5f
    MOV dword ptr [EAX + 0x2cf2bf4],EBX ; 004a9e63 | g_EnemyVictimCandidates
    MOV EAX,dword ptr [ESP + 0x28]      ; 004a9e69
    MOV dword ptr [EDX + 0x2cf4b34],EAX ; 004a9e6d | g_EnemyVictimCandidateDistances
    LEA EAX,[EDX + 0x4]                 ; 004a9e73
    INC ESI                             ; 004a9e76
    MOV dword ptr [ESP + 0x38],EAX      ; 004a9e77
    MOV ECX,dword ptr [ESP + 0x34]      ; 004a9e7b
        ;   Label: LAB_004a9e7b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004a9e7f
    INC ECX                             ; 004a9e83
    ADD EDX,0x4                         ; 004a9e84
    MOV dword ptr [ESP + 0x34],ECX      ; 004a9e87
    MOV dword ptr [ESP + 0x2c],EDX      ; 004a9e8b
    JMP 0x004a9c70                      ; 004a9e8f
        ;   XREF to: 004a9c70 (UNCONDITIONAL_JUMP)  ; LAB_004a9c70
    PUSH EDI                            ; 004a9e94
        ;   Label: LAB_004a9e94
    PUSH 0x6243c2                       ; 004a9e95 | = "%s can see hero\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 004a9e9a | g_CConsolePtr
    MOV EAX,dword ptr [ESP + 0x44]      ; 004a9ea0
    PUSH ECX                            ; 004a9ea4 | g_CConsoleInstance
    MOV dword ptr [EDI + 0xbe3c],EAX    ; 004a9ea5
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004a9eab
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004a9eb0
    MOV ESP,EBP                         ; 004a9eb3
    POP EBP                             ; 004a9eb5
    POP EDI                             ; 004a9eb6
    POP ESI                             ; 004a9eb7
    POP EBX                             ; 004a9eb8
    RET                                 ; 004a9eb9
    CMP dword ptr [EDI + 0xbeb8],0x0    ; 004a9eba
        ;   Label: LAB_004a9eba
    JNZ 0x004a9d47                      ; 004a9ec1
        ;   XREF to: 004a9d47 (CONDITIONAL_JUMP)  ; LAB_004a9d47
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a9ec7
    CMP EAX,dword ptr [ESP + 0x24]      ; 004a9ecb
    JZ 0x004a9d0b                       ; 004a9ecf
        ;   XREF to: 004a9d0b (CONDITIONAL_JUMP)  ; LAB_004a9d0b
    JMP 0x004a9d47                      ; 004a9ed5
        ;   XREF to: 004a9d47 (UNCONDITIONAL_JUMP)  ; LAB_004a9d47
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004a9eda
        ;   Label: LAB_004a9eda
    MOV dword ptr [EDI + 0xbe3c],EAX    ; 004a9ede
    MOV ESP,EBP                         ; 004a9ee4
    POP EBP                             ; 004a9ee6
    POP EDI                             ; 004a9ee7
    POP ESI                             ; 004a9ee8
    POP EBX                             ; 004a9ee9
    RET                                 ; 004a9eea

