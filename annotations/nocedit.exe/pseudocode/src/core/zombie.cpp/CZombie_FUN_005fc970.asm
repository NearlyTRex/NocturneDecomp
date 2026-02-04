; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_zombie_cpp_CZombie_FUN_005fc970(CZombie *this_ptr)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fc970
        ;   Label: core_zombie.cpp_CZombie_FUN_005fc970
    MOV EBX,dword ptr [ESP + 0x8]       ; 005fc971
    CMP dword ptr [ESP + 0x10],0x1      ; 005fc975
    JNZ 0x005fc9a1                      ; 005fc97a
        ;   XREF to: 005fc9a1 (CONDITIONAL_JUMP)  ; LAB_005fc9a1
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005fc97c
    TEST ECX,ECX                        ; 005fc982
    JNZ 0x005fc9a5                      ; 005fc984
        ;   XREF to: 005fc9a5 (CONDITIONAL_JUMP)  ; LAB_005fc9a5
    MOV EAX,dword ptr [ESP + 0xc]       ; 005fc986
        ;   Label: LAB_005fc986
    MOV dword ptr [EBX + 0x2598],EAX    ; 005fc98a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005fc990
    MOV dword ptr [EBX + 0x259c],EAX    ; 005fc994
    MOV EAX,0x1                         ; 005fc99a
    POP EBX                             ; 005fc99f
    RET                                 ; 005fc9a0
    XOR EAX,EAX                         ; 005fc9a1
        ;   Label: LAB_005fc9a1
    POP EBX                             ; 005fc9a3
    RET                                 ; 005fc9a4
    PUSH ECX                            ; 005fc9a5
        ;   Label: LAB_005fc9a5
    MOV EDX,dword ptr [ECX + 0x154]     ; 005fc9a6
    CALL dword ptr [EDX + 0x108]        ; 005fc9ac
    ADD ESP,0x4                         ; 005fc9b2
    CMP EAX,EBX                         ; 005fc9b5
    JNZ 0x005fc986                      ; 005fc9b7
        ;   XREF to: 005fc986 (CONDITIONAL_JUMP)  ; LAB_005fc986
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005fc9b9
    PUSH EAX                            ; 005fc9bf
    MOV EDX,dword ptr [EAX + 0x154]     ; 005fc9c0
    CALL dword ptr [EDX + 0x104]        ; 005fc9c6
    ADD ESP,0x4                         ; 005fc9cc
    JMP 0x005fc986                      ; 005fc9cf
        ;   XREF to: 005fc986 (UNCONDITIONAL_JUMP)  ; LAB_005fc986

