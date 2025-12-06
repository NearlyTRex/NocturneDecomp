; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress * this_ptr, FILE * output_file)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   output_file
;
; XREF[1]:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1630
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f590
        ;   Label: support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043f591
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0043f595
    TEST EDX,EDX                        ; 0043f598
    JGE 0x0043f5a3                      ; 0043f59a | LAB_0043f5a3
        ;   XREF to: 0043f5a3 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0043f59c
    POP EBX                             ; 0043f5a1
    RET                                 ; 0043f5a2
    MOV ECX,dword ptr [ESP + 0xc]       ; 0043f5a3
        ;   Label: LAB_0043f5a3
    PUSH ECX                            ; 0043f5a7
    PUSH EDX                            ; 0043f5a8
    LEA EAX,[EBX + 0x4]                 ; 0043f5a9
    PUSH EAX                            ; 0043f5ac
    CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200 ; 0043f5ad | int support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200(CLZWDictionary * this_ptr, int code, FILE * output_file)
        ;   XREF to: 0043f200 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043f5b2
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0043f5b5
    MOV EAX,0x1                         ; 0043f5bc
    POP EBX                             ; 0043f5c1
    RET                                 ; 0043f5c2

