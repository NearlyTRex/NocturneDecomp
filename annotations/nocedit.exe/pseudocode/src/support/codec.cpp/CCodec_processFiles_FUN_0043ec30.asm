; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_codec_cpp_CCodec_processFiles_FUN_0043ec30(CCodec *this_ptr,char *input_file_path,char *output_file_path)
;
; Parameters:
; CCodec *         Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   input_file_path
; char *           Stack[0xc]:4   output_file_path
; Local Variables:
; undefined1       Stack[-0x110]:1  local_110
; undefined4       Stack[-0xac]:4  local_ac
; undefined1       Stack[-0x90]:1  local_90
; undefined4       Stack[-0x30]:4  local_30
;
; Referenced Globals:
;   int g_DefaultStreamBufferSize = 0x1a4
;
; Called Functions:
;   crt_fstream.cpp_ifstream_constructor_FUN_005ff664
;   crt_fstream.cpp_ifstream_dtor_FUN_005ff856
;   crt_fstream.cpp_ofstream_constructor_FUN_005ff710
;   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043ec30
        ;   Label: support_codec.cpp_CCodec_processFiles_FUN_0043ec30
    PUSH ESI                            ; 0043ec31
    PUSH EDI                            ; 0043ec32
    PUSH EBP                            ; 0043ec33
    SUB ESP,0x100                       ; 0043ec34
    MOV EBX,dword ptr [ESP + 0x114]     ; 0043ec3a
    MOV EDX,dword ptr [0x00665c50]      ; 0043ec41 | g_DefaultStreamBufferSize
    PUSH EDX                            ; 0043ec47
    PUSH 0x101                          ; 0043ec48
    MOV ECX,dword ptr [ESP + 0x120]     ; 0043ec4d
    PUSH ECX                            ; 0043ec54
    PUSH 0x0                            ; 0043ec55
    LEA EAX,[ESP + 0x10]                ; 0043ec57
    PUSH EAX                            ; 0043ec5b
    CALL crt_fstream.cpp_ifstream_constructor_FUN_005ff664 ; 0043ec5c
        ;   XREF to: 005ff664 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_ifstream_constructor_FUN_005ff664(ifstream * this_ptr, int ctor_flags, int fd, char * buffer, ...)
    ADD ESP,0x14                        ; 0043ec61
    MOV ESI,dword ptr [ESP + 0x64]      ; 0043ec64
    TEST ESI,ESI                        ; 0043ec68
    JNZ 0x0043ed1d                      ; 0043ec6a
        ;   XREF to: 0043ed1d (CONDITIONAL_JUMP)  ; LAB_0043ed1d
    MOV EDI,dword ptr [0x00665c50]      ; 0043ec70 | g_DefaultStreamBufferSize
    PUSH EDI                            ; 0043ec76
    PUSH 0x112                          ; 0043ec77
    MOV EBP,dword ptr [ESP + 0x124]     ; 0043ec7c
    PUSH EBP                            ; 0043ec83
    PUSH ESI                            ; 0043ec84
    LEA EAX,[ESP + 0x90]                ; 0043ec85
    PUSH EAX                            ; 0043ec8c
    CALL crt_fstream.cpp_ofstream_constructor_FUN_005ff710 ; 0043ec8d
        ;   XREF to: 005ff710 (UNCONDITIONAL_CALL)  ; void crt_fstream.cpp_ofstream_constructor_FUN_005ff710(ofstream * this_ptr, int ctor_flags, int fd, int mode, ...)
    ADD ESP,0x14                        ; 0043ec92
    CMP dword ptr [ESP + 0xe0],0x0      ; 0043ec95
    JNZ 0x0043ed27                      ; 0043ec9d
        ;   XREF to: 0043ed27 (CONDITIONAL_JUMP)  ; LAB_0043ed27
    PUSH EBX                            ; 0043eca3
    MOV EAX,dword ptr [EBX]             ; 0043eca4
    CALL dword ptr [EAX + 0x4]          ; 0043eca6
    ADD ESP,0x4                         ; 0043eca9
    LEA EAX,[ESP + 0xc4]                ; 0043ecac
    PUSH EAX                            ; 0043ecb3
    LEA EAX,[ESP + 0x100]               ; 0043ecb4
    MOV EDX,0x7fffffff                  ; 0043ecbb
    PUSH EAX                            ; 0043ecc0
    LEA EAX,[ESP + 0x4c]                ; 0043ecc1
    MOV dword ptr [ESP + 0x104],EDX     ; 0043ecc5
    PUSH EAX                            ; 0043eccc
    MOV EDX,dword ptr [EBX]             ; 0043eccd
    PUSH EBX                            ; 0043eccf
    CALL dword ptr [EDX + 0x8]          ; 0043ecd0
    ADD ESP,0x10                        ; 0043ecd3
    MOV ESI,EAX                         ; 0043ecd6
    TEST EAX,EAX                        ; 0043ecd8
    JZ 0x0043eced                       ; 0043ecda
        ;   XREF to: 0043eced (CONDITIONAL_JUMP)  ; LAB_0043eced
    LEA EAX,[ESP + 0xc4]                ; 0043ecdc
    PUSH EAX                            ; 0043ece3
    MOV EDX,dword ptr [EBX]             ; 0043ece4
    PUSH EBX                            ; 0043ece6
    CALL dword ptr [EDX + 0xc]          ; 0043ece7
    ADD ESP,0x8                         ; 0043ecea
    PUSH 0x0                            ; 0043eced
        ;   Label: LAB_0043eced
    LEA EAX,[ESP + 0x84]                ; 0043ecef
    PUSH EAX                            ; 0043ecf6
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 0043ecf7
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043ecfc
    PUSH 0x0                            ; 0043ecff
    LEA EAX,[ESP + 0x4]                 ; 0043ed01
    PUSH EAX                            ; 0043ed05
    MOV EBX,ESI                         ; 0043ed06
    CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856 ; 0043ed08
        ;   XREF to: 005ff856 (UNCONDITIONAL_CALL)  ; ifstream * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint flags)
        ;   Label: LAB_0043ed08
    ADD ESP,0x8                         ; 0043ed0d
    MOV EAX,EBX                         ; 0043ed10
    ADD ESP,0x100                       ; 0043ed12
    POP EBP                             ; 0043ed18
    POP EDI                             ; 0043ed19
    POP ESI                             ; 0043ed1a
    POP EBX                             ; 0043ed1b
    RET                                 ; 0043ed1c
    XOR EBX,EBX                         ; 0043ed1d
        ;   Label: LAB_0043ed1d
    PUSH EBX                            ; 0043ed1f
    LEA EAX,[ESP + 0x4]                 ; 0043ed20
    PUSH EAX                            ; 0043ed24
    JMP 0x0043ed08                      ; 0043ed25
        ;   XREF to: 0043ed08 (UNCONDITIONAL_JUMP)  ; LAB_0043ed08
    PUSH ESI                            ; 0043ed27
        ;   Label: LAB_0043ed27
    LEA EAX,[ESP + 0x84]                ; 0043ed28
    PUSH EAX                            ; 0043ed2f
    CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc ; 0043ed30
        ;   XREF to: 005ff7bc (UNCONDITIONAL_CALL)  ; ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043ed35
    PUSH ESI                            ; 0043ed38
    LEA EAX,[ESP + 0x4]                 ; 0043ed39
    PUSH EAX                            ; 0043ed3d
    XOR EBX,EBX                         ; 0043ed3e
    JMP 0x0043ed08                      ; 0043ed40
        ;   XREF to: 0043ed08 (UNCONDITIONAL_JUMP)  ; LAB_0043ed08

