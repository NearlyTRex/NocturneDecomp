; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_dynamite_cpp_CDynamite_getDamage_FUN_0046ecf0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0046ecf0
        ;   Label: core_dynamite.cpp_CDynamite_getDamage_FUN_0046ecf0
    PUSH 0x43fa0000                     ; 0046ecf3
    PUSH 0x43c80000                     ; 0046ecf8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0046ecfd
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 0046ed02
    FLD float ptr [ESP + 0xc]           ; 0046ed06
    ADD ESP,0x8                         ; 0046ed0a
    FSTP float ptr [ESP]                ; 0046ed0d
    MOV EAX,dword ptr [ESP]             ; 0046ed10
    ADD ESP,0x8                         ; 0046ed13
    LEA EAX,[EAX]                       ; 0046ed16
    LEA EDX,[EDX]                       ; 0046ed1c

