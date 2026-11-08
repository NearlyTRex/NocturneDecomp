; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004997f0(int *param_1)
;
;
; XREF[1]:
;   FUN_00494fd0 at 00495016
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 004997f0
        ;   Label: FUN_004997f0
    MOV EAX,dword ptr [ECX]             ; 004997f4
    DEC EAX                             ; 004997f6
    PUSH EAX                            ; 004997f7
    PUSH 0x0                            ; 004997f8
    MOV EDX,dword ptr [ECX + 0xc]       ; 004997fa
    PUSH ECX                            ; 004997fd
    CALL dword ptr [EDX + 0x8]          ; 004997fe
    ADD ESP,0xc                         ; 00499801
    RET                                 ; 00499804

