; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443ed0(int param_1)
;
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00443ed0
        ;   Label: FUN_00443ed0
    MOV EAX,dword ptr [ESP + 0x8]       ; 00443ed1
    CMP dword ptr [EAX + 0x10],0x0      ; 00443ed5
    JZ 0x00443ef3                       ; 00443ed9
        ;   XREF to: 00443ef3 (CONDITIONAL_JUMP)  ; LAB_00443ef3
    CMP dword ptr [EAX + 0x4],0x0       ; 00443edb
    JZ 0x00443ef3                       ; 00443edf
        ;   XREF to: 00443ef3 (CONDITIONAL_JUMP)  ; LAB_00443ef3
    CMP dword ptr [EAX + 0x8],0x0       ; 00443ee1
    JZ 0x00443ef3                       ; 00443ee5
        ;   XREF to: 00443ef3 (CONDITIONAL_JUMP)  ; LAB_00443ef3
    MOV ESI,dword ptr [EAX + 0x18]      ; 00443ee7
    CMP ESI,dword ptr [EAX + 0x1c]      ; 00443eea
    JLE 0x00443efa                      ; 00443eed
        ;   XREF to: 00443efa (CONDITIONAL_JUMP)  ; LAB_00443efa
    XOR EAX,EAX                         ; 00443eef
    POP ESI                             ; 00443ef1
    RET                                 ; 00443ef2
    MOV EAX,0xffffffff                  ; 00443ef3
        ;   Label: LAB_00443ef3
    POP ESI                             ; 00443ef8
    RET                                 ; 00443ef9
    MOV EAX,dword ptr [EAX + 0x20]      ; 00443efa
        ;   Label: LAB_00443efa
    POP ESI                             ; 00443efd
    RET                                 ; 00443efe

