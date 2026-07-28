; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004b81a0(CHostage *this_ptr,float delta_time)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined        Stack[-0x14]:1  local_14
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   core_hostage.cpp_FUN_004b6d80 at 004b7697
;
; Referenced Globals:
;   double DOUBLE_00585caa = 1.5
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b81a0
        ;   Label: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004b81a0
    SUB ESP,0x1c                        ; 004b81a1
    MOV EBX,dword ptr [ESP + 0x24]      ; 004b81a4
    CMP dword ptr [EBX + 0x1f950],0x0   ; 004b81a8
    JZ 0x004b8297                       ; 004b81af
        ;   XREF to: 004b8297 (CONDITIONAL_JUMP)  ; LAB_004b8297
    FLD float ptr [EBX + 0x1f954]       ; 004b81b5
    FSUB float ptr [ESP + 0x28]         ; 004b81bb
    FST float ptr [EBX + 0x1f954]       ; 004b81bf
    FLDZ                                ; 004b81c5
    FCOMPP                              ; 004b81c7
    FNSTSW AX                           ; 004b81c9
    SAHF                                ; 004b81cb
    JNC 0x004b829e                      ; 004b81cc
        ;   XREF to: 004b829e (CONDITIONAL_JUMP)  ; LAB_004b829e
    FLD float ptr [EBX + 0x2dcc]        ; 004b81d2
    FCOMP double ptr [0x00585caa]       ; 004b81d8 | DOUBLE_00585caa
    FNSTSW AX                           ; 004b81de
    SAHF                                ; 004b81e0
    JA 0x004b829e                       ; 004b81e1
        ;   XREF to: 004b829e (CONDITIONAL_JUMP)  ; LAB_004b829e
    LEA EDX,[EBX + 0x20]                ; 004b81e7
    MOV EAX,dword ptr [EBX + 0x1f950]   ; 004b81ea
    FLD float ptr [EDX]                 ; 004b81f0
    FSUB float ptr [EAX + 0x20]         ; 004b81f2
    FSTP float ptr [ESP]                ; 004b81f5
    FLD float ptr [EDX + 0x4]           ; 004b81f8
    FSUB float ptr [EAX + 0x24]         ; 004b81fb
    FSTP float ptr [ESP + 0x4]          ; 004b81fe
    FLD float ptr [EDX + 0x8]           ; 004b8202
    FSUB float ptr [EAX + 0x28]         ; 004b8205
    MOV EAX,ESP                         ; 004b8208
    PUSH EAX                            ; 004b820a
    LEA EAX,[ESP + 0x10]                ; 004b820b
    PUSH EAX                            ; 004b820f
    FSTP float ptr [ESP + 0x10]         ; 004b8210
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b8214
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004b8219
    ADD ESP,0x8                         ; 004b821c
    FSUB float ptr [EBX + 0x34]         ; 004b821f
    SUB ESP,0x4                         ; 004b8222
    FSTP float ptr [ESP]                ; 004b8225
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b8228
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    FLD float ptr [EBX + 0x2430]        ; 004b822d
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b8233
    FCHS                                ; 004b8237
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b8239
    MOV dword ptr [EBX + 0x2410],EAX    ; 004b823d
    ADD ESP,0x4                         ; 004b8243
    FCOMP float ptr [EBX + 0x2410]      ; 004b8246
    FNSTSW AX                           ; 004b824c
    SAHF                                ; 004b824e
    JBE 0x004b825d                      ; 004b824f
        ;   XREF to: 004b825d (CONDITIONAL_JUMP)  ; LAB_004b825d
    MOV EAX,dword ptr [EBX + 0x2430]    ; 004b8251
    MOV dword ptr [EBX + 0x2410],EAX    ; 004b8257
    FLD float ptr [EBX + 0x2410]        ; 004b825d
        ;   Label: LAB_004b825d
    FCOMP float ptr [EBX + 0x2430]      ; 004b8263
    FNSTSW AX                           ; 004b8269
    SAHF                                ; 004b826b
    JBE 0x004b827a                      ; 004b826c
        ;   XREF to: 004b827a (CONDITIONAL_JUMP)  ; LAB_004b827a
    MOV EAX,dword ptr [EBX + 0x2430]    ; 004b826e
    MOV dword ptr [EBX + 0x2410],EAX    ; 004b8274
    PUSH 0x1                            ; 004b827a
        ;   Label: LAB_004b827a
    PUSH 0x2                            ; 004b827c
    ADD EBX,0x150                       ; 004b827e
    PUSH EBX                            ; 004b8284
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b8285
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004b828a
    ADD ESP,0xc                         ; 004b828f
    ADD ESP,0x1c                        ; 004b8292
    POP EBX                             ; 004b8295
    RET                                 ; 004b8296
    XOR EAX,EAX                         ; 004b8297
        ;   Label: LAB_004b8297
    ADD ESP,0x1c                        ; 004b8299
    POP EBX                             ; 004b829c
    RET                                 ; 004b829d
    PUSH 0x1                            ; 004b829e
        ;   Label: LAB_004b829e
    PUSH 0x0                            ; 004b82a0
    ADD EBX,0x150                       ; 004b82a2
    PUSH EBX                            ; 004b82a8
    MOV dword ptr [EBX + 0x1f800],0x0   ; 004b82a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b82b3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004b82b8
    XOR EAX,EAX                         ; 004b82bb
    ADD ESP,0x1c                        ; 004b82bd
    POP EBX                             ; 004b82c0
    RET                                 ; 004b82c1

