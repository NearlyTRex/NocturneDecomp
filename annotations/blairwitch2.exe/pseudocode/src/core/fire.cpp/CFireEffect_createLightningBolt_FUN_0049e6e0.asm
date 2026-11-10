; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLightningBolt_FUN_0049e6e0(CFireEffect *this_ptr,CVector3f *start_position,float start_width,int enable_camera_shake,float end_width)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; float            Stack[0xc]:4   start_width
; int              Stack[0x10]:4   enable_camera_shake
; float            Stack[0x14]:4   end_width
;
; XREF[3]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 00410271
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00487448
;   core_weather.cpp_CWeather_createLightningStrike_FUN_0058aa30 at 0058ac26
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ca13e8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CLightningBolt_activate_FUN_0049aaf0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00534800
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049e6e0
        ;   Label: core_fire.cpp_CFireEffect_createLightningBolt_FUN_0049e6e0
    PUSH dword ptr [ESP + 0x18]         ; 0049e6e1
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049e6e5
    PUSH dword ptr [ESP + 0x14]         ; 0049e6e9
    PUSH EDX                            ; 0049e6ed
    MOV EDX,dword ptr [0x01ca13e8]      ; 0049e6ee | DAT_01ca13e8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049e6f4
    SUB EAX,EDX                         ; 0049e6fb
    SHL EAX,0x2                         ; 0049e6fd
    SUB EAX,EDX                         ; 0049e700
    SHL EAX,0x2                         ; 0049e702
    ADD EAX,0x1ca13ec                   ; 0049e705
    PUSH EAX                            ; 0049e70a
    CALL core_fire.cpp_CLightningBolt_activate_FUN_0049aaf0 ; 0049e70b
        ;   XREF to: 0049aaf0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_activate_FUN_0049aaf0(CLightningBolt * this_ptr, CVector3f * start_position, float start_width, float end_width)
    MOV ECX,dword ptr [0x01ca13e8]      ; 0049e710 | DAT_01ca13e8
    INC ECX                             ; 0049e716
    ADD ESP,0x10                        ; 0049e717
    MOV dword ptr [0x01ca13e8],ECX      ; 0049e71a | DAT_01ca13e8
    CMP ECX,0xa                         ; 0049e720
    JGE 0x0049e72e                      ; 0049e723
        ;   XREF to: 0049e72e (CONDITIONAL_JUMP)  ; LAB_0049e72e
    CMP dword ptr [ESP + 0x14],0x0      ; 0049e725
    JNZ 0x0049e741                      ; 0049e72a
        ;   XREF to: 0049e741 (CONDITIONAL_JUMP)  ; LAB_0049e741
    POP EBP                             ; 0049e72c
    RET                                 ; 0049e72d
    PUSH ESI                            ; 0049e72e
        ;   Label: LAB_0049e72e
    XOR ESI,ESI                         ; 0049e72f
    MOV dword ptr [0x01ca13e8],ESI      ; 0049e731 | DAT_01ca13e8
    POP ESI                             ; 0049e737
    CMP dword ptr [ESP + 0x14],0x0      ; 0049e738
    JNZ 0x0049e741                      ; 0049e73d
        ;   XREF to: 0049e741 (CONDITIONAL_JUMP)  ; LAB_0049e741
    POP EBP                             ; 0049e73f
    RET                                 ; 0049e740
    PUSH 0x3f800000                     ; 0049e741
        ;   Label: LAB_0049e741
    PUSH 0x0                            ; 0049e746
    PUSH 0x0                            ; 0049e748
    MOV EBP,dword ptr [0x0061b5a8]      ; 0049e74a | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 0049e750
    PUSH EBP                            ; 0049e755 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00534800 ; 0049e756
        ;   XREF to: 00534800 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 0049e75b
    POP EBP                             ; 0049e75e
    RET                                 ; 0049e75f

