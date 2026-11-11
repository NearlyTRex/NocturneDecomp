; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_00496e00(undefined4 *param_1)
;
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
;   core_fire.cpp_FUN_004a1760 at 004a1ab8
;
; Referenced Globals:
;   undefined4 DAT_005c04c0
;   CGame* g_CGamePtr = 01d2130c
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CGameInstance.delta_time_float
;   undefined4 g_CDemonSetInstance.active_fog.scroll.x
;   undefined4 g_CDemonSetInstance.active_fog.scroll.y
;   undefined4 g_CDemonSetInstance.active_fog.scroll.z
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00496e00
        ;   Label: core_fire.cpp_FUN_00496e00
    SUB ESP,0x38                        ; 00496e01
    MOV EBX,dword ptr [ESP + 0x40]      ; 00496e04
    MOV EAX,[0x005fe9dc]                ; 00496e08 | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x314]     ; 00496e0d | g_CGameInstance.delta_time_float
    MOV dword ptr [ESP + 0x30],EAX      ; 00496e13
    FLD float ptr [ESP + 0x30]          ; 00496e17
    FMUL float ptr [0x005c04c0]         ; 00496e1b | DAT_005c04c0
    FADD float ptr [EBX + 0x18]         ; 00496e21
    FSTP float ptr [EBX + 0x18]         ; 00496e24
    CMP dword ptr [EBX + 0x18],0x42200000 ; 00496e27
    JL 0x00496e3b                       ; 00496e2e
        ;   XREF to: 00496e3b (CONDITIONAL_JUMP)  ; LAB_00496e3b
    MOV dword ptr [EBX],0x0             ; 00496e30
    ADD ESP,0x38                        ; 00496e36
    POP EBX                             ; 00496e39
    RET                                 ; 00496e3a
    PUSH EDI                            ; 00496e3b
        ;   Label: LAB_00496e3b
    PUSH ESI                            ; 00496e3c
    FLD float ptr [ESP + 0x38]          ; 00496e3d
    FMUL float ptr [EBX + 0x10]         ; 00496e41
    FMUL float ptr [EBX + 0x14]         ; 00496e44
    PUSH 0x3f800000                     ; 00496e47
    FADD float ptr [EBX + 0x8]          ; 00496e4c
    PUSH 0xbf800000                     ; 00496e4f
    FSTP float ptr [EBX + 0x8]          ; 00496e54
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00496e57
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00496e5c
    FLD float ptr [ESP + 0x44]          ; 00496e60
    ADD ESP,0x8                         ; 00496e64
    FMUL float ptr [ESP + 0x38]         ; 00496e67
    PUSH 0x3f800000                     ; 00496e6b
    FADD float ptr [EBX + 0x4]          ; 00496e70
    PUSH 0xbf800000                     ; 00496e73
    FSTP float ptr [EBX + 0x4]          ; 00496e78
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00496e7b
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x44],EAX      ; 00496e80
    FLD float ptr [ESP + 0x44]          ; 00496e84
    ADD ESP,0x8                         ; 00496e88
    FMUL float ptr [ESP + 0x38]         ; 00496e8b
    FADD float ptr [EBX + 0xc]          ; 00496e8f
    LEA EAX,[EBX + 0x1c]                ; 00496e92
    FSTP float ptr [EBX + 0xc]          ; 00496e95
    FLD float ptr [EAX]                 ; 00496e98
    FMUL float ptr [ESP + 0x38]         ; 00496e9a
    FLD float ptr [EAX + 0x4]           ; 00496e9e
    FMUL float ptr [ESP + 0x38]         ; 00496ea1
    FLD float ptr [EAX + 0x8]           ; 00496ea5
    FMUL float ptr [ESP + 0x38]         ; 00496ea8
    LEA EDI,[ESP + 0x20]                ; 00496eac
    LEA ESI,[ESP + 0x14]                ; 00496eb0
    LEA EAX,[EBX + 0x4]                 ; 00496eb4
    FXCH ST2                            ; 00496eb7
    FSTP float ptr [ESP + 0x14]         ; 00496eb9
    FSTP float ptr [ESP + 0x18]         ; 00496ebd
    FSTP float ptr [ESP + 0x1c]         ; 00496ec1
    MOVSD ES:EDI,ESI                    ; 00496ec5
    MOVSD ES:EDI,ESI                    ; 00496ec6
    MOVSD ES:EDI,ESI                    ; 00496ec7
    MOV EBX,dword ptr [0x00603b28]      ; 00496ec8 | g_CDemonSetPtr
    FLD float ptr [EAX]                 ; 00496ece
    FLD float ptr [EAX + 0x4]           ; 00496ed0
    FLD float ptr [EAX + 0x8]           ; 00496ed3
    FXCH ST2                            ; 00496ed6
    FADD float ptr [ESP + 0x20]         ; 00496ed8
    FXCH                                ; 00496edc
    FADD float ptr [ESP + 0x24]         ; 00496ede
    FXCH ST2                            ; 00496ee2
    FADD float ptr [ESP + 0x28]         ; 00496ee4
    FXCH                                ; 00496ee8
    FSTP float ptr [EAX]                ; 00496eea
    FXCH                                ; 00496eec
    FSTP float ptr [EAX + 0x4]          ; 00496eee
    FSTP float ptr [EAX + 0x8]          ; 00496ef1
    FLD float ptr [EBX + 0x15ac70]      ; 00496ef4 | g_CDemonSetInstance.active_fog.scroll.x
    FMUL float ptr [ESP + 0x38]         ; 00496efa
    FLD float ptr [EBX + 0x15ac74]      ; 00496efe | g_CDemonSetInstance.active_fog.scroll.y
    FMUL float ptr [ESP + 0x38]         ; 00496f04
    FLD float ptr [EBX + 0x15ac78]      ; 00496f08 | g_CDemonSetInstance.active_fog.scroll.z
    FMUL float ptr [ESP + 0x38]         ; 00496f0e
    LEA EDI,[ESP + 0x8]                 ; 00496f12
    LEA ESI,[ESP + 0x2c]                ; 00496f16
    FXCH ST2                            ; 00496f1a
    FSTP float ptr [ESP + 0x2c]         ; 00496f1c
    FSTP float ptr [ESP + 0x30]         ; 00496f20
    FSTP float ptr [ESP + 0x34]         ; 00496f24
    MOVSD ES:EDI,ESI                    ; 00496f28
    MOVSD ES:EDI,ESI                    ; 00496f29
    MOVSD ES:EDI,ESI                    ; 00496f2a
    FLD float ptr [EAX]                 ; 00496f2b
    FLD float ptr [EAX + 0x4]           ; 00496f2d
    FLD float ptr [EAX + 0x8]           ; 00496f30
    FXCH ST2                            ; 00496f33
    FADD float ptr [ESP + 0x8]          ; 00496f35
    FXCH                                ; 00496f39
    FADD float ptr [ESP + 0xc]          ; 00496f3b
    FXCH ST2                            ; 00496f3f
    FADD float ptr [ESP + 0x10]         ; 00496f41
    FXCH                                ; 00496f45
    FSTP float ptr [EAX]                ; 00496f47
    FXCH                                ; 00496f49
    FSTP float ptr [EAX + 0x4]          ; 00496f4b
    FSTP float ptr [EAX + 0x8]          ; 00496f4e
    POP ESI                             ; 00496f51
    POP EDI                             ; 00496f52
    ADD ESP,0x38                        ; 00496f53
    POP EBX                             ; 00496f56
    RET                                 ; 00496f57

