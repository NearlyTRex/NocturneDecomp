; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_FUN_00404e5e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_clipper.c_clipAndRasterize_FUN_00431d90
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 00404e5e
        ;   Label: engine_3d.c_FUN_00404e5e
    PUSH EBX                            ; 00404e60
    PUSH ESI                            ; 00404e61
    PUSH EBP                            ; 00404e62
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404e63
    LEA ESI,[EBX + 0x18]                ; 00404e67
    LEA EAX,[EBX + 0x8]                 ; 00404e6a
    PUSH EAX                            ; 00404e6d
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00404e6e
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00404e73
    TEST EAX,EAX                        ; 00404e76
    JZ 0x00404ebb                       ; 00404e78
        ;   XREF to: 00404ebb (CONDITIONAL_JUMP)  ; LAB_00404ebb
    CMP dword ptr [0x01c38b40],0x0      ; 00404e7a | DAT_01c38b40
    JNZ 0x00404ed6                      ; 00404e81
        ;   XREF to: 00404ed6 (CONDITIONAL_JUMP)  ; LAB_00404ed6
    CMP dword ptr [0x006141c0],0x20     ; 00404e83 | DAT_006141c0
    JNZ 0x00404eca                      ; 00404e8a
        ;   XREF to: 00404eca (CONDITIONAL_JUMP)  ; LAB_00404eca
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404e8c | DAT_01c35e6c
    PUSH EDI                            ; 00404e96
        ;   Label: LAB_00404e96
    MOV EDI,0x9                         ; 00404e97
    PUSH ESI                            ; 00404e9c
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404e9d
    MOV EBP,0x3                         ; 00404ea0
    PUSH EAX                            ; 00404ea5
    MOV dword ptr [0x01c38b54],EDI      ; 00404ea6 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00404eac | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404eb2
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404eb7
    POP EDI                             ; 00404eba
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ebb
        ;   Label: LAB_00404ebb
    ADD EBX,0x18                        ; 00404ebe
    SHL EAX,0x2                         ; 00404ec1
    ADD EAX,EBX                         ; 00404ec4
    POP EBP                             ; 00404ec6
    POP ESI                             ; 00404ec7
    POP EBX                             ; 00404ec8
    RET                                 ; 00404ec9
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00404eca | DAT_01c35e6c
        ;   Label: LAB_00404eca
    JMP 0x00404e96                      ; 00404ed4
        ;   XREF to: 00404e96 (UNCONDITIONAL_JUMP)  ; LAB_00404e96
    CMP dword ptr [0x006141c0],0x20     ; 00404ed6 | DAT_006141c0
        ;   Label: LAB_00404ed6
    JNZ 0x00404eeb                      ; 00404edd
        ;   XREF to: 00404eeb (CONDITIONAL_JUMP)  ; LAB_00404eeb
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00404edf | DAT_01c35e6c
    JMP 0x00404e96                      ; 00404ee9
        ;   XREF to: 00404e96 (UNCONDITIONAL_JUMP)  ; LAB_00404e96
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00404eeb | DAT_01c35e6c
        ;   Label: LAB_00404eeb
    JMP 0x00404e96                      ; 00404ef5
        ;   XREF to: 00404e96 (UNCONDITIONAL_JUMP)  ; LAB_00404e96

