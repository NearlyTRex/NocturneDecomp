; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_chain_cpp_FUN_00429660(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)
;
; Parameters:
; CChain *         Stack[0x4]:4   this_ptr
; SChainVertex *   Stack[0x8]:4   vertex_a
; SChainVertex *   Stack[0xc]:4   vertex_b
;
; XREF[1]:
;   core_chain.cpp_FUN_004298f0 at 00429c46
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429660
        ;   Label: core_chain.cpp_FUN_00429660
    PUSH ESI                            ; 00429661
    PUSH EDI                            ; 00429662
    SUB ESP,0x98                        ; 00429663
    MOV EBX,dword ptr [ESP + 0xa8]      ; 00429669
    MOV EDX,dword ptr [ESP + 0xac]      ; 00429670
    MOV ECX,dword ptr [ESP + 0xb0]      ; 00429677
    CMP dword ptr [EBX + 0x288],0x0     ; 0042967e
    JZ 0x004296b3                       ; 00429685
        ;   XREF to: 004296b3 (CONDITIONAL_JUMP)  ; LAB_004296b3
    FLD float ptr [EDX + 0x4]           ; 00429687
    FCOMP float ptr [EBX + 0x56c]       ; 0042968a
    FNSTSW AX                           ; 00429690
    SAHF                                ; 00429692
    JNC 0x004296b3                      ; 00429693
        ;   XREF to: 004296b3 (CONDITIONAL_JUMP)  ; LAB_004296b3
    LEA EAX,[EDX + 0xc]                 ; 00429695
    MOV dword ptr [EAX + 0x8],0x0       ; 00429698
    MOV ESI,dword ptr [EAX + 0x8]       ; 0042969f
    MOV dword ptr [EAX + 0x4],ESI       ; 004296a2
    MOV ESI,dword ptr [EAX + 0x4]       ; 004296a5
    MOV dword ptr [EAX],ESI             ; 004296a8
    MOV EAX,dword ptr [EBX + 0x56c]     ; 004296aa
    MOV dword ptr [EDX + 0x4],EAX       ; 004296b0
    FLD float ptr [EDX]                 ; 004296b3
        ;   Label: LAB_004296b3
    FLD float ptr [EDX + 0x4]           ; 004296b5
    FLD float ptr [EDX + 0x8]           ; 004296b8
    LEA EDI,[ESP + 0x30]                ; 004296bb
    LEA ESI,[ESP + 0x24]                ; 004296bf
    FXCH ST2                            ; 004296c3
    FSUB float ptr [ECX]                ; 004296c5
    FXCH                                ; 004296c7
    FSUB float ptr [ECX + 0x4]          ; 004296c9
    FXCH ST2                            ; 004296cc
    FSUB float ptr [ECX + 0x8]          ; 004296ce
    FXCH ST2                            ; 004296d1
    FSTP float ptr [ESP + 0x28]         ; 004296d3
    FXCH                                ; 004296d7
    FSTP float ptr [ESP + 0x2c]         ; 004296d9
    FSTP float ptr [ESP + 0x24]         ; 004296dd
    MOVSD ES:EDI,ESI                    ; 004296e1
    MOVSD ES:EDI,ESI                    ; 004296e2
    MOVSD ES:EDI,ESI                    ; 004296e3
    LEA EAX,[ESP + 0x30]                ; 004296e4
    MOV ESI,ESP                         ; 004296e8
    CMP ESI,EAX                         ; 004296ea
    JZ 0x00429705                       ; 004296ec
        ;   XREF to: 00429705 (CONDITIONAL_JUMP)  ; LAB_00429705
    MOV EAX,dword ptr [ESP + 0x30]      ; 004296ee
    MOV dword ptr [ESP],EAX             ; 004296f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004296f5
    MOV dword ptr [ESP + 0x4],EAX       ; 004296f9
    MOV EAX,dword ptr [ESP + 0x38]      ; 004296fd
    MOV dword ptr [ESP + 0x8],EAX       ; 00429701
    FLD float ptr [ESP + 0x4]           ; 00429705
        ;   Label: LAB_00429705
    FMUL ST0                            ; 00429709
    FLD float ptr [ESP]                 ; 0042970b
    FMUL ST0                            ; 0042970e
    FADDP                               ; 00429710
    FLD float ptr [ESP + 0x8]           ; 00429712
    FMUL ST0                            ; 00429716
    FADDP                               ; 00429718
    FSTP float ptr [ESP + 0x90]         ; 0042971a
    MOV EAX,dword ptr [ESP + 0x90]      ; 00429721
    MOV EDI,dword ptr [0x01d1a0a4]      ; 00429728 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0042972e
    ADD EAX,EDI                         ; 00429730
    MOV dword ptr [ESP + 0x94],EAX      ; 00429732
    MOV EAX,dword ptr [EBX + 0x160]     ; 00429739
    MOV dword ptr [ESP + 0x84],EAX      ; 0042973f
    FLD float ptr [ESP + 0x94]          ; 00429746
    FCOMP float ptr [ESP + 0x84]        ; 0042974d
    FNSTSW AX                           ; 00429754
    SAHF                                ; 00429756
    JA 0x00429763                       ; 00429757
        ;   XREF to: 00429763 (CONDITIONAL_JUMP)  ; LAB_00429763
    ADD ESP,0x98                        ; 00429759
    POP EDI                             ; 0042975f
    POP ESI                             ; 00429760
    POP EBX                             ; 00429761
    RET                                 ; 00429762
    FLD float ptr [ESP + 0x94]          ; 00429763
        ;   Label: LAB_00429763
    FLD ST0                             ; 0042976a
    FSUB float ptr [ESP + 0x84]         ; 0042976c
    FLD float ptr [ESP]                 ; 00429773
    FXCH                                ; 00429776
    FSTP float ptr [ESP + 0x8c]         ; 00429778
    FMUL float ptr [ESP + 0x8c]         ; 0042977f
    FLD float ptr [ESP + 0x4]           ; 00429786
    FMUL float ptr [ESP + 0x8c]         ; 0042978a
    FLD float ptr [ESP + 0x8]           ; 00429791
    FMUL float ptr [ESP + 0x8c]         ; 00429795
    LEA EDI,[ESP + 0x6c]                ; 0042979c
    LEA ESI,[ESP + 0x3c]                ; 004297a0
    FXCH ST2                            ; 004297a4
    FSTP float ptr [ESP + 0x3c]         ; 004297a6
    FSTP float ptr [ESP + 0x40]         ; 004297aa
    FSTP float ptr [ESP + 0x44]         ; 004297ae
    MOVSD ES:EDI,ESI                    ; 004297b2
    MOVSD ES:EDI,ESI                    ; 004297b3
    MOVSD ES:EDI,ESI                    ; 004297b4
    FLD1                                ; 004297b5
    FLD float ptr [ESP + 0x6c]          ; 004297b7
    FXCH                                ; 004297bb
    FDIVRP ST2,ST0                      ; 004297bd
    FMUL ST1                            ; 004297bf
    FLD float ptr [ESP + 0x70]          ; 004297c1
    FMUL ST2                            ; 004297c5
    FLD float ptr [ESP + 0x74]          ; 004297c7
    FMULP ST3                           ; 004297cb
    LEA EDI,[ESP + 0x54]                ; 004297cd
    LEA ESI,[ESP + 0x60]                ; 004297d1
    FXCH                                ; 004297d5
    FSTP float ptr [ESP + 0x60]         ; 004297d7
    FSTP float ptr [ESP + 0x64]         ; 004297db
    FSTP float ptr [ESP + 0x68]         ; 004297df
    MOVSD ES:EDI,ESI                    ; 004297e3
    MOVSD ES:EDI,ESI                    ; 004297e4
    MOVSD ES:EDI,ESI                    ; 004297e5
    LEA EAX,[EBX + 0x570]               ; 004297e6
    FLD float ptr [ESP + 0x54]          ; 004297ec
    FLD float ptr [EDX]                 ; 004297f0
    FLD float ptr [EDX + 0x4]           ; 004297f2
    FLD float ptr [EDX + 0x8]           ; 004297f5
    FXCH ST2                            ; 004297f8
    FSUB float ptr [ESP + 0x54]         ; 004297fa
    FXCH                                ; 004297fe
    FSUB float ptr [ESP + 0x58]         ; 00429800
    FXCH ST2                            ; 00429804
    FSUB float ptr [ESP + 0x5c]         ; 00429806
    FXCH                                ; 0042980a
    FSTP float ptr [EDX]                ; 0042980c
    FXCH                                ; 0042980e
    FSTP float ptr [EDX + 0x4]          ; 00429810
    FSTP float ptr [EDX + 0x8]          ; 00429813
    FMUL float ptr [EAX]                ; 00429816
    FLD float ptr [ESP + 0x58]          ; 00429818
    FMUL float ptr [EAX]                ; 0042981c
    FLD float ptr [ESP + 0x5c]          ; 0042981e
    FMUL float ptr [EAX]                ; 00429822
    LEA EDI,[ESP + 0x78]                ; 00429824
    LEA ESI,[ESP + 0xc]                 ; 00429828
    FXCH ST2                            ; 0042982c
    FSTP float ptr [ESP + 0xc]          ; 0042982e
    FSTP float ptr [ESP + 0x10]         ; 00429832
    FSTP float ptr [ESP + 0x14]         ; 00429836
    MOVSD ES:EDI,ESI                    ; 0042983a
    MOVSD ES:EDI,ESI                    ; 0042983b
    MOVSD ES:EDI,ESI                    ; 0042983c
    FLD float ptr [ESP + 0x54]          ; 0042983d
    FLD float ptr [EDX + 0xc]           ; 00429841
    FLD float ptr [EDX + 0x10]          ; 00429844
    FLD float ptr [EDX + 0x14]          ; 00429847
    FXCH ST2                            ; 0042984a
    FSUB float ptr [ESP + 0x78]         ; 0042984c
    FXCH                                ; 00429850
    FSUB float ptr [ESP + 0x7c]         ; 00429852
    FXCH ST2                            ; 00429856
    FSUB float ptr [ESP + 0x80]         ; 00429858
    FXCH                                ; 0042985f
    FSTP float ptr [EDX + 0xc]          ; 00429861
    FXCH                                ; 00429864
    FSTP float ptr [EDX + 0x10]         ; 00429866
    FSTP float ptr [EDX + 0x14]         ; 00429869
    FLD float ptr [ECX]                 ; 0042986c
    FLD float ptr [ECX + 0x4]           ; 0042986e
    FLD float ptr [ECX + 0x8]           ; 00429871
    FXCH ST2                            ; 00429874
    FADD float ptr [ESP + 0x54]         ; 00429876
    FXCH                                ; 0042987a
    FADD float ptr [ESP + 0x58]         ; 0042987c
    FXCH ST2                            ; 00429880
    FADD float ptr [ESP + 0x5c]         ; 00429882
    FXCH                                ; 00429886
    FSTP float ptr [ECX]                ; 00429888
    FXCH                                ; 0042988a
    FSTP float ptr [ECX + 0x4]          ; 0042988c
    FSTP float ptr [ECX + 0x8]          ; 0042988f
    FMUL float ptr [EAX]                ; 00429892
    FLD float ptr [ESP + 0x58]          ; 00429894
    FMUL float ptr [EAX]                ; 00429898
    FLD float ptr [ESP + 0x5c]          ; 0042989a
    FMUL float ptr [EAX]                ; 0042989e
    LEA EDI,[ESP + 0x18]                ; 004298a0
    LEA ESI,[ESP + 0x48]                ; 004298a4
    FXCH ST2                            ; 004298a8
    FSTP float ptr [ESP + 0x48]         ; 004298aa
    FSTP float ptr [ESP + 0x4c]         ; 004298ae
    FSTP float ptr [ESP + 0x50]         ; 004298b2
    MOVSD ES:EDI,ESI                    ; 004298b6
    MOVSD ES:EDI,ESI                    ; 004298b7
    MOVSD ES:EDI,ESI                    ; 004298b8
    FLD float ptr [ECX + 0xc]           ; 004298b9
    FLD float ptr [ECX + 0x10]          ; 004298bc
    FLD float ptr [ECX + 0x14]          ; 004298bf
    FXCH ST2                            ; 004298c2
    FADD float ptr [ESP + 0x18]         ; 004298c4
    FXCH                                ; 004298c8
    FADD float ptr [ESP + 0x1c]         ; 004298ca
    FXCH ST2                            ; 004298ce
    FADD float ptr [ESP + 0x20]         ; 004298d0
    FXCH                                ; 004298d4
    FSTP float ptr [ECX + 0xc]          ; 004298d6
    FXCH                                ; 004298d9
    FSTP float ptr [ECX + 0x10]         ; 004298db
    FSTP float ptr [ECX + 0x14]         ; 004298de
    ADD ESP,0x98                        ; 004298e1
    POP EDI                             ; 004298e7
    POP ESI                             ; 004298e8
    POP EBX                             ; 004298e9
    RET                                 ; 004298ea

