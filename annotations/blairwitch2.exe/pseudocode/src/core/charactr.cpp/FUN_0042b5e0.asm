; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_0042b5e0(int param_1,float param_2)
;
;
; XREF[2]:
;   core_basicene.cpp_CBasicEnemy_process_FUN_0059f420 at 0059f4df
;   core_doc.cpp_CDoc_process_FUN_00450b20 at 00450bc8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b5e0
        ;   Label: core_charactr.cpp_FUN_0042b5e0
    CMP dword ptr [EDX + 0x10a28],0x0   ; 0042b5e4
    JZ 0x0042b606                       ; 0042b5eb
        ;   XREF to: 0042b606 (CONDITIONAL_JUMP)  ; LAB_0042b606
    FLD float ptr [EDX + 0x10a38]       ; 0042b5ed
    FSUB float ptr [ESP + 0x8]          ; 0042b5f3
    FST float ptr [EDX + 0x10a38]       ; 0042b5f7
    FLDZ                                ; 0042b5fd
    FCOMPP                              ; 0042b5ff
    FNSTSW AX                           ; 0042b601
    SAHF                                ; 0042b603
    JNC 0x0042b607                      ; 0042b604
        ;   XREF to: 0042b607 (CONDITIONAL_JUMP)  ; LAB_0042b607
    RET                                 ; 0042b606
        ;   Label: LAB_0042b606
    MOV dword ptr [EDX + 0x10a38],0x0   ; 0042b607
        ;   Label: LAB_0042b607
    RET                                 ; 0042b611

