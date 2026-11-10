; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   start_position
; CVector3f *      Stack[0xc]:4   end_position
; int              Stack[0x10]:4   enable_camera_shake
; float            Stack[0x14]:4   end_width
; float            Stack[0x18]:4   end_spread
;
; XREF[2]:
;   core_baron.cpp_CBaron_performLightningAttack_FUN_00410170 at 00410541
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 0048769a
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ca13e8
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CLightningBolt_activateDirectional_FUN_0049ab30
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00534800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049e760
        ;   Label: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_0049e760
    PUSH dword ptr [ESP + 0x1c]         ; 0049e761
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049e765
    PUSH dword ptr [ESP + 0x1c]         ; 0049e769
    PUSH EDX                            ; 0049e76d
    MOV EDX,dword ptr [0x01ca13e8]      ; 0049e76e | DAT_01ca13e8
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049e774
    SUB EAX,EDX                         ; 0049e77b
    SHL EAX,0x2                         ; 0049e77d
    SUB EAX,EDX                         ; 0049e780
    MOV ECX,dword ptr [ESP + 0x18]      ; 0049e782
    SHL EAX,0x2                         ; 0049e786
    PUSH ECX                            ; 0049e789
    ADD EAX,0x1ca13ec                   ; 0049e78a
    PUSH EAX                            ; 0049e78f
    CALL core_fire.cpp_CLightningBolt_activateDirectional_FUN_0049ab30 ; 0049e790
        ;   XREF to: 0049ab30 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_activateDirectional_FUN_0049ab30(CLightningBolt * this_ptr, CVector3f * start_position, CVector3f * end_position, float end_width, ...)
    MOV EBX,dword ptr [0x01ca13e8]      ; 0049e795 | DAT_01ca13e8
    INC EBX                             ; 0049e79b
    ADD ESP,0x14                        ; 0049e79c
    MOV dword ptr [0x01ca13e8],EBX      ; 0049e79f | DAT_01ca13e8
    CMP EBX,0xa                         ; 0049e7a5
    JGE 0x0049e7b3                      ; 0049e7a8
        ;   XREF to: 0049e7b3 (CONDITIONAL_JUMP)  ; LAB_0049e7b3
    CMP dword ptr [ESP + 0x14],0x0      ; 0049e7aa
    JNZ 0x0049e7c6                      ; 0049e7af
        ;   XREF to: 0049e7c6 (CONDITIONAL_JUMP)  ; LAB_0049e7c6
    POP EBX                             ; 0049e7b1
    RET                                 ; 0049e7b2
    PUSH EDI                            ; 0049e7b3
        ;   Label: LAB_0049e7b3
    XOR EDI,EDI                         ; 0049e7b4
    MOV dword ptr [0x01ca13e8],EDI      ; 0049e7b6 | DAT_01ca13e8
    POP EDI                             ; 0049e7bc
    CMP dword ptr [ESP + 0x14],0x0      ; 0049e7bd
    JNZ 0x0049e7c6                      ; 0049e7c2
        ;   XREF to: 0049e7c6 (CONDITIONAL_JUMP)  ; LAB_0049e7c6
    POP EBX                             ; 0049e7c4
    RET                                 ; 0049e7c5
    PUSH 0x3f800000                     ; 0049e7c6
        ;   Label: LAB_0049e7c6
    PUSH 0x0                            ; 0049e7cb
    PUSH 0x0                            ; 0049e7cd
    MOV EAX,[0x0061b5a8]                ; 0049e7cf | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 0049e7d4
    PUSH EAX                            ; 0049e7d9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00534800 ; 0049e7da
        ;   XREF to: 00534800 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00534800(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 0049e7df
    POP EBX                             ; 0049e7e2
    RET                                 ; 0049e7e3

