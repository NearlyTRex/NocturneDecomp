; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CConfederateZombie * core_confzomb_cpp_CConfederateZombie_ctor_FUN_005a1b40(CConfederateZombie *this_ptr)
;
; Parameters:
; CConfederateZombie * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_confzomb.cpp_factoryFuncConfederateZombie_FUN_005a1b10 at 005a1b23
;
; Referenced Globals:
;   undefined4 DAT_005fef8c
;   undefined4 DAT_005fef90
;
; Called Functions:
;   core_confzomb.cpp_FUN_005a1e10
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0
;   unkaddr_0059d350.cpp_FUN_0059d7f0
;   unkaddr_0059d350.cpp_FUN_0059d990
;   unkaddr_0059d350.cpp_FUN_0059dc80
;   unkafter_basicene.cpp_FUN_0059e3b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1b40
        ;   Label: core_confzomb.cpp_CConfederateZombie_ctor_FUN_005a1b40
    PUSH ESI                            ; 005a1b41
    PUSH EDI                            ; 005a1b42
    MOV EDX,dword ptr [ESP + 0x10]      ; 005a1b43
    PUSH EDX                            ; 005a1b47
    CALL unkafter_basicene.cpp_FUN_0059e3b0 ; 005a1b48
        ;   XREF to: 0059e3b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e3b0()
    ADD ESP,0x4                         ; 005a1b4d
    PUSH 0x5efd5a                       ; 005a1b50
    MOV EBX,EAX                         ; 005a1b55
    LEA ESI,[EAX + 0x2b4]               ; 005a1b57
    PUSH ESI                            ; 005a1b5d
    MOV dword ptr [EAX + 0x2b0],0x5fefa4 ; 005a1b5e
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 ; 005a1b68
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0(CDeformableModelInstance * this_ptr, char * model_name)
    MOV dword ptr [EBX + 0x3434],0x3f333333 ; 005a1b6d
    MOV dword ptr [EBX + 0xfc],0x1      ; 005a1b77
    MOV dword ptr [EBX + 0x2814],0x0    ; 005a1b81
    MOV dword ptr [EBX + 0x113c4],0x0   ; 005a1b8b
    MOV dword ptr [EBX + 0x1134c],0x40200000 ; 005a1b95
    MOV dword ptr [EBX + 0x11380],0x0   ; 005a1b9f
    LEA EDI,[EBX + 0x113d4]             ; 005a1ba9
    MOV dword ptr [EBX + 0x11384],0x0   ; 005a1baf
    FLD float ptr [0x005fef8c]          ; 005a1bb9 | DAT_005fef8c
    MOV dword ptr [EBX + 0x11388],0x1   ; 005a1bbf
    FLD float ptr [0x005fef90]          ; 005a1bc9 | DAT_005fef90
    MOV dword ptr [EBX + 0x1138c],0x1   ; 005a1bcf
    MOV ESI,0x5efd6e                    ; 005a1bd9
    MOV dword ptr [EBX + 0x11418],0x1   ; 005a1bde
    ADD ESP,0x8                         ; 005a1be8
    FXCH                                ; 005a1beb
    FSTP float ptr [EBX + 0x11370]      ; 005a1bed
    FSTP float ptr [EBX + 0x11394]      ; 005a1bf3
    PUSH EDI                            ; 005a1bf9
    MOV AL,byte ptr [ESI]               ; 005a1bfa
        ;   Label: LAB_005a1bfa
    MOV byte ptr [EDI],AL               ; 005a1bfc
    CMP AL,0x0                          ; 005a1bfe
    JZ 0x005a1c12                       ; 005a1c00
        ;   XREF to: 005a1c12 (CONDITIONAL_JUMP)  ; LAB_005a1c12
    MOV AL,byte ptr [ESI + 0x1]         ; 005a1c02
    ADD ESI,0x2                         ; 005a1c05
    MOV byte ptr [EDI + 0x1],AL         ; 005a1c08
    ADD EDI,0x2                         ; 005a1c0b
    CMP AL,0x0                          ; 005a1c0e
    JNZ 0x005a1bfa                      ; 005a1c10
        ;   XREF to: 005a1bfa (CONDITIONAL_JUMP)  ; LAB_005a1bfa
    POP EDI                             ; 005a1c12
        ;   Label: LAB_005a1c12
    PUSH 0x0                            ; 005a1c13
    PUSH 0x0                            ; 005a1c15
    PUSH EBX                            ; 005a1c17
    CALL core_confzomb.cpp_FUN_005a1e10 ; 005a1c18
        ;   XREF to: 005a1e10 (UNCONDITIONAL_CALL)  ; undefined core_confzomb.cpp_FUN_005a1e10()
    ADD ESP,0xc                         ; 005a1c1d
    PUSH 0x5efd75                       ; 005a1c20
    PUSH 0x5efd81                       ; 005a1c25
    LEA ESI,[EBX + 0x10af8]             ; 005a1c2a
    PUSH ESI                            ; 005a1c30
    CALL unkaddr_0059d350.cpp_FUN_0059d7f0 ; 005a1c31
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a1c36
    PUSH 0x5efd8f                       ; 005a1c39
    PUSH ESI                            ; 005a1c3e
    CALL unkaddr_0059d350.cpp_FUN_0059d990 ; 005a1c3f
        ;   XREF to: 0059d990 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d990()
    ADD ESP,0x8                         ; 005a1c44
    PUSH ESI                            ; 005a1c47
    LEA EDI,[EBX + 0x11444]             ; 005a1c48
    CALL unkaddr_0059d350.cpp_FUN_0059dc80 ; 005a1c4e
        ;   XREF to: 0059dc80 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dc80()
    MOV dword ptr [EBX + 0x11430],0x0   ; 005a1c53
    ADD ESP,0x4                         ; 005a1c5d
    MOV dword ptr [EBX + 0x280c],0x1    ; 005a1c60
    MOV ESI,0x5efd9e                    ; 005a1c6a
    MOV dword ptr [EBX + 0x11348],0x1   ; 005a1c6f
    PUSH EDI                            ; 005a1c79
    MOV AL,byte ptr [ESI]               ; 005a1c7a
        ;   Label: LAB_005a1c7a
    MOV byte ptr [EDI],AL               ; 005a1c7c
    CMP AL,0x0                          ; 005a1c7e
    JZ 0x005a1c92                       ; 005a1c80
        ;   XREF to: 005a1c92 (CONDITIONAL_JUMP)  ; LAB_005a1c92
    MOV AL,byte ptr [ESI + 0x1]         ; 005a1c82
    ADD ESI,0x2                         ; 005a1c85
    MOV byte ptr [EDI + 0x1],AL         ; 005a1c88
    ADD EDI,0x2                         ; 005a1c8b
    CMP AL,0x0                          ; 005a1c8e
    JNZ 0x005a1c7a                      ; 005a1c90
        ;   XREF to: 005a1c7a (CONDITIONAL_JUMP)  ; LAB_005a1c7a
    POP EDI                             ; 005a1c92
        ;   Label: LAB_005a1c92
    MOV ESI,0x5efdae                    ; 005a1c93
    LEA EDI,[EBX + 0x11543]             ; 005a1c98
    PUSH EDI                            ; 005a1c9e
    MOV AL,byte ptr [ESI]               ; 005a1c9f
        ;   Label: LAB_005a1c9f
    MOV byte ptr [EDI],AL               ; 005a1ca1
    CMP AL,0x0                          ; 005a1ca3
    JZ 0x005a1cb7                       ; 005a1ca5
        ;   XREF to: 005a1cb7 (CONDITIONAL_JUMP)  ; LAB_005a1cb7
    MOV AL,byte ptr [ESI + 0x1]         ; 005a1ca7
    ADD ESI,0x2                         ; 005a1caa
    MOV byte ptr [EDI + 0x1],AL         ; 005a1cad
    ADD EDI,0x2                         ; 005a1cb0
    CMP AL,0x0                          ; 005a1cb3
    JNZ 0x005a1c9f                      ; 005a1cb5
        ;   XREF to: 005a1c9f (CONDITIONAL_JUMP)  ; LAB_005a1c9f
    POP EDI                             ; 005a1cb7
        ;   Label: LAB_005a1cb7
    MOV EAX,EBX                         ; 005a1cb8
    POP EDI                             ; 005a1cba
    POP ESI                             ; 005a1cbb
    POP EBX                             ; 005a1cbc
    RET                                 ; 005a1cbd

