; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a8180(int param_1,float param_2)
;
;
; XREF[12]:
;   FUN_00450b20 at 00450bb4
;   FUN_004bd570 at 004bd85a
;   FUN_004cdb60 at 004cdb82
;   FUN_0059c680 at 0059c6a5
;   FUN_005a0bd0 at 005a0c28
;   FUN_005a2240 at 005a2255
;   FUN_005a4330 at 005a4345
;   FUN_005a61f0 at 005a6248
;   FUN_005a9890 at 005a98a1
;   FUN_005ab260 at 005ab2b5
;   ... and 2 more
;
; Called Functions:
;   FUN_005a8100
;   FUN_005a85c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a8180
        ;   Label: FUN_005a8180
    PUSH ESI                            ; 005a8181
    PUSH EDI                            ; 005a8182
    PUSH EBP                            ; 005a8183
    MOV EDI,dword ptr [ESP + 0x14]      ; 005a8184
    CMP dword ptr [EDI + 0x38],0x0      ; 005a8188
    JZ 0x005a81c5                       ; 005a818c
        ;   XREF to: 005a81c5 (CONDITIONAL_JUMP)  ; LAB_005a81c5
    CMP dword ptr [EDI + 0x10],0x0      ; 005a818e
        ;   Label: LAB_005a818e
    JZ 0x005a81c0                       ; 005a8192
        ;   XREF to: 005a81c0 (CONDITIONAL_JUMP)  ; LAB_005a81c0
    FLD float ptr [EDI + 0x30]          ; 005a8194
    FLDZ                                ; 005a8197
    FCOMPP                              ; 005a8199
    FNSTSW AX                           ; 005a819b
    SAHF                                ; 005a819d
    JC 0x005a81d0                       ; 005a819e
        ;   XREF to: 005a81d0 (CONDITIONAL_JUMP)  ; LAB_005a81d0
    MOV EBP,dword ptr [EDI + 0x18]      ; 005a81a0
        ;   Label: LAB_005a81a0
    XOR ESI,ESI                         ; 005a81a3
    TEST EBP,EBP                        ; 005a81a5
    JLE 0x005a81c0                      ; 005a81a7
        ;   XREF to: 005a81c0 (CONDITIONAL_JUMP)  ; LAB_005a81c0
    XOR EBX,EBX                         ; 005a81a9
    MOV EAX,dword ptr [EDI + 0x3c]      ; 005a81ab
        ;   Label: LAB_005a81ab
    ADD EAX,EBX                         ; 005a81ae
    CMP dword ptr [EAX],0x0             ; 005a81b0
    JNZ 0x005a81f6                      ; 005a81b3
        ;   XREF to: 005a81f6 (CONDITIONAL_JUMP)  ; LAB_005a81f6
    INC ESI                             ; 005a81b5
    MOV EAX,dword ptr [EDI + 0x18]      ; 005a81b6
    ADD EBX,0x60                        ; 005a81b9
    CMP ESI,EAX                         ; 005a81bc
    JL 0x005a81ab                       ; 005a81be
        ;   XREF to: 005a81ab (CONDITIONAL_JUMP)  ; LAB_005a81ab
    POP EBP                             ; 005a81c0
        ;   Label: LAB_005a81c0
    POP EDI                             ; 005a81c1
    POP ESI                             ; 005a81c2
    POP EBX                             ; 005a81c3
    RET                                 ; 005a81c4
    CMP dword ptr [EDI + 0x14],0x0      ; 005a81c5
        ;   Label: LAB_005a81c5
    JNZ 0x005a818e                      ; 005a81c9
        ;   XREF to: 005a818e (CONDITIONAL_JUMP)  ; LAB_005a818e
    POP EBP                             ; 005a81cb
    POP EDI                             ; 005a81cc
    POP ESI                             ; 005a81cd
    POP EBX                             ; 005a81ce
    RET                                 ; 005a81cf
    FLD float ptr [EDI + 0x30]          ; 005a81d0
        ;   Label: LAB_005a81d0
    FSUB float ptr [ESP + 0x18]         ; 005a81d3
    FST float ptr [EDI + 0x30]          ; 005a81d7
    FLDZ                                ; 005a81da
    FCOMPP                              ; 005a81dc
    FNSTSW AX                           ; 005a81de
    SAHF                                ; 005a81e0
    JC 0x005a81a0                       ; 005a81e1
        ;   XREF to: 005a81a0 (CONDITIONAL_JUMP)  ; LAB_005a81a0
    CMP dword ptr [EDI + 0x34],0x0      ; 005a81e3
    JZ 0x005a81a0                       ; 005a81e7
        ;   XREF to: 005a81a0 (CONDITIONAL_JUMP)  ; LAB_005a81a0
    PUSH 0x0                            ; 005a81e9
    PUSH EDI                            ; 005a81eb
    CALL FUN_005a8100                   ; 005a81ec
        ;   XREF to: 005a8100 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8100()
    ADD ESP,0x8                         ; 005a81f1
    JMP 0x005a81a0                      ; 005a81f4
        ;   XREF to: 005a81a0 (UNCONDITIONAL_JUMP)  ; LAB_005a81a0
    PUSH dword ptr [ESP + 0x18]         ; 005a81f6
        ;   Label: LAB_005a81f6
    PUSH EAX                            ; 005a81fa
    CALL FUN_005a85c0                   ; 005a81fb
        ;   XREF to: 005a85c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a85c0()
    ADD ESP,0x8                         ; 005a8200
    INC ESI                             ; 005a8203
    MOV EAX,dword ptr [EDI + 0x18]      ; 005a8204
    ADD EBX,0x60                        ; 005a8207
    CMP ESI,EAX                         ; 005a820a
    JL 0x005a81ab                       ; 005a820c
        ;   XREF to: 005a81ab (CONDITIONAL_JUMP)  ; LAB_005a81ab
    POP EBP                             ; 005a820e
    POP EDI                             ; 005a820f
    POP ESI                             ; 005a8210
    POP EBX                             ; 005a8211
    RET                                 ; 005a8212

