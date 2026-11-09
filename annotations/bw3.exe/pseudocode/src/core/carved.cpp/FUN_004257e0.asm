; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_carved_cpp_FUN_004257e0(float *param_1)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
; undefined8       Stack[-0x10]:8  local_10
;
; XREF[1]:
;   core_carved.cpp_FUN_00427bc0 at 00428355
;
; Referenced Globals:
;   undefined4 DAT_005b79af
;   undefined4 DAT_005b79b7
;   undefined4 DAT_005b79bf
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 004257e0
        ;   Label: core_carved.cpp_FUN_004257e0
    MOV EBP,ESP                         ; 004257e1
    SUB ESP,0x28                        ; 004257e3
    AND ESP,0xfffffff8                  ; 004257e6
    MOV EDX,dword ptr [EBP + 0x8]       ; 004257e9
    FLD float ptr [EDX]                 ; 004257ec
    FST double ptr [ESP + 0x8]          ; 004257ee
    FCOMP double ptr [0x005b79af]       ; 004257f2 | DAT_005b79af
    FNSTSW AX                           ; 004257f8
    SAHF                                ; 004257fa
    JC 0x004258b8                       ; 004257fb
        ;   XREF to: 004258b8 (CONDITIONAL_JUMP)  ; LAB_004258b8
    FLD float ptr [EDX]                 ; 00425801
        ;   Label: LAB_00425801
    FLD1                                ; 00425803
    FCOMPP                              ; 00425805
    FNSTSW AX                           ; 00425807
    SAHF                                ; 00425809
    JBE 0x00425852                      ; 0042580a
        ;   XREF to: 00425852 (CONDITIONAL_JUMP)  ; LAB_00425852
    FLD float ptr [EDX + 0x4]           ; 0042580c
    FLD1                                ; 0042580f
    FCOMPP                              ; 00425811
    FNSTSW AX                           ; 00425813
    SAHF                                ; 00425815
    JBE 0x00425852                      ; 00425816
        ;   XREF to: 00425852 (CONDITIONAL_JUMP)  ; LAB_00425852
    FLD float ptr [EDX + 0x8]           ; 00425818
    FST double ptr [ESP + 0x20]         ; 0042581b
    FCOMP double ptr [0x005b79af]       ; 0042581f | DAT_005b79af
    FNSTSW AX                           ; 00425825
    SAHF                                ; 00425827
    JBE 0x00425852                      ; 00425828
        ;   XREF to: 00425852 (CONDITIONAL_JUMP)  ; LAB_00425852
    FLD double ptr [ESP + 0x20]         ; 0042582a
    FCOMP double ptr [0x005b79bf]       ; 0042582e | DAT_005b79bf
    FNSTSW AX                           ; 00425834
    SAHF                                ; 00425836
    JNC 0x00425852                      ; 00425837
        ;   XREF to: 00425852 (CONDITIONAL_JUMP)  ; LAB_00425852
    FLD float ptr [EDX + 0x8]           ; 00425839
    FCOMP float ptr [EDX]               ; 0042583c
    FNSTSW AX                           ; 0042583e
    SAHF                                ; 00425840
    JBE 0x00425852                      ; 00425841
        ;   XREF to: 00425852 (CONDITIONAL_JUMP)  ; LAB_00425852
    FLD float ptr [EDX + 0x8]           ; 00425843
    FCOMP float ptr [EDX + 0x4]         ; 00425846
    FNSTSW AX                           ; 00425849
    SAHF                                ; 0042584b
    JA 0x00425921                       ; 0042584c
        ;   XREF to: 00425921 (CONDITIONAL_JUMP)  ; LAB_00425921
    FLD float ptr [EDX]                 ; 00425852
        ;   Label: LAB_00425852
    FLD1                                ; 00425854
    FCOMPP                              ; 00425856
    FNSTSW AX                           ; 00425858
    SAHF                                ; 0042585a
    JBE 0x0042591b                      ; 0042585b
        ;   XREF to: 0042591b (CONDITIONAL_JUMP)  ; LAB_0042591b
    FLD float ptr [EDX + 0x4]           ; 00425861
    FLD1                                ; 00425864
    FCOMPP                              ; 00425866
    FNSTSW AX                           ; 00425868
    SAHF                                ; 0042586a
    JBE 0x0042591b                      ; 0042586b
        ;   XREF to: 0042591b (CONDITIONAL_JUMP)  ; LAB_0042591b
    FLD1                                ; 00425871
    FLD float ptr [EDX + 0x8]           ; 00425873
    FSTP double ptr [ESP + 0x10]        ; 00425876
    FCOMP double ptr [ESP + 0x10]       ; 0042587a
    FNSTSW AX                           ; 0042587e
    SAHF                                ; 00425880
    JNC 0x0042591b                      ; 00425881
        ;   XREF to: 0042591b (CONDITIONAL_JUMP)  ; LAB_0042591b
    FLD double ptr [ESP + 0x10]         ; 00425887
    FCOMP double ptr [0x005b79af]       ; 0042588b | DAT_005b79af
    FNSTSW AX                           ; 00425891
    SAHF                                ; 00425893
    JNC 0x0042591b                      ; 00425894
        ;   XREF to: 0042591b (CONDITIONAL_JUMP)  ; LAB_0042591b
    FLD float ptr [EDX + 0x8]           ; 0042589a
    FCOMP float ptr [EDX]               ; 0042589d
    FNSTSW AX                           ; 0042589f
    SAHF                                ; 004258a1
    JBE 0x0042591b                      ; 004258a2
        ;   XREF to: 0042591b (CONDITIONAL_JUMP)  ; LAB_0042591b
    FLD float ptr [EDX + 0x8]           ; 004258a4
    FCOMP float ptr [EDX + 0x4]         ; 004258a7
    FNSTSW AX                           ; 004258aa
    SAHF                                ; 004258ac
    JBE 0x0042591b                      ; 004258ad
        ;   XREF to: 0042591b (CONDITIONAL_JUMP)  ; LAB_0042591b
    MOV EAX,0x3                         ; 004258af
    MOV ESP,EBP                         ; 004258b4
    POP EBP                             ; 004258b6
    RET                                 ; 004258b7
    FLD float ptr [EDX + 0x4]           ; 004258b8
        ;   Label: LAB_004258b8
    FST double ptr [ESP + 0x18]         ; 004258bb
    FCOMP double ptr [0x005b79af]       ; 004258bf | DAT_005b79af
    FNSTSW AX                           ; 004258c5
    SAHF                                ; 004258c7
    JNC 0x00425801                      ; 004258c8
        ;   XREF to: 00425801 (CONDITIONAL_JUMP)  ; LAB_00425801
    FLD float ptr [EDX + 0x8]           ; 004258ce
    FST double ptr [ESP]                ; 004258d1
    FCOMP double ptr [0x005b79af]       ; 004258d4 | DAT_005b79af
    FNSTSW AX                           ; 004258da
    SAHF                                ; 004258dc
    JNC 0x00425801                      ; 004258dd
        ;   XREF to: 00425801 (CONDITIONAL_JUMP)  ; LAB_00425801
    FLD double ptr [ESP + 0x8]          ; 004258e3
    FCOMP double ptr [0x005b79b7]       ; 004258e7 | DAT_005b79b7
    FNSTSW AX                           ; 004258ed
    SAHF                                ; 004258ef
    JBE 0x00425801                      ; 004258f0
        ;   XREF to: 00425801 (CONDITIONAL_JUMP)  ; LAB_00425801
    FLD double ptr [ESP + 0x18]         ; 004258f6
    FCOMP double ptr [0x005b79b7]       ; 004258fa | DAT_005b79b7
    FNSTSW AX                           ; 00425900
    SAHF                                ; 00425902
    JBE 0x00425801                      ; 00425903
        ;   XREF to: 00425801 (CONDITIONAL_JUMP)  ; LAB_00425801
    FLD double ptr [ESP]                ; 00425909
    FCOMP double ptr [0x005b79b7]       ; 0042590c | DAT_005b79b7
    FNSTSW AX                           ; 00425912
    SAHF                                ; 00425914
    JBE 0x00425801                      ; 00425915
        ;   XREF to: 00425801 (CONDITIONAL_JUMP)  ; LAB_00425801
    XOR EAX,EAX                         ; 0042591b
        ;   Label: LAB_0042591b
    MOV ESP,EBP                         ; 0042591d
    POP EBP                             ; 0042591f
    RET                                 ; 00425920
    MOV EAX,0x1                         ; 00425921
        ;   Label: LAB_00425921
    MOV ESP,EBP                         ; 00425926
    POP EBP                             ; 00425928
    RET                                 ; 00425929

