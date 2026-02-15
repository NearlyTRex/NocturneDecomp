; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_FUN_00486020(CDraculaBride *this_ptr)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_00486070 at 004860de
;
; Referenced Globals:
;   TerminatedCString s_Shot_thru_the_heart_00621bd2
;   double DOUBLE_00621bee = 20
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00486020
        ;   Label: core_dracbrid.cpp_CDraculaBride_FUN_00486020
    MOV EAX,dword ptr [ESP + 0x10]      ; 00486023
    CMP dword ptr [EAX + 0x30],0x6c     ; 00486027
    JZ 0x00486041                       ; 0048602b
        ;   XREF to: 00486041 (CONDITIONAL_JUMP)  ; LAB_00486041
    MOV ECX,dword ptr [ESP + 0xc]       ; 0048602d
    MOV EDX,dword ptr [EAX]             ; 00486031
    CMP EDX,dword ptr [ECX + 0xbed4]    ; 00486033
    JNZ 0x00486041                      ; 00486039
        ;   XREF to: 00486041 (CONDITIONAL_JUMP)  ; LAB_00486041
    CMP dword ptr [EAX + 0x30],0x68     ; 0048603b
    JZ 0x00486045                       ; 0048603f
        ;   XREF to: 00486045 (CONDITIONAL_JUMP)  ; LAB_00486045
    ADD ESP,0x8                         ; 00486041
        ;   Label: LAB_00486041
    RET                                 ; 00486044
    PUSH EDI                            ; 00486045
        ;   Label: LAB_00486045
    FLD float ptr [EAX + 0x4]           ; 00486046
    PUSH 0x621bd2                       ; 00486049 | = "Shot thru the heart\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 0048604e | g_CConsolePtr
    FLD ST0                             ; 00486054
    FMUL double ptr [0x00621bee]        ; 00486056 | DOUBLE_00621bee
    PUSH EDI                            ; 0048605c | g_CConsoleInstance
    FSTP ST1                            ; 0048605d
    FSTP float ptr [EAX + 0x4]          ; 0048605f
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00486062
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 00486067
    POP EDI                             ; 0048606a
    ADD ESP,0x8                         ; 0048606b
    RET                                 ; 0048606e

