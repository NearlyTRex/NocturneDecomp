; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270(CLZWDictionary *this_ptr,int code,char **buffer_ptr_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code
; char * *         Stack[0xc]:4   buffer_ptr_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 at 0043f601
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f270
        ;   Label: support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
    PUSH ESI                            ; 0043f271
    PUSH EDI                            ; 0043f272
    PUSH EBP                            ; 0043f273
    SUB ESP,0x4                         ; 0043f274
    MOV ECX,dword ptr [ESP + 0x18]      ; 0043f277
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0043f27b
    MOV EAX,EBX                         ; 0043f27f
    XOR ESI,ESI                         ; 0043f281
    SHL EAX,0x4                         ; 0043f283
        ;   Label: LAB_0043f283
    MOV EDX,dword ptr [ECX + 0x10]      ; 0043f286
    ADD EAX,EDX                         ; 0043f289
    INC ESI                             ; 0043f28b
    MOV EDX,dword ptr [EAX]             ; 0043f28c
    MOV EAX,dword ptr [EAX + 0x4]       ; 0043f28e
    MOV dword ptr [ESP],EDX             ; 0043f291
    TEST EAX,EAX                        ; 0043f294
    JGE 0x0043f283                      ; 0043f296
        ;   XREF to: 0043f283 (CONDITIONAL_JUMP)  ; LAB_0043f283
    MOV EDX,EBX                         ; 0043f298
    MOV EAX,ESI                         ; 0043f29a
    SHL EDX,0x4                         ; 0043f29c
        ;   Label: LAB_0043f29c
    MOV EBX,dword ptr [ECX + 0x10]      ; 0043f29f
    LEA EBP,[EBX + EDX*0x1]             ; 0043f2a2
    MOV EBX,dword ptr [ESP + 0x20]      ; 0043f2a5
    DEC EAX                             ; 0043f2a9
    MOV EBX,dword ptr [EBX]             ; 0043f2aa
    LEA EDI,[EBX + EAX*0x1]             ; 0043f2ac
    MOV BL,byte ptr [EBP]               ; 0043f2af
    MOV byte ptr [EDI],BL               ; 0043f2b2
    MOV EBX,dword ptr [ECX + 0x10]      ; 0043f2b4
    MOV EDX,dword ptr [EDX + EBX*0x1 + 0x4] ; 0043f2b7
    TEST EDX,EDX                        ; 0043f2bb
    JGE 0x0043f29c                      ; 0043f2bd
        ;   XREF to: 0043f29c (CONDITIONAL_JUMP)  ; LAB_0043f29c
    MOV EAX,dword ptr [ESP + 0x20]      ; 0043f2bf
    ADD dword ptr [EAX],ESI             ; 0043f2c3
    MOV EAX,dword ptr [ESP]             ; 0043f2c5
    ADD ESP,0x4                         ; 0043f2c8
    POP EBP                             ; 0043f2cb
    POP EDI                             ; 0043f2cc
    POP ESI                             ; 0043f2cd
    POP EBX                             ; 0043f2ce
    RET                                 ; 0043f2cf

