; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046d100(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00533b80 at 00533b9b
;
; Called Functions:
;   engine_light.cpp_setDirectionalLightVector_FUN_004e0b50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046d100
        ;   Label: engine_matrix.c_FUN_0046d100
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046d101
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046d105
    PUSH EDX                            ; 0046d108
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046d109
    PUSH ECX                            ; 0046d10c
    MOV EBX,dword ptr [EAX]             ; 0046d10d
    PUSH EBX                            ; 0046d10f
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004e0b50 ; 0046d110
        ;   XREF to: 004e0b50 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0046d115
    POP EBX                             ; 0046d118
    RET                                 ; 0046d119

