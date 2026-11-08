; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00482070(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[14]:
;   FUN_0047d8c0 at 0047d918
;   FUN_00481fc0 at 00482000
;   FUN_00482c70 at 00482e6b
;   FUN_00482ea0 at 00482fec
;   FUN_00483020 at 004831b1
;   FUN_004aa810 at 004ab6d8
;   FUN_004b7f90 at 004b890b
;   FUN_004e94f0 at 004e9c36
;   FUN_004eae80 at 004ebd2a
;   FUN_004f7a20 at 004f7a5d
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482070
        ;   Label: FUN_00482070
    MOV EDX,dword ptr [ESP + 0x8]       ; 00482071
    MOV ECX,dword ptr [ESP + 0xc]       ; 00482075
    PUSH ECX                            ; 00482079
    MOV EBX,dword ptr [EDX]             ; 0048207a
    PUSH EBX                            ; 0048207c
    MOV EAX,dword ptr [EDX + 0xc]       ; 0048207d
    PUSH EDX                            ; 00482080
    CALL dword ptr [EAX + 0xc]          ; 00482081
    ADD ESP,0xc                         ; 00482084
    POP EBX                             ; 00482087
    RET                                 ; 00482088

