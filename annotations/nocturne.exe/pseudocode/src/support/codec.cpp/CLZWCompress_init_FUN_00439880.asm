; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWCompress_init_FUN_00439880(CLZWCompress *this_ptr)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_FUN_00446810 at 004469cc
;   core_game.cpp_FUN_004a3b90 at 004a3f1a
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_004393d0
;   support_codec.cpp_resetBitBuffer_FUN_00438a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439880
        ;   Label: support_codec.cpp_CLZWCompress_init_FUN_00439880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439881
    PUSH EBX                            ; 00439885
    ADD ESP,0x4                         ; 00439886
    MOV EDX,dword ptr [EBX + 0x24]      ; 00439889
    PUSH EDX                            ; 0043988c
    MOV ECX,dword ptr [EBX + 0x20]      ; 0043988d
    PUSH ECX                            ; 00439890
    LEA EAX,[EBX + 0x4]                 ; 00439891
    PUSH EAX                            ; 00439894
    CALL support_codec.cpp_CLZWDictionary_init_FUN_004393d0 ; 00439895
        ;   XREF to: 004393d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_004393d0(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits)
    ADD ESP,0xc                         ; 0043989a
    LEA EAX,[EBX + 0x18]                ; 0043989d
    PUSH EAX                            ; 004398a0
    CALL support_codec.cpp_resetBitBuffer_FUN_00438a90 ; 004398a1
        ;   XREF to: 00438a90 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetBitBuffer_FUN_00438a90(SBitBuffer * bit_buffer)
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004398a6
    ADD ESP,0x4                         ; 004398ad
    MOV dword ptr [EBX + 0x34],0xffffffff ; 004398b0
    POP EBX                             ; 004398b7
    RET                                 ; 004398b8

