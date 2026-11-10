; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_reset_FUN_004a7bb0(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_CBitFont_ctor_FUN_004a7b70 at 004a7b76
;   engine_font.cpp_FUN_004a8850 at 004a8891
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a7bb0
        ;   Label: engine_font.cpp_CBitFont_reset_FUN_004a7bb0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004a7bb1
    MOV EAX,ECX                         ; 004a7bb5
    MOV EDX,ECX                         ; 004a7bb7
    MOV dword ptr [ECX],0x0             ; 004a7bb9
    LEA ESI,[ECX + 0x10]                ; 004a7bbf
    ADD EAX,0x4                         ; 004a7bc2
        ;   Label: LAB_004a7bc2
    MOV byte ptr [EDX + 0x4],0x0        ; 004a7bc5
    MOV dword ptr [EAX + 0x190],0x0     ; 004a7bc9
    ADD EDX,0x50                        ; 004a7bd3
    MOV dword ptr [EAX + 0x1a0],0x0     ; 004a7bd6
    CMP EAX,ESI                         ; 004a7be0
    JNZ 0x004a7bc2                      ; 004a7be2
        ;   XREF to: 004a7bc2 (CONDITIONAL_JUMP)  ; LAB_004a7bc2
    MOV EAX,ECX                         ; 004a7be4
    MOV byte ptr [ECX + 0x144],0x0      ; 004a7be6
    LEA EDX,[ECX + 0x400]               ; 004a7bed
    XOR ESI,ESI                         ; 004a7bf3
    ADD EAX,0x4                         ; 004a7bf5
        ;   Label: LAB_004a7bf5
    MOV dword ptr [EAX + 0x21e4],ESI    ; 004a7bf8
    MOV dword ptr [EAX + 0x35e4],ESI    ; 004a7bfe
    MOV dword ptr [EAX + 0x39e4],ESI    ; 004a7c04
    MOV dword ptr [EAX + 0x3de4],ESI    ; 004a7c0a
    MOV dword ptr [EAX + 0x1de4],ESI    ; 004a7c10
    CMP EAX,EDX                         ; 004a7c16
    JNZ 0x004a7bf5                      ; 004a7c18
        ;   XREF to: 004a7bf5 (CONDITIONAL_JUMP)  ; LAB_004a7bf5
    MOV dword ptr [ECX + 0x41ec],0x0    ; 004a7c1a
    MOV dword ptr [ECX + 0x41f0],0x0    ; 004a7c24
    MOV dword ptr [ECX + 0x41f4],0x1    ; 004a7c2e
    MOV dword ptr [ECX + 0x41f8],0x2    ; 004a7c38
    MOV dword ptr [ECX + 0x3668],0x8    ; 004a7c42
    MOV dword ptr [ECX + 0x41fc],0x2    ; 004a7c4c
    MOV dword ptr [ECX + 0x4200],0x1    ; 004a7c56
    MOV dword ptr [ECX + 0x4204],0x0    ; 004a7c60
    MOV dword ptr [ECX + 0x1de4],0x0    ; 004a7c6a
    MOV dword ptr [ECX + 0x420c],0x0    ; 004a7c74
    MOV dword ptr [ECX + 0x4210],0x0    ; 004a7c7e
    MOV dword ptr [ECX + 0x4214],0x0    ; 004a7c88
    MOV dword ptr [ECX + 0x1dcc],0x0    ; 004a7c92
    MOV dword ptr [ECX + 0x1dd4],0x0    ; 004a7c9c
    MOV dword ptr [ECX + 0x1dd8],0x0    ; 004a7ca6
    MOV dword ptr [ECX + 0x1ddc],0x0    ; 004a7cb0
    MOV dword ptr [ECX + 0x41e8],0x0    ; 004a7cba
    POP ESI                             ; 004a7cc4
    RET                                 ; 004a7cc5

