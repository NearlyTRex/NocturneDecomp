; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CTrail_FUN_004c5df0(CTrail *this_ptr)
;
; Parameters:
; CTrail *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_CFireEffect_FUN_004c9060 at 004c908f
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c5df0
        ;   Label: core_fire.cpp_CTrail_FUN_004c5df0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004c5df4
    CMP EAX,EDX                         ; 004c5df8
    JNZ 0x004c5e23                      ; 004c5dfa
        ;   XREF to: 004c5e23 (CONDITIONAL_JUMP)  ; LAB_004c5e23
    MOV EDX,dword ptr [ESP + 0xc]       ; 004c5dfc
        ;   Label: LAB_004c5dfc
    MOV dword ptr [EAX + 0xc],EDX       ; 004c5e00
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c5e03
    MOV dword ptr [EAX + 0x14],EDX      ; 004c5e07
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c5e0a
    MOV dword ptr [EAX + 0x10],EDX      ; 004c5e0e
    MOV dword ptr [EAX + 0x18],EDX      ; 004c5e11
    MOV EDX,dword ptr [ESP + 0x10]      ; 004c5e14
    MOV dword ptr [EAX + 0x1c],EDX      ; 004c5e18
    MOV EDX,dword ptr [ESP + 0x18]      ; 004c5e1b
    MOV dword ptr [EAX + 0x20],EDX      ; 004c5e1f
    RET                                 ; 004c5e22
    MOV ECX,dword ptr [EDX]             ; 004c5e23
        ;   Label: LAB_004c5e23
    MOV dword ptr [EAX],ECX             ; 004c5e25
    MOV ECX,dword ptr [EDX + 0x4]       ; 004c5e27
    MOV dword ptr [EAX + 0x4],ECX       ; 004c5e2a
    MOV ECX,dword ptr [EDX + 0x8]       ; 004c5e2d
    MOV dword ptr [EAX + 0x8],ECX       ; 004c5e30
    JMP 0x004c5dfc                      ; 004c5e33
        ;   XREF to: 004c5dfc (UNCONDITIONAL_JUMP)  ; LAB_004c5dfc

