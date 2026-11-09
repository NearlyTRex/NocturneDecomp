; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_FUN_00441140(CLZWCompress *this_ptr)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_0044f750 at 0044f909
;   core_game.cpp_FUN_004bda10 at 004bdda5
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_00440c50
;   support_codec.cpp_FUN_004400d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441140
        ;   Label: support_codec.cpp_FUN_00441140
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441141
    PUSH EBX                            ; 00441145
    ADD ESP,0x4                         ; 00441146
    MOV EDX,dword ptr [EBX + 0x24]      ; 00441149
    PUSH EDX                            ; 0044114c
    MOV ECX,dword ptr [EBX + 0x20]      ; 0044114d
    PUSH ECX                            ; 00441150
    LEA EAX,[EBX + 0x4]                 ; 00441151
    PUSH EAX                            ; 00441154
    CALL support_codec.cpp_CLZWDictionary_init_FUN_00440c50 ; 00441155
        ;   XREF to: 00440c50 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_00440c50(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits)
    ADD ESP,0xc                         ; 0044115a
    LEA EAX,[EBX + 0x18]                ; 0044115d
    PUSH EAX                            ; 00441160
    CALL support_codec.cpp_FUN_004400d0 ; 00441161
        ;   XREF to: 004400d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_FUN_004400d0(SBitBuffer * bit_buffer)
    MOV dword ptr [EBX + 0x30],0xffffffff ; 00441166
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0044116d
    MOV dword ptr [EBX + 0x38],0xffffffff ; 00441174
    ADD ESP,0x4                         ; 0044117b
    MOV dword ptr [EBX + 0x3c],0xffffffff ; 0044117e
    POP EBX                             ; 00441185
    RET                                 ; 00441186

