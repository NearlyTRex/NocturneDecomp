; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_00439390(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00439370 at 00439376
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439390
        ;   Label: support_codec.cpp_CLZWDictionary_free_FUN_00439390
    MOV EBX,dword ptr [ESP + 0x8]       ; 00439391
    MOV EDX,dword ptr [EBX + 0x10]      ; 00439395
    TEST EDX,EDX                        ; 00439398
    JNZ 0x004393aa                      ; 0043939a
        ;   XREF to: 004393aa (CONDITIONAL_JUMP)  ; LAB_004393aa
    MOV dword ptr [EBX + 0xc],0x0       ; 0043939c
    MOV EAX,dword ptr [EBX + 0xc]       ; 004393a3
    MOV dword ptr [EBX],EAX             ; 004393a6
    POP EBX                             ; 004393a8
    RET                                 ; 004393a9
    PUSH EDX                            ; 004393aa
        ;   Label: LAB_004393aa
    CALL crt_unknown.c_FUN_005638d0     ; 004393ab
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004393b0
    MOV dword ptr [EBX + 0x10],0x0      ; 004393b3
    MOV dword ptr [EBX + 0xc],0x0       ; 004393ba
    MOV EAX,dword ptr [EBX + 0xc]       ; 004393c1
    MOV dword ptr [EBX],EAX             ; 004393c4
    POP EBX                             ; 004393c6
    RET                                 ; 004393c7

