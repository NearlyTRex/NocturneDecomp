; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_00439a30(int param_1)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_00443250 at 00443506
;   core_game.cpp_FUN_004a4170 at 004a44c1
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_004393d0
;   support_codec.cpp_resetBitBuffer_FUN_00438a90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439a30
        ;   Label: support_codec.cpp_CLZWDecompress_init_FUN_00439a30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439a31
    PUSH EBX                            ; 00439a35
    ADD ESP,0x4                         ; 00439a36
    MOV EDX,dword ptr [EBX + 0x24]      ; 00439a39
    PUSH EDX                            ; 00439a3c
    MOV ECX,dword ptr [EBX + 0x20]      ; 00439a3d
    PUSH ECX                            ; 00439a40
    LEA EAX,[EBX + 0x4]                 ; 00439a41
    PUSH EAX                            ; 00439a44
    CALL support_codec.cpp_CLZWDictionary_init_FUN_004393d0 ; 00439a45
        ;   XREF to: 004393d0 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_CLZWDictionary_init_FUN_004393d0()
    ADD ESP,0xc                         ; 00439a4a
    LEA EAX,[EBX + 0x18]                ; 00439a4d
    PUSH EAX                            ; 00439a50
    CALL support_codec.cpp_resetBitBuffer_FUN_00438a90 ; 00439a51
        ;   XREF to: 00438a90 (UNCONDITIONAL_CALL)  ; undefined support_codec.cpp_resetBitBuffer_FUN_00438a90()
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00439a56
    ADD ESP,0x4                         ; 00439a5d
    MOV dword ptr [EBX + 0x28],0xffffffff ; 00439a60
    POP EBX                             ; 00439a67
    RET                                 ; 00439a68

