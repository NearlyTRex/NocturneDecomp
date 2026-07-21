; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00546470(void)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00546470
        ;   Label: FUN_00546470
    PUSH 0x41700000                     ; 00546473
    PUSH 0x41200000                     ; 00546478
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0054647d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 00546482
    FLD float ptr [ESP + 0xc]           ; 00546486
    ADD ESP,0x8                         ; 0054648a
    FSTP float ptr [ESP]                ; 0054648d
    MOV EAX,dword ptr [ESP]             ; 00546490
    ADD ESP,0x8                         ; 00546493
    RET                                 ; 00546496

