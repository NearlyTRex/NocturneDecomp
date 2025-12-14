; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void engine_winfont.cpp_CWinFont_reset_FUN_005f2a30(CWinFont * this_ptr)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_005f2860 at 005f28d8
;   engine_winfont.cpp_CWinFont_dtor_FUN_005f2390 at 005f23a3
;
; Referenced Globals:
;   DeleteDC* DeleteDC = 00211784
;   SelectObject* SelectObject = 002117d6
;
; Called Functions:
;   DeleteDC
;   SelectObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005f2a30
        ;   Label: engine_winfont.cpp_CWinFont_reset_FUN_005f2a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 005f2a31
    MOV EDX,dword ptr [EBX + 0x4]       ; 005f2a35
    TEST EDX,EDX                        ; 005f2a38
    JNZ 0x005f2a5a                      ; 005f2a3a
        ;   XREF to: 005f2a5a (CONDITIONAL_JUMP)  ; LAB_005f2a5a
    MOV dword ptr [EBX + 0x128],0x0     ; 005f2a3c
        ;   Label: LAB_005f2a3c
    MOV EAX,dword ptr [EBX + 0x128]     ; 005f2a46
    MOV dword ptr [EBX + 0x124],EAX     ; 005f2a4c
    MOV dword ptr [EBX + 0x120],EAX     ; 005f2a52
    POP EBX                             ; 005f2a58
    RET                                 ; 005f2a59
    PUSH EDI                            ; 005f2a5a
        ;   Label: LAB_005f2a5a
    MOV ECX,dword ptr [EBX + 0x10]      ; 005f2a5b
    PUSH ECX                            ; 005f2a5e
    PUSH EDX                            ; 005f2a5f
    CALL dword ptr CS:[0x6113ec]        ; 005f2a60 | SelectObject
    MOV EDI,dword ptr [EBX + 0x4]       ; 005f2a67
    PUSH EDI                            ; 005f2a6a
    MOV dword ptr [EBX + 0x10],0x0      ; 005f2a6b
    CALL dword ptr CS:[0x6113d8]        ; 005f2a72 | DeleteDC
    MOV dword ptr [EBX + 0x4],0x0       ; 005f2a79
    MOV dword ptr [EBX + 0x8],0x0       ; 005f2a80
    MOV dword ptr [EBX + 0x14],0x0      ; 005f2a87
    POP EDI                             ; 005f2a8e
    JMP 0x005f2a3c                      ; 005f2a8f
        ;   XREF to: 005f2a3c (UNCONDITIONAL_JUMP)  ; LAB_005f2a3c

