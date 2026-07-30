; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(CBoneGuy *this_ptr)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x48]:1  local_48
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
; XREF[2]:
;   core_boneguy.cpp_CBoneGuy_processDamage_FUN_00419f40 at 00419f7b
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 00418a58
;
; Referenced Globals:
;   TerminatedCString s_core_boneguy_cpp_0057950d
;   TerminatedCString s_CBoneGuy_explode_Not_eno_00579521
;   TerminatedCString s_boneguy_fallapart_wav_0057954b
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40
;   core_bodypart.cpp_createBodyPart_FUN_00415b30
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
;   core_main.c_FUN_004c8440
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020
;   core_xform.cpp_eulerToQuaternion_FUN_0055d610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a0f0
        ;   Label: core_boneguy.cpp_CBoneGuy_explode_FUN_0041a0f0
    PUSH ESI                            ; 0041a0f1
    PUSH EDI                            ; 0041a0f2
    PUSH EBP                            ; 0041a0f3
    SUB ESP,0x38                        ; 0041a0f4
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0041a0f7
    PUSH EDX                            ; 0041a0fb
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0 ; 0041a0fc
        ;   XREF to: 004291f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041a101
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a104
    ADD EAX,0x150                       ; 0041a108
    MOV dword ptr [EAX + 0xc1f4],0x1    ; 0041a10d
    PUSH EAX                            ; 0041a117
    MOV dword ptr [EAX + 0xc1f8],0x0    ; 0041a118
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020 ; 0041a122
        ;   XREF to: 0051e020 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041a127
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0041a12a
    MOV dword ptr [ESP + 0x24],EAX      ; 0041a12e
    MOV EAX,dword ptr [EAX + 0xc00]     ; 0041a132
    MOV dword ptr [EBX + 0xbda0],EAX    ; 0041a138
    CMP EAX,0x14                        ; 0041a13e
    JG 0x0041a2e5                       ; 0041a141
        ;   XREF to: 0041a2e5 (CONDITIONAL_JUMP)  ; LAB_0041a2e5
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041a147
        ;   Label: LAB_0041a147
    XOR EDI,EDI                         ; 0041a14b
    MOV EBP,dword ptr [EAX + 0xc00]     ; 0041a14d
    MOV dword ptr [ESP + 0x30],EDI      ; 0041a153
    TEST EBP,EBP                        ; 0041a157
    JLE 0x0041a2c3                      ; 0041a159
        ;   XREF to: 0041a2c3 (CONDITIONAL_JUMP)  ; LAB_0041a2c3
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a15f
    ADD EAX,0xbda4                      ; 0041a163
    MOV dword ptr [ESP + 0x28],EAX      ; 0041a168
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a16c
    ADD EAX,0x30                        ; 0041a170
    MOV dword ptr [ESP + 0x1c],EAX      ; 0041a173
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a177
    ADD EAX,0x20                        ; 0041a17b
    MOV EBP,dword ptr [ESP + 0x28]      ; 0041a17e
    MOV dword ptr [ESP + 0x20],EAX      ; 0041a182
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041a186
    ADD EBP,0xc                         ; 0041a18a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041a18d
    PUSH 0x40a00000                     ; 0041a191
        ;   Label: LAB_0041a191
    PUSH 0xc0a00000                     ; 0041a196
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041a19b
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a1a0
    FLD float ptr [ESP + 0x3c]          ; 0041a1a4
    ADD ESP,0x8                         ; 0041a1a8
    PUSH 0x41200000                     ; 0041a1ab
    PUSH 0x0                            ; 0041a1b0
    FSTP float ptr [ESP + 0x18]         ; 0041a1b2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041a1b6
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a1bb
    FLD float ptr [ESP + 0x3c]          ; 0041a1bf
    ADD ESP,0x8                         ; 0041a1c3
    PUSH 0x40a00000                     ; 0041a1c6
    PUSH 0xc0a00000                     ; 0041a1cb
    FSTP float ptr [ESP + 0x1c]         ; 0041a1d0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041a1d4
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x3c],EAX      ; 0041a1d9
    FLD float ptr [ESP + 0x3c]          ; 0041a1dd
    ADD ESP,0x8                         ; 0041a1e1
    PUSH 0x2                            ; 0041a1e4
    PUSH 0x1                            ; 0041a1e6
    PUSH 0x1                            ; 0041a1e8
    MOV EBX,dword ptr [ESP + 0x58]      ; 0041a1ea
    PUSH EBX                            ; 0041a1ee
    LEA EAX,[ESP + 0x20]                ; 0041a1ef
    PUSH EAX                            ; 0041a1f3
    MOV ESI,dword ptr [ESP + 0x30]      ; 0041a1f4
    PUSH ESI                            ; 0041a1f8
    MOV EDI,dword ptr [ESP + 0x38]      ; 0041a1f9
    PUSH EDI                            ; 0041a1fd
    FSTP float ptr [ESP + 0x34]         ; 0041a1fe
    CALL core_bodypart.cpp_createBodyPart_FUN_00415b30 ; 0041a202
        ;   XREF to: 00415b30 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00415b30(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 0041a207
    MOV EBX,EAX                         ; 0041a20a
    PUSH 0x0                            ; 0041a20c
    MOV ESI,EAX                         ; 0041a20e
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041a210
    PUSH EAX                            ; 0041a214
    PUSH EBX                            ; 0041a215
    MOV EDX,dword ptr [ESP + 0x58]      ; 0041a216
    PUSH EDX                            ; 0041a21a
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0 ; 0041a21b
        ;   XREF to: 00427eb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00427eb0(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
    ADD ESP,0x10                        ; 0041a220
    PUSH EBX                            ; 0041a223
    MOV dword ptr [EBX + 0xcac],0x1     ; 0041a224
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40 ; 0041a22e
        ;   XREF to: 00416d40 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_00416d40(CBodyPart * this_ptr)
    ADD ESP,0x4                         ; 0041a233
    IMUL EAX,dword ptr [ESP + 0x30],0x48 ; 0041a236
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041a23b
    MOV dword ptr [EDI + 0xbde8],EBX    ; 0041a23f
    MOV EDI,dword ptr [ESP + 0x28]      ; 0041a245
    ADD EBX,0x20                        ; 0041a249
    ADD EAX,EDI                         ; 0041a24c
    CMP EAX,EBX                         ; 0041a24e
    JZ 0x0041a262                       ; 0041a250
        ;   XREF to: 0041a262 (CONDITIONAL_JUMP)  ; LAB_0041a262
    MOV EDX,dword ptr [EBX]             ; 0041a252
    MOV dword ptr [EAX],EDX             ; 0041a254
    MOV EDX,dword ptr [EBX + 0x4]       ; 0041a256
    MOV dword ptr [EAX + 0x4],EDX       ; 0041a259
    MOV EDX,dword ptr [EBX + 0x8]       ; 0041a25c
    MOV dword ptr [EAX + 0x8],EDX       ; 0041a25f
    LEA EAX,[ESI + 0x30]                ; 0041a262
        ;   Label: LAB_0041a262
    CMP EBP,EAX                         ; 0041a265
    JZ 0x0041a27a                       ; 0041a267
        ;   XREF to: 0041a27a (CONDITIONAL_JUMP)  ; LAB_0041a27a
    MOV EDX,dword ptr [EAX]             ; 0041a269
    MOV dword ptr [EBP],EDX             ; 0041a26b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041a26e
    MOV dword ptr [EBP + 0x4],EDX       ; 0041a271
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041a274
    MOV dword ptr [EBP + 0x8],EDX       ; 0041a277
    ADD ESI,0x30                        ; 0041a27a
        ;   Label: LAB_0041a27a
    PUSH ESI                            ; 0041a27d
    LEA ESI,[ESP + 0x4]                 ; 0041a27e
    ADD EBP,0x48                        ; 0041a282
    CALL core_xform.cpp_eulerToQuaternion_FUN_0055d610 ; 0041a285
        ;   XREF to: 0055d610 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_eulerToQuaternion_FUN_0055d610()
    ADD ESP,0x4                         ; 0041a28a
    MOV ESI,ESP                         ; 0041a28d
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0041a28f
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041a293
    MOV EDX,dword ptr [ESP + 0x30]      ; 0041a297
    MOV EBX,dword ptr [ESP + 0x24]      ; 0041a29b
    LEA EDI,[EDI + 0xbdcc]              ; 0041a29f
    ADD EAX,0x48                        ; 0041a2a5
    INC EDX                             ; 0041a2a8
    MOVSD ES:EDI,ESI                    ; 0041a2a9
    MOVSD ES:EDI,ESI                    ; 0041a2aa
    MOVSD ES:EDI,ESI                    ; 0041a2ab
    MOVSD ES:EDI,ESI                    ; 0041a2ac
    MOV dword ptr [ESP + 0x2c],EAX      ; 0041a2ad
    MOV ECX,dword ptr [EBX + 0xc00]     ; 0041a2b1
    MOV dword ptr [ESP + 0x30],EDX      ; 0041a2b7
    CMP EDX,ECX                         ; 0041a2bb
    JL 0x0041a191                       ; 0041a2bd
        ;   XREF to: 0041a191 (CONDITIONAL_JUMP)  ; LAB_0041a191
    PUSH 0x57954b                       ; 0041a2c3 | = "boneguy-fallapart.wav"
        ;   Label: LAB_0041a2c3
    MOV EBP,dword ptr [ESP + 0x50]      ; 0041a2c8
    MOV EAX,dword ptr [ESP + 0x50]      ; 0041a2cc
    PUSH EBP                            ; 0041a2d0
    MOV EAX,dword ptr [EAX + 0x14c]     ; 0041a2d1
    CALL dword ptr [EAX + 0x24]         ; 0041a2d7
    ADD ESP,0x8                         ; 0041a2da
    ADD ESP,0x38                        ; 0041a2dd
    POP EBP                             ; 0041a2e0
    POP EDI                             ; 0041a2e1
    POP ESI                             ; 0041a2e2
    POP EBX                             ; 0041a2e3
    RET                                 ; 0041a2e4
    MOV EBX,0x57950d                    ; 0041a2e5 | = "..\\core\\boneguy.cpp"
        ;   Label: LAB_0041a2e5
    MOV ESI,0x443                       ; 0041a2ea
    PUSH 0x579521                       ; 0041a2ef | = "CBoneGuy::explode - Not enough contai..."
    MOV dword ptr [0x01cc4800],EBX      ; 0041a2f4 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 0041a2fa | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 0041a300
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 0041a305
    JMP 0x0041a147                      ; 0041a308
        ;   XREF to: 0041a147 (UNCONDITIONAL_JUMP)  ; LAB_0041a147

