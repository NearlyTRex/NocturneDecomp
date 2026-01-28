; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl shape_superopt_cpp_getSignedTriangleArea2D_FUN_005d6640(CVector2d *p1,CVector2d *p2,CVector2d *p3)
;
; Parameters:
; CVector2d *      Stack[0x8]:4   p1
; CVector2d *      Stack[0xc]:4   p2
; CVector2d *      Stack[0x10]:4   p3
; Local Variables:
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[3]:
;   shape_superopt.cpp_CPoly_containsPoint2D_FUN_005d0340 at 005d0c65
;   shape_superopt.cpp_FUN_005cb3a0 at 005cb90e
;   shape_superopt.cpp_FUN_005cbf90 at 005cc2dc
;
; Referenced Globals:
;   double DOUBLE_00654552 = 1.00000000000000E-10
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005d6640
        ;   Label: shape_superopt.cpp_getSignedTriangleArea2D_FUN_005d6640
    MOV EBP,ESP                         ; 005d6641
    SUB ESP,0x18                        ; 005d6643
    AND ESP,0xfffffff8                  ; 005d6646
    MOV EAX,dword ptr [EBP + 0x8]       ; 005d6649
    MOV EDX,dword ptr [EBP + 0xc]       ; 005d664c
    MOV ECX,dword ptr [EBP + 0x10]      ; 005d664f
    FLD double ptr [ECX + 0x8]          ; 005d6652
    FSUB double ptr [EAX + 0x8]         ; 005d6655
    FLD double ptr [EDX]                ; 005d6658
    FSUB double ptr [EAX]               ; 005d665a
    FMULP                               ; 005d665c
    FLD double ptr [EDX + 0x8]          ; 005d665e
    FSUB double ptr [EAX + 0x8]         ; 005d6661
    FLD double ptr [ECX]                ; 005d6664
    FSUB double ptr [EAX]               ; 005d6666
    FMULP                               ; 005d6668
    FSUBP                               ; 005d666a
    FLDZ                                ; 005d666c
    FXCH                                ; 005d666e
    FSTP double ptr [ESP + 0x8]         ; 005d6670
    FCOMP double ptr [ESP + 0x8]        ; 005d6674
    FNSTSW AX                           ; 005d6678
    SAHF                                ; 005d667a
    JBE 0x005d66aa                      ; 005d667b
        ;   XREF to: 005d66aa (CONDITIONAL_JUMP)  ; LAB_005d66aa
    FLD double ptr [ESP + 0x8]          ; 005d667d
    FCHS                                ; 005d6681
    FSTP double ptr [ESP]               ; 005d6683
    FLD double ptr [ESP]                ; 005d6686
        ;   Label: LAB_005d6686
    FCOMP double ptr [0x00654552]       ; 005d6689 | DOUBLE_00654552
    FNSTSW AX                           ; 005d668f
    SAHF                                ; 005d6691
    JNC 0x005d66bb                      ; 005d6692
        ;   XREF to: 005d66bb (CONDITIONAL_JUMP)  ; LAB_005d66bb
    XOR EDX,EDX                         ; 005d6694
    MOV dword ptr [ESP + 0x10],EDX      ; 005d6696
    MOV dword ptr [ESP + 0x14],EDX      ; 005d669a
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d669e
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d66a2
    MOV ESP,EBP                         ; 005d66a6
    POP EBP                             ; 005d66a8
    RET                                 ; 005d66a9
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d66aa
        ;   Label: LAB_005d66aa
    MOV dword ptr [ESP],EAX             ; 005d66ae
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d66b1
    MOV dword ptr [ESP + 0x4],EAX       ; 005d66b5
    JMP 0x005d6686                      ; 005d66b9
        ;   XREF to: 005d6686 (UNCONDITIONAL_JUMP)  ; LAB_005d6686
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d66bb
        ;   Label: LAB_005d66bb
    MOV dword ptr [ESP + 0x10],EAX      ; 005d66bf
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d66c3
    MOV dword ptr [ESP + 0x14],EAX      ; 005d66c7
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d66cb
    MOV EDX,dword ptr [ESP + 0x14]      ; 005d66cf
    MOV ESP,EBP                         ; 005d66d3
    POP EBP                             ; 005d66d5
    RET                                 ; 005d66d6

