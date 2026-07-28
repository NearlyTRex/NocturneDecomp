; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gabriela_cpp_CGabriella_canFireWeapon_FUN_00498af0(CGabriella *this_ptr)
;
; Parameters:
; CGabriella *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gabriela.cpp_FUN_00495a20 at 004961c7
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00498af0
        ;   Label: core_gabriela.cpp_CGabriella_canFireWeapon_FUN_00498af0
    TEST byte ptr [EDX + 0x1fa3c],0x2   ; 00498af4
    JZ 0x00498b2a                       ; 00498afb
        ;   XREF to: 00498b2a (CONDITIONAL_JUMP)  ; LAB_00498b2a
    FLD float ptr [EDX + 0x1fa44]       ; 00498afd
    FLD1                                ; 00498b03
    FCOMPP                              ; 00498b05
    FNSTSW AX                           ; 00498b07
    SAHF                                ; 00498b09
    JA 0x00498b2a                       ; 00498b0a
        ;   XREF to: 00498b2a (CONDITIONAL_JUMP)  ; LAB_00498b2a
    FLD float ptr [EDX + 0x1fa78]       ; 00498b0c
    FLD1                                ; 00498b12
    FCOMPP                              ; 00498b14
    FNSTSW AX                           ; 00498b16
    SAHF                                ; 00498b18
    JA 0x00498b2a                       ; 00498b19
        ;   XREF to: 00498b2a (CONDITIONAL_JUMP)  ; LAB_00498b2a
    FLD float ptr [EDX + 0x1fa74]       ; 00498b1b
    FLDZ                                ; 00498b21
    FCOMPP                              ; 00498b23
    FNSTSW AX                           ; 00498b25
    SAHF                                ; 00498b27
    JNC 0x00498b2d                      ; 00498b28
        ;   XREF to: 00498b2d (CONDITIONAL_JUMP)  ; LAB_00498b2d
    XOR EAX,EAX                         ; 00498b2a
        ;   Label: LAB_00498b2a
    RET                                 ; 00498b2c
        ;   Label: LAB_00498b2c
    LEA EAX,[EDX + 0x1f5a0]             ; 00498b2d
        ;   Label: LAB_00498b2d
    MOV EAX,dword ptr [EAX + 0x330]     ; 00498b33
    PUSH EAX                            ; 00498b39
    MOV EDX,dword ptr [EAX + 0x14c]     ; 00498b3a
    CALL dword ptr [EDX + 0xe0]         ; 00498b40
    ADD ESP,0x4                         ; 00498b46
    TEST EAX,EAX                        ; 00498b49
    JZ 0x00498b2c                       ; 00498b4b
        ;   XREF to: 00498b2c (CONDITIONAL_JUMP)  ; LAB_00498b2c
    MOV EAX,0x1                         ; 00498b4d
    RET                                 ; 00498b52

