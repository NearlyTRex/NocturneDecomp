; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
;
; Parameters:
; float            Stack[0x4]:4   probability_threshold
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[44]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 0041586b
;   core_batcreat.cpp_FUN_00415dd0 at 00415e7a
;   core_batman.cpp_CBatman_process_FUN_00416870 at 00417011
;   core_batman.cpp_FUN_004167f0 at 004167f5
;   core_batman.cpp_FUN_00417660 at 00417945
;   core_bodypart.cpp_FUN_0041b1b0 at 0041b1b5
;   core_bride.cpp_FUN_00423a30 at 00423db7
;   core_bride.cpp_FUN_00424600 at 0042469f
;   core_bride.cpp_FUN_00424830 at 004249cb
;   core_charactr.cpp_CCharacter_FUN_0042b670 at 0042b6bd
;   ... and 34 more
;
; Referenced Globals:
;   int INT_00614308 = 0x38000100
;   int INT_0061430c = 0x33800001
;   CGame* g_CGamePtr = 02d81a9c
;   CGame g_CGameInstance
;   undefined4 DAT_02d81cd8
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cba0
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0040cd10
        ;   Label: core_actor.cpp_randomChance_FUN_0040cd10
    MOV EAX,[0x0067b654]                ; 0040cd13 | g_CGameInstance | g_CGamePtr
    CMP dword ptr [EAX + 0x23c],0x0     ; 0040cd18 | DAT_02d81cd8
    JZ 0x0040cd4d                       ; 0040cd1f
        ;   XREF to: 0040cd4d (CONDITIONAL_JUMP)  ; LAB_0040cd4d
    CALL core_actor.cpp_generateRandomValue_FUN_0040cba0 ; 0040cd21
        ;   XREF to: 0040cba0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cba0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cd26
    FILD dword ptr [ESP + 0x4]          ; 0040cd2a
    FMUL float ptr [0x0061430c]         ; 0040cd2e | INT_0061430c
    FSTP float ptr [ESP]                ; 0040cd34
        ;   Label: LAB_0040cd34
    FLD float ptr [ESP]                 ; 0040cd37
    FCOMP float ptr [ESP + 0xc]         ; 0040cd3a
    FNSTSW AX                           ; 0040cd3e
    SAHF                                ; 0040cd40
    SETC AL                             ; 0040cd41
    AND EAX,0xff                        ; 0040cd44
    ADD ESP,0x8                         ; 0040cd49
    RET                                 ; 0040cd4c
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0040cd4d
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
        ;   Label: LAB_0040cd4d
    MOV dword ptr [ESP + 0x4],EAX       ; 0040cd52
    FILD dword ptr [ESP + 0x4]          ; 0040cd56
    FMUL float ptr [0x00614308]         ; 0040cd5a | INT_00614308
    JMP 0x0040cd34                      ; 0040cd60
        ;   XREF to: 0040cd34 (UNCONDITIONAL_JUMP)  ; LAB_0040cd34

