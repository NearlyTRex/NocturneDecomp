; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004efb70(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   core_ground.cpp_CGround_render_FUN_004efc90 at 004efcf1
;
; Called Functions:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004efb70
        ;   Label: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004efb70
    PUSH ESI                            ; 004efb71
    PUSH EDI                            ; 004efb72
    PUSH EBP                            ; 004efb73
    SUB ESP,0x10                        ; 004efb74
    MOV EBX,dword ptr [ESP + 0x24]      ; 004efb77
    MOV EBP,dword ptr [EBX + 0x10]      ; 004efb7b
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004efb7e
    NEG EBP                             ; 004efb81
    CMP EBP,EDX                         ; 004efb83
    JGE 0x004efb89                      ; 004efb85
        ;   XREF to: 004efb89 (CONDITIONAL_JUMP)  ; LAB_004efb89
    MOV EBP,EDX                         ; 004efb87
    MOV EAX,dword ptr [EBX + 0x10]      ; 004efb89
        ;   Label: LAB_004efb89
    MOV dword ptr [ESP + 0x4],EAX       ; 004efb8c
    MOV ECX,dword ptr [ESP + 0x4]       ; 004efb90
    MOV EAX,dword ptr [EBX + 0x40]      ; 004efb94
    CMP EAX,ECX                         ; 004efb97
    JGE 0x004efb9f                      ; 004efb99
        ;   XREF to: 004efb9f (CONDITIONAL_JUMP)  ; LAB_004efb9f
    MOV dword ptr [ESP + 0x4],EAX       ; 004efb9b
    MOV EAX,dword ptr [EBX + 0x14]      ; 004efb9f
        ;   Label: LAB_004efb9f
    MOV ESI,dword ptr [EBX + 0x44]      ; 004efba2
    NEG EAX                             ; 004efba5
    CMP EAX,ESI                         ; 004efba7
    JGE 0x004efbad                      ; 004efba9
        ;   XREF to: 004efbad (CONDITIONAL_JUMP)  ; LAB_004efbad
    MOV EAX,ESI                         ; 004efbab
    MOV ESI,dword ptr [EBX + 0x14]      ; 004efbad
        ;   Label: LAB_004efbad
    MOV dword ptr [ESP],ESI             ; 004efbb0
    MOV EDI,dword ptr [ESP]             ; 004efbb3
    MOV ESI,dword ptr [EBX + 0x48]      ; 004efbb6
    CMP ESI,EDI                         ; 004efbb9
    JGE 0x004efbc0                      ; 004efbbb
        ;   XREF to: 004efbc0 (CONDITIONAL_JUMP)  ; LAB_004efbc0
    MOV dword ptr [ESP],ESI             ; 004efbbd
    MOV EDI,EAX                         ; 004efbc0
        ;   Label: LAB_004efbc0
    TEST EAX,EAX                        ; 004efbc2
    JL 0x004efc3f                       ; 004efbc4
        ;   XREF to: 004efc3f (CONDITIONAL_JUMP)  ; LAB_004efc3f
    MOV EDI,dword ptr [ESP]             ; 004efbca
        ;   Label: LAB_004efbca
    DEC EDI                             ; 004efbcd
    TEST EDI,EDI                        ; 004efbce
    JL 0x004efc0c                       ; 004efbd0
        ;   XREF to: 004efc0c (CONDITIONAL_JUMP)  ; LAB_004efc0c
    MOV EAX,dword ptr [ESP + 0x4]       ; 004efbd2
    DEC EAX                             ; 004efbd6
    MOV dword ptr [ESP + 0xc],EAX       ; 004efbd7
    MOV ESI,EBP                         ; 004efbdb
        ;   Label: LAB_004efbdb
    TEST EBP,EBP                        ; 004efbdd
    JL 0x004efc64                       ; 004efbdf
        ;   XREF to: 004efc64 (CONDITIONAL_JUMP)  ; LAB_004efc64
        ;   Label: LAB_004efbdf
    MOV ESI,dword ptr [ESP + 0xc]       ; 004efbe5
    TEST ESI,ESI                        ; 004efbe9
    JL 0x004efc07                       ; 004efbeb
        ;   XREF to: 004efc07 (CONDITIONAL_JUMP)  ; LAB_004efc07
    MOV EAX,dword ptr [EBX + 0x30]      ; 004efbed
        ;   Label: LAB_004efbed
    ADD EAX,EDI                         ; 004efbf0
    PUSH EAX                            ; 004efbf2
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004efbf3
    ADD EAX,ESI                         ; 004efbf6
    PUSH EAX                            ; 004efbf8
    PUSH EBX                            ; 004efbf9
    DEC ESI                             ; 004efbfa
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 ; 004efbfb
        ;   XREF to: 004ef990 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004efc00
    TEST ESI,ESI                        ; 004efc03
    JGE 0x004efbed                      ; 004efc05
        ;   XREF to: 004efbed (CONDITIONAL_JUMP)  ; LAB_004efbed
    DEC EDI                             ; 004efc07
        ;   Label: LAB_004efc07
    TEST EDI,EDI                        ; 004efc08
    JGE 0x004efbdb                      ; 004efc0a
        ;   XREF to: 004efbdb (CONDITIONAL_JUMP)  ; LAB_004efbdb
    ADD ESP,0x10                        ; 004efc0c
        ;   Label: LAB_004efc0c
    POP EBP                             ; 004efc0f
    POP EDI                             ; 004efc10
    POP ESI                             ; 004efc11
    POP EBX                             ; 004efc12
    RET                                 ; 004efc13
    INC EDI                             ; 004efc14
        ;   Label: LAB_004efc14
    TEST EDI,EDI                        ; 004efc15
    JGE 0x004efbca                      ; 004efc17
        ;   XREF to: 004efbca (CONDITIONAL_JUMP)  ; LAB_004efbca
    MOV ESI,EBP                         ; 004efc19
        ;   Label: LAB_004efc19
    TEST EBP,EBP                        ; 004efc1b
    JL 0x004efc4a                       ; 004efc1d
        ;   XREF to: 004efc4a (CONDITIONAL_JUMP)  ; LAB_004efc4a
        ;   Label: LAB_004efc1d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004efc1f
    TEST ESI,ESI                        ; 004efc23
        ;   Label: LAB_004efc23
    JL 0x004efc14                       ; 004efc25
        ;   XREF to: 004efc14 (CONDITIONAL_JUMP)  ; LAB_004efc14
    MOV EAX,dword ptr [EBX + 0x30]      ; 004efc27
    ADD EAX,EDI                         ; 004efc2a
    PUSH EAX                            ; 004efc2c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004efc2d
    ADD EAX,ESI                         ; 004efc30
    PUSH EAX                            ; 004efc32
    PUSH EBX                            ; 004efc33
    DEC ESI                             ; 004efc34
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 ; 004efc35
        ;   XREF to: 004ef990 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004efc3a
    JMP 0x004efc23                      ; 004efc3d
        ;   XREF to: 004efc23 (UNCONDITIONAL_JUMP)  ; LAB_004efc23
    MOV EAX,dword ptr [ESP + 0x4]       ; 004efc3f
        ;   Label: LAB_004efc3f
    DEC EAX                             ; 004efc43
    MOV dword ptr [ESP + 0x8],EAX       ; 004efc44
    JMP 0x004efc19                      ; 004efc48
        ;   XREF to: 004efc19 (UNCONDITIONAL_JUMP)  ; LAB_004efc19
    MOV EAX,dword ptr [EBX + 0x30]      ; 004efc4a
        ;   Label: LAB_004efc4a
    ADD EAX,EDI                         ; 004efc4d
    PUSH EAX                            ; 004efc4f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004efc50
    ADD EAX,ESI                         ; 004efc53
    PUSH EAX                            ; 004efc55
    PUSH EBX                            ; 004efc56
    INC ESI                             ; 004efc57
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 ; 004efc58
        ;   XREF to: 004ef990 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004efc5d
    TEST ESI,ESI                        ; 004efc60
    JMP 0x004efc1d                      ; 004efc62
        ;   XREF to: 004efc1d (UNCONDITIONAL_JUMP)  ; LAB_004efc1d
    MOV EAX,dword ptr [EBX + 0x30]      ; 004efc64
        ;   Label: LAB_004efc64
    ADD EAX,EDI                         ; 004efc67
    PUSH EAX                            ; 004efc69
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004efc6a
    ADD EAX,ESI                         ; 004efc6d
    PUSH EAX                            ; 004efc6f
    PUSH EBX                            ; 004efc70
    INC ESI                             ; 004efc71
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990 ; 004efc72
        ;   XREF to: 004ef990 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004ef990(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004efc77
    TEST ESI,ESI                        ; 004efc7a
    JMP 0x004efbdf                      ; 004efc7c
        ;   XREF to: 004efbdf (UNCONDITIONAL_JUMP)  ; LAB_004efbdf

