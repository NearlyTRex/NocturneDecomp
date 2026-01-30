; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float __cdecl core_cloth_cpp_FUN_0043e320(void)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0043e320
        ;   Label: core_cloth.cpp_FUN_0043e320
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043e323
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043e327
    FLD float ptr [EDX + 0x4]           ; 0043e32b
    FMUL float ptr [EAX + 0x4]          ; 0043e32e
    FLD float ptr [EDX]                 ; 0043e331
    FMUL float ptr [EAX]                ; 0043e333
    FADDP                               ; 0043e335
    FLD float ptr [EDX + 0x8]           ; 0043e337
    FMUL float ptr [EAX + 0x8]          ; 0043e33a
    FADDP                               ; 0043e33d
    FSTP float ptr [ESP]                ; 0043e33f
    MOV EAX,dword ptr [ESP]             ; 0043e342
    ADD ESP,0x4                         ; 0043e345
    RET                                 ; 0043e348

