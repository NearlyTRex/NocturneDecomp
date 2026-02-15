; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_CEmitter_processInEditor_FUN_004a8fe0(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   double DOUBLE_006242ca = 4
;   CGame* g_CGamePtr = 02d81a9c
;   CKeys* g_CKeysPtr = 02dcd7d4
;   int g_SlewTargetMode
;   CVector3f g_EmitterTarget
;   undefined4 g_EmitterTarget.y
;   undefined4 g_EmitterTarget.z
;   undefined4 DAT_02cf2b6c
;   undefined4 DAT_02cf2b70
;   undefined4 DAT_02cf2b74
;   CEmitter* PTR_02cf2b78
;   undefined4 g_CGameInstance.delta_time_float
;   CKeys g_CKeysInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8fe0
        ;   Label: core_emitter.cpp_CEmitter_processInEditor_FUN_004a8fe0
    PUSH ESI                            ; 004a8fe1
    PUSH EDI                            ; 004a8fe2
    PUSH EBP                            ; 004a8fe3
    SUB ESP,0x50                        ; 004a8fe4
    MOV EBX,dword ptr [ESP + 0x64]      ; 004a8fe7
    CMP dword ptr [EBX + 0x158],0x3     ; 004a8feb
    JNZ 0x004a9150                      ; 004a8ff2
        ;   XREF to: 004a9150 (CONDITIONAL_JUMP)  ; LAB_004a9150
    CMP dword ptr [0x02cf2b5c],0x0      ; 004a8ff8 | g_SlewTargetMode
    JNZ 0x004a9009                      ; 004a8fff
        ;   XREF to: 004a9009 (CONDITIONAL_JUMP)  ; LAB_004a9009
    XOR EDI,EDI                         ; 004a9001
        ;   Label: LAB_004a9001
    MOV dword ptr [0x02cf2b78],EDI      ; 004a9003 | PTR_02cf2b78
    PUSH 0x1d                           ; 004a9009
        ;   Label: LAB_004a9009
    MOV EAX,[0x0067cf44]                ; 004a900b | g_CKeysPtr
    PUSH EAX                            ; 004a9010 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a9011 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a9013
    ADD ESP,0x8                         ; 004a9015
    TEST EAX,EAX                        ; 004a9018
    JZ 0x004a916f                       ; 004a901a
        ;   XREF to: 004a916f (CONDITIONAL_JUMP)  ; LAB_004a916f
    MOV EAX,[0x0067b654]                ; 004a9020 | g_CGamePtr
    PUSH 0x4b                           ; 004a9025
    FLD float ptr [EAX + 0x264]         ; 004a9027 | g_CGameInstance.delta_time_float
    MOV EAX,[0x0067cf44]                ; 004a902d | g_CKeysPtr
    FMUL double ptr [0x006242ca]        ; 004a9032 | DOUBLE_006242ca
    PUSH EAX                            ; 004a9038 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a9039 | g_CKeysInstance
    FSTP float ptr [ESP + 0x54]         ; 004a903b
    CALL dword ptr [EDX]                ; 004a903f
    ADD ESP,0x8                         ; 004a9041
    TEST EAX,EAX                        ; 004a9044
    JZ 0x004a9058                       ; 004a9046
        ;   XREF to: 004a9058 (CONDITIONAL_JUMP)  ; LAB_004a9058
    FLD float ptr [EBX + 0x15c]         ; 004a9048
    FSUB float ptr [ESP + 0x4c]         ; 004a904e
    FSTP float ptr [EBX + 0x15c]        ; 004a9052
    PUSH 0x4d                           ; 004a9058
        ;   Label: LAB_004a9058
    MOV EAX,[0x0067cf44]                ; 004a905a | g_CKeysPtr
    PUSH EAX                            ; 004a905f | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a9060 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a9062
    ADD ESP,0x8                         ; 004a9064
    TEST EAX,EAX                        ; 004a9067
    JZ 0x004a907b                       ; 004a9069
        ;   XREF to: 004a907b (CONDITIONAL_JUMP)  ; LAB_004a907b
    FLD float ptr [EBX + 0x15c]         ; 004a906b
    FADD float ptr [ESP + 0x4c]         ; 004a9071
    FSTP float ptr [EBX + 0x15c]        ; 004a9075
    PUSH 0x1e                           ; 004a907b
        ;   Label: LAB_004a907b
    MOV EAX,[0x0067cf44]                ; 004a907d | g_CKeysPtr
    PUSH EAX                            ; 004a9082 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a9083 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a9085
    ADD ESP,0x8                         ; 004a9087
    TEST EAX,EAX                        ; 004a908a
    JZ 0x004a909e                       ; 004a908c
        ;   XREF to: 004a909e (CONDITIONAL_JUMP)  ; LAB_004a909e
    FLD float ptr [EBX + 0x160]         ; 004a908e
    FSUB float ptr [ESP + 0x4c]         ; 004a9094
    FSTP float ptr [EBX + 0x160]        ; 004a9098
    PUSH 0x10                           ; 004a909e
        ;   Label: LAB_004a909e
    MOV EAX,[0x0067cf44]                ; 004a90a0 | g_CKeysPtr
    PUSH EAX                            ; 004a90a5 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a90a6 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a90a8
    ADD ESP,0x8                         ; 004a90aa
    TEST EAX,EAX                        ; 004a90ad
    JZ 0x004a90c1                       ; 004a90af
        ;   XREF to: 004a90c1 (CONDITIONAL_JUMP)  ; LAB_004a90c1
    FLD float ptr [EBX + 0x160]         ; 004a90b1
    FADD float ptr [ESP + 0x4c]         ; 004a90b7
    FSTP float ptr [EBX + 0x160]        ; 004a90bb
    PUSH 0x50                           ; 004a90c1
        ;   Label: LAB_004a90c1
    MOV EAX,[0x0067cf44]                ; 004a90c3 | g_CKeysPtr
    PUSH EAX                            ; 004a90c8 | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a90c9 | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a90cb
    ADD ESP,0x8                         ; 004a90cd
    TEST EAX,EAX                        ; 004a90d0
    JZ 0x004a90e4                       ; 004a90d2
        ;   XREF to: 004a90e4 (CONDITIONAL_JUMP)  ; LAB_004a90e4
    FLD float ptr [EBX + 0x164]         ; 004a90d4
    FSUB float ptr [ESP + 0x4c]         ; 004a90da
    FSTP float ptr [EBX + 0x164]        ; 004a90de
    PUSH 0x48                           ; 004a90e4
        ;   Label: LAB_004a90e4
    MOV EAX,[0x0067cf44]                ; 004a90e6 | g_CKeysPtr
    PUSH EAX                            ; 004a90eb | g_CKeysInstance
    MOV EDX,dword ptr [EAX]             ; 004a90ec | g_CKeysInstance
    CALL dword ptr [EDX]                ; 004a90ee
    ADD ESP,0x8                         ; 004a90f0
    TEST EAX,EAX                        ; 004a90f3
    JZ 0x004a9107                       ; 004a90f5
        ;   XREF to: 004a9107 (CONDITIONAL_JUMP)  ; LAB_004a9107
    FLD float ptr [EBX + 0x164]         ; 004a90f7
    FADD float ptr [ESP + 0x4c]         ; 004a90fd
    FSTP float ptr [EBX + 0x164]        ; 004a9101
    MOV EDI,0x3f000000                  ; 004a9107
        ;   Label: LAB_004a9107
    MOV EBP,dword ptr [EBX + 0x15c]     ; 004a910c
    MOV dword ptr [ESP + 0x48],EDI      ; 004a9112
    CMP EBP,EDI                         ; 004a9116
    JGE 0x004a9120                      ; 004a9118
        ;   XREF to: 004a9120 (CONDITIONAL_JUMP)  ; LAB_004a9120
    MOV dword ptr [EBX + 0x15c],EDI     ; 004a911a
    FLD float ptr [EBX + 0x160]         ; 004a9120
        ;   Label: LAB_004a9120
    FCOMP float ptr [ESP + 0x48]        ; 004a9126
    FNSTSW AX                           ; 004a912a
    SAHF                                ; 004a912c
    JNC 0x004a9139                      ; 004a912d
        ;   XREF to: 004a9139 (CONDITIONAL_JUMP)  ; LAB_004a9139
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a912f
    MOV dword ptr [EBX + 0x160],EAX     ; 004a9133
    FLD float ptr [EBX + 0x164]         ; 004a9139
        ;   Label: LAB_004a9139
    FCOMP float ptr [ESP + 0x48]        ; 004a913f
    FNSTSW AX                           ; 004a9143
    SAHF                                ; 004a9145
    JC 0x004a915d                       ; 004a9146
        ;   XREF to: 004a915d (CONDITIONAL_JUMP)  ; LAB_004a915d
    ADD ESP,0x50                        ; 004a9148
    POP EBP                             ; 004a914b
    POP EDI                             ; 004a914c
    POP ESI                             ; 004a914d
    POP EBX                             ; 004a914e
    RET                                 ; 004a914f
    XOR ESI,ESI                         ; 004a9150
        ;   Label: LAB_004a9150
    MOV dword ptr [0x02cf2b5c],ESI      ; 004a9152 | g_SlewTargetMode
    JMP 0x004a9001                      ; 004a9158
        ;   XREF to: 004a9001 (UNCONDITIONAL_JUMP)  ; LAB_004a9001
    MOV EAX,dword ptr [ESP + 0x48]      ; 004a915d
        ;   Label: LAB_004a915d
    MOV dword ptr [EBX + 0x164],EAX     ; 004a9161
    ADD ESP,0x50                        ; 004a9167
    POP EBP                             ; 004a916a
    POP EDI                             ; 004a916b
    POP ESI                             ; 004a916c
    POP EBX                             ; 004a916d
    RET                                 ; 004a916e
    CMP dword ptr [0x02cf2b5c],0x0      ; 004a916f | g_SlewTargetMode
        ;   Label: LAB_004a916f
    JZ 0x004a933f                       ; 004a9176
        ;   XREF to: 004a933f (CONDITIONAL_JUMP)  ; LAB_004a933f
    CMP EBX,dword ptr [0x02cf2b78]      ; 004a917c | PTR_02cf2b78
    JNZ 0x004a92c5                      ; 004a9182
        ;   XREF to: 004a92c5 (CONDITIONAL_JUMP)  ; LAB_004a92c5
    LEA ECX,[EBX + 0x20]                ; 004a9188
        ;   Label: LAB_004a9188
    MOV EAX,dword ptr [ECX]             ; 004a918b
    MOV dword ptr [ESP + 0xc],EAX       ; 004a918d
    LEA EAX,[ECX + 0x4]                 ; 004a9191
    MOV EAX,dword ptr [EAX]             ; 004a9194
    MOV dword ptr [ESP + 0x10],EAX      ; 004a9196
    LEA EAX,[ECX + 0x8]                 ; 004a919a
    MOV EAX,dword ptr [EAX]             ; 004a919d
    LEA EDX,[EBX + 0x30]                ; 004a919f
    MOV dword ptr [ESP + 0x14],EAX      ; 004a91a2
    MOV EAX,dword ptr [EDX]             ; 004a91a6
    MOV dword ptr [ESP + 0x3c],EAX      ; 004a91a8
    LEA EAX,[EDX + 0x4]                 ; 004a91ac
    MOV EAX,dword ptr [EAX]             ; 004a91af
    MOV dword ptr [ESP + 0x40],EAX      ; 004a91b1
    LEA EAX,[EDX + 0x8]                 ; 004a91b5
    MOV EAX,dword ptr [EAX]             ; 004a91b8
    MOV dword ptr [ESP + 0x44],EAX      ; 004a91ba
    MOV EAX,[0x02cf2b60]                ; 004a91be | g_EmitterTarget
    MOV dword ptr [ECX],EAX             ; 004a91c3
    MOV EAX,[0x02cf2b64]                ; 004a91c5 | g_EmitterTarget.y
    MOV dword ptr [ECX + 0x4],EAX       ; 004a91ca
    MOV EAX,[0x02cf2b68]                ; 004a91cd | g_EmitterTarget.z
    MOV dword ptr [ECX + 0x8],EAX       ; 004a91d2
    CMP EDX,0x2cf2b6c                   ; 004a91d5 | DAT_02cf2b6c
    JZ 0x004a91f4                       ; 004a91db
        ;   XREF to: 004a91f4 (CONDITIONAL_JUMP)  ; LAB_004a91f4
    MOV EAX,[0x02cf2b6c]                ; 004a91dd | DAT_02cf2b6c
    MOV dword ptr [EDX],EAX             ; 004a91e2
    MOV EAX,[0x02cf2b70]                ; 004a91e4 | DAT_02cf2b70
    MOV dword ptr [EDX + 0x4],EAX       ; 004a91e9
    MOV EAX,[0x02cf2b74]                ; 004a91ec | DAT_02cf2b74
    MOV dword ptr [EDX + 0x8],EAX       ; 004a91f1
    PUSH EBX                            ; 004a91f4
        ;   Label: LAB_004a91f4
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004a91f5
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a91fa
    PUSH EBX                            ; 004a91fd
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004a91fe
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    LEA EAX,[EBX + 0x20]                ; 004a9203
    ADD ESP,0x4                         ; 004a9206
    CMP EAX,0x2cf2b60                   ; 004a9209 | g_EmitterTarget
    JZ 0x004a922a                       ; 004a920e
        ;   XREF to: 004a922a (CONDITIONAL_JUMP)  ; LAB_004a922a
    FLD float ptr [EAX]                 ; 004a9210
    FLD float ptr [EAX + 0x8]           ; 004a9212
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a9215
    MOV dword ptr [0x02cf2b64],EDX      ; 004a9218 | g_EmitterTarget.y
    FSTP float ptr [0x02cf2b68]         ; 004a921e | g_EmitterTarget.z
    FSTP float ptr [0x02cf2b60]         ; 004a9224 | g_EmitterTarget
    LEA EAX,[EBX + 0x30]                ; 004a922a
        ;   Label: LAB_004a922a
    CMP EAX,0x2cf2b6c                   ; 004a922d | DAT_02cf2b6c
    JZ 0x004a924e                       ; 004a9232
        ;   XREF to: 004a924e (CONDITIONAL_JUMP)  ; LAB_004a924e
    FLD float ptr [EAX]                 ; 004a9234
    FLD float ptr [EAX + 0x8]           ; 004a9236
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a9239
    MOV dword ptr [0x02cf2b70],EDX      ; 004a923c | DAT_02cf2b70
    FSTP float ptr [0x02cf2b74]         ; 004a9242 | DAT_02cf2b74
    FSTP float ptr [0x02cf2b6c]         ; 004a9248 | DAT_02cf2b6c
    LEA EDX,[EBX + 0x20]                ; 004a924e
        ;   Label: LAB_004a924e
    MOV EAX,dword ptr [ESP + 0xc]       ; 004a9251
    MOV dword ptr [EDX],EAX             ; 004a9255
    MOV EAX,dword ptr [ESP + 0x10]      ; 004a9257
    MOV dword ptr [EDX + 0x4],EAX       ; 004a925b
    MOV EAX,dword ptr [ESP + 0x14]      ; 004a925e
    MOV dword ptr [EDX + 0x8],EAX       ; 004a9262
    FLD float ptr [0x02cf2b60]          ; 004a9265 | g_EmitterTarget
    FLD float ptr [0x02cf2b64]          ; 004a926b | g_EmitterTarget.y
    FLD float ptr [0x02cf2b68]          ; 004a9271 | g_EmitterTarget.z
    MOV EAX,ESP                         ; 004a9277
    FXCH ST2                            ; 004a9279
    FSUB float ptr [EDX]                ; 004a927b
    PUSH EAX                            ; 004a927d
    FSTP float ptr [ESP + 0x4]          ; 004a927e
    FSUB float ptr [EDX + 0x4]          ; 004a9282
    LEA EAX,[ESP + 0x28]                ; 004a9285
    FSTP float ptr [ESP + 0x8]          ; 004a9289
    FSUB float ptr [EDX + 0x8]          ; 004a928d
    PUSH EAX                            ; 004a9290
    FSTP float ptr [ESP + 0x10]         ; 004a9291
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004a9295
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    LEA EDX,[EBX + 0x30]                ; 004a929a
    ADD ESP,0x8                         ; 004a929d
    CMP EDX,EAX                         ; 004a92a0
    JZ 0x004a92b4                       ; 004a92a2
        ;   XREF to: 004a92b4 (CONDITIONAL_JUMP)  ; LAB_004a92b4
    MOV ECX,dword ptr [EAX]             ; 004a92a4
    MOV dword ptr [EDX],ECX             ; 004a92a6
    MOV ECX,dword ptr [EAX + 0x4]       ; 004a92a8
    MOV dword ptr [EDX + 0x4],ECX       ; 004a92ab
    MOV ECX,dword ptr [EAX + 0x8]       ; 004a92ae
    MOV dword ptr [EDX + 0x8],ECX       ; 004a92b1
    PUSH EBX                            ; 004a92b4
        ;   Label: LAB_004a92b4
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004a92b5
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a92ba
    ADD ESP,0x50                        ; 004a92bd
    POP EBP                             ; 004a92c0
    POP EDI                             ; 004a92c1
    POP ESI                             ; 004a92c2
    POP EBX                             ; 004a92c3
    RET                                 ; 004a92c4
    LEA EAX,[ESP + 0x18]                ; 004a92c5
        ;   Label: LAB_004a92c5
    MOV ESI,0x40a00000                  ; 004a92c9
    PUSH EAX                            ; 004a92ce
    LEA EAX,[ESP + 0x34]                ; 004a92cf
    XOR EDX,EDX                         ; 004a92d3
    PUSH EAX                            ; 004a92d5
    MOV dword ptr [0x02cf2b78],EBX      ; 004a92d6 | PTR_02cf2b78
    MOV dword ptr [ESP + 0x20],EDX      ; 004a92dc
    PUSH EBX                            ; 004a92e0
    MOV dword ptr [ESP + 0x28],EDX      ; 004a92e1
    MOV dword ptr [ESP + 0x2c],ESI      ; 004a92e5
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004a92e9
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004a92ee
    CMP EAX,0x2cf2b60                   ; 004a92f1 | g_EmitterTarget
    JZ 0x004a9312                       ; 004a92f6
        ;   XREF to: 004a9312 (CONDITIONAL_JUMP)  ; LAB_004a9312
    FLD float ptr [EAX]                 ; 004a92f8
    FLD float ptr [EAX + 0x8]           ; 004a92fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a92fd
    MOV dword ptr [0x02cf2b64],EDX      ; 004a9300 | g_EmitterTarget.y
    FSTP float ptr [0x02cf2b68]         ; 004a9306 | g_EmitterTarget.z
    FSTP float ptr [0x02cf2b60]         ; 004a930c | g_EmitterTarget
    LEA EAX,[EBX + 0x30]                ; 004a9312
        ;   Label: LAB_004a9312
    CMP EAX,0x2cf2b6c                   ; 004a9315 | DAT_02cf2b6c
    JZ 0x004a9188                       ; 004a931a
        ;   XREF to: 004a9188 (CONDITIONAL_JUMP)  ; LAB_004a9188
    FLD float ptr [EAX]                 ; 004a9320
    FLD float ptr [EAX + 0x8]           ; 004a9322
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a9325
    MOV dword ptr [0x02cf2b70],EDX      ; 004a9328 | DAT_02cf2b70
    FSTP float ptr [0x02cf2b74]         ; 004a932e | DAT_02cf2b74
    FSTP float ptr [0x02cf2b6c]         ; 004a9334 | DAT_02cf2b6c
    JMP 0x004a9188                      ; 004a933a
        ;   XREF to: 004a9188 (UNCONDITIONAL_JUMP)  ; LAB_004a9188
    PUSH EBX                            ; 004a933f
        ;   Label: LAB_004a933f
    CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 ; 004a9340
        ;   XREF to: 0040d040 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004a9345
    ADD ESP,0x50                        ; 004a9348
    POP EBP                             ; 004a934b
    POP EDI                             ; 004a934c
    POP ESI                             ; 004a934d
    POP EBX                             ; 004a934e
    RET                                 ; 004a934f

