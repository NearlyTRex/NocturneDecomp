; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_004c8f50(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; float            Stack[0xc]:4   start_width
; int              Stack[0x10]:4   enable_camera_shake
; float            Stack[0x14]:4   end_width
;
; XREF[3]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_004136b0 at 00413781
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a85a6
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005eeeb0 at 005ef07a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   int g_LightningBoltAllocIndex
;   CLightningBolt[10] g_LightningBoltPool
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CLightningBolt_activate_FUN_004c5640
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c8f50
        ;   Label: core_fire.cpp_CFireEffect_createLightningBolt_FUN_004c8f50
    PUSH dword ptr [ESP + 0x18]         ; 004c8f51
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c8f55
    PUSH dword ptr [ESP + 0x14]         ; 004c8f59
    PUSH EDX                            ; 004c8f5d
    MOV EDX,dword ptr [0x02d715b8]      ; 004c8f5e | g_LightningBoltAllocIndex
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c8f64
    SUB EAX,EDX                         ; 004c8f6b
    SHL EAX,0x2                         ; 004c8f6d
    SUB EAX,EDX                         ; 004c8f70
    SHL EAX,0x2                         ; 004c8f72
    ADD EAX,0x2d715bc                   ; 004c8f75 | g_LightningBoltPool
    PUSH EAX                            ; 004c8f7a
    CALL core_fire.cpp_CLightningBolt_activate_FUN_004c5640 ; 004c8f7b
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_activate_FUN_004c5640(CLightningBolt * this_ptr, CVector3f * start_position, float start_width, float end_width)
    MOV ECX,dword ptr [0x02d715b8]      ; 004c8f80 | g_LightningBoltAllocIndex
    INC ECX                             ; 004c8f86
    ADD ESP,0x10                        ; 004c8f87
    MOV dword ptr [0x02d715b8],ECX      ; 004c8f8a | g_LightningBoltAllocIndex
    CMP ECX,0xa                         ; 004c8f90
    JGE 0x004c8f9e                      ; 004c8f93
        ;   XREF to: 004c8f9e (CONDITIONAL_JUMP)  ; LAB_004c8f9e
    CMP dword ptr [ESP + 0x14],0x0      ; 004c8f95
    JNZ 0x004c8fb1                      ; 004c8f9a
        ;   XREF to: 004c8fb1 (CONDITIONAL_JUMP)  ; LAB_004c8fb1
    POP EBP                             ; 004c8f9c
    RET                                 ; 004c8f9d
    PUSH ESI                            ; 004c8f9e
        ;   Label: LAB_004c8f9e
    XOR ESI,ESI                         ; 004c8f9f
    MOV dword ptr [0x02d715b8],ESI      ; 004c8fa1 | g_LightningBoltAllocIndex
    POP ESI                             ; 004c8fa7
    CMP dword ptr [ESP + 0x14],0x0      ; 004c8fa8
    JNZ 0x004c8fb1                      ; 004c8fad
        ;   XREF to: 004c8fb1 (CONDITIONAL_JUMP)  ; LAB_004c8fb1
    POP EBP                             ; 004c8faf
    RET                                 ; 004c8fb0
    PUSH 0x3f800000                     ; 004c8fb1
        ;   Label: LAB_004c8fb1
    PUSH 0x0                            ; 004c8fb6
    PUSH 0x0                            ; 004c8fb8
    MOV EBP,dword ptr [0x006810c8]      ; 004c8fba | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004c8fc0
    PUSH EBP                            ; 004c8fc5 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0 ; 004c8fc6
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004c8fcb
    POP EBP                             ; 004c8fce
    RET                                 ; 004c8fcf

