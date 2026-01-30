; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_cloth_cpp_FUN_0043e2c0(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043e2c0
        ;   Label: core_cloth.cpp_FUN_0043e2c0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043e2c3
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043e2c7
    FLD float ptr [EDX + 0x4]           ; 0043e2cb
    FMUL float ptr [EAX + 0x4]          ; 0043e2ce
    FLD float ptr [EDX]                 ; 0043e2d1
    FMUL float ptr [EAX]                ; 0043e2d3
    FADDP                               ; 0043e2d5
    FLD float ptr [EDX + 0x8]           ; 0043e2d7
    FMUL float ptr [EAX + 0x8]          ; 0043e2da
    FADDP                               ; 0043e2dd
    FSTP float ptr [ESP]                ; 0043e2df
    MOV EAX,dword ptr [ESP]             ; 0043e2e2
    ADD ESP,0x4                         ; 0043e2e5
    RET                                 ; 0043e2e8

