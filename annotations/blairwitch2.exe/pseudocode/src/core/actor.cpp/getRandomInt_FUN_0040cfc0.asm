; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_getRandomInt_FUN_0040cfc0(int min_value,int max_value)
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
; XREF[59]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cb60 at 0040cca9
;   core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380 at 005a0678
;   core_batcreat.cpp_CBatCreature_processDamage_FUN_00412760 at 00412838
;   core_batman.cpp_CBatman_processDamage_FUN_00414290 at 00414368
;   core_biggs.cpp_CBiggs_processDamage_FUN_004152e0 at 0041531a
;   core_boneguy.cpp_CBoneGuy_ctor_FUN_004182d0 at 004183be
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00419520 at 00419aed
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d093
;   core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00421800 at 004219db
;   core_bugs.cpp_CBugs_setSwarmTarget_FUN_00421b10 at 00421d4b
;   ... and 49 more
;
; Referenced Globals:
;   undefined4 DAT_005caf26
;   undefined4 DAT_005caf2e
;   undefined4 DAT_005caf32
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.is_processing
;
; Called Functions:
;   core_actor.cpp_generateRandomValue_FUN_0040cef0
;   crt_math.c_round_FUN_005b7ff0
;   crt_stdlib.c_rand_FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040cfc0
        ;   Label: core_actor.cpp_getRandomInt_FUN_0040cfc0
    PUSH ESI                            ; 0040cfc1
    PUSH EBP                            ; 0040cfc2
    MOV EBP,ESP                         ; 0040cfc3
    SUB ESP,0x14                        ; 0040cfc5
    AND ESP,0xfffffff8                  ; 0040cfc8
    MOV EBX,dword ptr [EBP + 0x10]      ; 0040cfcb
    MOV ESI,dword ptr [EBP + 0x14]      ; 0040cfce
    MOV EAX,ESI                         ; 0040cfd1
    SUB EAX,EBX                         ; 0040cfd3
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cfd5
    FILD dword ptr [ESP + 0x10]         ; 0040cfd9
    MOV EAX,[0x00616494]                ; 0040cfdd | g_CGamePtr
    FADD double ptr [0x005caf26]        ; 0040cfe2 | DAT_005caf26
    MOV EDX,dword ptr [EAX + 0x258]     ; 0040cfe8 | g_CGameInstance.is_processing
    FSTP double ptr [ESP]               ; 0040cfee
    TEST EDX,EDX                        ; 0040cff1
    JNZ 0x0040d03a                      ; 0040cff3
        ;   XREF to: 0040d03a (CONDITIONAL_JUMP)  ; LAB_0040d03a
    CALL crt_stdlib.c_rand_FUN_005b849c ; 0040cff5
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005b849c()
    MOV dword ptr [ESP + 0x10],EAX      ; 0040cffa
    FILD dword ptr [ESP + 0x10]         ; 0040cffe
    FMUL float ptr [0x005caf2e]         ; 0040d002 | DAT_005caf2e
    FSTP float ptr [ESP + 0x8]          ; 0040d008
        ;   Label: LAB_0040d008
    FLD float ptr [ESP + 0x8]           ; 0040d00c
    FMUL double ptr [ESP]               ; 0040d010
    MOV dword ptr [ESP + 0x10],EBX      ; 0040d013
    FILD dword ptr [ESP + 0x10]         ; 0040d017
    FADDP                               ; 0040d01b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0040d01d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0xc]         ; 0040d022
    MOV ECX,dword ptr [ESP + 0xc]       ; 0040d026
    CMP EBX,ECX                         ; 0040d02a
    JG 0x0040d04f                       ; 0040d02c
        ;   XREF to: 0040d04f (CONDITIONAL_JUMP)  ; LAB_0040d04f
    CMP ESI,ECX                         ; 0040d02e
    JGE 0x0040d053                      ; 0040d030
        ;   XREF to: 0040d053 (CONDITIONAL_JUMP)  ; LAB_0040d053
    MOV EAX,ESI                         ; 0040d032
    MOV ESP,EBP                         ; 0040d034
        ;   Label: LAB_0040d034
    POP EBP                             ; 0040d036
    POP ESI                             ; 0040d037
    POP EBX                             ; 0040d038
    RET                                 ; 0040d039
    CALL core_actor.cpp_generateRandomValue_FUN_0040cef0 ; 0040d03a
        ;   XREF to: 0040cef0 (UNCONDITIONAL_CALL)  ; uint core_actor.cpp_generateRandomValue_FUN_0040cef0()
        ;   Label: LAB_0040d03a
    MOV dword ptr [ESP + 0x10],EAX      ; 0040d03f
    FILD dword ptr [ESP + 0x10]         ; 0040d043
    FMUL float ptr [0x005caf32]         ; 0040d047 | DAT_005caf32
    JMP 0x0040d008                      ; 0040d04d
        ;   XREF to: 0040d008 (UNCONDITIONAL_JUMP)  ; LAB_0040d008
    MOV EAX,EBX                         ; 0040d04f
        ;   Label: LAB_0040d04f
    JMP 0x0040d034                      ; 0040d051
        ;   XREF to: 0040d034 (UNCONDITIONAL_JUMP)  ; LAB_0040d034
    MOV EAX,ECX                         ; 0040d053
        ;   Label: LAB_0040d053
    MOV ESP,EBP                         ; 0040d055
    POP EBP                             ; 0040d057
    POP ESI                             ; 0040d058
    POP EBX                             ; 0040d059
    RET                                 ; 0040d05a

