; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_FUN_004436f0(CLZWDecompress *this_ptr)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044fff0 at 004502a6
;   core_game.cpp_FUN_004d6990 at 004d6ca1
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_00442ff0
;   support_codec.cpp_FUN_00442470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004436f0
        ;   Label: support_codec.cpp_FUN_004436f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004436f1
    PUSH EBX                            ; 004436f5
    ADD ESP,0x4                         ; 004436f6
    MOV EDX,dword ptr [EBX + 0x24]      ; 004436f9
    PUSH EDX                            ; 004436fc
    MOV ECX,dword ptr [EBX + 0x20]      ; 004436fd
    PUSH ECX                            ; 00443700
    LEA EAX,[EBX + 0x4]                 ; 00443701
    PUSH EAX                            ; 00443704
    CALL support_codec.cpp_CLZWDictionary_init_FUN_00442ff0 ; 00443705
        ;   XREF to: 00442ff0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_00442ff0(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits)
    ADD ESP,0xc                         ; 0044370a
    LEA EAX,[EBX + 0x18]                ; 0044370d
    PUSH EAX                            ; 00443710
    CALL support_codec.cpp_FUN_00442470 ; 00443711
        ;   XREF to: 00442470 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_FUN_00442470(SBitBuffer * bit_buffer)
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00443716
    MOV dword ptr [EBX + 0x30],0xffffffff ; 0044371d
    ADD ESP,0x4                         ; 00443724
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00443727
    POP EBX                             ; 0044372e
    RET                                 ; 0044372f

