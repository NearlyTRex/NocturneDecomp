; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_charactr_cpp_clampNormalizedAngle_FUN_00424780(float angle,float limit)
;
; Parameters:
; float            Stack[0x4]:4   angle
; float            Stack[0x8]:4   limit
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00424780
        ;   Label: core_charactr.cpp_clampNormalizedAngle_FUN_00424780
    PUSH dword ptr [ESP + 0x10]         ; 00424783
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00424787
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0xc],EAX       ; 0042478c
    FLD float ptr [ESP + 0xc]           ; 00424790
    ADD ESP,0x4                         ; 00424794
    FLD float ptr [ESP + 0x14]          ; 00424797
    FXCH                                ; 0042479b
    FST float ptr [ESP + 0x10]          ; 0042479d
    FXCH                                ; 004247a1
    FCHS                                ; 004247a3
    FSTP float ptr [ESP]                ; 004247a5
    FCOMP float ptr [ESP]               ; 004247a8
    FNSTSW AX                           ; 004247ab
    SAHF                                ; 004247ad
    JC 0x004247cd                       ; 004247ae
        ;   XREF to: 004247cd (CONDITIONAL_JUMP)  ; LAB_004247cd
    FLD float ptr [ESP + 0x10]          ; 004247b0
    FCOMP float ptr [ESP + 0x14]        ; 004247b4
    FNSTSW AX                           ; 004247b8
    SAHF                                ; 004247ba
    JBE 0x004247d2                      ; 004247bb
        ;   XREF to: 004247d2 (CONDITIONAL_JUMP)  ; LAB_004247d2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004247bd
    MOV dword ptr [ESP + 0x4],EAX       ; 004247c1
        ;   Label: LAB_004247c1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004247c5
    ADD ESP,0xc                         ; 004247c9
    RET                                 ; 004247cc
    MOV EAX,dword ptr [ESP]             ; 004247cd
        ;   Label: LAB_004247cd
    JMP 0x004247c1                      ; 004247d0
        ;   XREF to: 004247c1 (UNCONDITIONAL_JUMP)  ; LAB_004247c1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004247d2
        ;   Label: LAB_004247d2
    MOV dword ptr [ESP + 0x4],EAX       ; 004247d6
    MOV EAX,dword ptr [ESP + 0x4]       ; 004247da
    ADD ESP,0xc                         ; 004247de
    RET                                 ; 004247e1

