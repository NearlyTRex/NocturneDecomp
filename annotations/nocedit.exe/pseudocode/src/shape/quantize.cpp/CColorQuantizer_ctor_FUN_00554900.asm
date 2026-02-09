; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CColorQuantizer * __cdecl shape_quantize_cpp_CColorQuantizer_ctor_FUN_00554900(CColorQuantizer *this_ptr)
;
; Parameters:
; CColorQuantizer * Stack[0x8]:4   this_ptr
;
; XREF[1]:
;   shape_quantize.cpp_quantizeRawPixelData_FUN_00556490 at 005565b2
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 00554900
        ;   Label: shape_quantize.cpp_CColorQuantizer_ctor_FUN_00554900
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 00554905
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0055490a
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055490b
    PUSH 0x4b44                         ; 0055490f
    PUSH 0x0                            ; 00554914
    PUSH EBX                            ; 00554916
    CALL crt_memory.c_memset_FUN_005fde40 ; 00554917
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0055491c
    MOV dword ptr [EBX + 0x4b40],0x100  ; 0055491f
    MOV EAX,EBX                         ; 00554929
    MOV dword ptr [EBX + 0x4b34],0xffffffff ; 0055492b
    POP EBX                             ; 00554935
    RET                                 ; 00554936

