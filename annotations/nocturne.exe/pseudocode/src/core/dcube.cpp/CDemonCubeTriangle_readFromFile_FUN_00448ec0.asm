; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_load_FUN_0044aed0 at 0044af51
;
; Referenced Globals:
;   undefined4 DAT_014b8a0c
;   undefined4 DAT_014b8a10
;   undefined4 DAT_014b8a14
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448ec0
        ;   Label: core_dcube.cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
    PUSH ESI                            ; 00448ec1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00448ec2
    MOV ESI,dword ptr [ESP + 0x14]      ; 00448ec6
    MOV EDX,dword ptr [ESP + 0x10]      ; 00448eca
    PUSH EDX                            ; 00448ece
    PUSH 0x4                            ; 00448ecf
    PUSH 0x3                            ; 00448ed1
    PUSH 0x14b8a0c                      ; 00448ed3 | DAT_014b8a0c
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00448ed8
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    MOV EDX,dword ptr [0x014b8a0c]      ; 00448edd | DAT_014b8a0c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448ee3
    SUB EAX,EDX                         ; 00448eea
    SHL EAX,0x2                         ; 00448eec
    LEA EDX,[ESI + EAX*0x1]             ; 00448eef
    MOV dword ptr [EBX],EDX             ; 00448ef2
    MOV EDX,dword ptr [0x014b8a10]      ; 00448ef4 | DAT_014b8a10
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448efa
    SUB EAX,EDX                         ; 00448f01
    SHL EAX,0x2                         ; 00448f03
    LEA EDX,[ESI + EAX*0x1]             ; 00448f06
    ADD ESP,0x10                        ; 00448f09
    MOV dword ptr [EBX + 0x4],EDX       ; 00448f0c
    MOV ECX,dword ptr [ESP + 0x10]      ; 00448f0f
    MOV EDX,dword ptr [0x014b8a14]      ; 00448f13 | DAT_014b8a14
    PUSH ECX                            ; 00448f19
    LEA EAX,[EDX*0x4 + 0x0]             ; 00448f1a
    PUSH 0x1                            ; 00448f21
    SUB EAX,EDX                         ; 00448f23
    PUSH 0x14                           ; 00448f25
    SHL EAX,0x2                         ; 00448f27
    ADD EBX,0xc                         ; 00448f2a
    ADD ESI,EAX                         ; 00448f2d
    PUSH EBX                            ; 00448f2f
    MOV dword ptr [EBX + -0x4],ESI      ; 00448f30
    CALL crt_stdio.c_fread_FUN_005636d0 ; 00448f33
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fread_FUN_005636d0()
    ADD ESP,0x10                        ; 00448f38
    POP ESI                             ; 00448f3b
    POP EBX                             ; 00448f3c
    RET                                 ; 00448f3d

