; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f6bb0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e6020
;   undefined4 DAT_005e6028
;   undefined4 DAT_005e6030
;   undefined4 DAT_005e6038
;   CGame* g_CGamePtr = 01ccf390
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_006236b8
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d06f70
;   undefined4 DAT_01d1bc48
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;   core_actor.cpp_FUN_0040cc00
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;   core_sound.cpp_FUN_0057d9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6bb0
        ;   Label: core_inv.cpp_FUN_004f6bb0
    PUSH ESI                            ; 004f6bb1
    PUSH EDI                            ; 004f6bb2
    PUSH EBP                            ; 004f6bb3
    MOV EBP,ESP                         ; 004f6bb4
    SUB ESP,0x38                        ; 004f6bb6
    AND ESP,0xfffffff8                  ; 004f6bb9
    MOV EAX,[0x0061d95c]                ; 004f6bbc | g_CGamePtr
    FLD float ptr [EAX + 0x294]         ; 004f6bc1
    FSUBR float ptr [0x01d06f70]        ; 004f6bc7 | DAT_01d06f70
    FLDZ                                ; 004f6bcd
    FXCH                                ; 004f6bcf
    FSTP float ptr [0x01d06f70]         ; 004f6bd1 | DAT_01d06f70
    FCOMP float ptr [0x01d06f70]        ; 004f6bd7 | DAT_01d06f70
    FNSTSW AX                           ; 004f6bdd
    SAHF                                ; 004f6bdf
    JNC 0x004f6be9                      ; 004f6be0
        ;   XREF to: 004f6be9 (CONDITIONAL_JUMP)  ; LAB_004f6be9
    MOV ESP,EBP                         ; 004f6be2
        ;   Label: LAB_004f6be2
    POP EBP                             ; 004f6be4
    POP EDI                             ; 004f6be5
    POP ESI                             ; 004f6be6
    POP EBX                             ; 004f6be7
    RET                                 ; 004f6be8
    PUSH 0x3ecccccd                     ; 004f6be9
        ;   Label: LAB_004f6be9
    PUSH 0x3dcccccd                     ; 004f6bee
    CALL core_actor.cpp_FUN_0040cc00    ; 004f6bf3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    XOR ESI,ESI                         ; 004f6bf8
    XOR EDI,EDI                         ; 004f6bfa
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f6bfc
    MOV EDX,0xffffffff                  ; 004f6c00
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004f6c05
    MOV [0x01d06f70],EAX                ; 004f6c09 | DAT_01d06f70
    MOV dword ptr [0x01d1bc48],EDX      ; 004f6c0e | DAT_01d1bc48
    ADD ESP,0x8                         ; 004f6c14
    MOV EAX,[0x00622c18]                ; 004f6c17 | g_CDemonSetPtr
        ;   Label: LAB_004f6c17
    CMP ESI,dword ptr [EAX + 0x14f0a8]  ; 004f6c1c
    JGE 0x004f6be2                      ; 004f6c22
        ;   XREF to: 004f6be2 (CONDITIONAL_JUMP)  ; LAB_004f6be2
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0x14f0ac] ; 004f6c24
    CMP dword ptr [EBX + 0x27a8],0x0    ; 004f6c2b
    JNZ 0x004f6c3a                      ; 004f6c32
        ;   XREF to: 004f6c3a (CONDITIONAL_JUMP)  ; LAB_004f6c3a
    INC ESI                             ; 004f6c34
        ;   Label: LAB_004f6c34
    ADD EDI,0x4                         ; 004f6c35
    JMP 0x004f6c17                      ; 004f6c38
        ;   XREF to: 004f6c17 (UNCONDITIONAL_JUMP)  ; LAB_004f6c17
    PUSH 0x5e5fc8                       ; 004f6c3a
        ;   Label: LAB_004f6c3a
    PUSH EBX                            ; 004f6c3f
    CALL core_actor.cpp_FUN_0040c550    ; 004f6c40
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f6c45
    TEST EAX,EAX                        ; 004f6c48
    JNZ 0x004f6c34                      ; 004f6c4a
        ;   XREF to: 004f6c34 (CONDITIONAL_JUMP)  ; LAB_004f6c34
    MOV EDX,dword ptr [EBX + 0x27ac]    ; 004f6c4c
    PUSH EDX                            ; 004f6c52
    MOV ECX,dword ptr [0x006236b8]      ; 004f6c53 | DAT_006236b8
    PUSH ECX                            ; 004f6c59
    CALL core_sound.cpp_FUN_0057d9c0    ; 004f6c5a
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6c5f
    TEST EAX,EAX                        ; 004f6c62
    JNZ 0x004f6c34                      ; 004f6c64
        ;   XREF to: 004f6c34 (CONDITIONAL_JUMP)  ; LAB_004f6c34
    MOV EDX,dword ptr [0x01d06ab4]      ; 004f6c66 | DAT_01d06ab4
    MOV EDX,dword ptr [EDX*0x4 + 0x1d06aa4] ; 004f6c6c
    LEA EAX,[EBX + 0x20]                ; 004f6c73
    FLD float ptr [EDX + 0x20]          ; 004f6c76
    FSUB float ptr [EAX]                ; 004f6c79
    FMUL ST0                            ; 004f6c7b
    FLD float ptr [EDX + 0x24]          ; 004f6c7d
    FSUB float ptr [EAX + 0x4]          ; 004f6c80
    FMUL ST0                            ; 004f6c83
    FLD float ptr [EDX + 0x28]          ; 004f6c85
    FXCH                                ; 004f6c88
    FADDP ST2,ST0                       ; 004f6c8a
    FSUB float ptr [EAX + 0x8]          ; 004f6c8c
    FMUL ST0                            ; 004f6c8f
    FADDP                               ; 004f6c91
    FST double ptr [ESP]                ; 004f6c93
    FCOMP double ptr [0x005e6020]       ; 004f6c96 | DAT_005e6020
    FNSTSW AX                           ; 004f6c9c
    SAHF                                ; 004f6c9e
    JA 0x004f6c34                       ; 004f6c9f
        ;   XREF to: 004f6c34 (CONDITIONAL_JUMP)  ; LAB_004f6c34
    FLD double ptr [ESP]                ; 004f6ca1
    FCOMP double ptr [0x005e6028]       ; 004f6ca4 | DAT_005e6028
    FNSTSW AX                           ; 004f6caa
    SAHF                                ; 004f6cac
    JBE 0x004f6d1f                      ; 004f6cad
        ;   XREF to: 004f6d1f (CONDITIONAL_JUMP)  ; LAB_004f6d1f
    MOV ECX,0x3                         ; 004f6caf
    MOV dword ptr [ESP + 0x30],EBX      ; 004f6cb4
    MOV EBX,0x5e5fce                    ; 004f6cb8
    MOV dword ptr [0x01d1bc48],ECX      ; 004f6cbd | DAT_01d1bc48
    MOV dword ptr [ESP + 0x20],EBX      ; 004f6cc3
    XOR EBX,EBX                         ; 004f6cc7
    MOV EAX,dword ptr [EBX + 0x1d1bc4c] ; 004f6cc9
        ;   Label: LAB_004f6cc9
    PUSH EAX                            ; 004f6ccf
    MOV EDX,dword ptr [0x006236b8]      ; 004f6cd0 | DAT_006236b8
    PUSH EDX                            ; 004f6cd6
    CALL core_sound.cpp_FUN_0057d9c0    ; 004f6cd7
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6cdc
    TEST EAX,EAX                        ; 004f6cdf
    JZ 0x004f6cf2                       ; 004f6ce1
        ;   XREF to: 004f6cf2 (CONDITIONAL_JUMP)  ; LAB_004f6cf2
    ADD EBX,0x4                         ; 004f6ce3
    CMP EBX,0x10                        ; 004f6ce6
    JL 0x004f6cc9                       ; 004f6ce9
        ;   XREF to: 004f6cc9 (CONDITIONAL_JUMP)  ; LAB_004f6cc9
    MOV ESP,EBP                         ; 004f6ceb
    POP EBP                             ; 004f6ced
    POP EDI                             ; 004f6cee
    POP ESI                             ; 004f6cef
    POP EBX                             ; 004f6cf0
    RET                                 ; 004f6cf1
    MOV ECX,dword ptr [ESP + 0x20]      ; 004f6cf2
        ;   Label: LAB_004f6cf2
    PUSH ECX                            ; 004f6cf6
    PUSH EAX                            ; 004f6cf7
    MOV EAX,[0x006236b8]                ; 004f6cf8 | DAT_006236b8
    PUSH EAX                            ; 004f6cfd
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004f6cfe
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004f6d03
    MOV EDX,dword ptr [ESP + 0x30]      ; 004f6d06
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004f6d0a
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004f6d10
    INC ESI                             ; 004f6d16
    ADD EDI,0x4                         ; 004f6d17
    JMP 0x004f6c17                      ; 004f6d1a
        ;   XREF to: 004f6c17 (UNCONDITIONAL_JUMP)  ; LAB_004f6c17
    FLD double ptr [ESP]                ; 004f6d1f
        ;   Label: LAB_004f6d1f
    FCOMP double ptr [0x005e6030]       ; 004f6d22 | DAT_005e6030
    FNSTSW AX                           ; 004f6d28
    SAHF                                ; 004f6d2a
    JBE 0x004f6d9c                      ; 004f6d2b
        ;   XREF to: 004f6d9c (CONDITIONAL_JUMP)  ; LAB_004f6d9c
    MOV EDX,0x5e5fe2                    ; 004f6d2d
    MOV EAX,0x2                         ; 004f6d32
    MOV dword ptr [ESP + 0x24],EBX      ; 004f6d37
    MOV dword ptr [ESP + 0x14],EDX      ; 004f6d3b
    MOV [0x01d1bc48],EAX                ; 004f6d3f | DAT_01d1bc48
    XOR EBX,EBX                         ; 004f6d44
    MOV ECX,dword ptr [EBX + 0x1d1bc4c] ; 004f6d46
        ;   Label: LAB_004f6d46
    PUSH ECX                            ; 004f6d4c
    MOV EAX,[0x006236b8]                ; 004f6d4d | DAT_006236b8
    PUSH EAX                            ; 004f6d52
    CALL core_sound.cpp_FUN_0057d9c0    ; 004f6d53
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6d58
    TEST EAX,EAX                        ; 004f6d5b
    JZ 0x004f6d6e                       ; 004f6d5d
        ;   XREF to: 004f6d6e (CONDITIONAL_JUMP)  ; LAB_004f6d6e
    ADD EBX,0x4                         ; 004f6d5f
    CMP EBX,0x10                        ; 004f6d62
    JL 0x004f6d46                       ; 004f6d65
        ;   XREF to: 004f6d46 (CONDITIONAL_JUMP)  ; LAB_004f6d46
    MOV ESP,EBP                         ; 004f6d67
    POP EBP                             ; 004f6d69
    POP EDI                             ; 004f6d6a
    POP ESI                             ; 004f6d6b
    POP EBX                             ; 004f6d6c
    RET                                 ; 004f6d6d
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f6d6e
        ;   Label: LAB_004f6d6e
    PUSH EDX                            ; 004f6d72
    PUSH EAX                            ; 004f6d73
    MOV ECX,dword ptr [0x006236b8]      ; 004f6d74 | DAT_006236b8
    PUSH ECX                            ; 004f6d7a
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004f6d7b
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004f6d80
    MOV EDX,dword ptr [ESP + 0x24]      ; 004f6d83
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004f6d87
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004f6d8d
    INC ESI                             ; 004f6d93
    ADD EDI,0x4                         ; 004f6d94
    JMP 0x004f6c17                      ; 004f6d97
        ;   XREF to: 004f6c17 (UNCONDITIONAL_JUMP)  ; LAB_004f6c17
    FLD double ptr [ESP]                ; 004f6d9c
        ;   Label: LAB_004f6d9c
    FCOMP double ptr [0x005e6038]       ; 004f6d9f | DAT_005e6038
    FNSTSW AX                           ; 004f6da5
    SAHF                                ; 004f6da7
    JBE 0x004f6e1c                      ; 004f6da8
        ;   XREF to: 004f6e1c (CONDITIONAL_JUMP)  ; LAB_004f6e1c
    MOV ECX,0x1                         ; 004f6daa
    MOV dword ptr [ESP + 0x28],EBX      ; 004f6daf
    MOV EBX,0x5e5ff4                    ; 004f6db3
    MOV dword ptr [0x01d1bc48],ECX      ; 004f6db8 | DAT_01d1bc48
    MOV dword ptr [ESP + 0x18],EBX      ; 004f6dbe
    XOR EBX,EBX                         ; 004f6dc2
    MOV EDX,dword ptr [EBX + 0x1d1bc4c] ; 004f6dc4
        ;   Label: LAB_004f6dc4
    PUSH EDX                            ; 004f6dca
    MOV ECX,dword ptr [0x006236b8]      ; 004f6dcb | DAT_006236b8
    PUSH ECX                            ; 004f6dd1
    CALL core_sound.cpp_FUN_0057d9c0    ; 004f6dd2
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6dd7
    TEST EAX,EAX                        ; 004f6dda
    JZ 0x004f6ded                       ; 004f6ddc
        ;   XREF to: 004f6ded (CONDITIONAL_JUMP)  ; LAB_004f6ded
    ADD EBX,0x4                         ; 004f6dde
    CMP EBX,0x10                        ; 004f6de1
    JL 0x004f6dc4                       ; 004f6de4
        ;   XREF to: 004f6dc4 (CONDITIONAL_JUMP)  ; LAB_004f6dc4
    MOV ESP,EBP                         ; 004f6de6
    POP EBP                             ; 004f6de8
    POP EDI                             ; 004f6de9
    POP ESI                             ; 004f6dea
    POP EBX                             ; 004f6deb
    RET                                 ; 004f6dec
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f6ded
        ;   Label: LAB_004f6ded
    PUSH EAX                            ; 004f6df1
    PUSH 0x0                            ; 004f6df2
    MOV EDX,dword ptr [0x006236b8]      ; 004f6df4 | DAT_006236b8
    PUSH EDX                            ; 004f6dfa
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004f6dfb
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004f6e00
    MOV EDX,dword ptr [ESP + 0x28]      ; 004f6e03
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004f6e07
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004f6e0d
    INC ESI                             ; 004f6e13
    ADD EDI,0x4                         ; 004f6e14
    JMP 0x004f6c17                      ; 004f6e17
        ;   XREF to: 004f6c17 (UNCONDITIONAL_JUMP)  ; LAB_004f6c17
    MOV EDX,0x5e6007                    ; 004f6e1c
        ;   Label: LAB_004f6e1c
    MOV dword ptr [ESP + 0x2c],EBX      ; 004f6e21
    XOR EAX,EAX                         ; 004f6e25
    MOV dword ptr [ESP + 0x1c],EDX      ; 004f6e27
    MOV [0x01d1bc48],EAX                ; 004f6e2b | DAT_01d1bc48
    XOR EBX,EBX                         ; 004f6e30
    MOV EAX,dword ptr [EBX + 0x1d1bc4c] ; 004f6e32
        ;   Label: LAB_004f6e32
    PUSH EAX                            ; 004f6e38
    MOV EDX,dword ptr [0x006236b8]      ; 004f6e39 | DAT_006236b8
    PUSH EDX                            ; 004f6e3f
    CALL core_sound.cpp_FUN_0057d9c0    ; 004f6e40
        ;   XREF to: 0057d9c0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_FUN_0057d9c0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 004f6e45
    TEST EAX,EAX                        ; 004f6e48
    JZ 0x004f6e5b                       ; 004f6e4a
        ;   XREF to: 004f6e5b (CONDITIONAL_JUMP)  ; LAB_004f6e5b
    ADD EBX,0x4                         ; 004f6e4c
    CMP EBX,0x10                        ; 004f6e4f
    JL 0x004f6e32                       ; 004f6e52
        ;   XREF to: 004f6e32 (CONDITIONAL_JUMP)  ; LAB_004f6e32
    MOV ESP,EBP                         ; 004f6e54
    POP EBP                             ; 004f6e56
    POP EDI                             ; 004f6e57
    POP ESI                             ; 004f6e58
    POP EBX                             ; 004f6e59
    RET                                 ; 004f6e5a
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004f6e5b
        ;   Label: LAB_004f6e5b
    PUSH ECX                            ; 004f6e5f
    PUSH EAX                            ; 004f6e60
    MOV EAX,[0x006236b8]                ; 004f6e61 | DAT_006236b8
    PUSH EAX                            ; 004f6e66
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 004f6e67
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 004f6e6c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004f6e6f
    MOV dword ptr [EDX + 0x27ac],EAX    ; 004f6e73
    MOV dword ptr [EBX + 0x1d1bc4c],EAX ; 004f6e79
    INC ESI                             ; 004f6e7f
    ADD EDI,0x4                         ; 004f6e80
    JMP 0x004f6c17                      ; 004f6e83
        ;   XREF to: 004f6c17 (UNCONDITIONAL_JUMP)  ; LAB_004f6c17

