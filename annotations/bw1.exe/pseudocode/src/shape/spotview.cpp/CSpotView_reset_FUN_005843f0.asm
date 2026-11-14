; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_spotview_cpp_CSpotView_reset_FUN_005843f0(CSpotView *this_ptr,uint control_flags)
;
; Parameters:
; CSpotView *      Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   control_flags
;
; XREF[2]:
;   shape_spotview.cpp_CSpotView_ctor_FUN_00584390 at 005843e2
;   shape_spotview.cpp_FUN_00584440 at 00584707
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005843f0
        ;   Label: shape_spotview.cpp_CSpotView_reset_FUN_005843f0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005843f4
    TEST DL,0x1                         ; 005843f8
    JNZ 0x00584429                      ; 005843fb
        ;   XREF to: 00584429 (CONDITIONAL_JUMP)  ; LAB_00584429
    TEST DL,0x2                         ; 005843fd
        ;   Label: LAB_005843fd
    JZ 0x00584408                       ; 00584400
        ;   XREF to: 00584408 (CONDITIONAL_JUMP)  ; LAB_00584408
    MOV ECX,dword ptr [EAX + 0xc]       ; 00584402
    MOV dword ptr [EAX + 0x28],ECX      ; 00584405
    TEST DL,0x8                         ; 00584408
        ;   Label: LAB_00584408
    JZ 0x00584419                       ; 0058440b
        ;   XREF to: 00584419 (CONDITIONAL_JUMP)  ; LAB_00584419
    FLD float ptr [EAX + 0x10]          ; 0058440d
    MOV ECX,dword ptr [EAX + 0x14]      ; 00584410
    MOV dword ptr [EAX + 0x34],ECX      ; 00584413
    FSTP float ptr [EAX + 0x30]         ; 00584416
    TEST DL,0x4                         ; 00584419
        ;   Label: LAB_00584419
    JZ 0x00584423                       ; 0058441c
        ;   XREF to: 00584423 (CONDITIONAL_JUMP)  ; LAB_00584423
    MOV ECX,dword ptr [EAX]             ; 0058441e
    MOV dword ptr [EAX + 0x2c],ECX      ; 00584420
    TEST DL,0x10                        ; 00584423
        ;   Label: LAB_00584423
    JNZ 0x00584431                      ; 00584426
        ;   XREF to: 00584431 (CONDITIONAL_JUMP)  ; LAB_00584431
    RET                                 ; 00584428
    MOV ECX,dword ptr [EAX + 0x8]       ; 00584429
        ;   Label: LAB_00584429
    MOV dword ptr [EAX + 0x24],ECX      ; 0058442c
    JMP 0x005843fd                      ; 0058442f
        ;   XREF to: 005843fd (UNCONDITIONAL_JUMP)  ; LAB_005843fd
    MOV EDX,dword ptr [EAX + 0x4]       ; 00584431
        ;   Label: LAB_00584431
    MOV dword ptr [EAX + 0x38],EDX      ; 00584434
    RET                                 ; 00584437

