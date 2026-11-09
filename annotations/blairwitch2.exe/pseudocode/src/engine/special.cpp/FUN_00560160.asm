; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_00560160(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0264bc54
;
; *****************************************************************************

section .text

    CMP dword ptr [0x0264bc54],0x0      ; 00560160 | DAT_0264bc54
        ;   Label: engine_special.cpp_FUN_00560160
    JNZ 0x0056016c                      ; 00560167
        ;   XREF to: 0056016c (CONDITIONAL_JUMP)  ; LAB_0056016c
    XOR EAX,EAX                         ; 00560169
    RET                                 ; 0056016b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056016c
        ;   Label: LAB_0056016c
    PUSH ECX                            ; 00560170
    CALL dword ptr [0x0264bc54]         ; 00560171 | DAT_0264bc54
    ADD ESP,0x4                         ; 00560177
    RET                                 ; 0056017a

