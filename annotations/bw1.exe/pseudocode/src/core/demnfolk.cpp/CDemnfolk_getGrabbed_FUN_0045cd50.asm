; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_demnfolk_cpp_CDemnfolk_getGrabbed_FUN_0045cd50(CDemnfolk *this_ptr,CDemonActor *grabber,int grab_type)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   grabber
; int              Stack[0xc]:4   grab_type
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045cd50
        ;   Label: core_demnfolk.cpp_CDemnfolk_getGrabbed_FUN_0045cd50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045cd51
    CMP dword ptr [ESP + 0x10],0x1      ; 0045cd55
    JNZ 0x0045cd81                      ; 0045cd5a
        ;   XREF to: 0045cd81 (CONDITIONAL_JUMP)  ; LAB_0045cd81
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0045cd5c
    TEST ECX,ECX                        ; 0045cd62
    JNZ 0x0045cd85                      ; 0045cd64
        ;   XREF to: 0045cd85 (CONDITIONAL_JUMP)  ; LAB_0045cd85
    MOV EAX,dword ptr [ESP + 0xc]       ; 0045cd66
        ;   Label: LAB_0045cd66
    MOV dword ptr [EBX + 0x26fc],EAX    ; 0045cd6a
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045cd70
    MOV dword ptr [EBX + 0x2700],EAX    ; 0045cd74
    MOV EAX,0x1                         ; 0045cd7a
    POP EBX                             ; 0045cd7f
    RET                                 ; 0045cd80
    XOR EAX,EAX                         ; 0045cd81
        ;   Label: LAB_0045cd81
    POP EBX                             ; 0045cd83
    RET                                 ; 0045cd84
    PUSH ECX                            ; 0045cd85
        ;   Label: LAB_0045cd85
    MOV EDX,dword ptr [ECX + 0x154]     ; 0045cd86
    CALL dword ptr [EDX + 0xf4]         ; 0045cd8c
    ADD ESP,0x4                         ; 0045cd92
    CMP EAX,EBX                         ; 0045cd95
    JNZ 0x0045cd66                      ; 0045cd97
        ;   XREF to: 0045cd66 (CONDITIONAL_JUMP)  ; LAB_0045cd66
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045cd99
    PUSH EAX                            ; 0045cd9f
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045cda0
    CALL dword ptr [EDX + 0xf0]         ; 0045cda6
    ADD ESP,0x4                         ; 0045cdac
    JMP 0x0045cd66                      ; 0045cdaf
        ;   XREF to: 0045cd66 (UNCONDITIONAL_JUMP)  ; LAB_0045cd66

