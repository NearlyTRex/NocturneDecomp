; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0055f610(void)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c8
;   undefined4 DAT_01c37770
;   undefined4 DAT_01c37774
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbe4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c37788],0x0      ; 0055f610 | DAT_01c37788
        ;   Label: engine_special.cpp_FUN_0055f610
    JNZ 0x0055f61c                      ; 0055f617
        ;   XREF to: 0055f61c (CONDITIONAL_JUMP)  ; LAB_0055f61c
    XOR EAX,EAX                         ; 0055f619
    RET                                 ; 0055f61b
    PUSH EDI                            ; 0055f61c
        ;   Label: LAB_0055f61c
    PUSH ESI                            ; 0055f61d
    PUSH EBX                            ; 0055f61e
    MOV ECX,dword ptr [0x01c37774]      ; 0055f61f | DAT_01c37774
    PUSH ECX                            ; 0055f625
    PUSH 0x1c35838                      ; 0055f626
    MOV EBX,dword ptr [0x01c37770]      ; 0055f62b | DAT_01c37770
    PUSH EBX                            ; 0055f631
    MOV ESI,dword ptr [0x006141c8]      ; 0055f632 | DAT_006141c8
    PUSH ESI                            ; 0055f638
    MOV EDI,dword ptr [ESP + 0x20]      ; 0055f639
    PUSH EDI                            ; 0055f63d
    CALL dword ptr [0x0264bbe4]         ; 0055f63e | DAT_0264bbe4
    ADD ESP,0x14                        ; 0055f644
    POP EBX                             ; 0055f647
    POP ESI                             ; 0055f648
    POP EDI                             ; 0055f649
    RET                                 ; 0055f64a

