; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out_euler_angles
; CVector3f *      Stack[0x8]:4   in_direction_vector
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[74]:
;   core_baron.cpp_FUN_004136b0 at 00413705
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 004158a6
;   core_batman.cpp_CBatman_process_FUN_00416870 at 0041706a
;   core_bugs.cpp_FUN_00426420 at 004265b9
;   core_charactr.cpp_CCharacter_FUN_00428d80 at 00428da1
;   core_charactr.cpp_CCharacter_FUN_0042b9e0 at 0042bb25
;   core_charactr.cpp_CCharacter_FUN_0042c5f0 at 0042c73f
;   core_charactr.cpp_CCharacter_FUN_0042ca70 at 0042cbc8
;   core_charactr.cpp_CCharacter_FUN_0042ede0 at 0042ee91
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d7df
;   ... and 64 more
;
; Called Functions:
;   crt_math.c_atan2_FUN_006013b1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7830
        ;   Label: core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
    PUSH EDI                            ; 005e7831
    PUSH EBP                            ; 005e7832
    MOV EBP,ESP                         ; 005e7833
    SUB ESP,0x8                         ; 005e7835
    AND ESP,0xfffffff8                  ; 005e7838
    MOV ECX,dword ptr [EBP + 0x10]      ; 005e783b
    MOV EDX,dword ptr [EBP + 0x14]      ; 005e783e
    MOV dword ptr [ECX + 0x8],0x0       ; 005e7841
    TEST dword ptr [EDX],0x7fffffff     ; 005e7848
    JNZ 0x005e789b                      ; 005e784e
        ;   XREF to: 005e789b (CONDITIONAL_JUMP)  ; LAB_005e789b
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 005e7850
    JNZ 0x005e789b                      ; 005e7857
        ;   XREF to: 005e789b (CONDITIONAL_JUMP)  ; LAB_005e789b
    MOV dword ptr [ECX + 0x4],0x0       ; 005e7859
    FLDZ                                ; 005e7860
    FCOMP float ptr [EDX + 0x4]         ; 005e7862
    FNSTSW AX                           ; 005e7865
    SAHF                                ; 005e7867
    JC 0x005e7888                       ; 005e7868
        ;   XREF to: 005e7888 (CONDITIONAL_JUMP)  ; LAB_005e7888
    MOV EDI,0x54411744                  ; 005e786a
    MOV EAX,0x3ff921fb                  ; 005e786f
    MOV dword ptr [ESP],EDI             ; 005e7874
    MOV dword ptr [ESP + 0x4],EAX       ; 005e7877
    FLD double ptr [ESP]                ; 005e787b
        ;   Label: LAB_005e787b
    FSTP float ptr [ECX]                ; 005e787e
    MOV EAX,ECX                         ; 005e7880
    MOV ESP,EBP                         ; 005e7882
    POP EBP                             ; 005e7884
    POP EDI                             ; 005e7885
    POP EBX                             ; 005e7886
    RET                                 ; 005e7887
    MOV EDX,0x54411744                  ; 005e7888
        ;   Label: LAB_005e7888
    MOV EBX,0xbff921fb                  ; 005e788d
    MOV dword ptr [ESP],EDX             ; 005e7892
    MOV dword ptr [ESP + 0x4],EBX       ; 005e7895
    JMP 0x005e787b                      ; 005e7899
        ;   XREF to: 005e787b (UNCONDITIONAL_JUMP)  ; LAB_005e787b
    FLD float ptr [EDX + 0x8]           ; 005e789b
        ;   Label: LAB_005e789b
    FLD float ptr [EDX]                 ; 005e789e
    CALL crt_math.c_atan2_FUN_006013b1  ; 005e78a0
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FSTP float ptr [ECX + 0x4]          ; 005e78a5
    FLD float ptr [EDX + 0x8]           ; 005e78a8
    FMUL ST0                            ; 005e78ab
    FLD float ptr [EDX]                 ; 005e78ad
    FMUL ST0                            ; 005e78af
    FADDP                               ; 005e78b1
    FSQRT                               ; 005e78b3
    FLD float ptr [EDX + 0x4]           ; 005e78b5
    CALL crt_math.c_atan2_FUN_006013b1  ; 005e78b8
        ;   XREF to: 006013b1 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_006013b1(float10 y, float10 x)
    FCHS                                ; 005e78bd
    FSTP float ptr [ECX]                ; 005e78bf
    MOV EAX,ECX                         ; 005e78c1
    MOV ESP,EBP                         ; 005e78c3
    POP EBP                             ; 005e78c5
    POP EDI                             ; 005e78c6
    POP EBX                             ; 005e78c7
    RET                                 ; 005e78c8

