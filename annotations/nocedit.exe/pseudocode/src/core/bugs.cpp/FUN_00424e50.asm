; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_bugs.cpp_FUN_00424e50()
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; Referenced Globals:
;   float FLOAT_00616d1b = 12
;   float FLOAT_00616d1f = -12
;   double DOUBLE_00616d23 = 0.5
;   float FLOAT_0065b5c8 = 0.5
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_bugs.cpp_FUN_004272f0
;   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
;   core_enemy.cpp_CEnemy_FUN_004a9650
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424e50
        ;   Label: core_bugs.cpp_FUN_00424e50
    PUSH ESI                            ; 00424e51
    PUSH EDI                            ; 00424e52
    PUSH EBP                            ; 00424e53
    MOV EBP,ESP                         ; 00424e54
    SUB ESP,0x2c                        ; 00424e56
    AND ESP,0xfffffff8                  ; 00424e59
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424e5c
    MOV dword ptr [EAX + 0x38],0x0      ; 00424e5f
    PUSH EAX                            ; 00424e66
    MOV EDX,dword ptr [EAX + 0x38]      ; 00424e67
    MOV dword ptr [EAX + 0x34],EDX      ; 00424e6a
    MOV EDX,dword ptr [EAX + 0x34]      ; 00424e6d
    MOV dword ptr [EAX + 0x30],EDX      ; 00424e70
    CALL core_enemy.cpp_CEnemy_FUN_004a9650 ; 00424e73
        ;   XREF to: 004a9650 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9650(CEnemy * this_ptr)
    ADD ESP,0x4                         ; 00424e78
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424e7b
    MOV dword ptr [EAX + 0x122c4],0x4   ; 00424e7e
    MOV ECX,dword ptr [EAX + 0x122c4]   ; 00424e88
    XOR EBX,EBX                         ; 00424e8e
    TEST ECX,ECX                        ; 00424e90
    JLE 0x00424f33                      ; 00424e92
        ;   XREF to: 00424f33 (CONDITIONAL_JUMP)  ; LAB_00424f33
    ADD EAX,0x122c8                     ; 00424e98
    MOV dword ptr [ESP + 0x1c],EAX      ; 00424e9d
    LEA ESI,[EAX + 0x78]                ; 00424ea1
    IMUL EDI,EBX,0x17c                  ; 00424ea4
        ;   Label: LAB_00424ea4
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00424eaa
    MOV AH,byte ptr [ESI]               ; 00424eae
    ADD EDI,ECX                         ; 00424eb0
    TEST AH,AH                          ; 00424eb2
    JNZ 0x004250be                      ; 00424eb4
        ;   XREF to: 004250be (CONDITIONAL_JUMP)  ; LAB_004250be
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424eba
    MOV EDX,dword ptr [EAX + 0x122c4]   ; 00424ebd
    DEC EDX                             ; 00424ec3
    MOV EDI,EBX                         ; 00424ec4
    MOV dword ptr [EAX + 0x122c4],EDX   ; 00424ec6
    CMP EBX,EDX                         ; 00424ecc
    JGE 0x00424f24                      ; 00424ece
        ;   XREF to: 00424f24 (CONDITIONAL_JUMP)  ; LAB_00424f24
    IMUL EAX,EBX,0x17c                  ; 00424ed0
    LEA EDX,[ECX + EAX*0x1]             ; 00424ed6
    ADD EAX,0x1f4                       ; 00424ed9
    ADD EAX,ECX                         ; 00424ede
    MOV dword ptr [ESP + 0x20],EDX      ; 00424ee0
    MOV dword ptr [ESP + 0x24],EAX      ; 00424ee4
    MOV ECX,dword ptr [ESP + 0x24]      ; 00424ee8
        ;   Label: LAB_00424ee8
    PUSH ECX                            ; 00424eec
    MOV EAX,dword ptr [ESP + 0x24]      ; 00424eed
    PUSH EAX                            ; 00424ef1
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0 ; 00424ef2
        ;   XREF to: 00478dd0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(CKeyFramedModelInstance * this_ptr, char * filename)
    ADD ESP,0x8                         ; 00424ef7
    INC EDI                             ; 00424efa
    MOV EDX,dword ptr [ESP + 0x20]      ; 00424efb
    MOV ECX,dword ptr [ESP + 0x24]      ; 00424eff
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424f03
    ADD EDX,0x17c                       ; 00424f06
    ADD ECX,0x17c                       ; 00424f0c
    MOV dword ptr [ESP + 0x20],EDX      ; 00424f12
    MOV EDX,dword ptr [EAX + 0x122c4]   ; 00424f16
    MOV dword ptr [ESP + 0x24],ECX      ; 00424f1c
    CMP EDI,EDX                         ; 00424f20
    JL 0x00424ee8                       ; 00424f22
        ;   XREF to: 00424ee8 (CONDITIONAL_JUMP)  ; LAB_00424ee8
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424f24
        ;   Label: LAB_00424f24
    CMP EBX,dword ptr [EAX + 0x122c4]   ; 00424f27
    JL 0x00424ea4                       ; 00424f2d
        ;   XREF to: 00424ea4 (CONDITIONAL_JUMP)  ; LAB_00424ea4
    XOR EAX,EAX                         ; 00424f33
        ;   Label: LAB_00424f33
    MOV dword ptr [ESP + 0x18],EAX      ; 00424f35
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424f39
    CMP dword ptr [EAX + 0xbec0],0x0    ; 00424f3c
    JLE 0x00425083                      ; 00424f43
        ;   XREF to: 00425083 (CONDITIONAL_JUMP)  ; LAB_00425083
    FLD float ptr [0x0065b5c8]          ; 00424f49 | FLOAT_0065b5c8
    FLD ST0                             ; 00424f4f
    FMUL float ptr [0x00616d1b]         ; 00424f51 | FLOAT_00616d1b
    FXCH                                ; 00424f57
    FMUL float ptr [0x00616d1f]         ; 00424f59 | FLOAT_00616d1f
    MOV EDI,dword ptr [EBP + 0x14]      ; 00424f5f
    ADD EAX,0xbec4                      ; 00424f62
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424f67
    MOV dword ptr [ESP + 0x10],EAX      ; 00424f6a
    ADD EDI,0xbee4                      ; 00424f6e
    ADD EBX,0xbed8                      ; 00424f74
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424f7a
    FXCH                                ; 00424f7d
    FSTP float ptr [ESP]                ; 00424f7f
    ADD EAX,0xbecc                      ; 00424f82
    FSTP float ptr [ESP + 0x4]          ; 00424f87
    MOV dword ptr [ESP + 0x14],EAX      ; 00424f8b
    MOV ESI,dword ptr [ESP + 0x18]      ; 00424f8f
        ;   Label: LAB_00424f8f
    MOV EAX,dword ptr [ESP + 0x10]      ; 00424f93
    SHL ESI,0x6                         ; 00424f97
    ADD ESI,EAX                         ; 00424f9a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424f9c
    MOV dword ptr [ESI],0x0             ; 00424f9f
    MOV EAX,dword ptr [EAX + 0x122c4]   ; 00424fa5
    DEC EAX                             ; 00424fab
    PUSH EAX                            ; 00424fac
    PUSH 0x0                            ; 00424fad
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00424faf
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 00424fb4
    FLD double ptr [0x00616d23]         ; 00424fb7 | DOUBLE_00616d23
    FLD float ptr [ESP]                 ; 00424fbd
    FMUL ST1                            ; 00424fc0
    FLD float ptr [ESP + 0x4]           ; 00424fc2
    FMULP ST2                           ; 00424fc6
    FSTP float ptr [ESP + 0x8]          ; 00424fc8
    PUSH dword ptr [ESP + 0x8]          ; 00424fcc
    FSTP float ptr [ESP + 0x10]         ; 00424fd0
    PUSH dword ptr [ESP + 0x10]         ; 00424fd4
    MOV dword ptr [ESI + 0x4],EAX       ; 00424fd8
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 00424fdb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425083
        ;   Label: LAB_00425083
    PUSH EBX                            ; 00425086
    CALL core_bugs.cpp_FUN_004272f0     ; 00425087
        ;   XREF to: 004272f0 (UNCONDITIONAL_CALL)  ; undefined core_bugs.cpp_FUN_004272f0()
    MOV dword ptr [EBX + 0x199e4],0xffffd8f1 ; 0042508c
    MOV dword ptr [EBX + 0x199e8],0xffffd8f1 ; 00425096
    MOV dword ptr [EBX + 0x100],0x1     ; 004250a0
    ADD ESP,0x4                         ; 004250aa
    MOV dword ptr [EBX + 0x199f4],0x0   ; 004250ad
    MOV ESP,EBP                         ; 004250b7
    POP EBP                             ; 004250b9
    POP EDI                             ; 004250ba
    POP ESI                             ; 004250bb
    POP EBX                             ; 004250bc
    RET                                 ; 004250bd
    PUSH EDI                            ; 004250be
        ;   Label: LAB_004250be
    CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60 ; 004250bf
        ;   XREF to: 00478d60 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(CKeyFramedModelInstance * this_ptr)
    ADD ESI,0x17c                       ; 004250c4
    INC EBX                             ; 004250ca
    ADD ESP,0x4                         ; 004250cb
    JMP 0x00424f24                      ; 004250ce
        ;   XREF to: 00424f24 (UNCONDITIONAL_JUMP)  ; LAB_00424f24

