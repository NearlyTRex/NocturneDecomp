; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_unlockHoldBuffer_FUN_00582b90(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_lockAndRenderToBuffer_FUN_00451e20 at 00451e4e
;
; Referenced Globals:
;   void* g_PTR_02c83420
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83420],0x0      ; 00582b90 | g_PTR_02c83420
        ;   Label: engine_special.cpp_unlockHoldBuffer_FUN_00582b90
    JNZ 0x00582b9c                      ; 00582b97
        ;   XREF to: 00582b9c (CONDITIONAL_JUMP)  ; LAB_00582b9c
    XOR EAX,EAX                         ; 00582b99
    RET                                 ; 00582b9b
    CALL dword ptr [0x02c83420]         ; 00582b9c | g_PTR_02c83420
        ;   Label: LAB_00582b9c
    RET                                 ; 00582ba2

