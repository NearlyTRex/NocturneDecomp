; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00434290(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00434270 at 00434276
;
; Called Functions:
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434290
        ;   Label: support_codec.cpp_CLZWDictionary_free_FUN_00434290
    MOV EBX,dword ptr [ESP + 0x8]       ; 00434291
    MOV EDX,dword ptr [EBX + 0x10]      ; 00434295
    TEST EDX,EDX                        ; 00434298
    JNZ 0x004342aa                      ; 0043429a
        ;   XREF to: 004342aa (CONDITIONAL_JUMP)  ; LAB_004342aa
    MOV dword ptr [EBX + 0xc],0x0       ; 0043429c
    MOV EAX,dword ptr [EBX + 0xc]       ; 004342a3
    MOV dword ptr [EBX],EAX             ; 004342a6
    POP EBX                             ; 004342a8
    RET                                 ; 004342a9
    PUSH EDX                            ; 004342aa
        ;   Label: LAB_004342aa
    CALL crt_unknown.c_FUN_005b86a0     ; 004342ab
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 004342b0
    MOV dword ptr [EBX + 0x10],0x0      ; 004342b3
    MOV dword ptr [EBX + 0xc],0x0       ; 004342ba
    MOV EAX,dword ptr [EBX + 0xc]       ; 004342c1
    MOV dword ptr [EBX],EAX             ; 004342c4
    POP EBX                             ; 004342c6
    RET                                 ; 004342c7

