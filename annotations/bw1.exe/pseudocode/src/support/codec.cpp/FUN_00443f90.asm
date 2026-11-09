; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00443f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,ulong param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_unknown.c_FUN_005c08d0
;   support_codec.cpp_FUN_00443f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00443f90
        ;   Label: support_codec.cpp_FUN_00443f90
    PUSH EBP                            ; 00443f91
    MOV EBX,dword ptr [ESP + 0xc]       ; 00443f92
    PUSH EBX                            ; 00443f96
    CALL support_codec.cpp_FUN_00443f00 ; 00443f97
        ;   XREF to: 00443f00 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00443f00()
    ADD ESP,0x4                         ; 00443f9c
    MOV EAX,dword ptr [ESP + 0x10]      ; 00443f9f
    MOV dword ptr [EBX + 0x4],EAX       ; 00443fa3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00443fa6
    MOV dword ptr [EBX + 0x8],EAX       ; 00443faa
    MOV EAX,dword ptr [ESP + 0x18]      ; 00443fad
    MOV dword ptr [EBX + 0xc],EAX       ; 00443fb1
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00443fb4
    PUSH EAX                            ; 00443fb8
    MOV dword ptr [EBX + 0x14],EAX      ; 00443fb9
    CALL crt_unknown.c_FUN_005c08d0     ; 00443fbc
        ;   XREF to: 005c08d0 (UNCONDITIONAL_CALL)  ; void * crt_unknown.c_FUN_005c08d0(ulong size)
    ADD ESP,0x4                         ; 00443fc1
    MOV dword ptr [EBX + 0x10],EAX      ; 00443fc4
    TEST EAX,EAX                        ; 00443fc7
    JZ 0x00443ff1                       ; 00443fc9
        ;   XREF to: 00443ff1 (CONDITIONAL_JUMP)  ; LAB_00443ff1
    MOV dword ptr [EBX + 0x18],0x0      ; 00443fcb
        ;   Label: LAB_00443fcb
    MOV dword ptr [EBX + 0x1c],0x0      ; 00443fd2
    MOV dword ptr [EBX + 0x20],0x0      ; 00443fd9
    MOV EBX,dword ptr [EBX + 0x4]       ; 00443fe0
    PUSH EBX                            ; 00443fe3
    MOV EAX,dword ptr [EBX]             ; 00443fe4
    CALL dword ptr [EAX + 0x4]          ; 00443fe6
    ADD ESP,0x4                         ; 00443fe9
    POP EBP                             ; 00443fec
    POP EBX                             ; 00443fed
    MOV EAX,EAX                         ; 00443fee
    RET                                 ; 00443ff0
    PUSH EDI                            ; 00443ff1
        ;   Label: LAB_00443ff1
    PUSH ESI                            ; 00443ff2
    MOV EBP,dword ptr [EBX + 0x14]      ; 00443ff3
    PUSH EBP                            ; 00443ff6
    MOV ESI,0x5d6b23                    ; 00443ff7
    MOV EDI,0x881                       ; 00443ffc
    PUSH 0x5d6b38                       ; 00444001
    MOV dword ptr [0x01d1d400],ESI      ; 00444006 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 0044400c | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00444012
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x8                         ; 00444017
    POP ESI                             ; 0044401a
    POP EDI                             ; 0044401b
    JMP 0x00443fcb                      ; 0044401c
        ;   XREF to: 00443fcb (UNCONDITIONAL_JUMP)  ; LAB_00443fcb

