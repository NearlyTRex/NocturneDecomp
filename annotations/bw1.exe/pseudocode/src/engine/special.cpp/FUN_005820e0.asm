; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005820e0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_01c50930
;   undefined4 DAT_01c50934
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833b4
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005820e0
        ;   Label: engine_special.cpp_FUN_005820e0
    CMP dword ptr [0x01c50948],0x0      ; 005820e1 | DAT_01c50948
    JNZ 0x005820ee                      ; 005820e8
        ;   XREF to: 005820ee (CONDITIONAL_JUMP)  ; LAB_005820ee
    XOR EAX,EAX                         ; 005820ea
    POP EBP                             ; 005820ec
    RET                                 ; 005820ed
    PUSH EDI                            ; 005820ee
        ;   Label: LAB_005820ee
    PUSH ESI                            ; 005820ef
    PUSH EBX                            ; 005820f0
    MOV ECX,dword ptr [0x01c50934]      ; 005820f1 | DAT_01c50934
    PUSH ECX                            ; 005820f7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005820f8
    PUSH EBX                            ; 005820fc
    MOV ESI,dword ptr [0x01c50930]      ; 005820fd | DAT_01c50930
    PUSH ESI                            ; 00582103
    MOV EDI,dword ptr [0x0061b4a8]      ; 00582104 | DAT_0061b4a8
    PUSH EDI                            ; 0058210a
    MOV EBP,dword ptr [ESP + 0x24]      ; 0058210b
    PUSH EBP                            ; 0058210f
    CALL dword ptr [0x02c833b4]         ; 00582110 | DAT_02c833b4
    ADD ESP,0x14                        ; 00582116
    POP EBX                             ; 00582119
    POP ESI                             ; 0058211a
    POP EDI                             ; 0058211b
    POP EBP                             ; 0058211c
    RET                                 ; 0058211d

