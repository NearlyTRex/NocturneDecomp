; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_CBitFont_reset_FUN_004af7d0(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_CBitFont_ctor_FUN_004af790 at 004af796
;   engine_font.cpp_FUN_004b0480 at 004b04c1
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004af7d0
        ;   Label: engine_font.cpp_CBitFont_reset_FUN_004af7d0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004af7d1
    MOV EAX,ECX                         ; 004af7d5
    MOV EDX,ECX                         ; 004af7d7
    MOV dword ptr [ECX],0x0             ; 004af7d9
    LEA ESI,[ECX + 0x10]                ; 004af7df
    ADD EAX,0x4                         ; 004af7e2
        ;   Label: LAB_004af7e2
    MOV byte ptr [EDX + 0x4],0x0        ; 004af7e5
    MOV dword ptr [EAX + 0x190],0x0     ; 004af7e9
    ADD EDX,0x50                        ; 004af7f3
    MOV dword ptr [EAX + 0x1a0],0x0     ; 004af7f6
    CMP EAX,ESI                         ; 004af800
    JNZ 0x004af7e2                      ; 004af802
        ;   XREF to: 004af7e2 (CONDITIONAL_JUMP)  ; LAB_004af7e2
    MOV EAX,ECX                         ; 004af804
    MOV byte ptr [ECX + 0x144],0x0      ; 004af806
    LEA EDX,[ECX + 0x400]               ; 004af80d
    XOR ESI,ESI                         ; 004af813
    ADD EAX,0x4                         ; 004af815
        ;   Label: LAB_004af815
    MOV dword ptr [EAX + 0x21e4],ESI    ; 004af818
    MOV dword ptr [EAX + 0x35e4],ESI    ; 004af81e
    MOV dword ptr [EAX + 0x39e4],ESI    ; 004af824
    MOV dword ptr [EAX + 0x3de4],ESI    ; 004af82a
    MOV dword ptr [EAX + 0x1de4],ESI    ; 004af830
    CMP EAX,EDX                         ; 004af836
    JNZ 0x004af815                      ; 004af838
        ;   XREF to: 004af815 (CONDITIONAL_JUMP)  ; LAB_004af815
    MOV dword ptr [ECX + 0x41ec],0x0    ; 004af83a
    MOV dword ptr [ECX + 0x41f0],0x0    ; 004af844
    MOV dword ptr [ECX + 0x41f4],0x1    ; 004af84e
    MOV dword ptr [ECX + 0x41f8],0x2    ; 004af858
    MOV dword ptr [ECX + 0x3668],0x8    ; 004af862
    MOV dword ptr [ECX + 0x41fc],0x2    ; 004af86c
    MOV dword ptr [ECX + 0x4200],0x1    ; 004af876
    MOV dword ptr [ECX + 0x4204],0x0    ; 004af880
    MOV dword ptr [ECX + 0x1de4],0x0    ; 004af88a
    MOV dword ptr [ECX + 0x420c],0x0    ; 004af894
    MOV dword ptr [ECX + 0x4210],0x0    ; 004af89e
    MOV dword ptr [ECX + 0x4214],0x0    ; 004af8a8
    MOV dword ptr [ECX + 0x1dcc],0x0    ; 004af8b2
    MOV dword ptr [ECX + 0x1dd4],0x0    ; 004af8bc
    MOV dword ptr [ECX + 0x1dd8],0x0    ; 004af8c6
    MOV dword ptr [ECX + 0x1ddc],0x0    ; 004af8d0
    MOV dword ptr [ECX + 0x41e8],0x0    ; 004af8da
    POP ESI                             ; 004af8e4
    RET                                 ; 004af8e5

