; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl engine_pod_cpp_crc32UpdateBuffer_FUN_0054f3a0(uchar *data_buffer,uint byte_count,uint initial_crc)
;
; Parameters:
; uchar *          Stack[0x4]:4   data_buffer
; uint             Stack[0x8]:4   byte_count
; uint             Stack[0xc]:4   initial_crc
;
; Called Functions:
;   engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054f3a0
        ;   Label: engine_pod.cpp_crc32UpdateBuffer_FUN_0054f3a0
    PUSH ESI                            ; 0054f3a1
    PUSH EDI                            ; 0054f3a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0054f3a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 0054f3a7
    MOV EAX,dword ptr [ESP + 0x18]      ; 0054f3ab
    XOR EBX,EBX                         ; 0054f3af
    TEST EDI,EDI                        ; 0054f3b1
    JBE 0x0054f3d0                      ; 0054f3b3
        ;   XREF to: 0054f3d0 (CONDITIONAL_JUMP)  ; LAB_0054f3d0
    XOR EDX,EDX                         ; 0054f3b5
        ;   Label: LAB_0054f3b5
    MOV DL,byte ptr [ESI]               ; 0054f3b7
    PUSH EDX                            ; 0054f3b9
    PUSH EAX                            ; 0054f3ba
    INC ESI                             ; 0054f3bb
    INC EBX                             ; 0054f3bc
    CALL engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0 ; 0054f3bd
        ;   XREF to: 0054f2e0 (UNCONDITIONAL_CALL)  ; uint engine_pod.cpp_crc32UpdateByte_FUN_0054f2e0(uint current_crc, uchar data_byte)
    ADD ESP,0x8                         ; 0054f3c2
    CMP EBX,EDI                         ; 0054f3c5
    JC 0x0054f3b5                       ; 0054f3c7
        ;   XREF to: 0054f3b5 (CONDITIONAL_JUMP)  ; LAB_0054f3b5
    LEA EAX,[EAX]                       ; 0054f3c9
    NOP                                 ; 0054f3cf
    POP EDI                             ; 0054f3d0
        ;   Label: LAB_0054f3d0
    POP ESI                             ; 0054f3d1
    POP EBX                             ; 0054f3d2
    RET                                 ; 0054f3d3

