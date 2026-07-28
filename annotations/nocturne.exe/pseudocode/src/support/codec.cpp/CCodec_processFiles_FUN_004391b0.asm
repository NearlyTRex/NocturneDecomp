; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int support_codec_cpp_CCodec_processFiles_FUN_004391b0(int *param_1,char *param_2,char *param_3)
;
; Local Variables:
; undefined        Stack[-0x110]:1  local_110
; undefined4       Stack[-0xac]:4  local_ac
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x30]:4  local_30
;
; Referenced Globals:
;   undefined4 DAT_005a47a0
;
; Called Functions:
;   crt_fstream.cpp_ifstream_ctor_FUN_00565072
;   crt_fstream.cpp_ifstream_dtor_FUN_00565264
;   crt_fstream.cpp_ofstream_ctor_FUN_0056511e
;   crt_fstream.cpp_ofstream_dtor_FUN_005651ca
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004391b0
        ;   Label: support_codec.cpp_CCodec_processFiles_FUN_004391b0
    PUSH ESI                            ; 004391b1
    PUSH EDI                            ; 004391b2
    PUSH EBP                            ; 004391b3
    SUB ESP,0x100                       ; 004391b4
    MOV EBX,dword ptr [ESP + 0x114]     ; 004391ba
    MOV EDX,dword ptr [0x005a47a0]      ; 004391c1 | DAT_005a47a0
    PUSH EDX                            ; 004391c7
    PUSH 0x101                          ; 004391c8
    MOV ECX,dword ptr [ESP + 0x120]     ; 004391cd
    PUSH ECX                            ; 004391d4
    PUSH 0x0                            ; 004391d5
    LEA EAX,[ESP + 0x10]                ; 004391d7
    PUSH EAX                            ; 004391db
    CALL crt_fstream.cpp_ifstream_ctor_FUN_00565072 ; 004391dc
        ;   XREF to: 00565072 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_ifstream_ctor_FUN_00565072(void * this_ptr, int ctor_flags, char * filename, int open_mode, ...)
    ADD ESP,0x14                        ; 004391e1
    MOV ESI,dword ptr [ESP + 0x64]      ; 004391e4
    TEST ESI,ESI                        ; 004391e8
    JNZ 0x0043929d                      ; 004391ea
        ;   XREF to: 0043929d (CONDITIONAL_JUMP)  ; LAB_0043929d
    MOV EDI,dword ptr [0x005a47a0]      ; 004391f0 | DAT_005a47a0
    PUSH EDI                            ; 004391f6
    PUSH 0x112                          ; 004391f7
    MOV EBP,dword ptr [ESP + 0x124]     ; 004391fc
    PUSH EBP                            ; 00439203
    PUSH ESI                            ; 00439204
    LEA EAX,[ESP + 0x90]                ; 00439205
    PUSH EAX                            ; 0043920c
    CALL crt_fstream.cpp_ofstream_ctor_FUN_0056511e ; 0043920d
        ;   XREF to: 0056511e (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_ofstream_ctor_FUN_0056511e(void * this_ptr, int ctor_flags, char * filename, int open_mode, ...)
    ADD ESP,0x14                        ; 00439212
    CMP dword ptr [ESP + 0xe0],0x0      ; 00439215
    JNZ 0x004392a7                      ; 0043921d
        ;   XREF to: 004392a7 (CONDITIONAL_JUMP)  ; LAB_004392a7
    PUSH EBX                            ; 00439223
    MOV EAX,dword ptr [EBX]             ; 00439224
    CALL dword ptr [EAX + 0x4]          ; 00439226
    ADD ESP,0x4                         ; 00439229
    LEA EAX,[ESP + 0xc4]                ; 0043922c
    PUSH EAX                            ; 00439233
    LEA EAX,[ESP + 0x100]               ; 00439234
    MOV EDX,0x7fffffff                  ; 0043923b
    PUSH EAX                            ; 00439240
    LEA EAX,[ESP + 0x4c]                ; 00439241
    MOV dword ptr [ESP + 0x104],EDX     ; 00439245
    PUSH EAX                            ; 0043924c
    MOV EDX,dword ptr [EBX]             ; 0043924d
    PUSH EBX                            ; 0043924f
    CALL dword ptr [EDX + 0x8]          ; 00439250
    ADD ESP,0x10                        ; 00439253
    MOV ESI,EAX                         ; 00439256
    TEST EAX,EAX                        ; 00439258
    JZ 0x0043926d                       ; 0043925a
        ;   XREF to: 0043926d (CONDITIONAL_JUMP)  ; LAB_0043926d
    LEA EAX,[ESP + 0xc4]                ; 0043925c
    PUSH EAX                            ; 00439263
    MOV EDX,dword ptr [EBX]             ; 00439264
    PUSH EBX                            ; 00439266
    CALL dword ptr [EDX + 0xc]          ; 00439267
    ADD ESP,0x8                         ; 0043926a
    PUSH 0x0                            ; 0043926d
        ;   Label: LAB_0043926d
    LEA EAX,[ESP + 0x84]                ; 0043926f
    PUSH EAX                            ; 00439276
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 00439277
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043927c
    PUSH 0x0                            ; 0043927f
    LEA EAX,[ESP + 0x4]                 ; 00439281
    PUSH EAX                            ; 00439285
    MOV EBX,ESI                         ; 00439286
    CALL crt_fstream.cpp_ifstream_dtor_FUN_00565264 ; 00439288
        ;   XREF to: 00565264 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_00565264(void * this_ptr, uint flags)
        ;   Label: LAB_00439288
    ADD ESP,0x8                         ; 0043928d
    MOV EAX,EBX                         ; 00439290
    ADD ESP,0x100                       ; 00439292
    POP EBP                             ; 00439298
    POP EDI                             ; 00439299
    POP ESI                             ; 0043929a
    POP EBX                             ; 0043929b
    RET                                 ; 0043929c
    XOR EBX,EBX                         ; 0043929d
        ;   Label: LAB_0043929d
    PUSH EBX                            ; 0043929f
    LEA EAX,[ESP + 0x4]                 ; 004392a0
    PUSH EAX                            ; 004392a4
    JMP 0x00439288                      ; 004392a5
        ;   XREF to: 00439288 (UNCONDITIONAL_JUMP)  ; LAB_00439288
    PUSH ESI                            ; 004392a7
        ;   Label: LAB_004392a7
    LEA EAX,[ESP + 0x84]                ; 004392a8
    PUSH EAX                            ; 004392af
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005651ca ; 004392b0
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005651ca(void * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004392b5
    PUSH ESI                            ; 004392b8
    LEA EAX,[ESP + 0x4]                 ; 004392b9
    PUSH EAX                            ; 004392bd
    XOR EBX,EBX                         ; 004392be
    JMP 0x00439288                      ; 004392c0
        ;   XREF to: 00439288 (UNCONDITIONAL_JUMP)  ; LAB_00439288

