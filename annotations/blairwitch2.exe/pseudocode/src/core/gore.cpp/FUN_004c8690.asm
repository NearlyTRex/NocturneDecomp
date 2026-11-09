; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004c8690(CBloodSplat *this_ptr)
;
; Parameters:
; CBloodSplat *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_FUN_004c9670 at 004c96ad
;
; Referenced Globals:
;   undefined4 DAT_005d946a
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field644_0x284
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004c8690
        ;   Label: core_gore.cpp_FUN_004c8690
    MOV EDX,dword ptr [0x00616494]      ; 004c8694 | g_CGamePtr
    LEA EAX,[ECX + 0x24]                ; 004c869a
    FLD float ptr [EDX + 0x284]         ; 004c869d | g_CGameInstance.field644_0x284
    FADD float ptr [EAX]                ; 004c86a3
    FSTP float ptr [EAX]                ; 004c86a5
    FLD float ptr [ECX + 0x24]          ; 004c86a7
    FCOMP double ptr [0x005d946a]       ; 004c86aa | DAT_005d946a
    FNSTSW AX                           ; 004c86b0
    SAHF                                ; 004c86b2
    JA 0x004c86b6                       ; 004c86b3
        ;   XREF to: 004c86b6 (CONDITIONAL_JUMP)  ; LAB_004c86b6
    RET                                 ; 004c86b5
    MOV dword ptr [ECX + 0x24],0x40000000 ; 004c86b6
        ;   Label: LAB_004c86b6
    RET                                 ; 004c86bd

