; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_FUN_0049ab90(CLightningBolt *this_ptr)
;
; Parameters:
; CLightningBolt * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_FUN_0049c430 at 0049c6d3
;
; Referenced Globals:
;   CGame* g_CGamePtr = 01cb6900
;   undefined4 g_CGameInstance.field644_0x284
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0049ab90
        ;   Label: core_fire.cpp_FUN_0049ab90
    FLD float ptr [EDX + 0x14]          ; 0049ab94
    FLDZ                                ; 0049ab97
    FCOMPP                              ; 0049ab99
    FNSTSW AX                           ; 0049ab9b
    SAHF                                ; 0049ab9d
    JNC 0x0049abbf                      ; 0049ab9e
        ;   XREF to: 0049abbf (CONDITIONAL_JUMP)  ; LAB_0049abbf
    MOV ECX,dword ptr [0x00616494]      ; 0049aba0 | g_CGamePtr
    LEA EAX,[EDX + 0x14]                ; 0049aba6
    FLD float ptr [ECX + 0x284]         ; 0049aba9 | g_CGameInstance.field644_0x284
    FSUBR float ptr [EAX]               ; 0049abaf
    FSTP float ptr [EAX]                ; 0049abb1
    FLD float ptr [EDX + 0x14]          ; 0049abb3
    FLDZ                                ; 0049abb6
    FCOMPP                              ; 0049abb8
    FNSTSW AX                           ; 0049abba
    SAHF                                ; 0049abbc
    JA 0x0049abc0                       ; 0049abbd
        ;   XREF to: 0049abc0 (CONDITIONAL_JUMP)  ; LAB_0049abc0
    RET                                 ; 0049abbf
        ;   Label: LAB_0049abbf
    MOV dword ptr [EDX + 0x14],0x0      ; 0049abc0
        ;   Label: LAB_0049abc0
    RET                                 ; 0049abc7

