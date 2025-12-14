; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gore.cpp_FUN_004edb40()
;
;
; XREF[1]:
;   core_gore.cpp_FUN_004ec290 at 004ec2b4
;
; Called Functions:
;   core_gore.cpp_FUN_004ec2f0
;   core_gore.cpp_FUN_004edaf0
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0xc],0x2       ; 004edb40
        ;   Label: core_gore.cpp_FUN_004edb40
    JNZ 0x004edb48                      ; 004edb45
        ;   XREF to: 004edb48 (CONDITIONAL_JUMP)  ; LAB_004edb48
    RET                                 ; 004edb47
    PUSH ESI                            ; 004edb48
        ;   Label: LAB_004edb48
    PUSH EBX                            ; 004edb49
    MOV ECX,dword ptr [ESP + 0xc]       ; 004edb4a
    PUSH ECX                            ; 004edb4e
    CALL core_gore.cpp_FUN_004edaf0     ; 004edb4f
        ;   XREF to: 004edaf0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004edaf0()
    ADD ESP,0x4                         ; 004edb54
    MOV EBX,dword ptr [ESP + 0x14]      ; 004edb57
    PUSH EBX                            ; 004edb5b
    MOV ESI,dword ptr [ESP + 0x14]      ; 004edb5c
    PUSH ESI                            ; 004edb60
    PUSH EAX                            ; 004edb61
    CALL core_gore.cpp_FUN_004ec2f0     ; 004edb62
        ;   XREF to: 004ec2f0 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_FUN_004ec2f0()
    ADD ESP,0xc                         ; 004edb67
    POP EBX                             ; 004edb6a
    POP ESI                             ; 004edb6b
    RET                                 ; 004edb6c

