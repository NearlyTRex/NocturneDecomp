; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_reset_FUN_00442190(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_FUN_004b7f90 at 004b7fab
;   engine_console.cpp_CConsole_ctor_FUN_00441f60 at 00441fac
;
; Referenced Globals:
;   TerminatedCString s_console_txt_005f1698
;
; Called Functions:
;   crt_memory.c_memset_FUN_005a28f0
;   unkafter_dosio.cpp_FUN_00466220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442190
        ;   Label: engine_console.cpp_CConsole_reset_FUN_00442190
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442191
    PUSH 0xfa0                          ; 00442195
    PUSH 0x0                            ; 0044219a
    LEA EAX,[EBX + 0x8]                 ; 0044219c
    PUSH EAX                            ; 0044219f
    CALL crt_memory.c_memset_FUN_005a28f0 ; 004421a0
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004421a5
    MOV dword ptr [EBX + 0xfa8],0x0     ; 004421a8
    PUSH 0x5f1698                       ; 004421b2 | = "console.txt"
    MOV dword ptr [EBX + 0xfac],0x0     ; 004421b7
    CALL unkafter_dosio.cpp_FUN_00466220 ; 004421c1
        ;   XREF to: 00466220 (UNCONDITIONAL_CALL)  ; undefined unkafter_dosio.cpp_FUN_00466220()
    ADD ESP,0x4                         ; 004421c6
    POP EBX                             ; 004421c9
    RET                                 ; 004421ca

