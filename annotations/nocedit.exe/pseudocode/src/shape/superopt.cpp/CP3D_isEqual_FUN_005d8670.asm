; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CP3D_isEqual_FUN_005d8670(CP3D *this_ptr,CP3D *other)
;
; Parameters:
; CP3D *           Stack[0x4]:4   this_ptr
; CP3D *           Stack[0x8]:4   other
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005d8670
        ;   Label: shape_superopt.cpp_CP3D_isEqual_FUN_005d8670
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d8674
    FLD double ptr [EDX]                ; 005d8678
    FCOMP double ptr [ECX]              ; 005d867a
    FNSTSW AX                           ; 005d867c
    SAHF                                ; 005d867e
    JZ 0x005d8684                       ; 005d867f
        ;   XREF to: 005d8684 (CONDITIONAL_JUMP)  ; LAB_005d8684
    XOR EAX,EAX                         ; 005d8681
        ;   Label: LAB_005d8681
    RET                                 ; 005d8683
    FLD double ptr [EDX + 0x8]          ; 005d8684
        ;   Label: LAB_005d8684
    FCOMP double ptr [ECX + 0x8]        ; 005d8687
    FNSTSW AX                           ; 005d868a
    SAHF                                ; 005d868c
    JNZ 0x005d8681                      ; 005d868d
        ;   XREF to: 005d8681 (CONDITIONAL_JUMP)  ; LAB_005d8681
    FLD double ptr [EDX + 0x10]         ; 005d868f
    FCOMP double ptr [ECX + 0x10]       ; 005d8692
    FNSTSW AX                           ; 005d8695
    SAHF                                ; 005d8697
    JNZ 0x005d8681                      ; 005d8698
        ;   XREF to: 005d8681 (CONDITIONAL_JUMP)  ; LAB_005d8681
    MOV EAX,0x1                         ; 005d869a
    RET                                 ; 005d869f

