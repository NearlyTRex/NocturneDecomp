; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_endScene_FUN_00532360(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00440a20 at 00440a47
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9d90
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532360 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_endScene_FUN_00532360
    JNZ 0x0053236c                      ; 00532367
        ;   XREF to: 0053236c (CONDITIONAL_JUMP)  ; LAB_0053236c
    XOR EAX,EAX                         ; 00532369
    RET                                 ; 0053236b
    CALL dword ptr [0x02dc9d90]         ; 0053236c | DAT_02dc9d90
        ;   Label: LAB_0053236c
    RET                                 ; 00532372

