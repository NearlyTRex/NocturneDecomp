; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0046e730(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_doc.cpp_FUN_00469550 at 00469fe1
;
; Referenced Globals:
;   undefined4 DAT_005d9ffc
;   undefined4 DAT_005da004
;   undefined4 DAT_005da00c
;   undefined4 DAT_005da014
;   undefined4 DAT_005da01c
;   undefined4 DAT_01b68864
;   undefined4 DAT_01b68868
;
; Called Functions:
;   core_motion.cpp_FUN_00524a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046e730
        ;   Label: core_doc.cpp_FUN_0046e730
    PUSH ESI                            ; 0046e731
    PUSH EDI                            ; 0046e732
    PUSH EBP                            ; 0046e733
    MOV EBP,ESP                         ; 0046e734
    SUB ESP,0x34                        ; 0046e736
    AND ESP,0xfffffff8                  ; 0046e739
    MOV EBX,dword ptr [EBP + 0x14]      ; 0046e73c
    LEA EAX,[EBX + 0x2004c]             ; 0046e73f
    MOV dword ptr [EAX + 0x8],0x0       ; 0046e745
    PUSH 0x0                            ; 0046e74c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0046e74e
    MOV dword ptr [EAX + 0x4],EDX       ; 0046e751
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046e754
    MOV dword ptr [EAX],EDX             ; 0046e757
    LEA EAX,[EBX + 0x158]               ; 0046e759
    PUSH EAX                            ; 0046e75f
    CALL core_motion.cpp_FUN_00524a40   ; 0046e760
        ;   XREF to: 00524a40 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_00524a40()
    MOV dword ptr [ESP + 0x38],EAX      ; 0046e765
    FLD float ptr [ESP + 0x38]          ; 0046e769
    ADD ESP,0x8                         ; 0046e76d
    FLDZ                                ; 0046e770
    FXCH                                ; 0046e772
    FSTP double ptr [ESP + 0x8]         ; 0046e774
    FCOMP double ptr [ESP + 0x8]        ; 0046e778
    FNSTSW AX                           ; 0046e77c
    SAHF                                ; 0046e77e
    JNC 0x0046e8d8                      ; 0046e77f
        ;   XREF to: 0046e8d8 (CONDITIONAL_JUMP)  ; LAB_0046e8d8
    FLD float ptr [EBX + 0x20028]       ; 0046e785
    FLD1                                ; 0046e78b
    FCOMPP                              ; 0046e78d
    FNSTSW AX                           ; 0046e78f
    SAHF                                ; 0046e791
    JBE 0x0046e8d8                      ; 0046e792
        ;   XREF to: 0046e8d8 (CONDITIONAL_JUMP)  ; LAB_0046e8d8
    FLD1                                ; 0046e798
    FCOMP double ptr [ESP + 0x8]        ; 0046e79a
    FNSTSW AX                           ; 0046e79e
    SAHF                                ; 0046e7a0
    JA 0x0046e911                       ; 0046e7a1
        ;   XREF to: 0046e911 (CONDITIONAL_JUMP)  ; LAB_0046e911
    MOV EAX,[0x01b68864]                ; 0046e7a7 | DAT_01b68864
        ;   Label: LAB_0046e7a7
    MOV EDX,dword ptr [EBX + 0x20058]   ; 0046e7ac
    MOV dword ptr [EBX + 0x20058],EAX   ; 0046e7b2
    FLDZ                                ; 0046e7b8
    FCOMP float ptr [EBX + 0x20024]     ; 0046e7ba
    FNSTSW AX                           ; 0046e7c0
    SAHF                                ; 0046e7c2
    JBE 0x0046e7d0                      ; 0046e7c3
        ;   XREF to: 0046e7d0 (CONDITIONAL_JUMP)  ; LAB_0046e7d0
    MOV EAX,[0x01b68868]                ; 0046e7c5 | DAT_01b68868
    MOV dword ptr [EBX + 0x20058],EAX   ; 0046e7ca
    MOV ECX,0x3fcccccd                  ; 0046e7d0
        ;   Label: LAB_0046e7d0
    FLD float ptr [EBX + 0x20028]       ; 0046e7d5
    MOV dword ptr [ESP + 0x18],ECX      ; 0046e7db
    FCOMP double ptr [0x005da004]       ; 0046e7df | DAT_005da004
    FNSTSW AX                           ; 0046e7e5
    SAHF                                ; 0046e7e7
    JBE 0x0046e979                      ; 0046e7e8
        ;   XREF to: 0046e979 (CONDITIONAL_JUMP)  ; LAB_0046e979
    FLD float ptr [EBX + 0x20030]       ; 0046e7ee
    FADD float ptr [EBP + 0x18]         ; 0046e7f4
    FSTP float ptr [EBX + 0x20030]      ; 0046e7f7
    FLD float ptr [EBX + 0x2002c]       ; 0046e7fd
        ;   Label: LAB_0046e7fd
    FLDZ                                ; 0046e803
    FCOMPP                              ; 0046e805
    FNSTSW AX                           ; 0046e807
    SAHF                                ; 0046e809
    JC 0x0046e835                       ; 0046e80a
        ;   XREF to: 0046e835 (CONDITIONAL_JUMP)  ; LAB_0046e835
    FLD float ptr [EBX + 0x20028]       ; 0046e80c
    FCOMP double ptr [0x005da00c]       ; 0046e812 | DAT_005da00c
    FNSTSW AX                           ; 0046e818
    SAHF                                ; 0046e81a
    JC 0x0046e988                       ; 0046e81b
        ;   XREF to: 0046e988 (CONDITIONAL_JUMP)  ; LAB_0046e988
    FLD float ptr [EBX + 0x20028]       ; 0046e821
        ;   Label: LAB_0046e821
    FLD1                                ; 0046e827
    FSUBRP                              ; 0046e829
    FMUL float ptr [ESP + 0x18]         ; 0046e82b
    FSTP float ptr [EBX + 0x2002c]      ; 0046e82f
    FLD float ptr [EBX + 0x2002c]       ; 0046e835
        ;   Label: LAB_0046e835
    FLDZ                                ; 0046e83b
    FCOMPP                              ; 0046e83d
    FNSTSW AX                           ; 0046e83f
    SAHF                                ; 0046e841
    JNC 0x0046e9d3                      ; 0046e842
        ;   XREF to: 0046e9d3 (CONDITIONAL_JUMP)  ; LAB_0046e9d3
    MOV EAX,dword ptr [EBX + 0x2002c]   ; 0046e848
    MOV dword ptr [ESP + 0x28],EAX      ; 0046e84e
    FLD float ptr [ESP + 0x28]          ; 0046e852
    FSUB float ptr [EBP + 0x18]         ; 0046e856
    FST float ptr [EBX + 0x2002c]       ; 0046e859
    FLDZ                                ; 0046e85f
    FCOMPP                              ; 0046e861
    FNSTSW AX                           ; 0046e863
    SAHF                                ; 0046e865
    JC 0x0046e9a0                       ; 0046e866
        ;   XREF to: 0046e9a0 (CONDITIONAL_JUMP)  ; LAB_0046e9a0
    FLD float ptr [EBX + 0x20028]       ; 0046e86c
    FLD1                                ; 0046e872
    FSUBRP                              ; 0046e874
    MOV dword ptr [EBX + 0x2002c],0x0   ; 0046e876
    FSTP float ptr [ESP + 0x2c]         ; 0046e880
        ;   Label: LAB_0046e880
    MOV EAX,dword ptr [EBX + 0x20028]   ; 0046e884
    MOV dword ptr [ESP + 0x14],EAX      ; 0046e88a
    FLD float ptr [ESP + 0x14]          ; 0046e88e
    FADD float ptr [ESP + 0x2c]         ; 0046e892
    FST float ptr [EBX + 0x20028]       ; 0046e896
    FLD1                                ; 0046e89c
    FCOMPP                              ; 0046e89e
    FNSTSW AX                           ; 0046e8a0
    SAHF                                ; 0046e8a2
    JA 0x0046e9ac                       ; 0046e8a3
        ;   XREF to: 0046e9ac (CONDITIONAL_JUMP)  ; LAB_0046e9ac
    MOV dword ptr [EBX + 0x20024],0x0   ; 0046e8a9
    MOV dword ptr [EBX + 0x2002c],0x0   ; 0046e8b3
    MOV dword ptr [EBX + 0x20030],0x0   ; 0046e8bd
    MOV dword ptr [EBX + 0x20028],0x3f800000 ; 0046e8c7
    MOV ESP,EBP                         ; 0046e8d1
        ;   Label: LAB_0046e8d1
    POP EBP                             ; 0046e8d3
    POP EDI                             ; 0046e8d4
    POP ESI                             ; 0046e8d5
    POP EBX                             ; 0046e8d6
    RET                                 ; 0046e8d7
    MOV dword ptr [EBX + 0x20024],0x0   ; 0046e8d8
        ;   Label: LAB_0046e8d8
    MOV dword ptr [EBX + 0x20058],0xffffffff ; 0046e8e2
    MOV dword ptr [EBX + 0x2002c],0x0   ; 0046e8ec
    MOV dword ptr [EBX + 0x20030],0x0   ; 0046e8f6
    MOV dword ptr [EBX + 0x20028],0x0   ; 0046e900
    MOV ESP,EBP                         ; 0046e90a
    POP EBP                             ; 0046e90c
    POP EDI                             ; 0046e90d
    POP ESI                             ; 0046e90e
    POP EBX                             ; 0046e90f
    RET                                 ; 0046e910
    FLD float ptr [EBX + 0x20024]       ; 0046e911
        ;   Label: LAB_0046e911
    FST double ptr [ESP]                ; 0046e917
    FABS                                ; 0046e91a
    FLD1                                ; 0046e91c
    FSUB double ptr [ESP + 0x8]         ; 0046e91e
    FMUL float ptr [EBP + 0x18]         ; 0046e922
    FMUL double ptr [0x005d9ffc]        ; 0046e925 | DAT_005d9ffc
    FST float ptr [ESP + 0x10]          ; 0046e92b
    FCOMPP                              ; 0046e92f
    FNSTSW AX                           ; 0046e931
    SAHF                                ; 0046e933
    JBE 0x0046e945                      ; 0046e934
        ;   XREF to: 0046e945 (CONDITIONAL_JUMP)  ; LAB_0046e945
    MOV dword ptr [EBX + 0x20024],0x0   ; 0046e936
    JMP 0x0046e7a7                      ; 0046e940
        ;   XREF to: 0046e7a7 (UNCONDITIONAL_JUMP)  ; LAB_0046e7a7
    FLDZ                                ; 0046e945
        ;   Label: LAB_0046e945
    FCOMP double ptr [ESP]              ; 0046e947
    FNSTSW AX                           ; 0046e94a
    SAHF                                ; 0046e94c
    JBE 0x0046e964                      ; 0046e94d
        ;   XREF to: 0046e964 (CONDITIONAL_JUMP)  ; LAB_0046e964
    FLD float ptr [EBX + 0x20024]       ; 0046e94f
    FADD float ptr [ESP + 0x10]         ; 0046e955
    FSTP float ptr [EBX + 0x20024]      ; 0046e959
    JMP 0x0046e7a7                      ; 0046e95f
        ;   XREF to: 0046e7a7 (UNCONDITIONAL_JUMP)  ; LAB_0046e7a7
    FLD float ptr [EBX + 0x20024]       ; 0046e964
        ;   Label: LAB_0046e964
    FSUB float ptr [ESP + 0x10]         ; 0046e96a
    FSTP float ptr [EBX + 0x20024]      ; 0046e96e
    JMP 0x0046e7a7                      ; 0046e974
        ;   XREF to: 0046e7a7 (UNCONDITIONAL_JUMP)  ; LAB_0046e7a7
    MOV dword ptr [EBX + 0x20030],0x0   ; 0046e979
        ;   Label: LAB_0046e979
    JMP 0x0046e7fd                      ; 0046e983
        ;   XREF to: 0046e7fd (UNCONDITIONAL_JUMP)  ; LAB_0046e7fd
    FLD float ptr [EBX + 0x20030]       ; 0046e988
        ;   Label: LAB_0046e988
    FLD1                                ; 0046e98e
    FCOMPP                              ; 0046e990
    FNSTSW AX                           ; 0046e992
    SAHF                                ; 0046e994
    JC 0x0046e821                       ; 0046e995
        ;   XREF to: 0046e821 (CONDITIONAL_JUMP)  ; LAB_0046e821
    JMP 0x0046e835                      ; 0046e99b
        ;   XREF to: 0046e835 (UNCONDITIONAL_JUMP)  ; LAB_0046e835
    FLD float ptr [EBP + 0x18]          ; 0046e9a0
        ;   Label: LAB_0046e9a0
    FDIV float ptr [ESP + 0x28]         ; 0046e9a3
    JMP 0x0046e880                      ; 0046e9a7
        ;   XREF to: 0046e880 (UNCONDITIONAL_JUMP)  ; LAB_0046e880
    FLD float ptr [EBX + 0x20024]       ; 0046e9ac
        ;   Label: LAB_0046e9ac
    FMUL float ptr [ESP + 0x2c]         ; 0046e9b2
    FLD float ptr [ESP + 0x14]          ; 0046e9b6
    FLD1                                ; 0046e9ba
    FSUBRP                              ; 0046e9bc
    FDIVP                               ; 0046e9be
    FSUBR float ptr [EBX + 0x20024]     ; 0046e9c0
    FSTP float ptr [EBX + 0x20024]      ; 0046e9c6
    MOV ESP,EBP                         ; 0046e9cc
    POP EBP                             ; 0046e9ce
    POP EDI                             ; 0046e9cf
    POP ESI                             ; 0046e9d0
    POP EBX                             ; 0046e9d1
    RET                                 ; 0046e9d2
    FLD float ptr [EBX + 0x20024]       ; 0046e9d3
        ;   Label: LAB_0046e9d3
    FMUL float ptr [0x005da014]         ; 0046e9d9 | DAT_005da014
    FABS                                ; 0046e9df
    MOV ESI,dword ptr [EBX + 0x20058]   ; 0046e9e1
    FSTP float ptr [ESP + 0x1c]         ; 0046e9e7
    CMP EDX,ESI                         ; 0046e9eb
    JZ 0x0046e9f5                       ; 0046e9ed
        ;   XREF to: 0046e9f5 (CONDITIONAL_JUMP)  ; LAB_0046e9f5
    XOR EDI,EDI                         ; 0046e9ef
    MOV dword ptr [ESP + 0x1c],EDI      ; 0046e9f1
    FLD float ptr [ESP + 0x1c]          ; 0046e9f5
        ;   Label: LAB_0046e9f5
    FLD1                                ; 0046e9f9
    FCOMPP                              ; 0046e9fb
    FNSTSW AX                           ; 0046e9fd
    SAHF                                ; 0046e9ff
    JNC 0x0046ea0a                      ; 0046ea00
        ;   XREF to: 0046ea0a (CONDITIONAL_JUMP)  ; LAB_0046ea0a
    MOV dword ptr [ESP + 0x1c],0x3f800000 ; 0046ea02
    FLD float ptr [ESP + 0x1c]          ; 0046ea0a
        ;   Label: LAB_0046ea0a
    FSUB float ptr [EBX + 0x20028]      ; 0046ea0e
    FADD float ptr [EBX + 0x20028]      ; 0046ea14
    FST float ptr [EBX + 0x20028]       ; 0046ea1a
    FCOMP double ptr [0x005da01c]       ; 0046ea20 | DAT_005da01c
    FNSTSW AX                           ; 0046ea26
    SAHF                                ; 0046ea28
    JBE 0x0046e8d1                      ; 0046ea29
        ;   XREF to: 0046e8d1 (CONDITIONAL_JUMP)  ; LAB_0046e8d1
    MOV dword ptr [EBX + 0x20058],EDX   ; 0046ea2f
    MOV ESP,EBP                         ; 0046ea35
    POP EBP                             ; 0046ea37
    POP EDI                             ; 0046ea38
    POP ESI                             ; 0046ea39
    POP EBX                             ; 0046ea3a
    RET                                 ; 0046ea3b

