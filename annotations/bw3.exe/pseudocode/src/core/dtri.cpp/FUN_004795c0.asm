; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dtri_cpp_FUN_004795c0(CDemonTriangle *triangle,CVector3f *position,float search_radius,float *out_height)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   triangle
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_height
; Local Variables:
; undefined8       Stack[-0x88]:8  local_88
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_dmodel.cpp_CKeyFramedModel_getFloorHeight_FUN_00461ef0 at 00461f93
;   core_setcolid.cpp_FUN_0053bc80 at 0053c12a
;   core_stairs.cpp_CStairs_customGetFloorHeight_FUN_005686d0 at 00568704
;
; Referenced Globals:
;   undefined4 DAT_005bcca9
;   undefined4 DAT_005bccb1
;   undefined4 DAT_01c599cc
;   undefined4 DAT_01c599d0
;   undefined4 DAT_01c599d4
;   undefined4 DAT_01c599d8
;
; Called Functions:
;   core_dtri.cpp_rayEdgeHeightTest_FUN_00479450
;   core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004795c0
        ;   Label: core_dtri.cpp_FUN_004795c0
    PUSH ESI                            ; 004795c1
    PUSH EDI                            ; 004795c2
    PUSH EBP                            ; 004795c3
    MOV EBP,ESP                         ; 004795c4
    SUB ESP,0x78                        ; 004795c6
    AND ESP,0xfffffff8                  ; 004795c9
    MOV EBX,dword ptr [EBP + 0x14]      ; 004795cc
    FLD float ptr [EBX + 0x28]          ; 004795cf
    FCOMP double ptr [0x005bcca9]       ; 004795d2 | DAT_005bcca9
    FNSTSW AX                           ; 004795d8
    SAHF                                ; 004795da
    JA 0x00479819                       ; 004795db
        ;   XREF to: 00479819 (CONDITIONAL_JUMP)  ; LAB_00479819
    MOV EAX,dword ptr [EBP + 0x18]      ; 004795e1
    FLD float ptr [EBX]                 ; 004795e4
    FSUB float ptr [EAX]                ; 004795e6
    FSTP float ptr [ESP + 0x48]         ; 004795e8
    MOV EAX,dword ptr [EBX + 0x4]       ; 004795ec
    MOV dword ptr [ESP + 0x4c],EAX      ; 004795ef
    MOV EAX,dword ptr [EBP + 0x18]      ; 004795f3
    FLD float ptr [EBX + 0x8]           ; 004795f6
    FSUB float ptr [EAX + 0x8]          ; 004795f9
    FSTP float ptr [ESP + 0x50]         ; 004795fc
    FLD float ptr [EBX + 0xc]           ; 00479600
    FSUB float ptr [EAX]                ; 00479603
    FSTP float ptr [ESP + 0x3c]         ; 00479605
    MOV EAX,dword ptr [EBX + 0x10]      ; 00479609
    MOV dword ptr [ESP + 0x40],EAX      ; 0047960c
    MOV EAX,dword ptr [EBP + 0x18]      ; 00479610
    FLD float ptr [EBX + 0x14]          ; 00479613
    FSUB float ptr [EAX + 0x8]          ; 00479616
    FSTP float ptr [ESP + 0x44]         ; 00479619
    FLD float ptr [EBX + 0x18]          ; 0047961d
    FSUB float ptr [EAX]                ; 00479620
    FSTP float ptr [ESP + 0xc]          ; 00479622
    MOV EAX,dword ptr [EBX + 0x1c]      ; 00479626
    MOV dword ptr [ESP + 0x10],EAX      ; 00479629
    MOV EAX,dword ptr [EBP + 0x18]      ; 0047962d
    FLD float ptr [EBX + 0x20]          ; 00479630
    FSUB float ptr [EAX + 0x8]          ; 00479633
    FLD float ptr [ESP + 0x4c]          ; 00479636
    FXCH                                ; 0047963a
    FSTP float ptr [ESP + 0x14]         ; 0047963c
    FCOMP float ptr [ESP + 0x40]        ; 00479640
    FNSTSW AX                           ; 00479644
    SAHF                                ; 00479646
    JC 0x00479822                       ; 00479647
        ;   XREF to: 00479822 (CONDITIONAL_JUMP)  ; LAB_00479822
    FLD float ptr [ESP + 0x40]          ; 0047964d
        ;   Label: LAB_0047964d
    FCOMP float ptr [ESP + 0x10]        ; 00479651
    FNSTSW AX                           ; 00479655
    SAHF                                ; 00479657
    JNC 0x004796ad                      ; 00479658
        ;   XREF to: 004796ad (CONDITIONAL_JUMP)  ; LAB_004796ad
    LEA EDI,[ESP + 0x24]                ; 0047965a
    LEA ESI,[ESP + 0x3c]                ; 0047965e
    MOVSD ES:EDI,ESI                    ; 00479662
    MOVSD ES:EDI,ESI                    ; 00479663
    MOVSD ES:EDI,ESI                    ; 00479664
    LEA EAX,[ESP + 0xc]                 ; 00479665
    LEA ESI,[ESP + 0x3c]                ; 00479669
    CMP ESI,EAX                         ; 0047966d
    JZ 0x00479689                       ; 0047966f
        ;   XREF to: 00479689 (CONDITIONAL_JUMP)  ; LAB_00479689
    MOV EAX,dword ptr [ESP + 0xc]       ; 00479671
    MOV dword ptr [ESP + 0x3c],EAX      ; 00479675
    MOV EAX,dword ptr [ESP + 0x10]      ; 00479679
    MOV dword ptr [ESP + 0x40],EAX      ; 0047967d
    MOV EAX,dword ptr [ESP + 0x14]      ; 00479681
    MOV dword ptr [ESP + 0x44],EAX      ; 00479685
    LEA EAX,[ESP + 0xc]                 ; 00479689
        ;   Label: LAB_00479689
    LEA ESI,[ESP + 0x24]                ; 0047968d
    CMP EAX,ESI                         ; 00479691
    JZ 0x004796ad                       ; 00479693
        ;   XREF to: 004796ad (CONDITIONAL_JUMP)  ; LAB_004796ad
    MOV EAX,dword ptr [ESP + 0x24]      ; 00479695
    MOV dword ptr [ESP + 0xc],EAX       ; 00479699
    MOV EAX,dword ptr [ESP + 0x28]      ; 0047969d
    MOV dword ptr [ESP + 0x10],EAX      ; 004796a1
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004796a5
    MOV dword ptr [ESP + 0x14],EAX      ; 004796a9
    MOV EAX,dword ptr [EBP + 0x18]      ; 004796ad
        ;   Label: LAB_004796ad
    FLD float ptr [ESP + 0x10]          ; 004796b0
    FCOMP float ptr [EAX + 0x4]         ; 004796b4
    FNSTSW AX                           ; 004796b7
    SAHF                                ; 004796b9
    JA 0x00479819                       ; 004796ba
        ;   XREF to: 00479819 (CONDITIONAL_JUMP)  ; LAB_00479819
    FLD float ptr [ESP + 0x4c]          ; 004796c0
    FCOMP float ptr [ESP + 0x40]        ; 004796c4
    FNSTSW AX                           ; 004796c8
    SAHF                                ; 004796ca
    JNC 0x00479720                      ; 004796cb
        ;   XREF to: 00479720 (CONDITIONAL_JUMP)  ; LAB_00479720
    LEA EDI,[ESP + 0x30]                ; 004796cd
    LEA ESI,[ESP + 0x48]                ; 004796d1
    MOVSD ES:EDI,ESI                    ; 004796d5
    MOVSD ES:EDI,ESI                    ; 004796d6
    MOVSD ES:EDI,ESI                    ; 004796d7
    LEA EAX,[ESP + 0x3c]                ; 004796d8
    LEA ESI,[ESP + 0x48]                ; 004796dc
    CMP ESI,EAX                         ; 004796e0
    JZ 0x004796fc                       ; 004796e2
        ;   XREF to: 004796fc (CONDITIONAL_JUMP)  ; LAB_004796fc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004796e4
    MOV dword ptr [ESP + 0x48],EAX      ; 004796e8
    MOV EAX,dword ptr [ESP + 0x40]      ; 004796ec
    MOV dword ptr [ESP + 0x4c],EAX      ; 004796f0
    MOV EAX,dword ptr [ESP + 0x44]      ; 004796f4
    MOV dword ptr [ESP + 0x50],EAX      ; 004796f8
    LEA ESI,[ESP + 0x3c]                ; 004796fc
        ;   Label: LAB_004796fc
    LEA EAX,[ESP + 0x30]                ; 00479700
    CMP ESI,EAX                         ; 00479704
    JZ 0x00479720                       ; 00479706
        ;   XREF to: 00479720 (CONDITIONAL_JUMP)  ; LAB_00479720
    MOV EAX,dword ptr [ESP + 0x30]      ; 00479708
    MOV dword ptr [ESP + 0x3c],EAX      ; 0047970c
    MOV EAX,dword ptr [ESP + 0x34]      ; 00479710
    MOV dword ptr [ESP + 0x40],EAX      ; 00479714
    MOV EAX,dword ptr [ESP + 0x38]      ; 00479718
    MOV dword ptr [ESP + 0x44],EAX      ; 0047971c
    MOV EAX,dword ptr [EBP + 0x20]      ; 00479720
        ;   Label: LAB_00479720
    FLD float ptr [ESP + 0x4c]          ; 00479723
    FCOMP float ptr [EAX]               ; 00479727
    FNSTSW AX                           ; 00479729
    SAHF                                ; 0047972b
    JC 0x00479819                       ; 0047972c
        ;   XREF to: 00479819 (CONDITIONAL_JUMP)  ; LAB_00479819
    FLD float ptr [ESP + 0x50]          ; 00479732
    FMUL ST0                            ; 00479736
    FLD float ptr [ESP + 0x48]          ; 00479738
    FMUL ST0                            ; 0047973c
    FLD float ptr [EBP + 0x1c]          ; 0047973e
    FMUL ST0                            ; 00479741
    FXCH                                ; 00479743
    FADDP ST2,ST0                       ; 00479745
    FCOMPP                              ; 00479747
    FNSTSW AX                           ; 00479749
    SAHF                                ; 0047974b
    JA 0x0047987e                       ; 0047974c
        ;   XREF to: 0047987e (CONDITIONAL_JUMP)  ; LAB_0047987e
    MOV EDX,dword ptr [EBP + 0x20]      ; 00479752
    PUSH EDX                            ; 00479755
    LEA EAX,[ESP + 0x40]                ; 00479756
    PUSH dword ptr [EBP + 0x1c]         ; 0047975a
    PUSH EAX                            ; 0047975d
    LEA EAX,[ESP + 0x54]                ; 0047975e
    PUSH EAX                            ; 00479762
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_00479450 ; 00479763
        ;   XREF to: 00479450 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_00479450()
    ADD ESP,0x10                        ; 00479768
    MOV ECX,dword ptr [EBP + 0x20]      ; 0047976b
    PUSH ECX                            ; 0047976e
    MOV ESI,EAX                         ; 0047976f
    LEA EAX,[ESP + 0x10]                ; 00479771
    PUSH dword ptr [EBP + 0x1c]         ; 00479775
    PUSH EAX                            ; 00479778
    LEA EAX,[ESP + 0x48]                ; 00479779
    PUSH EAX                            ; 0047977d
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_00479450 ; 0047977e
        ;   XREF to: 00479450 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_00479450()
    ADD ESP,0x10                        ; 00479783
    MOV EDI,dword ptr [EBP + 0x20]      ; 00479786
    PUSH EDI                            ; 00479789
    OR ESI,EAX                          ; 0047978a
    LEA EAX,[ESP + 0x4c]                ; 0047978c
    PUSH dword ptr [EBP + 0x1c]         ; 00479790
    PUSH EAX                            ; 00479793
    LEA EAX,[ESP + 0x18]                ; 00479794
    PUSH EAX                            ; 00479798
    CALL core_dtri.cpp_rayEdgeHeightTest_FUN_00479450 ; 00479799
        ;   XREF to: 00479450 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayEdgeHeightTest_FUN_00479450()
    FLD float ptr [EBX + 0x24]          ; 0047979e
    FMUL ST0                            ; 004797a1
    FLD float ptr [EBX + 0x2c]          ; 004797a3
    FMUL ST0                            ; 004797a6
    FADDP                               ; 004797a8
    OR ESI,EAX                          ; 004797aa
    FSQRT                               ; 004797ac
    ADD ESP,0x10                        ; 004797ae
    MOV AH,byte ptr [0x01c599d8]        ; 004797b1 | DAT_01c599d8
    FSTP double ptr [ESP]               ; 004797b7
    TEST AH,0x1                         ; 004797ba
    JZ 0x00479893                       ; 004797bd
        ;   XREF to: 00479893 (CONDITIONAL_JUMP)  ; LAB_00479893
    FLD double ptr [ESP]                ; 004797c3
        ;   Label: LAB_004797c3
    FCOMP double ptr [0x005bccb1]       ; 004797c6 | DAT_005bccb1
    FNSTSW AX                           ; 004797cc
    SAHF                                ; 004797ce
    JNC 0x004798ba                      ; 004797cf
        ;   XREF to: 004798ba (CONDITIONAL_JUMP)  ; LAB_004798ba
    TEST ESI,ESI                        ; 004797d5
    JNZ 0x00479810                      ; 004797d7
        ;   XREF to: 00479810 (CONDITIONAL_JUMP)  ; LAB_00479810
    PUSH 0x1c599cc                      ; 004797d9 | DAT_01c599cc
    MOV EDI,dword ptr [EBP + 0x18]      ; 004797de
    PUSH EDI                            ; 004797e1
    PUSH EBX                            ; 004797e2
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0 ; 004797e3
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0()
    MOV dword ptr [ESP + 0x80],EAX      ; 004797e8
    FLD float ptr [ESP + 0x80]          ; 004797ef
    FLDZ                                ; 004797f6
    ADD ESP,0xc                         ; 004797f8
    FCOMPP                              ; 004797fb
    FNSTSW AX                           ; 004797fd
    SAHF                                ; 004797ff
    JA 0x00479810                       ; 00479800
        ;   XREF to: 00479810 (CONDITIONAL_JUMP)  ; LAB_00479810
    MOV EBX,dword ptr [EBP + 0x20]      ; 00479802
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00479805
    MOV ESI,0x1                         ; 00479809
    MOV dword ptr [EBX],EAX             ; 0047980e
    MOV EAX,ESI                         ; 00479810
        ;   Label: LAB_00479810
    MOV ESP,EBP                         ; 00479812
    POP EBP                             ; 00479814
    POP EDI                             ; 00479815
    POP ESI                             ; 00479816
    POP EBX                             ; 00479817
    RET                                 ; 00479818
    XOR EAX,EAX                         ; 00479819
        ;   Label: LAB_00479819
    MOV ESP,EBP                         ; 0047981b
    POP EBP                             ; 0047981d
    POP EDI                             ; 0047981e
    POP ESI                             ; 0047981f
    POP EBX                             ; 00479820
    RET                                 ; 00479821
    LEA EDI,[ESP + 0x18]                ; 00479822
        ;   Label: LAB_00479822
    LEA ESI,[ESP + 0x48]                ; 00479826
    MOVSD ES:EDI,ESI                    ; 0047982a
    MOVSD ES:EDI,ESI                    ; 0047982b
    MOVSD ES:EDI,ESI                    ; 0047982c
    LEA EAX,[ESP + 0x3c]                ; 0047982d
    LEA ESI,[ESP + 0x48]                ; 00479831
    CMP ESI,EAX                         ; 00479835
    JZ 0x00479851                       ; 00479837
        ;   XREF to: 00479851 (CONDITIONAL_JUMP)  ; LAB_00479851
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00479839
    MOV dword ptr [ESP + 0x48],EAX      ; 0047983d
    MOV EAX,dword ptr [ESP + 0x40]      ; 00479841
    MOV dword ptr [ESP + 0x4c],EAX      ; 00479845
    MOV EAX,dword ptr [ESP + 0x44]      ; 00479849
    MOV dword ptr [ESP + 0x50],EAX      ; 0047984d
    LEA ESI,[ESP + 0x3c]                ; 00479851
        ;   Label: LAB_00479851
    LEA EAX,[ESP + 0x18]                ; 00479855
    CMP ESI,EAX                         ; 00479859
    JZ 0x0047964d                       ; 0047985b
        ;   XREF to: 0047964d (CONDITIONAL_JUMP)  ; LAB_0047964d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00479861
    MOV dword ptr [ESP + 0x3c],EAX      ; 00479865
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00479869
    MOV dword ptr [ESP + 0x40],EAX      ; 0047986d
    MOV EAX,dword ptr [ESP + 0x20]      ; 00479871
    MOV dword ptr [ESP + 0x44],EAX      ; 00479875
    JMP 0x0047964d                      ; 00479879
        ;   XREF to: 0047964d (UNCONDITIONAL_JUMP)  ; LAB_0047964d
    MOV EBX,dword ptr [EBP + 0x20]      ; 0047987e
        ;   Label: LAB_0047987e
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00479881
    MOV dword ptr [EBX],EAX             ; 00479885
    MOV EAX,0x1                         ; 00479887
    MOV ESP,EBP                         ; 0047988c
    POP EBP                             ; 0047988e
    POP EDI                             ; 0047988f
    POP ESI                             ; 00479890
    POP EBX                             ; 00479891
    RET                                 ; 00479892
    MOV DL,AH                           ; 00479893
        ;   Label: LAB_00479893
    OR DL,0x1                           ; 00479895
    XOR EAX,EAX                         ; 00479898
    MOV byte ptr [0x01c599d8],DL        ; 0047989a | DAT_01c599d8
    MOV [0x01c599cc],EAX                ; 004798a0 | DAT_01c599cc
    MOV EDX,0xc2c80000                  ; 004798a5
    MOV [0x01c599d4],EAX                ; 004798aa | DAT_01c599d4
    MOV dword ptr [0x01c599d0],EDX      ; 004798af | DAT_01c599d0
    JMP 0x004797c3                      ; 004798b5
        ;   XREF to: 004797c3 (UNCONDITIONAL_JUMP)  ; LAB_004797c3
    FLD float ptr [EBX + 0x24]          ; 004798ba
        ;   Label: LAB_004798ba
    FLD float ptr [EBP + 0x1c]          ; 004798bd
    FDIV double ptr [ESP]               ; 004798c0
    FXCH                                ; 004798c3
    FMUL ST1                            ; 004798c5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004798c7
    FADD float ptr [EAX]                ; 004798ca
    FSTP float ptr [ESP + 0x54]         ; 004798cc
    FMUL float ptr [EBX + 0x2c]         ; 004798d0
    FADD float ptr [EAX + 0x8]          ; 004798d3
    FSTP float ptr [ESP + 0x5c]         ; 004798d6
    MOV EAX,dword ptr [EAX + 0x4]       ; 004798da
    PUSH 0x1c599cc                      ; 004798dd | DAT_01c599cc
    MOV dword ptr [ESP + 0x5c],EAX      ; 004798e2
    LEA EAX,[ESP + 0x58]                ; 004798e6
    PUSH EAX                            ; 004798ea
    PUSH EBX                            ; 004798eb
    CALL core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0 ; 004798ec
        ;   XREF to: 00478ac0 (UNCONDITIONAL_CALL)  ; undefined core_dtri.cpp_rayTriangleIntersection_FUN_00478ac0()
    MOV dword ptr [ESP + 0x80],EAX      ; 004798f1
    FLD float ptr [ESP + 0x80]          ; 004798f8
    ADD ESP,0xc                         ; 004798ff
    FST float ptr [ESP + 0x8]           ; 00479902
    FLDZ                                ; 00479906
    FCOMPP                              ; 00479908
    FNSTSW AX                           ; 0047990a
    SAHF                                ; 0047990c
    JA 0x00479810                       ; 0047990d
        ;   XREF to: 00479810 (CONDITIONAL_JUMP)  ; LAB_00479810
    FLD float ptr [ESP + 0x8]           ; 00479913
    FMUL float ptr [0x01c599d0]         ; 00479917 | DAT_01c599d0
    FADD float ptr [ESP + 0x58]         ; 0047991d
    MOV EAX,dword ptr [EBP + 0x20]      ; 00479921
    FST float ptr [ESP + 0x70]          ; 00479924
    FCOMP float ptr [EAX]               ; 00479928
    FNSTSW AX                           ; 0047992a
    SAHF                                ; 0047992c
    JBE 0x00479810                      ; 0047992d
        ;   XREF to: 00479810 (CONDITIONAL_JUMP)  ; LAB_00479810
    MOV EBX,dword ptr [EBP + 0x20]      ; 00479933
    MOV EAX,dword ptr [ESP + 0x70]      ; 00479936
    MOV ESI,0x1                         ; 0047993a
    MOV dword ptr [EBX],EAX             ; 0047993f
    MOV EAX,ESI                         ; 00479941
    MOV ESP,EBP                         ; 00479943
    POP EBP                             ; 00479945
    POP EDI                             ; 00479946
    POP ESI                             ; 00479947
    POP EBX                             ; 00479948
    RET                                 ; 00479949

