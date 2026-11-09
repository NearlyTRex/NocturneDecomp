; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_codec_cpp_FUN_00434a70(int param_1,int *param_2)
;
;
; XREF[1]:
;   core_game.cpp_FUN_004bbf70 at 004bc2bc
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_004343f0
;   support_codec.cpp_FUN_00434650
;   support_codec.cpp_FUN_004346d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434a70
        ;   Label: support_codec.cpp_FUN_00434a70
    PUSH ESI                            ; 00434a71
    MOV EBX,dword ptr [ESP + 0xc]       ; 00434a72
    MOV EDX,dword ptr [ESP + 0x10]      ; 00434a76
    MOV ECX,dword ptr [EBX + 0x2c]      ; 00434a7a
    TEST ECX,ECX                        ; 00434a7d
    JL 0x00434ad3                       ; 00434a7f
        ;   XREF to: 00434ad3 (CONDITIONAL_JUMP)  ; LAB_00434ad3
    MOV ESI,dword ptr [EBX + 0x30]      ; 00434a81
    LEA EAX,[EBX + 0x4]                 ; 00434a84
    TEST ESI,ESI                        ; 00434a87
    JGE 0x00434adb                      ; 00434a89
        ;   XREF to: 00434adb (CONDITIONAL_JUMP)  ; LAB_00434adb
    PUSH EDX                            ; 00434a8b
    PUSH ECX                            ; 00434a8c
    PUSH EAX                            ; 00434a8d
    CALL support_codec.cpp_FUN_00434650 ; 00434a8e
        ;   XREF to: 00434650 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_FUN_00434650()
    ADD ESP,0xc                         ; 00434a93
    CMP EAX,-0x1                        ; 00434a96
        ;   Label: LAB_00434a96
    JZ 0x00434ae9                       ; 00434a99
        ;   XREF to: 00434ae9 (CONDITIONAL_JUMP)  ; LAB_00434ae9
    TEST EAX,EAX                        ; 00434a9b
    JL 0x00434af1                       ; 00434a9d
        ;   XREF to: 00434af1 (CONDITIONAL_JUMP)  ; LAB_00434af1
    MOV ECX,dword ptr [EBX + 0x28]      ; 00434a9f
    MOV dword ptr [EBX + 0x30],0xffffffff ; 00434aa2
    TEST ECX,ECX                        ; 00434aa9
    JL 0x00434ac6                       ; 00434aab
        ;   XREF to: 00434ac6 (CONDITIONAL_JUMP)  ; LAB_00434ac6
    PUSH ECX                            ; 00434aad
    PUSH EAX                            ; 00434aae
    LEA EAX,[EBX + 0x4]                 ; 00434aaf
    PUSH EAX                            ; 00434ab2
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_004343f0 ; 00434ab3
        ;   XREF to: 004343f0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_addNode_FUN_004343f0(CLZWDictionary * this_ptr, int code, int parent_index)
    ADD ESP,0xc                         ; 00434ab8
    TEST EAX,EAX                        ; 00434abb
    JZ 0x00434ac6                       ; 00434abd
        ;   XREF to: 00434ac6 (CONDITIONAL_JUMP)  ; LAB_00434ac6
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00434abf
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00434ac6
        ;   Label: LAB_00434ac6
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00434ac9
    MOV dword ptr [EBX + 0x28],EAX      ; 00434ad0
    MOV EAX,0x1                         ; 00434ad3
        ;   Label: LAB_00434ad3
    POP ESI                             ; 00434ad8
    POP EBX                             ; 00434ad9
    RET                                 ; 00434ada
    PUSH EDX                            ; 00434adb
        ;   Label: LAB_00434adb
    PUSH ESI                            ; 00434adc
    PUSH ECX                            ; 00434add
    PUSH EAX                            ; 00434ade
    CALL support_codec.cpp_FUN_004346d0 ; 00434adf
        ;   XREF to: 004346d0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_FUN_004346d0(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, _istream * istream, int * bytes_remaining)
    ADD ESP,0x10                        ; 00434ae4
    JMP 0x00434a96                      ; 00434ae7
        ;   XREF to: 00434a96 (UNCONDITIONAL_JUMP)  ; LAB_00434a96
    MOV dword ptr [EBX + 0x30],EAX      ; 00434ae9
        ;   Label: LAB_00434ae9
    XOR EAX,EAX                         ; 00434aec
    POP ESI                             ; 00434aee
    POP EBX                             ; 00434aef
    RET                                 ; 00434af0
    MOV EDX,0xfffffffe                  ; 00434af1
        ;   Label: LAB_00434af1
    SUB EDX,EAX                         ; 00434af6
    MOV EAX,0x2                         ; 00434af8
    MOV dword ptr [EBX + 0x30],EDX      ; 00434afd
    POP ESI                             ; 00434b00
    POP EBX                             ; 00434b01
    RET                                 ; 00434b02

