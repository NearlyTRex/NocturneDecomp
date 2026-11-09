; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_3d_c_FUN_00404fa0(int param_1)
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

    PUSH EBX                            ; 00404fa0
        ;   Label: engine_3d.c_FUN_00404fa0
    PUSH ESI                            ; 00404fa1
    PUSH EBP                            ; 00404fa2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00404fa3
    LEA ESI,[EBX + 0x18]                ; 00404fa7
    LEA EAX,[EBX + 0x8]                 ; 00404faa
    PUSH EAX                            ; 00404fad
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 00404fae
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 00404fb3
    TEST EAX,EAX                        ; 00404fb6
    JZ 0x00404ffb                       ; 00404fb8
        ;   XREF to: 00404ffb (CONDITIONAL_JUMP)  ; LAB_00404ffb
    CMP dword ptr [0x01c38b40],0x0      ; 00404fba | DAT_01c38b40
    JNZ 0x00405016                      ; 00404fc1
        ;   XREF to: 00405016 (CONDITIONAL_JUMP)  ; LAB_00405016
    CMP dword ptr [0x006141c0],0x20     ; 00404fc3 | DAT_006141c0
    JNZ 0x0040500a                      ; 00404fca
        ;   XREF to: 0040500a (CONDITIONAL_JUMP)  ; LAB_0040500a
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00404fcc | DAT_01c35e6c
    PUSH EDI                            ; 00404fd6
        ;   Label: LAB_00404fd6
    MOV EDI,0x9                         ; 00404fd7
    PUSH ESI                            ; 00404fdc
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404fdd
    MOV EBP,0x2                         ; 00404fe0
    PUSH EAX                            ; 00404fe5
    MOV dword ptr [0x01c38b54],EDI      ; 00404fe6 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EBP      ; 00404fec | DAT_01c38b58
    CALL engine_clipper.c_clipAndRasterize_FUN_00431d90 ; 00404ff2
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_00431d90(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00404ff7
    POP EDI                             ; 00404ffa
    MOV EAX,dword ptr [EBX + 0x4]       ; 00404ffb
        ;   Label: LAB_00404ffb
    ADD EBX,0x18                        ; 00404ffe
    SHL EAX,0x2                         ; 00405001
    ADD EAX,EBX                         ; 00405004
    POP EBP                             ; 00405006
    POP ESI                             ; 00405007
    POP EBX                             ; 00405008
    RET                                 ; 00405009
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 0040500a | DAT_01c35e6c
        ;   Label: LAB_0040500a
    JMP 0x00404fd6                      ; 00405014
        ;   XREF to: 00404fd6 (UNCONDITIONAL_JUMP)  ; LAB_00404fd6
    CMP dword ptr [0x006141c0],0x20     ; 00405016 | DAT_006141c0
        ;   Label: LAB_00405016
    JNZ 0x0040502b                      ; 0040501d
        ;   XREF to: 0040502b (CONDITIONAL_JUMP)  ; LAB_0040502b
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040501f | DAT_01c35e6c
    JMP 0x00404fd6                      ; 00405029
        ;   XREF to: 00404fd6 (UNCONDITIONAL_JUMP)  ; LAB_00404fd6
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0040502b | DAT_01c35e6c
        ;   Label: LAB_0040502b
    JMP 0x00404fd6                      ; 00405035
        ;   XREF to: 00404fd6 (UNCONDITIONAL_JUMP)  ; LAB_00404fd6

