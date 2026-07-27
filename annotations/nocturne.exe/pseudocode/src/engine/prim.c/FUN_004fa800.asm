; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_prim_c_FUN_004fa800(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_01e52efc
;   undefined4 DAT_01e52f00
;   undefined4 DAT_01e53380
;   undefined4 DAT_01e53384
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa800
        ;   Label: engine_prim.c_FUN_004fa800
    PUSH ESI                            ; 004fa801
    PUSH EDI                            ; 004fa802
    PUSH EBP                            ; 004fa803
    SUB ESP,0x4                         ; 004fa804
    MOV ESI,dword ptr [ESP + 0x18]      ; 004fa807
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004fa80b
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fa80f
    MOV EDI,dword ptr [ESI + 0x14]      ; 004fa812
    SAR EBX,0x10                        ; 004fa815
    SAR EDI,0x10                        ; 004fa818
    CMP EDI,EBX                         ; 004fa81b
    JZ 0x004fa9fb                       ; 004fa81d
        ;   XREF to: 004fa9fb (CONDITIONAL_JUMP)  ; LAB_004fa9fb
    MOV EDX,dword ptr [EBP + 0x14]      ; 004fa823
    CMP EDX,dword ptr [ESI + 0x14]      ; 004fa826
    JGE 0x004fa837                      ; 004fa829
        ;   XREF to: 004fa837 (CONDITIONAL_JUMP)  ; LAB_004fa837
    MOV EAX,ESI                         ; 004fa82b
    MOV ESI,EBP                         ; 004fa82d
    MOV EBP,EAX                         ; 004fa82f
    MOV EAX,EDI                         ; 004fa831
    MOV EDI,EBX                         ; 004fa833
    MOV EBX,EAX                         ; 004fa835
    MOV EAX,[0x01e52efc]                ; 004fa837 | DAT_01e52efc
        ;   Label: LAB_004fa837
    LEA ECX,[EAX*0x8 + 0x0]             ; 004fa83c
    ADD ECX,EAX                         ; 004fa843
    SHL ECX,0x3                         ; 004fa845
    ADD ECX,0x1e52f00                   ; 004fa848
    MOV dword ptr [ECX],EDI             ; 004fa84e | DAT_01e52f00
    MOV EAX,[0x01e53380]                ; 004fa850 | DAT_01e53380
    MOV dword ptr [ECX + 0x4],EBX       ; 004fa855
    CMP EDI,EAX                         ; 004fa858
    JGE 0x004fa862                      ; 004fa85a
        ;   XREF to: 004fa862 (CONDITIONAL_JUMP)  ; LAB_004fa862
    MOV dword ptr [0x01e53380],EDI      ; 004fa85c | DAT_01e53380
    CMP EBX,dword ptr [0x01e53384]      ; 004fa862 | DAT_01e53384
        ;   Label: LAB_004fa862
    JLE 0x004fa870                      ; 004fa868
        ;   XREF to: 004fa870 (CONDITIONAL_JUMP)  ; LAB_004fa870
    MOV dword ptr [0x01e53384],EBX      ; 004fa86a | DAT_01e53384
    MOV EDI,dword ptr [ESI + 0x14]      ; 004fa870
        ;   Label: LAB_004fa870
    MOV EBX,dword ptr [EBP + 0x14]      ; 004fa873
    SUB EBX,EDI                         ; 004fa876
    CMP EBX,0x10000                     ; 004fa878
    JNC 0x004faa03                      ; 004fa87e
        ;   XREF to: 004faa03 (CONDITIONAL_JUMP)  ; LAB_004faa03
    XOR EBX,EBX                         ; 004fa884
    MOV EAX,dword ptr [EBP + 0x10]      ; 004fa886
        ;   Label: LAB_004fa886
    MOV EDX,dword ptr [ESI + 0x10]      ; 004fa889
    MOV EDI,dword ptr [ESI + 0x14]      ; 004fa88c
    SUB EAX,EDX                         ; 004fa88f
    AND EDI,0xffff                      ; 004fa891
    MOV EDX,EAX                         ; 004fa897
    MOV EAX,EBX                         ; 004fa899
    XOR DI,0xffff                       ; 004fa89b
    IMUL EDX                            ; 004fa89f
    SHRD EAX,EDX,0x10                   ; 004fa8a1
    MOV EDX,EAX                         ; 004fa8a5
    MOV dword ptr [ECX + 0xc],EAX       ; 004fa8a7
    MOV EAX,EDI                         ; 004fa8aa
    IMUL EDX                            ; 004fa8ac
    SHRD EAX,EDX,0x10                   ; 004fa8ae
    MOV dword ptr [ESP],EAX             ; 004fa8b2
    MOV EDX,dword ptr [ESP]             ; 004fa8b5
    MOV EAX,dword ptr [ESI + 0x10]      ; 004fa8b8
    ADD EAX,EDX                         ; 004fa8bb
    MOV dword ptr [ECX + 0x8],EAX       ; 004fa8bd
    MOV EAX,dword ptr [EBP + 0x18]      ; 004fa8c0
    MOV EDX,dword ptr [ESI + 0x18]      ; 004fa8c3
    SUB EAX,EDX                         ; 004fa8c6
    MOV EDX,EAX                         ; 004fa8c8
    MOV EAX,EBX                         ; 004fa8ca
    IMUL EDX                            ; 004fa8cc
    SHRD EAX,EDX,0x10                   ; 004fa8ce
    MOV EDX,EAX                         ; 004fa8d2
    MOV dword ptr [ECX + 0x1c],EAX      ; 004fa8d4
    MOV EAX,EDI                         ; 004fa8d7
    IMUL EDX                            ; 004fa8d9
    SHRD EAX,EDX,0x10                   ; 004fa8db
    MOV dword ptr [ESP],EAX             ; 004fa8df
    MOV EDX,dword ptr [ESP]             ; 004fa8e2
    MOV EAX,dword ptr [ESI + 0x18]      ; 004fa8e5
    ADD EAX,EDX                         ; 004fa8e8
    MOV dword ptr [ECX + 0x18],EAX      ; 004fa8ea
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004fa8ed
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004fa8f0
    SUB EAX,EDX                         ; 004fa8f3
    MOV EDX,EAX                         ; 004fa8f5
    MOV EAX,EBX                         ; 004fa8f7
    IMUL EDX                            ; 004fa8f9
    SHRD EAX,EDX,0x10                   ; 004fa8fb
    MOV EDX,EAX                         ; 004fa8ff
    MOV dword ptr [ECX + 0x24],EAX      ; 004fa901
    MOV EAX,EDI                         ; 004fa904
    IMUL EDX                            ; 004fa906
    SHRD EAX,EDX,0x10                   ; 004fa908
    MOV dword ptr [ESP],EAX             ; 004fa90c
    MOV EDX,dword ptr [ESP]             ; 004fa90f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 004fa912
    ADD EAX,EDX                         ; 004fa915
    MOV dword ptr [ECX + 0x20],EAX      ; 004fa917
    MOV EAX,dword ptr [EBP + 0x20]      ; 004fa91a
    MOV EDX,dword ptr [ESI + 0x20]      ; 004fa91d
    SUB EAX,EDX                         ; 004fa920
    MOV EDX,EAX                         ; 004fa922
    MOV EAX,EBX                         ; 004fa924
    IMUL EDX                            ; 004fa926
    SHRD EAX,EDX,0x10                   ; 004fa928
    MOV EDX,EAX                         ; 004fa92c
    MOV dword ptr [ECX + 0x14],EAX      ; 004fa92e
    MOV EAX,EDI                         ; 004fa931
    IMUL EDX                            ; 004fa933
    SHRD EAX,EDX,0x10                   ; 004fa935
    MOV dword ptr [ESP],EAX             ; 004fa939
    MOV EDX,dword ptr [ESP]             ; 004fa93c
    MOV EAX,dword ptr [ESI + 0x20]      ; 004fa93f
    ADD EAX,EDX                         ; 004fa942
    MOV dword ptr [ECX + 0x10],EAX      ; 004fa944
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004fa947
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004fa94a
    SUB EAX,EDX                         ; 004fa94d
    MOV EDX,EAX                         ; 004fa94f
    MOV EAX,EBX                         ; 004fa951
    IMUL EDX                            ; 004fa953
    SHRD EAX,EDX,0x10                   ; 004fa955
    MOV EDX,EAX                         ; 004fa959
    MOV dword ptr [ECX + 0x34],EAX      ; 004fa95b
    MOV EAX,EDI                         ; 004fa95e
    IMUL EDX                            ; 004fa960
    SHRD EAX,EDX,0x10                   ; 004fa962
    MOV dword ptr [ESP],EAX             ; 004fa966
    MOV EDX,dword ptr [ESP]             ; 004fa969
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004fa96c
    ADD EAX,EDX                         ; 004fa96f
    MOV dword ptr [ECX + 0x30],EAX      ; 004fa971
    MOV EAX,dword ptr [EBP + 0x8]       ; 004fa974
    MOV EDX,dword ptr [ESI + 0x8]       ; 004fa977
    SUB EAX,EDX                         ; 004fa97a
    MOV EDX,EAX                         ; 004fa97c
    MOV EAX,EBX                         ; 004fa97e
    IMUL EDX                            ; 004fa980
    SHRD EAX,EDX,0x10                   ; 004fa982
    MOV EDX,EAX                         ; 004fa986
    MOV dword ptr [ECX + 0x2c],EAX      ; 004fa988
    MOV EAX,EDI                         ; 004fa98b
    IMUL EDX                            ; 004fa98d
    SHRD EAX,EDX,0x10                   ; 004fa98f
    MOV dword ptr [ESP],EAX             ; 004fa993
    MOV EDX,dword ptr [ESP]             ; 004fa996
    MOV EAX,dword ptr [ESI + 0x8]       ; 004fa999
    ADD EAX,EDX                         ; 004fa99c
    MOV dword ptr [ECX + 0x28],EAX      ; 004fa99e
    MOV EAX,dword ptr [EBP + 0x24]      ; 004fa9a1
    MOV EDX,dword ptr [ESI + 0x24]      ; 004fa9a4
    SUB EAX,EDX                         ; 004fa9a7
    MOV EDX,EAX                         ; 004fa9a9
    MOV EAX,EBX                         ; 004fa9ab
    IMUL EDX                            ; 004fa9ad
    SHRD EAX,EDX,0x10                   ; 004fa9af
    MOV EDX,EAX                         ; 004fa9b3
    MOV dword ptr [ECX + 0x3c],EAX      ; 004fa9b5
    MOV EAX,EDI                         ; 004fa9b8
    IMUL EDX                            ; 004fa9ba
    SHRD EAX,EDX,0x10                   ; 004fa9bc
    MOV dword ptr [ESP],EAX             ; 004fa9c0
    MOV EDX,dword ptr [ESP]             ; 004fa9c3
    MOV EAX,dword ptr [ESI + 0x24]      ; 004fa9c6
    ADD EAX,EDX                         ; 004fa9c9
    MOV dword ptr [ECX + 0x38],EAX      ; 004fa9cb
    MOV EDX,dword ptr [EBP + 0x28]      ; 004fa9ce
    MOV EBP,dword ptr [ESI + 0x28]      ; 004fa9d1
    MOV EAX,EBX                         ; 004fa9d4
    SUB EDX,EBP                         ; 004fa9d6
    IMUL EDX                            ; 004fa9d8
    SHRD EAX,EDX,0x10                   ; 004fa9da
    MOV EDX,EAX                         ; 004fa9de
    MOV dword ptr [ECX + 0x44],EAX      ; 004fa9e0
    MOV EAX,EDI                         ; 004fa9e3
    IMUL EDX                            ; 004fa9e5
    SHRD EAX,EDX,0x10                   ; 004fa9e7
    MOV EDX,EAX                         ; 004fa9eb
    MOV EAX,dword ptr [ESI + 0x28]      ; 004fa9ed
    ADD EAX,EDX                         ; 004fa9f0
    MOV dword ptr [ECX + 0x40],EAX      ; 004fa9f2
    INC dword ptr [0x01e52efc]          ; 004fa9f5 | DAT_01e52efc
    ADD ESP,0x4                         ; 004fa9fb
        ;   Label: LAB_004fa9fb
    POP EBP                             ; 004fa9fe
    POP EDI                             ; 004fa9ff
    POP ESI                             ; 004faa00
    POP EBX                             ; 004faa01
    RET                                 ; 004faa02
    MOV EAX,0xffffffff                  ; 004faa03
        ;   Label: LAB_004faa03
    XOR EDX,EDX                         ; 004faa08
    DIV EBX                             ; 004faa0a
    MOV EBX,EAX                         ; 004faa0c
    JMP 0x004fa886                      ; 004faa0e
        ;   XREF to: 004fa886 (UNCONDITIONAL_JUMP)  ; LAB_004fa886

