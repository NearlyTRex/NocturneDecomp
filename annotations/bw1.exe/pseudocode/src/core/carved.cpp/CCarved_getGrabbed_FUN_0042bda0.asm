; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_carved_cpp_CCarved_getGrabbed_FUN_0042bda0(CCarved *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042bda0
        ;   Label: core_carved.cpp_CCarved_getGrabbed_FUN_0042bda0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042bda1
    CMP dword ptr [ESP + 0x10],0x1      ; 0042bda5
    JNZ 0x0042bdd1                      ; 0042bdaa
        ;   XREF to: 0042bdd1 (CONDITIONAL_JUMP)  ; LAB_0042bdd1
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0042bdac
    TEST ECX,ECX                        ; 0042bdb2
    JNZ 0x0042bdd5                      ; 0042bdb4
        ;   XREF to: 0042bdd5 (CONDITIONAL_JUMP)  ; LAB_0042bdd5
    MOV EAX,dword ptr [ESP + 0xc]       ; 0042bdb6
        ;   Label: LAB_0042bdb6
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0042bdba
    MOV EAX,dword ptr [ESP + 0x10]      ; 0042bdc0
    MOV dword ptr [EBX + 0x2700],EAX    ; 0042bdc4
    MOV EAX,0x1                         ; 0042bdca
    POP EBX                             ; 0042bdcf
    RET                                 ; 0042bdd0
    XOR EAX,EAX                         ; 0042bdd1
        ;   Label: LAB_0042bdd1
    POP EBX                             ; 0042bdd3
    RET                                 ; 0042bdd4
    PUSH ECX                            ; 0042bdd5
        ;   Label: LAB_0042bdd5
    MOV EDX,dword ptr [ECX + 0x154]     ; 0042bdd6
    CALL dword ptr [EDX + 0xf4]         ; 0042bddc
    ADD ESP,0x4                         ; 0042bde2
    CMP EAX,EBX                         ; 0042bde5
    JNZ 0x0042bdb6                      ; 0042bde7
        ;   XREF to: 0042bdb6 (CONDITIONAL_JUMP)  ; LAB_0042bdb6
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0042bde9
    PUSH EAX                            ; 0042bdef
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042bdf0
    CALL dword ptr [EDX + 0xf0]         ; 0042bdf6
    ADD ESP,0x4                         ; 0042bdfc
    JMP 0x0042bdb6                      ; 0042bdff
        ;   XREF to: 0042bdb6 (UNCONDITIONAL_JUMP)  ; LAB_0042bdb6

