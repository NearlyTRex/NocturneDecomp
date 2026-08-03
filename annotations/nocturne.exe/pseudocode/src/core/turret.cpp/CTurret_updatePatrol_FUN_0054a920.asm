; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_updatePatrol_FUN_0054a920(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
;
; XREF[2]:
;   core_turret.cpp_CTurret_process_FUN_005497f0 at 00549aa3
;   core_turret.cpp_CTurret_updateTargeting_FUN_0054a110 at 0054a621
;
; Referenced Globals:
;   double DOUBLE_00596eb5 = 0.333333333333333
;   float FLOAT_00596ebd = 25
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a920
        ;   Label: core_turret.cpp_CTurret_updatePatrol_FUN_0054a920
    PUSH ESI                            ; 0054a921
    PUSH EDI                            ; 0054a922
    PUSH EBP                            ; 0054a923
    SUB ESP,0x44                        ; 0054a924
    MOV ESI,dword ptr [ESP + 0x58]      ; 0054a927
    FLD float ptr [ESI + 0x864]         ; 0054a92b
    FLDZ                                ; 0054a931
    FCOMPP                              ; 0054a933
    FNSTSW AX                           ; 0054a935
    SAHF                                ; 0054a937
    JNC 0x0054a963                      ; 0054a938
        ;   XREF to: 0054a963 (CONDITIONAL_JUMP)  ; LAB_0054a963
    FLD float ptr [ESI + 0x2f8]         ; 0054a93a
    FLDZ                                ; 0054a940
    FCOMPP                              ; 0054a942
    FNSTSW AX                           ; 0054a944
    SAHF                                ; 0054a946
    JNC 0x0054a951                      ; 0054a947
        ;   XREF to: 0054a951 (CONDITIONAL_JUMP)  ; LAB_0054a951
    ADD ESP,0x44                        ; 0054a949
        ;   Label: LAB_0054a949
    POP EBP                             ; 0054a94c
    POP EDI                             ; 0054a94d
    POP ESI                             ; 0054a94e
    POP EBX                             ; 0054a94f
    RET                                 ; 0054a950
    PUSH ESI                            ; 0054a951
        ;   Label: LAB_0054a951
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054a952
    CALL dword ptr [EAX + 0xdc]         ; 0054a958
    ADD ESP,0x4                         ; 0054a95e
    JMP 0x0054a949                      ; 0054a961
        ;   XREF to: 0054a949 (UNCONDITIONAL_JUMP)  ; LAB_0054a949
    CMP dword ptr [ESI + 0x778],0x0     ; 0054a963
        ;   Label: LAB_0054a963
    JZ 0x0054a949                       ; 0054a96a
        ;   XREF to: 0054a949 (CONDITIONAL_JUMP)  ; LAB_0054a949
    FLD float ptr [ESP + 0x5c]          ; 0054a96c
    FMUL double ptr [0x00596eb5]        ; 0054a970 | DOUBLE_00596eb5
    SUB ESP,0x4                         ; 0054a976
    LEA EBX,[ESI + 0x844]               ; 0054a979
    FSTP float ptr [ESP]                ; 0054a97f
    PUSH EBX                            ; 0054a982
    PUSH ESI                            ; 0054a983
    CALL core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640 ; 0054a984
        ;   XREF to: 0054a640 (UNCONDITIONAL_CALL)  ; int core_turret.cpp_CTurret_aimAtTarget_FUN_0054a640(CTurret * this_ptr, CVector3f * target_pos, float delta_time)
    ADD ESP,0xc                         ; 0054a989
    TEST EAX,EAX                        ; 0054a98c
    JZ 0x0054a949                       ; 0054a98e
        ;   XREF to: 0054a949 (CONDITIONAL_JUMP)  ; LAB_0054a949
    MOV EBP,ESP                         ; 0054a990
    MOV EAX,dword ptr [ESI + 0x778]     ; 0054a992
    PUSH EBP                            ; 0054a998
    MOV EDI,dword ptr [EAX + 0x14c]     ; 0054a999
    PUSH EAX                            ; 0054a99f
    CALL dword ptr [EDI + 0x14]         ; 0054a9a0
    ADD ESP,0x8                         ; 0054a9a3
    MOV EAX,dword ptr [EBX]             ; 0054a9a6
    MOV dword ptr [ESP + 0x18],EAX      ; 0054a9a8
    LEA EAX,[EBX + 0x4]                 ; 0054a9ac
    MOV EAX,dword ptr [EAX]             ; 0054a9af
    MOV dword ptr [ESP + 0x1c],EAX      ; 0054a9b1
    LEA EAX,[EBX + 0x8]                 ; 0054a9b5
    XOR EBP,EBP                         ; 0054a9b8
    MOV EAX,dword ptr [EAX]             ; 0054a9ba
    MOV EDI,EBX                         ; 0054a9bc
    MOV dword ptr [ESP + 0x20],EAX      ; 0054a9be
    PUSH 0x3f666666                     ; 0054a9c2
        ;   Label: LAB_0054a9c2
    PUSH 0x3dcccccd                     ; 0054a9c7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054a9cc
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x48],EAX      ; 0054a9d1
    FLD float ptr [ESP + 0x48]          ; 0054a9d5
    ADD ESP,0x8                         ; 0054a9d9
    FLD1                                ; 0054a9dc
    FXCH                                ; 0054a9de
    FSTP float ptr [ESP + 0x30]         ; 0054a9e0
    FSUB float ptr [ESP + 0x30]         ; 0054a9e4
    FMUL float ptr [ESP + 0xc]          ; 0054a9e8
    FLD float ptr [ESP]                 ; 0054a9ec
    FMUL float ptr [ESP + 0x30]         ; 0054a9ef
    PUSH 0x3f666666                     ; 0054a9f3
    FADDP                               ; 0054a9f8
    PUSH 0x3dcccccd                     ; 0054a9fa
    FSTP float ptr [ESI + 0x844]        ; 0054a9ff
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054aa05
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0x48],EAX      ; 0054aa0a
    FLD float ptr [ESP + 0x48]          ; 0054aa0e
    ADD ESP,0x8                         ; 0054aa12
    FLD1                                ; 0054aa15
    FXCH                                ; 0054aa17
    FSTP float ptr [ESP + 0x30]         ; 0054aa19
    FSUB float ptr [ESP + 0x30]         ; 0054aa1d
    FMUL float ptr [ESP + 0x14]         ; 0054aa21
    FLD float ptr [ESP + 0x8]           ; 0054aa25
    FMUL float ptr [ESP + 0x30]         ; 0054aa29
    FADDP                               ; 0054aa2d
    FSTP float ptr [ESI + 0x84c]        ; 0054aa2f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0054aa35
    PUSH EBX                            ; 0054aa39
    MOV dword ptr [ESI + 0x848],EAX     ; 0054aa3a
    LEA EAX,[ESP + 0x28]                ; 0054aa40
    PUSH EAX                            ; 0054aa44
    MOV ECX,dword ptr [ESI + 0x778]     ; 0054aa45
    PUSH ECX                            ; 0054aa4b
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 0054aa4c
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0054aa51
    CMP EBX,EAX                         ; 0054aa54
    JNZ 0x0054aa99                      ; 0054aa56
        ;   XREF to: 0054aa99 (CONDITIONAL_JUMP)  ; LAB_0054aa99
    FLD float ptr [EDI]                 ; 0054aa58
        ;   Label: LAB_0054aa58
    FSUB float ptr [ESP + 0x18]         ; 0054aa5a
    FMUL ST0                            ; 0054aa5e
    FLD float ptr [EDI + 0x4]           ; 0054aa60
    FSUB float ptr [ESP + 0x1c]         ; 0054aa63
    FMUL ST0                            ; 0054aa67
    FLD float ptr [EDI + 0x8]           ; 0054aa69
    FXCH                                ; 0054aa6c
    FADDP ST2,ST0                       ; 0054aa6e
    FSUB float ptr [ESP + 0x20]         ; 0054aa70
    FMUL ST0                            ; 0054aa74
    FADDP                               ; 0054aa76
    FCOMP float ptr [0x00596ebd]        ; 0054aa78 | FLOAT_00596ebd
    FNSTSW AX                           ; 0054aa7e
    SAHF                                ; 0054aa80
    JA 0x0054a949                       ; 0054aa81
        ;   XREF to: 0054a949 (CONDITIONAL_JUMP)  ; LAB_0054a949
    INC EBP                             ; 0054aa87
    CMP EBP,0x5                         ; 0054aa88
    JL 0x0054a9c2                       ; 0054aa8b
        ;   XREF to: 0054a9c2 (CONDITIONAL_JUMP)  ; LAB_0054a9c2
    ADD ESP,0x44                        ; 0054aa91
    POP EBP                             ; 0054aa94
    POP EDI                             ; 0054aa95
    POP ESI                             ; 0054aa96
    POP EBX                             ; 0054aa97
    RET                                 ; 0054aa98
    MOV EDX,dword ptr [EAX]             ; 0054aa99
        ;   Label: LAB_0054aa99
    MOV dword ptr [EBX],EDX             ; 0054aa9b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054aa9d
    MOV dword ptr [EBX + 0x4],EDX       ; 0054aaa0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054aaa3
    MOV dword ptr [EBX + 0x8],EDX       ; 0054aaa6
    JMP 0x0054aa58                      ; 0054aaa9
        ;   XREF to: 0054aa58 (UNCONDITIONAL_JUMP)  ; LAB_0054aa58

