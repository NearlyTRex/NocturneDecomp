; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammo_cpp_CAmmoMana_process_FUN_0040e140(CAmmoMana *this_ptr,float delta_time)
;
; Parameters:
; CAmmoMana *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 DAT_005b6109
;   undefined4 DAT_005b610d
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0
;   core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e140
        ;   Label: core_ammo.cpp_CAmmoMana_process_FUN_0040e140
    PUSH ESI                            ; 0040e141
    PUSH EDI                            ; 0040e142
    SUB ESP,0x30                        ; 0040e143
    MOV EBX,dword ptr [ESP + 0x40]      ; 0040e146
    LEA EAX,[EBX + 0x158]               ; 0040e14a
    PUSH EAX                            ; 0040e150
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0 ; 0040e151
        ;   XREF to: 004625a0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0040e156
    FLD float ptr [ESP + 0x44]          ; 0040e159
    FMUL float ptr [0x005b6109]         ; 0040e15d | DAT_005b6109
    PUSH 0x3f866666                     ; 0040e163
    MOV EAX,dword ptr [EAX + 0x100]     ; 0040e168
    PUSH 0x3f733333                     ; 0040e16e
    LEA ESI,[EAX + -0x1]                ; 0040e173
    FSTP float ptr [ESP + 0x2c]         ; 0040e176
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0040e17a
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x34],EAX      ; 0040e17f
    FLD float ptr [ESP + 0x34]          ; 0040e183
    ADD ESP,0x8                         ; 0040e187
    MOV dword ptr [ESP + 0x2c],ESI      ; 0040e18a
    FMUL float ptr [ESP + 0x24]         ; 0040e18e
    FILD dword ptr [ESP + 0x2c]         ; 0040e192
    FXCH                                ; 0040e196
    FADD float ptr [EBX + 0x31c]        ; 0040e198
    FXCH                                ; 0040e19e
    FSTP float ptr [ESP + 0x28]         ; 0040e1a0
    FST float ptr [EBX + 0x31c]         ; 0040e1a4
    FCOMP float ptr [ESP + 0x28]        ; 0040e1aa
    FNSTSW AX                           ; 0040e1ae
    SAHF                                ; 0040e1b0
    JNC 0x0040e21e                      ; 0040e1b1
        ;   XREF to: 0040e21e (CONDITIONAL_JUMP)  ; LAB_0040e21e
    FLD float ptr [EBX + 0x24]          ; 0040e1b3
        ;   Label: LAB_0040e1b3
    MOV EDI,ESP                         ; 0040e1b6
    LEA ESI,[ESP + 0xc]                 ; 0040e1b8
    MOV EAX,dword ptr [EBX + 0x20]      ; 0040e1bc
    FADD float ptr [0x005b610d]         ; 0040e1bf | DAT_005b610d
    MOV dword ptr [ESP + 0xc],EAX       ; 0040e1c5
    FSTP float ptr [ESP + 0x10]         ; 0040e1c9
    MOV EAX,dword ptr [EBX + 0x28]      ; 0040e1cd
    LEA EBX,[ESP + 0x18]                ; 0040e1d0
    MOV dword ptr [ESP + 0x14],EAX      ; 0040e1d4
    MOV EAX,ESP                         ; 0040e1d8
    MOVSD ES:EDI,ESI                    ; 0040e1da
    MOVSD ES:EDI,ESI                    ; 0040e1db
    MOVSD ES:EDI,ESI                    ; 0040e1dc
    CMP EBX,EAX                         ; 0040e1dd
    JZ 0x0040e1f8                       ; 0040e1df
        ;   XREF to: 0040e1f8 (CONDITIONAL_JUMP)  ; LAB_0040e1f8
    MOV EAX,dword ptr [ESP]             ; 0040e1e1
    MOV dword ptr [ESP + 0x18],EAX      ; 0040e1e4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0040e1e8
    MOV dword ptr [ESP + 0x1c],EAX      ; 0040e1ec
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040e1f0
    MOV dword ptr [ESP + 0x20],EAX      ; 0040e1f4
    PUSH 0x4                            ; 0040e1f8
        ;   Label: LAB_0040e1f8
    PUSH 0x0                            ; 0040e1fa
    PUSH 0x1                            ; 0040e1fc
    PUSH 0x2cfd900                      ; 0040e1fe
    LEA EAX,[ESP + 0x28]                ; 0040e203
    PUSH EAX                            ; 0040e207
    MOV EDX,dword ptr [0x005fc5a0]      ; 0040e208 | DAT_005fc5a0
    PUSH EDX                            ; 0040e20e
    CALL core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0 ; 0040e20f
        ;   XREF to: 004a3af0 (UNCONDITIONAL_CALL)  ; int core_fire.cpp_CFireEffect_createGunFlames_FUN_004a3af0(CFireEffect * this_ptr, CVector3f * position, CVector3f * euler_angles, int flame_count, ...)
    ADD ESP,0x18                        ; 0040e214
    ADD ESP,0x30                        ; 0040e217
    POP EDI                             ; 0040e21a
    POP ESI                             ; 0040e21b
    POP EBX                             ; 0040e21c
    RET                                 ; 0040e21d
    FLD float ptr [EBX + 0x31c]         ; 0040e21e
        ;   Label: LAB_0040e21e
    FSUB float ptr [ESP + 0x28]         ; 0040e224
    FSTP float ptr [EBX + 0x31c]        ; 0040e228
    JMP 0x0040e1b3                      ; 0040e22e
        ;   XREF to: 0040e1b3 (UNCONDITIONAL_JUMP)  ; LAB_0040e1b3

