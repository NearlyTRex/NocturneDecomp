; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_attractActorToward_FUN_00427ac0(CCharacter *this_ptr,CDemonActor *actor,CVector3f *target_local_point)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; CVector3f *      Stack[0xc]:4   target_local_point
;
; Referenced Globals:
;   undefined4 DAT_005ccdd6
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.delta_time_float
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00427ac0
        ;   Label: core_charactr.cpp_CCharacter_attractActorToward_FUN_00427ac0
    PUSH ESI                            ; 00427ac1
    PUSH EDI                            ; 00427ac2
    PUSH EBP                            ; 00427ac3
    MOV EBP,ESP                         ; 00427ac4
    SUB ESP,0x60                        ; 00427ac6
    MOV ESI,dword ptr [EBP + 0x14]      ; 00427ac9
    MOV EBX,dword ptr [EBP + 0x18]      ; 00427acc
    TEST EBX,EBX                        ; 00427acf
    JNZ 0x00427ade                      ; 00427ad1
        ;   XREF to: 00427ade (CONDITIONAL_JUMP)  ; LAB_00427ade
    XOR ESI,ESI                         ; 00427ad3
        ;   Label: LAB_00427ad3
    MOV EAX,ESI                         ; 00427ad5
    MOV ESP,EBP                         ; 00427ad7
    POP EBP                             ; 00427ad9
    POP EDI                             ; 00427ada
    POP ESI                             ; 00427adb
    POP EBX                             ; 00427adc
    RET                                 ; 00427add
    LEA EDX,[EBP + -0x60]               ; 00427ade
        ;   Label: LAB_00427ade
    PUSH EDX                            ; 00427ae1
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00427ae2
    PUSH ESI                            ; 00427ae8
    CALL dword ptr [EAX + 0x11c]        ; 00427ae9
    ADD ESP,0x8                         ; 00427aef
    TEST EAX,EAX                        ; 00427af2
    JZ 0x00427ad3                       ; 00427af4
        ;   XREF to: 00427ad3 (CONDITIONAL_JUMP)  ; LAB_00427ad3
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00427af6
    PUSH EDX                            ; 00427af9
    PUSH EBX                            ; 00427afa
    LEA ESI,[EBP + -0x30]               ; 00427afb
    LEA EDI,[EBP + -0x3c]               ; 00427afe
    CALL core_actor.cpp_FUN_00408d70    ; 00427b01
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    FLD float ptr [EBP + -0x60]         ; 00427b06
    LEA ESI,[EBP + -0x30]               ; 00427b09
    FLD float ptr [EBP + -0x5c]         ; 00427b0c
    MOVSD ES:EDI,ESI                    ; 00427b0f
    MOVSD ES:EDI,ESI                    ; 00427b10
    MOVSD ES:EDI,ESI                    ; 00427b11
    FLD float ptr [EBP + -0x58]         ; 00427b12
    LEA EDI,[EBP + -0x18]               ; 00427b15
    LEA ESI,[EBP + -0x24]               ; 00427b18
    FXCH ST2                            ; 00427b1b
    FSUB float ptr [EBP + -0x3c]        ; 00427b1d
    FXCH                                ; 00427b20
    FSUB float ptr [EBP + -0x38]        ; 00427b22
    FXCH ST2                            ; 00427b25
    FSUB float ptr [EBP + -0x34]        ; 00427b27
    FXCH                                ; 00427b2a
    FSTP float ptr [EBP + -0x24]        ; 00427b2c
    FXCH                                ; 00427b2f
    FSTP float ptr [EBP + -0x20]        ; 00427b31
    FSTP float ptr [EBP + -0x1c]        ; 00427b34
    MOVSD ES:EDI,ESI                    ; 00427b37
    MOVSD ES:EDI,ESI                    ; 00427b38
    MOVSD ES:EDI,ESI                    ; 00427b39
    FLD float ptr [EBP + -0x18]         ; 00427b3a
    FMUL ST0                            ; 00427b3d
    FLD float ptr [EBP + -0x10]         ; 00427b3f
    FMUL ST0                            ; 00427b42
    MOV EAX,[0x00616494]                ; 00427b44 | g_CGamePtr
    FADDP                               ; 00427b49
    FLD float ptr [EAX + 0x284]         ; 00427b4b | g_CGameInstance.delta_time_float
    FXCH                                ; 00427b51
    FSQRT                               ; 00427b53
    FXCH                                ; 00427b55
    FMUL double ptr [0x005ccdd6]        ; 00427b57 | DAT_005ccdd6
    XOR ECX,ECX                         ; 00427b5d
    ADD ESP,0x8                         ; 00427b5f
    MOV dword ptr [EBP + -0x14],ECX     ; 00427b62
    FSTP float ptr [EBP + -0x8]         ; 00427b65
    FST float ptr [EBP + -0xc]          ; 00427b68
    FCOMP float ptr [EBP + -0x8]        ; 00427b6b
    FNSTSW AX                           ; 00427b6e
    SAHF                                ; 00427b70
    JBE 0x00427b9a                      ; 00427b71
        ;   XREF to: 00427b9a (CONDITIONAL_JUMP)  ; LAB_00427b9a
    FLD float ptr [EBP + -0x8]          ; 00427b73
    FDIV float ptr [EBP + -0xc]         ; 00427b76
    FLD float ptr [EBP + -0x18]         ; 00427b79
    FXCH                                ; 00427b7c
    FSTP float ptr [EBP + -0x4]         ; 00427b7e
    FMUL float ptr [EBP + -0x4]         ; 00427b81
    FLDZ                                ; 00427b84
    FMUL float ptr [EBP + -0x4]         ; 00427b86
    FLD float ptr [EBP + -0x10]         ; 00427b89
    FMUL float ptr [EBP + -0x4]         ; 00427b8c
    FXCH ST2                            ; 00427b8f
    FSTP float ptr [EBP + -0x18]        ; 00427b91
    FSTP float ptr [EBP + -0x14]        ; 00427b94
    FSTP float ptr [EBP + -0x10]        ; 00427b97
    LEA EAX,[EBX + 0x30]                ; 00427b9a
        ;   Label: LAB_00427b9a
    LEA EDI,[EBP + -0x54]               ; 00427b9d
    LEA ESI,[EBX + 0x20]                ; 00427ba0
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00427ba3
    PUSH EAX                            ; 00427ba9
    FLD float ptr [ESI + 0x4]           ; 00427baa
    FLD float ptr [ESI + 0x8]           ; 00427bad
    FLD float ptr [ESI]                 ; 00427bb0
    LEA EAX,[EBP + -0x54]               ; 00427bb2
    LEA ESI,[EBP + -0x48]               ; 00427bb5
    FADD float ptr [EBP + -0x18]        ; 00427bb8
    FXCH ST2                            ; 00427bbb
    FADD float ptr [EBP + -0x14]        ; 00427bbd
    FXCH                                ; 00427bc0
    FADD float ptr [EBP + -0x10]        ; 00427bc2
    PUSH EAX                            ; 00427bc5
    FXCH ST2                            ; 00427bc6
    FSTP float ptr [EBP + -0x48]        ; 00427bc8
    FSTP float ptr [EBP + -0x44]        ; 00427bcb
    FSTP float ptr [EBP + -0x40]        ; 00427bce
    PUSH EBX                            ; 00427bd1
    MOVSD ES:EDI,ESI                    ; 00427bd2
    MOVSD ES:EDI,ESI                    ; 00427bd3
    MOVSD ES:EDI,ESI                    ; 00427bd4
    CALL dword ptr [EDX + 0x70]         ; 00427bd5
    MOV ESI,0x1                         ; 00427bd8
    ADD ESP,0xc                         ; 00427bdd
    MOV EAX,ESI                         ; 00427be0
    MOV ESP,EBP                         ; 00427be2
    POP EBP                             ; 00427be4
    POP EDI                             ; 00427be5
    POP ESI                             ; 00427be6
    POP EBX                             ; 00427be7
    RET                                 ; 00427be8

