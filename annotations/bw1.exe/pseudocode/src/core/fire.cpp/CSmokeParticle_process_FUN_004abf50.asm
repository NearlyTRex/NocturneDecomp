; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CSmokeParticle_process_FUN_004abf50(CSmokeParticle *this_ptr)
;
; Parameters:
; CSmokeParticle * Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004b4dd0 at 004b50f1
;
; Referenced Globals:
;   undefined4 DAT_005df184
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004abf50
        ;   Label: core_fire.cpp_CSmokeParticle_process_FUN_004abf50
    SUB ESP,0x38                        ; 004abf51
    MOV EBX,dword ptr [ESP + 0x40]      ; 004abf54
    MOV EAX,[0x0061d95c]                ; 004abf58 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 004abf5d | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x30],EAX      ; 004abf63
    FLD float ptr [ESP + 0x30]          ; 004abf67
    FMUL float ptr [0x005df184]         ; 004abf6b | DAT_005df184
    FADD float ptr [EBX + 0x18]         ; 004abf71
    FSTP float ptr [EBX + 0x18]         ; 004abf74
    CMP dword ptr [EBX + 0x18],0x42200000 ; 004abf77
    JL 0x004abf8b                       ; 004abf7e
        ;   XREF to: 004abf8b (CONDITIONAL_JUMP)  ; LAB_004abf8b
    MOV dword ptr [EBX],0x0             ; 004abf80
    ADD ESP,0x38                        ; 004abf86
    POP EBX                             ; 004abf89
    RET                                 ; 004abf8a
    PUSH EDI                            ; 004abf8b
        ;   Label: LAB_004abf8b
    PUSH ESI                            ; 004abf8c
    FLD float ptr [ESP + 0x38]          ; 004abf8d
    FMUL float ptr [EBX + 0x10]         ; 004abf91
    FMUL float ptr [EBX + 0x14]         ; 004abf94
    PUSH 0x3f800000                     ; 004abf97
    FADD float ptr [EBX + 0x8]          ; 004abf9c
    PUSH 0xbf800000                     ; 004abf9f
    FSTP float ptr [EBX + 0x8]          ; 004abfa4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004abfa7
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004abfac
    FLD float ptr [ESP + 0x44]          ; 004abfb0
    ADD ESP,0x8                         ; 004abfb4
    FMUL float ptr [ESP + 0x38]         ; 004abfb7
    PUSH 0x3f800000                     ; 004abfbb
    FADD float ptr [EBX + 0x4]          ; 004abfc0
    PUSH 0xbf800000                     ; 004abfc3
    FSTP float ptr [EBX + 0x4]          ; 004abfc8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004abfcb
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 004abfd0
    FLD float ptr [ESP + 0x44]          ; 004abfd4
    ADD ESP,0x8                         ; 004abfd8
    FMUL float ptr [ESP + 0x38]         ; 004abfdb
    FADD float ptr [EBX + 0xc]          ; 004abfdf
    LEA EAX,[EBX + 0x1c]                ; 004abfe2
    FSTP float ptr [EBX + 0xc]          ; 004abfe5
    FLD float ptr [EAX]                 ; 004abfe8
    FMUL float ptr [ESP + 0x38]         ; 004abfea
    FLD float ptr [EAX + 0x4]           ; 004abfee
    FMUL float ptr [ESP + 0x38]         ; 004abff1
    FLD float ptr [EAX + 0x8]           ; 004abff5
    FMUL float ptr [ESP + 0x38]         ; 004abff8
    LEA EDI,[ESP + 0x20]                ; 004abffc
    LEA ESI,[ESP + 0x14]                ; 004ac000
    LEA EAX,[EBX + 0x4]                 ; 004ac004
    FXCH ST2                            ; 004ac007
    FSTP float ptr [ESP + 0x14]         ; 004ac009
    FSTP float ptr [ESP + 0x18]         ; 004ac00d
    FSTP float ptr [ESP + 0x1c]         ; 004ac011
    MOVSD ES:EDI,ESI                    ; 004ac015
    MOVSD ES:EDI,ESI                    ; 004ac016
    MOVSD ES:EDI,ESI                    ; 004ac017
    MOV EBX,dword ptr [0x00622c18]      ; 004ac018 | g_CDemonSetPtr
    FLD float ptr [EAX]                 ; 004ac01e
    FLD float ptr [EAX + 0x4]           ; 004ac020
    FLD float ptr [EAX + 0x8]           ; 004ac023
    FXCH ST2                            ; 004ac026
    FADD float ptr [ESP + 0x20]         ; 004ac028
    FXCH                                ; 004ac02c
    FADD float ptr [ESP + 0x24]         ; 004ac02e
    FXCH ST2                            ; 004ac032
    FADD float ptr [ESP + 0x28]         ; 004ac034
    FXCH                                ; 004ac038
    FSTP float ptr [EAX]                ; 004ac03a
    FXCH                                ; 004ac03c
    FSTP float ptr [EAX + 0x4]          ; 004ac03e
    FSTP float ptr [EAX + 0x8]          ; 004ac041
    FLD float ptr [EBX + 0x15ac70]      ; 004ac044 | g_CDemonSetInstance.active_fog.scroll.x
    FMUL float ptr [ESP + 0x38]         ; 004ac04a
    FLD float ptr [EBX + 0x15ac74]      ; 004ac04e | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP + 0x38]         ; 004ac054
    FLD float ptr [EBX + 0x15ac78]      ; 004ac058 | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP + 0x38]         ; 004ac05e
    LEA EDI,[ESP + 0x8]                 ; 004ac062
    LEA ESI,[ESP + 0x2c]                ; 004ac066
    FXCH ST2                            ; 004ac06a
    FSTP float ptr [ESP + 0x2c]         ; 004ac06c
    FSTP float ptr [ESP + 0x30]         ; 004ac070
    FSTP float ptr [ESP + 0x34]         ; 004ac074
    MOVSD ES:EDI,ESI                    ; 004ac078
    MOVSD ES:EDI,ESI                    ; 004ac079
    MOVSD ES:EDI,ESI                    ; 004ac07a
    FLD float ptr [EAX]                 ; 004ac07b
    FLD float ptr [EAX + 0x4]           ; 004ac07d
    FLD float ptr [EAX + 0x8]           ; 004ac080
    FXCH ST2                            ; 004ac083
    FADD float ptr [ESP + 0x8]          ; 004ac085
    FXCH                                ; 004ac089
    FADD float ptr [ESP + 0xc]          ; 004ac08b
    FXCH ST2                            ; 004ac08f
    FADD float ptr [ESP + 0x10]         ; 004ac091
    FXCH                                ; 004ac095
    FSTP float ptr [EAX]                ; 004ac097
    FXCH                                ; 004ac099
    FSTP float ptr [EAX + 0x4]          ; 004ac09b
    FSTP float ptr [EAX + 0x8]          ; 004ac09e
    POP ESI                             ; 004ac0a1
    POP EDI                             ; 004ac0a2
    ADD ESP,0x38                        ; 004ac0a3
    POP EBX                             ; 004ac0a6
    RET                                 ; 004ac0a7

