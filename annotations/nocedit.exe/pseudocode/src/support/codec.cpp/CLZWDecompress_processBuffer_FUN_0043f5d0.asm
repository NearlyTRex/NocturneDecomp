; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; byte *           Stack[0x8]:4   input
; int *            Stack[0xc]:4   input_length
; byte *           Stack[0x10]:4   output
; int *            Stack[0x14]:4   output_length
; int              Stack[0x18]:4   enable_callback
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 at 0044f6e9
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
;   support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
;   support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f5d0
        ;   Label: support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
    PUSH ESI                            ; 0043f5d1
    PUSH EDI                            ; 0043f5d2
    PUSH EBP                            ; 0043f5d3
    SUB ESP,0x8                         ; 0043f5d4
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043f5d7
    MOV EBP,dword ptr [ESP + 0x28]      ; 0043f5db
    MOV EDI,dword ptr [ESP + 0x2c]      ; 0043f5df
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043f5e3
    MOV dword ptr [ESP + 0x4],EBP       ; 0043f5e7
    MOV dword ptr [ESP],EAX             ; 0043f5eb
    CMP dword ptr [EBX + 0x2c],0x0      ; 0043f5ee
    JL 0x0043f633                       ; 0043f5f2
        ;   XREF to: 0043f633 (CONDITIONAL_JUMP)  ; LAB_0043f633
    LEA EAX,[ESP + 0x4]                 ; 0043f5f4
        ;   Label: LAB_0043f5f4
    PUSH EAX                            ; 0043f5f8
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0043f5f9
    PUSH EAX                            ; 0043f5fc
    LEA ESI,[EBX + 0x4]                 ; 0043f5fd
    PUSH ESI                            ; 0043f600
    CALL support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270 ; 0043f601
        ;   XREF to: 0043f270 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270(CLZWDictionary * this_ptr, int code, char * * buffer_ptr_ptr)
    MOV EDX,dword ptr [EBX + 0x28]      ; 0043f606
    ADD ESP,0xc                         ; 0043f609
    TEST EDX,EDX                        ; 0043f60c
    JL 0x0043f626                       ; 0043f60e
        ;   XREF to: 0043f626 (CONDITIONAL_JUMP)  ; LAB_0043f626
    PUSH EDX                            ; 0043f610
    PUSH EAX                            ; 0043f611
    PUSH ESI                            ; 0043f612
    CALL support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90 ; 0043f613
        ;   XREF to: 0043ef90 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary * this_ptr, int code, int parent_index)
    ADD ESP,0xc                         ; 0043f618
    TEST EAX,EAX                        ; 0043f61b
    JZ 0x0043f626                       ; 0043f61d
        ;   XREF to: 0043f626 (CONDITIONAL_JUMP)  ; LAB_0043f626
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0043f61f
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0043f626
        ;   Label: LAB_0043f626
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 0043f629
    MOV dword ptr [EBX + 0x28],EAX      ; 0043f630
    MOV ECX,dword ptr [ESP + 0x24]      ; 0043f633
        ;   Label: LAB_0043f633
    PUSH ECX                            ; 0043f637
    LEA EAX,[ESP + 0x4]                 ; 0043f638
    PUSH EAX                            ; 0043f63c
    LEA EAX,[EBX + 0x18]                ; 0043f63d
    PUSH EAX                            ; 0043f640
    LEA EAX,[EBX + 0x4]                 ; 0043f641
    PUSH EAX                            ; 0043f644
    CALL support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0 ; 0043f645
        ;   XREF to: 0043f0d0 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0(CLZWDictionary * this_ptr, SBitBuffer * bit_buffer, byte * output_stream, int * bytes_remaining, ...)
    ADD ESP,0x10                        ; 0043f64a
    MOV dword ptr [EBX + 0x2c],EAX      ; 0043f64d
    TEST EAX,EAX                        ; 0043f650
    JGE 0x0043f5f4                      ; 0043f652
        ;   XREF to: 0043f5f4 (CONDITIONAL_JUMP)  ; LAB_0043f5f4
    MOV EAX,dword ptr [ESP + 0x4]       ; 0043f654
    MOV ESI,dword ptr [EDI]             ; 0043f658
    SUB EAX,EBP                         ; 0043f65a
    SUB ESI,EAX                         ; 0043f65c
    MOV EBP,dword ptr [ESP + 0x30]      ; 0043f65e
    MOV dword ptr [EDI],ESI             ; 0043f662
    TEST EBP,EBP                        ; 0043f664
    JNZ 0x0043f675                      ; 0043f666
        ;   XREF to: 0043f675 (CONDITIONAL_JUMP)  ; LAB_0043f675
    MOV EAX,0x1                         ; 0043f668
        ;   Label: LAB_0043f668
    ADD ESP,0x8                         ; 0043f66d
    POP EBP                             ; 0043f670
    POP EDI                             ; 0043f671
    POP ESI                             ; 0043f672
    POP EBX                             ; 0043f673
    RET                                 ; 0043f674
    PUSH EDI                            ; 0043f675
        ;   Label: LAB_0043f675
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043f676
    PUSH EDX                            ; 0043f67a
    MOV EAX,dword ptr [EBX]             ; 0043f67b
    PUSH EBX                            ; 0043f67d
    CALL dword ptr [EAX + 0x20]         ; 0043f67e
    ADD ESP,0xc                         ; 0043f681
    TEST EAX,EAX                        ; 0043f684
    JNZ 0x0043f668                      ; 0043f686
        ;   XREF to: 0043f668 (CONDITIONAL_JUMP)  ; LAB_0043f668
    ADD ESP,0x8                         ; 0043f688
    POP EBP                             ; 0043f68b
    POP EDI                             ; 0043f68c
    POP ESI                             ; 0043f68d
    POP EBX                             ; 0043f68e
    RET                                 ; 0043f68f

