; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90(CDrawSurface *this_ptr,int start_x,int y,int end_x)
;
; Parameters:
; CDrawSurface *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_x
; int              Stack[0xc]:4   y
; int              Stack[0x10]:4   end_x
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_00467350 at 0046736c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005d1325
;   TerminatedCString s_Invalid_bitsPerPixel_005d133d
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c34
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466f90
        ;   Label: cockpit_drawsurf.cpp_CDrawSurface_drawHorizontalLine_FUN_00466f90
    PUSH ESI                            ; 00466f91
    PUSH EDI                            ; 00466f92
    PUSH EBP                            ; 00466f93
    MOV EDX,dword ptr [ESP + 0x14]      ; 00466f94
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466f98
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00466f9c
    MOV ECX,dword ptr [ESP + 0x20]      ; 00466fa0
    MOV ESI,dword ptr [EDX + 0x8]       ; 00466fa4
    MOV EDI,dword ptr [EDX + 0xc]       ; 00466fa7
    ADD ECX,ESI                         ; 00466faa
    ADD EAX,ESI                         ; 00466fac
    ADD EBX,EDI                         ; 00466fae
    CMP EBX,dword ptr [EDX + 0x14]      ; 00466fb0
    JL 0x00467020                       ; 00466fb3
        ;   XREF to: 00467020 (CONDITIONAL_JUMP)  ; LAB_00467020
    CMP EBX,dword ptr [EDX + 0x1c]      ; 00466fb9
    JG 0x00467020                       ; 00466fbc
        ;   XREF to: 00467020 (CONDITIONAL_JUMP)  ; LAB_00467020
    MOV EBP,dword ptr [EDX + 0x10]      ; 00466fbe
    CMP EAX,EBP                         ; 00466fc1
    JGE 0x00466fc7                      ; 00466fc3
        ;   XREF to: 00466fc7 (CONDITIONAL_JUMP)  ; LAB_00466fc7
    MOV EAX,EBP                         ; 00466fc5
    MOV ESI,dword ptr [EDX + 0x18]      ; 00466fc7
        ;   Label: LAB_00466fc7
    CMP ECX,ESI                         ; 00466fca
    JLE 0x00466fd0                      ; 00466fcc
        ;   XREF to: 00466fd0 (CONDITIONAL_JUMP)  ; LAB_00466fd0
    MOV ECX,ESI                         ; 00466fce
    CMP EAX,ECX                         ; 00466fd0
        ;   Label: LAB_00466fd0
    JG 0x00467020                       ; 00466fd2
        ;   XREF to: 00467020 (CONDITIONAL_JUMP)  ; LAB_00467020
    CMP dword ptr [0x01ba5c34],0x0      ; 00466fd4 | DAT_01ba5c34
    JNZ 0x00467025                      ; 00466fdb
        ;   XREF to: 00467025 (CONDITIONAL_JUMP)  ; LAB_00467025
    MOV EDX,dword ptr [0x006141c0]      ; 00466fdd | DAT_006141c0
    SHL EBX,0x2                         ; 00466fe3
    CMP EDX,0x10                        ; 00466fe6
    JNC 0x0046707d                      ; 00466fe9
        ;   XREF to: 0046707d (CONDITIONAL_JUMP)  ; LAB_0046707d
    CMP EDX,0x8                         ; 00466fef
    JNZ 0x00467084                      ; 00466ff2
        ;   XREF to: 00467084 (CONDITIONAL_JUMP)  ; LAB_00467084
    SUB ECX,EAX                         ; 00466ff8
    INC ECX                             ; 00466ffa
    PUSH ECX                            ; 00466ffb
    MOV ECX,dword ptr [0x01ba5c28]      ; 00466ffc | DAT_01ba5c28
    MOV EDX,dword ptr [EBX + 0x1c2a38c] ; 00467002 | DAT_01c2a38c
    PUSH ECX                            ; 00467008
    ADD EDX,EAX                         ; 00467009
    PUSH EDX                            ; 0046700b
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0046700c
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00467011
    LEA EAX,[EAX]                       ; 00467014
    LEA EDX,[EDX]                       ; 0046701a
    POP EBP                             ; 00467020
        ;   Label: LAB_00467020
    POP EDI                             ; 00467021
    POP ESI                             ; 00467022
    POP EBX                             ; 00467023
    RET                                 ; 00467024
    PUSH EBX                            ; 00467025
        ;   Label: LAB_00467025
    PUSH ECX                            ; 00467026
    PUSH EAX                            ; 00467027
    CALL cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0 ; 00467028
        ;   XREF to: 004664c0 (UNCONDITIONAL_CALL)  ; void cockpit_drawsurf.cpp_drawHorizontalLineWithEffect_FUN_004664c0(int start_x, int end_x, int y)
    ADD ESP,0xc                         ; 0046702d
    POP EBP                             ; 00467030
    POP EDI                             ; 00467031
    POP ESI                             ; 00467032
    POP EBX                             ; 00467033
    RET                                 ; 00467034
    LEA EDX,[EAX + EAX*0x1]             ; 00467035
        ;   Label: LAB_00467035
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 00467038 | DAT_01c2a38c
    ADD EDX,EBX                         ; 0046703e
    ADD EDX,0x2                         ; 00467040
        ;   Label: LAB_00467040
    MOV BX,word ptr [0x01ba5c28]        ; 00467043 | DAT_01ba5c28
    INC EAX                             ; 0046704a
    MOV word ptr [EDX + -0x2],BX        ; 0046704b
    CMP EAX,ECX                         ; 0046704f
    JLE 0x00467040                      ; 00467051
        ;   XREF to: 00467040 (CONDITIONAL_JUMP)  ; LAB_00467040
    POP EBP                             ; 00467053
    POP EDI                             ; 00467054
    POP ESI                             ; 00467055
    POP EBX                             ; 00467056
    RET                                 ; 00467057
    LEA EDX,[EAX*0x4 + 0x0]             ; 00467058
        ;   Label: LAB_00467058
    MOV EBX,dword ptr [EBX + 0x1c2a38c] ; 0046705f | DAT_01c2a38c
    ADD EDX,EBX                         ; 00467065
    ADD EDX,0x4                         ; 00467067
        ;   Label: LAB_00467067
    MOV EBX,dword ptr [0x01ba5c28]      ; 0046706a | DAT_01ba5c28
    INC EAX                             ; 00467070
    MOV dword ptr [EDX + -0x4],EBX      ; 00467071
    CMP EAX,ECX                         ; 00467074
    JLE 0x00467067                      ; 00467076
        ;   XREF to: 00467067 (CONDITIONAL_JUMP)  ; LAB_00467067
    POP EBP                             ; 00467078
    POP EDI                             ; 00467079
    POP ESI                             ; 0046707a
    POP EBX                             ; 0046707b
    RET                                 ; 0046707c
    JBE 0x00467035                      ; 0046707d
        ;   XREF to: 00467035 (CONDITIONAL_JUMP)  ; LAB_00467035
        ;   Label: LAB_0046707d
    CMP EDX,0x20                        ; 0046707f
    JZ 0x00467058                       ; 00467082
        ;   XREF to: 00467058 (CONDITIONAL_JUMP)  ; LAB_00467058
    MOV EBP,0x5d1325                    ; 00467084 | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00467084
    MOV EAX,0x3a5                       ; 00467089
    PUSH 0x5d133d                       ; 0046708e | = "Invalid bitsPerPixel!"
    MOV dword ptr [0x01d046a0],EBP      ; 00467093 | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 00467099 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0046709e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004670a3
    POP EBP                             ; 004670a6
    POP EDI                             ; 004670a7
    POP ESI                             ; 004670a8
    POP EBX                             ; 004670a9
    RET                                 ; 004670aa

