; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482740(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00483550 at 004835e0
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_005bd623
;   TerminatedCString s_CStrList_copyToClipboard_005bd639
;   undefined4 DAT_005bd67a
;   undefined4 DAT_005fb140
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_00480e30
;   FUN_00482440
;   FUN_004e4330
;   FUN_005a28c0
;   FUN_005a30b6
;   FUN_005a40df
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482740
        ;   Label: FUN_00482740
    PUSH ESI                            ; 00482741
    PUSH EDI                            ; 00482742
    PUSH EBP                            ; 00482743
    SUB ESP,0x4                         ; 00482744
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482747
    MOV EDX,dword ptr [EBX]             ; 0048274b
    XOR ESI,ESI                         ; 0048274d
    XOR EBP,EBP                         ; 0048274f
    TEST EDX,EDX                        ; 00482751
    JLE 0x00482780                      ; 00482753
        ;   XREF to: 00482780 (CONDITIONAL_JUMP)  ; LAB_00482780
    PUSH ESI                            ; 00482755
        ;   Label: LAB_00482755
    PUSH EBX                            ; 00482756
    CALL FUN_00482440                   ; 00482757
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 0048275c
    MOV EDI,EAX                         ; 0048275f
    SUB ECX,ECX                         ; 00482761
    DEC ECX                             ; 00482763
    XOR EAX,EAX                         ; 00482764
    SCASB.REPNE ES:EDI                  ; 00482766
    NOT ECX                             ; 00482768
    DEC ECX                             ; 0048276a
    INC ECX                             ; 0048276b
    INC ESI                             ; 0048276c
    ADD EBP,ECX                         ; 0048276d
    CMP ESI,dword ptr [EBX]             ; 0048276f
    JL 0x00482755                       ; 00482771
        ;   XREF to: 00482755 (CONDITIONAL_JUMP)  ; LAB_00482755
    LEA EAX,[EAX]                       ; 00482773
    LEA EDX,[EDX]                       ; 00482779
    NOP                                 ; 0048277f
    INC EBP                             ; 00482780
        ;   Label: LAB_00482780
    PUSH EBP                            ; 00482781
    CALL FUN_005a40df                   ; 00482782
        ;   XREF to: 005a40df (UNCONDITIONAL_CALL)  ; undefined FUN_005a40df()
    ADD ESP,0x4                         ; 00482787
    MOV dword ptr [ESP],EAX             ; 0048278a
    TEST EAX,EAX                        ; 0048278d
    JNZ 0x004827b8                      ; 0048278f
        ;   XREF to: 004827b8 (CONDITIONAL_JUMP)  ; LAB_004827b8
    PUSH EBP                            ; 00482791
    MOV EBP,dword ptr [EBX]             ; 00482792
    PUSH EBP                            ; 00482794
    MOV ESI,0x5bd623                    ; 00482795 | = "..\\shape\\edittool.cpp"
    MOV EDI,0xd4d                       ; 0048279a
    PUSH 0x5bd639                       ; 0048279f | = "CStrList::copyToClipboard - out of me..."
    MOV dword ptr [0x01d71de0],ESI      ; 004827a4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004827aa | DAT_01d71de4
    CALL FUN_004e4330                   ; 004827b0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0xc                         ; 004827b5
    MOV EDI,dword ptr [ESP]             ; 004827b8
        ;   Label: LAB_004827b8
    MOV EAX,dword ptr [EBX]             ; 004827bb
    XOR ESI,ESI                         ; 004827bd
    TEST EAX,EAX                        ; 004827bf
    JLE 0x004827f0                      ; 004827c1
        ;   XREF to: 004827f0 (CONDITIONAL_JUMP)  ; LAB_004827f0
    PUSH ESI                            ; 004827c3
        ;   Label: LAB_004827c3
    PUSH EBX                            ; 004827c4
    CALL FUN_00482440                   ; 004827c5
        ;   XREF to: 00482440 (UNCONDITIONAL_CALL)  ; undefined FUN_00482440()
    ADD ESP,0x8                         ; 004827ca
    PUSH EAX                            ; 004827cd
    PUSH 0x5bd67a                       ; 004827ce | DAT_005bd67a
    PUSH EDI                            ; 004827d3
    INC ESI                             ; 004827d4
    CALL FUN_005a28c0                   ; 004827d5
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0xc                         ; 004827da
    MOV EDX,dword ptr [EBX]             ; 004827dd
    ADD EDI,EAX                         ; 004827df
    CMP ESI,EDX                         ; 004827e1
    JL 0x004827c3                       ; 004827e3
        ;   XREF to: 004827c3 (CONDITIONAL_JUMP)  ; LAB_004827c3
    LEA EAX,[EAX]                       ; 004827e5
    LEA EDX,[EDX]                       ; 004827eb
    MOV EBX,EBX                         ; 004827ee
    MOV ECX,dword ptr [ESP]             ; 004827f0
        ;   Label: LAB_004827f0
    PUSH ECX                            ; 004827f3
    MOV EBX,dword ptr [0x005fb140]      ; 004827f4 | DAT_005fb140
    PUSH EBX                            ; 004827fa
    MOV byte ptr [EDI],0x0              ; 004827fb
    CALL FUN_00480e30                   ; 004827fe
        ;   XREF to: 00480e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00480e30()
    ADD ESP,0x8                         ; 00482803
    MOV ESI,dword ptr [ESP]             ; 00482806
    PUSH ESI                            ; 00482809
    CALL FUN_005a30b6                   ; 0048280a
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; undefined FUN_005a30b6()
    ADD ESP,0x4                         ; 0048280f
    ADD ESP,0x4                         ; 00482812
    POP EBP                             ; 00482815
    POP EDI                             ; 00482816
    POP ESI                             ; 00482817
    POP EBX                             ; 00482818
    RET                                 ; 00482819

