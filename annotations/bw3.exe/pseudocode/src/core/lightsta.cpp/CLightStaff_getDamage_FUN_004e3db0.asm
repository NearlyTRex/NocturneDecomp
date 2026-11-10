; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_lightsta_cpp_CLightStaff_getDamage_FUN_004e3db0(CLightStaff *this_ptr)
;
; Parameters:
; CLightStaff *    Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 004e3db0
        ;   Label: core_lightsta.cpp_CLightStaff_getDamage_FUN_004e3db0
    PUSH 0x41200000                     ; 004e3db3
    PUSH 0x41200000                     ; 004e3db8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004e3dbd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0xc],EAX       ; 004e3dc2
    FLD float ptr [ESP + 0xc]           ; 004e3dc6
    ADD ESP,0x8                         ; 004e3dca
    FSTP float ptr [ESP]                ; 004e3dcd
    MOV EAX,dword ptr [ESP]             ; 004e3dd0
    ADD ESP,0x8                         ; 004e3dd3
    RET                                 ; 004e3dd6

