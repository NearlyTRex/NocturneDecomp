; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ground_cpp_CGround_renderVisibleTerrain_FUN_004e7e60(CGround *this_ptr)
;
; Parameters:
; CGround *        Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_ground.cpp_CGround_render_FUN_004e7f80 at 004e7fe1
;
; Called Functions:
;   core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e7e60
        ;   Label: core_ground.cpp_CGround_renderVisibleTerrain_FUN_004e7e60
    PUSH ESI                            ; 004e7e61
    PUSH EDI                            ; 004e7e62
    PUSH EBP                            ; 004e7e63
    SUB ESP,0x10                        ; 004e7e64
    MOV EBX,dword ptr [ESP + 0x24]      ; 004e7e67
    MOV EBP,dword ptr [EBX + 0x10]      ; 004e7e6b
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004e7e6e
    NEG EBP                             ; 004e7e71
    CMP EBP,EDX                         ; 004e7e73
    JGE 0x004e7e79                      ; 004e7e75
        ;   XREF to: 004e7e79 (CONDITIONAL_JUMP)  ; LAB_004e7e79
    MOV EBP,EDX                         ; 004e7e77
    MOV EAX,dword ptr [EBX + 0x10]      ; 004e7e79
        ;   Label: LAB_004e7e79
    MOV dword ptr [ESP + 0x4],EAX       ; 004e7e7c
    MOV ECX,dword ptr [ESP + 0x4]       ; 004e7e80
    MOV EAX,dword ptr [EBX + 0x40]      ; 004e7e84
    CMP EAX,ECX                         ; 004e7e87
    JGE 0x004e7e8f                      ; 004e7e89
        ;   XREF to: 004e7e8f (CONDITIONAL_JUMP)  ; LAB_004e7e8f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e7e8b
    MOV EAX,dword ptr [EBX + 0x14]      ; 004e7e8f
        ;   Label: LAB_004e7e8f
    MOV ESI,dword ptr [EBX + 0x44]      ; 004e7e92
    NEG EAX                             ; 004e7e95
    CMP EAX,ESI                         ; 004e7e97
    JGE 0x004e7e9d                      ; 004e7e99
        ;   XREF to: 004e7e9d (CONDITIONAL_JUMP)  ; LAB_004e7e9d
    MOV EAX,ESI                         ; 004e7e9b
    MOV ESI,dword ptr [EBX + 0x14]      ; 004e7e9d
        ;   Label: LAB_004e7e9d
    MOV dword ptr [ESP],ESI             ; 004e7ea0
    MOV EDI,dword ptr [ESP]             ; 004e7ea3
    MOV ESI,dword ptr [EBX + 0x48]      ; 004e7ea6
    CMP ESI,EDI                         ; 004e7ea9
    JGE 0x004e7eb0                      ; 004e7eab
        ;   XREF to: 004e7eb0 (CONDITIONAL_JUMP)  ; LAB_004e7eb0
    MOV dword ptr [ESP],ESI             ; 004e7ead
    MOV EDI,EAX                         ; 004e7eb0
        ;   Label: LAB_004e7eb0
    TEST EAX,EAX                        ; 004e7eb2
    JL 0x004e7f2f                       ; 004e7eb4
        ;   XREF to: 004e7f2f (CONDITIONAL_JUMP)  ; LAB_004e7f2f
    MOV EDI,dword ptr [ESP]             ; 004e7eba
        ;   Label: LAB_004e7eba
    DEC EDI                             ; 004e7ebd
    TEST EDI,EDI                        ; 004e7ebe
    JL 0x004e7efc                       ; 004e7ec0
        ;   XREF to: 004e7efc (CONDITIONAL_JUMP)  ; LAB_004e7efc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7ec2
    DEC EAX                             ; 004e7ec6
    MOV dword ptr [ESP + 0xc],EAX       ; 004e7ec7
    MOV ESI,EBP                         ; 004e7ecb
        ;   Label: LAB_004e7ecb
    TEST EBP,EBP                        ; 004e7ecd
    JL 0x004e7f54                       ; 004e7ecf
        ;   XREF to: 004e7f54 (CONDITIONAL_JUMP)  ; LAB_004e7f54
        ;   Label: LAB_004e7ecf
    MOV ESI,dword ptr [ESP + 0xc]       ; 004e7ed5
    TEST ESI,ESI                        ; 004e7ed9
    JL 0x004e7ef7                       ; 004e7edb
        ;   XREF to: 004e7ef7 (CONDITIONAL_JUMP)  ; LAB_004e7ef7
    MOV EAX,dword ptr [EBX + 0x30]      ; 004e7edd
        ;   Label: LAB_004e7edd
    ADD EAX,EDI                         ; 004e7ee0
    PUSH EAX                            ; 004e7ee2
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004e7ee3
    ADD EAX,ESI                         ; 004e7ee6
    PUSH EAX                            ; 004e7ee8
    PUSH EBX                            ; 004e7ee9
    DEC ESI                             ; 004e7eea
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80 ; 004e7eeb
        ;   XREF to: 004e7c80 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004e7ef0
    TEST ESI,ESI                        ; 004e7ef3
    JGE 0x004e7edd                      ; 004e7ef5
        ;   XREF to: 004e7edd (CONDITIONAL_JUMP)  ; LAB_004e7edd
    DEC EDI                             ; 004e7ef7
        ;   Label: LAB_004e7ef7
    TEST EDI,EDI                        ; 004e7ef8
    JGE 0x004e7ecb                      ; 004e7efa
        ;   XREF to: 004e7ecb (CONDITIONAL_JUMP)  ; LAB_004e7ecb
    ADD ESP,0x10                        ; 004e7efc
        ;   Label: LAB_004e7efc
    POP EBP                             ; 004e7eff
    POP EDI                             ; 004e7f00
    POP ESI                             ; 004e7f01
    POP EBX                             ; 004e7f02
    RET                                 ; 004e7f03
    INC EDI                             ; 004e7f04
        ;   Label: LAB_004e7f04
    TEST EDI,EDI                        ; 004e7f05
    JGE 0x004e7eba                      ; 004e7f07
        ;   XREF to: 004e7eba (CONDITIONAL_JUMP)  ; LAB_004e7eba
    MOV ESI,EBP                         ; 004e7f09
        ;   Label: LAB_004e7f09
    TEST EBP,EBP                        ; 004e7f0b
    JL 0x004e7f3a                       ; 004e7f0d
        ;   XREF to: 004e7f3a (CONDITIONAL_JUMP)  ; LAB_004e7f3a
        ;   Label: LAB_004e7f0d
    MOV ESI,dword ptr [ESP + 0x8]       ; 004e7f0f
    TEST ESI,ESI                        ; 004e7f13
        ;   Label: LAB_004e7f13
    JL 0x004e7f04                       ; 004e7f15
        ;   XREF to: 004e7f04 (CONDITIONAL_JUMP)  ; LAB_004e7f04
    MOV EAX,dword ptr [EBX + 0x30]      ; 004e7f17
    ADD EAX,EDI                         ; 004e7f1a
    PUSH EAX                            ; 004e7f1c
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004e7f1d
    ADD EAX,ESI                         ; 004e7f20
    PUSH EAX                            ; 004e7f22
    PUSH EBX                            ; 004e7f23
    DEC ESI                             ; 004e7f24
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80 ; 004e7f25
        ;   XREF to: 004e7c80 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004e7f2a
    JMP 0x004e7f13                      ; 004e7f2d
        ;   XREF to: 004e7f13 (UNCONDITIONAL_JUMP)  ; LAB_004e7f13
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e7f2f
        ;   Label: LAB_004e7f2f
    DEC EAX                             ; 004e7f33
    MOV dword ptr [ESP + 0x8],EAX       ; 004e7f34
    JMP 0x004e7f09                      ; 004e7f38
        ;   XREF to: 004e7f09 (UNCONDITIONAL_JUMP)  ; LAB_004e7f09
    MOV EAX,dword ptr [EBX + 0x30]      ; 004e7f3a
        ;   Label: LAB_004e7f3a
    ADD EAX,EDI                         ; 004e7f3d
    PUSH EAX                            ; 004e7f3f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004e7f40
    ADD EAX,ESI                         ; 004e7f43
    PUSH EAX                            ; 004e7f45
    PUSH EBX                            ; 004e7f46
    INC ESI                             ; 004e7f47
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80 ; 004e7f48
        ;   XREF to: 004e7c80 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004e7f4d
    TEST ESI,ESI                        ; 004e7f50
    JMP 0x004e7f0d                      ; 004e7f52
        ;   XREF to: 004e7f0d (UNCONDITIONAL_JUMP)  ; LAB_004e7f0d
    MOV EAX,dword ptr [EBX + 0x30]      ; 004e7f54
        ;   Label: LAB_004e7f54
    ADD EAX,EDI                         ; 004e7f57
    PUSH EAX                            ; 004e7f59
    MOV EAX,dword ptr [EBX + 0x2c]      ; 004e7f5a
    ADD EAX,ESI                         ; 004e7f5d
    PUSH EAX                            ; 004e7f5f
    PUSH EBX                            ; 004e7f60
    INC ESI                             ; 004e7f61
    CALL core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80 ; 004e7f62
        ;   XREF to: 004e7c80 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_renderTerrainQuad_FUN_004e7c80(CGround * this_ptr, int world_column, int world_row)
    ADD ESP,0xc                         ; 004e7f67
    TEST ESI,ESI                        ; 004e7f6a
    JMP 0x004e7ecf                      ; 004e7f6c
        ;   XREF to: 004e7ecf (UNCONDITIONAL_JUMP)  ; LAB_004e7ecf

