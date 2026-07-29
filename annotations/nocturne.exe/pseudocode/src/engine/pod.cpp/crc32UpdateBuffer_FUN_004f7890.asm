; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_004f7890(uchar *data_buffer,uint byte_count,uint initial_crc)
;
; Parameters:
; uchar *          Stack[0x4]:4   data_buffer
; uint             Stack[0x8]:4   byte_count
; uint             Stack[0xc]:4   initial_crc
;
; Called Functions:
;   engine_pod.cpp_crc32UpdateByte_FUN_004f77d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f7890
        ;   Label: engine_pod.cpp_crc32UpdateBuffer_FUN_004f7890
    PUSH ESI                            ; 004f7891
    PUSH EDI                            ; 004f7892
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f7893
    MOV EDI,dword ptr [ESP + 0x14]      ; 004f7897
    MOV EAX,dword ptr [ESP + 0x18]      ; 004f789b
    XOR EBX,EBX                         ; 004f789f
    TEST EDI,EDI                        ; 004f78a1
    JBE 0x004f78c0                      ; 004f78a3
        ;   XREF to: 004f78c0 (CONDITIONAL_JUMP)  ; LAB_004f78c0
    XOR EDX,EDX                         ; 004f78a5
        ;   Label: LAB_004f78a5
    MOV DL,byte ptr [ESI]               ; 004f78a7
    PUSH EDX                            ; 004f78a9
    PUSH EAX                            ; 004f78aa
    INC ESI                             ; 004f78ab
    INC EBX                             ; 004f78ac
    CALL engine_pod.cpp_crc32UpdateByte_FUN_004f77d0 ; 004f78ad
        ;   XREF to: 004f77d0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_004f77d0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 004f78b2
    CMP EBX,EDI                         ; 004f78b5
    JC 0x004f78a5                       ; 004f78b7
        ;   XREF to: 004f78a5 (CONDITIONAL_JUMP)  ; LAB_004f78a5
    LEA EAX,[EAX]                       ; 004f78b9
    NOP                                 ; 004f78bf
    POP EDI                             ; 004f78c0
        ;   Label: LAB_004f78c0
    POP ESI                             ; 004f78c1
    POP EBX                             ; 004f78c2
    RET                                 ; 004f78c3

