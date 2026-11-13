; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool support_codec_cpp_FUN_004341e0(int *param_1,char *param_2,int *param_3)
;
;
; Called Functions:
;   support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80
;   support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10
;   support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004341e0
        ;   Label: support_codec.cpp_FUN_004341e0
    PUSH ESI                            ; 004341e1
    PUSH EDI                            ; 004341e2
    PUSH EBP                            ; 004341e3
    SUB ESP,0x18                        ; 004341e4
    MOV ESI,dword ptr [ESP + 0x34]      ; 004341e7
    MOV EDX,dword ptr [ESI]             ; 004341eb
    PUSH EDX                            ; 004341ed
    MOV ECX,dword ptr [ESP + 0x34]      ; 004341ee
    PUSH ECX                            ; 004341f2
    LEA EAX,[ESP + 0x8]                 ; 004341f3
    PUSH EAX                            ; 004341f7
    CALL support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80 ; 004341f8
        ;   XREF to: 0057de80 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_ctorOpen_FUN_0057de80(COutStreamMemory * this_ptr, char * buffer, int capacity)
    ADD ESP,0xc                         ; 004341fd
    MOV EAX,ESP                         ; 00434200
    PUSH EAX                            ; 00434202
    MOV EDI,dword ptr [ESP + 0x30]      ; 00434203
    MOV EBX,dword ptr [ESP + 0x30]      ; 00434207
    PUSH EDI                            ; 0043420b
    MOV EBX,dword ptr [EBX]             ; 0043420c
    CALL dword ptr [EBX + 0xc]          ; 0043420e
    ADD ESP,0x8                         ; 00434211
    MOV EBX,EAX                         ; 00434214
    MOV EAX,ESP                         ; 00434216
    PUSH EAX                            ; 00434218
    CALL support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0 ; 00434219
        ;   XREF to: 0057e0c0 (UNCONDITIONAL_CALL)  ; undefined4 support_trstream.cpp_COutStreamMemory_tell_FUN_0057e0c0(COutStreamMemory * this_ptr)
    MOV EBP,dword ptr [ESI]             ; 0043421e
    SUB EBP,EAX                         ; 00434220
    ADD ESP,0x4                         ; 00434222
    MOV dword ptr [ESI],EBP             ; 00434225
    CMP EBX,0x1                         ; 00434227
    SETZ AL                             ; 0043422a
    XOR EBX,EBX                         ; 0043422d
    PUSH 0x0                            ; 0043422f
    MOV BL,AL                           ; 00434231
    LEA EAX,[ESP + 0x4]                 ; 00434233
    PUSH EAX                            ; 00434237
    CALL support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10 ; 00434238
        ;   XREF to: 0057df10 (UNCONDITIONAL_CALL)  ; COutStreamMemory * support_trstream.cpp_COutStreamMemory_dtor_FUN_0057df10(COutStreamMemory * this_ptr, uint flags)
    ADD ESP,0x8                         ; 0043423d
    MOV EAX,EBX                         ; 00434240
    ADD ESP,0x18                        ; 00434242
    POP EBP                             ; 00434245
    POP EDI                             ; 00434246
    POP ESI                             ; 00434247
    POP EBX                             ; 00434248
    RET                                 ; 00434249

