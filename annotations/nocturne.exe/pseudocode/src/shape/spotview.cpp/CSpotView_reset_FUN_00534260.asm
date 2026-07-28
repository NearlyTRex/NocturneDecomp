; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_00534260(CSpotView *this_ptr,uint control_flags)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   control_flags
;
; XREF[2]:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00534200 at 00534252
;   shape_spotview.cpp_CSpotView_handleInput_FUN_005342b0 at 00534577
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00534260
        ;   Label: shape_spotview.cpp_CSpotView_reset_FUN_00534260
    MOV EDX,dword ptr [ESP + 0x8]       ; 00534264
    TEST DL,0x1                         ; 00534268
    JNZ 0x00534299                      ; 0053426b
        ;   XREF to: 00534299 (CONDITIONAL_JUMP)  ; LAB_00534299
    TEST DL,0x2                         ; 0053426d
        ;   Label: LAB_0053426d
    JZ 0x00534278                       ; 00534270
        ;   XREF to: 00534278 (CONDITIONAL_JUMP)  ; LAB_00534278
    MOV ECX,dword ptr [EAX + 0xc]       ; 00534272
    MOV dword ptr [EAX + 0x28],ECX      ; 00534275
    TEST DL,0x8                         ; 00534278
        ;   Label: LAB_00534278
    JZ 0x00534289                       ; 0053427b
        ;   XREF to: 00534289 (CONDITIONAL_JUMP)  ; LAB_00534289
    FLD float ptr [EAX + 0x10]          ; 0053427d
    MOV ECX,dword ptr [EAX + 0x14]      ; 00534280
    MOV dword ptr [EAX + 0x34],ECX      ; 00534283
    FSTP float ptr [EAX + 0x30]         ; 00534286
    TEST DL,0x4                         ; 00534289
        ;   Label: LAB_00534289
    JZ 0x00534293                       ; 0053428c
        ;   XREF to: 00534293 (CONDITIONAL_JUMP)  ; LAB_00534293
    MOV ECX,dword ptr [EAX]             ; 0053428e
    MOV dword ptr [EAX + 0x2c],ECX      ; 00534290
    TEST DL,0x10                        ; 00534293
        ;   Label: LAB_00534293
    JNZ 0x005342a1                      ; 00534296
        ;   XREF to: 005342a1 (CONDITIONAL_JUMP)  ; LAB_005342a1
    RET                                 ; 00534298
    MOV ECX,dword ptr [EAX + 0x8]       ; 00534299
        ;   Label: LAB_00534299
    MOV dword ptr [EAX + 0x24],ECX      ; 0053429c
    JMP 0x0053426d                      ; 0053429f
        ;   XREF to: 0053426d (UNCONDITIONAL_JUMP)  ; LAB_0053426d
    MOV EDX,dword ptr [EAX + 0x4]       ; 005342a1
        ;   Label: LAB_005342a1
    MOV dword ptr [EAX + 0x38],EDX      ; 005342a4
    RET                                 ; 005342a7

