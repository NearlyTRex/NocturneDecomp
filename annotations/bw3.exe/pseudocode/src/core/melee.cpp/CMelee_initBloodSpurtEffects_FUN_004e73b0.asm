; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_melee_cpp_CMelee_initBloodSpurtEffects_FUN_004e73b0(CMelee *this_ptr,int blood_spurt_count,int blood_gore_type)
;
; Parameters:
; CMelee *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   blood_spurt_count
; int              Stack[0xc]:4   blood_gore_type
;
; XREF[1]:
;   core_melee.cpp_FUN_004e7310 at 004e7344
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e73b0
        ;   Label: core_melee.cpp_CMelee_initBloodSpurtEffects_FUN_004e73b0
    MOV dword ptr [EAX + 0x5b4],0x3f800000 ; 004e73b4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e73be
    FLD float ptr [EAX + 0x5b4]         ; 004e73c2
    MOV dword ptr [EAX + 0x5a8],EDX     ; 004e73c8
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e73ce
    FSTP float ptr [EAX + 0x5b0]        ; 004e73d2
    MOV dword ptr [EAX + 0x5ac],EDX     ; 004e73d8
    RET                                 ; 004e73de

