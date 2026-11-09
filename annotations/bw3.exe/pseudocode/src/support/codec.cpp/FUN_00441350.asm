; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_FUN_00441350(CLZWDecompress *this_ptr)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044c130 at 0044c3e6
;   core_game.cpp_FUN_004bdfb0 at 004be2e7
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_00440c50
;   support_codec.cpp_FUN_004400d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00441350
        ;   Label: support_codec.cpp_FUN_00441350
    MOV EBX,dword ptr [ESP + 0x8]       ; 00441351
    PUSH EBX                            ; 00441355
    ADD ESP,0x4                         ; 00441356
    MOV EDX,dword ptr [EBX + 0x24]      ; 00441359
    PUSH EDX                            ; 0044135c
    MOV ECX,dword ptr [EBX + 0x20]      ; 0044135d
    PUSH ECX                            ; 00441360
    LEA EAX,[EBX + 0x4]                 ; 00441361
    PUSH EAX                            ; 00441364
    CALL support_codec.cpp_CLZWDictionary_init_FUN_00440c50 ; 00441365
        ;   XREF to: 00440c50 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_00440c50(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits)
    ADD ESP,0xc                         ; 0044136a
    LEA EAX,[EBX + 0x18]                ; 0044136d
    PUSH EAX                            ; 00441370
    CALL support_codec.cpp_FUN_004400d0 ; 00441371
        ;   XREF to: 004400d0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_FUN_004400d0(SBitBuffer * bit_buffer)
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00441376
    MOV dword ptr [EBX + 0x30],0xffffffff ; 0044137d
    ADD ESP,0x4                         ; 00441384
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00441387
    POP EBX                             ; 0044138e
    RET                                 ; 0044138f

