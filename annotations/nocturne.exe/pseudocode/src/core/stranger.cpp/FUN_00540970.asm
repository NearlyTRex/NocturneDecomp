; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float core_stranger_cpp_FUN_00540970(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00540970
        ;   Label: core_stranger.cpp_FUN_00540970
    MOV EDX,dword ptr [ESP + 0x8]       ; 00540973
    MOV EAX,dword ptr [ESP + 0xc]       ; 00540977
    FLD float ptr [EDX + 0x4]           ; 0054097b
    FMUL float ptr [EAX + 0x4]          ; 0054097e
    FLD float ptr [EDX]                 ; 00540981
    FMUL float ptr [EAX]                ; 00540983
    FADDP                               ; 00540985
    FLD float ptr [EDX + 0x8]           ; 00540987
    FMUL float ptr [EAX + 0x8]          ; 0054098a
    FADDP                               ; 0054098d
    FSTP float ptr [ESP]                ; 0054098f
    MOV EAX,dword ptr [ESP]             ; 00540992
    ADD ESP,0x4                         ; 00540995
    RET                                 ; 00540998

