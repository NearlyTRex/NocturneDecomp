; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004a1200_cpp_FUN_004a14f0(undefined4 param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01cab9f0
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a35e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a14f0
        ;   Label: unkaddr_004a1200.cpp_FUN_004a14f0
    PUSH ESI                            ; 004a14f1
    PUSH EDI                            ; 004a14f2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a14f3
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a14f7 | DAT_01cab9f0
    XOR EBX,EBX                         ; 004a14fd
    TEST EDX,EDX                        ; 004a14ff
    JLE 0x004a1539                      ; 004a1501
        ;   XREF to: 004a1539 (CONDITIONAL_JUMP)  ; LAB_004a1539
    MOV ESI,0x1cab9f4                   ; 004a1503
    PUSH EDI                            ; 004a1508
        ;   Label: LAB_004a1508
    PUSH ESI                            ; 004a1509
    CALL core_fldnotes.cpp_FUN_004a35e0 ; 004a150a
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a35e0()
    ADD ESP,0x8                         ; 004a150f
    MOV EDX,EAX                         ; 004a1512
    TEST EAX,EAX                        ; 004a1514
    JZ 0x004a1528                       ; 004a1516
        ;   XREF to: 004a1528 (CONDITIONAL_JUMP)  ; LAB_004a1528
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a1518
    TEST ESI,ESI                        ; 004a151c
    JZ 0x004a1522                       ; 004a151e
        ;   XREF to: 004a1522 (CONDITIONAL_JUMP)  ; LAB_004a1522
    MOV dword ptr [ESI],EBX             ; 004a1520
    MOV EAX,EDX                         ; 004a1522
        ;   Label: LAB_004a1522
    POP EDI                             ; 004a1524
    POP ESI                             ; 004a1525
    POP EBX                             ; 004a1526
    RET                                 ; 004a1527
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a1528 | DAT_01cab9f0
        ;   Label: LAB_004a1528
    INC EBX                             ; 004a152e
    ADD ESI,0x2e4                       ; 004a152f
    CMP EBX,ECX                         ; 004a1535
    JL 0x004a1508                       ; 004a1537
        ;   XREF to: 004a1508 (CONDITIONAL_JUMP)  ; LAB_004a1508
    XOR EAX,EAX                         ; 004a1539
        ;   Label: LAB_004a1539
    POP EDI                             ; 004a153b
    POP ESI                             ; 004a153c
    POP EBX                             ; 004a153d
    RET                                 ; 004a153e

