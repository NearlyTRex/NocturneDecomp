; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200(CLZWDictionary *this_ptr,int code,_ostream *ostream)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   code
; _ostream *       Stack[0xc]:4   ostream
;
; XREF[2]:
;   support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590 at 0043f5ad
;   support_codec.cpp_CLZWDecompress_process_FUN_0043f510 at 0043f52a
;
; Called Functions:
;   crt_iostream.cpp_ostream_put_FUN_005ff2d7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043f200
        ;   Label: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
    PUSH EDI                            ; 0043f201
    PUSH EBP                            ; 0043f202
    MOV EDI,dword ptr [ESP + 0x10]      ; 0043f203
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043f207
    MOV EBX,dword ptr [ESP + 0x14]      ; 0043f20b
    MOV EAX,dword ptr [EDI + 0x10]      ; 0043f20f
    SHL EBX,0x4                         ; 0043f212
    ADD EAX,EBX                         ; 0043f215
    MOV EDX,dword ptr [EAX + 0x4]       ; 0043f217
    TEST EDX,EDX                        ; 0043f21a
    JL 0x0043f246                       ; 0043f21c
        ;   XREF to: 0043f246 (CONDITIONAL_JUMP)  ; LAB_0043f246
    PUSH ESI                            ; 0043f21e
    PUSH EBP                            ; 0043f21f
    PUSH EDX                            ; 0043f220
    PUSH EDI                            ; 0043f221
    CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200 ; 0043f222
        ;   XREF to: 0043f200 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200(CLZWDictionary * this_ptr, int code, _ostream * ostream)
    MOV ESI,EAX                         ; 0043f227
    MOV EAX,dword ptr [EDI + 0x10]      ; 0043f229
    ADD EBX,EAX                         ; 0043f22c
    XOR EAX,EAX                         ; 0043f22e
    ADD ESP,0xc                         ; 0043f230
    MOV AL,byte ptr [EBX]               ; 0043f233
    PUSH EAX                            ; 0043f235
    PUSH EBP                            ; 0043f236
    CALL crt_iostream.cpp_ostream_put_FUN_005ff2d7 ; 0043f237
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_put_FUN_005ff2d7(_ostream * this_ptr, int character)
    ADD ESP,0x8                         ; 0043f23c
    MOV EAX,ESI                         ; 0043f23f
    POP ESI                             ; 0043f241
    POP EBP                             ; 0043f242
    POP EDI                             ; 0043f243
    POP EBX                             ; 0043f244
    RET                                 ; 0043f245
    MOV AL,byte ptr [EAX]               ; 0043f246
        ;   Label: LAB_0043f246
    AND EAX,0xff                        ; 0043f248
    PUSH EAX                            ; 0043f24d
    PUSH EBP                            ; 0043f24e
    CALL crt_iostream.cpp_ostream_put_FUN_005ff2d7 ; 0043f24f
        ;   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)  ; _ostream * crt_iostream.cpp_ostream_put_FUN_005ff2d7(_ostream * this_ptr, int character)
    MOV EAX,dword ptr [EDI + 0x10]      ; 0043f254
    ADD ESP,0x8                         ; 0043f257
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 0043f25a
    POP EBP                             ; 0043f25d
    POP EDI                             ; 0043f25e
    POP EBX                             ; 0043f25f
    RET                                 ; 0043f260

