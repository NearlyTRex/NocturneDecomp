; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f17e0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
;
; XREF[1]:
;   FUN_004f0e50 at 004f13a4
;
; Referenced Globals:
;   undefined4 DAT_005e53c7
;   undefined4 DAT_00622c18
;   undefined4 DAT_01fcf2cc
;   undefined4 DAT_01fcf2d0
;   undefined4 DAT_02c8ad44
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040c600
;   FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f17e0
        ;   Label: FUN_004f17e0
    PUSH ESI                            ; 004f17e1
    PUSH EDI                            ; 004f17e2
    PUSH EBP                            ; 004f17e3
    MOV EBP,ESP                         ; 004f17e4
    SUB ESP,0x4c                        ; 004f17e6
    AND ESP,0xfffffff8                  ; 004f17e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f17ec
    MOV EDX,0x40800000                  ; 004f17ef
    MOV ECX,0x3f800000                  ; 004f17f4
    MOV ESI,0x40000000                  ; 004f17f9
    MOV EDI,dword ptr [EBP + 0x14]      ; 004f17fe
    XOR EBX,EBX                         ; 004f1801
    MOV dword ptr [EAX + 0x1ffd0],0x0   ; 004f1803
    LEA EAX,[ESP + 0x18]                ; 004f180d
    MOV dword ptr [ESP + 0x3c],EDX      ; 004f1811
    PUSH EAX                            ; 004f1815
    MOV dword ptr [ESP + 0x1c],ECX      ; 004f1816
    MOV dword ptr [ESP + 0x24],ESI      ; 004f181a
    PUSH EDI                            ; 004f181e
    LEA ESI,[ESP + 0x2c]                ; 004f181f
    MOV dword ptr [ESP + 0x24],EBX      ; 004f1823
    CALL FUN_00408b40                   ; 004f1827
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA EDI,[ESP + 0x38]                ; 004f182c
    ADD ESP,0x8                         ; 004f1830
    LEA ESI,[ESP + 0x24]                ; 004f1833
    MOV dword ptr [ESP + 0x40],EBX      ; 004f1837
    MOV dword ptr [ESP + 0x44],EBX      ; 004f183b
    MOVSD ES:EDI,ESI                    ; 004f183f
    MOVSD ES:EDI,ESI                    ; 004f1840
    MOVSD ES:EDI,ESI                    ; 004f1841
    MOV EAX,[0x00622c18]                ; 004f1842 | DAT_00622c18
        ;   Label: LAB_004f1842
    MOV EBX,dword ptr [ESP + 0x40]      ; 004f1847
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 004f184b | DAT_01fcf2cc
    JL 0x004f186d                       ; 004f1851
        ;   XREF to: 004f186d (CONDITIONAL_JUMP)  ; LAB_004f186d
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f1853
    MOV EBX,dword ptr [EAX + 0x1ffd0]   ; 004f1856
    TEST EBX,EBX                        ; 004f185c
    JNZ 0x004f192e                      ; 004f185e
        ;   XREF to: 004f192e (CONDITIONAL_JUMP)  ; LAB_004f192e
    XOR EAX,EAX                         ; 004f1864
    MOV ESP,EBP                         ; 004f1866
    POP EBP                             ; 004f1868
    POP EDI                             ; 004f1869
    POP ESI                             ; 004f186a
    POP EBX                             ; 004f186b
    RET                                 ; 004f186c
    ADD EAX,dword ptr [ESP + 0x44]      ; 004f186d
        ;   Label: LAB_004f186d
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 004f1871 | DAT_01fcf2d0
    PUSH EBX                            ; 004f1877
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f1878
    CALL dword ptr [EAX + 0x94]         ; 004f187e
    ADD ESP,0x4                         ; 004f1884
    TEST EAX,EAX                        ; 004f1887
    JNZ 0x004f1915                      ; 004f1889
        ;   XREF to: 004f1915 (CONDITIONAL_JUMP)  ; LAB_004f1915
    MOV EDI,dword ptr [0x02c8ad44]      ; 004f188f | DAT_02c8ad44
    PUSH EDI                            ; 004f1895
    PUSH EBX                            ; 004f1896
    CALL FUN_0040c600                   ; 004f1897
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 004f189c
    TEST EAX,EAX                        ; 004f189f
    JZ 0x004f1915                       ; 004f18a1
        ;   XREF to: 004f1915 (CONDITIONAL_JUMP)  ; LAB_004f1915
    LEA EAX,[EBX + 0x20]                ; 004f18a3
    LEA EDI,[ESP + 0xc]                 ; 004f18a6
    MOV ESI,ESP                         ; 004f18aa
    FLD float ptr [EAX]                 ; 004f18ac
    FLD float ptr [EAX + 0x4]           ; 004f18ae
    FLD float ptr [EAX + 0x8]           ; 004f18b1
    FXCH ST2                            ; 004f18b4
    FSUB float ptr [ESP + 0x30]         ; 004f18b6
    FXCH                                ; 004f18ba
    FSUB float ptr [ESP + 0x34]         ; 004f18bc
    FXCH ST2                            ; 004f18c0
    FSUB float ptr [ESP + 0x38]         ; 004f18c2
    FXCH                                ; 004f18c6
    FSTP float ptr [ESP]                ; 004f18c8
    FXCH                                ; 004f18cb
    FSTP float ptr [ESP + 0x4]          ; 004f18cd
    FSTP float ptr [ESP + 0x8]          ; 004f18d1
    MOVSD ES:EDI,ESI                    ; 004f18d5
    MOVSD ES:EDI,ESI                    ; 004f18d6
    MOVSD ES:EDI,ESI                    ; 004f18d7
    FLD float ptr [ESP + 0x10]          ; 004f18d8
    FABS                                ; 004f18dc
    FCOMP double ptr [0x005e53c7]       ; 004f18de | DAT_005e53c7
    FNSTSW AX                           ; 004f18e4
    SAHF                                ; 004f18e6
    JA 0x004f1915                       ; 004f18e7
        ;   XREF to: 004f1915 (CONDITIONAL_JUMP)  ; LAB_004f1915
    FLD float ptr [ESP + 0x14]          ; 004f18e9
    FMUL ST0                            ; 004f18ed
    FLD float ptr [ESP + 0xc]           ; 004f18ef
    FMUL ST0                            ; 004f18f3
    FADDP                               ; 004f18f5
    FST float ptr [ESP + 0x48]          ; 004f18f7
    FCOMP float ptr [ESP + 0x3c]        ; 004f18fb
    FNSTSW AX                           ; 004f18ff
    SAHF                                ; 004f1901
    JA 0x004f1915                       ; 004f1902
        ;   XREF to: 004f1915 (CONDITIONAL_JUMP)  ; LAB_004f1915
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f1904
    MOV dword ptr [EAX + 0x1ffd0],EBX   ; 004f1907
    MOV EAX,dword ptr [ESP + 0x48]      ; 004f190d
    MOV dword ptr [ESP + 0x3c],EAX      ; 004f1911
    MOV EDX,dword ptr [ESP + 0x40]      ; 004f1915
        ;   Label: LAB_004f1915
    MOV EAX,dword ptr [ESP + 0x44]      ; 004f1919
    INC EDX                             ; 004f191d
    ADD EAX,0x4                         ; 004f191e
    MOV dword ptr [ESP + 0x40],EDX      ; 004f1921
    MOV dword ptr [ESP + 0x44],EAX      ; 004f1925
    JMP 0x004f1842                      ; 004f1929
        ;   XREF to: 004f1842 (UNCONDITIONAL_JUMP)  ; LAB_004f1842
    FLD float ptr [EBX + 0x20]          ; 004f192e
        ;   Label: LAB_004f192e
    FSUB float ptr [ESP + 0x30]         ; 004f1931
    FADD float ptr [EAX + 0x20]         ; 004f1935
    FSTP float ptr [EAX + 0x20]         ; 004f1938
    MOV EAX,dword ptr [EAX + 0x1ffd0]   ; 004f193b
    FLD float ptr [EAX + 0x28]          ; 004f1941
    MOV EAX,dword ptr [EBP + 0x14]      ; 004f1944
    PUSH 0x1                            ; 004f1947
    ADD EAX,0x158                       ; 004f1949
    FSUB float ptr [ESP + 0x3c]         ; 004f194e
    PUSH 0x13                           ; 004f1952
    FADD float ptr [EAX + 0xfffffed0]   ; 004f1954
    PUSH EAX                            ; 004f195a
    FSTP float ptr [EAX + 0xfffffed0]   ; 004f195b
    CALL FUN_005247c0                   ; 004f1961
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    MOV EAX,0x1                         ; 004f1966
    ADD ESP,0xc                         ; 004f196b
    MOV ESP,EBP                         ; 004f196e
    POP EBP                             ; 004f1970
    POP EDI                             ; 004f1971
    POP ESI                             ; 004f1972
    POP EBX                             ; 004f1973
    RET                                 ; 004f1974

