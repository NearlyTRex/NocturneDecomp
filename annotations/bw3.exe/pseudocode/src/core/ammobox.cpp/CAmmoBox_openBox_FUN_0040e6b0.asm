; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e6b0(CAmmoBox *this_ptr,float open_pct)
;
; Parameters:
; CAmmoBox *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   open_pct
; Local Variables:
; undefined8       Stack[-0xc]:8  local_c
;
; XREF[1]:
;   core_prye.cpp_FUN_00518cd0 at 00519916
;
; Referenced Globals:
;   TerminatedCString s_Open_pct_f_005b614d
;   CConsole* g_CConsolePtr = 007f7ea4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040e6b0
        ;   Label: core_ammobox.cpp_CAmmoBox_openBox_FUN_0040e6b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040e6b1
    MOV EAX,dword ptr [ESP + 0xc]       ; 0040e6b5
    FLD float ptr [ESP + 0xc]           ; 0040e6b9
    MOV dword ptr [EBX + 0x31c],EAX     ; 0040e6bd
    SUB ESP,0x8                         ; 0040e6c3
    FSTP double ptr [ESP]               ; 0040e6c6
    PUSH 0x5b614d                       ; 0040e6c9 | = "Open pct : %f\n"
    MOV EDX,dword ptr [0x005f1690]      ; 0040e6ce | g_CConsolePtr
    PUSH EDX                            ; 0040e6d4 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0040e6d5
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV ECX,dword ptr [EBX + 0x348]     ; 0040e6da
    ADD ESP,0x10                        ; 0040e6e0
    TEST ECX,ECX                        ; 0040e6e3
    JNZ 0x0040e6fb                      ; 0040e6e5
        ;   XREF to: 0040e6fb (CONDITIONAL_JUMP)  ; LAB_0040e6fb
    MOV AH,byte ptr [EBX + 0x328]       ; 0040e6e7
    MOV dword ptr [EBX + 0x348],0x1     ; 0040e6ed
    TEST AH,AH                          ; 0040e6f7
    JNZ 0x0040e6fd                      ; 0040e6f9
        ;   XREF to: 0040e6fd (CONDITIONAL_JUMP)  ; LAB_0040e6fd
    POP EBX                             ; 0040e6fb
        ;   Label: LAB_0040e6fb
    RET                                 ; 0040e6fc
    LEA EDX,[EBX + 0x328]               ; 0040e6fd
        ;   Label: LAB_0040e6fd
    PUSH EDX                            ; 0040e703
    MOV EAX,dword ptr [EBX + 0x154]     ; 0040e704
    PUSH EBX                            ; 0040e70a
    CALL dword ptr [EAX + 0x2c]         ; 0040e70b
    ADD ESP,0x8                         ; 0040e70e
    POP EBX                             ; 0040e711
    RET                                 ; 0040e712

