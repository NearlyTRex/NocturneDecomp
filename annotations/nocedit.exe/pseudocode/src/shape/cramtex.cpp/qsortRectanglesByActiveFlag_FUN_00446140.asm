; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl shape_cramtex_cpp_qsortRectanglesByActiveFlag_FUN_00446140 (SCramRectangle **rect_a,SCramRectangle **rect_b)
;
; Parameters:
; SCramRectangle * * Stack[0xc]:4   rect_a
; SCramRectangle * * Stack[0x10]:4   rect_b
;
; XREF[1]:
;   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 at 00446249
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4                            ; 00446140
        ;   Label: shape_cramtex.cpp_qsortRectanglesByActiveFlag_FUN_00446140
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00446145
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044614a
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044614e
    MOV EAX,dword ptr [EAX]             ; 00446152
    MOV EDX,dword ptr [EDX]             ; 00446154
    MOV EAX,dword ptr [EAX + 0x24]      ; 00446156
    SUB EAX,dword ptr [EDX + 0x24]      ; 00446159
    RET                                 ; 0044615c

