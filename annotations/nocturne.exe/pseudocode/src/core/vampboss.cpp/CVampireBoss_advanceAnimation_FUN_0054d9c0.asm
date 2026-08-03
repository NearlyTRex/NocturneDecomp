; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_vampboss_cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0(CVampireBoss *this_ptr,float delta_time)
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
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054c6e2
;
; Referenced Globals:
;   TerminatedCString s_wing_wav_f_00597135
;   TerminatedCString s_wing_wav_1_5_1_2_00597143
;   double DOUBLE_0059715d = 2.5
;
; Called Functions:
;   core_motion.cpp_CMotionController_advance_FUN_004e11c0
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d9c0
        ;   Label: core_vampboss.cpp_CVampireBoss_advanceAnimation_FUN_0054d9c0
    PUSH ESI                            ; 0054d9c1
    PUSH EBP                            ; 0054d9c2
    MOV EBP,ESP                         ; 0054d9c3
    SUB ESP,0x70                        ; 0054d9c5
    AND ESP,0xfffffff8                  ; 0054d9c8
    FLDZ                                ; 0054d9cb
    MOV EBX,dword ptr [EBP + 0x10]      ; 0054d9cd
    FCOMP float ptr [EBP + 0x14]        ; 0054d9d0
    FNSTSW AX                           ; 0054d9d3
    SAHF                                ; 0054d9d5
    JNC 0x0054da94                      ; 0054d9d6
        ;   XREF to: 0054da94 (CONDITIONAL_JUMP)  ; LAB_0054da94
    LEA ESI,[EBX + 0xbd24]              ; 0054d9dc
    LEA EAX,[EBP + 0x14]                ; 0054d9e2
        ;   Label: LAB_0054d9e2
    PUSH EAX                            ; 0054d9e5
    PUSH ESI                            ; 0054d9e6
    CALL core_motion.cpp_CMotionController_advance_FUN_004e11c0 ; 0054d9e7
        ;   XREF to: 004e11c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004e11c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0054d9ec
    CMP EAX,0x66                        ; 0054d9ef
    JNC 0x0054daa1                      ; 0054d9f2
        ;   XREF to: 0054daa1 (CONDITIONAL_JUMP)  ; LAB_0054daa1
    CMP EAX,0x65                        ; 0054d9f8
    JNZ 0x0054da86                      ; 0054d9fb
        ;   XREF to: 0054da86 (CONDITIONAL_JUMP)  ; LAB_0054da86
    XOR EDX,EDX                         ; 0054da01
    MOV ECX,dword ptr [EBX + 0xbe168]   ; 0054da03
    MOV dword ptr [ESP + 0x8],EDX       ; 0054da09
    CMP ECX,0x1                         ; 0054da0d
    JNZ 0x0054da1c                      ; 0054da10
        ;   XREF to: 0054da1c (CONDITIONAL_JUMP)  ; LAB_0054da1c
    MOV EAX,dword ptr [EBX + 0xbed98]   ; 0054da12
    MOV dword ptr [ESP + 0x8],EAX       ; 0054da18
    CMP dword ptr [EBX + 0xbe168],0x2   ; 0054da1c
        ;   Label: LAB_0054da1c
    JNZ 0x0054da2d                      ; 0054da23
        ;   XREF to: 0054da2d (CONDITIONAL_JUMP)  ; LAB_0054da2d
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 0054da25
    CMP dword ptr [EBX + 0xbe168],0x3   ; 0054da2d
        ;   Label: LAB_0054da2d
    JNZ 0x0054da40                      ; 0054da34
        ;   XREF to: 0054da40 (CONDITIONAL_JUMP)  ; LAB_0054da40
    MOV EAX,dword ptr [EBX + 0xbed98]   ; 0054da36
    MOV dword ptr [ESP + 0x8],EAX       ; 0054da3c
    FLD float ptr [ESP + 0x8]           ; 0054da40
        ;   Label: LAB_0054da40
    FLDZ                                ; 0054da44
    FXCH                                ; 0054da46
    FSTP double ptr [ESP]               ; 0054da48
    FCOMP double ptr [ESP]              ; 0054da4b
    FNSTSW AX                           ; 0054da4e
    SAHF                                ; 0054da50
    JNC 0x0054da86                      ; 0054da51
        ;   XREF to: 0054da86 (CONDITIONAL_JUMP)  ; LAB_0054da86
    FLD double ptr [ESP]                ; 0054da53
    FMUL double ptr [0x0059715d]        ; 0054da56 | DOUBLE_0059715d
    SUB ESP,0x8                         ; 0054da5c
    FSTP double ptr [ESP]               ; 0054da5f
    PUSH 0x597135                       ; 0054da62 | = "wing?.wav @%f"
    LEA EAX,[ESP + 0x18]                ; 0054da67
    PUSH EAX                            ; 0054da6b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0054da6c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0x10                        ; 0054da71
    LEA EDX,[ESP + 0xc]                 ; 0054da74
    PUSH EDX                            ; 0054da78
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054da79
        ;   Label: LAB_0054da79
    PUSH EBX                            ; 0054da7f
    CALL dword ptr [EAX + 0x24]         ; 0054da80
    ADD ESP,0x8                         ; 0054da83
    FLDZ                                ; 0054da86
        ;   Label: LAB_0054da86
    FCOMP float ptr [EBP + 0x14]        ; 0054da88
    FNSTSW AX                           ; 0054da8b
    SAHF                                ; 0054da8d
    JC 0x0054d9e2                       ; 0054da8e
        ;   XREF to: 0054d9e2 (CONDITIONAL_JUMP)  ; LAB_0054d9e2
    MOV ESP,EBP                         ; 0054da94
        ;   Label: LAB_0054da94
    POP EBP                             ; 0054da96
    POP ESI                             ; 0054da97
    POP EBX                             ; 0054da98
    RET                                 ; 0054da99
    PUSH 0x597143                       ; 0054da9a | = "wing?.wav @1.5 *1.2"
        ;   Label: LAB_0054da9a
    JMP 0x0054da79                      ; 0054da9f
        ;   XREF to: 0054da79 (UNCONDITIONAL_JUMP)  ; LAB_0054da79
    JBE 0x0054da9a                      ; 0054daa1
        ;   XREF to: 0054da9a (CONDITIONAL_JUMP)  ; LAB_0054da9a
        ;   Label: LAB_0054daa1
    CMP EAX,0x67                        ; 0054daa3
    JZ 0x0054da9a                       ; 0054daa6
        ;   XREF to: 0054da9a (CONDITIONAL_JUMP)  ; LAB_0054da9a
    FLDZ                                ; 0054daa8
    FCOMP float ptr [EBP + 0x14]        ; 0054daaa
    FNSTSW AX                           ; 0054daad
    SAHF                                ; 0054daaf
    JC 0x0054d9e2                       ; 0054dab0
        ;   XREF to: 0054d9e2 (CONDITIONAL_JUMP)  ; LAB_0054d9e2
    MOV ESP,EBP                         ; 0054dab6
    POP EBP                             ; 0054dab8
    POP ESI                             ; 0054dab9
    POP EBX                             ; 0054daba
    RET                                 ; 0054dabb

