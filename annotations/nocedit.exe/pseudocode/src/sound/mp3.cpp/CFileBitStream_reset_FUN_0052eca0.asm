; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_mp3_cpp_CFileBitStream_reset_FUN_0052eca0(CFileBitStream *this_ptr)
;
; Parameters:
; CFileBitStream * Stack[0x4]:4   this_ptr
;
; Called Functions:
;   crt_stdio.c_fseek_FUN_005ffacc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052eca0
        ;   Label: sound_mp3.cpp_CFileBitStream_reset_FUN_0052eca0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0052eca1
    PUSH 0x0                            ; 0052eca5
    MOV EDX,dword ptr [EBX + 0x20]      ; 0052eca7
    PUSH EDX                            ; 0052ecaa
    MOV ECX,dword ptr [EBX]             ; 0052ecab
    PUSH ECX                            ; 0052ecad
    CALL crt_stdio.c_fseek_FUN_005ffacc ; 0052ecae
        ;   XREF to: 005ffacc (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_005ffacc(_FILE * file, long offset, int whence)
    MOV dword ptr [EBX + 0x10],0x0      ; 0052ecb3
    MOV dword ptr [EBX + 0x14],0x0      ; 0052ecba
    MOV dword ptr [EBX + 0xc],0x0       ; 0052ecc1
    MOV dword ptr [EBX + 0x18],0x0      ; 0052ecc8
    MOV dword ptr [EBX + 0x1c],0x0      ; 0052eccf
    MOV EAX,dword ptr [EBX + 0x24]      ; 0052ecd6
    ADD ESP,0xc                         ; 0052ecd9
    MOV dword ptr [EBX + 0x28],EAX      ; 0052ecdc
    POP EBX                             ; 0052ecdf
    RET                                 ; 0052ece0

