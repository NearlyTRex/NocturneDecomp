; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdio_c_fflush_FUN_00600e29(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[3]:
;   core_game.cpp_CGame_loadGame_FUN_004e12b0 at 004e1640
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e10c4
;   engine_dosio.c_reopenFileStream_FUN_00481b50 at 00481b68
;
; Referenced Globals:
;   undefined4 SUB_00608bcc
;
; Called Functions:
;   crt_stdio.c_reportStreamError_FUN_00606020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600e29
        ;   Label: crt_stdio.c_fflush_FUN_00600e29
    MOV EBX,dword ptr [ESP + 0x8]       ; 00600e2a
    MOV EAX,dword ptr [EBX]             ; 00600e2e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00600e30
    ADD EAX,EBX                         ; 00600e33
    MOV EDX,dword ptr [EAX + 0x4]       ; 00600e35
    TEST EDX,EDX                        ; 00600e38
    JZ 0x00600e4b                       ; 00600e3a
        ;   XREF to: 00600e4b (CONDITIONAL_JUMP)  ; LAB_00600e4b
    PUSH EDX                            ; 00600e3c
    CALL 0x00608bcc                     ; 00600e3d
        ;   XREF to: 00608bcc (UNCONDITIONAL_CALL)  ; SUB_00608bcc
    ADD ESP,0x4                         ; 00600e42
    TEST EAX,EAX                        ; 00600e45
    JZ 0x00600e58                       ; 00600e47
        ;   XREF to: 00600e58 (CONDITIONAL_JUMP)  ; LAB_00600e58
    POP EBX                             ; 00600e49
    RET                                 ; 00600e4a
    PUSH 0x2                            ; 00600e4b
        ;   Label: LAB_00600e4b
    PUSH EAX                            ; 00600e4d
    CALL crt_stdio.c_reportStreamError_FUN_00606020 ; 00600e4e
        ;   XREF to: 00606020 (UNCONDITIONAL_CALL)  ; void crt_stdio.c_reportStreamError_FUN_00606020(FileEmbeddedData * embedded_data, uint error_flags)
        ;   Label: LAB_00600e4e
    ADD ESP,0x8                         ; 00600e53
    POP EBX                             ; 00600e56
    RET                                 ; 00600e57
    MOV EAX,dword ptr [EBX]             ; 00600e58
        ;   Label: LAB_00600e58
    MOV EDX,dword ptr [EAX + 0x4]       ; 00600e5a
    PUSH 0x2                            ; 00600e5d
    ADD EBX,EDX                         ; 00600e5f
    PUSH EBX                            ; 00600e61
    JMP 0x00600e4e                      ; 00600e62
        ;   XREF to: 00600e4e (UNCONDITIONAL_JUMP)  ; LAB_00600e4e

