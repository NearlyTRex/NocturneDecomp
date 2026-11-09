; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hero_cpp_FUN_004d3af0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_prye.cpp_FUN_00518cd0 at 0051a88f
;   unkafter_prye.cpp_FUN_00523e50 at 00523e92
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3af0
        ;   Label: core_hero.cpp_FUN_004d3af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d3af1
    MOV EDX,dword ptr [EBX + 0x20ba8]   ; 004d3af5
    TEST EDX,EDX                        ; 004d3afb
    JNZ 0x004d3b01                      ; 004d3afd
        ;   XREF to: 004d3b01 (CONDITIONAL_JUMP)  ; LAB_004d3b01
    POP EBX                             ; 004d3aff
    RET                                 ; 004d3b00
    PUSH EBX                            ; 004d3b01
        ;   Label: LAB_004d3b01
    MOV EAX,EDX                         ; 004d3b02
    PUSH EAX                            ; 004d3b04
    MOV EDX,dword ptr [EDX + 0x154]     ; 004d3b05
    CALL dword ptr [EDX + 0xa4]         ; 004d3b0b
    ADD ESP,0x8                         ; 004d3b11
    MOV dword ptr [EBX + 0x20ba8],0x0   ; 004d3b14
    POP EBX                             ; 004d3b1e
    RET                                 ; 004d3b1f

