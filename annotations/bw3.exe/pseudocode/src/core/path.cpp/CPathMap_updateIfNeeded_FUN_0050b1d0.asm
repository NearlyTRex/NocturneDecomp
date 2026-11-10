; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(CPathMap *this_ptr,CVector3f *source_position,int force_update)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   source_position
; int              Stack[0xc]:4   force_update
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_setup_FUN_00408890 at 004088d8
;   core_path.cpp_getOrCreatePathMap_FUN_0050cd60 at 0050ce3d
;   core_set.cpp_CDemonSet_processActors_FUN_005353e0 at 0053561c
;
; Referenced Globals:
;   undefined4 DAT_005cb85c
;   undefined4 DAT_01c5fad0
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00477ac0
;   core_path.cpp_CPathMap_reset_FUN_0050cee0
;   crt_stdlib.c_rand_FUN_005a35cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050b1d0
        ;   Label: core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0
    PUSH ESI                            ; 0050b1d1
    PUSH EDI                            ; 0050b1d2
    PUSH EBP                            ; 0050b1d3
    MOV EBP,ESP                         ; 0050b1d4
    SUB ESP,0x24                        ; 0050b1d6
    AND ESP,0xfffffff8                  ; 0050b1d9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0050b1dc
    CMP dword ptr [EBP + 0x1c],0x0      ; 0050b1df
    JNZ 0x0050b2c5                      ; 0050b1e3
        ;   XREF to: 0050b2c5 (CONDITIONAL_JUMP)  ; LAB_0050b2c5
    MOV EAX,[0x01c5fad0]                ; 0050b1e9 | DAT_01c5fad0
    MOV ECX,dword ptr [EBX + 0x138d8]   ; 0050b1ee
    SUB ECX,EAX                         ; 0050b1f4
    MOV dword ptr [EBX + 0x138d8],ECX   ; 0050b1f6
    TEST ECX,ECX                        ; 0050b1fc
    JL 0x0050b2d7                       ; 0050b1fe
        ;   XREF to: 0050b2d7 (CONDITIONAL_JUMP)  ; LAB_0050b2d7
    MOV ESI,dword ptr [EBP + 0x18]      ; 0050b204
    LEA EDI,[ESP + 0xc]                 ; 0050b207
    LEA EAX,[EBX + 0x138c0]             ; 0050b20b
    FLD float ptr [ESI + 0x4]           ; 0050b211
    FLD float ptr [ESI + 0x8]           ; 0050b214
    FLD float ptr [ESI]                 ; 0050b217
    MOV ESI,ESP                         ; 0050b219
    FSUB float ptr [EAX]                ; 0050b21b
    FXCH ST2                            ; 0050b21d
    FSUB float ptr [EAX + 0x4]          ; 0050b21f
    FXCH                                ; 0050b222
    FSUB float ptr [EAX + 0x8]          ; 0050b224
    FXCH ST2                            ; 0050b227
    FSTP float ptr [ESP]                ; 0050b229
    FSTP float ptr [ESP + 0x4]          ; 0050b22c
    FSTP float ptr [ESP + 0x8]          ; 0050b230
    MOVSD ES:EDI,ESI                    ; 0050b234
    MOVSD ES:EDI,ESI                    ; 0050b235
    MOVSD ES:EDI,ESI                    ; 0050b236
    FLD float ptr [ESP + 0xc]           ; 0050b237
    FABS                                ; 0050b23b
    FCOMP double ptr [0x005cb85c]       ; 0050b23d | DAT_005cb85c
    FNSTSW AX                           ; 0050b243
    SAHF                                ; 0050b245
    JNC 0x0050b26a                      ; 0050b246
        ;   XREF to: 0050b26a (CONDITIONAL_JUMP)  ; LAB_0050b26a
    FLD float ptr [ESP + 0x10]          ; 0050b248
    FABS                                ; 0050b24c
    FCOMP double ptr [0x005cb85c]       ; 0050b24e | DAT_005cb85c
    FNSTSW AX                           ; 0050b254
    SAHF                                ; 0050b256
    JNC 0x0050b26a                      ; 0050b257
        ;   XREF to: 0050b26a (CONDITIONAL_JUMP)  ; LAB_0050b26a
    FLD float ptr [ESP + 0x14]          ; 0050b259
    FABS                                ; 0050b25d
    FCOMP double ptr [0x005cb85c]       ; 0050b25f | DAT_005cb85c
    FNSTSW AX                           ; 0050b265
    SAHF                                ; 0050b267
    JC 0x0050b2be                       ; 0050b268
        ;   XREF to: 0050b2be (CONDITIONAL_JUMP)  ; LAB_0050b2be
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050b26a
        ;   Label: LAB_0050b26a
    CMP EBX,EAX                         ; 0050b26d
    JZ 0x0050b281                       ; 0050b26f
        ;   XREF to: 0050b281 (CONDITIONAL_JUMP)  ; LAB_0050b281
    MOV EDX,dword ptr [EAX]             ; 0050b271
    MOV dword ptr [EBX],EDX             ; 0050b273
    MOV EDX,dword ptr [EAX + 0x4]       ; 0050b275
    MOV dword ptr [EBX + 0x4],EDX       ; 0050b278
    MOV EDX,dword ptr [EAX + 0x8]       ; 0050b27b
    MOV dword ptr [EBX + 0x8],EDX       ; 0050b27e
    PUSH EBX                            ; 0050b281
        ;   Label: LAB_0050b281
    PUSH 0x203b37c                      ; 0050b282 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x20]                ; 0050b287
    CALL core_dtrace.cpp_FUN_00477ac0   ; 0050b28b
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477ac0()
    LEA ESI,[ESP + 0x20]                ; 0050b290
    LEA EDI,[EBX + 0xc]                 ; 0050b294
    ADD ESP,0x8                         ; 0050b297
    MOVSD ES:EDI,ESI                    ; 0050b29a
    MOVSD ES:EDI,ESI                    ; 0050b29b
    MOVSD ES:EDI,ESI                    ; 0050b29c
    MOV EAX,dword ptr [EBX + 0xc]       ; 0050b29d
    CMP EAX,dword ptr [EBX + 0x138b0]   ; 0050b2a0
    JNZ 0x0050b2e5                      ; 0050b2a6
        ;   XREF to: 0050b2e5 (CONDITIONAL_JUMP)  ; LAB_0050b2e5
    MOV ECX,dword ptr [EBX + 0x138b4]   ; 0050b2a8
    CMP ECX,dword ptr [EBX + 0x10]      ; 0050b2ae
    JNZ 0x0050b2e5                      ; 0050b2b1
        ;   XREF to: 0050b2e5 (CONDITIONAL_JUMP)  ; LAB_0050b2e5
    MOV ESI,dword ptr [EBX + 0x138b8]   ; 0050b2b3
    CMP ESI,dword ptr [EBX + 0x14]      ; 0050b2b9
    JNZ 0x0050b2e5                      ; 0050b2bc
        ;   XREF to: 0050b2e5 (CONDITIONAL_JUMP)  ; LAB_0050b2e5
    MOV ESP,EBP                         ; 0050b2be
        ;   Label: LAB_0050b2be
    POP EBP                             ; 0050b2c0
    POP EDI                             ; 0050b2c1
    POP ESI                             ; 0050b2c2
    POP EBX                             ; 0050b2c3
    RET                                 ; 0050b2c4
    CALL crt_stdlib.c_rand_FUN_005a35cc ; 0050b2c5
        ;   XREF to: 005a35cc (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005a35cc()
        ;   Label: LAB_0050b2c5
    AND EAX,0x3fff                      ; 0050b2ca
    MOV dword ptr [EBX + 0x138d8],EAX   ; 0050b2cf
    JMP 0x0050b26a                      ; 0050b2d5
        ;   XREF to: 0050b26a (UNCONDITIONAL_JUMP)  ; LAB_0050b26a
    LEA EDI,[ECX + 0x4000]              ; 0050b2d7
        ;   Label: LAB_0050b2d7
    MOV dword ptr [EBX + 0x138d8],EDI   ; 0050b2dd
    JMP 0x0050b26a                      ; 0050b2e3
        ;   XREF to: 0050b26a (UNCONDITIONAL_JUMP)  ; LAB_0050b26a
    LEA EDI,[EBX + 0x138b0]             ; 0050b2e5
        ;   Label: LAB_0050b2e5
    LEA ESI,[EBX + 0xc]                 ; 0050b2eb
    MOVSD ES:EDI,ESI                    ; 0050b2ee
    MOVSD ES:EDI,ESI                    ; 0050b2ef
    MOVSD ES:EDI,ESI                    ; 0050b2f0
    MOV EAX,dword ptr [EBX + 0xc]       ; 0050b2f1
    SUB EAX,0x32                        ; 0050b2f4
    MOV dword ptr [EBX + 0x24],EAX      ; 0050b2f7
    MOV EAX,dword ptr [EBX + 0x10]      ; 0050b2fa
    MOV dword ptr [EBX + 0x28],EAX      ; 0050b2fd
    MOV EAX,dword ptr [EBX + 0x14]      ; 0050b300
    SUB EAX,0x32                        ; 0050b303
    PUSH EBX                            ; 0050b306
    MOV dword ptr [EBX + 0x2c],EAX      ; 0050b307
    CALL core_path.cpp_CPathMap_reset_FUN_0050cee0 ; 0050b30a
        ;   XREF to: 0050cee0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_0050cee0(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 0050b30f
    MOV ESP,EBP                         ; 0050b312
    POP EBP                             ; 0050b314
    POP EDI                             ; 0050b315
    POP ESI                             ; 0050b316
    POP EBX                             ; 0050b317
    RET                                 ; 0050b318

