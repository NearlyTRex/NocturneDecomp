; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004cdb20(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_FUN_004ce7e0 at 004ce81d
;
; Referenced Globals:
;   undefined4 DAT_005c4661
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 g_CGameInstance.field788_0x314
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004cdb20
        ;   Label: core_gore.cpp_FUN_004cdb20
    MOV EDX,dword ptr [0x005fe9dc]      ; 004cdb24 | g_CGamePtr
    LEA EAX,[ECX + 0x28]                ; 004cdb2a
    FLD float ptr [EDX + 0x314]         ; 004cdb2d | g_CGameInstance.field788_0x314
    FADD float ptr [EAX]                ; 004cdb33
    FSTP float ptr [EAX]                ; 004cdb35
    FLD float ptr [ECX + 0x28]          ; 004cdb37
    FCOMP double ptr [0x005c4661]       ; 004cdb3a | DAT_005c4661
    FNSTSW AX                           ; 004cdb40
    SAHF                                ; 004cdb42
    JA 0x004cdb46                       ; 004cdb43
        ;   XREF to: 004cdb46 (CONDITIONAL_JUMP)  ; LAB_004cdb46
    RET                                 ; 004cdb45
    MOV dword ptr [ECX + 0x28],0x40000000 ; 004cdb46
        ;   Label: LAB_004cdb46
    RET                                 ; 004cdb4d

