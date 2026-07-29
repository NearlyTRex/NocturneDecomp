; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_melee_cpp_CMelee_process_FUN_004cf0c0(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   double DOUBLE_00588473 = 1.15000000000000
;   int INT_005b96c4 = 0x1c78c7c
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
;   core_weapon.cpp_CWeapon_process_FUN_00554030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf0c0
        ;   Label: core_melee.cpp_CMelee_process_FUN_004cf0c0
    SUB ESP,0x20                        ; 004cf0c1
    MOV EBX,dword ptr [ESP + 0x28]      ; 004cf0c4
    PUSH dword ptr [ESP + 0x2c]         ; 004cf0c8
    PUSH EBX                            ; 004cf0cc
    CALL core_weapon.cpp_CWeapon_process_FUN_00554030 ; 004cf0cd
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; void core_weapon.cpp_CWeapon_process_FUN_00554030(CWeapon * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x588]     ; 004cf0d2
    ADD ESP,0x8                         ; 004cf0d8
    TEST EDX,EDX                        ; 004cf0db
    JLE 0x004cf0f8                      ; 004cf0dd
        ;   XREF to: 004cf0f8 (CONDITIONAL_JUMP)  ; LAB_004cf0f8
    FLD float ptr [EBX + 0x58c]         ; 004cf0df
    FSUB float ptr [ESP + 0x2c]         ; 004cf0e5
    FST float ptr [EBX + 0x58c]         ; 004cf0e9
    FLDZ                                ; 004cf0ef
    FCOMPP                              ; 004cf0f1
    FNSTSW AX                           ; 004cf0f3
    SAHF                                ; 004cf0f5
    JNC 0x004cf0fd                      ; 004cf0f6
        ;   XREF to: 004cf0fd (CONDITIONAL_JUMP)  ; LAB_004cf0fd
    ADD ESP,0x20                        ; 004cf0f8
        ;   Label: LAB_004cf0f8
    POP EBX                             ; 004cf0fb
    RET                                 ; 004cf0fc
    PUSH EDI                            ; 004cf0fd
        ;   Label: LAB_004cf0fd
    PUSH ESI                            ; 004cf0fe
    FLD float ptr [EBX + 0x590]         ; 004cf0ff
    FLD ST0                             ; 004cf105
    FMUL double ptr [0x00588473]        ; 004cf107 | DOUBLE_00588473
    LEA EDX,[ESP + 0x8]                 ; 004cf10d
    MOV ECX,dword ptr [EBX + 0x588]     ; 004cf111
    PUSH EDX                            ; 004cf117
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004cf118
    DEC ECX                             ; 004cf11e
    PUSH EBX                            ; 004cf11f
    MOV dword ptr [EBX + 0x588],ECX     ; 004cf120
    FSTP ST1                            ; 004cf126
    FST float ptr [EBX + 0x590]         ; 004cf128
    FSTP float ptr [EBX + 0x58c]        ; 004cf12e
    CALL dword ptr [EAX + 0xd8]         ; 004cf134
    ADD ESP,0x8                         ; 004cf13a
    PUSH EAX                            ; 004cf13d
    LEA EAX,[ESP + 0x18]                ; 004cf13e
    PUSH EAX                            ; 004cf142
    PUSH EBX                            ; 004cf143
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004cf144
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004cf149
    MOV ESI,dword ptr [EBX + 0x584]     ; 004cf14c
    PUSH ESI                            ; 004cf152
    PUSH 0x2dd1184                      ; 004cf153 | DAT_02dd1184
    LEA EAX,[ESP + 0x1c]                ; 004cf158
    PUSH EAX                            ; 004cf15c
    MOV EDI,dword ptr [0x005b96c4]      ; 004cf15d | INT_005b96c4
    PUSH EDI                            ; 004cf163
    CALL core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0 ; 004cf164
        ;   XREF to: 004b00f0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore * this_ptr, CVector3f * position, CVector3f * velocity, int blood_type)
    ADD ESP,0x10                        ; 004cf169
    POP ESI                             ; 004cf16c
    POP EDI                             ; 004cf16d
    ADD ESP,0x20                        ; 004cf16e
    POP EBX                             ; 004cf171
    RET                                 ; 004cf172

