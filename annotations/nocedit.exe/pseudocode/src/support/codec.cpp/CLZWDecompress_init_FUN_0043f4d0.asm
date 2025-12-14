; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress * this_ptr)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044f6a0
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e15f0
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
;   support_codec.cpp_resetDictionary_FUN_0043e510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f4d0
        ;   Label: support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f4d1
    PUSH EBX                            ; 0043f4d5
    ADD ESP,0x4                         ; 0043f4d6
    MOV EDX,dword ptr [EBX + 0x24]      ; 0043f4d9
    PUSH EDX                            ; 0043f4dc
    MOV ECX,dword ptr [EBX + 0x20]      ; 0043f4dd
    PUSH ECX                            ; 0043f4e0
    LEA EAX,[EBX + 0x4]                 ; 0043f4e1
    PUSH EAX                            ; 0043f4e4
    CALL support_codec.cpp_CLZWDictionary_init_FUN_0043ee60 ; 0043f4e5
        ;   XREF to: 0043ee60 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_init_FUN_0043ee60(CLZWDictionary * this_ptr, int new_dict_size, int new_num_bits, int normal_code_width, ...)
    ADD ESP,0xc                         ; 0043f4ea
    LEA EAX,[EBX + 0x18]                ; 0043f4ed
    PUSH EAX                            ; 0043f4f0
    CALL support_codec.cpp_resetDictionary_FUN_0043e510 ; 0043f4f1
        ;   XREF to: 0043e510 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_resetDictionary_FUN_0043e510(CLZWDictionary * dict)
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0043f4f6
    ADD ESP,0x4                         ; 0043f4fd
    MOV dword ptr [EBX + 0x28],0xffffffff ; 0043f500
    POP EBX                             ; 0043f507
    RET                                 ; 0043f508

