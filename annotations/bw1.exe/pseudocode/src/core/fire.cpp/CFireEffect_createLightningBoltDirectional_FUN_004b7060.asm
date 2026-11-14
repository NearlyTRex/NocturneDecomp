; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060(CFireEffect *this_ptr,CVector3f *start_position,CVector3f *end_position,int enable_camera_shake,float end_width,float end_spread)
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
;   core_baron.cpp_CBaron_performLightningAttack_FUN_0040fcf0 at 004100c1
;   core_emitter.cpp_CEmitter_process_FUN_0049f310 at 0049fcfa
;
; Referenced Globals:
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01cb9e74
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_CLightningBolt_activateDirectional_FUN_004b34d0
;   core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b7060
        ;   Label: core_fire.cpp_CFireEffect_createLightningBoltDirectional_FUN_004b7060
    PUSH dword ptr [ESP + 0x1c]         ; 004b7061
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b7065
    PUSH dword ptr [ESP + 0x1c]         ; 004b7069
    PUSH EDX                            ; 004b706d
    MOV EDX,dword ptr [0x01cb9e74]      ; 004b706e | DAT_01cb9e74
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b7074
    SUB EAX,EDX                         ; 004b707b
    SHL EAX,0x2                         ; 004b707d
    SUB EAX,EDX                         ; 004b7080
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b7082
    SHL EAX,0x2                         ; 004b7086
    PUSH ECX                            ; 004b7089
    ADD EAX,0x1cb9e78                   ; 004b708a
    PUSH EAX                            ; 004b708f
    CALL core_fire.cpp_CLightningBolt_activateDirectional_FUN_004b34d0 ; 004b7090
        ;   XREF to: 004b34d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CLightningBolt_activateDirectional_FUN_004b34d0(CLightningBolt * this_ptr, CVector3f * start_position, CVector3f * end_position, float end_width, ...)
    MOV EBX,dword ptr [0x01cb9e74]      ; 004b7095 | DAT_01cb9e74
    INC EBX                             ; 004b709b
    ADD ESP,0x14                        ; 004b709c
    MOV dword ptr [0x01cb9e74],EBX      ; 004b709f | DAT_01cb9e74
    CMP EBX,0xa                         ; 004b70a5
    JGE 0x004b70b3                      ; 004b70a8
        ;   XREF to: 004b70b3 (CONDITIONAL_JUMP)  ; LAB_004b70b3
    CMP dword ptr [ESP + 0x14],0x0      ; 004b70aa
    JNZ 0x004b70c6                      ; 004b70af
        ;   XREF to: 004b70c6 (CONDITIONAL_JUMP)  ; LAB_004b70c6
    POP EBX                             ; 004b70b1
    RET                                 ; 004b70b2
    PUSH EDI                            ; 004b70b3
        ;   Label: LAB_004b70b3
    XOR EDI,EDI                         ; 004b70b4
    MOV dword ptr [0x01cb9e74],EDI      ; 004b70b6 | DAT_01cb9e74
    POP EDI                             ; 004b70bc
    CMP dword ptr [ESP + 0x14],0x0      ; 004b70bd
    JNZ 0x004b70c6                      ; 004b70c2
        ;   XREF to: 004b70c6 (CONDITIONAL_JUMP)  ; LAB_004b70c6
    POP EBX                             ; 004b70c4
    RET                                 ; 004b70c5
    PUSH 0x3f800000                     ; 004b70c6
        ;   Label: LAB_004b70c6
    PUSH 0x0                            ; 004b70cb
    PUSH 0x0                            ; 004b70cd
    MOV EAX,[0x00622c18]                ; 004b70cf | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 004b70d4
    PUSH EAX                            ; 004b70d9 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0 ; 004b70da
        ;   XREF to: 00555ab0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_00555ab0(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    ADD ESP,0x14                        ; 004b70df
    POP EBX                             ; 004b70e2
    RET                                 ; 004b70e3

