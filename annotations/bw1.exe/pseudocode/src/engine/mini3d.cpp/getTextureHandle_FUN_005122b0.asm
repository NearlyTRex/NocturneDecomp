; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_005122b0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c83484
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83484],0x0      ; 005122b0 | DAT_02c83484
        ;   Label: engine_mini3d.cpp_getTextureHandle_FUN_005122b0
    JZ 0x005122c2                       ; 005122b7
        ;   XREF to: 005122c2 (CONDITIONAL_JUMP)  ; LAB_005122c2
    CMP dword ptr [0x01c50948],0x0      ; 005122b9 | DAT_01c50948
    JNZ 0x005122c5                      ; 005122c0
        ;   XREF to: 005122c5 (CONDITIONAL_JUMP)  ; LAB_005122c5
    XOR EAX,EAX                         ; 005122c2
        ;   Label: LAB_005122c2
    RET                                 ; 005122c4
    CALL dword ptr [0x02c83484]         ; 005122c5 | DAT_02c83484
        ;   Label: LAB_005122c5
    RET                                 ; 005122cb

