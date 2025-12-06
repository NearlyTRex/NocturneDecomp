; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_gabriela.cpp_FUN_004d5f70()
;
;
; XREF[1]:
;   core_gabriela.cpp_FUN_004d2ea0 at 004d3647
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004d5f70
        ;   Label: core_gabriela.cpp_FUN_004d5f70
    TEST byte ptr [EDX + 0x1fbd4],0x2   ; 004d5f74
    JZ 0x004d5faa                       ; 004d5f7b | LAB_004d5faa
        ;   XREF to: 004d5faa (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x1fbdc]       ; 004d5f7d
    FLD1                                ; 004d5f83
    FCOMPP                              ; 004d5f85
    FNSTSW AX                           ; 004d5f87
    SAHF                                ; 004d5f89
    JA 0x004d5faa                       ; 004d5f8a | LAB_004d5faa
        ;   XREF to: 004d5faa (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x1fc10]       ; 004d5f8c
    FLD1                                ; 004d5f92
    FCOMPP                              ; 004d5f94
    FNSTSW AX                           ; 004d5f96
    SAHF                                ; 004d5f98
    JA 0x004d5faa                       ; 004d5f99 | LAB_004d5faa
        ;   XREF to: 004d5faa (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x1fc0c]       ; 004d5f9b
    FLDZ                                ; 004d5fa1
    FCOMPP                              ; 004d5fa3
    FNSTSW AX                           ; 004d5fa5
    SAHF                                ; 004d5fa7
    JNC 0x004d5fad                      ; 004d5fa8 | LAB_004d5fad
        ;   XREF to: 004d5fad (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 004d5faa
        ;   Label: LAB_004d5faa
    RET                                 ; 004d5fac
        ;   Label: LAB_004d5fac
    LEA EAX,[EDX + 0x1f738]             ; 004d5fad
        ;   Label: LAB_004d5fad
    MOV EAX,dword ptr [EAX + 0x330]     ; 004d5fb3
    PUSH EAX                            ; 004d5fb9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004d5fba
    CALL dword ptr [EDX + 0xfc]         ; 004d5fc0
    ADD ESP,0x4                         ; 004d5fc6
    TEST EAX,EAX                        ; 004d5fc9
    JZ 0x004d5fac                       ; 004d5fcb | LAB_004d5fac
        ;   XREF to: 004d5fac (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 004d5fcd
    RET                                 ; 004d5fd2

