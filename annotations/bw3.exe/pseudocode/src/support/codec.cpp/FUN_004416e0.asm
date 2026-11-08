; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_004416e0(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00441750 at 0044178d
;
; Referenced Globals:
;   TerminatedCString s_support_codec_cpp_005b9302
;   TerminatedCString s_Invalid_mode_005b9317
;   undefined4 DAT_005f1368
;   undefined4 DAT_005f1468
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   FUN_004417d0
;   FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004416e0
        ;   Label: FUN_004416e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004416e1
    PUSH EBX                            ; 004416e5
    CALL FUN_004417d0                   ; 004416e6
        ;   XREF to: 004417d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004417d0()
    MOV EAX,dword ptr [EBX + 0x4]       ; 004416eb
    ADD ESP,0x4                         ; 004416ee
    TEST EAX,EAX                        ; 004416f1
    JBE 0x0044170b                      ; 004416f3
        ;   XREF to: 0044170b (CONDITIONAL_JUMP)  ; LAB_0044170b
    CMP EAX,0x1                         ; 004416f5
    JNZ 0x00441723                      ; 004416f8
        ;   XREF to: 00441723 (CONDITIONAL_JUMP)  ; LAB_00441723
    XOR EAX,EAX                         ; 004416fa
    MOV AL,byte ptr [ESP + 0xc]         ; 004416fc
    MOV AL,byte ptr [EAX + 0x5f1468]    ; 00441700 | DAT_005f1468
    SUB AL,byte ptr [EBX + 0x8]         ; 00441706
    POP EBX                             ; 00441709
    RET                                 ; 0044170a
    XOR EAX,EAX                         ; 0044170b
        ;   Label: LAB_0044170b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0044170d
    MOV AL,byte ptr [ESP + 0xc]         ; 00441710
    ADD EAX,EDX                         ; 00441714
    AND EAX,0xff                        ; 00441716
    MOV AL,byte ptr [EAX + 0x5f1368]    ; 0044171b | DAT_005f1368
    POP EBX                             ; 00441721
    RET                                 ; 00441722
    MOV ECX,0x5b9302                    ; 00441723 | = "..\\support\\codec.cpp"
        ;   Label: LAB_00441723
    MOV EBX,0x70b                       ; 00441728
    PUSH 0x5b9317                       ; 0044172d | = "Invalid mode."
    MOV dword ptr [0x01d71de0],ECX      ; 00441732 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 00441738 | DAT_01d71de4
    CALL FUN_004e4330                   ; 0044173e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 00441743
    XOR AL,AL                           ; 00441746
    POP EBX                             ; 00441748
    RET                                 ; 00441749

