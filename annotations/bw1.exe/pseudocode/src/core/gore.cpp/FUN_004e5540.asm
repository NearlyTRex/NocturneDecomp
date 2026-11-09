; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gore_cpp_FUN_004e5540(CBloodPool *this_ptr)
;
; Parameters:
; CBloodPool *     Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_gore.cpp_FUN_004e5e80 at 004e5eff
;
; Referenced Globals:
;   undefined4 DAT_005e40c5
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 g_CGameInstance.field660_0x294
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004e5540
        ;   Label: core_gore.cpp_FUN_004e5540
    MOV EDX,dword ptr [0x0061d95c]      ; 004e5544 | g_CGamePtr
    LEA EAX,[ECX + 0x18]                ; 004e554a
    FLD float ptr [EDX + 0x294]         ; 004e554d | g_CGameInstance.field660_0x294
    FADD float ptr [EAX]                ; 004e5553
    FSTP float ptr [EAX]                ; 004e5555
    FLD float ptr [ECX + 0x18]          ; 004e5557
    FCOMP double ptr [0x005e40c5]       ; 004e555a | DAT_005e40c5
    FNSTSW AX                           ; 004e5560
    SAHF                                ; 004e5562
    JA 0x004e5566                       ; 004e5563
        ;   XREF to: 004e5566 (CONDITIONAL_JUMP)  ; LAB_004e5566
    RET                                 ; 004e5565
    MOV dword ptr [ECX + 0x18],0x40680000 ; 004e5566
        ;   Label: LAB_004e5566
    RET                                 ; 004e556d

