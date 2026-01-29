; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl support_codec_cpp_CLZWCompress_process_FUN_0043f360 (CLZWCompress *this_ptr,_FILE *input_file,int byte_count,_FILE *output_file)
;
; Parameters:
; CLZWCompress *   Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   input_file
; int              Stack[0xc]:4   byte_count
; _FILE *          Stack[0x10]:4   output_file
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined1       Stack[-0x14]:1  local_14
;
; XREF[1]:
;   core_game.cpp_CGame_saveGame_FUN_004e0cd0 at 004e108c
;
; Called Functions:
;   crt_stdio.c_fgetc_outptr_FUN_005ff245
;   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
;   support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
;   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f360
        ;   Label: support_codec.cpp_CLZWCompress_process_FUN_0043f360
    PUSH ESI                            ; 0043f361
    PUSH EDI                            ; 0043f362
    PUSH EBP                            ; 0043f363
    SUB ESP,0x8                         ; 0043f364
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043f367
    LEA EAX,[EBX + 0x18]                ; 0043f36b
    MOV EBP,dword ptr [ESP + 0x24]      ; 0043f36e
    MOV dword ptr [ESP],EAX             ; 0043f372
    LEA EDI,[EBX + 0x4]                 ; 0043f375
    CMP dword ptr [EBP],0x1             ; 0043f378
        ;   Label: LAB_0043f378
    JGE 0x0043f3a7                      ; 0043f37c
        ;   XREF to: 0043f3a7 (CONDITIONAL_JUMP)  ; LAB_0043f3a7
    MOV EAX,0xffffffff                  ; 0043f37e
        ;   Label: LAB_0043f37e
    TEST EAX,EAX                        ; 0043f383
        ;   Label: LAB_0043f383
    JL 0x0043f431                       ; 0043f385
        ;   XREF to: 0043f431 (CONDITIONAL_JUMP)  ; LAB_0043f431
    MOV ESI,dword ptr [EBX + 0x28]      ; 0043f38b
    AND ESI,EAX                         ; 0043f38e
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043f390
    PUSH EAX                            ; 0043f393
    PUSH ESI                            ; 0043f394
    PUSH EDI                            ; 0043f395
    CALL support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50 ; 0043f396
        ;   XREF to: 0043ef50 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50(CLZWDictionary * this_ptr, int search_code, int start_index)
    ADD ESP,0xc                         ; 0043f39b
    TEST EAX,EAX                        ; 0043f39e
    JL 0x0043f3de                       ; 0043f3a0
        ;   XREF to: 0043f3de (CONDITIONAL_JUMP)  ; LAB_0043f3de
    MOV dword ptr [EBX + 0x30],EAX      ; 0043f3a2
    JMP 0x0043f378                      ; 0043f3a5
        ;   XREF to: 0043f378 (UNCONDITIONAL_JUMP)  ; LAB_0043f378
    LEA EAX,[ESP + 0x4]                 ; 0043f3a7
        ;   Label: LAB_0043f3a7
    PUSH EAX                            ; 0043f3ab
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043f3ac
    PUSH ECX                            ; 0043f3b0
    CALL crt_stdio.c_fgetc_outptr_FUN_005ff245 ; 0043f3b1
        ;   XREF to: 005ff245 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_outptr_FUN_005ff245(_FILE * stream, uchar * output_byte)
    ADD ESP,0x8                         ; 0043f3b6
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043f3b9
    MOV EAX,dword ptr [EAX]             ; 0043f3bd
    MOV ESI,dword ptr [ESP + 0x20]      ; 0043f3bf
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043f3c3
    LEA EAX,[ESI + EDX*0x1]             ; 0043f3c6
    CMP dword ptr [EAX + 0x10],0x0      ; 0043f3c9
    JNZ 0x0043f37e                      ; 0043f3cd
        ;   XREF to: 0043f37e (CONDITIONAL_JUMP)  ; LAB_0043f37e
    MOV ESI,dword ptr [EBP]             ; 0043f3cf
    DEC ESI                             ; 0043f3d2
    XOR EAX,EAX                         ; 0043f3d3
    MOV dword ptr [EBP],ESI             ; 0043f3d5
    MOV AL,byte ptr [ESP + 0x4]         ; 0043f3d8
    JMP 0x0043f383                      ; 0043f3dc
        ;   XREF to: 0043f383 (UNCONDITIONAL_JUMP)  ; LAB_0043f383
    MOV EDX,dword ptr [ESP + 0x28]      ; 0043f3de
        ;   Label: LAB_0043f3de
    PUSH EDX                            ; 0043f3e2
    MOV ECX,dword ptr [ESP + 0x4]       ; 0043f3e3
    PUSH ECX                            ; 0043f3e7
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043f3e8
    PUSH EAX                            ; 0043f3eb
    PUSH EDI                            ; 0043f3ec
    CALL support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170 ; 0043f3ed
        ;   XREF to: 0043f170 (UNCONDITIONAL_CALL)  ; void support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170(CLZWDictionary * this_ptr, int code_value, SBitBuffer * bit_buffer, _FILE * output_stream)
    MOV EDX,dword ptr [EBX + 0x34]      ; 0043f3f2
    ADD ESP,0x10                        ; 0043f3f5
    TEST EDX,EDX                        ; 0043f3f8
    JL 0x0043f420                       ; 0043f3fa
        ;   XREF to: 0043f420 (CONDITIONAL_JUMP)  ; LAB_0043f420
    PUSH EDX                            ; 0043f3fc
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0043f3fd
    PUSH EAX                            ; 0043f400
    PUSH EDI                            ; 0043f401
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90 ; 0043f402
        ;   XREF to: 0043ef90 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary * this_ptr, int code, int parent_index)
    ADD ESP,0xc                         ; 0043f407
    TEST EAX,EAX                        ; 0043f40a
    JZ 0x0043f420                       ; 0043f40c
        ;   XREF to: 0043f420 (CONDITIONAL_JUMP)  ; LAB_0043f420
    MOV dword ptr [EBX + 0x34],0xffffffff ; 0043f40e
    MOV dword ptr [EBX + 0x30],ESI      ; 0043f415
    MOV dword ptr [EBX + 0x2c],ESI      ; 0043f418
    JMP 0x0043f378                      ; 0043f41b
        ;   XREF to: 0043f378 (UNCONDITIONAL_JUMP)  ; LAB_0043f378
    MOV EAX,dword ptr [EBX + 0x30]      ; 0043f420
        ;   Label: LAB_0043f420
    MOV dword ptr [EBX + 0x34],EAX      ; 0043f423
    MOV dword ptr [EBX + 0x30],ESI      ; 0043f426
    MOV dword ptr [EBX + 0x2c],ESI      ; 0043f429
    JMP 0x0043f378                      ; 0043f42c
        ;   XREF to: 0043f378 (UNCONDITIONAL_JUMP)  ; LAB_0043f378
    MOV EAX,0x1                         ; 0043f431
        ;   Label: LAB_0043f431
    ADD ESP,0x8                         ; 0043f436
    POP EBP                             ; 0043f439
    POP EDI                             ; 0043f43a
    POP ESI                             ; 0043f43b
    POP EBX                             ; 0043f43c
    RET                                 ; 0043f43d

