; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl support_codec_cpp_FUN_00442fb0(CLZWDictionary *this_ptr)
;
; Parameters:
; CLZWDictionary * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   support_codec.cpp_CLZWDictionary_dtor_FUN_00442f90 at 00442f96
;
; Called Functions:
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442fb0
        ;   Label: support_codec.cpp_FUN_00442fb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00442fb1
    MOV EDX,dword ptr [EBX + 0x10]      ; 00442fb5
    TEST EDX,EDX                        ; 00442fb8
    JNZ 0x00442fca                      ; 00442fba
        ;   XREF to: 00442fca (CONDITIONAL_JUMP)  ; LAB_00442fca
    MOV dword ptr [EBX + 0xc],0x0       ; 00442fbc
    MOV EAX,dword ptr [EBX + 0xc]       ; 00442fc3
    MOV dword ptr [EBX],EAX             ; 00442fc6
    POP EBX                             ; 00442fc8
    RET                                 ; 00442fc9
    PUSH EDX                            ; 00442fca
        ;   Label: LAB_00442fca
    CALL crt_unknown.c_FUN_005c09f0     ; 00442fcb
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 00442fd0
    MOV dword ptr [EBX + 0x10],0x0      ; 00442fd3
    MOV dword ptr [EBX + 0xc],0x0       ; 00442fda
    MOV EAX,dword ptr [EBX + 0xc]       ; 00442fe1
    MOV dword ptr [EBX],EAX             ; 00442fe4
    POP EBX                             ; 00442fe6
    RET                                 ; 00442fe7

