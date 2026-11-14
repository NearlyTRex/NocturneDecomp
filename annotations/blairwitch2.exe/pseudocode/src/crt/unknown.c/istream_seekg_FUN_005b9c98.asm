; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_unknown_c_istream_seekg_FUN_005b9c98(void *this_ptr,int offset)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
;
; XREF[1]:
;   engine_dosio.cpp_reopenFileStream_FUN_00460d30 at 00460df3
;
; Called Functions:
;   crt_unknown.c_FUN_005c0b85
;   crt_unknown.c_FUN_005c0c9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9c98
        ;   Label: crt_unknown.c_istream_seekg_FUN_005b9c98
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b9c99
    PUSH 0x1                            ; 005b9c9d
    PUSH EBX                            ; 005b9c9f
    CALL crt_unknown.c_FUN_005c0c9f     ; 005b9ca0
        ;   XREF to: 005c0c9f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0c9f()
    ADD ESP,0x8                         ; 005b9ca5
    TEST EAX,EAX                        ; 005b9ca8
    JNZ 0x005b9cb0                      ; 005b9caa
        ;   XREF to: 005b9cb0 (CONDITIONAL_JUMP)  ; LAB_005b9cb0
    MOV EAX,EBX                         ; 005b9cac
        ;   Label: LAB_005b9cac
    POP EBX                             ; 005b9cae
    RET                                 ; 005b9caf
    PUSH 0x1                            ; 005b9cb0
        ;   Label: LAB_005b9cb0
    MOV EAX,dword ptr [EBX]             ; 005b9cb2
    PUSH 0x0                            ; 005b9cb4
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b9cb6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b9cba
    PUSH ECX                            ; 005b9cbd
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005b9cbe
    PUSH EAX                            ; 005b9cc2
    MOV EDX,dword ptr [EAX + 0x28]      ; 005b9cc3
    CALL dword ptr [EDX + 0x18]         ; 005b9cc6
    ADD ESP,0x10                        ; 005b9cc9
    CMP EAX,-0x1                        ; 005b9ccc
    JNZ 0x005b9cac                      ; 005b9ccf
        ;   XREF to: 005b9cac (CONDITIONAL_JUMP)  ; LAB_005b9cac
    MOV EAX,dword ptr [EBX]             ; 005b9cd1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005b9cd3
    PUSH 0x2                            ; 005b9cd6
    ADD EAX,EBX                         ; 005b9cd8
    PUSH EAX                            ; 005b9cda
    CALL crt_unknown.c_FUN_005c0b85     ; 005b9cdb
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
    ADD ESP,0x8                         ; 005b9ce0
    MOV EAX,EBX                         ; 005b9ce3
    POP EBX                             ; 005b9ce5
    RET                                 ; 005b9ce6

