; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004da070(undefined4 param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0058a171
;   undefined4 DAT_0058a179
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CVector_ctor_FUN_0040e160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004da070
        ;   Label: FUN_004da070
    PUSH ESI                            ; 004da071
    PUSH EBP                            ; 004da072
    MOV EBP,ESP                         ; 004da073
    SUB ESP,0x30                        ; 004da075
    AND ESP,0xfffffff8                  ; 004da078
    MOV EBX,dword ptr [EBP + 0x10]      ; 004da07b
    MOV ESI,dword ptr [EBP + 0x14]      ; 004da07e
    MOV EAX,ESP                         ; 004da081
    PUSH EAX                            ; 004da083
    MOV EDX,dword ptr [ESI + 0x14c]     ; 004da084
    PUSH ESI                            ; 004da08a
    CALL dword ptr [EDX + 0x14]         ; 004da08b
    ADD ESP,0x8                         ; 004da08e
    LEA EAX,[ESP + 0x24]                ; 004da091
    PUSH EAX                            ; 004da095
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 004da096
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    ADD ESP,0x4                         ; 004da09b
    LEA EAX,[ESP + 0x18]                ; 004da09e
    FLD float ptr [ESP]                 ; 004da0a2
    FLD float ptr [ESP + 0x4]           ; 004da0a5
    FLD float ptr [ESP + 0x8]           ; 004da0a9
    PUSH EAX                            ; 004da0ad
    FXCH ST2                            ; 004da0ae
    FADD float ptr [ESP + 0x10]         ; 004da0b0
    FXCH                                ; 004da0b4
    FADD float ptr [ESP + 0x14]         ; 004da0b6
    FXCH ST2                            ; 004da0ba
    FADD float ptr [ESP + 0x18]         ; 004da0bc
    FXCH                                ; 004da0c0
    FSTP float ptr [ESP + 0x28]         ; 004da0c2
    FXCH                                ; 004da0c6
    FSTP float ptr [ESP + 0x2c]         ; 004da0c8
    FSTP float ptr [ESP + 0x30]         ; 004da0cc
    CALL core_actor.cpp_CVector_ctor_FUN_0040e160 ; 004da0d0
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CVector_ctor_FUN_0040e160()
    ADD ESP,0x4                         ; 004da0d5
    FLD float ptr [0x0058a171]          ; 004da0d8 | DAT_0058a171
    FLD float ptr [ESP + 0x24]          ; 004da0de
    FMUL ST1                            ; 004da0e2
    LEA EAX,[ESP + 0x18]                ; 004da0e4
    FLD float ptr [ESP + 0x28]          ; 004da0e8
    FMULP ST2                           ; 004da0ec
    PUSH EAX                            ; 004da0ee
    FLD float ptr [ESP + 0xc]           ; 004da0ef
    PUSH EBX                            ; 004da0f3
    FADD double ptr [0x0058a179]        ; 004da0f4 | DAT_0058a179
    FXCH                                ; 004da0fa
    FSTP float ptr [ESP + 0x20]         ; 004da0fc
    FXCH                                ; 004da100
    FSTP float ptr [ESP + 0x24]         ; 004da102
    PUSH ESI                            ; 004da106
    FSTP float ptr [ESP + 0x2c]         ; 004da107
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004da10b
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 004da110
    MOV EAX,EBX                         ; 004da113
    MOV ESP,EBP                         ; 004da115
    POP EBP                             ; 004da117
    POP ESI                             ; 004da118
    POP EBX                             ; 004da119
    RET                                 ; 004da11a

