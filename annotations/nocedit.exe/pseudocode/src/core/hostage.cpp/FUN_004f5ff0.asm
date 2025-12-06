; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hostage.cpp_FUN_004f5ff0()
;
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 at 004f54e7
;
; Referenced Globals:
;   double DOUBLE_0062f0ea = 1.5
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5ff0
        ;   Label: core_hostage.cpp_FUN_004f5ff0
    SUB ESP,0x1c                        ; 004f5ff1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004f5ff4
    CMP dword ptr [EBX + 0x1fae8],0x0   ; 004f5ff8
    JZ 0x004f60e7                       ; 004f5fff | LAB_004f60e7
        ;   XREF to: 004f60e7 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x1faec]       ; 004f6005
    FSUB float ptr [ESP + 0x28]         ; 004f600b
    FST float ptr [EBX + 0x1faec]       ; 004f600f
    FLDZ                                ; 004f6015
    FCOMPP                              ; 004f6017
    FNSTSW AX                           ; 004f6019
    SAHF                                ; 004f601b
    JNC 0x004f60ee                      ; 004f601c | LAB_004f60ee
        ;   XREF to: 004f60ee (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x2dd4]        ; 004f6022
    FCOMP double ptr [0x0062f0ea]       ; 004f6028 | double DOUBLE_0062f0ea
    FNSTSW AX                           ; 004f602e
    SAHF                                ; 004f6030
    JA 0x004f60ee                       ; 004f6031 | LAB_004f60ee
        ;   XREF to: 004f60ee (CONDITIONAL_JUMP)
    LEA EDX,[EBX + 0x20]                ; 004f6037
    MOV EAX,dword ptr [EBX + 0x1fae8]   ; 004f603a
    FLD float ptr [EDX]                 ; 004f6040
    FSUB float ptr [EAX + 0x20]         ; 004f6042
    FSTP float ptr [ESP]                ; 004f6045
    FLD float ptr [EDX + 0x4]           ; 004f6048
    FSUB float ptr [EAX + 0x24]         ; 004f604b
    FSTP float ptr [ESP + 0x4]          ; 004f604e
    FLD float ptr [EDX + 0x8]           ; 004f6052
    FSUB float ptr [EAX + 0x28]         ; 004f6055
    MOV EAX,ESP                         ; 004f6058
    PUSH EAX                            ; 004f605a
    LEA EAX,[ESP + 0x10]                ; 004f605b
    PUSH EAX                            ; 004f605f
    FSTP float ptr [ESP + 0x10]         ; 004f6060
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004f6064 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX + 0x4]           ; 004f6069
    ADD ESP,0x8                         ; 004f606c
    FSUB float ptr [EBX + 0x34]         ; 004f606f
    SUB ESP,0x4                         ; 004f6072
    FSTP float ptr [ESP]                ; 004f6075
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004f6078 | float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
    FLD float ptr [EBX + 0x2438]        ; 004f607d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004f6083
    FCHS                                ; 004f6087
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004f6089
    MOV dword ptr [EBX + 0x2418],EAX    ; 004f608d
    ADD ESP,0x4                         ; 004f6093
    FCOMP float ptr [EBX + 0x2418]      ; 004f6096
    FNSTSW AX                           ; 004f609c
    SAHF                                ; 004f609e
    JBE 0x004f60ad                      ; 004f609f | LAB_004f60ad
        ;   XREF to: 004f60ad (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2438]    ; 004f60a1
    MOV dword ptr [EBX + 0x2418],EAX    ; 004f60a7
    FLD float ptr [EBX + 0x2418]        ; 004f60ad
        ;   Label: LAB_004f60ad
    FCOMP float ptr [EBX + 0x2438]      ; 004f60b3
    FNSTSW AX                           ; 004f60b9
    SAHF                                ; 004f60bb
    JBE 0x004f60ca                      ; 004f60bc | LAB_004f60ca
        ;   XREF to: 004f60ca (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2438]    ; 004f60be
    MOV dword ptr [EBX + 0x2418],EAX    ; 004f60c4
    PUSH 0x1                            ; 004f60ca
        ;   Label: LAB_004f60ca
    PUSH 0x2                            ; 004f60cc
    ADD EBX,0x158                       ; 004f60ce
    PUSH EBX                            ; 004f60d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f60d5 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    MOV EAX,0x1                         ; 004f60da
    ADD ESP,0xc                         ; 004f60df
    ADD ESP,0x1c                        ; 004f60e2
    POP EBX                             ; 004f60e5
    RET                                 ; 004f60e6
    XOR EAX,EAX                         ; 004f60e7
        ;   Label: LAB_004f60e7
    ADD ESP,0x1c                        ; 004f60e9
    POP EBX                             ; 004f60ec
    RET                                 ; 004f60ed
    PUSH 0x1                            ; 004f60ee
        ;   Label: LAB_004f60ee
    PUSH 0x0                            ; 004f60f0
    ADD EBX,0x158                       ; 004f60f2
    PUSH EBX                            ; 004f60f8
    MOV dword ptr [EBX + 0x1f990],0x0   ; 004f60f9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004f6103 | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004f6108
    XOR EAX,EAX                         ; 004f610b
    ADD ESP,0x1c                        ; 004f610d
    POP EBX                             ; 004f6110
    RET                                 ; 004f6111

