; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_font_cpp_FUN_004c0b80(CBitFont *this_ptr)
;
; Parameters:
; CBitFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_font.cpp_FUN_004c0b40 at 004c0b46
;   engine_font.cpp_FUN_004c1830 at 004c1871
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c0b80
        ;   Label: engine_font.cpp_FUN_004c0b80
    MOV ECX,dword ptr [ESP + 0x8]       ; 004c0b81
    MOV EAX,ECX                         ; 004c0b85
    MOV EDX,ECX                         ; 004c0b87
    MOV dword ptr [ECX],0x0             ; 004c0b89
    LEA ESI,[ECX + 0x10]                ; 004c0b8f
    ADD EAX,0x4                         ; 004c0b92
        ;   Label: LAB_004c0b92
    MOV byte ptr [EDX + 0x4],0x0        ; 004c0b95
    MOV dword ptr [EAX + 0x190],0x0     ; 004c0b99
    ADD EDX,0x50                        ; 004c0ba3
    MOV dword ptr [EAX + 0x1a0],0x0     ; 004c0ba6
    CMP EAX,ESI                         ; 004c0bb0
    JNZ 0x004c0b92                      ; 004c0bb2
        ;   XREF to: 004c0b92 (CONDITIONAL_JUMP)  ; LAB_004c0b92
    MOV EAX,ECX                         ; 004c0bb4
    MOV byte ptr [ECX + 0x144],0x0      ; 004c0bb6
    LEA EDX,[ECX + 0x400]               ; 004c0bbd
    XOR ESI,ESI                         ; 004c0bc3
    ADD EAX,0x4                         ; 004c0bc5
        ;   Label: LAB_004c0bc5
    MOV dword ptr [EAX + 0x21e4],ESI    ; 004c0bc8
    MOV dword ptr [EAX + 0x35e4],ESI    ; 004c0bce
    MOV dword ptr [EAX + 0x39e4],ESI    ; 004c0bd4
    MOV dword ptr [EAX + 0x3de4],ESI    ; 004c0bda
    MOV dword ptr [EAX + 0x1de4],ESI    ; 004c0be0
    CMP EAX,EDX                         ; 004c0be6
    JNZ 0x004c0bc5                      ; 004c0be8
        ;   XREF to: 004c0bc5 (CONDITIONAL_JUMP)  ; LAB_004c0bc5
    MOV dword ptr [ECX + 0x41ec],0x0    ; 004c0bea
    MOV dword ptr [ECX + 0x41f0],0x0    ; 004c0bf4
    MOV dword ptr [ECX + 0x41f4],0x1    ; 004c0bfe
    MOV dword ptr [ECX + 0x41f8],0x2    ; 004c0c08
    MOV dword ptr [ECX + 0x3668],0x8    ; 004c0c12
    MOV dword ptr [ECX + 0x41fc],0x2    ; 004c0c1c
    MOV dword ptr [ECX + 0x4200],0x1    ; 004c0c26
    MOV dword ptr [ECX + 0x4204],0x0    ; 004c0c30
    MOV dword ptr [ECX + 0x1de4],0x0    ; 004c0c3a
    MOV dword ptr [ECX + 0x420c],0x0    ; 004c0c44
    MOV dword ptr [ECX + 0x4210],0x0    ; 004c0c4e
    MOV dword ptr [ECX + 0x4214],0x0    ; 004c0c58
    MOV dword ptr [ECX + 0x1dcc],0x0    ; 004c0c62
    MOV dword ptr [ECX + 0x1dd4],0x0    ; 004c0c6c
    MOV dword ptr [ECX + 0x1dd8],0x0    ; 004c0c76
    MOV dword ptr [ECX + 0x1ddc],0x0    ; 004c0c80
    MOV dword ptr [ECX + 0x41e8],0x0    ; 004c0c8a
    POP ESI                             ; 004c0c94
    RET                                 ; 004c0c95

