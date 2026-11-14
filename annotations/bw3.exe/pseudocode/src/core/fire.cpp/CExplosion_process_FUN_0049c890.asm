; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CExplosion_process_FUN_0049c890(CExplosion *this_ptr)
;
; Parameters:
; CExplosion *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_process_FUN_004a1760 at 004a195c
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.delta_time_float
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0049c890
        ;   Label: core_fire.cpp_CExplosion_process_FUN_0049c890
    MOV EBP,ESP                         ; 0049c891
    SUB ESP,0x8                         ; 0049c893
    AND ESP,0xfffffff8                  ; 0049c896
    MOV EDX,dword ptr [EBP + 0x8]       ; 0049c899
    FLDZ                                ; 0049c89c
    FLD float ptr [EDX + 0xc]           ; 0049c89e
    FSTP double ptr [ESP]               ; 0049c8a1
    FCOMP double ptr [ESP]              ; 0049c8a4
    FNSTSW AX                           ; 0049c8a7
    SAHF                                ; 0049c8a9
    JNC 0x0049c8c6                      ; 0049c8aa
        ;   XREF to: 0049c8c6 (CONDITIONAL_JUMP)  ; LAB_0049c8c6
    MOV EAX,[0x005fe9dc]                ; 0049c8ac | g_CGamePtr
    FLD float ptr [EAX + 0x314]         ; 0049c8b1 | g_CGameInstance.delta_time_float
    FSUBR double ptr [ESP]              ; 0049c8b7
    FST float ptr [EDX + 0xc]           ; 0049c8ba
    FLDZ                                ; 0049c8bd
    FCOMPP                              ; 0049c8bf
    FNSTSW AX                           ; 0049c8c1
    SAHF                                ; 0049c8c3
    JA 0x0049c8ca                       ; 0049c8c4
        ;   XREF to: 0049c8ca (CONDITIONAL_JUMP)  ; LAB_0049c8ca
    MOV ESP,EBP                         ; 0049c8c6
        ;   Label: LAB_0049c8c6
    POP EBP                             ; 0049c8c8
    RET                                 ; 0049c8c9
    MOV dword ptr [EDX + 0xc],0x0       ; 0049c8ca
        ;   Label: LAB_0049c8ca
    MOV ESP,EBP                         ; 0049c8d1
    POP EBP                             ; 0049c8d3
    RET                                 ; 0049c8d4

