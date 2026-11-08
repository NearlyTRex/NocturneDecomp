; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00558050(void)
;
;
; XREF[3]:
;   FUN_004c02a0 at 004c034b
;   FUN_0055fd30 at 0055fd93
;   FUN_005607d0 at 005608bb
;
; Referenced Globals:
;   undefined4 DAT_00604228
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604230
;   undefined4 DAT_00604240
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf3280
;   undefined4 DAT_02cf3284
;   undefined4 DAT_02cf3294
;   undefined4 DAT_02cf3298
;   undefined4 DAT_02cf329c
;   undefined4 DAT_02cf32a0
;   undefined4 DAT_02cf3400
;   ... and 3 more
;
; Called Functions:
;   FUN_00556750
;   FUN_00556fd0
;   FUN_00558250
;   FUN_00558290
;   FUN_005586b0
;   FUN_005586c0
;   FUN_00558e90
;   FUN_005806a0
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00558050
        ;   Label: FUN_00558050
    PUSH ESI                            ; 00558051
    PUSH EDI                            ; 00558052
    PUSH EBP                            ; 00558053
    CALL FUN_005586b0                   ; 00558054
        ;   XREF to: 005586b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586b0()
    TEST EAX,EAX                        ; 00558059
    JNZ 0x00558062                      ; 0055805b
        ;   XREF to: 00558062 (CONDITIONAL_JUMP)  ; LAB_00558062
    POP EBP                             ; 0055805d
    POP EDI                             ; 0055805e
    POP ESI                             ; 0055805f
    POP EBX                             ; 00558060
    RET                                 ; 00558061
    CALL FUN_00556750                   ; 00558062
        ;   XREF to: 00556750 (UNCONDITIONAL_CALL)  ; undefined FUN_00556750()
        ;   Label: LAB_00558062
    TEST EAX,EAX                        ; 00558067
    JNZ 0x0055807e                      ; 00558069
        ;   XREF to: 0055807e (CONDITIONAL_JUMP)  ; LAB_0055807e
    CALL FUN_005586c0                   ; 0055806b
        ;   XREF to: 005586c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005586c0()
    TEST EAX,EAX                        ; 00558070
    JZ 0x00558088                       ; 00558072
        ;   XREF to: 00558088 (CONDITIONAL_JUMP)  ; LAB_00558088
    MOV EAX,0x1                         ; 00558074
    POP EBP                             ; 00558079
    POP EDI                             ; 0055807a
    POP ESI                             ; 0055807b
    POP EBX                             ; 0055807c
    RET                                 ; 0055807d
    CALL FUN_00558250                   ; 0055807e
        ;   XREF to: 00558250 (UNCONDITIONAL_CALL)  ; undefined FUN_00558250()
        ;   Label: LAB_0055807e
    POP EBP                             ; 00558083
    POP EDI                             ; 00558084
    POP ESI                             ; 00558085
    POP EBX                             ; 00558086
    RET                                 ; 00558087
    CALL FUN_00558e90                   ; 00558088
        ;   XREF to: 00558e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00558e90()
        ;   Label: LAB_00558088
    MOV EDX,dword ptr [0x00604230]      ; 0055808d | DAT_00604230
    PUSH EDX                            ; 00558093
    MOV ECX,dword ptr [0x0060422c]      ; 00558094 | DAT_0060422c
    PUSH ECX                            ; 0055809a
    MOV EBX,dword ptr [0x00604228]      ; 0055809b | DAT_00604228
    PUSH EBX                            ; 005580a1
    CALL FUN_00558290                   ; 005580a2
        ;   XREF to: 00558290 (UNCONDITIONAL_CALL)  ; undefined FUN_00558290()
    ADD ESP,0xc                         ; 005580a7
    TEST EAX,EAX                        ; 005580aa
    JZ 0x00558237                       ; 005580ac
        ;   XREF to: 00558237 (CONDITIONAL_JUMP)  ; LAB_00558237
    CMP dword ptr [0x02cf32a0],0x0      ; 005580b2 | DAT_02cf32a0
    JLE 0x00558100                      ; 005580b9
        ;   XREF to: 00558100 (CONDITIONAL_JUMP)  ; LAB_00558100
    MOV EDI,dword ptr [0x0060422c]      ; 005580bb | DAT_0060422c
    XOR ESI,ESI                         ; 005580c1
    TEST EDI,EDI                        ; 005580c3
    JLE 0x00558100                      ; 005580c5
        ;   XREF to: 00558100 (CONDITIONAL_JUMP)  ; LAB_00558100
    XOR EBX,EBX                         ; 005580c7
    MOV EAX,[0x02cf329c]                ; 005580c9 | DAT_02cf329c
        ;   Label: LAB_005580c9
    IMUL EAX,dword ptr [0x02cf32a0]     ; 005580ce | DAT_02cf32a0
    SHL EAX,0x2                         ; 005580d5
    PUSH EAX                            ; 005580d8
    PUSH 0x0                            ; 005580d9
    MOV EAX,dword ptr [EBX + 0x2cf32cc] ; 005580db
    PUSH EAX                            ; 005580e1
    ADD EBX,0x4                         ; 005580e2
    INC ESI                             ; 005580e5
    CALL FUN_005a28f0                   ; 005580e6
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV EDX,dword ptr [0x0060422c]      ; 005580eb | DAT_0060422c
    ADD ESP,0xc                         ; 005580f1
    CMP ESI,EDX                         ; 005580f4
    JL 0x005580c9                       ; 005580f6
        ;   XREF to: 005580c9 (CONDITIONAL_JUMP)  ; LAB_005580c9
    LEA EAX,[EAX]                       ; 005580f8
    MOV EDX,EDX                         ; 005580fe
    MOV EAX,[0x02cf28b8]                ; 00558100 | DAT_02cf28b8
        ;   Label: LAB_00558100
    MOV EDI,dword ptr [EAX*0x8 + 0x2cf284c] ; 00558105
    PUSH EDI                            ; 0055810c
    MOV EBP,dword ptr [EAX*0x8 + 0x2cf2848] ; 0055810d | DAT_02cf2848
    XOR ECX,ECX                         ; 00558114
    PUSH EBP                            ; 00558116
    MOV EDX,dword ptr [EAX*0x8 + 0x2cf283c] ; 00558117
    MOV dword ptr [0x02cf3294],ECX      ; 0055811e | DAT_02cf3294
    PUSH EDX                            ; 00558124
    MOV dword ptr [0x02cf3298],ECX      ; 00558125 | DAT_02cf3298
    MOV ECX,dword ptr [EAX*0x8 + 0x2cf2838] ; 0055812b | DAT_02cf2838
    PUSH ECX                            ; 00558132
    MOV EDI,dword ptr [EAX*0x8 + 0x2cf282c] ; 00558133
    PUSH EDI                            ; 0055813a
    MOV EBP,dword ptr [EAX*0x8 + 0x2cf2828] ; 0055813b | DAT_02cf2828
    MOV EBX,dword ptr [0x02cf3280]      ; 00558142 | DAT_02cf3280
    PUSH EBP                            ; 00558148
    MOV ESI,dword ptr [EBX]             ; 00558149
    PUSH EBX                            ; 0055814b
    CALL dword ptr [ESI + 0x1c]         ; 0055814c
    MOV EAX,[0x02cf28b8]                ; 0055814f | DAT_02cf28b8
    ADD ESP,0x1c                        ; 00558154
    PUSH dword ptr [EAX*0x4 + 0x2cf28b0] ; 00558157
    PUSH dword ptr [EAX*0x4 + 0x2cf28a8] ; 0055815e
    PUSH dword ptr [EAX*0x4 + 0x2cf28a0] ; 00558165
    PUSH dword ptr [EAX*0x4 + 0x2cf2898] ; 0055816c
    PUSH dword ptr [EAX*0x4 + 0x2cf2890] ; 00558173
    PUSH dword ptr [EAX*0x4 + 0x2cf2888] ; 0055817a
    PUSH dword ptr [EAX*0x4 + 0x2cf2880] ; 00558181
    MOV EBX,dword ptr [0x02cf3280]      ; 00558188 | DAT_02cf3280
    PUSH dword ptr [EAX*0x4 + 0x2cf2878] ; 0055818e
    MOV ESI,dword ptr [EBX]             ; 00558195
    PUSH dword ptr [EAX*0x4 + 0x2cf2870] ; 00558197
    PUSH EBX                            ; 0055819e
    CALL dword ptr [ESI + 0x20]         ; 0055819f
    MOV EAX,[0x02cf28b8]                ; 005581a2 | DAT_02cf28b8
    ADD ESP,0x28                        ; 005581a7
    PUSH dword ptr [EAX*0x4 + 0x2cf2868] ; 005581aa
    MOV EBX,dword ptr [0x02cf3280]      ; 005581b1 | DAT_02cf3280
    PUSH dword ptr [EAX*0x4 + 0x2cf2860] ; 005581b7
    MOV ESI,dword ptr [EBX]             ; 005581be
    PUSH dword ptr [EAX*0x4 + 0x2cf2858] ; 005581c0
    PUSH EBX                            ; 005581c7
    CALL dword ptr [ESI + 0x24]         ; 005581c8
    ADD ESP,0x10                        ; 005581cb
    MOV EAX,[0x02cf3280]                ; 005581ce | DAT_02cf3280
    PUSH dword ptr [0x00604240]         ; 005581d3 | DAT_00604240
    MOV EBX,dword ptr [EAX]             ; 005581d9
    PUSH EAX                            ; 005581db
    CALL dword ptr [EBX + 0x28]         ; 005581dc
    ADD ESP,0x8                         ; 005581df
    PUSH dword ptr [0x02cf3408]         ; 005581e2 | DAT_02cf3408
    MOV EAX,[0x02cf3280]                ; 005581e8 | DAT_02cf3280
    PUSH dword ptr [0x02cf3404]         ; 005581ed | DAT_02cf3404
    MOV EBX,dword ptr [EAX]             ; 005581f3
    PUSH dword ptr [0x02cf3400]         ; 005581f5 | DAT_02cf3400
    PUSH EAX                            ; 005581fb
    CALL dword ptr [EBX + 0x2c]         ; 005581fc
    ADD ESP,0x10                        ; 005581ff
    CALL FUN_005806a0                   ; 00558202
        ;   XREF to: 005806a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005806a0()
    MOV [0x02cf3420],EAX                ; 00558207 | DAT_02cf3420
    MOV EAX,[0x02cf3280]                ; 0055820c | DAT_02cf3280
    PUSH EAX                            ; 00558211
    MOV EBX,dword ptr [EAX]             ; 00558212
    CALL dword ptr [EBX + 0x4]          ; 00558214
    ADD ESP,0x4                         ; 00558217
    TEST EAX,EAX                        ; 0055821a
    JZ 0x00558237                       ; 0055821c
        ;   XREF to: 00558237 (CONDITIONAL_JUMP)  ; LAB_00558237
    MOV dword ptr [0x02cf3284],0x1      ; 0055821e | DAT_02cf3284
    CALL FUN_00556fd0                   ; 00558228
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
    MOV EAX,0x1                         ; 0055822d
    POP EBP                             ; 00558232
    POP EDI                             ; 00558233
    POP ESI                             ; 00558234
    POP EBX                             ; 00558235
    RET                                 ; 00558236
    CALL FUN_00556fd0                   ; 00558237
        ;   XREF to: 00556fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00556fd0()
        ;   Label: LAB_00558237
    XOR EAX,EAX                         ; 0055823c
    POP EBP                             ; 0055823e
    POP EDI                             ; 0055823f
    POP ESI                             ; 00558240
    POP EBX                             ; 00558241
    RET                                 ; 00558242

