; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_shovel_cpp_FUN_00516ab0(void)
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

    SUB ESP,0x8                         ; 00516ab0
        ;   Label: core_shovel.cpp_FUN_00516ab0
    PUSH 0x41700000                     ; 00516ab3
    PUSH 0x41200000                     ; 00516ab8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00516abd
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0xc],EAX       ; 00516ac2
    FLD float ptr [ESP + 0xc]           ; 00516ac6
    ADD ESP,0x8                         ; 00516aca
    FSTP float ptr [ESP]                ; 00516acd
    MOV EAX,dword ptr [ESP]             ; 00516ad0
    ADD ESP,0x8                         ; 00516ad3
    LEA EAX,[EAX]                       ; 00516ad6
    LEA EDX,[EDX]                       ; 00516adc

