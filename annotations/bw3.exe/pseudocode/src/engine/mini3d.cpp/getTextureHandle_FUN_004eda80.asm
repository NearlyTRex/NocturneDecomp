; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_getTextureHandle_FUN_004eda80(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf60e0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02cf60e0],0x0      ; 004eda80 | DAT_02cf60e0
        ;   Label: engine_mini3d.cpp_getTextureHandle_FUN_004eda80
    JZ 0x004eda92                       ; 004eda87
        ;   XREF to: 004eda92 (CONDITIONAL_JUMP)  ; LAB_004eda92
    CMP dword ptr [0x01c6cee8],0x0      ; 004eda89 | DAT_01c6cee8
    JNZ 0x004eda95                      ; 004eda90
        ;   XREF to: 004eda95 (CONDITIONAL_JUMP)  ; LAB_004eda95
    XOR EAX,EAX                         ; 004eda92
        ;   Label: LAB_004eda92
    RET                                 ; 004eda94
    CALL dword ptr [0x02cf60e0]         ; 004eda95 | DAT_02cf60e0
        ;   Label: LAB_004eda95
    RET                                 ; 004eda9b

