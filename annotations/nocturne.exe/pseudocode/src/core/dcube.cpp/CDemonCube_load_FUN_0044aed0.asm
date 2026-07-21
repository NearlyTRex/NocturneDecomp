; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_dcube_cpp_CDemonCube_load_FUN_0044aed0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004676c0 at 004677fc
;
; Called Functions:
;   core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0
;   core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044aed0
        ;   Label: core_dcube.cpp_CDemonCube_load_FUN_0044aed0
    PUSH ESI                            ; 0044aed1
    PUSH EDI                            ; 0044aed2
    PUSH EBP                            ; 0044aed3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0044aed4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0044aed8
    PUSH EBP                            ; 0044aedc
    PUSH 0xc                            ; 0044aedd
    PUSH 0x1                            ; 0044aedf
    LEA EAX,[ESI + 0x8]                 ; 0044aee1
    PUSH EAX                            ; 0044aee4
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044aee5
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044aeea
    PUSH EBP                            ; 0044aeed
    PUSH 0xc                            ; 0044aeee
    PUSH 0x1                            ; 0044aef0
    LEA EAX,[ESI + 0x14]                ; 0044aef2
    PUSH EAX                            ; 0044aef5
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044aef6
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044aefb
    PUSH EBP                            ; 0044aefe
    PUSH 0x4                            ; 0044aeff
    PUSH 0x1                            ; 0044af01
    LEA EAX,[ESI + 0x20]                ; 0044af03
    PUSH EAX                            ; 0044af06
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044af07
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044af0c
    PUSH EBP                            ; 0044af0f
    PUSH 0x4                            ; 0044af10
    PUSH 0x1                            ; 0044af12
    LEA EAX,[ESI + 0x28]                ; 0044af14
    PUSH EAX                            ; 0044af17
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044af18
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV EDX,dword ptr [ESI + 0x28]      ; 0044af1d
    ADD ESP,0x10                        ; 0044af20
    TEST EDX,EDX                        ; 0044af23
    JNZ 0x0044af92                      ; 0044af25
        ;   XREF to: 0044af92 (CONDITIONAL_JUMP)  ; LAB_0044af92
    PUSH EBP                            ; 0044af27
        ;   Label: LAB_0044af27
    PUSH 0xc                            ; 0044af28
    MOV ECX,dword ptr [ESI + 0x20]      ; 0044af2a
    PUSH ECX                            ; 0044af2d
    MOV EBX,dword ptr [ESI + 0x24]      ; 0044af2e
    PUSH EBX                            ; 0044af31
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044af32
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044af37
    MOV EDI,dword ptr [ESI + 0x28]      ; 0044af3a
    XOR EBX,EBX                         ; 0044af3d
    TEST EDI,EDI                        ; 0044af3f
    JLE 0x0044af70                      ; 0044af41
        ;   XREF to: 0044af70 (CONDITIONAL_JUMP)  ; LAB_0044af70
    XOR EDI,EDI                         ; 0044af43
    MOV EAX,dword ptr [ESI + 0x24]      ; 0044af45
        ;   Label: LAB_0044af45
    PUSH EAX                            ; 0044af48
    MOV EAX,dword ptr [ESI + 0x2c]      ; 0044af49
    PUSH EBP                            ; 0044af4c
    ADD EAX,EDI                         ; 0044af4d
    PUSH EAX                            ; 0044af4f
    INC EBX                             ; 0044af50
    CALL core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0 ; 0044af51
        ;   XREF to: 00448ec0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0()
    ADD EDI,0x20                        ; 0044af56
    MOV EDX,dword ptr [ESI + 0x28]      ; 0044af59
    ADD ESP,0xc                         ; 0044af5c
    CMP EBX,EDX                         ; 0044af5f
    JL 0x0044af45                       ; 0044af61
        ;   XREF to: 0044af45 (CONDITIONAL_JUMP)  ; LAB_0044af45
    LEA EAX,[EAX]                       ; 0044af63
    LEA EDX,[EDX]                       ; 0044af69
    NOP                                 ; 0044af6f
    MOV ECX,dword ptr [ESI + 0x28]      ; 0044af70
        ;   Label: LAB_0044af70
    TEST ECX,ECX                        ; 0044af73
    JZ 0x0044af87                       ; 0044af75
        ;   XREF to: 0044af87 (CONDITIONAL_JUMP)  ; LAB_0044af87
    PUSH EBP                            ; 0044af77
    PUSH ECX                            ; 0044af78
    PUSH 0x1                            ; 0044af79
    MOV EDI,dword ptr [ESI + 0x30]      ; 0044af7b
    PUSH EDI                            ; 0044af7e
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044af7f
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 0044af84
    CMP dword ptr [ESI + 0x28],0x0      ; 0044af87
        ;   Label: LAB_0044af87
    JNZ 0x0044af9d                      ; 0044af8b
        ;   XREF to: 0044af9d (CONDITIONAL_JUMP)  ; LAB_0044af9d
    POP EBP                             ; 0044af8d
    POP EDI                             ; 0044af8e
    POP ESI                             ; 0044af8f
    POP EBX                             ; 0044af90
    RET                                 ; 0044af91
    PUSH ESI                            ; 0044af92
        ;   Label: LAB_0044af92
    CALL core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0 ; 0044af93
        ;   XREF to: 0044acb0 (UNCONDITIONAL_CALL)  ; undefined core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0()
    ADD ESP,0x4                         ; 0044af98
    JMP 0x0044af27                      ; 0044af9b
        ;   XREF to: 0044af27 (UNCONDITIONAL_JUMP)  ; LAB_0044af27
    PUSH EBP                            ; 0044af9d
        ;   Label: LAB_0044af9d
    PUSH 0x40                           ; 0044af9e
    PUSH 0x1                            ; 0044afa0
    MOV EDX,dword ptr [ESI]             ; 0044afa2
    PUSH EDX                            ; 0044afa4
    CALL crt_stdio.c_fread_FUN_005636d0 ; 0044afa5
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV ECX,0x40                        ; 0044afaa
    ADD ESP,0x10                        ; 0044afaf
    MOV EAX,dword ptr [ESI]             ; 0044afb2
    MOV EDI,dword ptr [ESI + 0x4]       ; 0044afb4
    MOV ESI,EAX                         ; 0044afb7
    PUSH EDI                            ; 0044afb9
    MOV EAX,ECX                         ; 0044afba
    SHR ECX,0x2                         ; 0044afbc
    MOVSD.REP ES:EDI,ESI                ; 0044afbf
    MOV CL,AL                           ; 0044afc1
    AND CL,0x3                          ; 0044afc3
    MOVSB.REP ES:EDI,ESI                ; 0044afc6
    POP EDI                             ; 0044afc8
    POP EBP                             ; 0044afc9
    POP EDI                             ; 0044afca
    POP ESI                             ; 0044afcb
    POP EBX                             ; 0044afcc
    RET                                 ; 0044afcd

