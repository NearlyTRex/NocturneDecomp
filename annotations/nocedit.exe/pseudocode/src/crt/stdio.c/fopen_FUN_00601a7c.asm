; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl FILE * crt_stdio.c_fopen_FUN_00601a7c(char * filename, char * mode)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
;
; XREF[2]:
;   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 at 0050fcd1
;   shape_memdbg.cpp_openFile_FUN_0050f7a0 at 0050f7e7
;
; Called Functions:
;   crt_stdio.c_fopenWithFlags_FUN_00601a20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601a7c
        ;   Label: crt_stdio.c_fopen_FUN_00601a7c
    PUSH 0x0                            ; 00601a7d
    MOV EDX,dword ptr [ESP + 0x10]      ; 00601a7f
    PUSH EDX                            ; 00601a83
    MOV EBX,dword ptr [ESP + 0x10]      ; 00601a84
    PUSH EBX                            ; 00601a88
    CALL crt_stdio.c_fopenWithFlags_FUN_00601a20 ; 00601a89
        ;   XREF to: 00601a20 (UNCONDITIONAL_CALL)  ; FILE * crt_stdio.c_fopenWithFlags_FUN_00601a20(char * filename, char * mode, int flags)
    ADD ESP,0xc                         ; 00601a8e
    POP EBX                             ; 00601a91
    RET                                 ; 00601a92

