; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_matrix_c_FUN_0046b520(undefined4 param_1,int *param_2)
;
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d0fb
;
; Called Functions:
;   engine_light.cpp_setDirectionalLightVector_FUN_004e2600
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b520
        ;   Label: engine_matrix.c_FUN_0046b520
    MOV EAX,dword ptr [ESP + 0xc]       ; 0046b521
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046b525
    PUSH EDX                            ; 0046b528
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046b529
    PUSH ECX                            ; 0046b52c
    MOV EBX,dword ptr [EAX]             ; 0046b52d
    PUSH EBX                            ; 0046b52f
    CALL engine_light.cpp_setDirectionalLightVector_FUN_004e2600 ; 0046b530
        ;   XREF to: 004e2600 (UNCONDITIONAL_CALL)  ; void engine_light.cpp_setDirectionalLightVector_FUN_004e2600(int dir_x, int dir_y, int dir_z)
    ADD ESP,0xc                         ; 0046b535
    POP EBX                             ; 0046b538
    RET                                 ; 0046b539

