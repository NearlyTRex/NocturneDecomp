; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl support_trstream_cpp_COutStreamFile_open_FUN_0057dd90(COutStreamFile *this_ptr,char *path,char *mode)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   path
; char *           Stack[0xc]:4   mode
;
; XREF[3]:
;   core_game.cpp_FUN_004bb9b0 at 004bbcd6
;   core_game.cpp_FUN_004bbf70 at 004bc255
;   support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0 at 0057dbc9
;
; Called Functions:
;   crt_stdio.c_fopen_FUN_005b910c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057dd90
        ;   Label: support_trstream.cpp_COutStreamFile_open_FUN_0057dd90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0057dd91
    PUSH EBX                            ; 0057dd95
    MOV EAX,dword ptr [EBX]             ; 0057dd96
    CALL dword ptr [EAX + 0x18]         ; 0057dd98
    ADD ESP,0x4                         ; 0057dd9b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0057dd9e
    PUSH EDX                            ; 0057dda2
    MOV ECX,dword ptr [ESP + 0x10]      ; 0057dda3
    PUSH ECX                            ; 0057dda7
    CALL crt_stdio.c_fopen_FUN_005b910c ; 0057dda8
        ;   XREF to: 005b910c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_fopen_FUN_005b910c(char * filename, char * mode)
    ADD ESP,0x8                         ; 0057ddad
    MOV dword ptr [EBX + 0x4],EAX       ; 0057ddb0
    TEST EAX,EAX                        ; 0057ddb3
    JZ 0x0057ddbe                       ; 0057ddb5
        ;   XREF to: 0057ddbe (CONDITIONAL_JUMP)  ; LAB_0057ddbe
    MOV EAX,0x1                         ; 0057ddb7
    POP EBX                             ; 0057ddbc
    RET                                 ; 0057ddbd
    PUSH EBX                            ; 0057ddbe
        ;   Label: LAB_0057ddbe
    MOV EAX,dword ptr [EBX]             ; 0057ddbf
    CALL dword ptr [EAX + 0x18]         ; 0057ddc1
    ADD ESP,0x4                         ; 0057ddc4
    XOR EAX,EAX                         ; 0057ddc7
    POP EBX                             ; 0057ddc9
    RET                                 ; 0057ddca

