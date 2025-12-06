; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0(CDemonActor * this_ptr, SCollisionReturnInfo * collision_result, float tolerance_radius)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; SCollisionReturnInfo * Stack[0x8]:4   collision_result
; float            Stack[0xc]:4   tolerance_radius
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
;
; XREF[1]:
;   core_hero.cpp_CHero_FUN_004f2580 at 004f25ac
;
; Called Functions:
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004090c0
        ;   Label: core_actor.cpp_CDemonActor_testPointInCylinder_FUN_004090c0
    SUB ESP,0x2c                        ; 004090c1
    MOV EBX,dword ptr [ESP + 0x38]      ; 004090c4
    MOV EAX,ESP                         ; 004090c8
    PUSH EAX                            ; 004090ca
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0 ; 004090cb | SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_005743c0(SCollisionInfo * this_ptr)
        ;   XREF to: 005743c0 (UNCONDITIONAL_CALL)
    LEA EAX,[ESP + 0x4]                 ; 004090d0
    ADD ESP,0x4                         ; 004090d4
    XOR EDX,EDX                         ; 004090d7
    MOV ECX,dword ptr [ESP + 0x34]      ; 004090d9
    PUSH EAX                            ; 004090dd
    MOV dword ptr [ESP + 0x4],EDX       ; 004090de
    MOV EDX,dword ptr [ESP + 0x38]      ; 004090e2
    PUSH ECX                            ; 004090e6
    MOV EDX,dword ptr [EDX + 0x154]     ; 004090e7
    CALL dword ptr [EDX + 0x34]         ; 004090ed
    ADD ESP,0x8                         ; 004090f0
    CMP EAX,0x2                         ; 004090f3
    JNZ 0x00409138                      ; 004090f6 | LAB_00409138
        ;   XREF to: 00409138 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x14]          ; 004090f8
    FSUB float ptr [ESP + 0x3c]         ; 004090fc
    FCOMP float ptr [EBX + 0x4]         ; 00409100
    FNSTSW AX                           ; 00409103
    SAHF                                ; 00409105
    JA 0x00409138                       ; 00409106 | LAB_00409138
        ;   XREF to: 00409138 (CONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x18]          ; 00409108
    FADD float ptr [ESP + 0x3c]         ; 0040910c
    FCOMP float ptr [EBX + 0x4]         ; 00409110
    FNSTSW AX                           ; 00409113
    SAHF                                ; 00409115
    JC 0x00409138                       ; 00409116 | LAB_00409138
        ;   XREF to: 00409138 (CONDITIONAL_JUMP)
    FLD float ptr [EBX + 0x8]           ; 00409118
    FMUL ST0                            ; 0040911b
    FLD float ptr [ESP + 0x1c]          ; 0040911d
    FADD float ptr [ESP + 0x3c]         ; 00409121
    FLD float ptr [EBX]                 ; 00409125
    FMUL ST0                            ; 00409127
    FXCH                                ; 00409129
    FMUL ST0                            ; 0040912b
    FXCH                                ; 0040912d
    FADDP ST2,ST0                       ; 0040912f
    FCOMPP                              ; 00409131
    FNSTSW AX                           ; 00409133
    SAHF                                ; 00409135
    JNC 0x0040913f                      ; 00409136 | LAB_0040913f
        ;   XREF to: 0040913f (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00409138
        ;   Label: LAB_00409138
    ADD ESP,0x2c                        ; 0040913a
    POP EBX                             ; 0040913d
    RET                                 ; 0040913e
    MOV EAX,0x1                         ; 0040913f
        ;   Label: LAB_0040913f
    ADD ESP,0x2c                        ; 00409144
    POP EBX                             ; 00409147
    RET                                 ; 00409148

