; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl bool __cdecl core_filmreel_cpp_FUN_004be8f0(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004be8f0
        ;   Label: core_filmreel.cpp_FUN_004be8f0
    CMP dword ptr [EAX + 0x2d4],0x0     ; 004be8f4
    SETZ AL                             ; 004be8fb
    AND EAX,0xff                        ; 004be8fe
    RET                                 ; 004be903

