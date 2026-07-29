; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_melee_cpp_FUN_004cef00(int param_1)
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

    SUB ESP,0x8                         ; 004cef00
        ;   Label: core_melee.cpp_FUN_004cef00
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cef03
    PUSH dword ptr [EAX + 0x578]        ; 004cef07
    PUSH dword ptr [EAX + 0x574]        ; 004cef0d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 004cef13
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004cef18
    FLD float ptr [ESP + 0xc]           ; 004cef1c
    ADD ESP,0x8                         ; 004cef20
    FSTP float ptr [ESP]                ; 004cef23
    MOV EAX,dword ptr [ESP]             ; 004cef26
    ADD ESP,0x8                         ; 004cef29
    LEA EAX,[EAX]                       ; 004cef2c

