; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPathMap * __cdecl core_path_cpp_getOrCreatePathMap_FUN_004f1c90(CLocation *location)
;
; Parameters:
; CLocation *      Stack[0x4]:4   location
; Local Variables:
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_path.cpp_getPathMap_FUN_004f1e00 at 004f1e05
;
; Referenced Globals:
;   WatcomTypeInfo g_CPathMapTypeInfo_005a1200
;   WatcomStaticDestructorNode g_WatcomStaticDestructorNode_005be0a8
;   undefined4 DAT_005be0b8
;   undefined4 DAT_005be0bc
;   undefined4 DAT_01e312f0
;   CDemonRaytrace g_CDemonRaytrace_01fba938
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360
;   crt_memory.c___arrinit_FUN_005644a7
;   crt_unknown.c__atexit_FUN_00564bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1c90
        ;   Label: core_path.cpp_getOrCreatePathMap_FUN_004f1c90
    PUSH ESI                            ; 004f1c91
    PUSH EDI                            ; 004f1c92
    PUSH EBP                            ; 004f1c93
    SUB ESP,0x24                        ; 004f1c94
    MOV EBP,dword ptr [ESP + 0x38]      ; 004f1c97
    MOV AH,byte ptr [0x01e312f0]        ; 004f1c9b | DAT_01e312f0
    TEST AH,0x1                         ; 004f1ca1
    JZ 0x004f1d89                       ; 004f1ca4
        ;   XREF to: 004f1d89 (CONDITIONAL_JUMP)  ; LAB_004f1d89
    CMP dword ptr [0x005be0b8],0x0      ; 004f1caa | DAT_005be0b8
        ;   Label: LAB_004f1caa
    JL 0x004f1dba                       ; 004f1cb1
        ;   XREF to: 004f1dba (CONDITIONAL_JUMP)  ; LAB_004f1dba
    LEA EAX,[EAX]                       ; 004f1cb7
    LEA EDX,[EDX]                       ; 004f1cbd
    PUSH EBP                            ; 004f1cc0
        ;   Label: LAB_004f1cc0
    LEA ESI,[ESP + 0x4]                 ; 004f1cc1
    PUSH 0x1fba938                      ; 004f1cc5 | g_CDemonRaytrace_01fba938
    LEA EDI,[ESP + 0x20]                ; 004f1cca
    XOR EBX,EBX                         ; 004f1cce
    CALL core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700 ; 004f1cd0
        ;   XREF to: 0046b700 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700()
    LEA ESI,[ESP + 0x8]                 ; 004f1cd5
    ADD ESP,0x8                         ; 004f1cd9
    XOR ECX,ECX                         ; 004f1cdc
    MOVSD ES:EDI,ESI                    ; 004f1cde
    MOVSD ES:EDI,ESI                    ; 004f1cdf
    MOVSD ES:EDI,ESI                    ; 004f1ce0
    XOR EDX,EDX                         ; 004f1ce1
    XOR ESI,ESI                         ; 004f1ce3
    MOV EDI,dword ptr [ESP + 0x18]      ; 004f1ce5
        ;   Label: LAB_004f1ce5
    CMP EDI,dword ptr [EDX + 0x1d5a150] ; 004f1ce9
    JNZ 0x004f1dd2                      ; 004f1cef
        ;   XREF to: 004f1dd2 (CONDITIONAL_JUMP)  ; LAB_004f1dd2
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004f1cf5
    CMP EDI,dword ptr [EDX + 0x1d5a154] ; 004f1cf9
    JNZ 0x004f1dd2                      ; 004f1cff
        ;   XREF to: 004f1dd2 (CONDITIONAL_JUMP)  ; LAB_004f1dd2
    MOV EDI,dword ptr [ESP + 0x20]      ; 004f1d05
    CMP EDI,dword ptr [EDX + 0x1d5a158] ; 004f1d09
    JNZ 0x004f1dd2                      ; 004f1d0f
        ;   XREF to: 004f1dd2 (CONDITIONAL_JUMP)  ; LAB_004f1dd2
    MOV ESI,ECX                         ; 004f1d15
    LEA ECX,[ESI*0x4 + 0x0]             ; 004f1d17
        ;   Label: LAB_004f1d17
    XOR EAX,EAX                         ; 004f1d1e
    MOV EBX,dword ptr [ECX + 0x5be0b8]  ; 004f1d20 | DAT_005be0b8 | DAT_005be0bc
        ;   Label: LAB_004f1d20
    MOV EDX,dword ptr [EAX + 0x5be0b8]  ; 004f1d26 | DAT_005be0b8 | DAT_005be0bc
    CMP EDX,EBX                         ; 004f1d2c
    JGE 0x004f1d39                      ; 004f1d2e
        ;   XREF to: 004f1d39 (CONDITIONAL_JUMP)  ; LAB_004f1d39
    LEA EDI,[EDX + 0x1]                 ; 004f1d30
    MOV dword ptr [EAX + 0x5be0b8],EDI  ; 004f1d33 | DAT_005be0bc | DAT_005be0b8
    ADD EAX,0x4                         ; 004f1d39
        ;   Label: LAB_004f1d39
    CMP EAX,0x30                        ; 004f1d3c
    JNZ 0x004f1d20                      ; 004f1d3f
        ;   XREF to: 004f1d20 (CONDITIONAL_JUMP)  ; LAB_004f1d20
    IMUL EBX,ESI,0x138dc                ; 004f1d41
    XOR EAX,EAX                         ; 004f1d47
    MOV dword ptr [ESI*0x4 + 0x5be0b8],EAX ; 004f1d49 | DAT_005be0b8
    MOV EAX,dword ptr [EBP]             ; 004f1d50
    MOV dword ptr [ESP + 0xc],EAX       ; 004f1d53
    LEA EAX,[EBP + 0x4]                 ; 004f1d57
    MOV EAX,dword ptr [EAX]             ; 004f1d5a
    MOV dword ptr [ESP + 0x10],EAX      ; 004f1d5c
    LEA EAX,[EBP + 0x8]                 ; 004f1d60
    MOV EAX,dword ptr [EAX]             ; 004f1d63
    PUSH 0x1                            ; 004f1d65
    MOV dword ptr [ESP + 0x18],EAX      ; 004f1d67
    LEA EAX,[ESP + 0x10]                ; 004f1d6b
    PUSH EAX                            ; 004f1d6f
    ADD EBX,0x1d468a0                   ; 004f1d70
    PUSH EBX                            ; 004f1d76
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360 ; 004f1d77
        ;   XREF to: 004f0360 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_004f0360(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 004f1d7c
    MOV EAX,EBX                         ; 004f1d7f
    ADD ESP,0x24                        ; 004f1d81
    POP EBP                             ; 004f1d84
    POP EDI                             ; 004f1d85
    POP ESI                             ; 004f1d86
    POP EBX                             ; 004f1d87
    RET                                 ; 004f1d88
    PUSH 0x5a1200                       ; 004f1d89 | g_CPathMapTypeInfo_005a1200
        ;   Label: LAB_004f1d89
    MOV DL,AH                           ; 004f1d8e
    PUSH 0xc                            ; 004f1d90
    OR DL,0x1                           ; 004f1d92
    PUSH 0x1d468a0                      ; 004f1d95
    MOV byte ptr [0x01e312f0],DL        ; 004f1d9a | DAT_01e312f0
    CALL crt_memory.c___arrinit_FUN_005644a7 ; 004f1da0
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005644a7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 004f1da5
    PUSH 0x5be0a8                       ; 004f1da8 | g_WatcomStaticDestructorNode_005be0a8
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004f1dad
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f1db2
    JMP 0x004f1caa                      ; 004f1db5
        ;   XREF to: 004f1caa (UNCONDITIONAL_JUMP)  ; LAB_004f1caa
    XOR EDX,EDX                         ; 004f1dba
        ;   Label: LAB_004f1dba
    XOR EAX,EAX                         ; 004f1dbc
    MOV dword ptr [EDX + 0x5be0b8],EAX  ; 004f1dbe | DAT_005be0b8 | DAT_005be0bc
        ;   Label: LAB_004f1dbe
    INC EAX                             ; 004f1dc4
    ADD EDX,0x4                         ; 004f1dc5
    CMP EAX,0xc                         ; 004f1dc8
    JL 0x004f1dbe                       ; 004f1dcb
        ;   XREF to: 004f1dbe (CONDITIONAL_JUMP)  ; LAB_004f1dbe
    JMP 0x004f1cc0                      ; 004f1dcd
        ;   XREF to: 004f1cc0 (UNCONDITIONAL_JUMP)  ; LAB_004f1cc0
    MOV EAX,dword ptr [EBX + 0x5be0b8]  ; 004f1dd2 | DAT_005be0b8 | DAT_005be0bc
        ;   Label: LAB_004f1dd2
    CMP EAX,dword ptr [ESI*0x4 + 0x5be0b8] ; 004f1dd8 | DAT_005be0b8
    JLE 0x004f1de3                      ; 004f1ddf
        ;   XREF to: 004f1de3 (CONDITIONAL_JUMP)  ; LAB_004f1de3
    MOV ESI,ECX                         ; 004f1de1
    ADD EBX,0x4                         ; 004f1de3
        ;   Label: LAB_004f1de3
    INC ECX                             ; 004f1de6
    ADD EDX,0x138dc                     ; 004f1de7
    CMP ECX,0xc                         ; 004f1ded
    JL 0x004f1ce5                       ; 004f1df0
        ;   XREF to: 004f1ce5 (CONDITIONAL_JUMP)  ; LAB_004f1ce5
    JMP 0x004f1d17                      ; 004f1df6
        ;   XREF to: 004f1d17 (UNCONDITIONAL_JUMP)  ; LAB_004f1d17

