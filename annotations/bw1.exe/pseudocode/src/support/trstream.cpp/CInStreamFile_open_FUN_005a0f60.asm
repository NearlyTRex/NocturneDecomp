; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_CInStreamFile_open_FUN_005a0f60(CInStreamFile *this_ptr,char *path,int binary_mode)
;
; Parameters:
; CInStreamFile *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; int              Stack[0xc]:4   binary_mode
;
; XREF[4]:
;   core_game.cpp_FUN_004d6420 at 004d6706
;   core_game.cpp_FUN_004d6990 at 004d6c3c
;   engine_pod.cpp_FUN_0053b250 at 0053b383
;   support_trstream.cpp_CInStreamFile_ctorOpen_FUN_005a0930 at 005a0991
;
; Referenced Globals:
;   void* PTR_CreateFileA_005d0528 = 001d0c8c
;   void* PTR_GetFileSize_005d05a0 = 001d0ec2
;
; Called Functions:
;   CreateFileA
;   GetFileSize
;   support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a0f60
        ;   Label: support_trstream.cpp_CInStreamFile_open_FUN_005a0f60
    MOV EBX,dword ptr [ESP + 0x8]       ; 005a0f61
    PUSH EBX                            ; 005a0f65
    MOV EAX,dword ptr [EBX]             ; 005a0f66
    CALL dword ptr [EAX + 0x24]         ; 005a0f68
    ADD ESP,0x4                         ; 005a0f6b
    PUSH 0x0                            ; 005a0f6e
    PUSH 0x0                            ; 005a0f70
    PUSH 0x3                            ; 005a0f72
    PUSH 0x0                            ; 005a0f74
    PUSH 0x1                            ; 005a0f76
    PUSH 0x80000000                     ; 005a0f78
    MOV EDX,dword ptr [ESP + 0x24]      ; 005a0f7d
    PUSH EDX                            ; 005a0f81
    MOV dword ptr [EBX + 0x10],0x0      ; 005a0f82
    CALL dword ptr CS:[0x5d0528]        ; 005a0f89 | PTR_CreateFileA_005d0528
    MOV dword ptr [EBX + 0x4],EAX       ; 005a0f90
    TEST EAX,EAX                        ; 005a0f93
    JNZ 0x005a0f99                      ; 005a0f95
        ;   XREF to: 005a0f99 (CONDITIONAL_JUMP)  ; LAB_005a0f99
    POP EBX                             ; 005a0f97
    RET                                 ; 005a0f98
    PUSH 0x0                            ; 005a0f99
        ;   Label: LAB_005a0f99
    PUSH EAX                            ; 005a0f9b
    CALL dword ptr CS:[0x5d05a0]        ; 005a0f9c | PTR_GetFileSize_005d05a0
    MOV dword ptr [EBX + 0x8],EAX       ; 005a0fa3
    TEST EAX,EAX                        ; 005a0fa6
    JL 0x005a0fc1                       ; 005a0fa8
        ;   XREF to: 005a0fc1 (CONDITIONAL_JUMP)  ; LAB_005a0fc1
    PUSH EBX                            ; 005a0faa
    CALL support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10 ; 005a0fab
        ;   XREF to: 005a0e10 (UNCONDITIONAL_CALL)  ; void support_trstream.cpp_CInStreamFile_allocBuffer_FUN_005a0e10(CInStreamFile * this_ptr)
    ADD ESP,0x4                         ; 005a0fb0
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a0fb3
    MOV dword ptr [EBX + 0x28],EAX      ; 005a0fb7
    MOV EAX,0x1                         ; 005a0fba
    POP EBX                             ; 005a0fbf
    RET                                 ; 005a0fc0
    PUSH EBX                            ; 005a0fc1
        ;   Label: LAB_005a0fc1
    MOV EAX,dword ptr [EBX]             ; 005a0fc2
    CALL dword ptr [EAX + 0x24]         ; 005a0fc4
    ADD ESP,0x4                         ; 005a0fc7
    XOR EAX,EAX                         ; 005a0fca
    POP EBX                             ; 005a0fcc
    RET                                 ; 005a0fcd

