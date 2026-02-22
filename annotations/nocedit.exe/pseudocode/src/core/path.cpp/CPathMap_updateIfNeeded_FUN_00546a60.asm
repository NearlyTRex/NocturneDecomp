; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_CPathMap_updateIfNeeded_FUN_00546a60(CPathMap *this_ptr,CVector3f *source_position,int force_update)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   source_position
; int              Stack[0xc]:4   force_update
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined1       Stack[-0x1c]:1  local_1c
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0 at 00408bf8
;   core_path.cpp_FUN_00548390 at 00548477
;   core_set.cpp_CDemonSet_processActors_FUN_0056b810 at 0056ba45
;
; Referenced Globals:
;   double g_PathUpdateDistanceThreshold = 4
;   int g_GlobalDeltaTimeInt
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
;   core_path.cpp_CPathMap_reset_FUN_00548510
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546a60
        ;   Label: core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60
    PUSH ESI                            ; 00546a61
    PUSH EDI                            ; 00546a62
    PUSH EBP                            ; 00546a63
    MOV EBP,ESP                         ; 00546a64
    SUB ESP,0x18                        ; 00546a66
    AND ESP,0xfffffff8                  ; 00546a69
    MOV EBX,dword ptr [EBP + 0x14]      ; 00546a6c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00546a6f
    CMP dword ptr [EBP + 0x1c],0x0      ; 00546a72
    JNZ 0x00546b48                      ; 00546a76
        ;   XREF to: 00546b48 (CONDITIONAL_JUMP)  ; LAB_00546b48
    MOV EAX,[0x02cf6a80]                ; 00546a7c | g_GlobalDeltaTimeInt
    MOV ECX,dword ptr [EBX + 0x138d8]   ; 00546a81
    SUB ECX,EAX                         ; 00546a87
    MOV dword ptr [EBX + 0x138d8],ECX   ; 00546a89
    TEST ECX,ECX                        ; 00546a8f
    JL 0x00546b5a                       ; 00546a91
        ;   XREF to: 00546b5a (CONDITIONAL_JUMP)  ; LAB_00546b5a
    LEA EAX,[EBX + 0x138c0]             ; 00546a97
    FLD float ptr [ESI]                 ; 00546a9d
    FSUB float ptr [EAX]                ; 00546a9f
    FSTP float ptr [ESP]                ; 00546aa1
    FLD float ptr [ESI + 0x4]           ; 00546aa4
    FSUB float ptr [EAX + 0x4]          ; 00546aa7
    FLD float ptr [ESP]                 ; 00546aaa
    FXCH                                ; 00546aad
    FSTP float ptr [ESP + 0x4]          ; 00546aaf
    FLD float ptr [ESI + 0x8]           ; 00546ab3
    FSUB float ptr [EAX + 0x8]          ; 00546ab6
    FXCH                                ; 00546ab9
    FABS                                ; 00546abb
    FXCH                                ; 00546abd
    FSTP float ptr [ESP + 0x8]          ; 00546abf
    FCOMP double ptr [0x0063e998]       ; 00546ac3 | g_PathUpdateDistanceThreshold
    FNSTSW AX                           ; 00546ac9
    SAHF                                ; 00546acb
    JNC 0x00546af0                      ; 00546acc
        ;   XREF to: 00546af0 (CONDITIONAL_JUMP)  ; LAB_00546af0
    FLD float ptr [ESP + 0x4]           ; 00546ace
    FABS                                ; 00546ad2
    FCOMP double ptr [0x0063e998]       ; 00546ad4 | g_PathUpdateDistanceThreshold
    FNSTSW AX                           ; 00546ada
    SAHF                                ; 00546adc
    JNC 0x00546af0                      ; 00546add
        ;   XREF to: 00546af0 (CONDITIONAL_JUMP)  ; LAB_00546af0
    FLD float ptr [ESP + 0x8]           ; 00546adf
    FABS                                ; 00546ae3
    FCOMP double ptr [0x0063e998]       ; 00546ae5 | g_PathUpdateDistanceThreshold
    FNSTSW AX                           ; 00546aeb
    SAHF                                ; 00546aed
    JC 0x00546b41                       ; 00546aee
        ;   XREF to: 00546b41 (CONDITIONAL_JUMP)  ; LAB_00546b41
    CMP EBX,ESI                         ; 00546af0
        ;   Label: LAB_00546af0
    JZ 0x00546b04                       ; 00546af2
        ;   XREF to: 00546b04 (CONDITIONAL_JUMP)  ; LAB_00546b04
    MOV EAX,dword ptr [ESI]             ; 00546af4
    MOV dword ptr [EBX],EAX             ; 00546af6
    MOV EAX,dword ptr [ESI + 0x4]       ; 00546af8
    MOV dword ptr [EBX + 0x4],EAX       ; 00546afb
    MOV EAX,dword ptr [ESI + 0x8]       ; 00546afe
    MOV dword ptr [EBX + 0x8],EAX       ; 00546b01
    PUSH EBX                            ; 00546b04
        ;   Label: LAB_00546b04
    PUSH 0x3277d14                      ; 00546b05 | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0x14]                ; 00546b0a
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880 ; 00546b0e
        ;   XREF to: 00499880 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x14]                ; 00546b13
    LEA EDI,[EBX + 0xc]                 ; 00546b17
    ADD ESP,0x8                         ; 00546b1a
    MOVSD ES:EDI,ESI                    ; 00546b1d
    MOVSD ES:EDI,ESI                    ; 00546b1e
    MOVSD ES:EDI,ESI                    ; 00546b1f
    MOV EAX,dword ptr [EBX + 0xc]       ; 00546b20
    CMP EAX,dword ptr [EBX + 0x138b0]   ; 00546b23
    JNZ 0x00546b68                      ; 00546b29
        ;   XREF to: 00546b68 (CONDITIONAL_JUMP)  ; LAB_00546b68
    MOV ECX,dword ptr [EBX + 0x138b4]   ; 00546b2b
    CMP ECX,dword ptr [EBX + 0x10]      ; 00546b31
    JNZ 0x00546b68                      ; 00546b34
        ;   XREF to: 00546b68 (CONDITIONAL_JUMP)  ; LAB_00546b68
    MOV ESI,dword ptr [EBX + 0x138b8]   ; 00546b36
    CMP ESI,dword ptr [EBX + 0x14]      ; 00546b3c
    JNZ 0x00546b68                      ; 00546b3f
        ;   XREF to: 00546b68 (CONDITIONAL_JUMP)  ; LAB_00546b68
    MOV ESP,EBP                         ; 00546b41
        ;   Label: LAB_00546b41
    POP EBP                             ; 00546b43
    POP EDI                             ; 00546b44
    POP ESI                             ; 00546b45
    POP EBX                             ; 00546b46
    RET                                 ; 00546b47
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 00546b48
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_00546b48
    AND EAX,0x3fff                      ; 00546b4d
    MOV dword ptr [EBX + 0x138d8],EAX   ; 00546b52
    JMP 0x00546af0                      ; 00546b58
        ;   XREF to: 00546af0 (UNCONDITIONAL_JUMP)  ; LAB_00546af0
    LEA EAX,[ECX + 0x4000]              ; 00546b5a
        ;   Label: LAB_00546b5a
    MOV dword ptr [EBX + 0x138d8],EAX   ; 00546b60
    JMP 0x00546af0                      ; 00546b66
        ;   XREF to: 00546af0 (UNCONDITIONAL_JUMP)  ; LAB_00546af0
    LEA EDI,[EBX + 0x138b0]             ; 00546b68
        ;   Label: LAB_00546b68
    LEA ESI,[EBX + 0xc]                 ; 00546b6e
    MOVSD ES:EDI,ESI                    ; 00546b71
    MOVSD ES:EDI,ESI                    ; 00546b72
    MOVSD ES:EDI,ESI                    ; 00546b73
    MOV EAX,dword ptr [EBX + 0xc]       ; 00546b74
    MOV ESI,dword ptr [EBX + 0x14]      ; 00546b77
    SUB EAX,0x32                        ; 00546b7a
    SUB ESI,0x32                        ; 00546b7d
    MOV dword ptr [EBX + 0x24],EAX      ; 00546b80
    MOV dword ptr [EBX + 0x2c],ESI      ; 00546b83
    MOV EAX,dword ptr [EBX + 0x10]      ; 00546b86
    PUSH EBX                            ; 00546b89
    MOV dword ptr [EBX + 0x28],EAX      ; 00546b8a
    CALL core_path.cpp_CPathMap_reset_FUN_00548510 ; 00546b8d
        ;   XREF to: 00548510 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_reset_FUN_00548510(CPathMap * this_ptr)
    ADD ESP,0x4                         ; 00546b92
    MOV ESP,EBP                         ; 00546b95
    POP EBP                             ; 00546b97
    POP EDI                             ; 00546b98
    POP ESI                             ; 00546b99
    POP EBX                             ; 00546b9a
    RET                                 ; 00546b9b

