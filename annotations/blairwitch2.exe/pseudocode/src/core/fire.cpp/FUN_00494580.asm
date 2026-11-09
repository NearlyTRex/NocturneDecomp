; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_00494580(CStake *this_ptr)
;
; Parameters:
; CStake *         Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_fire.cpp_FUN_0049c430 at 0049c506
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field644_0x284
;
; Called Functions:
;   core_box.cpp_CBox_processPhysics_FUN_005b22f0
;
; *****************************************************************************

section .text

    MOV EAX,[0x00616494]                ; 00494580 | g_CGamePtr
        ;   Label: core_fire.cpp_FUN_00494580
    SUB ESP,0x4                         ; 00494585
    FLD float ptr [EAX + 0x284]         ; 00494588 | g_CGameInstance.field644_0x284
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049458e
    ADD EAX,0x4                         ; 00494592
    FSTP float ptr [ESP]                ; 00494595
    PUSH EAX                            ; 00494598
    CALL core_box.cpp_CBox_processPhysics_FUN_005b22f0 ; 00494599
        ;   XREF to: 005b22f0 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_processPhysics_FUN_005b22f0(CBox * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0049459e
    RET                                 ; 004945a1

