; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress *this_ptr)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452b68
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e1064
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
;   support_codec.cpp_resetDictionary_FUN_0043e510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f320
        ;   Label: support_codec.cpp_CLZWCompress_init_FUN_0043f320
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f321
    PUSH EBX                            ; 0043f325
    ADD ESP,0x4                         ; 0043f326
    MOV EDX,dword ptr [EBX + 0x24]      ; 0043f329
    PUSH EDX                            ; 0043f32c
    MOV ECX,dword ptr [EBX + 0x20]      ; 0043f32d
    PUSH ECX                            ; 0043f330
    LEA EAX,[EBX + 0x4]                 ; 0043f331
    PUSH EAX                            ; 0043f334
    CALL support_codec.cpp_CLZWDictionary_init_FUN_0043ee60 ; 0043f335
        ;   XREF to: 0043ee60 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_0043ee60(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits, int normal_code_width, ...)
    ADD ESP,0xc                         ; 0043f33a
    LEA EAX,[EBX + 0x18]                ; 0043f33d
    PUSH EAX                            ; 0043f340
    CALL support_codec.cpp_resetDictionary_FUN_0043e510 ; 0043f341
        ;   XREF to: 0043e510 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetDictionary_FUN_0043e510(CLZWDictionary * dict)
    MOV dword ptr [EBX + 0x30],0xffffffff ; 0043f346
    ADD ESP,0x4                         ; 0043f34d
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0043f350
    POP EBX                             ; 0043f357
    RET                                 ; 0043f358

