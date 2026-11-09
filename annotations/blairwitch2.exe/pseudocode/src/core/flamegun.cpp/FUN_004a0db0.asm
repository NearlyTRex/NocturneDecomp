; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_flamegun_cpp_FUN_004a0db0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6b50
;   undefined4 DAT_00614d30
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a0db0
        ;   Label: core_flamegun.cpp_FUN_004a0db0
    SUB ESP,0x30                        ; 004a0db1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004a0db4
    CMP dword ptr [EBX + 0x6c4],0x0     ; 004a0db8
    JG 0x004a0dc8                       ; 004a0dbf
        ;   XREF to: 004a0dc8 (CONDITIONAL_JUMP)  ; LAB_004a0dc8
    XOR EAX,EAX                         ; 004a0dc1
    ADD ESP,0x30                        ; 004a0dc3
    POP EBX                             ; 004a0dc6
    RET                                 ; 004a0dc7
    PUSH EDI                            ; 004a0dc8
        ;   Label: LAB_004a0dc8
    PUSH ESI                            ; 004a0dc9
    PUSH EBX                            ; 004a0dca
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004a0dcb
    LEA ESI,[ESP + 0x30]                ; 004a0dd1
    LEA EDI,[ESP + 0x24]                ; 004a0dd5
    CALL dword ptr [EAX + 0xe8]         ; 004a0dd9
    ADD ESP,0x4                         ; 004a0ddf
    LEA EAX,[ESP + 0x20]                ; 004a0de2
    LEA ESI,[ESP + 0x2c]                ; 004a0de6
    PUSH EAX                            ; 004a0dea
    MOVSD ES:EDI,ESI                    ; 004a0deb
    MOVSD ES:EDI,ESI                    ; 004a0dec
    MOVSD ES:EDI,ESI                    ; 004a0ded
    PUSH EBX                            ; 004a0dee
    LEA ESI,[ESP + 0x10]                ; 004a0def
    CALL core_actor.cpp_FUN_00408d70    ; 004a0df3
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004a0df8
    PUSH 0x1                            ; 004a0dfb
    PUSH 0x3                            ; 004a0dfd
    LEA EAX,[EBX + 0x30]                ; 004a0dff
    PUSH EAX                            ; 004a0e02
    LEA EAX,[ESP + 0x20]                ; 004a0e03
    LEA EDI,[ESP + 0x20]                ; 004a0e07
    PUSH EAX                            ; 004a0e0b
    MOV ECX,dword ptr [0x00614d30]      ; 004a0e0c | DAT_00614d30
    LEA ESI,[ESP + 0x18]                ; 004a0e12
    PUSH ECX                            ; 004a0e16
    MOVSD ES:EDI,ESI                    ; 004a0e17
    MOVSD ES:EDI,ESI                    ; 004a0e18
    MOVSD ES:EDI,ESI                    ; 004a0e19
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680 ; 004a0e1a
        ;   XREF to: 0049e680 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createGunFlames_FUN_0049e680(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    MOV ESI,dword ptr [EBX + 0x6dc]     ; 004a0e1f
    ADD ESP,0x14                        ; 004a0e25
    TEST ESI,ESI                        ; 004a0e28
    JNZ 0x004a0e42                      ; 004a0e2a
        ;   XREF to: 004a0e42 (CONDITIONAL_JUMP)  ; LAB_004a0e42
    FLD float ptr [0x005f6b50]          ; 004a0e2c | DAT_005f6b50
    FLD1                                ; 004a0e32
    FDIVRP                              ; 004a0e34
    DEC dword ptr [EBX + 0x6c4]         ; 004a0e36
    FSTP float ptr [EBX + 0x6e0]        ; 004a0e3c
    MOV EAX,0x1                         ; 004a0e42
        ;   Label: LAB_004a0e42
    MOV dword ptr [EBX + 0x6d4],0x1     ; 004a0e47
    POP ESI                             ; 004a0e51
    POP EDI                             ; 004a0e52
    ADD ESP,0x30                        ; 004a0e53
    POP EBX                             ; 004a0e56
    RET                                 ; 004a0e57

