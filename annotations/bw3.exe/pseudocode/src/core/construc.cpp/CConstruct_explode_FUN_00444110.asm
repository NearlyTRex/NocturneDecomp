; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_construc_cpp_CConstruct_explode_FUN_00444110(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
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
;   core_construc.cpp_CConstruct_processDamage_FUN_00443f00 at 00444003
;   core_construc.cpp_CConstruct_process_FUN_00442a20 at 00442da8
;
; Referenced Globals:
;   TerminatedCString s_core_construc_cpp_005b979d
;   TerminatedCString s_CConstruct_explode_Not_e_005b97b2
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0
;   core_bodypart.cpp_createBodyPart_FUN_00414550
;   core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
;   core_main.c_FUN_004e4330
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40
;   core_xform.cpp_FUN_005860b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444110
        ;   Label: core_construc.cpp_CConstruct_explode_FUN_00444110
    PUSH ESI                            ; 00444111
    PUSH EDI                            ; 00444112
    PUSH EBP                            ; 00444113
    SUB ESP,0x34                        ; 00444114
    MOV EDX,dword ptr [ESP + 0x48]      ; 00444117
    PUSH EDX                            ; 0044411b
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0 ; 0044411c
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00444121
    MOV EAX,dword ptr [ESP + 0x48]      ; 00444124
    ADD EAX,0x158                       ; 00444128
    MOV dword ptr [EAX + 0xd6ec],0x1    ; 0044412d
    PUSH EAX                            ; 00444137
    MOV dword ptr [EAX + 0xd6f8],0x0    ; 00444138
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40 ; 00444142
        ;   XREF to: 0054ea40 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00444147
    MOV EDX,dword ptr [ESP + 0x48]      ; 0044414a
    MOV dword ptr [ESP + 0x24],EAX      ; 0044414e
    MOV EAX,dword ptr [EAX + 0xc00]     ; 00444152
    MOV dword ptr [EDX + 0xd180],EAX    ; 00444158
    CMP EAX,0x18                        ; 0044415e
    JG 0x004442e5                       ; 00444161
        ;   XREF to: 004442e5 (CONDITIONAL_JUMP)  ; LAB_004442e5
    MOV EAX,dword ptr [ESP + 0x24]      ; 00444167
        ;   Label: LAB_00444167
    MOV EDI,dword ptr [EAX + 0xc00]     ; 0044416b
    XOR EBX,EBX                         ; 00444171
    TEST EDI,EDI                        ; 00444173
    JLE 0x004442dd                      ; 00444175
        ;   XREF to: 004442dd (CONDITIONAL_JUMP)  ; LAB_004442dd
    MOV EAX,dword ptr [ESP + 0x48]      ; 0044417b
    ADD EAX,0xd184                      ; 0044417f
    MOV dword ptr [ESP + 0x28],EAX      ; 00444184
    MOV EAX,dword ptr [ESP + 0x48]      ; 00444188
    ADD EAX,0x30                        ; 0044418c
    MOV dword ptr [ESP + 0x20],EAX      ; 0044418f
    MOV EAX,dword ptr [ESP + 0x48]      ; 00444193
    ADD EAX,0x20                        ; 00444197
    MOV EBP,dword ptr [ESP + 0x28]      ; 0044419a
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044419e
    MOV EAX,dword ptr [ESP + 0x48]      ; 004441a2
    ADD EBP,0xc                         ; 004441a6
    MOV dword ptr [ESP + 0x2c],EAX      ; 004441a9
    PUSH 0x40a00000                     ; 004441ad
        ;   Label: LAB_004441ad
    PUSH 0xc0a00000                     ; 004441b2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004441b7
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 004441bc
    FLD float ptr [ESP + 0x38]          ; 004441c0
    ADD ESP,0x8                         ; 004441c4
    PUSH 0x41200000                     ; 004441c7
    PUSH 0x0                            ; 004441cc
    FSTP float ptr [ESP + 0x18]         ; 004441ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004441d2
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 004441d7
    FLD float ptr [ESP + 0x38]          ; 004441db
    ADD ESP,0x8                         ; 004441df
    PUSH 0x40a00000                     ; 004441e2
    PUSH 0xc0a00000                     ; 004441e7
    FSTP float ptr [ESP + 0x1c]         ; 004441ec
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004441f0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x38],EAX      ; 004441f5
    FLD float ptr [ESP + 0x38]          ; 004441f9
    ADD ESP,0x8                         ; 004441fd
    PUSH 0x2                            ; 00444200
    PUSH 0x1                            ; 00444202
    PUSH 0x1                            ; 00444204
    MOV ECX,dword ptr [ESP + 0x54]      ; 00444206
    PUSH ECX                            ; 0044420a
    LEA EAX,[ESP + 0x20]                ; 0044420b
    PUSH EAX                            ; 0044420f
    MOV ESI,dword ptr [ESP + 0x34]      ; 00444210
    PUSH ESI                            ; 00444214
    MOV EDI,dword ptr [ESP + 0x34]      ; 00444215
    PUSH EDI                            ; 00444219
    FSTP float ptr [ESP + 0x34]         ; 0044421a
    CALL core_bodypart.cpp_createBodyPart_FUN_00414550 ; 0044421e
        ;   XREF to: 00414550 (UNCONDITIONAL_CALL)  ; CBodyPart * core_bodypart.cpp_createBodyPart_FUN_00414550(CVector3f * position, UOrientationVector * orientation, CVector3f * initial_velocity, CDemonActor * scale_source, ...)
    ADD ESP,0x1c                        ; 00444223
    MOV EDX,dword ptr [ESP + 0x48]      ; 00444226
    MOV ECX,dword ptr [EDX + 0xd0b8]    ; 0044422a
    MOV ESI,EAX                         ; 00444230
    CMP EBX,ECX                         ; 00444232
    JZ 0x0044430d                       ; 00444234
        ;   XREF to: 0044430d (CONDITIONAL_JUMP)  ; LAB_0044430d
    PUSH 0x1                            ; 0044423a
    PUSH EBX                            ; 0044423c
    PUSH EAX                            ; 0044423d
    PUSH EDX                            ; 0044423e
    MOV dword ptr [EAX + 0xcc4],0x1     ; 0044423f
    CALL core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590 ; 00444249
        ;   XREF to: 00430590 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismemberPartInternal_FUN_00430590(CCharacter * this_ptr, CBodyPart * body_part, int part_index, int render_in_background)
        ;   Label: LAB_00444249
    ADD ESP,0x10                        ; 0044424e
    PUSH ESI                            ; 00444251
    CALL core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0 ; 00444252
        ;   XREF to: 004157c0 (UNCONDITIONAL_CALL)  ; void core_bodypart.cpp_CBodyPart_finalizeGeometry_FUN_004157c0(CBodyPart * this_ptr)
    IMUL EDX,EBX,0x48                   ; 00444257
    ADD ESP,0x4                         ; 0044425a
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0044425d
    MOV ECX,dword ptr [ESP + 0x28]      ; 00444261
    MOV dword ptr [EAX + 0xd1c8],ESI    ; 00444265
    LEA EAX,[ESI + 0x20]                ; 0044426b
    ADD EDX,ECX                         ; 0044426e
    CMP EDX,EAX                         ; 00444270
    JZ 0x00444284                       ; 00444272
        ;   XREF to: 00444284 (CONDITIONAL_JUMP)  ; LAB_00444284
    MOV ECX,dword ptr [EAX]             ; 00444274
    MOV dword ptr [EDX],ECX             ; 00444276
    MOV ECX,dword ptr [EAX + 0x4]       ; 00444278
    MOV dword ptr [EDX + 0x4],ECX       ; 0044427b
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044427e
    MOV dword ptr [EDX + 0x8],ECX       ; 00444281
    LEA EAX,[ESI + 0x30]                ; 00444284
        ;   Label: LAB_00444284
    CMP EBP,EAX                         ; 00444287
    JZ 0x0044429c                       ; 00444289
        ;   XREF to: 0044429c (CONDITIONAL_JUMP)  ; LAB_0044429c
    MOV EDX,dword ptr [EAX]             ; 0044428b
    MOV dword ptr [EBP],EDX             ; 0044428d
    MOV EDX,dword ptr [EAX + 0x4]       ; 00444290
    MOV dword ptr [EBP + 0x4],EDX       ; 00444293
    MOV EDX,dword ptr [EAX + 0x8]       ; 00444296
    MOV dword ptr [EBP + 0x8],EDX       ; 00444299
    ADD ESI,0x30                        ; 0044429c
        ;   Label: LAB_0044429c
    PUSH ESI                            ; 0044429f
    LEA ESI,[ESP + 0x4]                 ; 004442a0
    CALL core_xform.cpp_FUN_005860b0    ; 004442a4
        ;   XREF to: 005860b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005860b0()
    ADD ESP,0x4                         ; 004442a9
    MOV EDI,dword ptr [ESP + 0x2c]      ; 004442ac
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004442b0
    MOV ESI,ESP                         ; 004442b4
    ADD EAX,0x48                        ; 004442b6
    LEA EDI,[EDI + 0xd1ac]              ; 004442b9
    MOV dword ptr [ESP + 0x2c],EAX      ; 004442bf
    MOV EAX,dword ptr [ESP + 0x24]      ; 004442c3
    MOVSD ES:EDI,ESI                    ; 004442c7
    MOVSD ES:EDI,ESI                    ; 004442c8
    MOVSD ES:EDI,ESI                    ; 004442c9
    MOVSD ES:EDI,ESI                    ; 004442ca
    INC EBX                             ; 004442cb
    MOV EDX,dword ptr [EAX + 0xc00]     ; 004442cc
    ADD EBP,0x48                        ; 004442d2
    CMP EBX,EDX                         ; 004442d5
    JL 0x004441ad                       ; 004442d7
        ;   XREF to: 004441ad (CONDITIONAL_JUMP)  ; LAB_004441ad
    ADD ESP,0x34                        ; 004442dd
        ;   Label: LAB_004442dd
    POP EBP                             ; 004442e0
    POP EDI                             ; 004442e1
    POP ESI                             ; 004442e2
    POP EBX                             ; 004442e3
    RET                                 ; 004442e4
    MOV EBX,0x5b979d                    ; 004442e5 | = "..\\core\\construc.cpp"
        ;   Label: LAB_004442e5
    MOV ESI,0x357                       ; 004442ea
    PUSH 0x5b97b2                       ; 004442ef | = "CConstruct::explode - Not enough cont..."
    MOV dword ptr [0x01d71de0],EBX      ; 004442f4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004442fa | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00444300
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00444305
    JMP 0x00444167                      ; 00444308
        ;   XREF to: 00444167 (UNCONDITIONAL_JUMP)  ; LAB_00444167
    PUSH 0x0                            ; 0044430d
        ;   Label: LAB_0044430d
    PUSH ECX                            ; 0044430f
    MOV dword ptr [EDX + 0xd848],ECX    ; 00444310
    PUSH EAX                            ; 00444316
    MOV dword ptr [EAX + 0xcc4],0x0     ; 00444317
    PUSH EDX                            ; 00444321
    MOV dword ptr [EAX + 0xcc8],0x1     ; 00444322
    JMP 0x00444249                      ; 0044432c
        ;   XREF to: 00444249 (UNCONDITIONAL_JUMP)  ; LAB_00444249

