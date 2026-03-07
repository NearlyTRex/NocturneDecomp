; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00428d80(CCharacter *this_ptr,CVector3f *target)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target
; Local Variables:
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_scat.cpp_CScat_updateAI_FUN_005578e0 at 00557ceb
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428d80
        ;   Label: core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00428d80
    SUB ESP,0x2c                        ; 00428d81
    MOV EBX,dword ptr [ESP + 0x34]      ; 00428d84
    MOV EDX,dword ptr [ESP + 0x38]      ; 00428d88
    PUSH EDX                            ; 00428d8c
    LEA EAX,[ESP + 0x10]                ; 00428d8d
    PUSH EAX                            ; 00428d91
    PUSH EBX                            ; 00428d92
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 00428d93
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00428d98
    PUSH EAX                            ; 00428d9b
    LEA EAX,[ESP + 0x4]                 ; 00428d9c
    PUSH EAX                            ; 00428da0
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00428da1
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00428da6
    MOV EAX,dword ptr [EAX + 0x4]       ; 00428da9
    MOV dword ptr [ESP + 0x24],EAX      ; 00428dac
    MOV EAX,dword ptr [EBX + 0x2438]    ; 00428db0
    PUSH dword ptr [ESP + 0x24]         ; 00428db6
    MOV dword ptr [ESP + 0x24],EAX      ; 00428dba
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00428dbe
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x2c],EAX      ; 00428dc3
    FLD float ptr [ESP + 0x2c]          ; 00428dc7
    ADD ESP,0x4                         ; 00428dcb
    FLD float ptr [ESP + 0x20]          ; 00428dce
    FXCH                                ; 00428dd2
    FST float ptr [ESP + 0x24]          ; 00428dd4
    FXCH                                ; 00428dd8
    FCHS                                ; 00428dda
    FSTP float ptr [ESP + 0x18]         ; 00428ddc
    FCOMP float ptr [ESP + 0x18]        ; 00428de0
    FNSTSW AX                           ; 00428de4
    SAHF                                ; 00428de6
    JC 0x00428e0d                       ; 00428de7
        ;   XREF to: 00428e0d (CONDITIONAL_JUMP)  ; LAB_00428e0d
    FLD float ptr [ESP + 0x24]          ; 00428de9
    FCOMP float ptr [ESP + 0x20]        ; 00428ded
    FNSTSW AX                           ; 00428df1
    SAHF                                ; 00428df3
    JBE 0x00428e13                      ; 00428df4
        ;   XREF to: 00428e13 (CONDITIONAL_JUMP)  ; LAB_00428e13
    MOV EAX,dword ptr [ESP + 0x20]      ; 00428df6
    MOV dword ptr [ESP + 0x1c],EAX      ; 00428dfa
        ;   Label: LAB_00428dfa
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00428dfe
    MOV dword ptr [EBX + 0x2418],EAX    ; 00428e02
    ADD ESP,0x2c                        ; 00428e08
    POP EBX                             ; 00428e0b
    RET                                 ; 00428e0c
    MOV EAX,dword ptr [ESP + 0x18]      ; 00428e0d
        ;   Label: LAB_00428e0d
    JMP 0x00428dfa                      ; 00428e11
        ;   XREF to: 00428dfa (UNCONDITIONAL_JUMP)  ; LAB_00428dfa
    MOV EAX,dword ptr [ESP + 0x24]      ; 00428e13
        ;   Label: LAB_00428e13
    MOV dword ptr [ESP + 0x1c],EAX      ; 00428e17
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00428e1b
    MOV dword ptr [EBX + 0x2418],EAX    ; 00428e1f
    ADD ESP,0x2c                        ; 00428e25
    POP EBX                             ; 00428e28
    RET                                 ; 00428e29

