; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00473cb0(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[11]:
;   FUN_00470230 at 0047028a
;   FUN_00473c00 at 00473c40
;   FUN_004748b0 at 00474aab
;   FUN_0049da10 at 0049df1a
;   FUN_004a4b50 at 004a4f59
;   FUN_004d12e0 at 004d210b
;   FUN_004d2d00 at 004d3b17
;   FUN_004d9c20 at 004d9c5d
;   FUN_004febd0 at 004fece4
;   FUN_004ff2c0 at 00501011
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473cb0
        ;   Label: FUN_00473cb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00473cb1
    MOV ECX,dword ptr [ESP + 0xc]       ; 00473cb5
    PUSH ECX                            ; 00473cb9
    MOV EBX,dword ptr [EDX]             ; 00473cba
    PUSH EBX                            ; 00473cbc
    MOV EAX,dword ptr [EDX + 0xc]       ; 00473cbd
    PUSH EDX                            ; 00473cc0
    CALL dword ptr [EAX + 0xc]          ; 00473cc1
    ADD ESP,0xc                         ; 00473cc4
    POP EBX                             ; 00473cc7
    RET                                 ; 00473cc8

