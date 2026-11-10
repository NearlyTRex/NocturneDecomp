; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_construc_cpp_FUN_00438060(CCharacter *param_1)
;
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
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
; XREF[2]:
;   core_conveyor.cpp_CConstruct_processDamage_FUN_00437de0 at 00437e3c
;   core_conveyor.cpp_CConstruct_process_FUN_00436e80 at 00436ed8
;
; Referenced Globals:
;   TerminatedCString s_core_construc_cpp_005cdf16
;   TerminatedCString s_CConstruct_explode_Not_e_005cdf2b
;   TerminatedCString s_boneguy_fallapart_wav_005cdf57
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700
;   core_bodypart.cpp_createBodyPart_FUN_004154f0
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00
;   core_main.c_FUN_004e4500
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_xform.cpp_FUN_00594380
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00438060
        ;   Label: core_construc.cpp_FUN_00438060
    PUSH ESI                            ; 00438061
    PUSH EDI                            ; 00438062
    PUSH EBP                            ; 00438063
    SUB ESP,0x34                        ; 00438064
    MOV EDX,dword ptr [ESP + 0x48]      ; 00438067
    PUSH EDX                            ; 0043806b
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00 ; 0043806c
        ;   XREF to: 00428e00 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00438071
    MOV EAX,dword ptr [ESP + 0x48]      ; 00438074
    ADD EAX,0x2b4                       ; 00438078
    MOV dword ptr [EAX + 0x11024],0x1   ; 0043807d
    PUSH EAX                            ; 00438087
    MOV dword ptr [EAX + 0x11028],0x0   ; 00438088
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00438092
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00438097
    MOV EBX,dword ptr [ESP + 0x48]      ; 0043809a
    MOV dword ptr [ESP + 0x24],EAX      ; 0043809e
    MOV EAX,dword ptr [EAX + 0xc00]     ; 004380a2
    MOV dword ptr [EBX + 0x10c14],EAX   ; 004380a8
    CMP EAX,0x18                        ; 004380ae
    JG 0x0043825b                       ; 004380b1
        ;   XREF to: 0043825b (CONDITIONAL_JUMP)  ; LAB_0043825b
    MOV EAX,dword ptr [ESP + 0x24]      ; 004380b7
        ;   Label: LAB_004380b7
    MOV EDI,dword ptr [EAX + 0xc00]     ; 004380bb
    XOR EBX,EBX                         ; 004380c1
    TEST EDI,EDI                        ; 004380c3
    JLE 0x00438239                      ; 004380c5
        ;   XREF to: 00438239 (CONDITIONAL_JUMP)  ; LAB_00438239
    MOV EAX,dword ptr [ESP + 0x48]      ; 004380cb
    ADD EAX,0x10c18                     ; 004380cf
    MOV dword ptr [ESP + 0x28],EAX      ; 004380d4
    MOV EAX,dword ptr [ESP + 0x48]      ; 004380d8
    ADD EAX,0x30                        ; 004380dc
    MOV dword ptr [ESP + 0x1c],EAX      ; 004380df
    MOV EAX,dword ptr [ESP + 0x48]      ; 004380e3
    ADD EAX,0x20                        ; 004380e7
    MOV EBP,dword ptr [ESP + 0x28]      ; 004380ea
    MOV dword ptr [ESP + 0x20],EAX      ; 004380ee
    MOV EAX,dword ptr [ESP + 0x48]      ; 004380f2
    ADD EBP,0xc                         ; 004380f6
    MOV dword ptr [ESP + 0x2c],EAX      ; 004380f9
    PUSH 0x40a00000                     ; 004380fd
        ;   Label: LAB_004380fd
    PUSH 0xc0a00000                     ; 00438102
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00438107
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 0043810c
    FLD float ptr [ESP + 0x38]          ; 00438110
    ADD ESP,0x8                         ; 00438114
    PUSH 0x41200000                     ; 00438117
    PUSH 0x0                            ; 0043811c
    FSTP float ptr [ESP + 0x18]         ; 0043811e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00438122
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00438127
    FLD float ptr [ESP + 0x38]          ; 0043812b
    ADD ESP,0x8                         ; 0043812f
    PUSH 0x40a00000                     ; 00438132
    PUSH 0xc0a00000                     ; 00438137
    FSTP float ptr [ESP + 0x1c]         ; 0043813c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00438140
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 00438145
    FLD float ptr [ESP + 0x38]          ; 00438149
    ADD ESP,0x8                         ; 0043814d
    PUSH 0x2                            ; 00438150
    PUSH 0x1                            ; 00438152
    PUSH 0x1                            ; 00438154
    MOV ECX,dword ptr [ESP + 0x54]      ; 00438156
    PUSH ECX                            ; 0043815a
    LEA EAX,[ESP + 0x20]                ; 0043815b
    PUSH EAX                            ; 0043815f
    MOV ESI,dword ptr [ESP + 0x30]      ; 00438160
    PUSH ESI                            ; 00438164
    MOV EDI,dword ptr [ESP + 0x38]      ; 00438165
    PUSH EDI                            ; 00438169
    FSTP float ptr [ESP + 0x34]         ; 0043816a
    CALL core_bodypart.cpp_createBodyPart_FUN_004154f0 ; 0043816e
        ;   XREF to: 004154f0 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_004154f0(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00438173
    PUSH 0x0                            ; 00438176
    PUSH EBX                            ; 00438178
    MOV EDI,EAX                         ; 00438179
    PUSH EAX                            ; 0043817b
    MOV ESI,EAX                         ; 0043817c
    MOV EAX,dword ptr [ESP + 0x54]      ; 0043817e
    PUSH EAX                            ; 00438182
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0 ; 00438183
        ;   XREF to: 004277e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_004277e0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 00438188
    MOV EAX,dword ptr [ESP + 0x48]      ; 0043818b
    MOV EDX,dword ptr [EAX + 0x10b60]   ; 0043818f
    CMP EBX,EDX                         ; 00438195
    JNZ 0x00438283                      ; 00438197
        ;   XREF to: 00438283 (CONDITIONAL_JUMP)  ; LAB_00438283
    MOV dword ptr [EAX + 0x112e0],EDX   ; 0043819d
    MOV dword ptr [EDI + 0x10d8],0x0    ; 004381a3
    PUSH ESI                            ; 004381ad
        ;   Label: LAB_004381ad
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700 ; 004381ae
        ;   XREF to: 00416700 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416700(CBodyPart * this_ptr)
    IMUL EAX,EBX,0x48                   ; 004381b3
    ADD ESP,0x4                         ; 004381b6
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004381b9
    MOV ECX,dword ptr [ESP + 0x28]      ; 004381bd
    MOV dword ptr [EDI + 0x10c5c],ESI   ; 004381c1
    LEA EDI,[ESI + 0x20]                ; 004381c7
    ADD EAX,ECX                         ; 004381ca
    CMP EAX,EDI                         ; 004381cc
    JZ 0x004381e0                       ; 004381ce
        ;   XREF to: 004381e0 (CONDITIONAL_JUMP)  ; LAB_004381e0
    MOV EDX,dword ptr [EDI]             ; 004381d0
    MOV dword ptr [EAX],EDX             ; 004381d2
    MOV EDX,dword ptr [EDI + 0x4]       ; 004381d4
    MOV dword ptr [EAX + 0x4],EDX       ; 004381d7
    MOV EDX,dword ptr [EDI + 0x8]       ; 004381da
    MOV dword ptr [EAX + 0x8],EDX       ; 004381dd
    LEA EAX,[ESI + 0x30]                ; 004381e0
        ;   Label: LAB_004381e0
    CMP EBP,EAX                         ; 004381e3
    JZ 0x004381f8                       ; 004381e5
        ;   XREF to: 004381f8 (CONDITIONAL_JUMP)  ; LAB_004381f8
    MOV EDX,dword ptr [EAX]             ; 004381e7
    MOV dword ptr [EBP],EDX             ; 004381e9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004381ec
    MOV dword ptr [EBP + 0x4],EDX       ; 004381ef
    MOV EDX,dword ptr [EAX + 0x8]       ; 004381f2
    MOV dword ptr [EBP + 0x8],EDX       ; 004381f5
    ADD ESI,0x30                        ; 004381f8
        ;   Label: LAB_004381f8
    PUSH ESI                            ; 004381fb
    LEA ESI,[ESP + 0x4]                 ; 004381fc
    CALL core_xform.cpp_FUN_00594380    ; 00438200
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    ADD ESP,0x4                         ; 00438205
    MOV EDI,dword ptr [ESP + 0x2c]      ; 00438208
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043820c
    MOV ESI,ESP                         ; 00438210
    ADD EAX,0x48                        ; 00438212
    LEA EDI,[EDI + 0x10c40]             ; 00438215
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043821b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0043821f
    MOVSD ES:EDI,ESI                    ; 00438223
    MOVSD ES:EDI,ESI                    ; 00438224
    MOVSD ES:EDI,ESI                    ; 00438225
    MOVSD ES:EDI,ESI                    ; 00438226
    INC EBX                             ; 00438227
    MOV EDX,dword ptr [EAX + 0xc00]     ; 00438228
    ADD EBP,0x48                        ; 0043822e
    CMP EBX,EDX                         ; 00438231
    JL 0x004380fd                       ; 00438233
        ;   XREF to: 004380fd (CONDITIONAL_JUMP)  ; LAB_004380fd
    PUSH 0x5cdf57                       ; 00438239 | = "boneguy-fallapart.wav"
        ;   Label: LAB_00438239
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0043823e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00438242
    PUSH EBX                            ; 00438246
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 00438247
    CALL dword ptr [EAX + 0x34]         ; 0043824d
    ADD ESP,0x8                         ; 00438250
    ADD ESP,0x34                        ; 00438253
    POP EBP                             ; 00438256
    POP EDI                             ; 00438257
    POP ESI                             ; 00438258
    POP EBX                             ; 00438259
    RET                                 ; 0043825a
    MOV EBX,0x5cdf16                    ; 0043825b | = "..\\core\\construc.cpp"
        ;   Label: LAB_0043825b
    MOV ESI,0x294                       ; 00438260
    PUSH 0x5cdf2b                       ; 00438265 | = "CConstruct::explode - Not enough cont..."
    MOV dword ptr [0x01d046a0],EBX      ; 0043826a | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00438270 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00438276
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0043827b
    JMP 0x004380b7                      ; 0043827e
        ;   XREF to: 004380b7 (UNCONDITIONAL_JUMP)  ; LAB_004380b7
    MOV dword ptr [EDI + 0x10d8],0x1    ; 00438283
        ;   Label: LAB_00438283
    JMP 0x004381ad                      ; 0043828d
        ;   XREF to: 004381ad (UNCONDITIONAL_JUMP)  ; LAB_004381ad

