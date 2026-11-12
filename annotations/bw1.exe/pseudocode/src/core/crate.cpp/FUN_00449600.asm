; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_crate_cpp_FUN_00449600(CCrate *this_ptr)
;
; Parameters:
; CCrate *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x28]:1  local_28
;
; XREF[7]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040aa52
;   core_elephant.cpp_CElephantGun_fire_FUN_0049e1a0 at 0049e95e
;   core_gun.cpp_CGun_fire_FUN_004e8630 at 004e8e88
;   core_rifle.cpp_CRifle_fire_FUN_00540080 at 00540792
;   core_shotgun.cpp_CShotgun_fire_FUN_00561760 at 00561f21
;   core_tommygun.cpp_CTommyGun_fire_FUN_00598420 at 00598cbd
;   core_turret.cpp_CTurret_fire_FUN_005a3870 at 005a3deb
;
; Referenced Globals:
;   undefined4 s_s_exploding_005d7362+1
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061f650
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60
;   core_mission.cpp_FUN_0051b740
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449600
        ;   Label: core_crate.cpp_FUN_00449600
    SUB ESP,0x3c                        ; 00449601
    MOV EBX,dword ptr [ESP + 0x44]      ; 00449604
    CMP dword ptr [EBX + 0x70],0x1      ; 00449608
    JZ 0x00449613                       ; 0044960c
        ;   XREF to: 00449613 (CONDITIONAL_JUMP)  ; LAB_00449613
    ADD ESP,0x3c                        ; 0044960e
    POP EBX                             ; 00449611
    RET                                 ; 00449612
    PUSH EDI                            ; 00449613
        ;   Label: LAB_00449613
    PUSH ESI                            ; 00449614
    PUSH EBX                            ; 00449615
    PUSH 0x5d7363                       ; 00449616 | s_s_exploding_005d7362+1
    MOV ECX,dword ptr [0x00611100]      ; 0044961b | g_CConsolePtr
    PUSH ECX                            ; 00449621 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00449622
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00449627
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044962a
    PUSH EBX                            ; 00449630
    LEA ESI,[ESP + 0xc]                 ; 00449631
    LEA EDI,[ESP + 0x24]                ; 00449635
    CALL dword ptr [EAX + 0x1c]         ; 00449639
    MOV ECX,0x6                         ; 0044963c
    LEA ESI,[ESP + 0xc]                 ; 00449641
    LEA EAX,[ESP + 0x3c]                ; 00449645
    ADD ESP,0x4                         ; 00449649
    LEA EDX,[EBX + 0x20]                ; 0044964c
    MOVSD.REP ES:EDI,ESI                ; 0044964f
    CMP EAX,EDX                         ; 00449651
    JZ 0x00449669                       ; 00449653
        ;   XREF to: 00449669 (CONDITIONAL_JUMP)  ; LAB_00449669
    MOV EAX,dword ptr [EDX]             ; 00449655
    MOV dword ptr [ESP + 0x38],EAX      ; 00449657
    MOV EAX,dword ptr [EDX + 0x4]       ; 0044965b
    MOV dword ptr [ESP + 0x3c],EAX      ; 0044965e
    MOV EAX,dword ptr [EDX + 0x8]       ; 00449662
    MOV dword ptr [ESP + 0x40],EAX      ; 00449665
    PUSH 0x40800000                     ; 00449669
        ;   Label: LAB_00449669
    FLD float ptr [ESP + 0x34]          ; 0044966e
    PUSH 0x44bb8000                     ; 00449672
    LEA EAX,[ESP + 0x40]                ; 00449677
    MOV ESI,dword ptr [0x0061c010]      ; 0044967b | DAT_0061c010
    PUSH 0x42000000                     ; 00449681
    FSUB float ptr [ESP + 0x30]         ; 00449686
    PUSH EAX                            ; 0044968a
    FADD float ptr [ESP + 0x4c]         ; 0044968b
    PUSH ESI                            ; 0044968f
    FSTP float ptr [ESP + 0x50]         ; 00449690
    CALL core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60 ; 00449694
        ;   XREF to: 004b6c60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createExplosion_FUN_004b6c60(CFireEffect * this_ptr, CVector3f * position, float scale, float gore_multiplier, ...)
    ADD ESP,0x14                        ; 00449699
    PUSH 0x1                            ; 0044969c
    PUSH EBX                            ; 0044969e
    MOV EDI,dword ptr [0x0061f650]      ; 0044969f | DAT_0061f650
    PUSH EDI                            ; 004496a5 | DAT_01d2c900
    CALL core_mission.cpp_FUN_0051b740  ; 004496a6
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b740()
    ADD ESP,0xc                         ; 004496ab
    MOV dword ptr [EBX + 0x70],0x2      ; 004496ae
    POP ESI                             ; 004496b5
    POP EDI                             ; 004496b6
    ADD ESP,0x3c                        ; 004496b7
    POP EBX                             ; 004496ba
    RET                                 ; 004496bb

