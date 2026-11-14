; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint support_trisock_cpp_FUN_0059d360(int *param_1,code *param_2,undefined4 param_3)
;
;
; XREF[2]:
;   support_trisock.cpp_FUN_0059d430 at 0059d44e
;   support_trisock.cpp_FUN_0059d4b0 at 0059d61c
;
; Called Functions:
;   support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059d360
        ;   Label: support_trisock.cpp_FUN_0059d360
    PUSH ESI                            ; 0059d361
    PUSH EDI                            ; 0059d362
    PUSH EBP                            ; 0059d363
    MOV EBX,dword ptr [ESP + 0x14]      ; 0059d364
    MOV EDI,dword ptr [ESP + 0x18]      ; 0059d368
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0059d36c
    CMP dword ptr [EBX + 0x808],0x0     ; 0059d370
    JLE 0x0059d39d                      ; 0059d377
        ;   XREF to: 0059d39d (CONDITIONAL_JUMP)  ; LAB_0059d39d
    MOV EDX,dword ptr [EBX + 0x80c]     ; 0059d379
    MOV ECX,dword ptr [EBX + 0x808]     ; 0059d37f
    INC EDX                             ; 0059d385
    XOR EAX,EAX                         ; 0059d386
    DEC ECX                             ; 0059d388
    MOV AL,byte ptr [EDX + -0x1]        ; 0059d389
    MOV dword ptr [EBX + 0x80c],EDX     ; 0059d38c
    MOV dword ptr [EBX + 0x808],ECX     ; 0059d392
    POP EBP                             ; 0059d398
        ;   Label: LAB_0059d398
    POP EDI                             ; 0059d399
    POP ESI                             ; 0059d39a
    POP EBX                             ; 0059d39b
    RET                                 ; 0059d39c
    LEA EAX,[EBX + 0x8]                 ; 0059d39d
        ;   Label: LAB_0059d39d
    MOV dword ptr [EBX + 0x808],0x0     ; 0059d3a0
    MOV ESI,EAX                         ; 0059d3aa
    MOV dword ptr [EBX + 0x80c],EAX     ; 0059d3ac
    PUSH EBP                            ; 0059d3b2
        ;   Label: LAB_0059d3b2
    PUSH 0x0                            ; 0059d3b3
    CALL EDI                            ; 0059d3b5
    ADD ESP,0x8                         ; 0059d3b7
    TEST EAX,EAX                        ; 0059d3ba
    JNZ 0x0059d3c8                      ; 0059d3bc
        ;   XREF to: 0059d3c8 (CONDITIONAL_JUMP)  ; LAB_0059d3c8
    MOV EAX,0xffffffff                  ; 0059d3be
    POP EBP                             ; 0059d3c3
    POP EDI                             ; 0059d3c4
    POP ESI                             ; 0059d3c5
    POP EBX                             ; 0059d3c6
    RET                                 ; 0059d3c7
    PUSH 0x0                            ; 0059d3c8
        ;   Label: LAB_0059d3c8
    PUSH 0x800                          ; 0059d3ca
    PUSH ESI                            ; 0059d3cf
    MOV EAX,dword ptr [EBX + 0x4]       ; 0059d3d0
    PUSH EAX                            ; 0059d3d3
    CALL support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20 ; 0059d3d4
        ;   XREF to: 0059cb20 (UNCONDITIONAL_CALL)  ; int support_trisock.cpp_CSocket_receiveSocketData_FUN_0059cb20(CSocket * this_ptr, char * buffer, int length, SNetworkAddr * source_addr)
    ADD ESP,0x10                        ; 0059d3d9
    MOV EDX,EAX                         ; 0059d3dc
    CMP EAX,-0x2                        ; 0059d3de
    JNZ 0x0059d3e8                      ; 0059d3e1
        ;   XREF to: 0059d3e8 (CONDITIONAL_JUMP)  ; LAB_0059d3e8
    CMP dword ptr [EBX],0x0             ; 0059d3e3
    JNZ 0x0059d398                      ; 0059d3e6
        ;   XREF to: 0059d398 (CONDITIONAL_JUMP)  ; LAB_0059d398
    TEST EDX,EDX                        ; 0059d3e8
        ;   Label: LAB_0059d3e8
    JL 0x0059d410                       ; 0059d3ea
        ;   XREF to: 0059d410 (CONDITIONAL_JUMP)  ; LAB_0059d410
    JLE 0x0059d3b2                      ; 0059d3ec
        ;   XREF to: 0059d3b2 (CONDITIONAL_JUMP)  ; LAB_0059d3b2
    LEA EAX,[EBX + 0x9]                 ; 0059d3ee
    MOV dword ptr [EBX + 0x808],EDX     ; 0059d3f1
    LEA ESI,[EDX + -0x1]                ; 0059d3f7
    MOV dword ptr [EBX + 0x80c],EAX     ; 0059d3fa
    XOR EAX,EAX                         ; 0059d400
    MOV dword ptr [EBX + 0x808],ESI     ; 0059d402
    MOV AL,byte ptr [EBX + 0x8]         ; 0059d408
    POP EBP                             ; 0059d40b
    POP EDI                             ; 0059d40c
    POP ESI                             ; 0059d40d
    POP EBX                             ; 0059d40e
    RET                                 ; 0059d40f
    PUSH 0x5f8449                       ; 0059d410
        ;   Label: LAB_0059d410
    PUSH 0x1                            ; 0059d415
    CALL EDI                            ; 0059d417
    MOV EAX,0xffffffff                  ; 0059d419
    ADD ESP,0x8                         ; 0059d41e
    POP EBP                             ; 0059d421
    POP EDI                             ; 0059d422
    POP ESI                             ; 0059d423
    POP EBX                             ; 0059d424
    RET                                 ; 0059d425

