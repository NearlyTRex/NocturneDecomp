; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float engine_drender_cpp_FUN_0046d2d0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_0053adf0 at 0053ae8a
;
; Referenced Globals:
;   undefined4 DAT_005bc573
;   undefined4 DAT_005bc57b
;   undefined4 DAT_005fba44
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0046d2d0
        ;   Label: engine_drender.cpp_FUN_0046d2d0
    FILD dword ptr [0x005fba44]         ; 0046d2d3 | DAT_005fba44
    FDIVR double ptr [0x005bc573]       ; 0046d2d9 | DAT_005bc573
    FMUL double ptr [0x005bc57b]        ; 0046d2df | DAT_005bc57b
    FSTP float ptr [ESP]                ; 0046d2e5
    MOV EAX,dword ptr [ESP]             ; 0046d2e8
    ADD ESP,0x4                         ; 0046d2eb
    RET                                 ; 0046d2ee

