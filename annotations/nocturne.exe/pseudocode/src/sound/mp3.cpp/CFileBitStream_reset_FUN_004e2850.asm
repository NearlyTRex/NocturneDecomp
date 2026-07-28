; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_mp3_cpp_CFileBitStream_reset_FUN_004e2850(undefined4 *param_1)
;
;
; Called Functions:
;   crt_stdio.c_fseek_FUN_0056582c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2850
        ;   Label: sound_mp3.cpp_CFileBitStream_reset_FUN_004e2850
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e2851
    PUSH 0x0                            ; 004e2855
    MOV EDX,dword ptr [EBX + 0x20]      ; 004e2857
    PUSH EDX                            ; 004e285a
    MOV ECX,dword ptr [EBX]             ; 004e285b
    PUSH ECX                            ; 004e285d
    CALL crt_stdio.c_fseek_FUN_0056582c ; 004e285e
        ;   XREF to: 0056582c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fseek_FUN_0056582c(_FILE * file, long offset, int whence)
    MOV dword ptr [EBX + 0x10],0x0      ; 004e2863
    MOV dword ptr [EBX + 0x14],0x0      ; 004e286a
    MOV dword ptr [EBX + 0xc],0x0       ; 004e2871
    MOV dword ptr [EBX + 0x18],0x0      ; 004e2878
    MOV dword ptr [EBX + 0x1c],0x0      ; 004e287f
    MOV EAX,dword ptr [EBX + 0x24]      ; 004e2886
    ADD ESP,0xc                         ; 004e2889
    MOV dword ptr [EBX + 0x28],EAX      ; 004e288c
    POP EBX                             ; 004e288f
    RET                                 ; 004e2890

