; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWCompress_init_FUN_004347c0(CLZWCompress *this_ptr)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_00441f50 at 00442109
;   core_game.cpp_FUN_004bb9b0 at 004bbd1c
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_004342d0
;   support_codec.cpp_resetBitBuffer_FUN_00433760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004347c0
        ;   Label: support_codec.cpp_CLZWCompress_init_FUN_004347c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004347c1
    PUSH EBX                            ; 004347c5
    ADD ESP,0x4                         ; 004347c6
    MOV EDX,dword ptr [EBX + 0x24]      ; 004347c9
    PUSH EDX                            ; 004347cc
    MOV ECX,dword ptr [EBX + 0x20]      ; 004347cd
    PUSH ECX                            ; 004347d0
    LEA EAX,[EBX + 0x4]                 ; 004347d1
    PUSH EAX                            ; 004347d4
    CALL support_codec.cpp_CLZWDictionary_init_FUN_004342d0 ; 004347d5
        ;   XREF to: 004342d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_004342d0(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits)
    ADD ESP,0xc                         ; 004347da
    LEA EAX,[EBX + 0x18]                ; 004347dd
    PUSH EAX                            ; 004347e0
    CALL support_codec.cpp_resetBitBuffer_FUN_00433760 ; 004347e1
        ;   XREF to: 00433760 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetBitBuffer_FUN_00433760(SBitBuffer * bit_buffer)
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004347e6
    MOV dword ptr [EBX + 0x34],0xffffffff ; 004347ed
    MOV dword ptr [EBX + 0x38],0xffffffff ; 004347f4
    ADD ESP,0x4                         ; 004347fb
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 004347fe
    POP EBX                             ; 00434805
    RET                                 ; 00434806

