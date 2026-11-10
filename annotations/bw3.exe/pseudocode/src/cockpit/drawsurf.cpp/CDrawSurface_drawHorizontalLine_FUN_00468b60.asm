; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60(CDrawSurface *this_ptr,int start_x,int y,int end_x)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   end_x
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00468f20 at 00468f3c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005bc2b5
;   TerminatedCString s_Invalid_bitsPerPixel_005bc2cd
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c8
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00468b60
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00468b60
    PUSH ESI                            ; 00468b61
    PUSH EDI                            ; 00468b62
    PUSH EBP                            ; 00468b63
    MOV EDX,dword ptr [ESP + 0x14]      ; 00468b64
    MOV EAX,dword ptr [ESP + 0x18]      ; 00468b68
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00468b6c
    MOV ECX,dword ptr [ESP + 0x20]      ; 00468b70
    MOV ESI,dword ptr [EDX + 0x8]       ; 00468b74
    MOV EDI,dword ptr [EDX + 0xc]       ; 00468b77
    ADD ECX,ESI                         ; 00468b7a
    ADD EAX,ESI                         ; 00468b7c
    ADD EBX,EDI                         ; 00468b7e
    CMP EBX,dword ptr [EDX + 0x14]      ; 00468b80
    JL 0x00468bf0                       ; 00468b83
        ;   XREF to: 00468bf0 (CONDITIONAL_JUMP)  ; LAB_00468bf0
    CMP EBX,dword ptr [EDX + 0x1c]      ; 00468b89
    JG 0x00468bf0                       ; 00468b8c
        ;   XREF to: 00468bf0 (CONDITIONAL_JUMP)  ; LAB_00468bf0
    MOV EBP,dword ptr [EDX + 0x10]      ; 00468b8e
    CMP EAX,EBP                         ; 00468b91
    JGE 0x00468b97                      ; 00468b93
        ;   XREF to: 00468b97 (CONDITIONAL_JUMP)  ; LAB_00468b97
    MOV EAX,EBP                         ; 00468b95
    MOV ESI,dword ptr [EDX + 0x18]      ; 00468b97
        ;   Label: LAB_00468b97
    CMP ECX,ESI                         ; 00468b9a
    JLE 0x00468ba0                      ; 00468b9c
        ;   XREF to: 00468ba0 (CONDITIONAL_JUMP)  ; LAB_00468ba0
    MOV ECX,ESI                         ; 00468b9e
    CMP EAX,ECX                         ; 00468ba0
        ;   Label: LAB_00468ba0
    JG 0x00468bf0                       ; 00468ba2
        ;   XREF to: 00468bf0 (CONDITIONAL_JUMP)  ; LAB_00468bf0
    CMP dword ptr [0x01bdd7c8],0x0      ; 00468ba4 | DAT_01bdd7c8
    JNZ 0x00468bf5                      ; 00468bab
        ;   XREF to: 00468bf5 (CONDITIONAL_JUMP)  ; LAB_00468bf5
    MOV EDX,dword ptr [0x005fba20]      ; 00468bad | DAT_005fba20
    SHL EBX,0x2                         ; 00468bb3
    CMP EDX,0x10                        ; 00468bb6
    JNC 0x00468c4d                      ; 00468bb9
        ;   XREF to: 00468c4d (CONDITIONAL_JUMP)  ; LAB_00468c4d
    CMP EDX,0x8                         ; 00468bbf
    JNZ 0x00468c54                      ; 00468bc2
        ;   XREF to: 00468c54 (CONDITIONAL_JUMP)  ; LAB_00468c54
    SUB ECX,EAX                         ; 00468bc8
    INC ECX                             ; 00468bca
    PUSH ECX                            ; 00468bcb
    MOV ECX,dword ptr [0x01bdd7bc]      ; 00468bcc | DAT_01bdd7bc
    MOV EDX,dword ptr [EBX + 0x1c5faec] ; 00468bd2 | DAT_01c5faec
    PUSH ECX                            ; 00468bd8
    ADD EDX,EAX                         ; 00468bd9
    PUSH EDX                            ; 00468bdb
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00468bdc
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00468be1
    LEA EAX,[EAX]                       ; 00468be4
    LEA EDX,[EDX]                       ; 00468bea
    POP EBP                             ; 00468bf0
        ;   Label: LAB_00468bf0
    POP EDI                             ; 00468bf1
    POP ESI                             ; 00468bf2
    POP EBX                             ; 00468bf3
    RET                                 ; 00468bf4
    PUSH EBX                            ; 00468bf5
        ;   Label: LAB_00468bf5
    PUSH ECX                            ; 00468bf6
    PUSH EAX                            ; 00468bf7
    CALL cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090 ; 00468bf8
        ;   XREF to: 00468090 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_00468090(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 00468bfd
    POP EBP                             ; 00468c00
    POP EDI                             ; 00468c01
    POP ESI                             ; 00468c02
    POP EBX                             ; 00468c03
    RET                                 ; 00468c04
    LEA EDX,[EAX + EAX*0x1]             ; 00468c05
        ;   Label: LAB_00468c05
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 00468c08 | DAT_01c5faec
    ADD EDX,EBX                         ; 00468c0e
    ADD EDX,0x2                         ; 00468c10
        ;   Label: LAB_00468c10
    MOV BX,word ptr [0x01bdd7bc]        ; 00468c13 | DAT_01bdd7bc
    INC EAX                             ; 00468c1a
    MOV word ptr [EDX + -0x2],BX        ; 00468c1b
    CMP EAX,ECX                         ; 00468c1f
    JLE 0x00468c10                      ; 00468c21
        ;   XREF to: 00468c10 (CONDITIONAL_JUMP)  ; LAB_00468c10
    POP EBP                             ; 00468c23
    POP EDI                             ; 00468c24
    POP ESI                             ; 00468c25
    POP EBX                             ; 00468c26
    RET                                 ; 00468c27
    LEA EDX,[EAX*0x4 + 0x0]             ; 00468c28
        ;   Label: LAB_00468c28
    MOV EBX,dword ptr [EBX + 0x1c5faec] ; 00468c2f | DAT_01c5faec
    ADD EDX,EBX                         ; 00468c35
    ADD EDX,0x4                         ; 00468c37
        ;   Label: LAB_00468c37
    MOV EBX,dword ptr [0x01bdd7bc]      ; 00468c3a | DAT_01bdd7bc
    INC EAX                             ; 00468c40
    MOV dword ptr [EDX + -0x4],EBX      ; 00468c41
    CMP EAX,ECX                         ; 00468c44
    JLE 0x00468c37                      ; 00468c46
        ;   XREF to: 00468c37 (CONDITIONAL_JUMP)  ; LAB_00468c37
    POP EBP                             ; 00468c48
    POP EDI                             ; 00468c49
    POP ESI                             ; 00468c4a
    POP EBX                             ; 00468c4b
    RET                                 ; 00468c4c
    JBE 0x00468c05                      ; 00468c4d
        ;   XREF to: 00468c05 (CONDITIONAL_JUMP)  ; LAB_00468c05
        ;   Label: LAB_00468c4d
    CMP EDX,0x20                        ; 00468c4f
    JZ 0x00468c28                       ; 00468c52
        ;   XREF to: 00468c28 (CONDITIONAL_JUMP)  ; LAB_00468c28
    MOV EBP,0x5bc2b5                    ; 00468c54 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00468c54
    MOV EAX,0x3a6                       ; 00468c59
    PUSH 0x5bc2cd                       ; 00468c5e | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d71de0],EBP      ; 00468c63 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 00468c69 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00468c6e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00468c73
    POP EBP                             ; 00468c76
    POP EDI                             ; 00468c77
    POP ESI                             ; 00468c78
    POP EBX                             ; 00468c79
    RET                                 ; 00468c7a

