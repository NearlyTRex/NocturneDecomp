; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004eb7c0(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_004ecc70 at 004ed185
;
; Referenced Globals:
;   TerminatedCString s_s_4_2f_005dcb22
;   undefined4 DAT_005dcb2d
;   undefined4 DAT_006138e0
;   undefined4 DAT_006141b8
;   undefined4 DAT_00617dd4
;   undefined4 DAT_01c25590
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01d02f84
;
; Called Functions:
;   FUN_004031c0
;   FUN_00403250
;   FUN_004032b0
;   FUN_0047e1d0
;   FUN_0047e760
;   FUN_0047e870
;   FUN_004a93f0
;   FUN_004ab560
;   FUN_00589560
;   FUN_0058ed10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb7c0
        ;   Label: FUN_004eb7c0
    PUSH ESI                            ; 004eb7c1
    PUSH EDI                            ; 004eb7c2
    PUSH EBP                            ; 004eb7c3
    MOV EBP,ESP                         ; 004eb7c4
    SUB ESP,0x10                        ; 004eb7c6
    AND ESP,0xfffffff8                  ; 004eb7c9
    PUSH 0x0                            ; 004eb7cc
    MOV EDX,dword ptr [EBP + 0x18]      ; 004eb7ce
    PUSH EDX                            ; 004eb7d1
    MOV EDX,dword ptr [0x006141b8]      ; 004eb7d2 | DAT_006141b8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004eb7d8
    SUB EAX,EDX                         ; 004eb7df
    MOV EDX,EAX                         ; 004eb7e1
    SAR EDX,0x1f                        ; 004eb7e3
    SHL EDX,0x2                         ; 004eb7e6
    SBB EAX,EDX                         ; 004eb7e9
    SAR EAX,0x2                         ; 004eb7eb
    PUSH 0x2c                           ; 004eb7ee
    PUSH EAX                            ; 004eb7f0
    MOV ECX,dword ptr [0x006138e0]      ; 004eb7f1 | DAT_006138e0
    PUSH ECX                            ; 004eb7f7
    CALL FUN_0047e1d0                   ; 004eb7f8
        ;   XREF to: 0047e1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e1d0()
    ADD ESP,0x14                        ; 004eb7fd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb800
    MOV EBX,dword ptr [EAX]             ; 004eb803
    CMP EBX,0x4000                      ; 004eb805
    JL 0x004eba0b                       ; 004eb80b
        ;   XREF to: 004eba0b (CONDITIONAL_JUMP)  ; LAB_004eba0b
    CMP EBX,0x40000                     ; 004eb811
    JLE 0x004eba16                      ; 004eb817
        ;   XREF to: 004eba16 (CONDITIONAL_JUMP)  ; LAB_004eba16
    MOV dword ptr [EAX],0x40000         ; 004eb81d
        ;   Label: LAB_004eb81d
    MOV ESI,dword ptr [EBP + 0x14]      ; 004eb823
        ;   Label: LAB_004eb823
    MOV EBX,0x3c000                     ; 004eb826
    MOV ESI,dword ptr [ESI]             ; 004eb82b
    CALL FUN_004032b0                   ; 004eb82d
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004032b0()
    MOV ECX,dword ptr [0x01c2a380]      ; 004eb832 | DAT_01c2a380
    MOV EAX,[0x006141b8]                ; 004eb838 | DAT_006141b8
    PUSH ECX                            ; 004eb83d
    LEA EDX,[ESI + 0xffffc000]          ; 004eb83e
    DEC EAX                             ; 004eb844
    IMUL EDX                            ; 004eb845
    IDIV EBX                            ; 004eb847
    PUSH EAX                            ; 004eb849
    CALL FUN_0058ed10                   ; 004eb84a
        ;   XREF to: 0058ed10 (UNCONDITIONAL_CALL)  ; undefined FUN_0058ed10()
    XOR EBX,EBX                         ; 004eb84f
    ADD ESP,0x8                         ; 004eb851
    MOV dword ptr [ESP + 0x8],EBX       ; 004eb854
    MOV EDI,dword ptr [0x006138e0]      ; 004eb858 | DAT_006138e0
        ;   Label: LAB_004eb858
    PUSH EDI                            ; 004eb85e
    CALL FUN_0047e870                   ; 004eb85f
        ;   XREF to: 0047e870 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e870()
    ADD ESP,0x4                         ; 004eb864
    MOV EDX,dword ptr [0x01c2a37c]      ; 004eb867 | DAT_01c2a37c
    CMP EDX,dword ptr [ESP + 0x8]       ; 004eb86d
    JZ 0x004eb894                       ; 004eb871
        ;   XREF to: 004eb894 (CONDITIONAL_JUMP)  ; LAB_004eb894
    MOV EBX,dword ptr [0x006141b8]      ; 004eb873 | DAT_006141b8
    MOV EAX,EDX                         ; 004eb879
    MOV EDX,0x3c000                     ; 004eb87b
    DEC EBX                             ; 004eb880
    IMUL EDX                            ; 004eb881
    IDIV EBX                            ; 004eb883
    LEA ESI,[EAX + 0x4000]              ; 004eb885
    MOV EAX,[0x01c2a37c]                ; 004eb88b | DAT_01c2a37c
    MOV dword ptr [ESP + 0x8],EAX       ; 004eb890
    PUSH 0x4b                           ; 004eb894
        ;   Label: LAB_004eb894
    MOV EAX,[0x00617dd4]                ; 004eb896 | DAT_00617dd4
    PUSH EAX                            ; 004eb89b | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb89c | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb89e
    ADD ESP,0x8                         ; 004eb8a1
    TEST EAX,EAX                        ; 004eb8a4
    JZ 0x004eb8ae                       ; 004eb8a6
        ;   XREF to: 004eb8ae (CONDITIONAL_JUMP)  ; LAB_004eb8ae
    SUB ESI,0x2bc                       ; 004eb8a8
    PUSH 0x4d                           ; 004eb8ae
        ;   Label: LAB_004eb8ae
    MOV EAX,[0x00617dd4]                ; 004eb8b0 | DAT_00617dd4
    PUSH EAX                            ; 004eb8b5 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb8b6 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb8b8
    ADD ESP,0x8                         ; 004eb8bb
    TEST EAX,EAX                        ; 004eb8be
    JZ 0x004eb8c8                       ; 004eb8c0
        ;   XREF to: 004eb8c8 (CONDITIONAL_JUMP)  ; LAB_004eb8c8
    ADD ESI,0x2bc                       ; 004eb8c2
    CMP ESI,0x4000                      ; 004eb8c8
        ;   Label: LAB_004eb8c8
    JGE 0x004eba3a                      ; 004eb8ce
        ;   XREF to: 004eba3a (CONDITIONAL_JUMP)  ; LAB_004eba3a
    MOV ESI,0x4000                      ; 004eb8d4
    MOV EAX,[0x01c35e4c]                ; 004eb8d9 | DAT_01c35e4c
        ;   Label: LAB_004eb8d9
    INC EAX                             ; 004eb8de
    PUSH 0xff                           ; 004eb8df
    MOV dword ptr [ESP + 0x4],EAX       ; 004eb8e4
    MOV EAX,[0x01c35e54]                ; 004eb8e8 | DAT_01c35e54
    PUSH 0x0                            ; 004eb8ed
    DEC EAX                             ; 004eb8ef
    MOV EBX,dword ptr [0x01c35e50]      ; 004eb8f0 | DAT_01c35e50
    PUSH EAX                            ; 004eb8f6
    DEC EBX                             ; 004eb8f7
    MOV dword ptr [ESP + 0x10],EAX      ; 004eb8f8
    PUSH EBX                            ; 004eb8fc
    MOV EAX,dword ptr [ESP + 0x10]      ; 004eb8fd
    MOV EDI,dword ptr [0x01c35e48]      ; 004eb901 | DAT_01c35e48
    PUSH EAX                            ; 004eb907
    INC EDI                             ; 004eb908
    PUSH EDI                            ; 004eb909
    CALL FUN_00403250                   ; 004eb90a
        ;   XREF to: 00403250 (UNCONDITIONAL_CALL)  ; undefined FUN_00403250()
    ADD ESP,0x18                        ; 004eb90f
    LEA EDX,[ESI + 0xffffc000]          ; 004eb912
    MOV EAX,EBX                         ; 004eb918
    MOV EBX,0x3c000                     ; 004eb91a
    SUB EAX,EDI                         ; 004eb91f
    IMUL EDX                            ; 004eb921
    IDIV EBX                            ; 004eb923
    PUSH 0x4                            ; 004eb925
    MOV EDX,dword ptr [ESP + 0x8]       ; 004eb927
    PUSH EDX                            ; 004eb92b
    ADD EAX,EDI                         ; 004eb92c
    PUSH EAX                            ; 004eb92e
    MOV ECX,dword ptr [ESP + 0xc]       ; 004eb92f
    PUSH ECX                            ; 004eb933
    PUSH EDI                            ; 004eb934
    CALL FUN_004031c0                   ; 004eb935
        ;   XREF to: 004031c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004031c0()
    ADD ESP,0x14                        ; 004eb93a
    MOV dword ptr [ESP + 0xc],ESI       ; 004eb93d
    FILD dword ptr [ESP + 0xc]          ; 004eb941
    FMUL double ptr [0x005dcb2d]        ; 004eb945 | DAT_005dcb2d
    SUB ESP,0x8                         ; 004eb94b
    FSTP double ptr [ESP]               ; 004eb94e
    PUSH 0x5dcb22                       ; 004eb951 | = "%4.2f"
    PUSH 0x0                            ; 004eb956
    PUSH 0xff                           ; 004eb958
    MOV EDX,dword ptr [0x01c35e4c]      ; 004eb95d | DAT_01c35e4c
    PUSH 0x41                           ; 004eb963
    MOV EDI,dword ptr [0x01c25590]      ; 004eb965 | DAT_01c25590
    MOV EBX,dword ptr [0x01c35e54]      ; 004eb96b | DAT_01c35e54
    PUSH EDI                            ; 004eb971
    ADD EBX,EDX                         ; 004eb972
    CALL FUN_004ab560                   ; 004eb974
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; undefined FUN_004ab560()
    MOV EDX,EBX                         ; 004eb979
    SUB EDX,EAX                         ; 004eb97b
    MOV EAX,EDX                         ; 004eb97d
    SAR EDX,0x1f                        ; 004eb97f
    SUB EAX,EDX                         ; 004eb982
    SAR EAX,0x1                         ; 004eb984
    ADD ESP,0x8                         ; 004eb986
    PUSH EAX                            ; 004eb989
    MOV EAX,[0x01c35e50]                ; 004eb98a | DAT_01c35e50
    PUSH EAX                            ; 004eb98f
    MOV EDX,dword ptr [0x01c35e48]      ; 004eb990 | DAT_01c35e48
    PUSH EDX                            ; 004eb996
    MOV ECX,dword ptr [0x01c25590]      ; 004eb997 | DAT_01c25590
    PUSH ECX                            ; 004eb99d
    CALL FUN_004a93f0                   ; 004eb99e
        ;   XREF to: 004a93f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a93f0()
    ADD ESP,0x24                        ; 004eb9a3
    CALL FUN_00589560                   ; 004eb9a6
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; undefined FUN_00589560()
    PUSH 0x1                            ; 004eb9ab
    MOV EAX,[0x00617dd4]                ; 004eb9ad | DAT_00617dd4
    PUSH EAX                            ; 004eb9b2 | DAT_01d02f84
    MOV EDX,dword ptr [EAX]             ; 004eb9b3 | DAT_01d02f84
    CALL dword ptr [EDX + 0x4]          ; 004eb9b5
    ADD ESP,0x8                         ; 004eb9b8
    TEST EAX,EAX                        ; 004eb9bb
    JNZ 0x004eb9f5                      ; 004eb9bd
        ;   XREF to: 004eb9f5 (CONDITIONAL_JUMP)  ; LAB_004eb9f5
    PUSH 0x1c                           ; 004eb9bf
    MOV EDX,dword ptr [0x00617dd4]      ; 004eb9c1 | DAT_00617dd4
    PUSH EDX                            ; 004eb9c7 | DAT_01d02f84
    MOV EAX,dword ptr [EDX]             ; 004eb9c8 | DAT_01d02f84
    CALL dword ptr [EAX + 0x4]          ; 004eb9ca
    ADD ESP,0x8                         ; 004eb9cd
    TEST EAX,EAX                        ; 004eb9d0
    JNZ 0x004eb9f0                      ; 004eb9d2
        ;   XREF to: 004eb9f0 (CONDITIONAL_JUMP)  ; LAB_004eb9f0
    PUSH 0x200                          ; 004eb9d4
    MOV EDX,dword ptr [0x00617dd4]      ; 004eb9d9 | DAT_00617dd4
    PUSH EDX                            ; 004eb9df | DAT_01d02f84
    MOV EAX,dword ptr [EDX]             ; 004eb9e0 | DAT_01d02f84
    CALL dword ptr [EAX + 0x4]          ; 004eb9e2
    ADD ESP,0x8                         ; 004eb9e5
    TEST EAX,EAX                        ; 004eb9e8
    JZ 0x004eb858                       ; 004eb9ea
        ;   XREF to: 004eb858 (CONDITIONAL_JUMP)  ; LAB_004eb858
    MOV EAX,dword ptr [EBP + 0x14]      ; 004eb9f0
        ;   Label: LAB_004eb9f0
    MOV dword ptr [EAX],ESI             ; 004eb9f3
    MOV EBX,dword ptr [0x006138e0]      ; 004eb9f5 | DAT_006138e0
        ;   Label: LAB_004eb9f5
    PUSH EBX                            ; 004eb9fb
    CALL FUN_0047e760                   ; 004eb9fc
        ;   XREF to: 0047e760 (UNCONDITIONAL_CALL)  ; undefined FUN_0047e760()
    ADD ESP,0x4                         ; 004eba01
    MOV ESP,EBP                         ; 004eba04
    POP EBP                             ; 004eba06
    POP EDI                             ; 004eba07
    POP ESI                             ; 004eba08
    POP EBX                             ; 004eba09
    RET                                 ; 004eba0a
    MOV dword ptr [EAX],0x4000          ; 004eba0b
        ;   Label: LAB_004eba0b
    JMP 0x004eb823                      ; 004eba11
        ;   XREF to: 004eb823 (UNCONDITIONAL_JUMP)  ; LAB_004eb823
    CMP EBX,0x4000                      ; 004eba16
        ;   Label: LAB_004eba16
    JGE 0x004eba29                      ; 004eba1c
        ;   XREF to: 004eba29 (CONDITIONAL_JUMP)  ; LAB_004eba29
    MOV dword ptr [EAX],0x4000          ; 004eba1e
    JMP 0x004eb823                      ; 004eba24
        ;   XREF to: 004eb823 (UNCONDITIONAL_JUMP)  ; LAB_004eb823
    CMP EBX,0x40000                     ; 004eba29
        ;   Label: LAB_004eba29
    JLE 0x004eb823                      ; 004eba2f
        ;   XREF to: 004eb823 (CONDITIONAL_JUMP)  ; LAB_004eb823
    JMP 0x004eb81d                      ; 004eba35
        ;   XREF to: 004eb81d (UNCONDITIONAL_JUMP)  ; LAB_004eb81d
    CMP ESI,0x40000                     ; 004eba3a
        ;   Label: LAB_004eba3a
    JLE 0x004eb8d9                      ; 004eba40
        ;   XREF to: 004eb8d9 (CONDITIONAL_JUMP)  ; LAB_004eb8d9
    MOV ESI,0x40000                     ; 004eba46
    JMP 0x004eb8d9                      ; 004eba4b
        ;   XREF to: 004eb8d9 (UNCONDITIONAL_JUMP)  ; LAB_004eb8d9

