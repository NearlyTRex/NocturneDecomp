; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_basicene_cpp_FUN_0059f5b0(int param_1,float param_2)
;
;
; XREF[1]:
;   core_basicene.cpp_CBasicEnemy_process_FUN_0059f420 at 0059f4c5
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059f5b0
        ;   Label: unkafter_basicene.cpp_FUN_0059f5b0
    CMP dword ptr [EDX + 0x113b8],0x0   ; 0059f5b4
    JZ 0x0059f61a                       ; 0059f5bb
        ;   XREF to: 0059f61a (CONDITIONAL_JUMP)  ; LAB_0059f61a
    FLD float ptr [EDX + 0x113cc]       ; 0059f5bd
    FSUB float ptr [ESP + 0x8]          ; 0059f5c3
    FST float ptr [EDX + 0x113cc]       ; 0059f5c7
    FLDZ                                ; 0059f5cd
    FCOMPP                              ; 0059f5cf
    FNSTSW AX                           ; 0059f5d1
    SAHF                                ; 0059f5d3
    JNC 0x0059f61b                      ; 0059f5d4
        ;   XREF to: 0059f61b (CONDITIONAL_JUMP)  ; LAB_0059f61b
    FLD float ptr [EDX + 0x113c8]       ; 0059f5d6
    FSUB float ptr [EDX + 0x113cc]      ; 0059f5dc
    FDIV float ptr [EDX + 0x113c8]      ; 0059f5e2
    FLD float ptr [EDX + 0x113c0]       ; 0059f5e8
    FSUB float ptr [EDX + 0x113bc]      ; 0059f5ee
    FMULP                               ; 0059f5f4
    FADD float ptr [EDX + 0x113bc]      ; 0059f5f6
    FST float ptr [EDX + 0x113c4]       ; 0059f5fc
    FLDZ                                ; 0059f602
    FCOMPP                              ; 0059f604
    FNSTSW AX                           ; 0059f606
    SAHF                                ; 0059f608
    JA 0x0059f632                       ; 0059f609
        ;   XREF to: 0059f632 (CONDITIONAL_JUMP)  ; LAB_0059f632
    FLD float ptr [EDX + 0x113c4]       ; 0059f60b
    FLD1                                ; 0059f611
    FCOMPP                              ; 0059f613
    FNSTSW AX                           ; 0059f615
    SAHF                                ; 0059f617
    JC 0x0059f64c                       ; 0059f618
        ;   XREF to: 0059f64c (CONDITIONAL_JUMP)  ; LAB_0059f64c
    RET                                 ; 0059f61a
        ;   Label: LAB_0059f61a
    MOV dword ptr [EDX + 0x113b8],0x0   ; 0059f61b
        ;   Label: LAB_0059f61b
    MOV EAX,dword ptr [EDX + 0x113c0]   ; 0059f625
    MOV dword ptr [EDX + 0x113c4],EAX   ; 0059f62b
    RET                                 ; 0059f631
    MOV dword ptr [EDX + 0x113c4],0x0   ; 0059f632
        ;   Label: LAB_0059f632
    FLD float ptr [EDX + 0x113c4]       ; 0059f63c
    FLD1                                ; 0059f642
    FCOMPP                              ; 0059f644
    FNSTSW AX                           ; 0059f646
    SAHF                                ; 0059f648
    JC 0x0059f64c                       ; 0059f649
        ;   XREF to: 0059f64c (CONDITIONAL_JUMP)  ; LAB_0059f64c
    RET                                 ; 0059f64b
    MOV dword ptr [EDX + 0x113c4],0x3f800000 ; 0059f64c
        ;   Label: LAB_0059f64c
    RET                                 ; 0059f656

