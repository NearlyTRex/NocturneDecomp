; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005826ee(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833d8
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005826ee
        ;   Label: engine_special.cpp_FUN_005826ee
    CMP dword ptr [0x01c50948],0x0      ; 005826f0 | DAT_01c50948
    JNZ 0x005826fc                      ; 005826f7
        ;   XREF to: 005826fc (CONDITIONAL_JUMP)  ; LAB_005826fc
    XOR EAX,EAX                         ; 005826f9
    RET                                 ; 005826fb
    PUSH EBX                            ; 005826fc
        ;   Label: LAB_005826fc
    MOV ECX,dword ptr [ESP + 0xc]       ; 005826fd
    PUSH ECX                            ; 00582701
    MOV EBX,dword ptr [ESP + 0xc]       ; 00582702
    PUSH EBX                            ; 00582706
    CALL dword ptr [0x02c833d8]         ; 00582707 | DAT_02c833d8
    ADD ESP,0x8                         ; 0058270d
    POP EBX                             ; 00582710
    RET                                 ; 00582711

