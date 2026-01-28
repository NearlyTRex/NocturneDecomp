; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_quantize_cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0 (CColorQuantizer *this_ptr,uchar *src_pixels,uchar *dest_indices,short start_x,short end_x ,short num_palette_entries)
;
; Parameters:
; CColorQuantizer * Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   src_pixels
; uchar *          Stack[0xc]:4   dest_indices
; short            Stack[0x10]:2   start_x
; short            Stack[0x14]:2   end_x
; short            Stack[0x18]:2   num_palette_entries
; Local Variables:
; undefined8       Stack[-0x78]:8  local_78
; undefined8       Stack[-0x70]:8  local_70
; undefined8       Stack[-0x68]:8  local_68
; undefined8       Stack[-0x60]:8  local_60
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 at 005562d1
;
; Referenced Globals:
;   double DOUBLE_00640d53 = 0.300000000000000
;   double DOUBLE_00640d5b = 0.590000000000000
;   double DOUBLE_00640d63 = 0.110000000000000
;   double DOUBLE_00640d6b = 0.150000000000000
;   double DOUBLE_00640d73 = 255
;
; Called Functions:
;   shape_quantize.cpp_getAbsoluteValue_FUN_00556df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005556f0
        ;   Label: shape_quantize.cpp_CColorQuantizer_mapScanlineToPalette_FUN_005556f0
    PUSH ESI                            ; 005556f1
    PUSH EDI                            ; 005556f2
    PUSH EBP                            ; 005556f3
    MOV EBP,ESP                         ; 005556f4
    SUB ESP,0x68                        ; 005556f6
    AND ESP,0xfffffff8                  ; 005556f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 005556fc
    MOV ESI,dword ptr [EBP + 0x28]      ; 005556ff
    MOV EAX,dword ptr [EBP + 0x22]      ; 00555702
    MOV EDX,dword ptr [EBP + 0x1e]      ; 00555705
    SAR EAX,0x10                        ; 00555708
    SAR EDX,0x10                        ; 0055570b
    SUB EAX,EDX                         ; 0055570e
    PUSH EAX                            ; 00555710
    MOV dword ptr [ESP + 0x50],EDX      ; 00555711
    CALL shape_quantize.cpp_getAbsoluteValue_FUN_00556df0 ; 00555715
        ;   XREF to: 00556df0 (UNCONDITIONAL_CALL)  ; int shape_quantize.cpp_getAbsoluteValue_FUN_00556df0(int value)
    ADD ESP,0x4                         ; 0055571a
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0055571d
    MOV dword ptr [ESP + 0x40],EAX      ; 00555721
    LEA EAX,[EDX*0x4 + 0x0]             ; 00555725
    MOV ECX,dword ptr [EBP + 0x18]      ; 0055572c
    SUB EAX,EDX                         ; 0055572f
    MOV dword ptr [ESP + 0x48],EDX      ; 00555731
    ADD ECX,EAX                         ; 00555735
    LEA EAX,[EDI + 0x1030]              ; 00555737
    MOV dword ptr [EBP + 0x18],ECX      ; 0055573d
    MOV dword ptr [ESP + 0x44],EAX      ; 00555740
    MOV EAX,dword ptr [EBP + 0x22]      ; 00555744
        ;   Label: LAB_00555744
    MOV EDX,dword ptr [ESP + 0x48]      ; 00555747
    SAR EAX,0x10                        ; 0055574b
    CMP EAX,EDX                         ; 0055574e
    JNZ 0x005557d1                      ; 00555750
        ;   XREF to: 005557d1 (CONDITIONAL_JUMP)  ; LAB_005557d1
    MOV EAX,dword ptr [ESP + 0x40]      ; 00555756
    MOV ECX,dword ptr [EDI + 0x4b30]    ; 0055575a
    XOR ECX,EAX                         ; 00555760
    MOV EBX,dword ptr [EDI + 0x4b34]    ; 00555762
    MOV dword ptr [EDI + 0x4b30],ECX    ; 00555768
    TEST EBX,EBX                        ; 0055576e
    JL 0x00555a26                       ; 00555770
        ;   XREF to: 00555a26 (CONDITIONAL_JUMP)  ; LAB_00555a26
    MOV ESI,EBX                         ; 00555776
    XOR ESI,EAX                         ; 00555778
    MOV dword ptr [EDI + 0x4b34],ESI    ; 0055577a
    MOV ESP,EBP                         ; 00555780
    POP EBP                             ; 00555782
    POP EDI                             ; 00555783
    POP ESI                             ; 00555784
    POP EBX                             ; 00555785
    RET                                 ; 00555786
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00555787
        ;   Label: LAB_00555787
    ADD EAX,dword ptr [ESP + 0x48]      ; 0055578a
    MOV EDX,dword ptr [EBP + 0x24]      ; 0055578e
    MOV byte ptr [EAX],BL               ; 00555791
    CMP DX,word ptr [EBP + 0x20]        ; 00555793
    JLE 0x005557bd                      ; 00555797
        ;   XREF to: 005557bd (CONDITIONAL_JUMP)  ; LAB_005557bd
    MOV EAX,0x1                         ; 00555799
    MOV EDX,dword ptr [ESP + 0x48]      ; 0055579e
        ;   Label: LAB_0055579e
    MOV ECX,dword ptr [EBP + 0x24]      ; 005557a2
    ADD EDX,EAX                         ; 005557a5
    MOV EAX,dword ptr [EBP + 0x20]      ; 005557a7
    MOV dword ptr [ESP + 0x48],EDX      ; 005557aa
    CMP AX,CX                           ; 005557ae
    JGE 0x005557c4                      ; 005557b1
        ;   XREF to: 005557c4 (CONDITIONAL_JUMP)  ; LAB_005557c4
    MOV EAX,0x3                         ; 005557b3
    ADD dword ptr [EBP + 0x18],EAX      ; 005557b8
    JMP 0x00555744                      ; 005557bb
        ;   XREF to: 00555744 (UNCONDITIONAL_JUMP)  ; LAB_00555744
    MOV EAX,0xffffffff                  ; 005557bd
        ;   Label: LAB_005557bd
    JMP 0x0055579e                      ; 005557c2
        ;   XREF to: 0055579e (UNCONDITIONAL_JUMP)  ; LAB_0055579e
    MOV EAX,0xfffffffd                  ; 005557c4
        ;   Label: LAB_005557c4
    ADD dword ptr [EBP + 0x18],EAX      ; 005557c9
    JMP 0x00555744                      ; 005557cc
        ;   XREF to: 00555744 (UNCONDITIONAL_JUMP)  ; LAB_00555744
    MOV EDX,dword ptr [EBP + 0x18]      ; 005557d1
        ;   Label: LAB_005557d1
    XOR EAX,EAX                         ; 005557d4
    MOV AL,byte ptr [EDX]               ; 005557d6
    MOV dword ptr [ESP + 0x58],EAX      ; 005557d8
    XOR EAX,EAX                         ; 005557dc
    MOV AL,byte ptr [EDX + 0x1]         ; 005557de
    MOV dword ptr [ESP + 0x5c],EAX      ; 005557e1
    XOR EAX,EAX                         ; 005557e5
    MOV AL,byte ptr [EDX + 0x2]         ; 005557e7
    MOV dword ptr [ESP + 0x60],EAX      ; 005557ea
    XOR EAX,EAX                         ; 005557ee
    MOV AL,byte ptr [EDX]               ; 005557f0
    MOV dword ptr [ESP + 0x64],EAX      ; 005557f2
    FILD word ptr [ESP + 0x64]          ; 005557f6
    XOR EAX,EAX                         ; 005557fa
    FMUL double ptr [0x00640d53]        ; 005557fc | DOUBLE_00640d53
    MOV AL,byte ptr [EDX + 0x1]         ; 00555802
    MOV dword ptr [ESP + 0x64],EAX      ; 00555805
    FILD word ptr [ESP + 0x64]          ; 00555809
    XOR EAX,EAX                         ; 0055580d
    FMUL double ptr [0x00640d5b]        ; 0055580f | DOUBLE_00640d5b
    MOV AL,byte ptr [EDX + 0x2]         ; 00555815
    FADDP                               ; 00555818
    MOV dword ptr [ESP + 0x64],EAX      ; 0055581a
    FILD word ptr [ESP + 0x64]          ; 0055581e
    FMUL double ptr [0x00640d63]        ; 00555822 | DOUBLE_00640d63
    FILD word ptr [ESP + 0x58]          ; 00555828
    FSTP float ptr [ESP + 0x20]         ; 0055582c
    FILD word ptr [ESP + 0x5c]          ; 00555830
    FSTP float ptr [ESP + 0x28]         ; 00555834
    FILD word ptr [ESP + 0x60]          ; 00555838
    FSTP float ptr [ESP + 0x24]         ; 0055583c
    FADDP                               ; 00555840
    MOV EAX,dword ptr [EDI + 0x4b34]    ; 00555842
    FSTP float ptr [ESP + 0x2c]         ; 00555848
    TEST EAX,EAX                        ; 0055584c
    JLE 0x00555888                      ; 0055584e
        ;   XREF to: 00555888 (CONDITIONAL_JUMP)  ; LAB_00555888
    MOV EDX,dword ptr [ESP + 0x48]      ; 00555850
    MOV EAX,dword ptr [EDI + 0x4b30]    ; 00555854
    ADD EAX,EDX                         ; 0055585a
    MOV EDX,dword ptr [EDI + 0x10]      ; 0055585c
    SHL EAX,0x2                         ; 0055585f
    MOV ECX,dword ptr [ESP + 0x20]      ; 00555862
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 00555866
    MOV EDX,dword ptr [EDI + 0x14]      ; 00555869
    MOV ECX,dword ptr [ESP + 0x28]      ; 0055586c
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 00555870
    MOV EDX,dword ptr [EDI + 0x18]      ; 00555873
    MOV ECX,dword ptr [ESP + 0x24]      ; 00555876
    MOV dword ptr [EDX + EAX*0x1],ECX   ; 0055587a
    MOV EDX,dword ptr [EDI + 0x1c]      ; 0055587d
    ADD EAX,EDX                         ; 00555880
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00555882
    MOV dword ptr [EAX],EDX             ; 00555886
    MOV EAX,dword ptr [ESP + 0x20]      ; 00555888
        ;   Label: LAB_00555888
    MOV dword ptr [EDI + 0x20],EAX      ; 0055588c
    MOV EAX,dword ptr [ESP + 0x28]      ; 0055588f
    FLD float ptr [ESP + 0x20]          ; 00555893
    MOV dword ptr [EDI + 0x24],EAX      ; 00555897
    MOV EAX,dword ptr [ESP + 0x24]      ; 0055589a
    FLDZ                                ; 0055589e
    MOV dword ptr [EDI + 0x28],EAX      ; 005558a0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 005558a3
    FXCH                                ; 005558a7
    FSTP double ptr [ESP + 0x8]         ; 005558a9
    MOV dword ptr [EDI + 0x2c],EAX      ; 005558ad
    FCOMP double ptr [ESP + 0x8]        ; 005558b0
    FNSTSW AX                           ; 005558b4
    SAHF                                ; 005558b6
    JBE 0x00555994                      ; 005558b7
        ;   XREF to: 00555994 (CONDITIONAL_JUMP)  ; LAB_00555994
    XOR EAX,EAX                         ; 005558bd
    MOV dword ptr [ESP + 0x20],EAX      ; 005558bf
    FLD float ptr [ESP + 0x28]          ; 005558c3
        ;   Label: LAB_005558c3
    FLDZ                                ; 005558c7
    FXCH                                ; 005558c9
    FSTP double ptr [ESP + 0x18]        ; 005558cb
    FCOMP double ptr [ESP + 0x18]       ; 005558cf
    FNSTSW AX                           ; 005558d3
    SAHF                                ; 005558d5
    JBE 0x005559b4                      ; 005558d6
        ;   XREF to: 005559b4 (CONDITIONAL_JUMP)  ; LAB_005559b4
    XOR ECX,ECX                         ; 005558dc
    MOV dword ptr [ESP + 0x28],ECX      ; 005558de
    FLD float ptr [ESP + 0x24]          ; 005558e2
        ;   Label: LAB_005558e2
    FLDZ                                ; 005558e6
    FXCH                                ; 005558e8
    FSTP double ptr [ESP + 0x10]        ; 005558ea
    FCOMP double ptr [ESP + 0x10]       ; 005558ee
    FNSTSW AX                           ; 005558f2
    SAHF                                ; 005558f4
    JBE 0x005559d4                      ; 005558f5
        ;   XREF to: 005559d4 (CONDITIONAL_JUMP)  ; LAB_005559d4
    XOR EDX,EDX                         ; 005558fb
    MOV dword ptr [ESP + 0x24],EDX      ; 005558fd
    FLD float ptr [ESP + 0x2c]          ; 00555901
        ;   Label: LAB_00555901
    FLDZ                                ; 00555905
    FXCH                                ; 00555907
    FSTP double ptr [ESP]               ; 00555909
    FCOMP double ptr [ESP]              ; 0055590c
    FNSTSW AX                           ; 0055590f
    SAHF                                ; 00555911
    JBE 0x005559f4                      ; 00555912
        ;   XREF to: 005559f4 (CONDITIONAL_JUMP)  ; LAB_005559f4
    XOR EAX,EAX                         ; 00555918
    MOV dword ptr [ESP + 0x2c],EAX      ; 0055591a
    MOV EDX,0x461c3c00                  ; 0055591e
        ;   Label: LAB_0055591e
    XOR ECX,ECX                         ; 00555923
    MOV dword ptr [ESP + 0x50],EDX      ; 00555925
    MOV EDX,dword ptr [ESP + 0x44]      ; 00555929
    MOVSX EAX,SI                        ; 0055592d
        ;   Label: LAB_0055592d
    CMP ECX,EAX                         ; 00555930
    JGE 0x00555787                      ; 00555932
        ;   XREF to: 00555787 (CONDITIONAL_JUMP)  ; LAB_00555787
    FLD float ptr [EDX]                 ; 00555938
    FSUB float ptr [ESP + 0x20]         ; 0055593a
    FMUL ST0                            ; 0055593e
    FMUL double ptr [0x00640d53]        ; 00555940 | DOUBLE_00640d53
    FLD float ptr [EDX + 0x4]           ; 00555946
    FSUB float ptr [ESP + 0x28]         ; 00555949
    FMUL ST0                            ; 0055594d
    FMUL double ptr [0x00640d5b]        ; 0055594f | DOUBLE_00640d5b
    FLD float ptr [EDX + 0x8]           ; 00555955
    FXCH                                ; 00555958
    FADDP ST2,ST0                       ; 0055595a
    FSUB float ptr [ESP + 0x24]         ; 0055595c
    FMUL ST0                            ; 00555960
    FMUL double ptr [0x00640d63]        ; 00555962 | DOUBLE_00640d63
    FLD float ptr [EDX + 0xc]           ; 00555968
    FXCH                                ; 0055596b
    FADDP ST2,ST0                       ; 0055596d
    FSUB float ptr [ESP + 0x2c]         ; 0055596f
    FMUL ST0                            ; 00555973
    FMUL double ptr [0x00640d6b]        ; 00555975 | DOUBLE_00640d6b
    FADDP                               ; 0055597b
    FST float ptr [ESP + 0x54]          ; 0055597d
    FCOMP float ptr [ESP + 0x50]        ; 00555981
    FNSTSW AX                           ; 00555985
    SAHF                                ; 00555987
    JC 0x00555a13                       ; 00555988
        ;   XREF to: 00555a13 (CONDITIONAL_JUMP)  ; LAB_00555a13
    ADD EDX,0x10                        ; 0055598e
    INC ECX                             ; 00555991
    JMP 0x0055592d                      ; 00555992
        ;   XREF to: 0055592d (UNCONDITIONAL_JUMP)  ; LAB_0055592d
    FLD double ptr [ESP + 0x8]          ; 00555994
        ;   Label: LAB_00555994
    FCOMP double ptr [0x00640d73]       ; 00555998 | DOUBLE_00640d73
    FNSTSW AX                           ; 0055599e
    SAHF                                ; 005559a0
    JBE 0x005558c3                      ; 005559a1
        ;   XREF to: 005558c3 (CONDITIONAL_JUMP)  ; LAB_005558c3
    MOV dword ptr [ESP + 0x20],0x437f0000 ; 005559a7
    JMP 0x005558c3                      ; 005559af
        ;   XREF to: 005558c3 (UNCONDITIONAL_JUMP)  ; LAB_005558c3
    FLD double ptr [ESP + 0x18]         ; 005559b4
        ;   Label: LAB_005559b4
    FCOMP double ptr [0x00640d73]       ; 005559b8 | DOUBLE_00640d73
    FNSTSW AX                           ; 005559be
    SAHF                                ; 005559c0
    JBE 0x005558e2                      ; 005559c1
        ;   XREF to: 005558e2 (CONDITIONAL_JUMP)  ; LAB_005558e2
    MOV dword ptr [ESP + 0x28],0x437f0000 ; 005559c7
    JMP 0x005558e2                      ; 005559cf
        ;   XREF to: 005558e2 (UNCONDITIONAL_JUMP)  ; LAB_005558e2
    FLD double ptr [ESP + 0x10]         ; 005559d4
        ;   Label: LAB_005559d4
    FCOMP double ptr [0x00640d73]       ; 005559d8 | DOUBLE_00640d73
    FNSTSW AX                           ; 005559de
    SAHF                                ; 005559e0
    JBE 0x00555901                      ; 005559e1
        ;   XREF to: 00555901 (CONDITIONAL_JUMP)  ; LAB_00555901
    MOV dword ptr [ESP + 0x24],0x437f0000 ; 005559e7
    JMP 0x00555901                      ; 005559ef
        ;   XREF to: 00555901 (UNCONDITIONAL_JUMP)  ; LAB_00555901
    FLD double ptr [ESP]                ; 005559f4
        ;   Label: LAB_005559f4
    FCOMP double ptr [0x00640d73]       ; 005559f7 | DOUBLE_00640d73
    FNSTSW AX                           ; 005559fd
    SAHF                                ; 005559ff
    JBE 0x0055591e                      ; 00555a00
        ;   XREF to: 0055591e (CONDITIONAL_JUMP)  ; LAB_0055591e
    MOV dword ptr [ESP + 0x2c],0x437f0000 ; 00555a06
    JMP 0x0055591e                      ; 00555a0e
        ;   XREF to: 0055591e (UNCONDITIONAL_JUMP)  ; LAB_0055591e
    MOV EAX,dword ptr [ESP + 0x54]      ; 00555a13
        ;   Label: LAB_00555a13
    MOV EBX,ECX                         ; 00555a17
    MOV dword ptr [ESP + 0x50],EAX      ; 00555a19
    ADD EDX,0x10                        ; 00555a1d
    INC ECX                             ; 00555a20
    JMP 0x0055592d                      ; 00555a21
        ;   XREF to: 0055592d (UNCONDITIONAL_JUMP)  ; LAB_0055592d
    MOV dword ptr [EDI + 0x4b34],0x0    ; 00555a26
        ;   Label: LAB_00555a26
    MOV ESP,EBP                         ; 00555a30
    POP EBP                             ; 00555a32
    POP EDI                             ; 00555a33
    POP ESI                             ; 00555a34
    POP EBX                             ; 00555a35
    RET                                 ; 00555a36

