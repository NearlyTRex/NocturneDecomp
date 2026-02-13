; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_fire_cpp_CFireEffect_FUN_004c8fd0(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_baron.cpp_CBaron_FUN_004136b0 at 004139af
;   core_emitter.cpp_CEmitter_process_FUN_004a8070 at 004a8763
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CGunFlame* g_GunFlameActiveListHead
;   CLightningBolt[10] g_LightningBoltPool
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_FUN_004c5680
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c8fd0
        ;   Label: core_fire.cpp_CFireEffect_FUN_004c8fd0
    PUSH dword ptr [ESP + 0x1c]         ; 004c8fd1
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c8fd5
    PUSH dword ptr [ESP + 0x1c]         ; 004c8fd9
    PUSH EDX                            ; 004c8fdd
    MOV EDX,dword ptr [0x02d715b8]      ; 004c8fde | g_GunFlameActiveListHead
    LEA EAX,[EDX*0x4 + 0x0]             ; 004c8fe4
    SUB EAX,EDX                         ; 004c8feb
    SHL EAX,0x2                         ; 004c8fed
    SUB EAX,EDX                         ; 004c8ff0
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c8ff2
    SHL EAX,0x2                         ; 004c8ff6
    PUSH ECX                            ; 004c8ff9
    ADD EAX,0x2d715bc                   ; 004c8ffa | g_LightningBoltPool
    PUSH EAX                            ; 004c8fff
    CALL core_fire.cpp_FUN_004c5680     ; 004c9000
        ;   XREF to: 004c5680 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004c5680()
    MOV EBX,dword ptr [0x02d715b8]      ; 004c9005 | g_GunFlameActiveListHead
    INC EBX                             ; 004c900b
    ADD ESP,0x14                        ; 004c900c
    MOV dword ptr [0x02d715b8],EBX      ; 004c900f | g_GunFlameActiveListHead
    CMP EBX,0xa                         ; 004c9015
    JGE 0x004c9023                      ; 004c9018
        ;   XREF to: 004c9023 (CONDITIONAL_JUMP)  ; LAB_004c9023
    CMP dword ptr [ESP + 0x14],0x0      ; 004c901a
    JNZ 0x004c9036                      ; 004c901f
        ;   XREF to: 004c9036 (CONDITIONAL_JUMP)  ; LAB_004c9036
    POP EBX                             ; 004c9021
    RET                                 ; 004c9022
    PUSH EDI                            ; 004c9023
        ;   Label: LAB_004c9023
    XOR EDI,EDI                         ; 004c9024
    MOV dword ptr [0x02d715b8],EDI      ; 004c9026 | g_GunFlameActiveListHead
    POP EDI                             ; 004c902c
    CMP dword ptr [ESP + 0x14],0x0      ; 004c902d
    JNZ 0x004c9036                      ; 004c9032
        ;   XREF to: 004c9036 (CONDITIONAL_JUMP)  ; LAB_004c9036
    POP EBX                             ; 004c9034
    RET                                 ; 004c9035
    PUSH 0x3f800000                     ; 004c9036
        ;   Label: LAB_004c9036
    PUSH 0x0                            ; 004c903b
    PUSH 0x0                            ; 004c903d
    MOV EAX,[0x006810c8]                ; 004c903f | g_CDemonSetInstance | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004c9044
    PUSH EAX                            ; 004c9049 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0 ; 004c904a
        ;   XREF to: 00570fa0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00570fa0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004c904f
    POP EBX                             ; 004c9052
    RET                                 ; 004c9053

