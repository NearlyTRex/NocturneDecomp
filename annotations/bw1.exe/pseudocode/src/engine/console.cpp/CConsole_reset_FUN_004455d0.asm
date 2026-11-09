; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_console_cpp_CConsole_reset_FUN_004455d0(CConsole *this_ptr)
;
; Parameters:
; CConsole *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_FUN_004cf5e0 at 004cf5fb
;   engine_console.cpp_CConsole_ctor_FUN_004453a0 at 004453ec
;
; Referenced Globals:
;   TerminatedCString s_console_txt_00611108
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;   unkafter_dosio.cpp_FUN_00479950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004455d0
        ;   Label: engine_console.cpp_CConsole_reset_FUN_004455d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004455d1
    PUSH 0xfa0                          ; 004455d5
    PUSH 0x0                            ; 004455da
    LEA EAX,[EBX + 0x8]                 ; 004455dc
    PUSH EAX                            ; 004455df
    CALL crt_memory.c_memset_FUN_005bfb70 ; 004455e0
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 004455e5
    MOV dword ptr [EBX + 0xfa8],0x0     ; 004455e8
    PUSH 0x611108                       ; 004455f2 | = "console.txt"
    MOV dword ptr [EBX + 0xfac],0x0     ; 004455f7
    CALL unkafter_dosio.cpp_FUN_00479950 ; 00445601
        ;   XREF to: 00479950 (UNCONDITIONAL_CALL)  ; undefined unkafter_dosio.cpp_FUN_00479950()
    ADD ESP,0x4                         ; 00445606
    POP EBX                             ; 00445609
    RET                                 ; 0044560a

