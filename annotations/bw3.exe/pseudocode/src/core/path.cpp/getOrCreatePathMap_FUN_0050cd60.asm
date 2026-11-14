; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_0050cd60(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_getPathMap_FUN_0050ced0 at 0050ced5
;
; Referenced Globals:
;   WatcomTypeInfo g_CPathMapTypeInfo
;   WatcomStaticDestructorNode g_PathMapCacheDestructorNode
;   undefined4 DAT_00603634
;   undefined4 DAT_00603638
;   undefined4 DAT_01ec1510
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050cd60
        ;   Label: core_path.cpp_getOrCreatePathMap_FUN_0050cd60
    PUSH ESI                            ; 0050cd61
    PUSH EDI                            ; 0050cd62
    PUSH EBP                            ; 0050cd63
    SUB ESP,0x24                        ; 0050cd64
    MOV AH,byte ptr [0x01ec1510]        ; 0050cd67 | DAT_01ec1510
    TEST AH,0x1                         ; 0050cd6d
    JZ 0x0050ce4f                       ; 0050cd70
        ;   XREF to: 0050ce4f (CONDITIONAL_JUMP)  ; LAB_0050ce4f
    CMP dword ptr [0x00603634],0x0      ; 0050cd76 | DAT_00603634
        ;   Label: LAB_0050cd76
    JL 0x0050ce80                       ; 0050cd7d
        ;   XREF to: 0050ce80 (CONDITIONAL_JUMP)  ; LAB_0050ce80
    LEA EAX,[EAX]                       ; 0050cd83
    LEA EDX,[EDX]                       ; 0050cd89
    NOP                                 ; 0050cd8f
    MOV ECX,dword ptr [ESP + 0x38]      ; 0050cd90
        ;   Label: LAB_0050cd90
    PUSH ECX                            ; 0050cd94
    LEA ESI,[ESP + 0x4]                 ; 0050cd95
    LEA EDI,[ESP + 0x1c]                ; 0050cd99
    PUSH 0x203b37c                      ; 0050cd9d | g_CDemonRaytraceInstance
    XOR EBP,EBP                         ; 0050cda2
    XOR EBX,EBX                         ; 0050cda4
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0 ; 0050cda6
        ;   XREF to: 00477ac0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00477ac0(CDemonRaytrace * this_ptr, CVector3f * world_position, CVector3i * output_voxel_coords)
    LEA ESI,[ESP + 0x8]                 ; 0050cdab
    ADD ESP,0x8                         ; 0050cdaf
    XOR ECX,ECX                         ; 0050cdb2
    XOR EDX,EDX                         ; 0050cdb4
    MOVSD ES:EDI,ESI                    ; 0050cdb6
    MOVSD ES:EDI,ESI                    ; 0050cdb7
    MOVSD ES:EDI,ESI                    ; 0050cdb8
    MOV ESI,dword ptr [ESP + 0x18]      ; 0050cdb9
        ;   Label: LAB_0050cdb9
    CMP ESI,dword ptr [EDX + 0x1dea370] ; 0050cdbd
    JNZ 0x0050ce98                      ; 0050cdc3
        ;   XREF to: 0050ce98 (CONDITIONAL_JUMP)  ; LAB_0050ce98
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0050cdc9
    CMP EDI,dword ptr [EDX + 0x1dea374] ; 0050cdcd
    JNZ 0x0050ce98                      ; 0050cdd3
        ;   XREF to: 0050ce98 (CONDITIONAL_JUMP)  ; LAB_0050ce98
    MOV ESI,dword ptr [ESP + 0x20]      ; 0050cdd9
    CMP ESI,dword ptr [EDX + 0x1dea378] ; 0050cddd
    JNZ 0x0050ce98                      ; 0050cde3
        ;   XREF to: 0050ce98 (CONDITIONAL_JUMP)  ; LAB_0050ce98
    MOV EBP,ECX                         ; 0050cde9
    LEA ECX,[EBP*0x4 + 0x0]             ; 0050cdeb
        ;   Label: LAB_0050cdeb
    XOR EAX,EAX                         ; 0050cdf2
    MOV EBX,dword ptr [ECX + 0x603634]  ; 0050cdf4 | DAT_00603634 | DAT_00603638
        ;   Label: LAB_0050cdf4
    MOV EDX,dword ptr [EAX + 0x603634]  ; 0050cdfa | DAT_00603634 | DAT_00603638
    CMP EDX,EBX                         ; 0050ce00
    JGE 0x0050ce0d                      ; 0050ce02
        ;   XREF to: 0050ce0d (CONDITIONAL_JUMP)  ; LAB_0050ce0d
    LEA ESI,[EDX + 0x1]                 ; 0050ce04
    MOV dword ptr [EAX + 0x603634],ESI  ; 0050ce07 | DAT_00603638 | DAT_00603634
    ADD EAX,0x4                         ; 0050ce0d
        ;   Label: LAB_0050ce0d
    CMP EAX,0x30                        ; 0050ce10
    JNZ 0x0050cdf4                      ; 0050ce13
        ;   XREF to: 0050cdf4 (CONDITIONAL_JUMP)  ; LAB_0050cdf4
    IMUL EBX,EBP,0x138dc                ; 0050ce15
    MOV ESI,dword ptr [ESP + 0x38]      ; 0050ce1b
    PUSH 0x1                            ; 0050ce1f
    LEA EAX,[ESP + 0x10]                ; 0050ce21
    XOR EDI,EDI                         ; 0050ce25
    PUSH EAX                            ; 0050ce27
    MOV dword ptr [EBP*0x4 + 0x603634],EDI ; 0050ce28 | DAT_00603634
    ADD EBX,0x1dd6ac0                   ; 0050ce2f
    LEA EDI,[ESP + 0x14]                ; 0050ce35
    PUSH EBX                            ; 0050ce39
    MOVSD ES:EDI,ESI                    ; 0050ce3a
    MOVSD ES:EDI,ESI                    ; 0050ce3b
    MOVSD ES:EDI,ESI                    ; 0050ce3c
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0 ; 0050ce3d
        ;   XREF to: 0050b1d0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_0050b1d0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 0050ce42
    MOV EAX,EBX                         ; 0050ce45
    ADD ESP,0x24                        ; 0050ce47
    POP EBP                             ; 0050ce4a
    POP EDI                             ; 0050ce4b
    POP ESI                             ; 0050ce4c
    POP EBX                             ; 0050ce4d
    RET                                 ; 0050ce4e
    PUSH 0x5e3180                       ; 0050ce4f | g_CPathMapTypeInfo
        ;   Label: LAB_0050ce4f
    MOV DL,AH                           ; 0050ce54
    PUSH 0xc                            ; 0050ce56
    OR DL,0x1                           ; 0050ce58
    PUSH 0x1dd6ac0                      ; 0050ce5b
    MOV byte ptr [0x01ec1510],DL        ; 0050ce60 | DAT_01ec1510
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 0050ce66
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0050ce6b
    PUSH 0x603624                       ; 0050ce6e | g_PathMapCacheDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 0050ce73
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0050ce78
    JMP 0x0050cd76                      ; 0050ce7b
        ;   XREF to: 0050cd76 (UNCONDITIONAL_JUMP)  ; LAB_0050cd76
    XOR EDX,EDX                         ; 0050ce80
        ;   Label: LAB_0050ce80
    XOR EAX,EAX                         ; 0050ce82
    MOV dword ptr [EDX + 0x603634],EAX  ; 0050ce84 | DAT_00603634 | DAT_00603638
        ;   Label: LAB_0050ce84
    INC EAX                             ; 0050ce8a
    ADD EDX,0x4                         ; 0050ce8b
    CMP EAX,0xc                         ; 0050ce8e
    JL 0x0050ce84                       ; 0050ce91
        ;   XREF to: 0050ce84 (CONDITIONAL_JUMP)  ; LAB_0050ce84
    JMP 0x0050cd90                      ; 0050ce93
        ;   XREF to: 0050cd90 (UNCONDITIONAL_JUMP)  ; LAB_0050cd90
    MOV EAX,dword ptr [EBX + 0x603634]  ; 0050ce98 | DAT_00603634 | DAT_00603638
        ;   Label: LAB_0050ce98
    CMP EAX,dword ptr [EBP*0x4 + 0x603634] ; 0050ce9e | DAT_00603634
    JLE 0x0050cea9                      ; 0050cea5
        ;   XREF to: 0050cea9 (CONDITIONAL_JUMP)  ; LAB_0050cea9
    MOV EBP,ECX                         ; 0050cea7
    ADD EBX,0x4                         ; 0050cea9
        ;   Label: LAB_0050cea9
    INC ECX                             ; 0050ceac
    ADD EDX,0x138dc                     ; 0050cead
    CMP ECX,0xc                         ; 0050ceb3
    JL 0x0050cdb9                       ; 0050ceb6
        ;   XREF to: 0050cdb9 (CONDITIONAL_JUMP)  ; LAB_0050cdb9
    JMP 0x0050cdeb                      ; 0050cebc
        ;   XREF to: 0050cdeb (UNCONDITIONAL_JUMP)  ; LAB_0050cdeb

