; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_drawsurf_cpp_FUN_00467a70(int color_value)
;
; Parameters:
; int              Stack[0x4]:4   color_value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   cockpit_drawsurf.cpp_FUN_0046a750 at 0046a811
;   core_script.cpp_FUN_00529210 at 00529258
;
; Referenced Globals:
;   TerminatedCString s_cockpit_drawsurf_cpp_005bc184
;   TerminatedCString s_Invalid_bitsPerPixel_in_005bc19c
;   undefined4 DAT_005fba20
;   undefined4 DAT_01bdd7bc
;   undefined4 DAT_01bdd7c0
;   undefined4 DAT_01bdd7c8
;   undefined4 DAT_01bdd7cc
;   undefined4 DAT_01bdd7d0
;   undefined4 DAT_01bdd7d4
;   undefined4 DAT_01bdd7d8
;   undefined4 DAT_01bdd7dc
;   undefined4 DAT_01bdd7e0
;   undefined4 DAT_01c6af74
;   undefined4 DAT_01c6af78
;   undefined4 DAT_01c6af80
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467a70
        ;   Label: cockpit_drawsurf.cpp_FUN_00467a70
    PUSH ESI                            ; 00467a71
    PUSH EDI                            ; 00467a72
    PUSH EBP                            ; 00467a73
    SUB ESP,0x4                         ; 00467a74
    MOV EAX,dword ptr [ESP + 0x18]      ; 00467a77
    TEST EAX,EAX                        ; 00467a7b
    JL 0x00467ab6                       ; 00467a7d
        ;   XREF to: 00467ab6 (CONDITIONAL_JUMP)  ; LAB_00467ab6
    XOR EDX,EDX                         ; 00467a7f
    MOV dword ptr [0x01bdd7c8],EDX      ; 00467a81 | DAT_01bdd7c8
    AND EAX,0xff                        ; 00467a87
        ;   Label: LAB_00467a87
    MOV EDX,dword ptr [0x005fba20]      ; 00467a8c | DAT_005fba20
    MOV [0x01bdd7c0],EAX                ; 00467a92 | DAT_01bdd7c0
    CMP EDX,0x10                        ; 00467a97
    JNC 0x00467c38                      ; 00467a9a
        ;   XREF to: 00467c38 (CONDITIONAL_JUMP)  ; LAB_00467c38
    CMP EDX,0x8                         ; 00467aa0
    JNZ 0x00467c4f                      ; 00467aa3
        ;   XREF to: 00467c4f (CONDITIONAL_JUMP)  ; LAB_00467c4f
    MOV [0x01bdd7bc],EAX                ; 00467aa9 | DAT_01bdd7bc
    ADD ESP,0x4                         ; 00467aae
    POP EBP                             ; 00467ab1
    POP EDI                             ; 00467ab2
    POP ESI                             ; 00467ab3
    POP EBX                             ; 00467ab4
    RET                                 ; 00467ab5
    MOV ESI,dword ptr [0x01c6af78]      ; 00467ab6 | DAT_01c6af78
        ;   Label: LAB_00467ab6
    MOV [0x01bdd7cc],EAX                ; 00467abc | DAT_01bdd7cc
    MOV EBX,EAX                         ; 00467ac1
    XOR EDX,EDX                         ; 00467ac3
    MOV EAX,0xff                        ; 00467ac5
    DIV ESI                             ; 00467aca
    MOV ECX,0x1                         ; 00467acc
    NEG EBX                             ; 00467ad1
    MOV dword ptr [0x01bdd7c8],ECX      ; 00467ad3 | DAT_01bdd7c8
    MOV ECX,EBX                         ; 00467ad9
    MOV EDI,dword ptr [0x01c6af84]      ; 00467adb | DAT_01c6af84
    SHR EAX,CL                          ; 00467ae1
    XOR EDX,EDX                         ; 00467ae3
    MOV [0x01bdd7d0],EAX                ; 00467ae5 | DAT_01bdd7d0
    MOV EAX,0xff                        ; 00467aea
    DIV EDI                             ; 00467aef
    MOV EBP,dword ptr [0x01c6af90]      ; 00467af1 | DAT_01c6af90
    SHR EAX,CL                          ; 00467af7
    XOR EDX,EDX                         ; 00467af9
    MOV [0x01bdd7d4],EAX                ; 00467afb | DAT_01bdd7d4
    MOV EAX,0xff                        ; 00467b00
    DIV EBP                             ; 00467b05
    MOV EDX,dword ptr [0x01bdd7d0]      ; 00467b07 | DAT_01bdd7d0
    SHR EAX,CL                          ; 00467b0d
    MOV CL,byte ptr [0x01c6af74]        ; 00467b0f | DAT_01c6af74
    MOV [0x01bdd7d8],EAX                ; 00467b15 | DAT_01bdd7d8
    MOV EAX,[0x01bdd7d4]                ; 00467b1a | DAT_01bdd7d4
    SHL EDX,CL                          ; 00467b1f
    MOV CL,byte ptr [0x01c6af80]        ; 00467b21 | DAT_01c6af80
    SHL EAX,CL                          ; 00467b27
    MOV CL,byte ptr [0x01c6af8c]        ; 00467b29 | DAT_01c6af8c
    OR EDX,EAX                          ; 00467b2f
    MOV EAX,[0x01bdd7d8]                ; 00467b31 | DAT_01bdd7d8
    SHL EAX,CL                          ; 00467b36
    OR EDX,EAX                          ; 00467b38
    MOV dword ptr [0x01bdd7dc],EDX      ; 00467b3a | DAT_01bdd7dc
    MOV EAX,[0x01bdd7dc]                ; 00467b40 | DAT_01bdd7dc
    SHL EDX,0x10                        ; 00467b45
    OR EAX,EDX                          ; 00467b48
    MOV dword ptr [0x01bdd7cc],EBX      ; 00467b4a | DAT_01bdd7cc
    MOV [0x01bdd7e0],EAX                ; 00467b50 | DAT_01bdd7e0
    XOR EAX,EAX                         ; 00467b55
    JMP 0x00467a87                      ; 00467b57
        ;   XREF to: 00467a87 (UNCONDITIONAL_JUMP)  ; LAB_00467a87
    XOR EBX,EBX                         ; 00467b5c
        ;   Label: LAB_00467b5c
    XOR EAX,EAX                         ; 00467b5e
    MOV BL,byte ptr [ECX + 0x1c6af99]   ; 00467b60 | DAT_01c6af99
    MOV AL,byte ptr [ECX + 0x1c6af98]   ; 00467b66 | DAT_01c6af98
    MOV CL,byte ptr [ECX + 0x1c6af9a]   ; 00467b6c | DAT_01c6af9a
    MOV ESI,dword ptr [0x01c6af78]      ; 00467b72 | DAT_01c6af78
    XOR EDX,EDX                         ; 00467b78
    DIV ESI                             ; 00467b7a
    MOV EDI,dword ptr [0x01c6af84]      ; 00467b7c | DAT_01c6af84
    MOV ESI,EAX                         ; 00467b82
    XOR EDX,EDX                         ; 00467b84
    MOV EAX,EBX                         ; 00467b86
    DIV EDI                             ; 00467b88
    MOV EBP,dword ptr [0x01c6af90]      ; 00467b8a | DAT_01c6af90
    AND ECX,0xff                        ; 00467b90
    MOV EDI,EAX                         ; 00467b96
    XOR EDX,EDX                         ; 00467b98
    MOV EAX,ECX                         ; 00467b9a
    DIV EBP                             ; 00467b9c
    MOV dword ptr [ESP],ECX             ; 00467b9e
    MOV CL,byte ptr [0x01c6af74]        ; 00467ba1 | DAT_01c6af74
    MOV dword ptr [ESP],EAX             ; 00467ba7
    MOV EAX,ESI                         ; 00467baa
    SHL EAX,CL                          ; 00467bac
    MOV CL,byte ptr [0x01c6af80]        ; 00467bae | DAT_01c6af80
    MOV EDX,dword ptr [ESP]             ; 00467bb4
    SHL EDI,CL                          ; 00467bb7
    MOV CL,byte ptr [0x01c6af8c]        ; 00467bb9 | DAT_01c6af8c
    OR EAX,EDI                          ; 00467bbf
    SHL EDX,CL                          ; 00467bc1
    OR EAX,EDX                          ; 00467bc3
    AND EAX,0xffff                      ; 00467bc5
    MOV [0x01bdd7bc],EAX                ; 00467bca | DAT_01bdd7bc
    ADD ESP,0x4                         ; 00467bcf
    POP EBP                             ; 00467bd2
    POP EDI                             ; 00467bd3
    POP ESI                             ; 00467bd4
    POP EBX                             ; 00467bd5
    RET                                 ; 00467bd6
    MOVZX ESI,byte ptr [ECX + 0x1c6af98] ; 00467bd7 | DAT_01c6af98
        ;   Label: LAB_00467bd7
    XOR EAX,EAX                         ; 00467bde
    XOR EBX,EBX                         ; 00467be0
    MOV AL,byte ptr [ECX + 0x1c6af99]   ; 00467be2 | DAT_01c6af99
    MOV BL,byte ptr [ECX + 0x1c6af9a]   ; 00467be8 | DAT_01c6af9a
    CMP EDX,EDX                         ; 00467bee
    JNZ 0x00467c1e                      ; 00467bf0
        ;   XREF to: 00467c1e (CONDITIONAL_JUMP)  ; LAB_00467c1e
    MOV CL,byte ptr [0x01c6af74]        ; 00467bf2 | DAT_01c6af74
    SHL ESI,CL                          ; 00467bf8
    MOV CL,byte ptr [0x01c6af80]        ; 00467bfa | DAT_01c6af80
    SHL EAX,CL                          ; 00467c00
    MOV CL,byte ptr [0x01c6af8c]        ; 00467c02 | DAT_01c6af8c
    SHL EBX,CL                          ; 00467c08
    OR EAX,ESI                          ; 00467c0a
    MOV ECX,EBX                         ; 00467c0c
    OR ECX,EAX                          ; 00467c0e
    MOV dword ptr [0x01bdd7bc],ECX      ; 00467c10 | DAT_01bdd7bc
    ADD ESP,0x4                         ; 00467c16
    POP EBP                             ; 00467c19
    POP EDI                             ; 00467c1a
    POP ESI                             ; 00467c1b
    POP EBX                             ; 00467c1c
    RET                                 ; 00467c1d
    MOV ECX,EAX                         ; 00467c1e
        ;   Label: LAB_00467c1e
    SHL ESI,0x10                        ; 00467c20
    SHL ECX,0x8                         ; 00467c23
    OR ECX,ESI                          ; 00467c26
    OR ECX,EBX                          ; 00467c28
    MOV dword ptr [0x01bdd7bc],ECX      ; 00467c2a | DAT_01bdd7bc
    ADD ESP,0x4                         ; 00467c30
    POP EBP                             ; 00467c33
    POP EDI                             ; 00467c34
    POP ESI                             ; 00467c35
    POP EBX                             ; 00467c36
    RET                                 ; 00467c37
    LEA ECX,[EAX*0x4 + 0x0]             ; 00467c38
        ;   Label: LAB_00467c38
    SUB ECX,EAX                         ; 00467c3f
    CMP EDX,0x10                        ; 00467c41
    JBE 0x00467b5c                      ; 00467c44
        ;   XREF to: 00467b5c (CONDITIONAL_JUMP)  ; LAB_00467b5c
    CMP EDX,0x20                        ; 00467c4a
    JZ 0x00467bd7                       ; 00467c4d
        ;   XREF to: 00467bd7 (CONDITIONAL_JUMP)  ; LAB_00467bd7
    MOV EAX,0x5bc184                    ; 00467c4f | = "..\\cockpit\\drawsurf.cpp"
        ;   Label: LAB_00467c4f
    MOV EDX,0xf8                        ; 00467c54
    PUSH 0x5bc19c                       ; 00467c59 | = "Invalid bitsPerPixel in CDrawSurface:..."
    MOV [0x01d71de0],EAX                ; 00467c5e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00467c63 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00467c69
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00467c6e
    ADD ESP,0x4                         ; 00467c71
    POP EBP                             ; 00467c74
    POP EDI                             ; 00467c75
    POP ESI                             ; 00467c76
    POP EBX                             ; 00467c77
    RET                                 ; 00467c78

