; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CVector3f_toFixed8_FUN_0040d060(CVector3f *this_ptr,CVector3i *other)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   other
;
; Referenced Globals:
;   undefined4 DAT_005fb310
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d060
        ;   Label: core_actor.cpp_CVector3f_toFixed8_FUN_0040d060
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040d061
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040d065
    FLD float ptr [EAX]                 ; 0040d069
    FMUL float ptr [0x005fb310]         ; 0040d06b | DAT_005fb310
    FISTP dword ptr [EBX]               ; 0040d071
    FLD float ptr [EAX + 0x4]           ; 0040d073
    FMUL float ptr [0x005fb310]         ; 0040d076 | DAT_005fb310
    FISTP dword ptr [EBX + 0x4]         ; 0040d07c
    FLD float ptr [EAX + 0x8]           ; 0040d07f
    FMUL float ptr [0x005fb310]         ; 0040d082 | DAT_005fb310
    FISTP dword ptr [EBX + 0x8]         ; 0040d088
    POP EBX                             ; 0040d08b
    RET                                 ; 0040d08c

