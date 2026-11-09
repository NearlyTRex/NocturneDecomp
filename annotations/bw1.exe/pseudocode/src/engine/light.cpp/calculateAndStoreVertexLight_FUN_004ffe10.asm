; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_calculateAndStoreVertexLight_FUN_004ffe10(int param_1,int *param_2)
;
;
; XREF[1]:
;   engine_3d.c_processVertexLighting_FUN_004039f0 at 00403a17
;
; Referenced Globals:
;   undefined4 DAT_00629034
;
; Called Functions:
;   engine_light.cpp_calculatePhongLighting_FUN_004ffaf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ffe10
        ;   Label: engine_light.cpp_calculateAndStoreVertexLight_FUN_004ffe10
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ffe11
    MOV EDX,dword ptr [EAX + 0x8]       ; 004ffe15
    PUSH EDX                            ; 004ffe18
    MOV ECX,dword ptr [EAX + 0x4]       ; 004ffe19
    PUSH ECX                            ; 004ffe1c
    MOV EBX,dword ptr [EAX]             ; 004ffe1d
    PUSH EBX                            ; 004ffe1f
    CALL engine_light.cpp_calculatePhongLighting_FUN_004ffaf0 ; 004ffe20
        ;   XREF to: 004ffaf0 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculatePhongLighting_FUN_004ffaf0(int world_x, int world_y, int world_z)
    ADD ESP,0xc                         ; 004ffe25
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ffe28
    MOV ECX,EAX                         ; 004ffe2c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004ffe2e
    SUB EAX,EDX                         ; 004ffe35
    SHL EAX,0x4                         ; 004ffe37
    MOV dword ptr [EAX + 0x629034],ECX  ; 004ffe3a | DAT_00629034
    POP EBX                             ; 004ffe40
    RET                                 ; 004ffe41

