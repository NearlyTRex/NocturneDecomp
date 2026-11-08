; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b1850(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xa4]:8  local_a4
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined        Stack[-0x84]:1  local_84
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
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined8       Stack[-0x30]:8  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_005af4a0 at 005af926
;
; Referenced Globals:
;   TerminatedCString s_Chain_stretched_to_f_005f9bea
;   undefined4 DAT_005f9c02
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;
; Called Functions:
;   FUN_00408bb0
;   FUN_0042d750
;   FUN_00445430
;   FUN_005b5080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1850
        ;   Label: FUN_005b1850
    PUSH ESI                            ; 005b1851
    PUSH EDI                            ; 005b1852
    PUSH EBP                            ; 005b1853
    MOV EBP,ESP                         ; 005b1854
    SUB ESP,0x8c                        ; 005b1856
    SUB EBP,0x7e                        ; 005b185c
    MOV EBX,dword ptr [EBP + 0x92]      ; 005b185f
    CMP dword ptr [EBX + 0xc294],0x0    ; 005b1865
    JZ 0x005b1877                       ; 005b186c
        ;   XREF to: 005b1877 (CONDITIONAL_JUMP)  ; LAB_005b1877
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 005b186e
    JNZ 0x005b187f                      ; 005b1875
        ;   XREF to: 005b187f (CONDITIONAL_JUMP)  ; LAB_005b187f
    LEA ESP,[EBP + 0x7e]                ; 005b1877
        ;   Label: LAB_005b1877
    POP EBP                             ; 005b187a
    POP EDI                             ; 005b187b
    POP ESI                             ; 005b187c
    POP EBX                             ; 005b187d
    RET                                 ; 005b187e
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 005b187f
        ;   Label: LAB_005b187f
    LEA EAX,[EDX*0x4 + 0x0]             ; 005b1885
    MOV EDI,0xbe99999a                  ; 005b188c
    SUB EAX,EDX                         ; 005b1891
    XOR ESI,ESI                         ; 005b1893
    SHL EAX,0x4                         ; 005b1895
    LEA EDX,[EBX + 0xfd8]               ; 005b1898
    MOV dword ptr [EBP + 0x16],ESI      ; 005b189e
    ADD EAX,EDX                         ; 005b18a1
    MOV dword ptr [EBP + 0x1a],EDI      ; 005b18a3
    PUSH EAX                            ; 005b18a6
    LEA EAX,[EBP + 0x16]                ; 005b18a7
    MOV dword ptr [EBP + 0x1e],ESI      ; 005b18aa
    PUSH EAX                            ; 005b18ad
    LEA ESI,[EBP + 0xa]                 ; 005b18ae
    LEA EDI,[EBP + 0x2e]                ; 005b18b1
    CALL FUN_005b5080                   ; 005b18b4
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    LEA ESI,[EBP + 0xa]                 ; 005b18b9
    MOVSD ES:EDI,ESI                    ; 005b18bc
    MOVSD ES:EDI,ESI                    ; 005b18bd
    MOVSD ES:EDI,ESI                    ; 005b18be
    MOV EAX,dword ptr [EBX + 0xc294]    ; 005b18bf
    ADD ESP,0x8                         ; 005b18c5
    ADD EAX,0x20                        ; 005b18c8
    PUSH EAX                            ; 005b18cb
    PUSH EBX                            ; 005b18cc
    LEA ESI,[EBP + -0x2]                ; 005b18cd
    LEA EDI,[EBP + -0xe]                ; 005b18d0
    CALL FUN_00408bb0                   ; 005b18d3
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[EBP + -0x2]                ; 005b18d8
    MOVSD ES:EDI,ESI                    ; 005b18db
    MOVSD ES:EDI,ESI                    ; 005b18dc
    MOVSD ES:EDI,ESI                    ; 005b18dd
    ADD ESP,0x8                         ; 005b18de
    FLD float ptr [EBP + -0xa]          ; 005b18e1
    FCOMP double ptr [0x005f9c02]       ; 005b18e4 | DAT_005f9c02
    FNSTSW AX                           ; 005b18ea
    SAHF                                ; 005b18ec
    JC 0x005b1a11                       ; 005b18ed
        ;   XREF to: 005b1a11 (CONDITIONAL_JUMP)  ; LAB_005b1a11
    FLD float ptr [EBP + -0xe]          ; 005b18f3
    FLD float ptr [EBP + -0xa]          ; 005b18f6
    FLD float ptr [EBP + -0x6]          ; 005b18f9
    LEA EDI,[EBP + 0x46]                ; 005b18fc
    LEA ESI,[EBP + 0x22]                ; 005b18ff
    FXCH ST2                            ; 005b1902
    FSUB float ptr [EBP + 0x2e]         ; 005b1904
    FXCH                                ; 005b1907
    FSUB float ptr [EBP + 0x32]         ; 005b1909
    FXCH ST2                            ; 005b190c
    FSUB float ptr [EBP + 0x36]         ; 005b190e
    FXCH                                ; 005b1911
    FSTP float ptr [EBP + 0x22]         ; 005b1913
    FXCH                                ; 005b1916
    FSTP float ptr [EBP + 0x26]         ; 005b1918
    FSTP float ptr [EBP + 0x2a]         ; 005b191b
    MOVSD ES:EDI,ESI                    ; 005b191e
    MOVSD ES:EDI,ESI                    ; 005b191f
    MOVSD ES:EDI,ESI                    ; 005b1920
    FLD float ptr [EBP + 0x4a]          ; 005b1921
    FMUL ST0                            ; 005b1924
    FLD float ptr [EBP + 0x46]          ; 005b1926
    FMUL ST0                            ; 005b1929
    FXCH                                ; 005b192b
    FSTP float ptr [EBP + 0x6e]         ; 005b192d
    FADD float ptr [EBP + 0x6e]         ; 005b1930
    FLD float ptr [EBP + 0x4e]          ; 005b1933
    FMUL ST0                            ; 005b1936
    FADDP                               ; 005b1938
    FSQRT                               ; 005b193a
    SUB ESP,0x8                         ; 005b193c
    FST float ptr [EBP + 0x66]          ; 005b193f
    FSTP double ptr [ESP]               ; 005b1942
    PUSH 0x5f9bea                       ; 005b1945 | = "Chain stretched to %f\n"
    MOV EDX,dword ptr [0x00611100]      ; 005b194a | PTR_DAT_00611100
    PUSH EDX                            ; 005b1950 | DAT_007db5f0
    CALL FUN_00445430                   ; 005b1951
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    FLD float ptr [EBP + 0x66]          ; 005b1956
    ADD ESP,0x10                        ; 005b1959
    FCOMP float ptr [EBX + 0xc298]      ; 005b195c
    FNSTSW AX                           ; 005b1962
    SAHF                                ; 005b1964
    JBE 0x005b1877                      ; 005b1965
        ;   XREF to: 005b1877 (CONDITIONAL_JUMP)  ; LAB_005b1877
    FLD float ptr [EBX + 0xc298]        ; 005b196b
    FMUL ST0                            ; 005b1971
    FSUB float ptr [EBP + 0x6e]         ; 005b1973
    FLDZ                                ; 005b1976
    FXCH                                ; 005b1978
    FSTP double ptr [EBP + 0x5e]        ; 005b197a
    FCOMP double ptr [EBP + 0x5e]       ; 005b197d
    FNSTSW AX                           ; 005b1980
    SAHF                                ; 005b1982
    JA 0x005b1877                       ; 005b1983
        ;   XREF to: 005b1877 (CONDITIONAL_JUMP)  ; LAB_005b1877
    FLD double ptr [EBP + 0x5e]         ; 005b1989
    FSQRT                               ; 005b198c
    LEA EDI,[EBP + 0x3a]                ; 005b198e
    LEA ESI,[EBP + 0x22]                ; 005b1991
    MOVSD ES:EDI,ESI                    ; 005b1994
    MOVSD ES:EDI,ESI                    ; 005b1995
    MOVSD ES:EDI,ESI                    ; 005b1996
    FLD float ptr [EBP + 0x3a]          ; 005b1997
    FMUL ST0                            ; 005b199a
    FLD float ptr [EBP + 0x42]          ; 005b199c
    FMUL ST0                            ; 005b199f
    FADDP                               ; 005b19a1
    FSQRT                               ; 005b19a3
    XOR ECX,ECX                         ; 005b19a5
    MOV dword ptr [EBP + 0x3e],ECX      ; 005b19a7
    FXCH                                ; 005b19aa
    FSTP float ptr [EBP + 0x7a]         ; 005b19ac
    FST float ptr [EBP + 0x72]          ; 005b19af
    FLDZ                                ; 005b19b2
    FCOMPP                              ; 005b19b4
    FNSTSW AX                           ; 005b19b6
    SAHF                                ; 005b19b8
    JNC 0x005b1877                      ; 005b19b9
        ;   XREF to: 005b1877 (CONDITIONAL_JUMP)  ; LAB_005b1877
    FLD float ptr [EBP + 0x72]          ; 005b19bf
    FSUB float ptr [EBP + 0x7a]         ; 005b19c2
    FST float ptr [EBP + 0x6a]          ; 005b19c5
    FLDZ                                ; 005b19c8
    FCOMPP                              ; 005b19ca
    FNSTSW AX                           ; 005b19cc
    SAHF                                ; 005b19ce
    JNC 0x005b1877                      ; 005b19cf
        ;   XREF to: 005b1877 (CONDITIONAL_JUMP)  ; LAB_005b1877
    FLD float ptr [EBP + 0x6a]          ; 005b19d5
    FDIV float ptr [EBP + 0x72]         ; 005b19d8
    FLD float ptr [EBP + 0x3a]          ; 005b19db
    FXCH                                ; 005b19de
    FSTP float ptr [EBP + 0x76]         ; 005b19e0
    FMUL float ptr [EBP + 0x76]         ; 005b19e3
    FLDZ                                ; 005b19e6
    FMUL float ptr [EBP + 0x76]         ; 005b19e8
    LEA EAX,[EBP + 0x3a]                ; 005b19eb
    FLD float ptr [EBP + 0x42]          ; 005b19ee
    PUSH EAX                            ; 005b19f1
    FMUL float ptr [EBP + 0x76]         ; 005b19f2
    PUSH EBX                            ; 005b19f5
    FXCH ST2                            ; 005b19f6
    FSTP float ptr [EBP + 0x3a]         ; 005b19f8
    FSTP float ptr [EBP + 0x3e]         ; 005b19fb
    FSTP float ptr [EBP + 0x42]         ; 005b19fe
    CALL FUN_0042d750                   ; 005b1a01
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 005b1a06
    LEA ESP,[EBP + 0x7e]                ; 005b1a09
    POP EBP                             ; 005b1a0c
    POP EDI                             ; 005b1a0d
    POP ESI                             ; 005b1a0e
    POP EBX                             ; 005b1a0f
    RET                                 ; 005b1a10
    LEA EDI,[EBP + 0x52]                ; 005b1a11
        ;   Label: LAB_005b1a11
    LEA ESI,[EBP + -0x2]                ; 005b1a14
    LEA EAX,[EBP + 0x52]                ; 005b1a17
    MOVSD ES:EDI,ESI                    ; 005b1a1a
    MOVSD ES:EDI,ESI                    ; 005b1a1b
    MOVSD ES:EDI,ESI                    ; 005b1a1c
    PUSH EAX                            ; 005b1a1d
    XOR ESI,ESI                         ; 005b1a1e
    PUSH EBX                            ; 005b1a20
    MOV dword ptr [EBP + 0x56],ESI      ; 005b1a21
    CALL FUN_0042d750                   ; 005b1a24
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 005b1a29
    LEA ESP,[EBP + 0x7e]                ; 005b1a2c
    POP EBP                             ; 005b1a2f
    POP EDI                             ; 005b1a30
    POP ESI                             ; 005b1a31
    POP EBX                             ; 005b1a32
    RET                                 ; 005b1a33

