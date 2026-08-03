; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(CDraculaBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDraculaBride *  Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[1]:
;   core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0 at 0045a75e
;
; Referenced Globals:
;   TerminatedCString s_Shot_thru_the_heart_0057d812
;   double DOUBLE_0057d82e = 20
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CConsole g_CConsole_0077ad0c
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0045a6a0
        ;   Label: core_dracbrid.cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045a6a3
    CMP dword ptr [EAX + 0x30],0x6c     ; 0045a6a7
    JZ 0x0045a6c1                       ; 0045a6ab
        ;   XREF to: 0045a6c1 (CONDITIONAL_JUMP)  ; LAB_0045a6c1
    MOV ECX,dword ptr [ESP + 0xc]       ; 0045a6ad
    MOV EDX,dword ptr [EAX]             ; 0045a6b1
    CMP EDX,dword ptr [ECX + 0xbd3c]    ; 0045a6b3
    JNZ 0x0045a6c1                      ; 0045a6b9
        ;   XREF to: 0045a6c1 (CONDITIONAL_JUMP)  ; LAB_0045a6c1
    CMP dword ptr [EAX + 0x30],0x68     ; 0045a6bb
    JZ 0x0045a6c5                       ; 0045a6bf
        ;   XREF to: 0045a6c5 (CONDITIONAL_JUMP)  ; LAB_0045a6c5
    ADD ESP,0x8                         ; 0045a6c1
        ;   Label: LAB_0045a6c1
    RET                                 ; 0045a6c4
    PUSH EDI                            ; 0045a6c5
        ;   Label: LAB_0045a6c5
    FLD float ptr [EAX + 0x4]           ; 0045a6c6
    PUSH 0x57d812                       ; 0045a6c9 | = "Shot thru the heart\n"
    MOV EDI,dword ptr [0x005ad350]      ; 0045a6ce | g_CConsole_PTR_005ad350
    FLD ST0                             ; 0045a6d4
    FMUL double ptr [0x0057d82e]        ; 0045a6d6 | DOUBLE_0057d82e
    PUSH EDI                            ; 0045a6dc | g_CConsole_0077ad0c
    FSTP ST1                            ; 0045a6dd
    FSTP float ptr [EAX + 0x4]          ; 0045a6df
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0045a6e2
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0045a6e7
    POP EDI                             ; 0045a6ea
    ADD ESP,0x8                         ; 0045a6eb
    RET                                 ; 0045a6ee

