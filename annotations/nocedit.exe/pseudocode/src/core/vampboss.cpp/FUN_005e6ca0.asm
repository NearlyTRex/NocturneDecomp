; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_vampboss.cpp_FUN_005e6ca0()
;
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined8       Stack[-0x80]:8  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
;
; XREF[1]:
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e59c2
;
; Referenced Globals:
;   TerminatedCString s_wing_wav_f_00656bcb
;   TerminatedCString s_wing_wav_1_5_1_2_00656bd9
;   double DOUBLE_00656bf3 = 2.5
;
; Called Functions:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e6ca0
        ;   Label: core_vampboss.cpp_FUN_005e6ca0
    PUSH ESI                            ; 005e6ca1
    PUSH EBP                            ; 005e6ca2
    MOV EBP,ESP                         ; 005e6ca3
    SUB ESP,0x70                        ; 005e6ca5
    AND ESP,0xfffffff8                  ; 005e6ca8
    FLDZ                                ; 005e6cab
    MOV EBX,dword ptr [EBP + 0x10]      ; 005e6cad
    FCOMP float ptr [EBP + 0x14]        ; 005e6cb0
    FNSTSW AX                           ; 005e6cb3
    SAHF                                ; 005e6cb5
    JNC 0x005e6d74                      ; 005e6cb6
        ;   XREF to: 005e6d74 (CONDITIONAL_JUMP)  ; LAB_005e6d74
    LEA ESI,[EBX + 0xbebc]              ; 005e6cbc
    LEA EAX,[EBP + 0x14]                ; 005e6cc2
        ;   Label: LAB_005e6cc2
    PUSH EAX                            ; 005e6cc5
    PUSH ESI                            ; 005e6cc6
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005e6cc7
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005e6ccc
    CMP EAX,0x66                        ; 005e6ccf
    JNC 0x005e6d81                      ; 005e6cd2
        ;   XREF to: 005e6d81 (CONDITIONAL_JUMP)  ; LAB_005e6d81
    CMP EAX,0x65                        ; 005e6cd8
    JNZ 0x005e6d66                      ; 005e6cdb
        ;   XREF to: 005e6d66 (CONDITIONAL_JUMP)  ; LAB_005e6d66
    XOR EDX,EDX                         ; 005e6ce1
    MOV ECX,dword ptr [EBX + 0xcdcc0]   ; 005e6ce3
    MOV dword ptr [ESP + 0x8],EDX       ; 005e6ce9
    CMP ECX,0x1                         ; 005e6ced
    JNZ 0x005e6cfc                      ; 005e6cf0
        ;   XREF to: 005e6cfc (CONDITIONAL_JUMP)  ; LAB_005e6cfc
    MOV EAX,dword ptr [EBX + 0xce8f0]   ; 005e6cf2
    MOV dword ptr [ESP + 0x8],EAX       ; 005e6cf8
    CMP dword ptr [EBX + 0xcdcc0],0x2   ; 005e6cfc
        ;   Label: LAB_005e6cfc
    JNZ 0x005e6d0d                      ; 005e6d03
        ;   XREF to: 005e6d0d (CONDITIONAL_JUMP)  ; LAB_005e6d0d
    MOV dword ptr [ESP + 0x8],0x3f800000 ; 005e6d05
    CMP dword ptr [EBX + 0xcdcc0],0x3   ; 005e6d0d
        ;   Label: LAB_005e6d0d
    JNZ 0x005e6d20                      ; 005e6d14
        ;   XREF to: 005e6d20 (CONDITIONAL_JUMP)  ; LAB_005e6d20
    MOV EAX,dword ptr [EBX + 0xce8f0]   ; 005e6d16
    MOV dword ptr [ESP + 0x8],EAX       ; 005e6d1c
    FLD float ptr [ESP + 0x8]           ; 005e6d20
        ;   Label: LAB_005e6d20
    FLDZ                                ; 005e6d24
    FXCH                                ; 005e6d26
    FSTP double ptr [ESP]               ; 005e6d28
    FCOMP double ptr [ESP]              ; 005e6d2b
    FNSTSW AX                           ; 005e6d2e
    SAHF                                ; 005e6d30
    JNC 0x005e6d66                      ; 005e6d31
        ;   XREF to: 005e6d66 (CONDITIONAL_JUMP)  ; LAB_005e6d66
    FLD double ptr [ESP]                ; 005e6d33
    FMUL double ptr [0x00656bf3]        ; 005e6d36 | DOUBLE_00656bf3
    SUB ESP,0x8                         ; 005e6d3c
    FSTP double ptr [ESP]               ; 005e6d3f
    PUSH 0x656bcb                       ; 005e6d42 | = "wing?.wav @%f"
    LEA EAX,[ESP + 0x18]                ; 005e6d47
    PUSH EAX                            ; 005e6d4b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 005e6d4c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005e6d51
    LEA EDX,[ESP + 0xc]                 ; 005e6d54
    PUSH EDX                            ; 005e6d58
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e6d59
        ;   Label: LAB_005e6d59
    PUSH EBX                            ; 005e6d5f
    CALL dword ptr [EAX + 0x24]         ; 005e6d60
    ADD ESP,0x8                         ; 005e6d63
    FLDZ                                ; 005e6d66
        ;   Label: LAB_005e6d66
    FCOMP float ptr [EBP + 0x14]        ; 005e6d68
    FNSTSW AX                           ; 005e6d6b
    SAHF                                ; 005e6d6d
    JC 0x005e6cc2                       ; 005e6d6e
        ;   XREF to: 005e6cc2 (CONDITIONAL_JUMP)  ; LAB_005e6cc2
    MOV ESP,EBP                         ; 005e6d74
        ;   Label: LAB_005e6d74
    POP EBP                             ; 005e6d76
    POP ESI                             ; 005e6d77
    POP EBX                             ; 005e6d78
    RET                                 ; 005e6d79
    PUSH 0x656bd9                       ; 005e6d7a | = "wing?.wav @1.5 *1.2"
        ;   Label: LAB_005e6d7a
    JMP 0x005e6d59                      ; 005e6d7f
        ;   XREF to: 005e6d59 (UNCONDITIONAL_JUMP)  ; LAB_005e6d59
    JBE 0x005e6d7a                      ; 005e6d81
        ;   XREF to: 005e6d7a (CONDITIONAL_JUMP)  ; LAB_005e6d7a
        ;   Label: LAB_005e6d81
    CMP EAX,0x67                        ; 005e6d83
    JZ 0x005e6d7a                       ; 005e6d86
        ;   XREF to: 005e6d7a (CONDITIONAL_JUMP)  ; LAB_005e6d7a
    FLDZ                                ; 005e6d88
    FCOMP float ptr [EBP + 0x14]        ; 005e6d8a
    FNSTSW AX                           ; 005e6d8d
    SAHF                                ; 005e6d8f
    JC 0x005e6cc2                       ; 005e6d90
        ;   XREF to: 005e6cc2 (CONDITIONAL_JUMP)  ; LAB_005e6cc2
    MOV ESP,EBP                         ; 005e6d96
    POP EBP                             ; 005e6d98
    POP ESI                             ; 005e6d99
    POP EBX                             ; 005e6d9a
    RET                                 ; 005e6d9b

