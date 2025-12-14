; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_codec.cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer * bit_buffer, FILE * output_stream)
;
; Parameters:
; SBitBuffer *     Stack[0x4]:4   bit_buffer
; FILE *           Stack[0x8]:4   output_stream
;
; XREF[1]:
;   support_codec.cpp_CLZWCompress_finalize_FUN_0043f440 at 0043f456
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005ff2d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043e7e0
        ;   Label: support_codec.cpp_flushBitBuffer_FUN_0043e7e0
    PUSH ESI                            ; 0043e7e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043e7e2
    MOV EDX,dword ptr [EBX]             ; 0043e7e6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0043e7e8
    CMP EDX,0x8                         ; 0043e7ec
    JL 0x0043e817                       ; 0043e7ef
        ;   XREF to: 0043e817 (CONDITIONAL_JUMP)  ; LAB_0043e817
    PUSH EDI                            ; 0043e7f1
    XOR EAX,EAX                         ; 0043e7f2
        ;   Label: LAB_0043e7f2
    MOV AL,byte ptr [EBX + 0x4]         ; 0043e7f4
    PUSH EAX                            ; 0043e7f7
    PUSH ESI                            ; 0043e7f8
    CALL crt_stdio.c_fputc_FUN_005ff2d7 ; 0043e7f9
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
    MOV ECX,dword ptr [EBX + 0x4]       ; 0043e7fe
    MOV EDI,dword ptr [EBX]             ; 0043e801
    SHR ECX,0x8                         ; 0043e803
    SUB EDI,0x8                         ; 0043e806
    MOV dword ptr [EBX + 0x4],ECX       ; 0043e809
    ADD ESP,0x8                         ; 0043e80c
    MOV dword ptr [EBX],EDI             ; 0043e80f
    CMP EDI,0x8                         ; 0043e811
    JGE 0x0043e7f2                      ; 0043e814
        ;   XREF to: 0043e7f2 (CONDITIONAL_JUMP)  ; LAB_0043e7f2
    POP EDI                             ; 0043e816
    CMP dword ptr [EBX],0x0             ; 0043e817
        ;   Label: LAB_0043e817
    JG 0x0043e81f                       ; 0043e81a
        ;   XREF to: 0043e81f (CONDITIONAL_JUMP)  ; LAB_0043e81f
    POP ESI                             ; 0043e81c
    POP EBX                             ; 0043e81d
    RET                                 ; 0043e81e
    XOR EAX,EAX                         ; 0043e81f
        ;   Label: LAB_0043e81f
    MOV AL,byte ptr [EBX + 0x4]         ; 0043e821
    PUSH EAX                            ; 0043e824
    PUSH ESI                            ; 0043e825
    CALL crt_stdio.c_fputc_FUN_005ff2d7 ; 0043e826
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fputc_FUN_005ff2d7(FILE * stream, int character)
    MOV dword ptr [EBX + 0x4],0x0       ; 0043e82b
    ADD ESP,0x8                         ; 0043e832
    MOV dword ptr [EBX],0x0             ; 0043e835
    POP ESI                             ; 0043e83b
    POP EBX                             ; 0043e83c
    RET                                 ; 0043e83d

