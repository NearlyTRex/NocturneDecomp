; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0(CFireEffect *this_ptr,CVector3f *position,float drag_factor,CVector3f *wind_influence,int alpha_value)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   drag_factor
; CVector3f *      Stack[0x10]:4   wind_influence
; int              Stack[0x14]:4   alpha_value
;
; XREF[12]:
;   core_baron.cpp_FUN_00410490 at 004107d0
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413b3d
;   core_charactr.cpp_CCharacter_processSmoking_FUN_0042abd0 at 0042adc3
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90 at 004590d1
;   core_drip.cpp_FUN_00462300 at 0046257a
;   core_emitter.cpp_FUN_00478790 at 00478ac2
;   core_fire.cpp_CCrater_process_FUN_00487a20 at 00487aa1
;   core_fire.cpp_CFireEffect_createDefaultSmoke_FUN_0048aae0 at 0048aaf8
;   core_fire.cpp_CFireball_process_FUN_00484050 at 0048413f
;   core_fire.cpp_CGunFlame_process_FUN_00488430 at 00488517
;   ... and 2 more
;
; Referenced Globals:
;   undefined4 DAT_01c0a13c
;
; Called Functions:
;   core_fire.cpp_CSmokeParticle_init_FUN_00482780
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048afe0
        ;   Label: core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
    PUSH EDI                            ; 0048afe1
    PUSH EBP                            ; 0048afe2
    MOV EDX,dword ptr [0x01c0a13c]      ; 0048afe3 | DAT_01c0a13c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048afe9
    SUB EAX,EDX                         ; 0048aff0
    SHL EAX,0x2                         ; 0048aff2
    SUB EAX,EDX                         ; 0048aff5
    SHL EAX,0x2                         ; 0048aff7
    INC EDX                             ; 0048affa
    ADD EAX,0x1c0a140                   ; 0048affb
    MOV dword ptr [0x01c0a13c],EDX      ; 0048b000 | DAT_01c0a13c
    CMP EDX,0x800                       ; 0048b006
    JL 0x0048b018                       ; 0048b00c
        ;   XREF to: 0048b018 (CONDITIONAL_JUMP)  ; LAB_0048b018
    PUSH EBX                            ; 0048b00e
    XOR EBX,EBX                         ; 0048b00f
    MOV dword ptr [0x01c0a13c],EBX      ; 0048b011 | DAT_01c0a13c
    POP EBX                             ; 0048b017
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048b018
        ;   Label: LAB_0048b018
    PUSH ESI                            ; 0048b01c
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048b01d
    PUSH EDI                            ; 0048b021
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048b022
    PUSH dword ptr [ESP + 0x20]         ; 0048b026
    PUSH EBP                            ; 0048b02a
    PUSH EAX                            ; 0048b02b
    CALL core_fire.cpp_CSmokeParticle_init_FUN_00482780 ; 0048b02c
        ;   XREF to: 00482780 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CSmokeParticle_init_FUN_00482780(CSmokeParticle * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0048b031
    POP EBP                             ; 0048b034
    POP EDI                             ; 0048b035
    POP ESI                             ; 0048b036
    RET                                 ; 0048b037

