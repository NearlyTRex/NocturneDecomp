; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_enableClipping_FUN_00514b10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d25000
;   undefined4 DAT_02c83494
;
; *****************************************************************************

section .text

    MOV EDX,0x1                         ; 00514b10
        ;   Label: engine_mini3d.cpp_enableClipping_FUN_00514b10
    MOV ECX,dword ptr [0x02c83494]      ; 00514b15 | DAT_02c83494
    MOV dword ptr [0x01d25000],EDX      ; 00514b1b | DAT_01d25000
    TEST ECX,ECX                        ; 00514b21
    JZ 0x00514b2e                       ; 00514b23
        ;   XREF to: 00514b2e (CONDITIONAL_JUMP)  ; LAB_00514b2e
    CMP dword ptr [0x01c50948],0x0      ; 00514b25 | DAT_01c50948
    JNZ 0x00514afc                      ; 00514b2c
        ;   XREF to: 00514afc (CONDITIONAL_JUMP)  ; LAB_00514afc
    RET                                 ; 00514b2e
        ;   Label: LAB_00514b2e

