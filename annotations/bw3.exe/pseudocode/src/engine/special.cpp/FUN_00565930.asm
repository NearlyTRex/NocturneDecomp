; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00565930(void)
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

    CMP dword ptr [0x01c6cee8],0x0      ; 00565930 | DAT_01c6cee8
        ;   Label: engine_special.cpp_FUN_00565930
    JNZ 0x0056593c                      ; 00565937
        ;   XREF to: 0056593c (CONDITIONAL_JUMP)  ; LAB_0056593c
    XOR EAX,EAX                         ; 00565939
    RET                                 ; 0056593b
    PUSH EDI                            ; 0056593c
        ;   Label: LAB_0056593c
    PUSH ESI                            ; 0056593d
    PUSH EBX                            ; 0056593e
    MOV ECX,dword ptr [0x01c6ced4]      ; 0056593f | DAT_01c6ced4
    PUSH ECX                            ; 00565945
    PUSH 0x1c6af98                      ; 00565946
    MOV EBX,dword ptr [0x01c6ced0]      ; 0056594b | DAT_01c6ced0
    PUSH EBX                            ; 00565951
    MOV ESI,dword ptr [0x005fba28]      ; 00565952 | DAT_005fba28
    PUSH ESI                            ; 00565958
    MOV EDI,dword ptr [ESP + 0x20]      ; 00565959
    PUSH EDI                            ; 0056595d
    CALL dword ptr [0x02cf6010]         ; 0056595e | DAT_02cf6010
    ADD ESP,0x14                        ; 00565964
    POP EBX                             ; 00565967
    POP ESI                             ; 00565968
    POP EDI                             ; 00565969
    RET                                 ; 0056596a

