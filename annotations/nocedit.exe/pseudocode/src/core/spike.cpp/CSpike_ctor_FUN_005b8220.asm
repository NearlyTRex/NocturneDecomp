; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CSpike * __cdecl core_spike_cpp_CSpike_ctor_FUN_005b8220(CSpike *this_ptr)
;
; Parameters:
; CSpike *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_spike.cpp_factoryFunc_FUN_005b81e0 at 005b81fa
;
; Referenced Globals:
;   TerminatedCString s_bgate_kfm_00652de1
;   TerminatedCString s_none_00652deb
;   undefined4 s_one_00652dec
;   undefined4 s_ne_00652ded
;   undefined4 s_e_00652dee
;   TerminatedCString s_none_00652df0
;   undefined4 s_one_00652df1
;   undefined4 s_ne_00652df2
;   undefined4 s_e_00652df3
;   TerminatedCString s_none_00652df5
;   undefined4 s_one_00652df6
;   undefined4 s_ne_00652df7
;   undefined4 s_e_00652df8
;   TerminatedCString s_none_00652dfa
;   undefined4 s_one_00652dfb
;   ... and 3 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b8220
        ;   Label: core_spike.cpp_CSpike_ctor_FUN_005b8220
    PUSH ESI                            ; 005b8221
    PUSH EDI                            ; 005b8222
    MOV EBX,dword ptr [ESP + 0x10]      ; 005b8223
    PUSH EBX                            ; 005b8227
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005b8228
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005b822d
    ADD EAX,0x158                       ; 005b8230
    PUSH EAX                            ; 005b8235
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0 ; 005b8236
        ;   XREF to: 00478ce0 (UNCONDITIONAL_CALL)  ; CKeyFramedModelInstance * core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005b823b
    LEA EBX,[EAX + 0xfffffea8]          ; 005b823e
    PUSH 0x652de1                       ; 005b8244 | = "bgate.kfm"
    LEA EAX,[EBX + 0x158]               ; 005b8249
    PUSH EAX                            ; 005b824f
    MOV ESI,0x652deb                    ; 005b8250 | = "none"
    MOV dword ptr [EBX + 0x154],0x663364 ; 005b8255 | g_CSpikeVTable
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 005b825f
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    MOV dword ptr [EBX + 0x2d4],0x0     ; 005b8264
    ADD ESP,0x8                         ; 005b826e
    MOV dword ptr [EBX + 0x2d8],0x0     ; 005b8271
    LEA EDI,[EBX + 0x2f0]               ; 005b827b
    MOV dword ptr [EBX + 0x2dc],0x0     ; 005b8281
    PUSH EDI                            ; 005b828b
    MOV AL,byte ptr [ESI]               ; 005b828c | = "none" | s_ne_00652ded
        ;   Label: LAB_005b828c
    MOV byte ptr [EDI],AL               ; 005b828e
    CMP AL,0x0                          ; 005b8290
    JZ 0x005b82a4                       ; 005b8292
        ;   XREF to: 005b82a4 (CONDITIONAL_JUMP)  ; LAB_005b82a4
    MOV AL,byte ptr [ESI + 0x1]         ; 005b8294 | s_one_00652dec | s_e_00652dee
    ADD ESI,0x2                         ; 005b8297
    MOV byte ptr [EDI + 0x1],AL         ; 005b829a
    ADD EDI,0x2                         ; 005b829d
    CMP AL,0x0                          ; 005b82a0
    JNZ 0x005b828c                      ; 005b82a2
        ;   XREF to: 005b828c (CONDITIONAL_JUMP)  ; LAB_005b828c
    POP EDI                             ; 005b82a4
        ;   Label: LAB_005b82a4
    MOV ESI,0x652df0                    ; 005b82a5 | = "none"
    LEA EDI,[EBX + 0x354]               ; 005b82aa
    PUSH EDI                            ; 005b82b0
    MOV AL,byte ptr [ESI]               ; 005b82b1 | = "none" | s_ne_00652df2
        ;   Label: LAB_005b82b1
    MOV byte ptr [EDI],AL               ; 005b82b3
    CMP AL,0x0                          ; 005b82b5
    JZ 0x005b82c9                       ; 005b82b7
        ;   XREF to: 005b82c9 (CONDITIONAL_JUMP)  ; LAB_005b82c9
    MOV AL,byte ptr [ESI + 0x1]         ; 005b82b9 | s_one_00652df1 | s_e_00652df3
    ADD ESI,0x2                         ; 005b82bc
    MOV byte ptr [EDI + 0x1],AL         ; 005b82bf
    ADD EDI,0x2                         ; 005b82c2
    CMP AL,0x0                          ; 005b82c5
    JNZ 0x005b82b1                      ; 005b82c7
        ;   XREF to: 005b82b1 (CONDITIONAL_JUMP)  ; LAB_005b82b1
    POP EDI                             ; 005b82c9
        ;   Label: LAB_005b82c9
    MOV ESI,0x652df5                    ; 005b82ca | = "none"
    LEA EDI,[EBX + 0x3b8]               ; 005b82cf
    PUSH EDI                            ; 005b82d5
    MOV AL,byte ptr [ESI]               ; 005b82d6 | = "none" | s_ne_00652df7
        ;   Label: LAB_005b82d6
    MOV byte ptr [EDI],AL               ; 005b82d8
    CMP AL,0x0                          ; 005b82da
    JZ 0x005b82ee                       ; 005b82dc
        ;   XREF to: 005b82ee (CONDITIONAL_JUMP)  ; LAB_005b82ee
    MOV AL,byte ptr [ESI + 0x1]         ; 005b82de | s_one_00652df6 | s_e_00652df8
    ADD ESI,0x2                         ; 005b82e1
    MOV byte ptr [EDI + 0x1],AL         ; 005b82e4
    ADD EDI,0x2                         ; 005b82e7
    CMP AL,0x0                          ; 005b82ea
    JNZ 0x005b82d6                      ; 005b82ec
        ;   XREF to: 005b82d6 (CONDITIONAL_JUMP)  ; LAB_005b82d6
    POP EDI                             ; 005b82ee
        ;   Label: LAB_005b82ee
    MOV ESI,0x652dfa                    ; 005b82ef | = "none"
    LEA EDI,[EBX + 0x41c]               ; 005b82f4
    PUSH EDI                            ; 005b82fa
    MOV AL,byte ptr [ESI]               ; 005b82fb | = "none" | s_ne_00652dfc
        ;   Label: LAB_005b82fb
    MOV byte ptr [EDI],AL               ; 005b82fd
    CMP AL,0x0                          ; 005b82ff
    JZ 0x005b8313                       ; 005b8301
        ;   XREF to: 005b8313 (CONDITIONAL_JUMP)  ; LAB_005b8313
    MOV AL,byte ptr [ESI + 0x1]         ; 005b8303 | s_one_00652dfb | s_e_00652dfd
    ADD ESI,0x2                         ; 005b8306
    MOV byte ptr [EDI + 0x1],AL         ; 005b8309
    ADD EDI,0x2                         ; 005b830c
    CMP AL,0x0                          ; 005b830f
    JNZ 0x005b82fb                      ; 005b8311
        ;   XREF to: 005b82fb (CONDITIONAL_JUMP)  ; LAB_005b82fb
    POP EDI                             ; 005b8313
        ;   Label: LAB_005b8313
    MOV dword ptr [EBX + 0x480],0x3f800000 ; 005b8314
    MOV dword ptr [EBX + 0x484],0x3f800000 ; 005b831e
    MOV byte ptr [EBX + 0x48c],0x0      ; 005b8328
    MOV byte ptr [EBX + 0x4f0],0x0      ; 005b832f
    MOV dword ptr [EBX + 0x554],0x3f800000 ; 005b8336
    MOV dword ptr [EBX + 0x558],0x3dcccccd ; 005b8340
    MOV EAX,EBX                         ; 005b834a
    MOV dword ptr [EBX + 0x55c],0x0     ; 005b834c
    POP EDI                             ; 005b8356
    POP ESI                             ; 005b8357
    POP EBX                             ; 005b8358
    RET                                 ; 005b8359

