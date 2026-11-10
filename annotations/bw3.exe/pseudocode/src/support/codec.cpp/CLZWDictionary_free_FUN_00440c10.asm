; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00440c10(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00440bf0 at 00440bf6
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440c10
        ;   Label: support_codec.cpp_CLZWDictionary_free_FUN_00440c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00440c11
    MOV EDX,dword ptr [EBX + 0x10]      ; 00440c15
    TEST EDX,EDX                        ; 00440c18
    JNZ 0x00440c2a                      ; 00440c1a
        ;   XREF to: 00440c2a (CONDITIONAL_JUMP)  ; LAB_00440c2a
    MOV dword ptr [EBX + 0xc],0x0       ; 00440c1c
    MOV EAX,dword ptr [EBX + 0xc]       ; 00440c23
    MOV dword ptr [EBX],EAX             ; 00440c26
    POP EBX                             ; 00440c28
    RET                                 ; 00440c29
    PUSH EDX                            ; 00440c2a
        ;   Label: LAB_00440c2a
    CALL crt_unknown.c_FUN_005a3770     ; 00440c2b
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 00440c30
    MOV dword ptr [EBX + 0x10],0x0      ; 00440c33
    MOV dword ptr [EBX + 0xc],0x0       ; 00440c3a
    MOV EAX,dword ptr [EBX + 0xc]       ; 00440c41
    MOV dword ptr [EBX],EAX             ; 00440c44
    POP EBX                             ; 00440c46
    RET                                 ; 00440c47

