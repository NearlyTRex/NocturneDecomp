; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f *out_euler_angles,CVector3f *in_direction_vector)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   out_euler_angles
; CVector3f *      Stack[0x8]:4   in_direction_vector
; Local Variables:
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[74]:
;   core_baron.cpp_FUN_00410cc0 at 00410d15
;   core_batcreat.cpp_CBatCreature_process_FUN_00412480 at 004128b6
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00413c58
;   core_bugs.cpp_CBugs_updateBugPathfinding_FUN_004227b0 at 00422949
;   core_charactr.cpp_CCharacter_addDamageDecal_FUN_00427310 at 00427515
;   core_charactr.cpp_CCharacter_dismember_FUN_00427b60 at 00427ca5
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 0042996f
;   core_charactr.cpp_CCharacter_followActor_FUN_00428780 at 004288cf
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00424e90 at 00424eb1
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 at 00424836
;   ... and 64 more
;
; Called Functions:
;   crt_math.c_atan2_FUN_00566c81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e4a0
        ;   Label: core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
    PUSH EDI                            ; 0054e4a1
    PUSH EBP                            ; 0054e4a2
    MOV EBP,ESP                         ; 0054e4a3
    SUB ESP,0x8                         ; 0054e4a5
    AND ESP,0xfffffff8                  ; 0054e4a8
    MOV ECX,dword ptr [EBP + 0x10]      ; 0054e4ab
    MOV EDX,dword ptr [EBP + 0x14]      ; 0054e4ae
    MOV dword ptr [ECX + 0x8],0x0       ; 0054e4b1
    TEST dword ptr [EDX],0x7fffffff     ; 0054e4b8
    JNZ 0x0054e50b                      ; 0054e4be
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)  ; LAB_0054e50b
    TEST dword ptr [EDX + 0x8],0x7fffffff ; 0054e4c0
    JNZ 0x0054e50b                      ; 0054e4c7
        ;   XREF to: 0054e50b (CONDITIONAL_JUMP)  ; LAB_0054e50b
    MOV dword ptr [ECX + 0x4],0x0       ; 0054e4c9
    FLDZ                                ; 0054e4d0
    FCOMP float ptr [EDX + 0x4]         ; 0054e4d2
    FNSTSW AX                           ; 0054e4d5
    SAHF                                ; 0054e4d7
    JC 0x0054e4f8                       ; 0054e4d8
        ;   XREF to: 0054e4f8 (CONDITIONAL_JUMP)  ; LAB_0054e4f8
    MOV EDI,0x54411744                  ; 0054e4da
    MOV EAX,0x3ff921fb                  ; 0054e4df
    MOV dword ptr [ESP],EDI             ; 0054e4e4
    MOV dword ptr [ESP + 0x4],EAX       ; 0054e4e7
    FLD double ptr [ESP]                ; 0054e4eb
        ;   Label: LAB_0054e4eb
    FSTP float ptr [ECX]                ; 0054e4ee
    MOV EAX,ECX                         ; 0054e4f0
    MOV ESP,EBP                         ; 0054e4f2
    POP EBP                             ; 0054e4f4
    POP EDI                             ; 0054e4f5
    POP EBX                             ; 0054e4f6
    RET                                 ; 0054e4f7
    MOV EDX,0x54411744                  ; 0054e4f8
        ;   Label: LAB_0054e4f8
    MOV EBX,0xbff921fb                  ; 0054e4fd
    MOV dword ptr [ESP],EDX             ; 0054e502
    MOV dword ptr [ESP + 0x4],EBX       ; 0054e505
    JMP 0x0054e4eb                      ; 0054e509
        ;   XREF to: 0054e4eb (UNCONDITIONAL_JUMP)  ; LAB_0054e4eb
    FLD float ptr [EDX + 0x8]           ; 0054e50b
        ;   Label: LAB_0054e50b
    FLD float ptr [EDX]                 ; 0054e50e
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054e510
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FSTP float ptr [ECX + 0x4]          ; 0054e515
    FLD float ptr [EDX + 0x8]           ; 0054e518
    FMUL ST0                            ; 0054e51b
    FLD float ptr [EDX]                 ; 0054e51d
    FMUL ST0                            ; 0054e51f
    FADDP                               ; 0054e521
    FSQRT                               ; 0054e523
    FLD float ptr [EDX + 0x4]           ; 0054e525
    CALL crt_math.c_atan2_FUN_00566c81  ; 0054e528
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FCHS                                ; 0054e52d
    FSTP float ptr [ECX]                ; 0054e52f
    MOV EAX,ECX                         ; 0054e531
    MOV ESP,EBP                         ; 0054e533
    POP EBP                             ; 0054e535
    POP EDI                             ; 0054e536
    POP EBX                             ; 0054e537
    RET                                 ; 0054e538

