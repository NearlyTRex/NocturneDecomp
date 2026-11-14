; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _istream * __cdecl crt_unknown_c_istream_seekg_FUN_005c2078(void *this_ptr,int offset)
;
; Parameters:
; void *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   offset
;
; XREF[1]:
;   engine_dosio.cpp_reopenFileStream_FUN_00479240 at 00479303
;
; Called Functions:
;   crt_unknown.c_FUN_005c8e45
;   crt_unknown.c_FUN_005c8f5f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2078
        ;   Label: crt_unknown.c_istream_seekg_FUN_005c2078
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c2079
    PUSH 0x1                            ; 005c207d
    PUSH EBX                            ; 005c207f
    CALL crt_unknown.c_FUN_005c8f5f     ; 005c2080
        ;   XREF to: 005c8f5f (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8f5f()
    ADD ESP,0x8                         ; 005c2085
    TEST EAX,EAX                        ; 005c2088
    JNZ 0x005c2090                      ; 005c208a
        ;   XREF to: 005c2090 (CONDITIONAL_JUMP)  ; LAB_005c2090
    MOV EAX,EBX                         ; 005c208c
        ;   Label: LAB_005c208c
    POP EBX                             ; 005c208e
    RET                                 ; 005c208f
    PUSH 0x1                            ; 005c2090
        ;   Label: LAB_005c2090
    MOV EAX,dword ptr [EBX]             ; 005c2092
    PUSH 0x0                            ; 005c2094
    MOV ECX,dword ptr [ESP + 0x14]      ; 005c2096
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c209a
    PUSH ECX                            ; 005c209d
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 005c209e
    PUSH EAX                            ; 005c20a2
    MOV EDX,dword ptr [EAX + 0x28]      ; 005c20a3
    CALL dword ptr [EDX + 0x18]         ; 005c20a6
    ADD ESP,0x10                        ; 005c20a9
    CMP EAX,-0x1                        ; 005c20ac
    JNZ 0x005c208c                      ; 005c20af
        ;   XREF to: 005c208c (CONDITIONAL_JUMP)  ; LAB_005c208c
    MOV EAX,dword ptr [EBX]             ; 005c20b1
    MOV EAX,dword ptr [EAX + 0x4]       ; 005c20b3
    PUSH 0x2                            ; 005c20b6
    ADD EAX,EBX                         ; 005c20b8
    PUSH EAX                            ; 005c20ba
    CALL crt_unknown.c_FUN_005c8e45     ; 005c20bb
        ;   XREF to: 005c8e45 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c8e45()
    ADD ESP,0x8                         ; 005c20c0
    MOV EAX,EBX                         ; 005c20c3
    POP EBX                             ; 005c20c5
    RET                                 ; 005c20c6

