; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00461070(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[23]:
;   FUN_004610d0 at 00461102
;   FUN_004611a0 at 004611c6
;   FUN_00461260 at 00461298
;   FUN_00481620 at 0048175c
;   FUN_00481870 at 004818fc
;   FUN_00481a70 at 00481afc
;   FUN_00481e20 at 00481e56
;   FUN_0048e7e0 at 0048f7e8
;   FUN_004a1870 at 004a1940
;   FUN_004a2170 at 004a21b1
;   ... and 13 more
;
; Called Functions:
;   FUN_005b9e58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00461070
        ;   Label: FUN_00461070
    PUSH ESI                            ; 00461071
    PUSH EDI                            ; 00461072
    MOV EDX,dword ptr [ESP + 0x20]      ; 00461073
    PUSH EDX                            ; 00461077
    MOV ECX,dword ptr [ESP + 0x20]      ; 00461078
    PUSH ECX                            ; 0046107c
    MOV EBX,dword ptr [ESP + 0x20]      ; 0046107d
    PUSH EBX                            ; 00461081
    MOV ESI,dword ptr [ESP + 0x20]      ; 00461082
    PUSH ESI                            ; 00461086
    MOV EDI,dword ptr [ESP + 0x20]      ; 00461087
    PUSH EDI                            ; 0046108b
    CALL FUN_005b9e58                   ; 0046108c
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9e58()
    ADD ESP,0x14                        ; 00461091
    POP EDI                             ; 00461094
    POP ESI                             ; 00461095
    POP EBX                             ; 00461096
    RET                                 ; 00461097

