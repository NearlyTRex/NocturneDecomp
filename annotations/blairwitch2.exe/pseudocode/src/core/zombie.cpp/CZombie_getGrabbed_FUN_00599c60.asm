; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_zombie_cpp_CZombie_getGrabbed_FUN_00599c60(CZombie *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CZombie *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00599c60
        ;   Label: core_zombie.cpp_CZombie_getGrabbed_FUN_00599c60
    MOV EBX,dword ptr [ESP + 0x8]       ; 00599c61
    CMP dword ptr [ESP + 0x10],0x1      ; 00599c65
    JNZ 0x00599c91                      ; 00599c6a
        ;   XREF to: 00599c91 (CONDITIONAL_JUMP)  ; LAB_00599c91
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 00599c6c
    TEST ECX,ECX                        ; 00599c72
    JNZ 0x00599c95                      ; 00599c74
        ;   XREF to: 00599c95 (CONDITIONAL_JUMP)  ; LAB_00599c95
    MOV EAX,dword ptr [ESP + 0xc]       ; 00599c76
        ;   Label: LAB_00599c76
    MOV dword ptr [EBX + 0x276c],EAX    ; 00599c7a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00599c80
    MOV dword ptr [EBX + 0x2770],EAX    ; 00599c84
    MOV EAX,0x1                         ; 00599c8a
    POP EBX                             ; 00599c8f
    RET                                 ; 00599c90
    XOR EAX,EAX                         ; 00599c91
        ;   Label: LAB_00599c91
    POP EBX                             ; 00599c93
    RET                                 ; 00599c94
    PUSH ECX                            ; 00599c95
        ;   Label: LAB_00599c95
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 00599c96
    CALL dword ptr [EDX + 0xfc]         ; 00599c9c
    ADD ESP,0x4                         ; 00599ca2
    CMP EAX,EBX                         ; 00599ca5
    JNZ 0x00599c76                      ; 00599ca7
        ;   XREF to: 00599c76 (CONDITIONAL_JUMP)  ; LAB_00599c76
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00599ca9
    PUSH EAX                            ; 00599caf
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00599cb0
    CALL dword ptr [EDX + 0xf8]         ; 00599cb6
    ADD ESP,0x4                         ; 00599cbc
    JMP 0x00599c76                      ; 00599cbf
        ;   XREF to: 00599c76 (UNCONDITIONAL_JUMP)  ; LAB_00599c76

