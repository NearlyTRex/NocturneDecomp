; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_FUN_00404e70(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404e70
        ;   Label: engine_3d.c_FUN_00404e70
    PUSH ESI                            ; 00404e71
    PUSH EBP                            ; 00404e72
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404e73
    LEA ESI,[EBX + 0x18]                ; 00404e77
    LEA EAX,[EBX + 0x8]                 ; 00404e7a
    PUSH EAX                            ; 00404e7d
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00404e7e
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00404e83
    TEST EAX,EAX                        ; 00404e86
    JZ 0x00404ecb                       ; 00404e88
        ;   XREF to: 00404ecb (CONDITIONAL_JUMP)  ; LAB_00404ecb
    CMP dword ptr [0x01c51d00],0x0      ; 00404e8a | DAT_01c51d00
    JNZ 0x00404ee6                      ; 00404e91
        ;   XREF to: 00404ee6 (CONDITIONAL_JUMP)  ; LAB_00404ee6
    CMP dword ptr [0x0061b4a0],0x20     ; 00404e93 | DAT_0061b4a0
    JNZ 0x00404eda                      ; 00404e9a
        ;   XREF to: 00404eda (CONDITIONAL_JUMP)  ; LAB_00404eda
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00404e9c | DAT_01c4f02c
    PUSH EDI                            ; 00404ea6
        ;   Label: LAB_00404ea6
    MOV EDI,0x9                         ; 00404ea7
    PUSH ESI                            ; 00404eac
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ead
    MOV EBP,0x2                         ; 00404eb0
    PUSH EAX                            ; 00404eb5
    MOV dword ptr [0x01c51d14],EDI      ; 00404eb6 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 00404ebc | DAT_01c51d18
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00404ec2
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404ec7
    POP EDI                             ; 00404eca
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ecb
        ;   Label: LAB_00404ecb
    ADD EBX,0x18                        ; 00404ece
    SHL EAX,0x2                         ; 00404ed1
    ADD EAX,EBX                         ; 00404ed4
    POP EBP                             ; 00404ed6
    POP ESI                             ; 00404ed7
    POP EBX                             ; 00404ed8
    RET                                 ; 00404ed9
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 00404eda | DAT_01c4f02c
        ;   Label: LAB_00404eda
    JMP 0x00404ea6                      ; 00404ee4
        ;   XREF to: 00404ea6 (UNCONDITIONAL_JUMP)  ; LAB_00404ea6
    CMP dword ptr [0x0061b4a0],0x20     ; 00404ee6 | DAT_0061b4a0
        ;   Label: LAB_00404ee6
    JNZ 0x00404efb                      ; 00404eed
        ;   XREF to: 00404efb (CONDITIONAL_JUMP)  ; LAB_00404efb
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00404eef | DAT_01c4f02c
    JMP 0x00404ea6                      ; 00404ef9
        ;   XREF to: 00404ea6 (UNCONDITIONAL_JUMP)  ; LAB_00404ea6
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00404efb | DAT_01c4f02c
        ;   Label: LAB_00404efb
    JMP 0x00404ea6                      ; 00404f05
        ;   XREF to: 00404ea6 (UNCONDITIONAL_JUMP)  ; LAB_00404ea6

