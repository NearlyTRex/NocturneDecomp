; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00443630(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00453610 at 00453bb0
;   core_game.cpp_FUN_004d6420 at 004d67c6
;
; Called Functions:
;   support_codec.cpp_FUN_004427e0
;   support_codec.cpp_FUN_00443290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443630
        ;   Label: support_codec.cpp_FUN_00443630
    PUSH EDI                            ; 00443631
    MOV EBX,dword ptr [ESP + 0xc]       ; 00443632
    MOV EDX,dword ptr [EBX + 0x30]      ; 00443636
    TEST EDX,EDX                        ; 00443639
    JL 0x0044367d                       ; 0044363b
        ;   XREF to: 0044367d (CONDITIONAL_JUMP)  ; LAB_0044367d
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044363d
    PUSH ECX                            ; 00443641
    LEA EAX,[EBX + 0x18]                ; 00443642
    PUSH EAX                            ; 00443645
    PUSH EDX                            ; 00443646
    LEA EAX,[EBX + 0x4]                 ; 00443647
    PUSH EAX                            ; 0044364a
    CALL support_codec.cpp_FUN_00443290 ; 0044364b
        ;   XREF to: 00443290 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443290()
    ADD ESP,0x10                        ; 00443650
    TEST EAX,EAX                        ; 00443653
    JZ 0x0044367d                       ; 00443655
        ;   XREF to: 0044367d (CONDITIONAL_JUMP)  ; LAB_0044367d
    CMP EAX,-0x1                        ; 00443657
    JZ 0x00443670                       ; 0044365a
        ;   XREF to: 00443670 (CONDITIONAL_JUMP)  ; LAB_00443670
    CMP EAX,-0x2                        ; 0044365c
    JNZ 0x00443678                      ; 0044365f
        ;   XREF to: 00443678 (CONDITIONAL_JUMP)  ; LAB_00443678
    MOV EAX,0x2                         ; 00443661
    MOV dword ptr [EBX + 0x30],0xffffffff ; 00443666
    POP EDI                             ; 0044366d
    POP EBX                             ; 0044366e
    RET                                 ; 0044366f
    MOV EAX,0x2                         ; 00443670
        ;   Label: LAB_00443670
    POP EDI                             ; 00443675
    POP EBX                             ; 00443676
    RET                                 ; 00443677
    XOR EAX,EAX                         ; 00443678
        ;   Label: LAB_00443678
    POP EDI                             ; 0044367a
    POP EBX                             ; 0044367b
    RET                                 ; 0044367c
    MOV EDI,dword ptr [ESP + 0x10]      ; 0044367d
        ;   Label: LAB_0044367d
    PUSH EDI                            ; 00443681
    ADD EBX,0x18                        ; 00443682
    PUSH EBX                            ; 00443685
    CALL support_codec.cpp_FUN_004427e0 ; 00443686
        ;   XREF to: 004427e0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_004427e0()
    ADD ESP,0x8                         ; 0044368b
    TEST EAX,EAX                        ; 0044368e
    JZ 0x0044369f                       ; 00443690
        ;   XREF to: 0044369f (CONDITIONAL_JUMP)  ; LAB_0044369f
    CMP EAX,-0x1                        ; 00443692
    JNZ 0x0044369f                      ; 00443695
        ;   XREF to: 0044369f (CONDITIONAL_JUMP)  ; LAB_0044369f
    MOV EAX,0x2                         ; 00443697
    POP EDI                             ; 0044369c
    POP EBX                             ; 0044369d
    RET                                 ; 0044369e
    MOV EAX,0x1                         ; 0044369f
        ;   Label: LAB_0044369f
    POP EDI                             ; 004436a4
    POP EBX                             ; 004436a5
    RET                                 ; 004436a6

