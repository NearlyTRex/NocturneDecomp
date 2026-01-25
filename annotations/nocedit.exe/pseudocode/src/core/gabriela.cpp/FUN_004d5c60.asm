; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d5c60()
;
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined1       Stack[-0x78]:1  local_78
; undefined1       Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined1       Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d4067
;
; Referenced Globals:
;   double DOUBLE_0062affd = 5
;   double DOUBLE_0062b005 = 3
;   double DOUBLE_0062b00d = 0.300000000000000
;   double DOUBLE_0062b015 = 0.5
;   double DOUBLE_0062b01d = 0.174532925194444
;   CDemonSet* g_CDemonSetPtr = 03114278
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.actor_list_ptr
;   undefined4 g_CDemonSetInstance.actor_list_data[0]
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5c60
        ;   Label: core_gabriela.cpp_FUN_004d5c60
    PUSH ESI                            ; 004d5c61
    PUSH EDI                            ; 004d5c62
    PUSH EBP                            ; 004d5c63
    MOV EBP,ESP                         ; 004d5c64
    SUB ESP,0x8c                        ; 004d5c66
    AND ESP,0xfffffff8                  ; 004d5c6c
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5c6f
    XOR EDI,EDI                         ; 004d5c72
    LEA ESI,[EAX + 0x20]                ; 004d5c74
    MOV dword ptr [ESP + 0x84],EDI      ; 004d5c77
    MOV dword ptr [EAX + 0x1fbac],0x0   ; 004d5c7e
    MOV EAX,[0x006810c8]                ; 004d5c88 | g_CDemonSetPtr
        ;   Label: LAB_004d5c88
    CMP EDI,dword ptr [EAX + 0x14d154]  ; 004d5c8d | g_CDemonSetInstance.actor_list_ptr
    JL 0x004d5cb2                       ; 004d5c93
        ;   XREF to: 004d5cb2 (CONDITIONAL_JUMP)  ; LAB_004d5cb2
    XOR EAX,EAX                         ; 004d5c95
    MOV ESP,EBP                         ; 004d5c97
    POP EBP                             ; 004d5c99
    POP EDI                             ; 004d5c9a
    POP ESI                             ; 004d5c9b
    POP EBX                             ; 004d5c9c
    RET                                 ; 004d5c9d
    MOV EAX,dword ptr [ESP + 0x84]      ; 004d5c9e
        ;   Label: LAB_004d5c9e
    ADD EAX,0x4                         ; 004d5ca5
    INC EDI                             ; 004d5ca8
    MOV dword ptr [ESP + 0x84],EAX      ; 004d5ca9
    JMP 0x004d5c88                      ; 004d5cb0
        ;   XREF to: 004d5c88 (UNCONDITIONAL_JUMP)  ; LAB_004d5c88
    MOV EBX,dword ptr [ESP + 0x84]      ; 004d5cb2
        ;   Label: LAB_004d5cb2
    MOV EDX,dword ptr [0x02dcd810]      ; 004d5cb9 | g_CLadderClassInfo.name_hash
    ADD EAX,EBX                         ; 004d5cbf
    PUSH EDX                            ; 004d5cc1
    MOV EAX,dword ptr [EAX + 0x14d158]  ; 004d5cc2 | g_CDemonSetInstance.actor_list_data[0]
    PUSH EAX                            ; 004d5cc8
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 004d5cc9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004d5cce
    MOV EBX,EAX                         ; 004d5cd1
    MOV dword ptr [ESP + 0x7c],EAX      ; 004d5cd3
    TEST EAX,EAX                        ; 004d5cd7
    JZ 0x004d5c9e                       ; 004d5cd9
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    LEA EDX,[EAX + 0x20]                ; 004d5cdb
    FLD float ptr [ESI]                 ; 004d5cde
    FSUB float ptr [EDX]                ; 004d5ce0
    FSTP float ptr [ESP + 0x40]         ; 004d5ce2
    FLD float ptr [ESI + 0x4]           ; 004d5ce6
    FSUB float ptr [EDX + 0x4]          ; 004d5ce9
    FST float ptr [ESP + 0x44]          ; 004d5cec
    FABS                                ; 004d5cf0
    FLD float ptr [ESI + 0x8]           ; 004d5cf2
    FSUB float ptr [EDX + 0x8]          ; 004d5cf5
    FSTP float ptr [ESP + 0x48]         ; 004d5cf8
    FCOMP double ptr [0x0062affd]       ; 004d5cfc | DOUBLE_0062affd
    FNSTSW AX                           ; 004d5d02
    SAHF                                ; 004d5d04
    JA 0x004d5c9e                       ; 004d5d05
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    FLD float ptr [ESP + 0x40]          ; 004d5d07
    FMUL ST0                            ; 004d5d0b
    FLD float ptr [ESP + 0x48]          ; 004d5d0d
    FMUL ST0                            ; 004d5d11
    FADDP                               ; 004d5d13
    FSQRT                               ; 004d5d15
    XOR ECX,ECX                         ; 004d5d17
    MOV dword ptr [ESP + 0x44],ECX      ; 004d5d19
    FCOMP double ptr [0x0062b005]       ; 004d5d1d | DOUBLE_0062b005
    FNSTSW AX                           ; 004d5d23
    SAHF                                ; 004d5d25
    JA 0x004d5c9e                       ; 004d5d26
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    PUSH EDX                            ; 004d5d2c
    LEA EAX,[ESP + 0x14]                ; 004d5d2d
    PUSH EAX                            ; 004d5d31
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5d32
    PUSH EAX                            ; 004d5d35
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d5d36
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 004d5d3b
    FLD float ptr [ESP + 0x10]          ; 004d5d3e
    FABS                                ; 004d5d42
    FCOMP double ptr [0x0062b00d]       ; 004d5d44 | DOUBLE_0062b00d
    FNSTSW AX                           ; 004d5d4a
    SAHF                                ; 004d5d4c
    JA 0x004d5c9e                       ; 004d5d4d
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    FLD float ptr [ESP + 0x18]          ; 004d5d53
    FST double ptr [ESP + 0x8]          ; 004d5d57
    FCOMP double ptr [0x0062b015]       ; 004d5d5b | DOUBLE_0062b015
    FNSTSW AX                           ; 004d5d61
    SAHF                                ; 004d5d63
    JC 0x004d5c9e                       ; 004d5d64
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    FLD double ptr [ESP + 0x8]          ; 004d5d6a
    FCOMP double ptr [0x0062b005]       ; 004d5d6e | DOUBLE_0062b005
    FNSTSW AX                           ; 004d5d74
    SAHF                                ; 004d5d76
    JA 0x004d5c9e                       ; 004d5d77
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    LEA EAX,[ESP + 0x10]                ; 004d5d7d
    PUSH EAX                            ; 004d5d81
    LEA EAX,[ESP + 0x50]                ; 004d5d82
    PUSH EAX                            ; 004d5d86
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d5d87
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d5d8c
    PUSH dword ptr [EAX + 0x4]          ; 004d5d8f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d5d92
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x8c],EAX      ; 004d5d97
    FLD float ptr [ESP + 0x8c]          ; 004d5d9e
    FABS                                ; 004d5da5
    ADD ESP,0x4                         ; 004d5da7
    FCOMP double ptr [0x0062b01d]       ; 004d5daa | DOUBLE_0062b01d
    FNSTSW AX                           ; 004d5db0
    SAHF                                ; 004d5db2
    JA 0x004d5c9e                       ; 004d5db3
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    PUSH ESI                            ; 004d5db9
    LEA EAX,[ESP + 0x2c]                ; 004d5dba
    PUSH EAX                            ; 004d5dbe
    XOR EDX,EDX                         ; 004d5dbf
    PUSH EBX                            ; 004d5dc1
    MOV dword ptr [ESP + 0x8c],EDX      ; 004d5dc2
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 004d5dc9
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    MOV EDX,EAX                         ; 004d5dce
    LEA EAX,[ESP + 0x1c]                ; 004d5dd0
    ADD ESP,0xc                         ; 004d5dd4
    CMP EAX,EDX                         ; 004d5dd7
    JZ 0x004d5def                       ; 004d5dd9
        ;   XREF to: 004d5def (CONDITIONAL_JUMP)  ; LAB_004d5def
    MOV EAX,dword ptr [EDX]             ; 004d5ddb
    MOV dword ptr [ESP + 0x10],EAX      ; 004d5ddd
    MOV EAX,dword ptr [EDX + 0x4]       ; 004d5de1
    MOV dword ptr [ESP + 0x14],EAX      ; 004d5de4
    MOV EAX,dword ptr [EDX + 0x8]       ; 004d5de8
    MOV dword ptr [ESP + 0x18],EAX      ; 004d5deb
    FLD float ptr [ESP + 0x18]          ; 004d5def
        ;   Label: LAB_004d5def
    FLDZ                                ; 004d5df3
    FCOMPP                              ; 004d5df5
    FNSTSW AX                           ; 004d5df7
    SAHF                                ; 004d5df9
    JBE 0x004d5e13                      ; 004d5dfa
        ;   XREF to: 004d5e13 (CONDITIONAL_JUMP)  ; LAB_004d5e13
    MOV AH,byte ptr [ESP + 0x1b]        ; 004d5dfc
    MOV ECX,0x1                         ; 004d5e00
    XOR AH,0x80                         ; 004d5e05
    MOV dword ptr [ESP + 0x80],ECX      ; 004d5e08
    MOV byte ptr [ESP + 0x1b],AH        ; 004d5e0f
    FLD float ptr [ESP + 0x10]          ; 004d5e13
        ;   Label: LAB_004d5e13
    FABS                                ; 004d5e17
    FCOMP double ptr [0x0062b00d]       ; 004d5e19 | DOUBLE_0062b00d
    FNSTSW AX                           ; 004d5e1f
    SAHF                                ; 004d5e21
    JA 0x004d5c9e                       ; 004d5e22
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    FLD float ptr [ESP + 0x18]          ; 004d5e28
    FST double ptr [ESP]                ; 004d5e2c
    FCOMP double ptr [0x0062b015]       ; 004d5e2f | DOUBLE_0062b015
    FNSTSW AX                           ; 004d5e35
    SAHF                                ; 004d5e37
    JC 0x004d5c9e                       ; 004d5e38
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    FLD double ptr [ESP]                ; 004d5e3e
    FCOMP double ptr [0x0062b005]       ; 004d5e41 | DOUBLE_0062b005
    FNSTSW AX                           ; 004d5e47
    SAHF                                ; 004d5e49
    JA 0x004d5c9e                       ; 004d5e4a
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    LEA EAX,[ESP + 0x10]                ; 004d5e50
    PUSH EAX                            ; 004d5e54
    LEA EAX,[ESP + 0x74]                ; 004d5e55
    PUSH EAX                            ; 004d5e59
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d5e5a
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d5e5f
    PUSH dword ptr [EAX + 0x4]          ; 004d5e62
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004d5e65
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x8c],EAX      ; 004d5e6a
    FLD float ptr [ESP + 0x8c]          ; 004d5e71
    FABS                                ; 004d5e78
    ADD ESP,0x4                         ; 004d5e7a
    FCOMP double ptr [0x0062b01d]       ; 004d5e7d | DOUBLE_0062b01d
    FNSTSW AX                           ; 004d5e83
    SAHF                                ; 004d5e85
    JA 0x004d5c9e                       ; 004d5e86
        ;   XREF to: 004d5c9e (CONDITIONAL_JUMP)  ; LAB_004d5c9e
    PUSH 0x1                            ; 004d5e8c
    MOV EDX,dword ptr [EBP + 0x14]      ; 004d5e8e
    MOV EAX,dword ptr [ESP + 0x80]      ; 004d5e91
    PUSH 0x16                           ; 004d5e98
    MOV dword ptr [EDX + 0x1fbac],EAX   ; 004d5e9a
    LEA EAX,[EDX + 0x158]               ; 004d5ea0
    PUSH EAX                            ; 004d5ea6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004d5ea7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d5eac
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5eaf
    MOV EDI,0x40000000                  ; 004d5eb2
    XOR EBX,EBX                         ; 004d5eb7
    MOV dword ptr [EAX + 0xbe38],0x0    ; 004d5eb9
    MOV EAX,dword ptr [ESP + 0x80]      ; 004d5ec3
    MOV dword ptr [ESP + 0x1c],EBX      ; 004d5eca
    MOV dword ptr [ESP + 0x20],EBX      ; 004d5ece
    MOV dword ptr [ESP + 0x24],EDI      ; 004d5ed2
    TEST EAX,EAX                        ; 004d5ed6
    JZ 0x004d5ee2                       ; 004d5ed8
        ;   XREF to: 004d5ee2 (CONDITIONAL_JUMP)  ; LAB_004d5ee2
    MOV dword ptr [ESP + 0x24],0xc0000000 ; 004d5eda
    LEA EAX,[ESP + 0x1c]                ; 004d5ee2
        ;   Label: LAB_004d5ee2
    PUSH EAX                            ; 004d5ee6
    LEA EAX,[ESP + 0x38]                ; 004d5ee7
    PUSH EAX                            ; 004d5eeb
    MOV ECX,dword ptr [ESP + 0x84]      ; 004d5eec
    PUSH ECX                            ; 004d5ef3
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004d5ef4
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004d5ef9
    MOV EDX,EAX                         ; 004d5efc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5efe
    MOV ECX,dword ptr [EDX]             ; 004d5f01
    MOV dword ptr [EAX + 0x20],ECX      ; 004d5f03
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d5f06
    MOV dword ptr [EAX + 0x24],ECX      ; 004d5f09
    FLD float ptr [EDX + 0x8]           ; 004d5f0c
    MOV EDX,dword ptr [ESP + 0x7c]      ; 004d5f0f
    FSTP float ptr [EAX + 0x28]         ; 004d5f13
    FLD float ptr [EDX + 0x20]          ; 004d5f16
    FSUB float ptr [EAX + 0x20]         ; 004d5f19
    FSTP float ptr [ESP + 0x58]         ; 004d5f1c
    FLD float ptr [EDX + 0x24]          ; 004d5f20
    FSUB float ptr [EAX + 0x24]         ; 004d5f23
    FSTP float ptr [ESP + 0x5c]         ; 004d5f26
    FLD float ptr [EDX + 0x28]          ; 004d5f2a
    FSUB float ptr [EAX + 0x28]         ; 004d5f2d
    LEA EAX,[ESP + 0x58]                ; 004d5f30
    PUSH EAX                            ; 004d5f34
    LEA EAX,[ESP + 0x68]                ; 004d5f35
    PUSH EAX                            ; 004d5f39
    FSTP float ptr [ESP + 0x68]         ; 004d5f3a
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004d5f3e
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004d5f43
    FLD float ptr [EAX + 0x4]           ; 004d5f46
    MOV EAX,dword ptr [EBP + 0x14]      ; 004d5f49
    PUSH EAX                            ; 004d5f4c
    FSTP float ptr [EAX + 0x34]         ; 004d5f4d
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 004d5f50
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    MOV EAX,0x1                         ; 004d5f55
    ADD ESP,0x4                         ; 004d5f5a
    MOV ESP,EBP                         ; 004d5f5d
    POP EBP                             ; 004d5f5f
    POP EDI                             ; 004d5f60
    POP ESI                             ; 004d5f61
    POP EBX                             ; 004d5f62
    RET                                 ; 004d5f63

