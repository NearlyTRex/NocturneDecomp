; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005e0b00(CTrigger *this_ptr,float hit_points)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   hit_points
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040ab67
;   core_crossbow.cpp_CCrossbow_fire_FUN_00448f20 at 004492a8
;   core_gun.cpp_CGun_fire_FUN_004f0350 at 004f0a9d
;   core_lightgun.cpp_CLightGun_fire_FUN_00505c70 at 00506231
;   core_set.cpp_CDemonSet_FUN_0056b810 at 0056bc47
;   core_tommygun.cpp_CTommyGun_fire_FUN_005ddb30 at 005de2b6
;   core_turret.cpp_CTurret_fire_FUN_005e3750 at 005e3bc4
;
; Referenced Globals:
;   TerminatedCString s_s_received_g_damage_hitp_006557a7
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0b00
        ;   Label: core_trigger.cpp_CTrigger_applyDamage_FUN_005e0b00
    MOV EBX,dword ptr [ESP + 0x8]       ; 005e0b01
    CMP dword ptr [EBX + 0x174],0x7     ; 005e0b05
    JNZ 0x005e0b75                      ; 005e0b0c
        ;   XREF to: 005e0b75 (CONDITIONAL_JUMP)  ; LAB_005e0b75
    FLD float ptr [EBX + 0x36c]         ; 005e0b0e
    FLDZ                                ; 005e0b14
    FCOMPP                              ; 005e0b16
    FNSTSW AX                           ; 005e0b18
    SAHF                                ; 005e0b1a
    JC 0x005e0b75                       ; 005e0b1b
        ;   XREF to: 005e0b75 (CONDITIONAL_JUMP)  ; LAB_005e0b75
    FLD float ptr [EBX + 0x2f8]         ; 005e0b1d
    FSUB float ptr [ESP + 0xc]          ; 005e0b23
    FST float ptr [EBX + 0x2f8]         ; 005e0b27
    FLDZ                                ; 005e0b2d
    FCOMPP                              ; 005e0b2f
    FNSTSW AX                           ; 005e0b31
    SAHF                                ; 005e0b33
    JBE 0x005e0b40                      ; 005e0b34
        ;   XREF to: 005e0b40 (CONDITIONAL_JUMP)  ; LAB_005e0b40
    MOV dword ptr [EBX + 0x2f8],0x0     ; 005e0b36
    SUB ESP,0x8                         ; 005e0b40
        ;   Label: LAB_005e0b40
    FLD float ptr [EBX + 0x2f8]         ; 005e0b43
    FSTP double ptr [ESP]               ; 005e0b49
    FLD float ptr [ESP + 0x14]          ; 005e0b4c
    SUB ESP,0x8                         ; 005e0b50
    FSTP double ptr [ESP]               ; 005e0b53
    PUSH EBX                            ; 005e0b56
    PUSH 0x6557a7                       ; 005e0b57 | = "%s received %g damage, hitpoints %g\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 005e0b5c | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 005e0b62 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005e0b63
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x1c                        ; 005e0b68
    MOV dword ptr [EBX + 0x36c],0x3f800000 ; 005e0b6b
    POP EBX                             ; 005e0b75
        ;   Label: LAB_005e0b75
    RET                                 ; 005e0b76

