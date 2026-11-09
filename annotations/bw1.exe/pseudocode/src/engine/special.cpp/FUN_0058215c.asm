; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_special_cpp_FUN_0058215c(undefined4 param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a8
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833bc
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 0058215c
        ;   Label: engine_special.cpp_FUN_0058215c
    CMP dword ptr [0x01c50948],0x0      ; 00582160 | DAT_01c50948
    JZ 0x00582172                       ; 00582167
        ;   XREF to: 00582172 (CONDITIONAL_JUMP)  ; LAB_00582172
    CMP dword ptr [0x02c833bc],0x0      ; 00582169 | DAT_02c833bc
    JNZ 0x00582175                      ; 00582170
        ;   XREF to: 00582175 (CONDITIONAL_JUMP)  ; LAB_00582175
    XOR EAX,EAX                         ; 00582172
        ;   Label: LAB_00582172
    RET                                 ; 00582174
    PUSH EDI                            ; 00582175
        ;   Label: LAB_00582175
    PUSH ESI                            ; 00582176
    PUSH EBX                            ; 00582177
    MOV EBX,dword ptr [ESP + 0x14]      ; 00582178
    PUSH EBX                            ; 0058217c
    MOV ESI,dword ptr [0x0061b4a8]      ; 0058217d | DAT_0061b4a8
    PUSH ESI                            ; 00582183
    MOV EDI,dword ptr [ESP + 0x18]      ; 00582184
    PUSH EDI                            ; 00582188
    CALL dword ptr [0x02c833bc]         ; 00582189 | DAT_02c833bc
    ADD ESP,0xc                         ; 0058218f
    POP EBX                             ; 00582192
    POP ESI                             ; 00582193
    POP EDI                             ; 00582194
    RET                                 ; 00582195

