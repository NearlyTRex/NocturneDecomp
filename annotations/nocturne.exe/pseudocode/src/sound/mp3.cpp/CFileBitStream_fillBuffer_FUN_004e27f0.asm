; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_004e27f0(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_stdio.c_fread_FUN_005636d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e27f0
        ;   Label: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_004e27f0
    PUSH ESI                            ; 004e27f1
    PUSH EDI                            ; 004e27f2
    PUSH EBP                            ; 004e27f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004e27f4
    MOV ESI,dword ptr [EBX + 0x8]       ; 004e27f8
    MOV EDX,dword ptr [EBX + 0x10]      ; 004e27fb
    SUB ESI,0x2                         ; 004e27fe
    SUB ESI,EDX                         ; 004e2801
    TEST ESI,ESI                        ; 004e2803
    JL 0x004e2822                       ; 004e2805
        ;   XREF to: 004e2822 (CONDITIONAL_JUMP)  ; LAB_004e2822
    CMP dword ptr [EBX + 0x18],0x0      ; 004e2807
        ;   Label: LAB_004e2807
    JNZ 0x004e2822                      ; 004e280b
        ;   XREF to: 004e2822 (CONDITIONAL_JUMP)  ; LAB_004e2822
    MOV EDI,dword ptr [EBX + 0x28]      ; 004e280d
    XOR EAX,EAX                         ; 004e2810
    TEST EDI,EDI                        ; 004e2812
    JG 0x004e2827                       ; 004e2814
        ;   XREF to: 004e2827 (CONDITIONAL_JUMP)  ; LAB_004e2827
    CMP EAX,0x1                         ; 004e2816
        ;   Label: LAB_004e2816
    JNZ 0x004e2841                      ; 004e2819
        ;   XREF to: 004e2841 (CONDITIONAL_JUMP)  ; LAB_004e2841
    DEC dword ptr [EBX + 0x28]          ; 004e281b
    TEST ESI,ESI                        ; 004e281e
    JGE 0x004e2807                      ; 004e2820
        ;   XREF to: 004e2807 (CONDITIONAL_JUMP)  ; LAB_004e2807
    POP EBP                             ; 004e2822
        ;   Label: LAB_004e2822
    POP EDI                             ; 004e2823
    POP ESI                             ; 004e2824
    POP EBX                             ; 004e2825
    RET                                 ; 004e2826
    MOV EBP,dword ptr [EBX]             ; 004e2827
        ;   Label: LAB_004e2827
    PUSH EBP                            ; 004e2829
    PUSH 0x1                            ; 004e282a
    MOV EDX,ESI                         ; 004e282c
    MOV EAX,dword ptr [EBX + 0x4]       ; 004e282e
    PUSH 0x1                            ; 004e2831
    ADD EAX,EDX                         ; 004e2833
    PUSH EAX                            ; 004e2835
    DEC ESI                             ; 004e2836
    CALL crt_stdio.c_fread_FUN_005636d0 ; 004e2837
        ;   XREF to: 005636d0 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fread_FUN_005636d0(void * buffer, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 004e283c
    JMP 0x004e2816                      ; 004e283f
        ;   XREF to: 004e2816 (UNCONDITIONAL_JUMP)  ; LAB_004e2816
    LEA EAX,[ESI + 0x1]                 ; 004e2841
        ;   Label: LAB_004e2841
    MOV dword ptr [EBX + 0x18],EAX      ; 004e2844
    TEST ESI,ESI                        ; 004e2847
    JGE 0x004e2807                      ; 004e2849
        ;   XREF to: 004e2807 (CONDITIONAL_JUMP)  ; LAB_004e2807
    POP EBP                             ; 004e284b
    POP EDI                             ; 004e284c
    POP ESI                             ; 004e284d
    POP EBX                             ; 004e284e
    RET                                 ; 004e284f

