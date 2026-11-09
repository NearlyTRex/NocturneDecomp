; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512bce(undefined4 param_1,int param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d224b4
;   undefined4 DAT_01e7dac8
;   undefined4 DAT_02c83468
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   engine_mini3d.cpp_FUN_005124f0
;   engine_mini3d.cpp_FUN_00516c60
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00512bce
        ;   Label: engine_mini3d.cpp_FUN_00512bce
    PUSH EDI                            ; 00512bd0
    PUSH EBP                            ; 00512bd1
    MOV EAX,dword ptr [ESP + 0x18]      ; 00512bd2
    MOV EDX,dword ptr [0x01e7dac8]      ; 00512bd6 | DAT_01e7dac8
    MOV ECX,dword ptr [0x01d224b4]      ; 00512bdc | DAT_01d224b4
    ADD EDX,EAX                         ; 00512be2
    ADD ECX,dword ptr [ESP + 0x10]      ; 00512be4
    MOV dword ptr [0x01e7dac8],EDX      ; 00512be8 | DAT_01e7dac8
    MOV dword ptr [0x01d224b4],ECX      ; 00512bee | DAT_01d224b4
    CALL engine_mini3d.cpp_FUN_005124f0 ; 00512bf4
        ;   XREF to: 005124f0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_005124f0()
    CALL engine_mini3d.cpp_FUN_00516c60 ; 00512bf9
        ;   XREF to: 00516c60 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_00516c60()
    CMP dword ptr [0x02c83468],0x0      ; 00512bfe | DAT_02c83468
    JZ 0x00512c3a                       ; 00512c05
        ;   XREF to: 00512c3a (CONDITIONAL_JUMP)  ; LAB_00512c3a
    CMP dword ptr [0x01c50948],0x0      ; 00512c07 | DAT_01c50948
    JZ 0x00512c3a                       ; 00512c0e
        ;   XREF to: 00512c3a (CONDITIONAL_JUMP)  ; LAB_00512c3a
    PUSH ESI                            ; 00512c10
    PUSH EBX                            ; 00512c11
    MOV EAX,[0x01c51d14]                ; 00512c12 | DAT_01c51d14
    PUSH EAX                            ; 00512c17
    MOV EDX,dword ptr [ESP + 0x24]      ; 00512c18
    PUSH EDX                            ; 00512c1c
    MOV ECX,dword ptr [ESP + 0x24]      ; 00512c1d
    PUSH ECX                            ; 00512c21
    MOV EBX,dword ptr [ESP + 0x24]      ; 00512c22
    PUSH EBX                            ; 00512c26
    MOV ESI,dword ptr [ESP + 0x24]      ; 00512c27
    PUSH ESI                            ; 00512c2b
    CALL dword ptr [0x02c83468]         ; 00512c2c | DAT_02c83468
    ADD ESP,0x14                        ; 00512c32
    POP EBX                             ; 00512c35
    POP ESI                             ; 00512c36
    POP EBP                             ; 00512c37
    POP EDI                             ; 00512c38
    RET                                 ; 00512c39
    MOV EDI,0x5e8da7                    ; 00512c3a
        ;   Label: LAB_00512c3a
    MOV EBP,0x7a9                       ; 00512c3f
    PUSH 0x5e8dbc                       ; 00512c44
    MOV dword ptr [0x01d1d400],EDI      ; 00512c49 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 00512c4f | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00512c55
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00512c5a
    POP EBP                             ; 00512c5d
    POP EDI                             ; 00512c5e
    RET                                 ; 00512c5f

