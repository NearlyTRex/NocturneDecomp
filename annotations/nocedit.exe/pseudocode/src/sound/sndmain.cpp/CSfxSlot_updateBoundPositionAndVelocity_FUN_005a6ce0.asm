; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 at 005a71c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6ce0
        ;   Label: sound_sndmain.cpp_CSfxSlot_updateBoundPositionAndVelocity_FUN_005a6ce0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a6ce1
    MOV EDX,dword ptr [EAX + 0x20]      ; 005a6ce5
    CMP EDX,0x1                         ; 005a6ce8
    JZ 0x005a6d21                       ; 005a6ceb
        ;   XREF to: 005a6d21 (CONDITIONAL_JUMP)  ; LAB_005a6d21
    CMP EDX,0x2                         ; 005a6ced
    JNZ 0x005a6d12                      ; 005a6cf0
        ;   XREF to: 005a6d12 (CONDITIONAL_JUMP)  ; LAB_005a6d12
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005a6cf2
    FLD double ptr [EDX]                ; 005a6cf5
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005a6cf7
    FSTP double ptr [EAX + 0x4]         ; 005a6cfa
    FLD double ptr [EDX + 0x8]          ; 005a6cfd
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005a6d00
    FSTP double ptr [EAX + 0xc]         ; 005a6d03
    MOV ECX,dword ptr [EDX + 0x10]      ; 005a6d06
    MOV dword ptr [EAX + 0x14],ECX      ; 005a6d09
    MOV ECX,dword ptr [EDX + 0x14]      ; 005a6d0c
    MOV dword ptr [EAX + 0x18],ECX      ; 005a6d0f
    MOV EBX,dword ptr [EAX + 0x40]      ; 005a6d12
        ;   Label: LAB_005a6d12
    CMP EBX,0x1                         ; 005a6d15
    JZ 0x005a6d3d                       ; 005a6d18
        ;   XREF to: 005a6d3d (CONDITIONAL_JUMP)  ; LAB_005a6d3d
    CMP EBX,0x2                         ; 005a6d1a
    JZ 0x005a6d59                       ; 005a6d1d
        ;   XREF to: 005a6d59 (CONDITIONAL_JUMP)  ; LAB_005a6d59
    POP EBX                             ; 005a6d1f
    RET                                 ; 005a6d20
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005a6d21
        ;   Label: LAB_005a6d21
    FLD float ptr [EDX]                 ; 005a6d24
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005a6d26
    FSTP double ptr [EAX + 0x4]         ; 005a6d29
    FLD float ptr [EDX + 0x4]           ; 005a6d2c
    MOV EDX,dword ptr [EAX + 0x1c]      ; 005a6d2f
    FSTP double ptr [EAX + 0xc]         ; 005a6d32
    FLD float ptr [EDX + 0x8]           ; 005a6d35
    FSTP double ptr [EAX + 0x14]        ; 005a6d38
    JMP 0x005a6d12                      ; 005a6d3b
        ;   XREF to: 005a6d12 (UNCONDITIONAL_JUMP)  ; LAB_005a6d12
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a6d3d
        ;   Label: LAB_005a6d3d
    FLD float ptr [EDX]                 ; 005a6d40
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a6d42
    FSTP double ptr [EAX + 0x24]        ; 005a6d45
    FLD float ptr [EDX + 0x4]           ; 005a6d48
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a6d4b
    FSTP double ptr [EAX + 0x2c]        ; 005a6d4e
    FLD float ptr [EDX + 0x8]           ; 005a6d51
    FSTP double ptr [EAX + 0x34]        ; 005a6d54
    POP EBX                             ; 005a6d57
    RET                                 ; 005a6d58
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a6d59
        ;   Label: LAB_005a6d59
    FLD double ptr [EDX]                ; 005a6d5c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a6d5e
    FSTP double ptr [EAX + 0x24]        ; 005a6d61
    FLD double ptr [EDX + 0x8]          ; 005a6d64
    MOV EDX,dword ptr [EAX + 0x3c]      ; 005a6d67
    FSTP double ptr [EAX + 0x2c]        ; 005a6d6a
    MOV ECX,dword ptr [EDX + 0x10]      ; 005a6d6d
    MOV dword ptr [EAX + 0x34],ECX      ; 005a6d70
    MOV ECX,dword ptr [EDX + 0x14]      ; 005a6d73
    MOV dword ptr [EAX + 0x38],ECX      ; 005a6d76
    POP EBX                             ; 005a6d79
    RET                                 ; 005a6d7a

