; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_FUN_004c9dd0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004c65f0 at 004c6e3a
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c9dd0
        ;   Label: core_gabriela.cpp_FUN_004c9dd0
    TEST byte ptr [EDX + 0x1ffac],0x2   ; 004c9dd4
    JZ 0x004c9e0a                       ; 004c9ddb
        ;   XREF to: 004c9e0a (CONDITIONAL_JUMP)  ; LAB_004c9e0a
    FLD float ptr [EDX + 0x1ffb4]       ; 004c9ddd
    FLD1                                ; 004c9de3
    FCOMPP                              ; 004c9de5
    FNSTSW AX                           ; 004c9de7
    SAHF                                ; 004c9de9
    JA 0x004c9e0a                       ; 004c9dea
        ;   XREF to: 004c9e0a (CONDITIONAL_JUMP)  ; LAB_004c9e0a
    FLD float ptr [EDX + 0x1ffe8]       ; 004c9dec
    FLD1                                ; 004c9df2
    FCOMPP                              ; 004c9df4
    FNSTSW AX                           ; 004c9df6
    SAHF                                ; 004c9df8
    JA 0x004c9e0a                       ; 004c9df9
        ;   XREF to: 004c9e0a (CONDITIONAL_JUMP)  ; LAB_004c9e0a
    FLD float ptr [EDX + 0x1ffe4]       ; 004c9dfb
    FLDZ                                ; 004c9e01
    FCOMPP                              ; 004c9e03
    FNSTSW AX                           ; 004c9e05
    SAHF                                ; 004c9e07
    JNC 0x004c9e0d                      ; 004c9e08
        ;   XREF to: 004c9e0d (CONDITIONAL_JUMP)  ; LAB_004c9e0d
    XOR EAX,EAX                         ; 004c9e0a
        ;   Label: LAB_004c9e0a
    RET                                 ; 004c9e0c
        ;   Label: LAB_004c9e0c
    LEA EAX,[EDX + 0x1fae8]             ; 004c9e0d
        ;   Label: LAB_004c9e0d
    MOV EAX,dword ptr [EAX + 0x338]     ; 004c9e13
    PUSH EAX                            ; 004c9e19
    MOV EDX,dword ptr [EAX + 0x154]     ; 004c9e1a
    CALL dword ptr [EDX + 0xe8]         ; 004c9e20
    ADD ESP,0x4                         ; 004c9e26
    TEST EAX,EAX                        ; 004c9e29
    JZ 0x004c9e0c                       ; 004c9e2b
        ;   XREF to: 004c9e0c (CONDITIONAL_JUMP)  ; LAB_004c9e0c
    MOV EAX,0x1                         ; 004c9e2d
    RET                                 ; 004c9e32

