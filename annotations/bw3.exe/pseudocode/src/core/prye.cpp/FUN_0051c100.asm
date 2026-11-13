; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_prye_cpp_FUN_0051c100(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00518f15
;
; Referenced Globals:
;   undefined4 DAT_005cd317
;   undefined4 DAT_01ed3710
;   undefined4 DAT_01ed3714
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c100
        ;   Label: core_prye.cpp_FUN_0051c100
    PUSH EDI                            ; 0051c101
    PUSH EBP                            ; 0051c102
    SUB ESP,0x54                        ; 0051c103
    MOV EBX,ESI                         ; 0051c106
    MOV EDX,dword ptr [0x01ed3714]      ; 0051c108 | DAT_01ed3714
    MOV EBP,dword ptr [ESP + 0x64]      ; 0051c10e
    PUSH EDX                            ; 0051c112
    ADD EBP,0x158                       ; 0051c113
    PUSH EBP                            ; 0051c119
    LEA ESI,[ESP + 0x20]                ; 0051c11a
    LEA EDI,[ESP + 0x38]                ; 0051c11e
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 0051c122
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 0051c127
    MOV ECX,dword ptr [0x01ed3710]      ; 0051c12a | DAT_01ed3710
    LEA ESI,[ESP + 0x18]                ; 0051c130
    PUSH ECX                            ; 0051c134
    MOVSD ES:EDI,ESI                    ; 0051c135
    MOVSD ES:EDI,ESI                    ; 0051c136
    MOVSD ES:EDI,ESI                    ; 0051c137
    PUSH EBP                            ; 0051c138
    LEA ESI,[ESP + 0x2c]                ; 0051c139
    LEA EDI,[ESP + 0x8]                 ; 0051c13d
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 0051c141
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA ESI,[ESP + 0x2c]                ; 0051c146
    ADD ESP,0x8                         ; 0051c14a
    MOVSD ES:EDI,ESI                    ; 0051c14d
    MOVSD ES:EDI,ESI                    ; 0051c14e
    MOVSD ES:EDI,ESI                    ; 0051c14f
    FLD float ptr [ESP]                 ; 0051c150
    FLD float ptr [ESP + 0x4]           ; 0051c153
    FLD float ptr [ESP + 0x8]           ; 0051c157
    LEA EDI,[ESP + 0x3c]                ; 0051c15b
    LEA ESI,[ESP + 0xc]                 ; 0051c15f
    FXCH ST2                            ; 0051c163
    FADD float ptr [ESP + 0x30]         ; 0051c165
    FXCH                                ; 0051c169
    FADD float ptr [ESP + 0x34]         ; 0051c16b
    FXCH ST2                            ; 0051c16f
    FADD float ptr [ESP + 0x38]         ; 0051c171
    FXCH                                ; 0051c175
    FSTP float ptr [ESP + 0xc]          ; 0051c177
    FXCH                                ; 0051c17b
    FSTP float ptr [ESP + 0x10]         ; 0051c17d
    FSTP float ptr [ESP + 0x14]         ; 0051c181
    MOVSD ES:EDI,ESI                    ; 0051c185
    MOVSD ES:EDI,ESI                    ; 0051c186
    MOVSD ES:EDI,ESI                    ; 0051c187
    FLD float ptr [0x005cd317]          ; 0051c188 | DAT_005cd317
    FLD float ptr [ESP + 0x3c]          ; 0051c18e
    FMUL ST1                            ; 0051c192
    FLD float ptr [ESP + 0x40]          ; 0051c194
    FMUL ST2                            ; 0051c198
    FLD float ptr [ESP + 0x44]          ; 0051c19a
    FMULP ST3                           ; 0051c19e
    LEA ESI,[ESP + 0x48]                ; 0051c1a0
    MOV EDI,EBX                         ; 0051c1a4
    FXCH                                ; 0051c1a6
    FSTP float ptr [ESP + 0x48]         ; 0051c1a8
    FSTP float ptr [ESP + 0x4c]         ; 0051c1ac
    FSTP float ptr [ESP + 0x50]         ; 0051c1b0
    MOVSD ES:EDI,ESI                    ; 0051c1b4
    MOVSD ES:EDI,ESI                    ; 0051c1b5
    MOVSD ES:EDI,ESI                    ; 0051c1b6
    MOV EAX,EBX                         ; 0051c1b7
    ADD ESP,0x54                        ; 0051c1b9
    POP EBP                             ; 0051c1bc
    POP EDI                             ; 0051c1bd
    POP EBX                             ; 0051c1be
    RET                                 ; 0051c1bf

