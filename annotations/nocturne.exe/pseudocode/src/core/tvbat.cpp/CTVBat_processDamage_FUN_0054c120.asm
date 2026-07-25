; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_tvbat_cpp_CTVBat_processDamage_FUN_0054c120(int param_1,int param_2)
;
;
; Referenced Globals:
;   int INT_005b96c4 = 0x1c78c7c
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054c120
        ;   Label: core_tvbat.cpp_CTVBat_processDamage_FUN_0054c120
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054c121
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054c125
    FLD float ptr [EAX + 0x4]           ; 0054c129
    FSUBR float ptr [EBX + 0x2434]      ; 0054c12c
    FST float ptr [EBX + 0x2434]        ; 0054c132
    FLDZ                                ; 0054c138
    FCOMPP                              ; 0054c13a
    FNSTSW AX                           ; 0054c13c
    SAHF                                ; 0054c13e
    JNC 0x0054c151                      ; 0054c13f
        ;   XREF to: 0054c151 (CONDITIONAL_JUMP)  ; LAB_0054c151
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054c141
    PUSH ECX                            ; 0054c145
    PUSH EBX                            ; 0054c146
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0054c147
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 0054c14c
    POP EBX                             ; 0054c14f
    RET                                 ; 0054c150
    PUSH 0x0                            ; 0054c151
        ;   Label: LAB_0054c151
    PUSH 0xa                            ; 0054c153
    PUSH 0x0                            ; 0054c155
    LEA EAX,[EBX + 0x20]                ; 0054c157
    PUSH EAX                            ; 0054c15a
    MOV EDX,dword ptr [0x005b96c4]      ; 0054c15b | INT_005b96c4
    PUSH EDX                            ; 0054c161
    MOV dword ptr [EBX + 0x2434],0x0    ; 0054c162
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200 ; 0054c16c
        ;   XREF to: 004b0200 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnBloodBurst_FUN_004b0200()
    ADD ESP,0x14                        ; 0054c171
    MOV dword ptr [EBX + 0xbee0],0x1    ; 0054c174
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054c17e
    PUSH ECX                            ; 0054c182
    PUSH EBX                            ; 0054c183
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0054c184
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_CEnemy_processDamage_FUN_00479f70()
    ADD ESP,0x8                         ; 0054c189
    POP EBX                             ; 0054c18c
    RET                                 ; 0054c18d

