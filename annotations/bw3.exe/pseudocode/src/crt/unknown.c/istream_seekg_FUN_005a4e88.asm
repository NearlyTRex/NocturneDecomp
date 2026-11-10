; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_unknown_c_istream_seekg_FUN_005a4e88(void *this_ptr,int offset)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
;
; XREF[1]:
;   engine_dosio.cpp_reopenFileStream_FUN_00465a80 at 00465b43
;
; Called Functions:
;   crt_unknown.c_FUN_005abc85
;   crt_unknown.c_FUN_005abd9f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4e88
        ;   Label: crt_unknown.c_istream_seekg_FUN_005a4e88
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a4e89
    PUSH 0x1                            ; 005a4e8d
    PUSH EBX                            ; 005a4e8f
    CALL crt_unknown.c_FUN_005abd9f     ; 005a4e90
        ;   XREF to: 005abd9f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abd9f()
    ADD ESP,0x8                         ; 005a4e95
    TEST EAX,EAX                        ; 005a4e98
    JNZ 0x005a4ea0                      ; 005a4e9a
        ;   XREF to: 005a4ea0 (CONDITIONAL_JUMP)  ; LAB_005a4ea0
    MOV EAX,EBX                         ; 005a4e9c
        ;   Label: LAB_005a4e9c
    POP EBX                             ; 005a4e9e
    RET                                 ; 005a4e9f
    PUSH 0x1                            ; 005a4ea0
        ;   Label: LAB_005a4ea0
    MOV EAX,dword ptr [EBX]             ; 005a4ea2
    PUSH 0x0                            ; 005a4ea4
    MOV ECX,dword ptr [ESP + 0x14]      ; 005a4ea6
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a4eaa
    PUSH ECX                            ; 005a4ead
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005a4eae
    PUSH EAX                            ; 005a4eb2
    MOV EDX,dword ptr [EAX + 0x28]      ; 005a4eb3
    CALL dword ptr [EDX + 0x18]         ; 005a4eb6
    ADD ESP,0x10                        ; 005a4eb9
    CMP EAX,-0x1                        ; 005a4ebc
    JNZ 0x005a4e9c                      ; 005a4ebf
        ;   XREF to: 005a4e9c (CONDITIONAL_JUMP)  ; LAB_005a4e9c
    MOV EAX,dword ptr [EBX]             ; 005a4ec1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005a4ec3
    PUSH 0x2                            ; 005a4ec6
    ADD EAX,EBX                         ; 005a4ec8
    PUSH EAX                            ; 005a4eca
    CALL crt_unknown.c_FUN_005abc85     ; 005a4ecb
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abc85()
    ADD ESP,0x8                         ; 005a4ed0
    MOV EAX,EBX                         ; 005a4ed3
    POP EBX                             ; 005a4ed5
    RET                                 ; 005a4ed6

