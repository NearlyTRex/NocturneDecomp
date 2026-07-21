; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_applyDamage_FUN_005485e0(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[9]:
;   FUN_0040b300 at 0040b6cb
;   FUN_0043d1c0 at 0043d578
;   FUN_00477890 at 00477d52
;   FUN_004b27c0 at 004b2f38
;   FUN_004c71a0 at 004c7751
;   FUN_00515ea0 at 005163ba
;   FUN_00545c30 at 005463f2
;   core_set.cpp_CDemonSet_processActors_FUN_00509140 at 0050955c
;   core_turret.cpp_CTurret_fire_FUN_0054ab10 at 0054af84
;
; Referenced Globals:
;   string s_%s_received_%g_damage,_hitpoints_00596af2
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005485e0
        ;   Label: core_trigger.cpp_CTrigger_applyDamage_FUN_005485e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005485e1
    CMP dword ptr [EBX + 0x16c],0x7     ; 005485e5
    JNZ 0x00548655                      ; 005485ec
        ;   XREF to: 00548655 (CONDITIONAL_JUMP)  ; LAB_00548655
    FLD float ptr [EBX + 0x364]         ; 005485ee
    FLDZ                                ; 005485f4
    FCOMPP                              ; 005485f6
    FNSTSW AX                           ; 005485f8
    SAHF                                ; 005485fa
    JC 0x00548655                       ; 005485fb
        ;   XREF to: 00548655 (CONDITIONAL_JUMP)  ; LAB_00548655
    FLD float ptr [EBX + 0x2f0]         ; 005485fd
    FSUB float ptr [ESP + 0xc]          ; 00548603
    FST float ptr [EBX + 0x2f0]         ; 00548607
    FLDZ                                ; 0054860d
    FCOMPP                              ; 0054860f
    FNSTSW AX                           ; 00548611
    SAHF                                ; 00548613
    JBE 0x00548620                      ; 00548614
        ;   XREF to: 00548620 (CONDITIONAL_JUMP)  ; LAB_00548620
    MOV dword ptr [EBX + 0x2f0],0x0     ; 00548616
    SUB ESP,0x8                         ; 00548620
        ;   Label: LAB_00548620
    FLD float ptr [EBX + 0x2f0]         ; 00548623
    FSTP double ptr [ESP]               ; 00548629
    FLD float ptr [ESP + 0x14]          ; 0054862c
    SUB ESP,0x8                         ; 00548630
    FSTP double ptr [ESP]               ; 00548633
    PUSH EBX                            ; 00548636
    PUSH 0x596af2                       ; 00548637 | = "%s received %g damage, hitpoints %g\n"
    MOV ECX,dword ptr [0x005ad350]      ; 0054863c | PTR_DAT_005ad350
    PUSH ECX                            ; 00548642 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00548643
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x1c                        ; 00548648
    MOV dword ptr [EBX + 0x364],0x3f800000 ; 0054864b
    POP EBX                             ; 00548655
        ;   Label: LAB_00548655
    RET                                 ; 00548656

