; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004926d0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005dbc5c
;   undefined4 DAT_005dbc64
;   undefined4 DAT_005ff6bc
;   undefined4 DAT_0061c010
;   undefined4 DAT_006236b8
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cd00
;   FUN_004b59e0
;   FUN_0057d9d0
;   FUN_005ad770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004926d0
        ;   Label: FUN_004926d0
    PUSH ESI                            ; 004926d1
    PUSH EDI                            ; 004926d2
    PUSH EBP                            ; 004926d3
    MOV EBP,ESP                         ; 004926d4
    SUB ESP,0xb0                        ; 004926d6
    AND ESP,0xfffffff8                  ; 004926dc
    MOV EBX,dword ptr [EBP + 0x14]      ; 004926df
    PUSH dword ptr [EBP + 0x18]         ; 004926e2
    PUSH EBX                            ; 004926e5
    CALL FUN_005ad770                   ; 004926e6
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad770()
    FLD float ptr [EBX + 0x578]         ; 004926eb
    FLDZ                                ; 004926f1
    ADD ESP,0x8                         ; 004926f3
    FCOMPP                              ; 004926f6
    FNSTSW AX                           ; 004926f8
    SAHF                                ; 004926fa
    JA 0x0049273f                       ; 004926fb
        ;   XREF to: 0049273f (CONDITIONAL_JUMP)  ; LAB_0049273f
    FLD float ptr [EBX + 0x578]         ; 004926fd
    FSUB float ptr [EBP + 0x18]         ; 00492703
    FLDZ                                ; 00492706
    FXCH                                ; 00492708
    FST float ptr [EBX + 0x578]         ; 0049270a
    FSTP double ptr [ESP]               ; 00492710
    FCOMP double ptr [ESP]              ; 00492713
    FNSTSW AX                           ; 00492716
    SAHF                                ; 00492718
    JA 0x00492746                       ; 00492719
        ;   XREF to: 00492746 (CONDITIONAL_JUMP)  ; LAB_00492746
    FLD float ptr [EBP + 0x18]          ; 0049271b
    FMUL double ptr [0x005dbc5c]        ; 0049271e | DAT_005dbc5c
    FMUL double ptr [ESP]               ; 00492724
    FDIV float ptr [0x005ff6bc]         ; 00492727 | DAT_005ff6bc
    SUB ESP,0x4                         ; 0049272d
    FSTP float ptr [ESP]                ; 00492730
    CALL FUN_0040cd00                   ; 00492733
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 00492738
    TEST EAX,EAX                        ; 0049273b
    JNZ 0x00492772                      ; 0049273d
        ;   XREF to: 00492772 (CONDITIONAL_JUMP)  ; LAB_00492772
    MOV ESP,EBP                         ; 0049273f
        ;   Label: LAB_0049273f
    POP EBP                             ; 00492741
    POP EDI                             ; 00492742
    POP ESI                             ; 00492743
    POP EBX                             ; 00492744
    RET                                 ; 00492745
    MOV ECX,dword ptr [EBX + 0x588]     ; 00492746
        ;   Label: LAB_00492746
    PUSH ECX                            ; 0049274c
    MOV ESI,dword ptr [0x006236b8]      ; 0049274d | DAT_006236b8
    PUSH ESI                            ; 00492753
    MOV dword ptr [EBX + 0x578],0x0     ; 00492754
    CALL FUN_0057d9d0                   ; 0049275e
        ;   XREF to: 0057d9d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d9d0()
    ADD ESP,0x8                         ; 00492763
    MOV dword ptr [EBX + 0x588],0x0     ; 00492766
    JMP 0x0049273f                      ; 00492770
        ;   XREF to: 0049273f (UNCONDITIONAL_JUMP)  ; LAB_0049273f
    PUSH EBX                            ; 00492772
        ;   Label: LAB_00492772
    MOV EAX,dword ptr [EBX + 0x154]     ; 00492773
    LEA ESI,[ESP + 0xc]                 ; 00492779
    LEA EDI,[ESP + 0x54]                ; 0049277d
    CALL dword ptr [EAX + 0x1c]         ; 00492781
    MOV ECX,0x6                         ; 00492784
    LEA ESI,[ESP + 0xc]                 ; 00492789
    ADD ESP,0x4                         ; 0049278d
    MOVSD.REP ES:EDI,ESI                ; 00492790
    LEA EAX,[ESP + 0x50]                ; 00492792
    FLD float ptr [ESP + 0x50]          ; 00492796
    FLD float ptr [ESP + 0x54]          ; 0049279a
    FLD float ptr [ESP + 0x58]          ; 0049279e
    LEA EDI,[ESP + 0x80]                ; 004927a2
    LEA ESI,[ESP + 0x98]                ; 004927a9
    FXCH ST2                            ; 004927b0
    FADD float ptr [EAX + 0xc]          ; 004927b2
    FXCH                                ; 004927b5
    FADD float ptr [EAX + 0x10]         ; 004927b7
    FXCH ST2                            ; 004927ba
    FADD float ptr [EAX + 0x14]         ; 004927bc
    FXCH                                ; 004927bf
    FSTP float ptr [ESP + 0x98]         ; 004927c1
    FXCH                                ; 004927c8
    FSTP float ptr [ESP + 0x9c]         ; 004927ca
    FSTP float ptr [ESP + 0xa0]         ; 004927d1
    MOVSD ES:EDI,ESI                    ; 004927d8
    MOVSD ES:EDI,ESI                    ; 004927d9
    MOVSD ES:EDI,ESI                    ; 004927da
    FLD float ptr [0x005dbc64]          ; 004927db | DAT_005dbc64
    FLD float ptr [ESP + 0x80]          ; 004927e1
    FMUL ST1                            ; 004927e8
    FLD float ptr [ESP + 0x84]          ; 004927ea
    FMUL ST2                            ; 004927f1
    FLD float ptr [ESP + 0x88]          ; 004927f3
    FMULP ST3                           ; 004927fa
    LEA EDI,[ESP + 0x74]                ; 004927fc
    LEA ESI,[ESP + 0x68]                ; 00492800
    FXCH                                ; 00492804
    FSTP float ptr [ESP + 0x68]         ; 00492806
    FSTP float ptr [ESP + 0x6c]         ; 0049280a
    FSTP float ptr [ESP + 0x70]         ; 0049280e
    MOVSD ES:EDI,ESI                    ; 00492812
    MOVSD ES:EDI,ESI                    ; 00492813
    MOVSD ES:EDI,ESI                    ; 00492814
    PUSH EBX                            ; 00492815
    MOV EAX,dword ptr [EBX + 0x154]     ; 00492816
    LEA ESI,[ESP + 0x24]                ; 0049281c
    LEA EDI,[ESP + 0x3c]                ; 00492820
    CALL dword ptr [EAX + 0x1c]         ; 00492824
    MOV ECX,0x6                         ; 00492827
    LEA ESI,[ESP + 0x24]                ; 0049282c
    ADD ESP,0x4                         ; 00492830
    MOVSD.REP ES:EDI,ESI                ; 00492833
    MOV EAX,dword ptr [ESP + 0x4c]      ; 00492835
    MOV dword ptr [ESP + 0x7c],EAX      ; 00492839
    LEA EAX,[ESP + 0x74]                ; 0049283d
    PUSH EAX                            ; 00492841
    PUSH EBX                            ; 00492842
    LEA ESI,[ESP + 0xac]                ; 00492843
    LEA EDI,[ESP + 0x94]                ; 0049284a
    CALL FUN_00408b40                   ; 00492851
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xac]                ; 00492856
    LEA EAX,[ESP + 0x94]                ; 0049285d
    ADD ESP,0x8                         ; 00492864
    LEA EBX,[ESP + 0x74]                ; 00492867
    MOVSD ES:EDI,ESI                    ; 0049286b
    MOVSD ES:EDI,ESI                    ; 0049286c
    MOVSD ES:EDI,ESI                    ; 0049286d
    CMP EBX,EAX                         ; 0049286e
    JZ 0x00492893                       ; 00492870
        ;   XREF to: 00492893 (CONDITIONAL_JUMP)  ; LAB_00492893
    MOV EAX,dword ptr [ESP + 0x8c]      ; 00492872
    MOV dword ptr [ESP + 0x74],EAX      ; 00492879
    MOV EAX,dword ptr [ESP + 0x90]      ; 0049287d
    MOV dword ptr [ESP + 0x78],EAX      ; 00492884
    MOV EAX,dword ptr [ESP + 0x94]      ; 00492888
    MOV dword ptr [ESP + 0x7c],EAX      ; 0049288f
    PUSH 0xffff                         ; 00492893
        ;   Label: LAB_00492893
    PUSH 0x0                            ; 00492898
    PUSH 0x10000                        ; 0049289a
    PUSH 0x4000                         ; 0049289f
    PUSH 0x0                            ; 004928a4
    LEA EAX,[ESP + 0x88]                ; 004928a6
    PUSH EAX                            ; 004928ad
    MOV EDX,dword ptr [0x0061c010]      ; 004928ae | DAT_0061c010
    PUSH EDX                            ; 004928b4
    CALL FUN_004b59e0                   ; 004928b5
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b59e0()
    ADD ESP,0x1c                        ; 004928ba
    MOV ESP,EBP                         ; 004928bd
    POP EBP                             ; 004928bf
    POP EDI                             ; 004928c0
    POP ESI                             ; 004928c1
    POP EBX                             ; 004928c2
    RET                                 ; 004928c3

