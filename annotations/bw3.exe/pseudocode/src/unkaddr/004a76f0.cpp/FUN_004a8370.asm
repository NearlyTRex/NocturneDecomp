; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a76f0_cpp_FUN_004a8370(undefined4 *param_1)
;
;
; XREF[5]:
;   core_fldnotes.cpp_FUN_004a8490 at 004a8498
;   core_fldnotes.cpp_FUN_004a8680 at 004a8690
;   core_fldnotes.cpp_FUN_004aa780 at 004aa785
;   core_fldnotes.cpp_PageResource_Bitmap_ctor_FUN_004a8650 at 004a8655
;   core_fldnotes.cpp_PageResource_TwanaEntry_ctor_FUN_004a88d0 at 004a88d6
;
; Referenced Globals:
;   void* PTR_unkaddr_004a76f0.cpp_FUN_004a83a0_005e0284 = 004a83a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a8370
        ;   Label: unkaddr_004a76f0.cpp_FUN_004a8370
    MOV dword ptr [EAX + 0x10],0x0      ; 004a8374
    MOV dword ptr [EAX + 0xc],0x0       ; 004a837b
    MOV dword ptr [EAX + 0x4],0x0       ; 004a8382
    MOV dword ptr [EAX + 0x14],0x5e0284 ; 004a8389 | PTR_unkaddr_004a76f0.cpp_FUN_004a83a0_005e0284
    MOV EDX,dword ptr [EAX + 0xc]       ; 004a8390
    MOV dword ptr [EAX + 0x8],EDX       ; 004a8393
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a8396
    MOV dword ptr [EAX],EDX             ; 004a8399
    RET                                 ; 004a839b

