; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_codec_cpp_CLZWDecompress_finalize_FUN_00439af0(CLZWDecompress *this_ptr,_ostream *ostream)
;
; Parameters:
; CLZWDecompress * Stack[0x4]:4   this_ptr
; _ostream *       Stack[0x8]:4   ostream
;
; XREF[1]:
;   core_game.cpp_FUN_004a4170 at 004a4501
;
; Called Functions:
;   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439af0
        ;   Label: support_codec.cpp_CLZWDecompress_finalize_FUN_00439af0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439af1
    MOV EDX,dword ptr [EBX + 0x2c]      ; 00439af5
    TEST EDX,EDX                        ; 00439af8
    JGE 0x00439b03                      ; 00439afa
        ;   XREF to: 00439b03 (CONDITIONAL_JUMP)  ; LAB_00439b03
    MOV EAX,0x1                         ; 00439afc
    POP EBX                             ; 00439b01
    RET                                 ; 00439b02
    MOV ECX,dword ptr [ESP + 0xc]       ; 00439b03
        ;   Label: LAB_00439b03
    PUSH ECX                            ; 00439b07
    PUSH EDX                            ; 00439b08
    LEA EAX,[EBX + 0x4]                 ; 00439b09
    PUSH EAX                            ; 00439b0c
    CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760 ; 00439b0d
        ;   XREF to: 00439760 (UNCONDITIONAL_CALL)  ; int support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_00439760(CLZWDictionary * this_ptr, int code, _ostream * ostream)
    ADD ESP,0xc                         ; 00439b12
    MOV dword ptr [EBX + 0x2c],0xffffffff ; 00439b15
    MOV EAX,0x1                         ; 00439b1c
    POP EBX                             ; 00439b21
    RET                                 ; 00439b22

