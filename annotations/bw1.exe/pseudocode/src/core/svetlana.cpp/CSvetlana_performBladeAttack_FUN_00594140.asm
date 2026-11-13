; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_performBladeAttack_FUN_00594140(CSvetlana *this_ptr,int bone_index)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   bone_index
; Local Variables:
; undefined        Stack[-0xb4]:1  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x54]:1  local_54
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_svetlana.cpp_CSvetlana_advanceMotion_FUN_005940a0 at 005940d0
;
; Referenced Globals:
;   TerminatedCString s_core_svetlana_cpp_005f75c7
;   TerminatedCString s_Can_t_find_svetlana_s_pa_005f75dc
;   TerminatedCString s_svetlana_attack_wav_005f75fe
;   TerminatedCString s_svetlana_miss_wav_005f7613
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 g_CDemonSetInstance.character_count
;   undefined4 g_CDemonSetInstance.characters[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010
;   core_main.c_FUN_005030e0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594140
        ;   Label: core_svetlana.cpp_CSvetlana_performBladeAttack_FUN_00594140
    PUSH ESI                            ; 00594141
    PUSH EDI                            ; 00594142
    PUSH EBP                            ; 00594143
    SUB ESP,0xa4                        ; 00594144
    MOV EBP,dword ptr [ESP + 0xb8]      ; 0059414a
    MOV ESI,dword ptr [ESP + 0xbc]      ; 00594151
    LEA EAX,[EBP + 0x158]               ; 00594158
    PUSH EAX                            ; 0059415e
    XOR EBX,EBX                         ; 0059415f
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 00594161
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    MOV ECX,0xffffffff                  ; 00594166
    ADD ESP,0x4                         ; 0059416b
    MOV EDX,EAX                         ; 0059416e
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 00594170
    MOV dword ptr [ESP + 0x9c],ECX      ; 00594176
    TEST EDI,EDI                        ; 0059417d
    JLE 0x0059419b                      ; 0059417f
        ;   XREF to: 0059419b (CONDITIONAL_JUMP)  ; LAB_0059419b
    CMP ESI,dword ptr [EAX + 0x1de9c]   ; 00594181
        ;   Label: LAB_00594181
    JZ 0x0059425e                       ; 00594187
        ;   XREF to: 0059425e (CONDITIONAL_JUMP)  ; LAB_0059425e
    INC EBX                             ; 0059418d
    MOV ECX,dword ptr [EDX + 0x1de78]   ; 0059418e
    ADD EAX,0x24                        ; 00594194
    CMP EBX,ECX                         ; 00594197
    JL 0x00594181                       ; 00594199
        ;   XREF to: 00594181 (CONDITIONAL_JUMP)  ; LAB_00594181
    CMP dword ptr [ESP + 0x9c],-0x1     ; 0059419b
        ;   Label: LAB_0059419b
    JZ 0x0059426a                       ; 005941a3
        ;   XREF to: 0059426a (CONDITIONAL_JUMP)  ; LAB_0059426a
    PUSH ESI                            ; 005941a9
        ;   Label: LAB_005941a9
    LEA EBX,[EBP + 0x158]               ; 005941aa
    PUSH EBX                            ; 005941b0
    LEA ESI,[ESP + 0x50]                ; 005941b1
    LEA EDI,[ESP + 0x8c]                ; 005941b5
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 005941bc
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 005941c1
    LEA EAX,[ESP + 0x84]                ; 005941c4
    LEA ESI,[ESP + 0x48]                ; 005941cb
    PUSH EAX                            ; 005941cf
    MOVSD ES:EDI,ESI                    ; 005941d0
    MOVSD ES:EDI,ESI                    ; 005941d1
    MOVSD ES:EDI,ESI                    ; 005941d2
    PUSH EBP                            ; 005941d3
    LEA ESI,[ESP + 0x98]                ; 005941d4
    LEA EDI,[ESP + 0x74]                ; 005941db
    CALL core_actor.cpp_FUN_00408b40    ; 005941df
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x98]                ; 005941e4
    ADD ESP,0x8                         ; 005941eb
    MOVSD ES:EDI,ESI                    ; 005941ee
    MOVSD ES:EDI,ESI                    ; 005941ef
    MOVSD ES:EDI,ESI                    ; 005941f0
    MOV ESI,dword ptr [ESP + 0x9c]      ; 005941f1
    PUSH ESI                            ; 005941f8
    PUSH EBX                            ; 005941f9
    LEA ESI,[ESP + 0x44]                ; 005941fa
    LEA EDI,[ESP + 0x80]                ; 005941fe
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130 ; 00594205
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0059420a
    LEA EAX,[ESP + 0x78]                ; 0059420d
    LEA ESI,[ESP + 0x3c]                ; 00594211
    PUSH EAX                            ; 00594215
    MOVSD ES:EDI,ESI                    ; 00594216
    MOVSD ES:EDI,ESI                    ; 00594217
    MOVSD ES:EDI,ESI                    ; 00594218
    PUSH EBP                            ; 00594219
    LEA ESI,[ESP + 0x5c]                ; 0059421a
    LEA EDI,[ESP + 0x68]                ; 0059421e
    CALL core_actor.cpp_FUN_00408b40    ; 00594222
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x5c]                ; 00594227
    ADD ESP,0x8                         ; 0059422b
    MOVSD ES:EDI,ESI                    ; 0059422e
    MOVSD ES:EDI,ESI                    ; 0059422f
    MOVSD ES:EDI,ESI                    ; 00594230
    XOR EDI,EDI                         ; 00594231
    XOR ESI,ESI                         ; 00594233
    MOV dword ptr [ESP + 0xa0],EDI      ; 00594235
    MOV EAX,[0x00622c18]                ; 0059423c | g_CDemonSetPtr
        ;   Label: LAB_0059423c
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 00594241 | g_CDemonSetInstance.character_count
    JGE 0x005942fe                      ; 00594247
        ;   XREF to: 005942fe (CONDITIONAL_JUMP)  ; LAB_005942fe
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 0059424d | g_CDemonSetInstance.characters[0]
    CMP EBX,EBP                         ; 00594254
    JNZ 0x00594292                      ; 00594256
        ;   XREF to: 00594292 (CONDITIONAL_JUMP)  ; LAB_00594292
    INC ESI                             ; 00594258
        ;   Label: LAB_00594258
    ADD EDI,0x4                         ; 00594259
    JMP 0x0059423c                      ; 0059425c
        ;   XREF to: 0059423c (UNCONDITIONAL_JUMP)  ; LAB_0059423c
    MOV dword ptr [ESP + 0x9c],EBX      ; 0059425e
        ;   Label: LAB_0059425e
    JMP 0x0059419b                      ; 00594265
        ;   XREF to: 0059419b (UNCONDITIONAL_JUMP)  ; LAB_0059419b
    MOV EDX,0x5f75c7                    ; 0059426a | = "..\\core\\svetlana.cpp"
        ;   Label: LAB_0059426a
    MOV ECX,0x2ef                       ; 0059426f
    PUSH 0x5f75dc                       ; 00594274 | = "Can't find svetlana's parent bone"
    MOV dword ptr [0x01d1d400],EDX      ; 00594279 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 0059427f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00594285
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0059428a
    JMP 0x005941a9                      ; 0059428d
        ;   XREF to: 005941a9 (UNCONDITIONAL_JUMP)  ; LAB_005941a9
    MOV EAX,ESP                         ; 00594292
        ;   Label: LAB_00594292
    PUSH EAX                            ; 00594294
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 00594295
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV EAX,0x41700000                  ; 0059429a
    ADD ESP,0x4                         ; 0059429f
    MOV EDX,0x3f333333                  ; 005942a2
    MOV dword ptr [ESP + 0x4],EAX       ; 005942a7
    MOV EAX,0x3                         ; 005942ab
    PUSH 0x0                            ; 005942b0
    MOV dword ptr [ESP + 0x2c],EAX      ; 005942b2
    LEA EAX,[ESP + 0x4]                 ; 005942b6
    MOV ECX,0x67                        ; 005942ba
    PUSH EAX                            ; 005942bf
    LEA EAX,[ESP + 0x68]                ; 005942c0
    MOV dword ptr [ESP + 0x34],EDX      ; 005942c4
    PUSH EAX                            ; 005942c8
    LEA EAX,[ESP + 0x78]                ; 005942c9
    MOV dword ptr [ESP + 0x3c],ECX      ; 005942cd
    PUSH EAX                            ; 005942d1
    MOV EDX,dword ptr [EBX + 0x154]     ; 005942d2
    PUSH EBX                            ; 005942d8
    CALL dword ptr [EDX + 0x104]        ; 005942d9
    ADD ESP,0x14                        ; 005942df
    TEST EAX,EAX                        ; 005942e2
    JZ 0x00594258                       ; 005942e4
        ;   XREF to: 00594258 (CONDITIONAL_JUMP)  ; LAB_00594258
    MOV dword ptr [ESP + 0xa0],0x1      ; 005942ea
    INC ESI                             ; 005942f5
    ADD EDI,0x4                         ; 005942f6
    JMP 0x0059423c                      ; 005942f9
        ;   XREF to: 0059423c (UNCONDITIONAL_JUMP)  ; LAB_0059423c
    CMP dword ptr [ESP + 0xa0],0x0      ; 005942fe
        ;   Label: LAB_005942fe
    JZ 0x00594325                       ; 00594306
        ;   XREF to: 00594325 (CONDITIONAL_JUMP)  ; LAB_00594325
    PUSH 0x5f75fe                       ; 00594308 | = "svetlana-attack?.wav"
    MOV EAX,dword ptr [EBP + 0x154]     ; 0059430d
        ;   Label: LAB_0059430d
    PUSH EBP                            ; 00594313
    CALL dword ptr [EAX + 0x2c]         ; 00594314
    ADD ESP,0x8                         ; 00594317
    ADD ESP,0xa4                        ; 0059431a
    POP EBP                             ; 00594320
    POP EDI                             ; 00594321
    POP ESI                             ; 00594322
    POP EBX                             ; 00594323
    RET                                 ; 00594324
    PUSH 0x5f7613                       ; 00594325 | = "svetlana-miss?.wav"
        ;   Label: LAB_00594325
    JMP 0x0059430d                      ; 0059432a
        ;   XREF to: 0059430d (UNCONDITIONAL_JUMP)  ; LAB_0059430d

