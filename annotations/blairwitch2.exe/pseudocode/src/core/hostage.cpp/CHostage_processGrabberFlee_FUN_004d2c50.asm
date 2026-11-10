; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004d2c50(CHostage *this_ptr,float delta_time)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_hostage.cpp_CHostage_process_FUN_004d1660 at 004d20cf
;
; Referenced Globals:
;   undefined4 DAT_005da3a6
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2c50
        ;   Label: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004d2c50
    SUB ESP,0x34                        ; 004d2c51
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004d2c54
    CMP dword ptr [EBX + 0x24728],0x0   ; 004d2c58
    JZ 0x004d2d6e                       ; 004d2c5f
        ;   XREF to: 004d2d6e (CONDITIONAL_JUMP)  ; LAB_004d2d6e
    FLD float ptr [EBX + 0x2472c]       ; 004d2c65
    FSUB float ptr [ESP + 0x40]         ; 004d2c6b
    FST float ptr [EBX + 0x2472c]       ; 004d2c6f
    FLDZ                                ; 004d2c75
    FCOMPP                              ; 004d2c77
    FNSTSW AX                           ; 004d2c79
    SAHF                                ; 004d2c7b
    JNC 0x004d2d75                      ; 004d2c7c
        ;   XREF to: 004d2d75 (CONDITIONAL_JUMP)  ; LAB_004d2d75
    FLD float ptr [EBX + 0x304c]        ; 004d2c82
    FCOMP double ptr [0x005da3a6]       ; 004d2c88 | DAT_005da3a6
    FNSTSW AX                           ; 004d2c8e
    SAHF                                ; 004d2c90
    JA 0x004d2d75                       ; 004d2c91
        ;   XREF to: 004d2d75 (CONDITIONAL_JUMP)  ; LAB_004d2d75
    PUSH EDI                            ; 004d2c97
    PUSH ESI                            ; 004d2c98
    LEA EDI,[ESP + 0x20]                ; 004d2c99
    LEA EDX,[EBX + 0x20]                ; 004d2c9d
    LEA ESI,[ESP + 0x14]                ; 004d2ca0
    MOV EAX,dword ptr [EBX + 0x24728]   ; 004d2ca4
    FLD float ptr [EDX]                 ; 004d2caa
    FLD float ptr [EDX + 0x4]           ; 004d2cac
    FLD float ptr [EDX + 0x8]           ; 004d2caf
    FXCH ST2                            ; 004d2cb2
    FSUB float ptr [EAX + 0x20]         ; 004d2cb4
    FXCH                                ; 004d2cb7
    FSUB float ptr [EAX + 0x24]         ; 004d2cb9
    FXCH ST2                            ; 004d2cbc
    FSUB float ptr [EAX + 0x28]         ; 004d2cbe
    FXCH                                ; 004d2cc1
    FSTP float ptr [ESP + 0x14]         ; 004d2cc3
    FXCH                                ; 004d2cc7
    FSTP float ptr [ESP + 0x18]         ; 004d2cc9
    FSTP float ptr [ESP + 0x1c]         ; 004d2ccd
    LEA EAX,[ESP + 0x20]                ; 004d2cd1
    MOVSD ES:EDI,ESI                    ; 004d2cd5
    MOVSD ES:EDI,ESI                    ; 004d2cd6
    MOVSD ES:EDI,ESI                    ; 004d2cd7
    PUSH EAX                            ; 004d2cd8
    LEA ESI,[ESP + 0x30]                ; 004d2cd9
    LEA EDI,[ESP + 0xc]                 ; 004d2cdd
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004d2ce1
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x30]                ; 004d2ce6
    ADD ESP,0x4                         ; 004d2cea
    MOVSD ES:EDI,ESI                    ; 004d2ced
    MOVSD ES:EDI,ESI                    ; 004d2cee
    MOVSD ES:EDI,ESI                    ; 004d2cef
    FLD float ptr [ESP + 0xc]           ; 004d2cf0
    FSUB float ptr [EBX + 0x34]         ; 004d2cf4
    SUB ESP,0x4                         ; 004d2cf7
    FSTP float ptr [ESP]                ; 004d2cfa
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004d2cfd
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    FLD float ptr [EBX + 0x2598]        ; 004d2d02
    MOV dword ptr [ESP + 0x3c],EAX      ; 004d2d08
    FCHS                                ; 004d2d0c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004d2d0e
    MOV dword ptr [EBX + 0x2578],EAX    ; 004d2d12
    ADD ESP,0x4                         ; 004d2d18
    FCOMP float ptr [EBX + 0x2578]      ; 004d2d1b
    FNSTSW AX                           ; 004d2d21
    SAHF                                ; 004d2d23
    JBE 0x004d2d32                      ; 004d2d24
        ;   XREF to: 004d2d32 (CONDITIONAL_JUMP)  ; LAB_004d2d32
    MOV EAX,dword ptr [EBX + 0x2598]    ; 004d2d26
    MOV dword ptr [EBX + 0x2578],EAX    ; 004d2d2c
    FLD float ptr [EBX + 0x2578]        ; 004d2d32
        ;   Label: LAB_004d2d32
    FCOMP float ptr [EBX + 0x2598]      ; 004d2d38
    FNSTSW AX                           ; 004d2d3e
    SAHF                                ; 004d2d40
    JBE 0x004d2d4f                      ; 004d2d41
        ;   XREF to: 004d2d4f (CONDITIONAL_JUMP)  ; LAB_004d2d4f
    MOV EAX,dword ptr [EBX + 0x2598]    ; 004d2d43
    MOV dword ptr [EBX + 0x2578],EAX    ; 004d2d49
    PUSH 0x1                            ; 004d2d4f
        ;   Label: LAB_004d2d4f
    PUSH 0x2                            ; 004d2d51
    ADD EBX,0x2b4                       ; 004d2d53
    PUSH EBX                            ; 004d2d59
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d2d5a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004d2d5f
    ADD ESP,0xc                         ; 004d2d64
    POP ESI                             ; 004d2d67
    POP EDI                             ; 004d2d68
    ADD ESP,0x34                        ; 004d2d69
    POP EBX                             ; 004d2d6c
    RET                                 ; 004d2d6d
    XOR EAX,EAX                         ; 004d2d6e
        ;   Label: LAB_004d2d6e
    ADD ESP,0x34                        ; 004d2d70
    POP EBX                             ; 004d2d73
    RET                                 ; 004d2d74
    PUSH 0x1                            ; 004d2d75
        ;   Label: LAB_004d2d75
    PUSH 0x0                            ; 004d2d77
    ADD EBX,0x2b4                       ; 004d2d79
    PUSH EBX                            ; 004d2d7f
    MOV dword ptr [EBX + 0x24474],0x0   ; 004d2d80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004d2d8a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004d2d8f
    XOR EAX,EAX                         ; 004d2d92
    ADD ESP,0x34                        ; 004d2d94
    POP EBX                             ; 004d2d97
    RET                                 ; 004d2d98

