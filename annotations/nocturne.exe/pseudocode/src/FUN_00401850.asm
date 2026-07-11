; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00401850(int param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_004031a0 at 0040330a
;   FUN_00403570 at 004035f2
;
; Referenced Globals:
;   undefined4 DAT_0057712c
;   undefined4 DAT_00577134
;   undefined4 DAT_0057713c
;   undefined4 DAT_00577144
;   undefined4 DAT_0057714c
;   undefined4 DAT_006af638
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401850
        ;   Label: FUN_00401850
    PUSH ESI                            ; 00401851
    PUSH EDI                            ; 00401852
    PUSH EBP                            ; 00401853
    SUB ESP,0x30                        ; 00401854
    MOV EBP,dword ptr [ESP + 0x48]      ; 00401857
    MOV ESI,dword ptr [ESP + 0x50]      ; 0040185b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0040185f
    MOV ECX,0x1c00648                   ; 00401866
    SUB EAX,ESI                         ; 0040186b
    ADD ECX,EAX                         ; 0040186d
    MOV EAX,dword ptr [ESP + 0x44]      ; 0040186f
    MOV dword ptr [ESP + 0x28],EAX      ; 00401873
    MOV dword ptr [ESP + 0x2c],EBP      ; 00401877
    FILD dword ptr [ESP + 0x28]         ; 0040187b
    FMUL ST0                            ; 0040187f
    FILD dword ptr [ESP + 0x2c]         ; 00401881
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00401885
    FMUL ST0                            ; 00401889
    MOV dword ptr [ESP + 0x2c],EAX      ; 0040188b
    FADDP                               ; 0040188f
    FILD dword ptr [ESP + 0x2c]         ; 00401891
    FMUL ST0                            ; 00401895
    FADDP                               ; 00401897
    FSQRT                               ; 00401899
    MOV EDX,0x7149f2ca                  ; 0040189b
    FMUL double ptr [0x0057712c]        ; 004018a0 | DAT_0057712c
    MOV dword ptr [ESP + 0x20],EDX      ; 004018a6
    MOV EBX,ESI                         ; 004018aa
    MOV EAX,dword ptr [ESP + 0x54]      ; 004018ac
    FSTP float ptr [ESP + 0x1c]         ; 004018b0
    CMP ESI,EAX                         ; 004018b4
    JG 0x0040196e                       ; 004018b6
        ;   XREF to: 0040196e (CONDITIONAL_JUMP)  ; LAB_0040196e
    SHL ESI,0x2                         ; 004018bc
    XOR EAX,EAX                         ; 004018bf
        ;   Label: LAB_004018bf
    MOV EDX,dword ptr [ESP + 0x44]      ; 004018c1
    MOV AL,byte ptr [ECX]               ; 004018c5
    SUB EDX,EAX                         ; 004018c7
    MOV EAX,EDX                         ; 004018c9
    CDQ                                 ; 004018cb
    XOR EAX,EDX                         ; 004018cc
    SUB EAX,EDX                         ; 004018ce
    MOV dword ptr [ESP + 0x2c],EAX      ; 004018d0
    XOR EAX,EAX                         ; 004018d4
    MOV EDX,EBP                         ; 004018d6
    MOV AL,byte ptr [ECX + 0x1]         ; 004018d8
    SUB EDX,EAX                         ; 004018db
    FILD dword ptr [ESP + 0x2c]         ; 004018dd
    MOV EAX,EDX                         ; 004018e1
    FSTP float ptr [ESP + 0x8]          ; 004018e3
    CDQ                                 ; 004018e7
    XOR EAX,EDX                         ; 004018e8
    SUB EAX,EDX                         ; 004018ea
    MOV dword ptr [ESP + 0x2c],EAX      ; 004018ec
    XOR EAX,EAX                         ; 004018f0
    MOV EDX,dword ptr [ESP + 0x4c]      ; 004018f2
    MOV AL,byte ptr [ECX + 0x2]         ; 004018f6
    SUB EDX,EAX                         ; 004018f9
    FILD dword ptr [ESP + 0x2c]         ; 004018fb
    MOV EAX,EDX                         ; 004018ff
    FSTP float ptr [ESP]                ; 00401901
    CDQ                                 ; 00401904
    XOR EAX,EDX                         ; 00401905
    SUB EAX,EDX                         ; 00401907
    FLD float ptr [ESP + 0x1c]          ; 00401909
    FSUB float ptr [ESI + 0x6af638]     ; 0040190d | DAT_006af638
    MOV dword ptr [ESP + 0x2c],EAX      ; 00401913
    FABS                                ; 00401917
    FLD float ptr [ESP + 0x8]           ; 00401919
    FMUL ST0                            ; 0040191d
    FMUL double ptr [0x00577134]        ; 0040191f | DAT_00577134
    FLD float ptr [ESP]                 ; 00401925
    FMUL ST0                            ; 00401928
    FMUL double ptr [0x0057713c]        ; 0040192a | DAT_0057713c
    FADDP                               ; 00401930
    FILD dword ptr [ESP + 0x2c]         ; 00401932
    FMUL ST0                            ; 00401936
    FMUL double ptr [0x00577144]        ; 00401938 | DAT_00577144
    FADDP                               ; 0040193e
    FLD ST1                             ; 00401940
    FMULP ST2                           ; 00401942
    FXCH                                ; 00401944
    FMUL double ptr [0x0057714c]        ; 00401946 | DAT_0057714c
    FADDP                               ; 0040194c
    FST float ptr [ESP + 0x24]          ; 0040194e
    FCOMP float ptr [ESP + 0x20]        ; 00401952
    FNSTSW AX                           ; 00401956
    SAHF                                ; 00401958
    JC 0x00401978                       ; 00401959
        ;   XREF to: 00401978 (CONDITIONAL_JUMP)  ; LAB_00401978
    MOV EDX,dword ptr [ESP + 0x54]      ; 0040195b
        ;   Label: LAB_0040195b
    ADD ECX,0x3                         ; 0040195f
    INC EBX                             ; 00401962
    ADD ESI,0x4                         ; 00401963
    CMP EBX,EDX                         ; 00401966
    JLE 0x004018bf                      ; 00401968
        ;   XREF to: 004018bf (CONDITIONAL_JUMP)  ; LAB_004018bf
    MOV EAX,EDI                         ; 0040196e
        ;   Label: LAB_0040196e
    ADD ESP,0x30                        ; 00401970
    POP EBP                             ; 00401973
    POP EDI                             ; 00401974
    POP ESI                             ; 00401975
    POP EBX                             ; 00401976
    RET                                 ; 00401977
    MOV EAX,dword ptr [ESP + 0x24]      ; 00401978
        ;   Label: LAB_00401978
    MOV EDI,EBX                         ; 0040197c
    MOV dword ptr [ESP + 0x20],EAX      ; 0040197e
    JMP 0x0040195b                      ; 00401982
        ;   XREF to: 0040195b (UNCONDITIONAL_JUMP)  ; LAB_0040195b

