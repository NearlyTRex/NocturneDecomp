; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_FUN_00411690(CAmmoBox *this_ptr)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[2]:
;   core_gabriela.cpp_CGabriella_process_FUN_004d2ea0 at 004d3c02
;   core_stranger.cpp_CStranger_FUN_005bb960 at 005bc0fb
;
; Referenced Globals:
;   TerminatedCString s_Open_pct_f_00614bd1
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411690
        ;   Label: core_ammobox.cpp_CAmmoBox_FUN_00411690
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411691
    MOV EAX,dword ptr [ESP + 0xc]       ; 00411695
    FLD float ptr [ESP + 0xc]           ; 00411699
    MOV dword ptr [EBX + 0x31c],EAX     ; 0041169d
    SUB ESP,0x8                         ; 004116a3
    FSTP double ptr [ESP]               ; 004116a6
    PUSH 0x614bd1                       ; 004116a9 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x0066e8e0]      ; 004116ae | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 004116b4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 004116b5
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV ECX,dword ptr [EBX + 0x348]     ; 004116ba
    ADD ESP,0x10                        ; 004116c0
    TEST ECX,ECX                        ; 004116c3
    JNZ 0x004116db                      ; 004116c5
        ;   XREF to: 004116db (CONDITIONAL_JUMP)  ; LAB_004116db
    MOV AH,byte ptr [EBX + 0x328]       ; 004116c7
    MOV dword ptr [EBX + 0x348],0x1     ; 004116cd
    TEST AH,AH                          ; 004116d7
    JNZ 0x004116dd                      ; 004116d9
        ;   XREF to: 004116dd (CONDITIONAL_JUMP)  ; LAB_004116dd
    POP EBX                             ; 004116db
        ;   Label: LAB_004116db
    RET                                 ; 004116dc
    LEA EDX,[EBX + 0x328]               ; 004116dd
        ;   Label: LAB_004116dd
    PUSH EDX                            ; 004116e3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004116e4
    PUSH EBX                            ; 004116ea
    CALL dword ptr [EAX + 0x24]         ; 004116eb
    ADD ESP,0x8                         ; 004116ee
    POP EBX                             ; 004116f1
    RET                                 ; 004116f2

