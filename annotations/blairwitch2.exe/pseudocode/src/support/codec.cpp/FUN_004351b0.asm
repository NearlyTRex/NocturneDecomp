; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_004351b0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004351b0
        ;   Label: support_codec.cpp_FUN_004351b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004351b1
    CMP dword ptr [EAX + 0x10],0x0      ; 004351b5
    JZ 0x004351d3                       ; 004351b9
        ;   XREF to: 004351d3 (CONDITIONAL_JUMP)  ; LAB_004351d3
    CMP dword ptr [EAX + 0x4],0x0       ; 004351bb
    JZ 0x004351d3                       ; 004351bf
        ;   XREF to: 004351d3 (CONDITIONAL_JUMP)  ; LAB_004351d3
    CMP dword ptr [EAX + 0x8],0x0       ; 004351c1
    JZ 0x004351d3                       ; 004351c5
        ;   XREF to: 004351d3 (CONDITIONAL_JUMP)  ; LAB_004351d3
    MOV ESI,dword ptr [EAX + 0x18]      ; 004351c7
    CMP ESI,dword ptr [EAX + 0x1c]      ; 004351ca
    JLE 0x004351da                      ; 004351cd
        ;   XREF to: 004351da (CONDITIONAL_JUMP)  ; LAB_004351da
    XOR EAX,EAX                         ; 004351cf
    POP ESI                             ; 004351d1
    RET                                 ; 004351d2
    MOV EAX,0xffffffff                  ; 004351d3
        ;   Label: LAB_004351d3
    POP ESI                             ; 004351d8
    RET                                 ; 004351d9
    MOV EAX,dword ptr [EAX + 0x20]      ; 004351da
        ;   Label: LAB_004351da
    POP ESI                             ; 004351dd
    RET                                 ; 004351de

