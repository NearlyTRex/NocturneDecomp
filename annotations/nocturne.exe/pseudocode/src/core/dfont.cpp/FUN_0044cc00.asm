; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dfont_cpp_FUN_0044cc00(void)
;
;
; XREF[1]:
;   core_main.c_finalizeGameSystems_FUN_004c90e0 at 004c9375
;
; Referenced Globals:
;   CBitFont* g_CBitFont_PTR_014b98f8
;   CBitFont* g_CBitFont_PTR_014b98fc
;   CBitFont* g_CBitFont_PTR_014b9900
;   CBitFont* g_CBitFont_PTR_014b9904
;   CBitFont* g_CBitFont_PTR_014b9908
;   CBitFont* g_CBitFont_PTR_014b990c
;   undefined4 DAT_014b9910
;   undefined4 DAT_014b9914
;   undefined4 DAT_014b9918
;   undefined4 DAT_014b991c
;   undefined4 DAT_01bcd070
;   undefined4 DAT_01d16810
;
; Called Functions:
;   crt_memory.c_operator_delete_FUN_00564494
;   engine_font.cpp_CBitFont_FUN_0048fe30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044cc00
        ;   Label: core_dfont.cpp_FUN_0044cc00
    PUSH ESI                            ; 0044cc01
    PUSH EDI                            ; 0044cc02
    PUSH EBP                            ; 0044cc03
    MOV EDX,dword ptr [0x014b98f8]      ; 0044cc04 | g_CBitFont_PTR_014b98f8
    TEST EDX,EDX                        ; 0044cc0a
    JNZ 0x0044cd50                      ; 0044cc0c
        ;   XREF to: 0044cd50 (CONDITIONAL_JUMP)  ; LAB_0044cd50
    XOR EBX,EBX                         ; 0044cc12
        ;   Label: LAB_0044cc12
    MOV ESI,dword ptr [0x014b98fc]      ; 0044cc14 | g_CBitFont_PTR_014b98fc
    MOV dword ptr [0x014b98f8],EBX      ; 0044cc1a | g_CBitFont_PTR_014b98f8
    TEST ESI,ESI                        ; 0044cc20
    JZ 0x0044cc37                       ; 0044cc22
        ;   XREF to: 0044cc37 (CONDITIONAL_JUMP)  ; LAB_0044cc37
    PUSH EBX                            ; 0044cc24
    PUSH ESI                            ; 0044cc25
    CALL engine_font.cpp_CBitFont_FUN_0048fe30 ; 0044cc26
        ;   XREF to: 0048fe30 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_FUN_0048fe30(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044cc2b
    PUSH EAX                            ; 0044cc2e
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0044cc2f
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0044cc34
    XOR EBP,EBP                         ; 0044cc37
        ;   Label: LAB_0044cc37
    MOV EAX,[0x014b9900]                ; 0044cc39 | g_CBitFont_PTR_014b9900
    MOV dword ptr [0x014b98fc],EBP      ; 0044cc3e | g_CBitFont_PTR_014b98fc
    TEST EAX,EAX                        ; 0044cc44
    JZ 0x0044cc5b                       ; 0044cc46
        ;   XREF to: 0044cc5b (CONDITIONAL_JUMP)  ; LAB_0044cc5b
    PUSH EBP                            ; 0044cc48
    PUSH EAX                            ; 0044cc49
    CALL engine_font.cpp_CBitFont_FUN_0048fe30 ; 0044cc4a
        ;   XREF to: 0048fe30 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_FUN_0048fe30(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044cc4f
    PUSH EAX                            ; 0044cc52
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0044cc53
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0044cc58
    XOR ECX,ECX                         ; 0044cc5b
        ;   Label: LAB_0044cc5b
    MOV EBX,dword ptr [0x014b9904]      ; 0044cc5d | g_CBitFont_PTR_014b9904
    MOV dword ptr [0x014b9900],ECX      ; 0044cc63 | g_CBitFont_PTR_014b9900
    TEST EBX,EBX                        ; 0044cc69
    JZ 0x0044cc80                       ; 0044cc6b
        ;   XREF to: 0044cc80 (CONDITIONAL_JUMP)  ; LAB_0044cc80
    PUSH ECX                            ; 0044cc6d
    PUSH EBX                            ; 0044cc6e
    CALL engine_font.cpp_CBitFont_FUN_0048fe30 ; 0044cc6f
        ;   XREF to: 0048fe30 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_FUN_0048fe30(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044cc74
    PUSH EAX                            ; 0044cc77
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0044cc78
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0044cc7d
    XOR EDI,EDI                         ; 0044cc80
        ;   Label: LAB_0044cc80
    MOV EBP,dword ptr [0x014b9908]      ; 0044cc82 | g_CBitFont_PTR_014b9908
    MOV dword ptr [0x014b9904],EDI      ; 0044cc88 | g_CBitFont_PTR_014b9904
    TEST EBP,EBP                        ; 0044cc8e
    JZ 0x0044cca5                       ; 0044cc90
        ;   XREF to: 0044cca5 (CONDITIONAL_JUMP)  ; LAB_0044cca5
    PUSH EDI                            ; 0044cc92
    PUSH EBP                            ; 0044cc93
    CALL engine_font.cpp_CBitFont_FUN_0048fe30 ; 0044cc94
        ;   XREF to: 0048fe30 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_FUN_0048fe30(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044cc99
    PUSH EAX                            ; 0044cc9c
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0044cc9d
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0044cca2
    XOR EDX,EDX                         ; 0044cca5
        ;   Label: LAB_0044cca5
    MOV EBX,dword ptr [0x014b990c]      ; 0044cca7 | g_CBitFont_PTR_014b990c
    MOV dword ptr [0x01bcd070],EDX      ; 0044ccad | DAT_01bcd070
    MOV dword ptr [0x014b9908],EDX      ; 0044ccb3 | g_CBitFont_PTR_014b9908
    TEST EBX,EBX                        ; 0044ccb9
    JZ 0x0044ccd0                       ; 0044ccbb
        ;   XREF to: 0044ccd0 (CONDITIONAL_JUMP)  ; LAB_0044ccd0
    PUSH EDX                            ; 0044ccbd
    PUSH EBX                            ; 0044ccbe
    CALL engine_font.cpp_CBitFont_FUN_0048fe30 ; 0044ccbf
        ;   XREF to: 0048fe30 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_FUN_0048fe30(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044ccc4
    PUSH EAX                            ; 0044ccc7
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0044ccc8
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0044cccd
    XOR EDI,EDI                         ; 0044ccd0
        ;   Label: LAB_0044ccd0
    MOV EBP,dword ptr [0x01d16810]      ; 0044ccd2 | DAT_01d16810
    MOV dword ptr [0x014b990c],EDI      ; 0044ccd8 | g_CBitFont_PTR_014b990c
    TEST EBP,EBP                        ; 0044ccde
    JZ 0x0044cd4b                       ; 0044cce0
        ;   XREF to: 0044cd4b (CONDITIONAL_JUMP)  ; LAB_0044cd4b
    MOV EAX,[0x014b9910]                ; 0044cce2 | DAT_014b9910
    TEST EAX,EAX                        ; 0044cce7
    JNZ 0x0044cd69                      ; 0044cce9
        ;   XREF to: 0044cd69 (CONDITIONAL_JUMP)  ; LAB_0044cd69
    XOR EDX,EDX                         ; 0044ccef
        ;   Label: LAB_0044ccef
    MOV ECX,dword ptr [0x014b9914]      ; 0044ccf1 | DAT_014b9914
    MOV dword ptr [0x014b9910],EDX      ; 0044ccf7 | DAT_014b9910
    TEST ECX,ECX                        ; 0044ccfd
    JZ 0x0044cd0b                       ; 0044ccff
        ;   XREF to: 0044cd0b (CONDITIONAL_JUMP)  ; LAB_0044cd0b
    PUSH 0x2                            ; 0044cd01
    MOV EDX,dword ptr [ECX]             ; 0044cd03
    PUSH ECX                            ; 0044cd05
    CALL dword ptr [EDX]                ; 0044cd06
    ADD ESP,0x8                         ; 0044cd08
    XOR EBX,EBX                         ; 0044cd0b
        ;   Label: LAB_0044cd0b
    MOV ESI,dword ptr [0x014b9918]      ; 0044cd0d | DAT_014b9918
    MOV dword ptr [0x014b9914],EBX      ; 0044cd13 | DAT_014b9914
    TEST ESI,ESI                        ; 0044cd19
    JZ 0x0044cd27                       ; 0044cd1b
        ;   XREF to: 0044cd27 (CONDITIONAL_JUMP)  ; LAB_0044cd27
    PUSH 0x2                            ; 0044cd1d
    MOV EDX,dword ptr [ESI]             ; 0044cd1f
    PUSH ESI                            ; 0044cd21
    CALL dword ptr [EDX]                ; 0044cd22
    ADD ESP,0x8                         ; 0044cd24
    XOR EDI,EDI                         ; 0044cd27
        ;   Label: LAB_0044cd27
    MOV EBP,dword ptr [0x014b991c]      ; 0044cd29 | DAT_014b991c
    MOV dword ptr [0x014b9918],EDI      ; 0044cd2f | DAT_014b9918
    TEST EBP,EBP                        ; 0044cd35
    JZ 0x0044cd44                       ; 0044cd37
        ;   XREF to: 0044cd44 (CONDITIONAL_JUMP)  ; LAB_0044cd44
    PUSH 0x2                            ; 0044cd39
    MOV EDX,dword ptr [EBP]             ; 0044cd3b
    PUSH EBP                            ; 0044cd3e
    CALL dword ptr [EDX]                ; 0044cd3f
    ADD ESP,0x8                         ; 0044cd41
    XOR EAX,EAX                         ; 0044cd44
        ;   Label: LAB_0044cd44
    MOV [0x014b991c],EAX                ; 0044cd46 | DAT_014b991c
    POP EBP                             ; 0044cd4b
        ;   Label: LAB_0044cd4b
    POP EDI                             ; 0044cd4c
    POP ESI                             ; 0044cd4d
    POP EBX                             ; 0044cd4e
    RET                                 ; 0044cd4f
    PUSH 0x0                            ; 0044cd50
        ;   Label: LAB_0044cd50
    PUSH EDX                            ; 0044cd52
    CALL engine_font.cpp_CBitFont_FUN_0048fe30 ; 0044cd53
        ;   XREF to: 0048fe30 (UNCONDITIONAL_CALL)  ; CBitFont * engine_font.cpp_CBitFont_FUN_0048fe30(CBitFont * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0044cd58
    PUSH EAX                            ; 0044cd5b
    CALL crt_memory.c_operator_delete_FUN_00564494 ; 0044cd5c
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; void crt_memory.c_operator_delete_FUN_00564494(void * ptr)
    ADD ESP,0x4                         ; 0044cd61
    JMP 0x0044cc12                      ; 0044cd64
        ;   XREF to: 0044cc12 (UNCONDITIONAL_JUMP)  ; LAB_0044cc12
    PUSH 0x2                            ; 0044cd69
        ;   Label: LAB_0044cd69
    MOV EDX,dword ptr [EAX]             ; 0044cd6b
    PUSH EAX                            ; 0044cd6d
    CALL dword ptr [EDX]                ; 0044cd6e
    ADD ESP,0x8                         ; 0044cd70
    JMP 0x0044ccef                      ; 0044cd73
        ;   XREF to: 0044ccef (UNCONDITIONAL_JUMP)  ; LAB_0044ccef

