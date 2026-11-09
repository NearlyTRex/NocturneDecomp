; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_FUN_00440fd0(int param_1,int param_2,int *param_3)
;
;
; XREF[1]:
;   support_codec.cpp_FUN_004413f0 at 0044140e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440fd0
        ;   Label: support_codec.cpp_FUN_00440fd0
    PUSH ESI                            ; 00440fd1
    PUSH EDI                            ; 00440fd2
    PUSH EBP                            ; 00440fd3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00440fd4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00440fd8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00440fdc
    MOV EAX,EBP                         ; 00440fe0
    MOV EDX,dword ptr [EDI + 0x10]      ; 00440fe2
    SHL EAX,0x4                         ; 00440fe5
    ADD EAX,EDX                         ; 00440fe8
    MOV EDX,dword ptr [EAX + 0x4]       ; 00440fea
    TEST EDX,EDX                        ; 00440fed
    JGE 0x00441019                      ; 00440fef
        ;   XREF to: 00441019 (CONDITIONAL_JUMP)  ; LAB_00441019
    MOV EBX,dword ptr [EAX]             ; 00440ff1
    MOV ECX,EBP                         ; 00440ff3
        ;   Label: LAB_00440ff3
    MOV EDX,dword ptr [EDI + 0x10]      ; 00440ff5
    SHL ECX,0x4                         ; 00440ff8
    MOV EAX,dword ptr [ESI]             ; 00440ffb
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 00440ffd
    AND EDX,0xff                        ; 00441000
    PUSH EDX                            ; 00441006
    PUSH ESI                            ; 00441007
    CALL dword ptr [EAX + 0x4]          ; 00441008
    ADD ESP,0x8                         ; 0044100b
    TEST EAX,EAX                        ; 0044100e
    JL 0x0044102f                       ; 00441010
        ;   XREF to: 0044102f (CONDITIONAL_JUMP)  ; LAB_0044102f
    MOV EAX,EBX                         ; 00441012
    POP EBP                             ; 00441014
    POP EDI                             ; 00441015
    POP ESI                             ; 00441016
    POP EBX                             ; 00441017
    RET                                 ; 00441018
    PUSH ESI                            ; 00441019
        ;   Label: LAB_00441019
    PUSH EDX                            ; 0044101a
    PUSH EDI                            ; 0044101b
    CALL support_codec.cpp_FUN_00440fd0 ; 0044101c
        ;   XREF to: 00440fd0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00440fd0()
    ADD ESP,0xc                         ; 00441021
    MOV EBX,EAX                         ; 00441024
    TEST EAX,EAX                        ; 00441026
    JGE 0x00440ff3                      ; 00441028
        ;   XREF to: 00440ff3 (CONDITIONAL_JUMP)  ; LAB_00440ff3
    POP EBP                             ; 0044102a
    POP EDI                             ; 0044102b
    POP ESI                             ; 0044102c
    POP EBX                             ; 0044102d
    RET                                 ; 0044102e
    CMP EAX,-0x1                        ; 0044102f
        ;   Label: LAB_0044102f
    JNZ 0x00441040                      ; 00441032
        ;   XREF to: 00441040 (CONDITIONAL_JUMP)  ; LAB_00441040
    MOV EAX,0xfffffffe                  ; 00441034
    SUB EAX,EBP                         ; 00441039
    POP EBP                             ; 0044103b
    POP EDI                             ; 0044103c
    POP ESI                             ; 0044103d
    POP EBX                             ; 0044103e
    RET                                 ; 0044103f
    MOV EAX,0xffffffff                  ; 00441040
        ;   Label: LAB_00441040
    POP EBP                             ; 00441045
    POP EDI                             ; 00441046
    POP ESI                             ; 00441047
    POP EBX                             ; 00441048
    RET                                 ; 00441049

