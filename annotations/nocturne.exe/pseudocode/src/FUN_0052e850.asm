; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052e850(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[3]:
;   FUN_004d12e0 at 004d1b85
;   FUN_004d21c0 at 004d2328
;   FUN_004d23d0 at 004d26cb
;
; Referenced Globals:
;   undefined4 s_splash-music-44.wav_00594bd5+1
;   string s_splash-music-22.wav_00594bea
;   undefined4 DAT_005a22e4
;   undefined4 DAT_005a22e8
;   undefined4 DAT_005a22ec
;
; Called Functions:
;   FUN_005261b0
;   FUN_00526270
;   FUN_00526340
;   FUN_005263c0
;   FUN_005265a0
;   FUN_00526ca0
;   FUN_005272e0
;   FUN_00527380
;   FUN_00527610
;   FUN_00527690
;   FUN_005277b0
;   FUN_00527e40
;   FUN_005281b0
;   FUN_00528630
;   FUN_0052e9c0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0052e850
        ;   Label: FUN_0052e850
    PUSH 0x1                            ; 0052e853
    CALL FUN_00527380                   ; 0052e855
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined FUN_00527380()
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e85a
    FLD float ptr [ESP + 0x4]           ; 0052e85e
    ADD ESP,0x4                         ; 0052e862
    FCOMP float ptr [0x005a22e4]        ; 0052e865 | DAT_005a22e4
    FNSTSW AX                           ; 0052e86b
    SAHF                                ; 0052e86d
    JA 0x0052e993                       ; 0052e86e
        ;   XREF to: 0052e993 (CONDITIONAL_JUMP)  ; LAB_0052e993
    PUSH 0x0                            ; 0052e874
        ;   Label: LAB_0052e874
    CALL FUN_00527380                   ; 0052e876
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined FUN_00527380()
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e87b
    FLD float ptr [ESP + 0x4]           ; 0052e87f
    ADD ESP,0x4                         ; 0052e883
    FCOMP float ptr [0x005a22e8]        ; 0052e886 | DAT_005a22e8
    FNSTSW AX                           ; 0052e88c
    SAHF                                ; 0052e88e
    JBE 0x0052e8a1                      ; 0052e88f
        ;   XREF to: 0052e8a1 (CONDITIONAL_JUMP)  ; LAB_0052e8a1
    PUSH dword ptr [0x005a22e8]         ; 0052e891 | DAT_005a22e8
    PUSH 0x0                            ; 0052e897
    CALL FUN_005272e0                   ; 0052e899
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005272e0()
    ADD ESP,0x8                         ; 0052e89e
    PUSH 0x2                            ; 0052e8a1
        ;   Label: LAB_0052e8a1
    CALL FUN_00527380                   ; 0052e8a3
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; undefined FUN_00527380()
    MOV dword ptr [ESP + 0x4],EAX       ; 0052e8a8
    FLD float ptr [ESP + 0x4]           ; 0052e8ac
    ADD ESP,0x4                         ; 0052e8b0
    FCOMP float ptr [0x005a22ec]        ; 0052e8b3 | DAT_005a22ec
    FNSTSW AX                           ; 0052e8b9
    SAHF                                ; 0052e8bb
    JBE 0x0052e8ce                      ; 0052e8bc
        ;   XREF to: 0052e8ce (CONDITIONAL_JUMP)  ; LAB_0052e8ce
    PUSH dword ptr [0x005a22ec]         ; 0052e8be | DAT_005a22ec
    PUSH 0x2                            ; 0052e8c4
    CALL FUN_005272e0                   ; 0052e8c6
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005272e0()
    ADD ESP,0x8                         ; 0052e8cb
    CALL FUN_00526ca0                   ; 0052e8ce
        ;   XREF to: 00526ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00526ca0()
        ;   Label: LAB_0052e8ce
    TEST EAX,EAX                        ; 0052e8d3
    JNZ 0x0052e98f                      ; 0052e8d5
        ;   XREF to: 0052e98f (CONDITIONAL_JUMP)  ; LAB_0052e98f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0052e8db
    PUSH EDX                            ; 0052e8df
    CALL FUN_0052e9c0                   ; 0052e8e0
        ;   XREF to: 0052e9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052e9c0()
    ADD ESP,0x4                         ; 0052e8e5
    PUSH 0x0                            ; 0052e8e8
    PUSH 0x0                            ; 0052e8ea
    PUSH 0x0                            ; 0052e8ec
    CALL FUN_00528630                   ; 0052e8ee
        ;   XREF to: 00528630 (UNCONDITIONAL_CALL)  ; undefined FUN_00528630()
    ADD ESP,0xc                         ; 0052e8f3
    PUSH 0x0                            ; 0052e8f6
    PUSH 0x0                            ; 0052e8f8
    PUSH 0x0                            ; 0052e8fa
    PUSH 0x0                            ; 0052e8fc
    PUSH 0x0                            ; 0052e8fe
    PUSH 0x0                            ; 0052e900
    CALL FUN_00527610                   ; 0052e902
        ;   XREF to: 00527610 (UNCONDITIONAL_CALL)  ; undefined FUN_00527610()
    ADD ESP,0x18                        ; 0052e907
    PUSH 0x3ff00000                     ; 0052e90a
    PUSH 0x0                            ; 0052e90f
    PUSH 0x0                            ; 0052e911
    PUSH 0x0                            ; 0052e913
    PUSH 0x0                            ; 0052e915
    PUSH 0x0                            ; 0052e917
    PUSH 0x0                            ; 0052e919
    PUSH 0x0                            ; 0052e91b
    PUSH 0x3ff00000                     ; 0052e91d
    PUSH 0x0                            ; 0052e922
    PUSH 0x0                            ; 0052e924
    PUSH 0x0                            ; 0052e926
    PUSH 0x0                            ; 0052e928
    PUSH 0x0                            ; 0052e92a
    PUSH 0x0                            ; 0052e92c
    PUSH 0x0                            ; 0052e92e
    PUSH 0x3ff00000                     ; 0052e930
    PUSH 0x0                            ; 0052e935
    CALL FUN_00527690                   ; 0052e937
        ;   XREF to: 00527690 (UNCONDITIONAL_CALL)  ; undefined FUN_00527690()
    ADD ESP,0x48                        ; 0052e93c
    PUSH 0x0                            ; 0052e93f
    PUSH 0x0                            ; 0052e941
    PUSH 0x0                            ; 0052e943
    PUSH 0x0                            ; 0052e945
    PUSH 0x0                            ; 0052e947
    PUSH 0x0                            ; 0052e949
    CALL FUN_005277b0                   ; 0052e94b
        ;   XREF to: 005277b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005277b0()
    ADD ESP,0x18                        ; 0052e950
    CALL FUN_00527e40                   ; 0052e953
        ;   XREF to: 00527e40 (UNCONDITIONAL_CALL)  ; undefined FUN_00527e40()
    CALL FUN_00526340                   ; 0052e958
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined FUN_00526340()
    PUSH 0x1                            ; 0052e95d
    CALL FUN_005261b0                   ; 0052e95f
        ;   XREF to: 005261b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005261b0()
    ADD ESP,0x4                         ; 0052e964
    PUSH 0x1                            ; 0052e967
    CALL FUN_00526270                   ; 0052e969
        ;   XREF to: 00526270 (UNCONDITIONAL_CALL)  ; undefined FUN_00526270()
    ADD ESP,0x4                         ; 0052e96e
    CALL FUN_005281b0                   ; 0052e971
        ;   XREF to: 005281b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005281b0()
    CMP EAX,0x7530                      ; 0052e976
    JLE 0x0052e9a8                      ; 0052e97b
        ;   XREF to: 0052e9a8 (CONDITIONAL_JUMP)  ; LAB_0052e9a8
    PUSH 0x594bd6                       ; 0052e97d | s_splash-music-44.wav_00594bd5+1
    CALL FUN_005265a0                   ; 0052e982
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052e987
    CALL FUN_005263c0                   ; 0052e98a
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    ADD ESP,0x4                         ; 0052e98f
        ;   Label: LAB_0052e98f
    RET                                 ; 0052e992
    PUSH dword ptr [0x005a22e4]         ; 0052e993 | DAT_005a22e4
        ;   Label: LAB_0052e993
    PUSH 0x1                            ; 0052e999
    CALL FUN_005272e0                   ; 0052e99b
        ;   XREF to: 005272e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005272e0()
    ADD ESP,0x8                         ; 0052e9a0
    JMP 0x0052e874                      ; 0052e9a3
        ;   XREF to: 0052e874 (UNCONDITIONAL_JUMP)  ; LAB_0052e874
    PUSH 0x594bea                       ; 0052e9a8 | = "splash-music-22.wav"
        ;   Label: LAB_0052e9a8
    CALL FUN_005265a0                   ; 0052e9ad
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005265a0()
    ADD ESP,0x4                         ; 0052e9b2
    CALL FUN_005263c0                   ; 0052e9b5
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005263c0()
    ADD ESP,0x4                         ; 0052e9ba
    RET                                 ; 0052e9bd

