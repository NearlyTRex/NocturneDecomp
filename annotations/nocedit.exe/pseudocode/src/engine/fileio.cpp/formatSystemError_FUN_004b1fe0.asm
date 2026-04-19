; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_fileio_cpp_formatSystemError_FUN_004b1fe0(char *dest_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   dest_buffer
;
; Referenced Globals:
;   TerminatedCString s_s_006260e7
;
; Called Functions:
;   crt_errno.c__errno_FUN_00601450
;   crt_stdio.c_sprintf_FUN_005fdbd0
;   crt_string.c_strerror_FUN_00601470
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b1fe0
        ;   Label: engine_fileio.cpp_formatSystemError_FUN_004b1fe0
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b1fe1
    CALL crt_errno.c__errno_FUN_00601450 ; 004b1fe5
        ;   XREF to: 00601450 (UNCONDITIONAL_CALL)  ; int * crt_errno.c__errno_FUN_00601450()
    MOV EDX,dword ptr [EAX]             ; 004b1fea
    PUSH EDX                            ; 004b1fec
    CALL crt_string.c_strerror_FUN_00601470 ; 004b1fed
        ;   XREF to: 00601470 (UNCONDITIONAL_CALL)  ; char * crt_string.c_strerror_FUN_00601470(int errnum)
    ADD ESP,0x4                         ; 004b1ff2
    TEST EAX,EAX                        ; 004b1ff5
    JNZ 0x004b1ffb                      ; 004b1ff7
        ;   XREF to: 004b1ffb (CONDITIONAL_JUMP)  ; LAB_004b1ffb
    POP ESI                             ; 004b1ff9
    RET                                 ; 004b1ffa
    PUSH EAX                            ; 004b1ffb
        ;   Label: LAB_004b1ffb
    PUSH 0x6260e7                       ; 004b1ffc | = "\n%s"
    XOR DL,DL                           ; 004b2001
    MOV AL,byte ptr [ESI]               ; 004b2003
        ;   Label: LAB_004b2003
    CMP AL,DL                           ; 004b2005
    JZ 0x004b201b                       ; 004b2007
        ;   XREF to: 004b201b (CONDITIONAL_JUMP)  ; LAB_004b201b
    CMP AL,0x0                          ; 004b2009
    JZ 0x004b2019                       ; 004b200b
        ;   XREF to: 004b2019 (CONDITIONAL_JUMP)  ; LAB_004b2019
    INC ESI                             ; 004b200d
    MOV AL,byte ptr [ESI]               ; 004b200e
    CMP AL,DL                           ; 004b2010
    JZ 0x004b201b                       ; 004b2012
        ;   XREF to: 004b201b (CONDITIONAL_JUMP)  ; LAB_004b201b
    INC ESI                             ; 004b2014
    CMP AL,0x0                          ; 004b2015
    JNZ 0x004b2003                      ; 004b2017
        ;   XREF to: 004b2003 (CONDITIONAL_JUMP)  ; LAB_004b2003
    SUB ESI,ESI                         ; 004b2019
        ;   Label: LAB_004b2019
    PUSH ESI                            ; 004b201b
        ;   Label: LAB_004b201b
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004b201c
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 004b2021
    POP ESI                             ; 004b2024
    RET                                 ; 004b2025

