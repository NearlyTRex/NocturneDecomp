; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl engine_special_cpp_sync_FUN_00532b30(void)
;
;
; XREF[3]:
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_0046af70 at 0046afca
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_0050df40 at 0050dfcc
;   core_set.cpp_FUN_0050dfe0 at 0050e06c
;
; Referenced Globals:
;   undefined4 DAT_01c02594
;   undefined4 DAT_02dc9dd0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 00532b30 | DAT_01c02594
        ;   Label: engine_special.cpp_sync_FUN_00532b30
    JNZ 0x00532b3c                      ; 00532b37
        ;   XREF to: 00532b3c (CONDITIONAL_JUMP)  ; LAB_00532b3c
    XOR EAX,EAX                         ; 00532b39
    RET                                 ; 00532b3b
    CALL dword ptr [0x02dc9dd0]         ; 00532b3c | DAT_02dc9dd0
        ;   Label: LAB_00532b3c
    RET                                 ; 00532b42

