; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ushort unkafter_basicene_cpp_FUN_0059f660(int param_1,float param_2)
;
;
; XREF[1]:
;   unkafter_basicene.cpp_FUN_0059f420 at 0059f4d2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059f660
        ;   Label: unkafter_basicene.cpp_FUN_0059f660
    CMP dword ptr [EDX + 0x113d0],0x0   ; 0059f664
    JZ 0x0059f688                       ; 0059f66b
        ;   XREF to: 0059f688 (CONDITIONAL_JUMP)  ; LAB_0059f688
    FLD float ptr [EDX + 0x11404]       ; 0059f66d
    FADD float ptr [ESP + 0x8]          ; 0059f673
    FST float ptr [EDX + 0x11404]       ; 0059f677
    FCOMP float ptr [EDX + 0x11400]     ; 0059f67d
    FNSTSW AX                           ; 0059f683
    SAHF                                ; 0059f685
    JA 0x0059f689                       ; 0059f686
        ;   XREF to: 0059f689 (CONDITIONAL_JUMP)  ; LAB_0059f689
    RET                                 ; 0059f688
        ;   Label: LAB_0059f688
    MOV dword ptr [EDX + 0x113d0],0x0   ; 0059f689
        ;   Label: LAB_0059f689
    MOV dword ptr [EDX + 0x11404],0x0   ; 0059f693
    LEA EAX,[EAX]                       ; 0059f69d

