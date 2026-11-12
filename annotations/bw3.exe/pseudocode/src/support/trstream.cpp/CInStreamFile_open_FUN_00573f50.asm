; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_CInStreamFile_open_FUN_00573f50(CInStreamFile *this_ptr,LPCSTR param_2,int param_3)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; LPCSTR           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; XREF[4]:
;   core_game.cpp_FUN_004bda10 at 004bdd1d
;   core_game.cpp_FUN_004bdfb0 at 004be282
;   engine_pod.cpp_FUN_00512fb0 at 005130e3
;   support_trstream.cpp_CInStreamFile_ctorOpen_FUN_00573920 at 00573981
;
; Referenced Globals:
;   void* PTR_CreateFileA_005b3524 = 001b3c7a
;   void* PTR_GetFileSize_005b35a0 = 001b3ec8
;
; Called Functions:
;   CreateFileA
;   GetFileSize
;   support_trstream.cpp_FUN_00573e00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00573f50
        ;   Label: support_trstream.cpp_CInStreamFile_open_FUN_00573f50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00573f51
    PUSH EBX                            ; 00573f55
    MOV EAX,dword ptr [EBX]             ; 00573f56
    CALL dword ptr [EAX + 0x24]         ; 00573f58
    ADD ESP,0x4                         ; 00573f5b
    PUSH 0x0                            ; 00573f5e
    PUSH 0x0                            ; 00573f60
    PUSH 0x3                            ; 00573f62
    PUSH 0x0                            ; 00573f64
    PUSH 0x1                            ; 00573f66
    PUSH 0x80000000                     ; 00573f68
    MOV EDX,dword ptr [ESP + 0x24]      ; 00573f6d
    PUSH EDX                            ; 00573f71
    MOV dword ptr [EBX + 0x10],0x0      ; 00573f72
    CALL dword ptr CS:[0x5b3524]        ; 00573f79 | PTR_CreateFileA_005b3524
    MOV dword ptr [EBX + 0x4],EAX       ; 00573f80
    TEST EAX,EAX                        ; 00573f83
    JNZ 0x00573f89                      ; 00573f85
        ;   XREF to: 00573f89 (CONDITIONAL_JUMP)  ; LAB_00573f89
    POP EBX                             ; 00573f87
    RET                                 ; 00573f88
    PUSH 0x0                            ; 00573f89
        ;   Label: LAB_00573f89
    PUSH EAX                            ; 00573f8b
    CALL dword ptr CS:[0x5b35a0]        ; 00573f8c | PTR_GetFileSize_005b35a0
    MOV dword ptr [EBX + 0x8],EAX       ; 00573f93
    TEST EAX,EAX                        ; 00573f96
    JL 0x00573fb1                       ; 00573f98
        ;   XREF to: 00573fb1 (CONDITIONAL_JUMP)  ; LAB_00573fb1
    PUSH EBX                            ; 00573f9a
    CALL support_trstream.cpp_FUN_00573e00 ; 00573f9b
        ;   XREF to: 00573e00 (UNCONDITIONAL_CALL)  ; undefined support_trstream.cpp_FUN_00573e00()
    ADD ESP,0x4                         ; 00573fa0
    MOV EAX,dword ptr [ESP + 0x10]      ; 00573fa3
    MOV dword ptr [EBX + 0x28],EAX      ; 00573fa7
    MOV EAX,0x1                         ; 00573faa
    POP EBX                             ; 00573faf
    RET                                 ; 00573fb0
    PUSH EBX                            ; 00573fb1
        ;   Label: LAB_00573fb1
    MOV EAX,dword ptr [EBX]             ; 00573fb2
    CALL dword ptr [EAX + 0x24]         ; 00573fb4
    ADD ESP,0x4                         ; 00573fb7
    XOR EAX,EAX                         ; 00573fba
    POP EBX                             ; 00573fbc
    RET                                 ; 00573fbd

