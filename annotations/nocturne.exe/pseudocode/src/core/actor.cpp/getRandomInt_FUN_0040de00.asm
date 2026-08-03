; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_getRandomInt_FUN_0040de00(int min_value,int max_value)
;
; Parameters:
; int              Stack[0x4]:4   min_value
; int              Stack[0x8]:4   max_value
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[37]:
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00413040 at 004130f4
;   core_batman.cpp_CBatman_processDamage_FUN_00414930 at 004149e4
;   core_biggs.cpp_CBiggs_processDamage_FUN_00415900 at 0041592d
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_00418630 at 0041871e
;   core_boneguy.cpp_FUN_004196b0 at 00419b8b
;   core_boxactor.cpp_CLightActor_process_FUN_0041f3d0 at 0041f443
;   core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00423480 at 0042365b
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00423790 at 004239cb
;   core_bugs.cpp_CBugs_setup_FUN_004211e0 at 0042133f
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042a1e0 at 0042a435
;   ... and 27 more
;
; Referenced Globals:
;   double DOUBLE_00578051 = 0.999990000000000
;   float FLOAT_00578059 = 0.00003051851
;   float FLOAT_0057805d = 5.960465E-8
;   CGame* g_CGame_PTR_005b9354 = 01c775ec
;   undefined4 g_CGame_01c775ec.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040dd30
;   crt_math.c_round_FUN_00563a30
;   crt_stdlib.c_rand_FUN_0056488c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040de00
        ;   Label: core_actor.cpp_getRandomInt_FUN_0040de00
    PUSH ESI                            ; 0040de01
    PUSH EBP                            ; 0040de02
    MOV EBP,ESP                         ; 0040de03
    SUB ESP,0x14                        ; 0040de05
    AND ESP,0xfffffff8                  ; 0040de08
    MOV EBX,dword ptr [EBP + 0x10]      ; 0040de0b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040de0e
    MOV EAX,ESI                         ; 0040de11
    SUB EAX,EBX                         ; 0040de13
    MOV dword ptr [ESP + 0x10],EAX      ; 0040de15
    FILD dword ptr [ESP + 0x10]         ; 0040de19
    MOV EAX,[0x005b9354]                ; 0040de1d | g_CGame_PTR_005b9354
    FADD double ptr [0x00578051]        ; 0040de22 | DOUBLE_00578051
    MOV EDX,dword ptr [EAX + 0x23c]     ; 0040de28 | g_CGame_01c775ec.is_processing
    FSTP double ptr [ESP]               ; 0040de2e
    TEST EDX,EDX                        ; 0040de31
    JNZ 0x0040de7a                      ; 0040de33
        ;   XREF to: 0040de7a (CONDITIONAL_JUMP)  ; LAB_0040de7a
    CALL crt_stdlib.c_rand_FUN_0056488c ; 0040de35
        ;   XREF to: 0056488c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_0056488c()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040de3a
    FILD dword ptr [ESP + 0x10]         ; 0040de3e
    FMUL float ptr [0x00578059]         ; 0040de42 | FLOAT_00578059
    FSTP float ptr [ESP + 0x8]          ; 0040de48
        ;   Label: LAB_0040de48
    FLD float ptr [ESP + 0x8]           ; 0040de4c
    FMUL double ptr [ESP]               ; 0040de50
    MOV dword ptr [ESP + 0x10],EBX      ; 0040de53
    FILD dword ptr [ESP + 0x10]         ; 0040de57
    FADDP                               ; 0040de5b
    CALL crt_math.c_round_FUN_00563a30  ; 0040de5d
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0xc]         ; 0040de62
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040de66
    CMP EBX,ECX                         ; 0040de6a
    JG 0x0040de8f                       ; 0040de6c
        ;   XREF to: 0040de8f (CONDITIONAL_JUMP)  ; LAB_0040de8f
    CMP ESI,ECX                         ; 0040de6e
    JGE 0x0040de93                      ; 0040de70
        ;   XREF to: 0040de93 (CONDITIONAL_JUMP)  ; LAB_0040de93
    MOV EAX,ESI                         ; 0040de72
    MOV ESP,EBP                         ; 0040de74
        ;   Label: LAB_0040de74
    POP EBP                             ; 0040de76
    POP ESI                             ; 0040de77
    POP EBX                             ; 0040de78
    RET                                 ; 0040de79
    CALL core_actor.cpp_generateRandomValue_FUN_0040dd30 ; 0040de7a
        ;   XREF to: 0040dd30 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040dd30()
        ;   Label: LAB_0040de7a
    MOV dword ptr [ESP + 0x10],EAX      ; 0040de7f
    FILD dword ptr [ESP + 0x10]         ; 0040de83
    FMUL float ptr [0x0057805d]         ; 0040de87 | FLOAT_0057805d
    JMP 0x0040de48                      ; 0040de8d
        ;   XREF to: 0040de48 (UNCONDITIONAL_JUMP)  ; LAB_0040de48
    MOV EAX,EBX                         ; 0040de8f
        ;   Label: LAB_0040de8f
    JMP 0x0040de74                      ; 0040de91
        ;   XREF to: 0040de74 (UNCONDITIONAL_JUMP)  ; LAB_0040de74
    MOV EAX,ECX                         ; 0040de93
        ;   Label: LAB_0040de93
    MOV ESP,EBP                         ; 0040de95
    POP EBP                             ; 0040de97
    POP ESI                             ; 0040de98
    POP EBX                             ; 0040de99
    RET                                 ; 0040de9a

