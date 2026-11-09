; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_box_cpp_FUN_0041b660(CBoundingBox3D *this_ptr,CBoundingBox3D *other)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   other
;
; XREF[3]:
;   core_actor.cpp_FUN_004093a0 at 004094ac
;   core_setcolid.cpp_FUN_00534ea0 at 005351fd
;   core_setcolid.cpp_FUN_00537030 at 00537389
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 0041b654
        ;   Label: LAB_0041b654
    RET                                 ; 0041b659
    MOV EDX,dword ptr [ESP + 0x4]       ; 0041b660
        ;   Label: core_box.cpp_FUN_0041b660
    MOV ECX,dword ptr [ESP + 0x8]       ; 0041b664
    FLD float ptr [EDX]                 ; 0041b668
    FCOMP float ptr [ECX + 0xc]         ; 0041b66a
    FNSTSW AX                           ; 0041b66d
    SAHF                                ; 0041b66f
    JA 0x0041b6a8                       ; 0041b670
        ;   XREF to: 0041b6a8 (CONDITIONAL_JUMP)  ; LAB_0041b6a8
    FLD float ptr [EDX + 0xc]           ; 0041b672
    FCOMP float ptr [ECX]               ; 0041b675
    FNSTSW AX                           ; 0041b677
    SAHF                                ; 0041b679
    JC 0x0041b6a8                       ; 0041b67a
        ;   XREF to: 0041b6a8 (CONDITIONAL_JUMP)  ; LAB_0041b6a8
    FLD float ptr [EDX + 0x4]           ; 0041b67c
    FCOMP float ptr [ECX + 0x10]        ; 0041b67f
    FNSTSW AX                           ; 0041b682
    SAHF                                ; 0041b684
    JA 0x0041b6a8                       ; 0041b685
        ;   XREF to: 0041b6a8 (CONDITIONAL_JUMP)  ; LAB_0041b6a8
    FLD float ptr [EDX + 0x10]          ; 0041b687
    FCOMP float ptr [ECX + 0x4]         ; 0041b68a
    FNSTSW AX                           ; 0041b68d
    SAHF                                ; 0041b68f
    JC 0x0041b6a8                       ; 0041b690
        ;   XREF to: 0041b6a8 (CONDITIONAL_JUMP)  ; LAB_0041b6a8
    FLD float ptr [EDX + 0x8]           ; 0041b692
    FCOMP float ptr [ECX + 0x14]        ; 0041b695
    FNSTSW AX                           ; 0041b698
    SAHF                                ; 0041b69a
    JA 0x0041b6a8                       ; 0041b69b
        ;   XREF to: 0041b6a8 (CONDITIONAL_JUMP)  ; LAB_0041b6a8
    FLD float ptr [EDX + 0x14]          ; 0041b69d
    FCOMP float ptr [ECX + 0x8]         ; 0041b6a0
    FNSTSW AX                           ; 0041b6a3
    SAHF                                ; 0041b6a5
    JNC 0x0041b654                      ; 0041b6a6
        ;   XREF to: 0041b654 (CONDITIONAL_JUMP)  ; LAB_0041b654
    XOR EAX,EAX                         ; 0041b6a8
        ;   Label: LAB_0041b6a8
    RET                                 ; 0041b6aa

