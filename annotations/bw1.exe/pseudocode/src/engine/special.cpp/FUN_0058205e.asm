; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0058205e(undefined4 param_1)
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

    MOV ECX,ECX                         ; 0058205e
        ;   Label: engine_special.cpp_FUN_0058205e
    CMP dword ptr [0x01c50948],0x0      ; 00582060 | DAT_01c50948
    JNZ 0x0058206c                      ; 00582067
        ;   XREF to: 0058206c (CONDITIONAL_JUMP)  ; LAB_0058206c
    XOR EAX,EAX                         ; 00582069
    RET                                 ; 0058206b
    PUSH EDI                            ; 0058206c
        ;   Label: LAB_0058206c
    PUSH ESI                            ; 0058206d
    PUSH EBX                            ; 0058206e
    MOV ECX,dword ptr [0x01c50934]      ; 0058206f | DAT_01c50934
    PUSH ECX                            ; 00582075
    PUSH 0x1c4e9f8                      ; 00582076
    MOV EBX,dword ptr [0x01c50930]      ; 0058207b | DAT_01c50930
    PUSH EBX                            ; 00582081
    MOV ESI,dword ptr [0x0061b4a8]      ; 00582082 | DAT_0061b4a8
    PUSH ESI                            ; 00582088
    MOV EDI,dword ptr [ESP + 0x20]      ; 00582089
    PUSH EDI                            ; 0058208d
    CALL dword ptr [0x02c833b4]         ; 0058208e | DAT_02c833b4
    ADD ESP,0x14                        ; 00582094
    POP EBX                             ; 00582097
    POP ESI                             ; 00582098
    POP EDI                             ; 00582099
    RET                                 ; 0058209a

