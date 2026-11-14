; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_00582dc0(CVampireBoss *this_ptr,float delta_time)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined        Stack[-0x74]:1  local_74
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_00581910 at 00581962
;
; Referenced Globals:
;   TerminatedCString s_wing_wav_f_005eda9c
;   TerminatedCString s_wing_wav_1_5_1_2_005edaaa
;   undefined4 DAT_005edac4
;
; Called Functions:
;   core_motion.cpp_CMotionController_advance_FUN_005030c0
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582dc0
        ;   Label: core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_00582dc0
    PUSH ESI                            ; 00582dc1
    PUSH EBP                            ; 00582dc2
    MOV EBP,ESP                         ; 00582dc3
    SUB ESP,0x70                        ; 00582dc5
    AND ESP,0xfffffff8                  ; 00582dc8
    FLDZ                                ; 00582dcb
    MOV EBX,dword ptr [EBP + 0x10]      ; 00582dcd
    FCOMP float ptr [EBP + 0x14]        ; 00582dd0
    FNSTSW AX                           ; 00582dd3
    SAHF                                ; 00582dd5
    JNC 0x00582e94                      ; 00582dd6
        ;   XREF to: 00582e94 (CONDITIONAL_JUMP)  ; LAB_00582e94
    LEA ESI,[EBX + 0x10af8]             ; 00582ddc
    LEA EAX,[EBP + 0x14]                ; 00582de2
        ;   Label: LAB_00582de2
    PUSH EAX                            ; 00582de5
    PUSH ESI                            ; 00582de6
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00582de7
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00582dec
    CMP EAX,0x66                        ; 00582def
    JNC 0x00582ea1                      ; 00582df2
        ;   XREF to: 00582ea1 (CONDITIONAL_JUMP)  ; LAB_00582ea1
    CMP EAX,0x65                        ; 00582df8
    JNZ 0x00582e86                      ; 00582dfb
        ;   XREF to: 00582e86 (CONDITIONAL_JUMP)  ; LAB_00582e86
    XOR EDX,EDX                         ; 00582e01
    MOV ECX,dword ptr [EBX + 0xc2f3c]   ; 00582e03
    MOV dword ptr [ESP + 0x8],EDX       ; 00582e09
    CMP ECX,0x1                         ; 00582e0d
    JNZ 0x00582e1c                      ; 00582e10
        ;   XREF to: 00582e1c (CONDITIONAL_JUMP)  ; LAB_00582e1c
    MOV EAX,dword ptr [EBX + 0xc3b6c]   ; 00582e12
    MOV dword ptr [ESP + 0x8],EAX       ; 00582e18
    CMP dword ptr [EBX + 0xc2f3c],0x2   ; 00582e1c
        ;   Label: LAB_00582e1c
    JNZ 0x00582e2d                      ; 00582e23
        ;   XREF to: 00582e2d (CONDITIONAL_JUMP)  ; LAB_00582e2d
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 00582e25
    CMP dword ptr [EBX + 0xc2f3c],0x3   ; 00582e2d
        ;   Label: LAB_00582e2d
    JNZ 0x00582e40                      ; 00582e34
        ;   XREF to: 00582e40 (CONDITIONAL_JUMP)  ; LAB_00582e40
    MOV EAX,dword ptr [EBX + 0xc3b6c]   ; 00582e36
    MOV dword ptr [ESP + 0x8],EAX       ; 00582e3c
    FLD float ptr [ESP + 0x8]           ; 00582e40
        ;   Label: LAB_00582e40
    FLDZ                                ; 00582e44
    FXCH                                ; 00582e46
    FSTP double ptr [ESP]               ; 00582e48
    FCOMP double ptr [ESP]              ; 00582e4b
    FNSTSW AX                           ; 00582e4e
    SAHF                                ; 00582e50
    JNC 0x00582e86                      ; 00582e51
        ;   XREF to: 00582e86 (CONDITIONAL_JUMP)  ; LAB_00582e86
    FLD double ptr [ESP]                ; 00582e53
    FMUL double ptr [0x005edac4]        ; 00582e56 | DAT_005edac4
    SUB ESP,0x8                         ; 00582e5c
    FSTP double ptr [ESP]               ; 00582e5f
    PUSH 0x5eda9c                       ; 00582e62 | = "wing?.wav @%f"
    LEA EAX,[ESP + 0x18]                ; 00582e67
    PUSH EAX                            ; 00582e6b
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00582e6c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 00582e71
    LEA EDX,[ESP + 0xc]                 ; 00582e74
    PUSH EDX                            ; 00582e78
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00582e79
        ;   Label: LAB_00582e79
    PUSH EBX                            ; 00582e7f
    CALL dword ptr [EAX + 0x34]         ; 00582e80
    ADD ESP,0x8                         ; 00582e83
    FLDZ                                ; 00582e86
        ;   Label: LAB_00582e86
    FCOMP float ptr [EBP + 0x14]        ; 00582e88
    FNSTSW AX                           ; 00582e8b
    SAHF                                ; 00582e8d
    JC 0x00582de2                       ; 00582e8e
        ;   XREF to: 00582de2 (CONDITIONAL_JUMP)  ; LAB_00582de2
    MOV ESP,EBP                         ; 00582e94
        ;   Label: LAB_00582e94
    POP EBP                             ; 00582e96
    POP ESI                             ; 00582e97
    POP EBX                             ; 00582e98
    RET                                 ; 00582e99
    PUSH 0x5edaaa                       ; 00582e9a | = "wing?.wav @1.5 *1.2"
        ;   Label: LAB_00582e9a
    JMP 0x00582e79                      ; 00582e9f
        ;   XREF to: 00582e79 (UNCONDITIONAL_JUMP)  ; LAB_00582e79
    JBE 0x00582e9a                      ; 00582ea1
        ;   XREF to: 00582e9a (CONDITIONAL_JUMP)  ; LAB_00582e9a
        ;   Label: LAB_00582ea1
    CMP EAX,0x67                        ; 00582ea3
    JZ 0x00582e9a                       ; 00582ea6
        ;   XREF to: 00582e9a (CONDITIONAL_JUMP)  ; LAB_00582e9a
    FLDZ                                ; 00582ea8
    FCOMP float ptr [EBP + 0x14]        ; 00582eaa
    FNSTSW AX                           ; 00582ead
    SAHF                                ; 00582eaf
    JC 0x00582de2                       ; 00582eb0
        ;   XREF to: 00582de2 (CONDITIONAL_JUMP)  ; LAB_00582de2
    MOV ESP,EBP                         ; 00582eb6
    POP EBP                             ; 00582eb8
    POP ESI                             ; 00582eb9
    POP EBX                             ; 00582eba
    RET                                 ; 00582ebb

