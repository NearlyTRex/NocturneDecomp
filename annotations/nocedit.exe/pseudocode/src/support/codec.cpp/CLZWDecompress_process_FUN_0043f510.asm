; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDecompress_process_FUN_0043f510(CLZWDecompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; FILE *           Stack[0x8]:4   input_file
; int              Stack[0xc]:4   byte_count
; FILE *           Stack[0x10]:4   output_file
;
; XREF[1]:
;   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 at 004e1618
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
;   support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
;   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f510
        ;   Label: support_codec.cpp_CLZWDecompress_process_FUN_0043f510
    PUSH ESI                            ; 0043f511
    PUSH EBP                            ; 0043f512
    MOV EBX,dword ptr [ESP + 0x10]      ; 0043f513
    CMP dword ptr [EBX + 0x2c],0x0      ; 0043f517
    JL 0x0043f55c                       ; 0043f51b | LAB_0043f55c
        ;   XREF to: 0043f55c (CONDITIONAL_JUMP)
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0043f51d
        ;   Label: LAB_0043f51d
    PUSH EBP                            ; 0043f521
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0043f522
    PUSH EAX                            ; 0043f525
    LEA ESI,[EBX + 0x4]                 ; 0043f526
    PUSH ESI                            ; 0043f529
    CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200 ; 0043f52a | int support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200(CLZWDictionary * this_ptr, int code, FILE * output_file)
        ;   XREF to: 0043f200 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [EBX + 0x28]      ; 0043f52f
    ADD ESP,0xc                         ; 0043f532
    TEST EDX,EDX                        ; 0043f535
    JL 0x0043f54f                       ; 0043f537 | LAB_0043f54f
        ;   XREF to: 0043f54f (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0043f539
    PUSH EAX                            ; 0043f53a
    PUSH ESI                            ; 0043f53b
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90 ; 0043f53c | int support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary * this_ptr, int code, int parent_index)
        ;   XREF to: 0043ef90 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0043f541
    TEST EAX,EAX                        ; 0043f544
    JZ 0x0043f54f                       ; 0043f546 | LAB_0043f54f
        ;   XREF to: 0043f54f (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0043f548
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0043f54f
        ;   Label: LAB_0043f54f
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0043f552
    MOV dword ptr [EBX + 0x28],EAX      ; 0043f559
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043f55c
        ;   Label: LAB_0043f55c
    PUSH ECX                            ; 0043f560
    MOV ESI,dword ptr [ESP + 0x18]      ; 0043f561
    PUSH ESI                            ; 0043f565
    LEA EAX,[EBX + 0x18]                ; 0043f566
    PUSH EAX                            ; 0043f569
    LEA EAX,[EBX + 0x4]                 ; 0043f56a
    PUSH EAX                            ; 0043f56d
    CALL support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030 ; 0043f56e | int support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, FILE * input_file, int * bytes_remaining)
        ;   XREF to: 0043f030 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0043f573
    MOV dword ptr [EBX + 0x2c],EAX      ; 0043f576
    TEST EAX,EAX                        ; 0043f579
    JGE 0x0043f51d                      ; 0043f57b | LAB_0043f51d
        ;   XREF to: 0043f51d (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0043f57d
    POP EBP                             ; 0043f582
    POP ESI                             ; 0043f583
    POP EBX                             ; 0043f584
    RET                                 ; 0043f585

