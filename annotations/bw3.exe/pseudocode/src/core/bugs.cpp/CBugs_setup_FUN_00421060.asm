; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bugs_cpp_CBugs_setup_FUN_00421060(CBugs *this_ptr)
;
; Parameters:
; CBugs *          Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005b7729
;   undefined4 DAT_005b772d
;   undefined4 DAT_005b7731
;   undefined4 DAT_005dcbc8
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
;   core_enemy.cpp_CEnemy_setup_FUN_00489110
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00421060
        ;   Label: core_bugs.cpp_CBugs_setup_FUN_00421060
    PUSH ESI                            ; 00421061
    PUSH EDI                            ; 00421062
    PUSH EBP                            ; 00421063
    MOV EBP,ESP                         ; 00421064
    SUB ESP,0x2c                        ; 00421066
    AND ESP,0xfffffff8                  ; 00421069
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042106c
    MOV dword ptr [EAX + 0x38],0x0      ; 0042106f
    PUSH EAX                            ; 00421076
    MOV EDX,dword ptr [EAX + 0x38]      ; 00421077
    MOV dword ptr [EAX + 0x34],EDX      ; 0042107a
    MOV EDX,dword ptr [EAX + 0x34]      ; 0042107d
    MOV dword ptr [EAX + 0x30],EDX      ; 00421080
    CALL core_enemy.cpp_CEnemy_setup_FUN_00489110 ; 00421083
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_setup_FUN_00489110(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00421088
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042108b
    MOV dword ptr [EAX + 0x1345c],0x1   ; 0042108e
    MOV ECX,dword ptr [EAX + 0x1345c]   ; 00421098
    XOR EBX,EBX                         ; 0042109e
    TEST ECX,ECX                        ; 004210a0
    JLE 0x00421143                      ; 004210a2
        ;   XREF to: 00421143 (CONDITIONAL_JUMP)  ; LAB_00421143
    ADD EAX,0x13460                     ; 004210a8
    MOV dword ptr [ESP + 0x1c],EAX      ; 004210ad
    LEA ESI,[EAX + 0x78]                ; 004210b1
    IMUL EDI,EBX,0x17c                  ; 004210b4
        ;   Label: LAB_004210b4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004210ba
    MOV AH,byte ptr [ESI]               ; 004210be
    ADD EDI,ECX                         ; 004210c0
    TEST AH,AH                          ; 004210c2
    JNZ 0x004212ce                      ; 004210c4
        ;   XREF to: 004212ce (CONDITIONAL_JUMP)  ; LAB_004212ce
    MOV EAX,dword ptr [EBP + 0x14]      ; 004210ca
    MOV EDX,dword ptr [EAX + 0x1345c]   ; 004210cd
    DEC EDX                             ; 004210d3
    MOV EDI,EBX                         ; 004210d4
    MOV dword ptr [EAX + 0x1345c],EDX   ; 004210d6
    CMP EBX,EDX                         ; 004210dc
    JGE 0x00421134                      ; 004210de
        ;   XREF to: 00421134 (CONDITIONAL_JUMP)  ; LAB_00421134
    IMUL EAX,EBX,0x17c                  ; 004210e0
    LEA EDX,[ECX + EAX*0x1]             ; 004210e6
    ADD EAX,0x1f4                       ; 004210e9
    ADD EAX,ECX                         ; 004210ee
    MOV dword ptr [ESP + 0x20],EDX      ; 004210f0
    MOV dword ptr [ESP + 0x24],EAX      ; 004210f4
    MOV ECX,dword ptr [ESP + 0x24]      ; 004210f8
        ;   Label: LAB_004210f8
    PUSH ECX                            ; 004210fc
    MOV EAX,dword ptr [ESP + 0x24]      ; 004210fd
    PUSH EAX                            ; 00421101
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0 ; 00421102
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00421107
    INC EDI                             ; 0042110a
    MOV EDX,dword ptr [ESP + 0x20]      ; 0042110b
    MOV ECX,dword ptr [ESP + 0x24]      ; 0042110f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421113
    ADD EDX,0x17c                       ; 00421116
    ADD ECX,0x17c                       ; 0042111c
    MOV dword ptr [ESP + 0x20],EDX      ; 00421122
    MOV EDX,dword ptr [EAX + 0x1345c]   ; 00421126
    MOV dword ptr [ESP + 0x24],ECX      ; 0042112c
    CMP EDI,EDX                         ; 00421130
    JL 0x004210f8                       ; 00421132
        ;   XREF to: 004210f8 (CONDITIONAL_JUMP)  ; LAB_004210f8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421134
        ;   Label: LAB_00421134
    CMP EBX,dword ptr [EAX + 0x1345c]   ; 00421137
    JL 0x004210b4                       ; 0042113d
        ;   XREF to: 004210b4 (CONDITIONAL_JUMP)  ; LAB_004210b4
    XOR EAX,EAX                         ; 00421143
        ;   Label: LAB_00421143
    MOV dword ptr [ESP + 0x18],EAX      ; 00421145
    MOV EAX,dword ptr [EBP + 0x14]      ; 00421149
    CMP dword ptr [EAX + 0xd058],0x0    ; 0042114c
    JLE 0x00421293                      ; 00421153
        ;   XREF to: 00421293 (CONDITIONAL_JUMP)  ; LAB_00421293
    FLD float ptr [0x005dcbc8]          ; 00421159 | DAT_005dcbc8
    FLD ST0                             ; 0042115f
    FMUL float ptr [0x005b7729]         ; 00421161 | DAT_005b7729
    FXCH                                ; 00421167
    FMUL float ptr [0x005b772d]         ; 00421169 | DAT_005b772d
    MOV EDI,dword ptr [EBP + 0x14]      ; 0042116f
    ADD EAX,0xd05c                      ; 00421172
    MOV EBX,dword ptr [EBP + 0x14]      ; 00421177
    MOV dword ptr [ESP + 0x10],EAX      ; 0042117a
    ADD EDI,0xd07c                      ; 0042117e
    ADD EBX,0xd070                      ; 00421184
    MOV EAX,dword ptr [EBP + 0x14]      ; 0042118a
    FXCH                                ; 0042118d
    FSTP float ptr [ESP]                ; 0042118f
    ADD EAX,0xd064                      ; 00421192
    FSTP float ptr [ESP + 0x4]          ; 00421197
    MOV dword ptr [ESP + 0x14],EAX      ; 0042119b
    MOV ESI,dword ptr [ESP + 0x18]      ; 0042119f
        ;   Label: LAB_0042119f
    MOV EAX,dword ptr [ESP + 0x10]      ; 004211a3
    SHL ESI,0x6                         ; 004211a7
    ADD ESI,EAX                         ; 004211aa
    MOV EAX,dword ptr [EBP + 0x14]      ; 004211ac
    MOV dword ptr [ESI],0x0             ; 004211af
    MOV EAX,dword ptr [EAX + 0x1345c]   ; 004211b5
    DEC EAX                             ; 004211bb
    PUSH EAX                            ; 004211bc
    PUSH 0x0                            ; 004211bd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004211bf
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004211c4
    FLD double ptr [0x005b7731]         ; 004211c7 | DAT_005b7731
    FLD float ptr [ESP]                 ; 004211cd
    FMUL ST1                            ; 004211d0
    FLD float ptr [ESP + 0x4]           ; 004211d2
    FMULP ST2                           ; 004211d6
    FSTP float ptr [ESP + 0x8]          ; 004211d8
    PUSH dword ptr [ESP + 0x8]          ; 004211dc
    FSTP float ptr [ESP + 0x10]         ; 004211e0
    PUSH dword ptr [ESP + 0x10]         ; 004211e4
    MOV dword ptr [ESI + 0x4],EAX       ; 004211e8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004211eb
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30],EAX      ; 004211f0
    FLD float ptr [ESP + 0x30]          ; 004211f4
    ADD ESP,0x8                         ; 004211f8
    PUSH dword ptr [ESP + 0x8]          ; 004211fb
    MOV dword ptr [ESI + 0xc],0x0       ; 004211ff
    PUSH dword ptr [ESP + 0x10]         ; 00421206
    FSTP float ptr [ESI + 0x8]          ; 0042120a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042120d
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30],EAX      ; 00421212
    FLD float ptr [ESP + 0x30]          ; 00421216
    ADD ESP,0x8                         ; 0042121a
    FSTP float ptr [ESI + 0x10]         ; 0042121d
    PUSH 0x40490fdb                     ; 00421220
    MOV dword ptr [EBX + 0x8],0x0       ; 00421225
    PUSH 0xc0490fdb                     ; 0042122c
    MOV EAX,dword ptr [EBX + 0x8]       ; 00421231
    MOV dword ptr [EBX + 0x4],EAX       ; 00421234
    MOV EAX,dword ptr [EBX + 0x4]       ; 00421237
    MOV dword ptr [EBX],EAX             ; 0042123a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0042123c
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x30],EAX      ; 00421241
    FLD float ptr [ESP + 0x30]          ; 00421245
    ADD ESP,0x8                         ; 00421249
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042124c
    FSTP float ptr [ESI + 0x18]         ; 00421250
    CMP EDI,EDX                         ; 00421253
    JZ 0x00421268                       ; 00421255
        ;   XREF to: 00421268 (CONDITIONAL_JUMP)  ; LAB_00421268
    MOV EAX,dword ptr [EBX + -0xc]      ; 00421257
    MOV dword ptr [EDI],EAX             ; 0042125a
    MOV EAX,dword ptr [EBX + -0x8]      ; 0042125c
    MOV dword ptr [EDI + 0x4],EAX       ; 0042125f
    MOV EAX,dword ptr [EBX + -0x4]      ; 00421262
    MOV dword ptr [EDI + 0x8],EAX       ; 00421265
    MOV ESI,dword ptr [ESP + 0x14]      ; 00421268
        ;   Label: LAB_00421268
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042126c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00421270
    ADD EDI,0x40                        ; 00421273
    ADD EBX,0x40                        ; 00421276
    ADD ESI,0x40                        ; 00421279
    INC EAX                             ; 0042127c
    MOV ECX,dword ptr [EDX + 0xd058]    ; 0042127d
    MOV dword ptr [ESP + 0x14],ESI      ; 00421283
    MOV dword ptr [ESP + 0x18],EAX      ; 00421287
    CMP EAX,ECX                         ; 0042128b
    JL 0x0042119f                       ; 0042128d
        ;   XREF to: 0042119f (CONDITIONAL_JUMP)  ; LAB_0042119f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00421293
        ;   Label: LAB_00421293
    PUSH EBX                            ; 00421296
    CALL core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0 ; 00421297
        ;   XREF to: 00423bc0 (UNCONDITIONAL_CALL)  ; void core_bugs.cpp_CBugs_recalculateBoundingBox_FUN_00423bc0(CBugs * this_ptr)
    MOV dword ptr [EBX + 0x1be80],0xffffd8f1 ; 0042129c
    MOV dword ptr [EBX + 0x1be84],0xffffd8f1 ; 004212a6
    MOV dword ptr [EBX + 0x100],0x1     ; 004212b0
    ADD ESP,0x4                         ; 004212ba
    MOV dword ptr [EBX + 0x1be90],0x0   ; 004212bd
    MOV ESP,EBP                         ; 004212c7
    POP EBP                             ; 004212c9
    POP EDI                             ; 004212ca
    POP ESI                             ; 004212cb
    POP EBX                             ; 004212cc
    RET                                 ; 004212cd
    PUSH EDI                            ; 004212ce
        ;   Label: LAB_004212ce
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580 ; 004212cf
        ;   XREF to: 00462580 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00462580(CKeyFramedModelInstance * this_ptr)
    ADD ESI,0x17c                       ; 004212d4
    INC EBX                             ; 004212da
    ADD ESP,0x4                         ; 004212db
    JMP 0x00421134                      ; 004212de
        ;   XREF to: 00421134 (UNCONDITIONAL_JUMP)  ; LAB_00421134

