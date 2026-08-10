; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_minecar_cpp_CMineCar_process_FUN_00520eb0(CMineCar *this_ptr,float delta_time)
;
; Parameters:
; CMineCar *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0
;   core_platfrm.cpp_CPlatform_process_FUN_0054cc30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520eb0
        ;   Label: core_minecar.cpp_CMineCar_process_FUN_00520eb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00520eb1
    PUSH dword ptr [ESP + 0xc]          ; 00520eb5
    PUSH EBX                            ; 00520eb9
    CALL core_platfrm.cpp_CPlatform_process_FUN_0054cc30 ; 00520eba
        ;   XREF to: 0054cc30 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_CPlatform_process_FUN_0054cc30(CPlatform * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00520ebf
    ADD ESP,0x8                         ; 00520ec5
    CMP EDX,0x3                         ; 00520ec8
    JZ 0x00520ed2                       ; 00520ecb
        ;   XREF to: 00520ed2 (CONDITIONAL_JUMP)  ; LAB_00520ed2
    CMP EDX,0x4                         ; 00520ecd
    JNZ 0x00520eeb                      ; 00520ed0
        ;   XREF to: 00520eeb (CONDITIONAL_JUMP)  ; LAB_00520eeb
    FLD float ptr [EBX + 0x72c]         ; 00520ed2
        ;   Label: LAB_00520ed2
    FSUB float ptr [ESP + 0xc]          ; 00520ed8
    FST float ptr [EBX + 0x72c]         ; 00520edc
    FLDZ                                ; 00520ee2
    FCOMPP                              ; 00520ee4
    FNSTSW AX                           ; 00520ee6
    SAHF                                ; 00520ee8
    JA 0x00520eed                       ; 00520ee9
        ;   XREF to: 00520eed (CONDITIONAL_JUMP)  ; LAB_00520eed
    POP EBX                             ; 00520eeb
        ;   Label: LAB_00520eeb
    RET                                 ; 00520eec
    PUSH 0xffff                         ; 00520eed
        ;   Label: LAB_00520eed
    PUSH 0x0                            ; 00520ef2
    PUSH 0x10000                        ; 00520ef4
    PUSH 0x4000                         ; 00520ef9
    PUSH 0x0                            ; 00520efe
    ADD EBX,0x20                        ; 00520f00
    PUSH EBX                            ; 00520f03
    MOV dword ptr [EBX + 0x70c],0x3dcccccd ; 00520f04
    MOV EBX,dword ptr [0x0067a3d0]      ; 00520f0e | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EBX                            ; 00520f14 | g_CFireEffectInstance
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 00520f15
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00520f1a
    POP EBX                             ; 00520f1d
    RET                                 ; 00520f1e

