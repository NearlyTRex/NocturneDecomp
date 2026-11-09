; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_005658f0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba28
;   undefined4 DAT_01c6ced0
;   undefined4 DAT_01c6ced4
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf600c
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 005658f0 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_005658f0
    JNZ 0x005658fc                      ; 005658f7
        ;   XREF to: 005658fc (CONDITIONAL_JUMP)  ; LAB_005658fc
    XOR EAX,EAX                         ; 005658f9
    RET                                 ; 005658fb
    PUSH EDI                            ; 005658fc
        ;   Label: LAB_005658fc
    PUSH ESI                            ; 005658fd
    PUSH EBX                            ; 005658fe
    MOV ECX,dword ptr [0x01c6ced4]      ; 005658ff | DAT_01c6ced4
    PUSH ECX                            ; 00565905
    PUSH 0x1c6af98                      ; 00565906
    MOV EBX,dword ptr [0x01c6ced0]      ; 0056590b | DAT_01c6ced0
    PUSH EBX                            ; 00565911
    MOV ESI,dword ptr [0x005fba28]      ; 00565912 | DAT_005fba28
    PUSH ESI                            ; 00565918
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565919
    PUSH EDI                            ; 0056591d
    CALL dword ptr [0x02cf600c]         ; 0056591e | DAT_02cf600c
    ADD ESP,0x14                        ; 00565924
    POP EBX                             ; 00565927
    POP ESI                             ; 00565928
    POP EDI                             ; 00565929
    RET                                 ; 0056592a

