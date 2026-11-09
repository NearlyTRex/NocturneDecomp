; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_FUN_004349d0(CLZWDecompress *this_ptr)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0043e930 at 0043ebe6
;   core_game.cpp_FUN_004bbf70 at 004bc284
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_004342d0
;   support_codec.cpp_FUN_00433760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004349d0
        ;   Label: support_codec.cpp_FUN_004349d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004349d1
    PUSH EBX                            ; 004349d5
    ADD ESP,0x4                         ; 004349d6
    MOV EDX,dword ptr [EBX + 0x24]      ; 004349d9
    PUSH EDX                            ; 004349dc
    MOV ECX,dword ptr [EBX + 0x20]      ; 004349dd
    PUSH ECX                            ; 004349e0
    LEA EAX,[EBX + 0x4]                 ; 004349e1
    PUSH EAX                            ; 004349e4
    CALL support_codec.cpp_CLZWDictionary_init_FUN_004342d0 ; 004349e5
        ;   XREF to: 004342d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_004342d0(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits)
    ADD ESP,0xc                         ; 004349ea
    LEA EAX,[EBX + 0x18]                ; 004349ed
    PUSH EAX                            ; 004349f0
    CALL support_codec.cpp_FUN_00433760 ; 004349f1
        ;   XREF to: 00433760 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_FUN_00433760(SBitBuffer * bit_buffer)
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 004349f6
    MOV dword ptr [EBX + 0x30],0xffffffff ; 004349fd
    ADD ESP,0x4                         ; 00434a04
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00434a07
    POP EBX                             ; 00434a0e
    RET                                 ; 00434a0f

