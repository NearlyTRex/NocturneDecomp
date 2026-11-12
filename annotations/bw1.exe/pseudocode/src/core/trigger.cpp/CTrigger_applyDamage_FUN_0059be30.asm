; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_0059be30(CTrigger *this_ptr,float hit_points)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   hit_points
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[11]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a3c1
;   core_crossbow.cpp_CCrossbow_fire_FUN_00449a50 at 00449dc3
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e6e8
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8e67
;   core_lightgun.cpp_CLightGun_fire_FUN_00500310 at 005007aa
;   core_lightpis.cpp_CLightPis_fire_FUN_00501a70 at 00501f0a
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 0054076d
;   core_set.cpp_CDemonSet_processActors_FUN_0054fc20 at 0055005e
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 00561c99
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 00598c9c
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_s_received_g_damage_hitp_005f81f3
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059be30
        ;   Label: core_trigger.cpp_CTrigger_applyDamage_FUN_0059be30
    MOV EBX,dword ptr [ESP + 0x8]       ; 0059be31
    CMP dword ptr [EBX + 0x174],0x7     ; 0059be35
    JNZ 0x0059bea5                      ; 0059be3c
        ;   XREF to: 0059bea5 (CONDITIONAL_JUMP)  ; LAB_0059bea5
    FLD float ptr [EBX + 0x370]         ; 0059be3e
    FLDZ                                ; 0059be44
    FCOMPP                              ; 0059be46
    FNSTSW AX                           ; 0059be48
    SAHF                                ; 0059be4a
    JC 0x0059bea5                       ; 0059be4b
        ;   XREF to: 0059bea5 (CONDITIONAL_JUMP)  ; LAB_0059bea5
    FLD float ptr [EBX + 0x2f8]         ; 0059be4d
    FSUB float ptr [ESP + 0xc]          ; 0059be53
    FST float ptr [EBX + 0x2f8]         ; 0059be57
    FLDZ                                ; 0059be5d
    FCOMPP                              ; 0059be5f
    FNSTSW AX                           ; 0059be61
    SAHF                                ; 0059be63
    JBE 0x0059be70                      ; 0059be64
        ;   XREF to: 0059be70 (CONDITIONAL_JUMP)  ; LAB_0059be70
    MOV dword ptr [EBX + 0x2f8],0x0     ; 0059be66
    SUB ESP,0x8                         ; 0059be70
        ;   Label: LAB_0059be70
    FLD float ptr [EBX + 0x2f8]         ; 0059be73
    FSTP double ptr [ESP]               ; 0059be79
    FLD float ptr [ESP + 0x14]          ; 0059be7c
    SUB ESP,0x8                         ; 0059be80
    FSTP double ptr [ESP]               ; 0059be83
    PUSH EBX                            ; 0059be86
    PUSH 0x5f81f3                       ; 0059be87 | = "%s received %g damage, hitpoints %g\n"
    MOV ECX,dword ptr [0x00611100]      ; 0059be8c | g_CConsolePtr
    PUSH ECX                            ; 0059be92 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0059be93
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x1c                        ; 0059be98
    MOV dword ptr [EBX + 0x370],0x3f800000 ; 0059be9b
    POP EBX                             ; 0059bea5
        ;   Label: LAB_0059bea5
    RET                                 ; 0059bea6

