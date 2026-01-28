; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress *this_ptr,FILE *output_file)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   output_file
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 at 00452f2e
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e10a4
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
;   support_codec.cpp_flushBitBuffer_FUN_0043e7e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f440
        ;   Label: support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
    PUSH EDI                            ; 0043f441
    MOV EBX,dword ptr [ESP + 0xc]       ; 0043f442
    MOV EDX,dword ptr [EBX + 0x30]      ; 0043f446
    TEST EDX,EDX                        ; 0043f449
    JGE 0x0043f466                      ; 0043f44b
        ;   XREF to: 0043f466 (CONDITIONAL_JUMP)  ; LAB_0043f466
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043f44d
        ;   Label: LAB_0043f44d
    PUSH EDI                            ; 0043f451
    ADD EBX,0x18                        ; 0043f452
    PUSH EBX                            ; 0043f455
    CALL support_codec.cpp_flushBitBuffer_FUN_0043e7e0 ; 0043f456
        ;   XREF to: 0043e7e0 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_flushBitBuffer_FUN_0043e7e0(SBitBuffer * bit_buffer, FILE * output_stream)
    MOV EAX,0x1                         ; 0043f45b
    ADD ESP,0x8                         ; 0043f460
    POP EDI                             ; 0043f463
    POP EBX                             ; 0043f464
    RET                                 ; 0043f465
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043f466
        ;   Label: LAB_0043f466
    PUSH ECX                            ; 0043f46a
    LEA EAX,[EBX + 0x18]                ; 0043f46b
    PUSH EAX                            ; 0043f46e
    PUSH EDX                            ; 0043f46f
    LEA EAX,[EBX + 0x4]                 ; 0043f470
    PUSH EAX                            ; 0043f473
    CALL support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170 ; 0043f474
        ;   XREF to: 0043f170 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary * this_ptr, int code_value, SBitBuffer * bit_buffer, FILE * output_stream)
    ADD ESP,0x10                        ; 0043f479
    MOV dword ptr [EBX + 0x30],0xffffffff ; 0043f47c
    JMP 0x0043f44d                      ; 0043f483
        ;   XREF to: 0043f44d (UNCONDITIONAL_JUMP)  ; LAB_0043f44d

