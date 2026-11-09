; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_005121a0(CPathMap *this_ptr,CVector3f *source_position,int force_update)
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
;   core_actor.cpp_FUN_00408a80 at 00408ac8
;   core_path.cpp_FUN_00513d30 at 00513e0d
;   core_set.cpp_FUN_0052e940 at 0052eb7c
;
; Referenced Globals:
;   undefined4 DAT_005e1799
;   undefined4 DAT_01c2a370
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_FUN_00476a50
;   core_path.cpp_CPathMap_reset_FUN_00513eb0
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005121a0
        ;   Label: core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0
    PUSH ESI                            ; 005121a1
    PUSH EDI                            ; 005121a2
    PUSH EBP                            ; 005121a3
    MOV EBP,ESP                         ; 005121a4
    SUB ESP,0x24                        ; 005121a6
    AND ESP,0xfffffff8                  ; 005121a9
    MOV EBX,dword ptr [EBP + 0x14]      ; 005121ac
    CMP dword ptr [EBP + 0x1c],0x0      ; 005121af
    JNZ 0x00512295                      ; 005121b3
        ;   XREF to: 00512295 (CONDITIONAL_JUMP)  ; LAB_00512295
    MOV EAX,[0x01c2a370]                ; 005121b9 | DAT_01c2a370
    MOV ECX,dword ptr [EBX + 0x138d8]   ; 005121be
    SUB ECX,EAX                         ; 005121c4
    MOV dword ptr [EBX + 0x138d8],ECX   ; 005121c6
    TEST ECX,ECX                        ; 005121cc
    JL 0x005122a7                       ; 005121ce
        ;   XREF to: 005122a7 (CONDITIONAL_JUMP)  ; LAB_005122a7
    MOV ESI,dword ptr [EBP + 0x18]      ; 005121d4
    LEA EDI,[ESP + 0xc]                 ; 005121d7
    LEA EAX,[EBX + 0x138c0]             ; 005121db
    FLD float ptr [ESI + 0x4]           ; 005121e1
    FLD float ptr [ESI + 0x8]           ; 005121e4
    FLD float ptr [ESI]                 ; 005121e7
    MOV ESI,ESP                         ; 005121e9
    FSUB float ptr [EAX]                ; 005121eb
    FXCH ST2                            ; 005121ed
    FSUB float ptr [EAX + 0x4]          ; 005121ef
    FXCH                                ; 005121f2
    FSUB float ptr [EAX + 0x8]          ; 005121f4
    FXCH ST2                            ; 005121f7
    FSTP float ptr [ESP]                ; 005121f9
    FSTP float ptr [ESP + 0x4]          ; 005121fc
    FSTP float ptr [ESP + 0x8]          ; 00512200
    MOVSD ES:EDI,ESI                    ; 00512204
    MOVSD ES:EDI,ESI                    ; 00512205
    MOVSD ES:EDI,ESI                    ; 00512206
    FLD float ptr [ESP + 0xc]           ; 00512207
    FABS                                ; 0051220b
    FCOMP double ptr [0x005e1799]       ; 0051220d | DAT_005e1799
    FNSTSW AX                           ; 00512213
    SAHF                                ; 00512215
    JNC 0x0051223a                      ; 00512216
        ;   XREF to: 0051223a (CONDITIONAL_JUMP)  ; LAB_0051223a
    FLD float ptr [ESP + 0x10]          ; 00512218
    FABS                                ; 0051221c
    FCOMP double ptr [0x005e1799]       ; 0051221e | DAT_005e1799
    FNSTSW AX                           ; 00512224
    SAHF                                ; 00512226
    JNC 0x0051223a                      ; 00512227
        ;   XREF to: 0051223a (CONDITIONAL_JUMP)  ; LAB_0051223a
    FLD float ptr [ESP + 0x14]          ; 00512229
    FABS                                ; 0051222d
    FCOMP double ptr [0x005e1799]       ; 0051222f | DAT_005e1799
    FNSTSW AX                           ; 00512235
    SAHF                                ; 00512237
    JC 0x0051228e                       ; 00512238
        ;   XREF to: 0051228e (CONDITIONAL_JUMP)  ; LAB_0051228e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051223a
        ;   Label: LAB_0051223a
    CMP EBX,EAX                         ; 0051223d
    JZ 0x00512251                       ; 0051223f
        ;   XREF to: 00512251 (CONDITIONAL_JUMP)  ; LAB_00512251
    MOV EDX,dword ptr [EAX]             ; 00512241
    MOV dword ptr [EBX],EDX             ; 00512243
    MOV EDX,dword ptr [EAX + 0x4]       ; 00512245
    MOV dword ptr [EBX + 0x4],EDX       ; 00512248
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051224b
    MOV dword ptr [EBX + 0x8],EDX       ; 0051224e
    PUSH EBX                            ; 00512251
        ;   Label: LAB_00512251
    PUSH 0x1fc9c68                      ; 00512252 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x20]                ; 00512257
    CALL core_dtrace.cpp_FUN_00476a50   ; 0051225b
        ;   XREF to: 00476a50 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00476a50()
    LEA ESI,[ESP + 0x20]                ; 00512260
    LEA EDI,[EBX + 0xc]                 ; 00512264
    ADD ESP,0x8                         ; 00512267
    MOVSD ES:EDI,ESI                    ; 0051226a
    MOVSD ES:EDI,ESI                    ; 0051226b
    MOVSD ES:EDI,ESI                    ; 0051226c
    MOV EAX,dword ptr [EBX + 0xc]       ; 0051226d
    CMP EAX,dword ptr [EBX + 0x138b0]   ; 00512270
    JNZ 0x005122b5                      ; 00512276
        ;   XREF to: 005122b5 (CONDITIONAL_JUMP)  ; LAB_005122b5
    MOV ECX,dword ptr [EBX + 0x138b4]   ; 00512278
    CMP ECX,dword ptr [EBX + 0x10]      ; 0051227e
    JNZ 0x005122b5                      ; 00512281
        ;   XREF to: 005122b5 (CONDITIONAL_JUMP)  ; LAB_005122b5
    MOV ESI,dword ptr [EBX + 0x138b8]   ; 00512283
    CMP ESI,dword ptr [EBX + 0x14]      ; 00512289
    JNZ 0x005122b5                      ; 0051228c
        ;   XREF to: 005122b5 (CONDITIONAL_JUMP)  ; LAB_005122b5
    MOV ESP,EBP                         ; 0051228e
        ;   Label: LAB_0051228e
    POP EBP                             ; 00512290
    POP EDI                             ; 00512291
    POP ESI                             ; 00512292
    POP EBX                             ; 00512293
    RET                                 ; 00512294
    CALL crt_stdlib.c_rand_FUN_005b849c ; 00512295
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
        ;   Label: LAB_00512295
    AND EAX,0x3fff                      ; 0051229a
    MOV dword ptr [EBX + 0x138d8],EAX   ; 0051229f
    JMP 0x0051223a                      ; 005122a5
        ;   XREF to: 0051223a (UNCONDITIONAL_JUMP)  ; LAB_0051223a
    LEA EDI,[ECX + 0x4000]              ; 005122a7
        ;   Label: LAB_005122a7
    MOV dword ptr [EBX + 0x138d8],EDI   ; 005122ad
    JMP 0x0051223a                      ; 005122b3
        ;   XREF to: 0051223a (UNCONDITIONAL_JUMP)  ; LAB_0051223a
    LEA EDI,[EBX + 0x138b0]             ; 005122b5
        ;   Label: LAB_005122b5
    LEA ESI,[EBX + 0xc]                 ; 005122bb
    MOVSD ES:EDI,ESI                    ; 005122be
    MOVSD ES:EDI,ESI                    ; 005122bf
    MOVSD ES:EDI,ESI                    ; 005122c0
    MOV EAX,dword ptr [EBX + 0xc]       ; 005122c1
    SUB EAX,0x32                        ; 005122c4
    MOV dword ptr [EBX + 0x24],EAX      ; 005122c7
    MOV EAX,dword ptr [EBX + 0x10]      ; 005122ca
    MOV dword ptr [EBX + 0x28],EAX      ; 005122cd
    MOV EAX,dword ptr [EBX + 0x14]      ; 005122d0
    SUB EAX,0x32                        ; 005122d3
    PUSH EBX                            ; 005122d6
    MOV dword ptr [EBX + 0x2c],EAX      ; 005122d7
    CALL core_path.cpp_CPathMap_reset_FUN_00513eb0 ; 005122da
        ;   XREF to: 00513eb0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00513eb0(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 005122df
    MOV ESP,EBP                         ; 005122e2
    POP EBP                             ; 005122e4
    POP EDI                             ; 005122e5
    POP ESI                             ; 005122e6
    POP EBX                             ; 005122e7
    RET                                 ; 005122e8

