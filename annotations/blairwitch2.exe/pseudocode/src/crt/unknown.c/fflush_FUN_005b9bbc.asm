; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_unknown_c_fflush_FUN_005b9bbc(_FILE *stream)
;
; Parameters:
; _FILE *          Stack[0x4]:4   stream
;
; XREF[1]:
;   engine_dosio.cpp_reopenFileStream_FUN_00460d30 at 00460d48
;
; Called Functions:
;   crt_unknown.c_FUN_005c0b3c
;   crt_unknown.c_FUN_005c0b85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9bbc
        ;   Label: crt_unknown.c_fflush_FUN_005b9bbc
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b9bbd
    MOV EAX,dword ptr [EBX]             ; 005b9bc1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b9bc3
    ADD EAX,EBX                         ; 005b9bc6
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b9bc8
    TEST EDX,EDX                        ; 005b9bcb
    JZ 0x005b9bde                       ; 005b9bcd
        ;   XREF to: 005b9bde (CONDITIONAL_JUMP)  ; LAB_005b9bde
    PUSH EDX                            ; 005b9bcf
    CALL crt_unknown.c_FUN_005c0b3c     ; 005b9bd0
        ;   XREF to: 005c0b3c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b3c()
    ADD ESP,0x4                         ; 005b9bd5
    TEST EAX,EAX                        ; 005b9bd8
    JZ 0x005b9beb                       ; 005b9bda
        ;   XREF to: 005b9beb (CONDITIONAL_JUMP)  ; LAB_005b9beb
    POP EBX                             ; 005b9bdc
    RET                                 ; 005b9bdd
    PUSH 0x2                            ; 005b9bde
        ;   Label: LAB_005b9bde
    PUSH EAX                            ; 005b9be0
    CALL crt_unknown.c_FUN_005c0b85     ; 005b9be1
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
        ;   Label: LAB_005b9be1
    ADD ESP,0x8                         ; 005b9be6
    POP EBX                             ; 005b9be9
    RET                                 ; 005b9bea
    MOV EAX,dword ptr [EBX]             ; 005b9beb
        ;   Label: LAB_005b9beb
    MOV EDX,dword ptr [EAX + 0x4]       ; 005b9bed
    PUSH 0x2                            ; 005b9bf0
    ADD EBX,EDX                         ; 005b9bf2
    PUSH EBX                            ; 005b9bf4
    JMP 0x005b9be1                      ; 005b9bf5
        ;   XREF to: 005b9be1 (UNCONDITIONAL_JUMP)  ; LAB_005b9be1

