; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_fire.cpp_CExplosion_process_FUN_004c3ac0(CExplosion * this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 at 004c704c
;
; Referenced Globals:
;   CGame* g_CGamePtr = 02d81a9c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004c3ac0
        ;   Label: core_fire.cpp_CExplosion_process_FUN_004c3ac0
    MOV EBP,ESP                         ; 004c3ac1
    SUB ESP,0x8                         ; 004c3ac3
    AND ESP,0xfffffff8                  ; 004c3ac6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004c3ac9
    FLDZ                                ; 004c3acc
    FLD float ptr [EDX + 0xc]           ; 004c3ace
    FSTP double ptr [ESP]               ; 004c3ad1
    FCOMP double ptr [ESP]              ; 004c3ad4
    FNSTSW AX                           ; 004c3ad7
    SAHF                                ; 004c3ad9
    JNC 0x004c3af6                      ; 004c3ada | LAB_004c3af6
        ;   XREF to: 004c3af6 (CONDITIONAL_JUMP)
    MOV EAX,[0x0067b654]                ; 004c3adc | CGame * g_CGamePtr
    FLD float ptr [EAX + 0x264]         ; 004c3ae1 | g_CGameInstance.delta_time_float
    FSUBR double ptr [ESP]              ; 004c3ae7
    FST float ptr [EDX + 0xc]           ; 004c3aea
    FLDZ                                ; 004c3aed
    FCOMPP                              ; 004c3aef
    FNSTSW AX                           ; 004c3af1
    SAHF                                ; 004c3af3
    JA 0x004c3afa                       ; 004c3af4 | LAB_004c3afa
        ;   XREF to: 004c3afa (CONDITIONAL_JUMP)
    MOV ESP,EBP                         ; 004c3af6
        ;   Label: LAB_004c3af6
    POP EBP                             ; 004c3af8
    RET                                 ; 004c3af9
    MOV dword ptr [EDX + 0xc],0x0       ; 004c3afa
        ;   Label: LAB_004c3afa
    MOV ESP,EBP                         ; 004c3b01
    POP EBP                             ; 004c3b03
    RET                                 ; 004c3b04

