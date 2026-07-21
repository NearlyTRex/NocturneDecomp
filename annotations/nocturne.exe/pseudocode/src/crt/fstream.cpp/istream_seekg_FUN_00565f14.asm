; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl crt_fstream_cpp_istream_seekg_FUN_00565f14(int *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004a4170 at 004a4462
;
; Called Functions:
;   FUN_0056b327
;   FUN_0056ce57
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565f14
        ;   Label: crt_fstream.cpp_istream_seekg_FUN_00565f14
    MOV EBX,dword ptr [ESP + 0x8]       ; 00565f15
    PUSH 0x1                            ; 00565f19
    PUSH EBX                            ; 00565f1b
    CALL FUN_0056ce57                   ; 00565f1c
        ;   XREF to: 0056ce57 (UNCONDITIONAL_CALL)  ; undefined FUN_0056ce57()
    ADD ESP,0x8                         ; 00565f21
    TEST EAX,EAX                        ; 00565f24
    JNZ 0x00565f2c                      ; 00565f26
        ;   XREF to: 00565f2c (CONDITIONAL_JUMP)  ; LAB_00565f2c
    MOV EAX,EBX                         ; 00565f28
        ;   Label: LAB_00565f28
    POP EBX                             ; 00565f2a
    RET                                 ; 00565f2b
    PUSH 0x1                            ; 00565f2c
        ;   Label: LAB_00565f2c
    MOV EAX,dword ptr [EBX]             ; 00565f2e
    PUSH 0x0                            ; 00565f30
    MOV ECX,dword ptr [ESP + 0x14]      ; 00565f32
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565f36
    PUSH ECX                            ; 00565f39
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 00565f3a
    PUSH EAX                            ; 00565f3e
    MOV EDX,dword ptr [EAX + 0x28]      ; 00565f3f
    CALL dword ptr [EDX + 0x18]         ; 00565f42
    ADD ESP,0x10                        ; 00565f45
    CMP EAX,-0x1                        ; 00565f48
    JNZ 0x00565f28                      ; 00565f4b
        ;   XREF to: 00565f28 (CONDITIONAL_JUMP)  ; LAB_00565f28
    MOV EAX,dword ptr [EBX]             ; 00565f4d
    MOV EAX,dword ptr [EAX + 0x4]       ; 00565f4f
    PUSH 0x2                            ; 00565f52
    ADD EAX,EBX                         ; 00565f54
    PUSH EAX                            ; 00565f56
    CALL FUN_0056b327                   ; 00565f57
        ;   XREF to: 0056b327 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b327()
    ADD ESP,0x8                         ; 00565f5c
    MOV EAX,EBX                         ; 00565f5f
    POP EBX                             ; 00565f61
    RET                                 ; 00565f62

