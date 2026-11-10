; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_hostage_cpp_CHostage_processGrabberFlee_FUN_004eee80(CHostage *this_ptr,float delta_time)
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
;   core_hostage.cpp_CHostage_process_FUN_004ed890 at 004ee2fd
;
; Referenced Globals:
;   undefined4 DAT_005e4f07
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eee80
        ;   Label: core_hostage.cpp_CHostage_processGrabberFlee_FUN_004eee80
    SUB ESP,0x34                        ; 004eee81
    MOV EBX,dword ptr [ESP + 0x3c]      ; 004eee84
    CMP dword ptr [EBX + 0x1fe98],0x0   ; 004eee88
    JZ 0x004eef9e                       ; 004eee8f
        ;   XREF to: 004eef9e (CONDITIONAL_JUMP)  ; LAB_004eef9e
    FLD float ptr [EBX + 0x1fe9c]       ; 004eee95
    FSUB float ptr [ESP + 0x40]         ; 004eee9b
    FST float ptr [EBX + 0x1fe9c]       ; 004eee9f
    FLDZ                                ; 004eeea5
    FCOMPP                              ; 004eeea7
    FNSTSW AX                           ; 004eeea9
    SAHF                                ; 004eeeab
    JNC 0x004eefa5                      ; 004eeeac
        ;   XREF to: 004eefa5 (CONDITIONAL_JUMP)  ; LAB_004eefa5
    FLD float ptr [EBX + 0x2fe0]        ; 004eeeb2
    FCOMP double ptr [0x005e4f07]       ; 004eeeb8 | DAT_005e4f07
    FNSTSW AX                           ; 004eeebe
    SAHF                                ; 004eeec0
    JA 0x004eefa5                       ; 004eeec1
        ;   XREF to: 004eefa5 (CONDITIONAL_JUMP)  ; LAB_004eefa5
    PUSH EDI                            ; 004eeec7
    PUSH ESI                            ; 004eeec8
    LEA EDI,[ESP + 0x20]                ; 004eeec9
    LEA EDX,[EBX + 0x20]                ; 004eeecd
    LEA ESI,[ESP + 0x14]                ; 004eeed0
    MOV EAX,dword ptr [EBX + 0x1fe98]   ; 004eeed4
    FLD float ptr [EDX]                 ; 004eeeda
    FLD float ptr [EDX + 0x4]           ; 004eeedc
    FLD float ptr [EDX + 0x8]           ; 004eeedf
    FXCH ST2                            ; 004eeee2
    FSUB float ptr [EAX + 0x20]         ; 004eeee4
    FXCH                                ; 004eeee7
    FSUB float ptr [EAX + 0x24]         ; 004eeee9
    FXCH ST2                            ; 004eeeec
    FSUB float ptr [EAX + 0x28]         ; 004eeeee
    FXCH                                ; 004eeef1
    FSTP float ptr [ESP + 0x14]         ; 004eeef3
    FXCH                                ; 004eeef7
    FSTP float ptr [ESP + 0x18]         ; 004eeef9
    FSTP float ptr [ESP + 0x1c]         ; 004eeefd
    LEA EAX,[ESP + 0x20]                ; 004eef01
    MOVSD ES:EDI,ESI                    ; 004eef05
    MOVSD ES:EDI,ESI                    ; 004eef06
    MOVSD ES:EDI,ESI                    ; 004eef07
    PUSH EAX                            ; 004eef08
    LEA ESI,[ESP + 0x30]                ; 004eef09
    LEA EDI,[ESP + 0xc]                 ; 004eef0d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004eef11
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x30]                ; 004eef16
    ADD ESP,0x4                         ; 004eef1a
    MOVSD ES:EDI,ESI                    ; 004eef1d
    MOVSD ES:EDI,ESI                    ; 004eef1e
    MOVSD ES:EDI,ESI                    ; 004eef1f
    FLD float ptr [ESP + 0xc]           ; 004eef20
    FSUB float ptr [EBX + 0x34]         ; 004eef24
    SUB ESP,0x4                         ; 004eef27
    FSTP float ptr [ESP]                ; 004eef2a
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004eef2d
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    FLD float ptr [EBX + 0x2528]        ; 004eef32
    MOV dword ptr [ESP + 0x3c],EAX      ; 004eef38
    FCHS                                ; 004eef3c
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004eef3e
    MOV dword ptr [EBX + 0x2508],EAX    ; 004eef42
    ADD ESP,0x4                         ; 004eef48
    FCOMP float ptr [EBX + 0x2508]      ; 004eef4b
    FNSTSW AX                           ; 004eef51
    SAHF                                ; 004eef53
    JBE 0x004eef62                      ; 004eef54
        ;   XREF to: 004eef62 (CONDITIONAL_JUMP)  ; LAB_004eef62
    MOV EAX,dword ptr [EBX + 0x2528]    ; 004eef56
    MOV dword ptr [EBX + 0x2508],EAX    ; 004eef5c
    FLD float ptr [EBX + 0x2508]        ; 004eef62
        ;   Label: LAB_004eef62
    FCOMP float ptr [EBX + 0x2528]      ; 004eef68
    FNSTSW AX                           ; 004eef6e
    SAHF                                ; 004eef70
    JBE 0x004eef7f                      ; 004eef71
        ;   XREF to: 004eef7f (CONDITIONAL_JUMP)  ; LAB_004eef7f
    MOV EAX,dword ptr [EBX + 0x2528]    ; 004eef73
    MOV dword ptr [EBX + 0x2508],EAX    ; 004eef79
    PUSH 0x1                            ; 004eef7f
        ;   Label: LAB_004eef7f
    PUSH 0x2                            ; 004eef81
    ADD EBX,0x158                       ; 004eef83
    PUSH EBX                            ; 004eef89
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004eef8a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 004eef8f
    ADD ESP,0xc                         ; 004eef94
    POP ESI                             ; 004eef97
    POP EDI                             ; 004eef98
    ADD ESP,0x34                        ; 004eef99
    POP EBX                             ; 004eef9c
    RET                                 ; 004eef9d
    XOR EAX,EAX                         ; 004eef9e
        ;   Label: LAB_004eef9e
    ADD ESP,0x34                        ; 004eefa0
    POP EBX                             ; 004eefa3
    RET                                 ; 004eefa4
    PUSH 0x1                            ; 004eefa5
        ;   Label: LAB_004eefa5
    PUSH 0x0                            ; 004eefa7
    ADD EBX,0x158                       ; 004eefa9
    PUSH EBX                            ; 004eefaf
    MOV dword ptr [EBX + 0x1fd40],0x0   ; 004eefb0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004eefba
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004eefbf
    XOR EAX,EAX                         ; 004eefc2
    ADD ESP,0x34                        ; 004eefc4
    POP EBX                             ; 004eefc7
    RET                                 ; 004eefc8

