; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005659b0(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba28
;   undefined4 DAT_01c6ced0
;   undefined4 DAT_01c6ced4
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6010
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005659b0
        ;   Label: engine_special.cpp_FUN_005659b0
    CMP dword ptr [0x01c6cee8],0x0      ; 005659b1 | DAT_01c6cee8
    JNZ 0x005659be                      ; 005659b8
        ;   XREF to: 005659be (CONDITIONAL_JUMP)  ; LAB_005659be
    XOR EAX,EAX                         ; 005659ba
    POP EBP                             ; 005659bc
    RET                                 ; 005659bd
    PUSH EDI                            ; 005659be
        ;   Label: LAB_005659be
    PUSH ESI                            ; 005659bf
    PUSH EBX                            ; 005659c0
    MOV ECX,dword ptr [0x01c6ced4]      ; 005659c1 | DAT_01c6ced4
    PUSH ECX                            ; 005659c7
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005659c8
    PUSH EBX                            ; 005659cc
    MOV ESI,dword ptr [0x01c6ced0]      ; 005659cd | DAT_01c6ced0
    PUSH ESI                            ; 005659d3
    MOV EDI,dword ptr [0x005fba28]      ; 005659d4 | DAT_005fba28
    PUSH EDI                            ; 005659da
    MOV EBP,dword ptr [ESP + 0x24]      ; 005659db
    PUSH EBP                            ; 005659df
    CALL dword ptr [0x02cf6010]         ; 005659e0 | DAT_02cf6010
    ADD ESP,0x14                        ; 005659e6
    POP EBX                             ; 005659e9
    POP ESI                             ; 005659ea
    POP EDI                             ; 005659eb
    POP EBP                             ; 005659ec
    RET                                 ; 005659ed

