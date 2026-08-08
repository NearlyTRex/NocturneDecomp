; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_sync_FUN_00532b30(void)
;
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70 at 0046afca
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40 at 0050dfcc
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0 at 0050e06c
;
; Referenced Globals:
;   int g_UseExternalRenderer
;   APIDLL_sync* g_APIDLL_sync
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532b30 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_sync_FUN_00532b30
    JNZ 0x00532b3c                      ; 00532b37
        ;   XREF to: 00532b3c (CONDITIONAL_JUMP)  ; LAB_00532b3c
    XOR EAX,EAX                         ; 00532b39
    RET                                 ; 00532b3b
    CALL dword ptr [0x02dc9dd0]         ; 00532b3c | g_APIDLL_sync
        ;   Label: LAB_00532b3c
    RET                                 ; 00532b42

