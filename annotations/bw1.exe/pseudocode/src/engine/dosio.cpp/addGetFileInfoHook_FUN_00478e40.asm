; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_dosio_cpp_addGetFileInfoHook_FUN_00478e40(FileSearchHandlerFunc *handler)
;
; Parameters:
; FileSearchHandlerFunc * Stack[0x4]:4   handler
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_005032a0 at 00503326
;
; Referenced Globals:
;   TerminatedCString s_engine_dosio_c_005daa24
;   TerminatedCString s_addGetFileInfoHook_too_m_005daa36
;   undefined4 DAT_01b6892c
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00478e40
        ;   Label: engine_dosio.cpp_addGetFileInfoHook_FUN_00478e40
    CMP dword ptr [0x01b6892c],0x5      ; 00478e41 | DAT_01b6892c
    JGE 0x00478e65                      ; 00478e48
        ;   XREF to: 00478e65 (CONDITIONAL_JUMP)  ; LAB_00478e65
    MOV EAX,[0x01b6892c]                ; 00478e4a | DAT_01b6892c
        ;   Label: LAB_00478e4a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00478e4f
    LEA ESI,[EAX + 0x1]                 ; 00478e53
    MOV dword ptr [EAX*0x4 + 0x1b68930],EDX ; 00478e56
    MOV dword ptr [0x01b6892c],ESI      ; 00478e5d | DAT_01b6892c
    POP ESI                             ; 00478e63
    RET                                 ; 00478e64
    PUSH EBX                            ; 00478e65
        ;   Label: LAB_00478e65
    MOV ECX,0x5daa24                    ; 00478e66 | = "..\\engine\\dosio.c"
    MOV EBX,0x6a                        ; 00478e6b
    PUSH 0x5daa36                       ; 00478e70 | = "addGetFileInfoHook - too many!"
    MOV dword ptr [0x01d1d400],ECX      ; 00478e75 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00478e7b | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00478e81
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00478e86
    POP EBX                             ; 00478e89
    JMP 0x00478e4a                      ; 00478e8a
        ;   XREF to: 00478e4a (UNCONDITIONAL_JUMP)  ; LAB_00478e4a

