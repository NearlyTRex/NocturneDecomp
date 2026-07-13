; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004777a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01c74640
;   undefined4 DAT_01c74740
;   undefined4 DAT_01c74744
;   undefined4 DAT_01c74748
;   undefined4 DAT_01c7474c
;   undefined4 DAT_01c74750
;   undefined4 DAT_01c74778
;   undefined4 DAT_01c762f4
;   undefined4 DAT_01c762fc
;   undefined4 DAT_01c76310
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_0040a240
;   FUN_0044d7a0
;   FUN_00452080
;   FUN_0050a970
;   FUN_00554030
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004777a0
        ;   Label: FUN_004777a0
    PUSH EBP                            ; 004777a1
    SUB ESP,0x18                        ; 004777a2
    MOV EBX,dword ptr [ESP + 0x24]      ; 004777a5
    CMP dword ptr [EBX + 0x574],0x0     ; 004777a9
    JNZ 0x004777cf                      ; 004777b0
        ;   XREF to: 004777cf (CONDITIONAL_JUMP)  ; LAB_004777cf
    PUSH dword ptr [ESP + 0x28]         ; 004777b2
        ;   Label: LAB_004777b2
    PUSH EBX                            ; 004777b6
    MOV dword ptr [EBX + 0x574],0x0     ; 004777b7
    CALL FUN_00554030                   ; 004777c1
        ;   XREF to: 00554030 (UNCONDITIONAL_CALL)  ; undefined FUN_00554030()
    ADD ESP,0x8                         ; 004777c6
    ADD ESP,0x18                        ; 004777c9
    POP EBP                             ; 004777cc
    POP EBX                             ; 004777cd
    RET                                 ; 004777ce
    PUSH EDI                            ; 004777cf
        ;   Label: LAB_004777cf
    PUSH ESI                            ; 004777d0
    LEA EAX,[ESP + 0x14]                ; 004777d1
    PUSH EAX                            ; 004777d5
    MOV ECX,0x1                         ; 004777d6
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004777db
    PUSH EBX                            ; 004777e1
    MOV dword ptr [0x01c762f4],ECX      ; 004777e2 | DAT_01c762f4
    CALL dword ptr [EDX + 0xd8]         ; 004777e8
    ADD ESP,0x8                         ; 004777ee
    PUSH EAX                            ; 004777f1
    LEA EAX,[ESP + 0xc]                 ; 004777f2
    PUSH EAX                            ; 004777f6
    PUSH EBX                            ; 004777f7
    XOR ESI,ESI                         ; 004777f8
    CALL FUN_0040a240                   ; 004777fa
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined FUN_0040a240()
    LEA EAX,[ESP + 0x14]                ; 004777ff
    ADD ESP,0xc                         ; 00477803
    MOV dword ptr [0x01c762fc],ESI      ; 00477806 | DAT_01c762fc
    CMP EAX,0x1c74744                   ; 0047780c
    JZ 0x0047782e                       ; 00477811
        ;   XREF to: 0047782e (CONDITIONAL_JUMP)  ; LAB_0047782e
    MOV EAX,dword ptr [ESP + 0x8]       ; 00477813
    MOV [0x01c74744],EAX                ; 00477817 | DAT_01c74744
    MOV EAX,dword ptr [ESP + 0xc]       ; 0047781c
    MOV [0x01c74748],EAX                ; 00477820 | DAT_01c74748
    MOV EAX,dword ptr [ESP + 0x10]      ; 00477825
    MOV [0x01c7474c],EAX                ; 00477829 | DAT_01c7474c
    LEA EAX,[EBX + 0x30]                ; 0047782e
        ;   Label: LAB_0047782e
    PUSH EAX                            ; 00477831
    PUSH 0x1c74750                      ; 00477832 | DAT_01c74750
    CALL FUN_0044d7a0                   ; 00477837
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044d7a0()
    ADD ESP,0x8                         ; 0047783c
    MOV EDI,0x42e00000                  ; 0047783f
    PUSH 0x3f800000                     ; 00477844
    FLD float ptr [EBX + 0x578]         ; 00477849
    PUSH 0x1c74640                      ; 0047784f | DAT_01c74640
    FSTP float ptr [0x01c74740]         ; 00477854 | DAT_01c74740
    MOV dword ptr [0x01c74778],EDI      ; 0047785a | DAT_01c74778
    CALL FUN_00452080                   ; 00477860
        ;   XREF to: 00452080 (UNCONDITIONAL_CALL)  ; undefined FUN_00452080()
    ADD ESP,0x8                         ; 00477865
    PUSH 0x1c74640                      ; 00477868 | DAT_01c74640
    MOV EAX,[0x005be368]                ; 0047786d | DAT_005be368
    XOR EBP,EBP                         ; 00477872
    PUSH EAX                            ; 00477874 | DAT_01e57284
    MOV dword ptr [0x01c76310],EBP      ; 00477875 | DAT_01c76310
    CALL FUN_0050a970                   ; 0047787b
        ;   XREF to: 0050a970 (UNCONDITIONAL_CALL)  ; undefined FUN_0050a970()
    ADD ESP,0x8                         ; 00477880
    POP ESI                             ; 00477883
    POP EDI                             ; 00477884
    JMP 0x004777b2                      ; 00477885
        ;   XREF to: 004777b2 (UNCONDITIONAL_JUMP)  ; LAB_004777b2

