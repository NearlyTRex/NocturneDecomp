; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CGunFlame_FUN_004c4c00(CGunFlame *this_ptr)
;
; Parameters:
; CGunFlame *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
;
; XREF[1]:
;   core_fire.cpp_CGunFlame_process_FUN_004c4f60 at 004c5066
;
; Referenced Globals:
;   float FLOAT_00629f23 = 25
;   double DOUBLE_00629f2b = 25
;   undefined4 DAT_02d13eb4
;   undefined4 DAT_02d13eb8
;   undefined4 DAT_02d13ebc
;   undefined4 DAT_02d13f80
;   undefined4 DAT_02d13f84
;   undefined4 DAT_02d13f88
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
;   core_flamecan.cpp_CFlameCan_FUN_004cb340
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4c00
        ;   Label: core_fire.cpp_CGunFlame_FUN_004c4c00
    PUSH ESI                            ; 004c4c01
    PUSH EDI                            ; 004c4c02
    PUSH EBP                            ; 004c4c03
    MOV EBP,ESP                         ; 004c4c04
    SUB ESP,0x2c                        ; 004c4c06
    AND ESP,0xfffffff8                  ; 004c4c09
    MOV EDX,dword ptr [0x02d13eb4]      ; 004c4c0c | DAT_02d13eb4
    XOR EDI,EDI                         ; 004c4c12
    TEST EDX,EDX                        ; 004c4c14
    JLE 0x004c4c5e                      ; 004c4c16
        ;   XREF to: 004c4c5e (CONDITIONAL_JUMP)  ; LAB_004c4c5e
    MOV ESI,dword ptr [EBP + 0x14]      ; 004c4c18
    MOV dword ptr [ESP + 0x20],EDI      ; 004c4c1b
    ADD ESI,0x4                         ; 004c4c1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4c22
        ;   Label: LAB_004c4c22
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c4c25
    MOV EDX,dword ptr [EAX + 0x20]      ; 004c4c29
    MOV EBX,dword ptr [EBX + 0x2d13eb8] ; 004c4c2c | DAT_02d13eb8 | DAT_02d13ebc
    CMP EDX,0x2                         ; 004c4c32
    JZ 0x004c4cc3                       ; 004c4c35
        ;   XREF to: 004c4cc3 (CONDITIONAL_JUMP)  ; LAB_004c4cc3
    CMP dword ptr [EBX + 0x2624],0x0    ; 004c4c3b
    JNZ 0x004c4cc3                      ; 004c4c42
        ;   XREF to: 004c4cc3 (CONDITIONAL_JUMP)  ; LAB_004c4cc3
    MOV ECX,dword ptr [ESP + 0x20]      ; 004c4c48
        ;   Label: LAB_004c4c48
    MOV EBX,dword ptr [0x02d13eb4]      ; 004c4c4c | DAT_02d13eb4
        ;   Label: LAB_004c4c4c
    ADD ECX,0x4                         ; 004c4c52
    INC EDI                             ; 004c4c55
    MOV dword ptr [ESP + 0x20],ECX      ; 004c4c56
    CMP EDI,EBX                         ; 004c4c5a
    JL 0x004c4c22                       ; 004c4c5c
        ;   XREF to: 004c4c22 (CONDITIONAL_JUMP)  ; LAB_004c4c22
    MOV EDI,dword ptr [0x02d13f80]      ; 004c4c5e | DAT_02d13f80
        ;   Label: LAB_004c4c5e
    XOR ESI,ESI                         ; 004c4c64
    TEST EDI,EDI                        ; 004c4c66
    JLE 0x004c4cbc                      ; 004c4c68
        ;   XREF to: 004c4cbc (CONDITIONAL_JUMP)  ; LAB_004c4cbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4c6a
    ADD EAX,0x4                         ; 004c4c6d
    XOR EDI,EDI                         ; 004c4c70
    MOV dword ptr [ESP + 0x1c],EAX      ; 004c4c72
    MOV EDX,dword ptr [EDI + 0x2d13f84] ; 004c4c76 | DAT_02d13f84 | DAT_02d13f88
        ;   Label: LAB_004c4c76
    LEA EBX,[EDX + 0x20]                ; 004c4c7c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004c4c7f
    FLD float ptr [EBX]                 ; 004c4c83
    FSUB float ptr [EAX]                ; 004c4c85
    FMUL ST0                            ; 004c4c87
    FLD float ptr [EBX + 0x4]           ; 004c4c89
    FSUB float ptr [EAX + 0x4]          ; 004c4c8c
    FMUL ST0                            ; 004c4c8f
    FLD float ptr [EBX + 0x8]           ; 004c4c91
    FXCH                                ; 004c4c94
    FADDP ST2,ST0                       ; 004c4c96
    FSUB float ptr [EAX + 0x8]          ; 004c4c98
    FMUL ST0                            ; 004c4c9b
    FADDP                               ; 004c4c9d
    FCOMP double ptr [0x00629f2b]       ; 004c4c9f | DOUBLE_00629f2b
    FNSTSW AX                           ; 004c4ca5
    SAHF                                ; 004c4ca7
    JBE 0x004c4d3b                      ; 004c4ca8
        ;   XREF to: 004c4d3b (CONDITIONAL_JUMP)  ; LAB_004c4d3b
    MOV ECX,dword ptr [0x02d13f80]      ; 004c4cae | DAT_02d13f80
        ;   Label: LAB_004c4cae
    INC ESI                             ; 004c4cb4
    ADD EDI,0x4                         ; 004c4cb5
    CMP ESI,ECX                         ; 004c4cb8
    JL 0x004c4c76                       ; 004c4cba
        ;   XREF to: 004c4c76 (CONDITIONAL_JUMP)  ; LAB_004c4c76
    MOV ESP,EBP                         ; 004c4cbc
        ;   Label: LAB_004c4cbc
    POP EBP                             ; 004c4cbe
    POP EDI                             ; 004c4cbf
    POP ESI                             ; 004c4cc0
    POP EBX                             ; 004c4cc1
    RET                                 ; 004c4cc2
    LEA EAX,[EBX + 0x20]                ; 004c4cc3
        ;   Label: LAB_004c4cc3
    FLD float ptr [EAX]                 ; 004c4cc6
    FSUB float ptr [ESI]                ; 004c4cc8
    FMUL ST0                            ; 004c4cca
    FLD float ptr [EAX + 0x4]           ; 004c4ccc
    FSUB float ptr [ESI + 0x4]          ; 004c4ccf
    FMUL ST0                            ; 004c4cd2
    FLD float ptr [EAX + 0x8]           ; 004c4cd4
    FXCH                                ; 004c4cd7
    FADDP ST2,ST0                       ; 004c4cd9
    FSUB float ptr [ESI + 0x8]          ; 004c4cdb
    FMUL ST0                            ; 004c4cde
    FADDP                               ; 004c4ce0
    FCOMP float ptr [0x00629f23]        ; 004c4ce2 | FLOAT_00629f23
    FNSTSW AX                           ; 004c4ce8
    SAHF                                ; 004c4cea
    JA 0x004c4c48                       ; 004c4ceb
        ;   XREF to: 004c4c48 (CONDITIONAL_JUMP)  ; LAB_004c4c48
    LEA EAX,[EBX + 0x158]               ; 004c4cf1
    PUSH EAX                            ; 004c4cf7
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004c4cf8
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004c4cfd
    PUSH ESI                            ; 004c4d00
    LEA EAX,[ESP + 0x4]                 ; 004c4d01
    PUSH EAX                            ; 004c4d05
    PUSH EBX                            ; 004c4d06
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004c4d07
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004c4d0c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004c4d0f
    CMP dword ptr [EAX + 0x20],0x2      ; 004c4d12
    SETZ AL                             ; 004c4d16
    AND EAX,0xff                        ; 004c4d19
    PUSH EAX                            ; 004c4d1e
    PUSH 0x3f800000                     ; 004c4d1f
    PUSH 0x0                            ; 004c4d24
    PUSH 0x0                            ; 004c4d26
    LEA EAX,[ESP + 0x10]                ; 004c4d28
    PUSH EAX                            ; 004c4d2c
    PUSH EBX                            ; 004c4d2d
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 ; 004c4d2e
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter * this_ptr, CVector3f * position, int fire_type, float spread_rate, ...)
    ADD ESP,0x18                        ; 004c4d33
    JMP 0x004c4c48                      ; 004c4d36
        ;   XREF to: 004c4c48 (UNCONDITIONAL_JUMP)  ; LAB_004c4c48
    PUSH EDX                            ; 004c4d3b
        ;   Label: LAB_004c4d3b
    CALL core_flamecan.cpp_CFlameCan_FUN_004cb340 ; 004c4d3c
        ;   XREF to: 004cb340 (UNCONDITIONAL_CALL)  ; void core_flamecan.cpp_CFlameCan_FUN_004cb340(CFlameCan * this_ptr)
    ADD ESP,0x4                         ; 004c4d41
    JMP 0x004c4cae                      ; 004c4d44
        ;   XREF to: 004c4cae (UNCONDITIONAL_JUMP)  ; LAB_004c4cae

