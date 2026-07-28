; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; streambuf * crt_fstream_cpp_filebuf_setbuf_FUN_005722dc(streambuf *param_1,void *param_2,int param_3)
;
;
; Called Functions:
;   crt_iostream.cpp_setBuffer_FUN_00571df8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005722dc
        ;   Label: crt_fstream.cpp_filebuf_setbuf_FUN_005722dc
    MOV EBX,dword ptr [ESP + 0x8]       ; 005722dd
    MOV ECX,dword ptr [ESP + 0xc]       ; 005722e1
    MOV EDX,dword ptr [ESP + 0x10]      ; 005722e5
    MOV EAX,dword ptr [EBX + 0x2c]      ; 005722e9
    CMP EAX,-0x1                        ; 005722ec
    JZ 0x005722f8                       ; 005722ef
        ;   XREF to: 005722f8 (CONDITIONAL_JUMP)  ; LAB_005722f8
    MOV EAX,dword ptr [EBX + 0x4]       ; 005722f1
    TEST EAX,EAX                        ; 005722f4
    JNZ 0x0057230f                      ; 005722f6
        ;   XREF to: 0057230f (CONDITIONAL_JUMP)  ; LAB_0057230f
    TEST ECX,ECX                        ; 005722f8
        ;   Label: LAB_005722f8
    JNZ 0x00572315                      ; 005722fa
        ;   XREF to: 00572315 (CONDITIONAL_JUMP)  ; LAB_00572315
    PUSH 0x0                            ; 005722fc
        ;   Label: LAB_005722fc
    PUSH 0x0                            ; 005722fe
    PUSH 0x0                            ; 00572300
    PUSH EBX                            ; 00572302
        ;   Label: LAB_00572302
    CALL crt_iostream.cpp_setBuffer_FUN_00571df8 ; 00572303
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_00571df8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 00572308
    MOV EAX,EBX                         ; 0057230b
    POP EBX                             ; 0057230d
    RET                                 ; 0057230e
    XOR EBX,EBX                         ; 0057230f
        ;   Label: LAB_0057230f
    MOV EAX,EBX                         ; 00572311
    POP EBX                             ; 00572313
    RET                                 ; 00572314
    TEST EDX,EDX                        ; 00572315
        ;   Label: LAB_00572315
    JLE 0x005722fc                      ; 00572317
        ;   XREF to: 005722fc (CONDITIONAL_JUMP)  ; LAB_005722fc
    CMP EDX,0x4                         ; 00572319
    JLE 0x00572327                      ; 0057231c
        ;   XREF to: 00572327 (CONDITIONAL_JUMP)  ; LAB_00572327
    PUSH 0x0                            ; 0057231e
    LEA EAX,[ECX + EDX*0x1]             ; 00572320
    PUSH EAX                            ; 00572323
    PUSH ECX                            ; 00572324
    JMP 0x00572302                      ; 00572325
        ;   XREF to: 00572302 (UNCONDITIONAL_JUMP)  ; LAB_00572302
    PUSH 0x0                            ; 00572327
        ;   Label: LAB_00572327
    PUSH 0x0                            ; 00572329
    PUSH 0x0                            ; 0057232b
    PUSH EBX                            ; 0057232d
    CALL crt_iostream.cpp_setBuffer_FUN_00571df8 ; 0057232e
        ;   XREF to: 00571df8 (UNCONDITIONAL_CALL)  ; void crt_iostream.cpp_setBuffer_FUN_00571df8(streambuf * this_ptr, void * new_buffer, void * buffer_end, int ownership_flag)
    ADD ESP,0x10                        ; 00572333
    JMP 0x0057230f                      ; 00572336
        ;   XREF to: 0057230f (UNCONDITIONAL_JUMP)  ; LAB_0057230f

