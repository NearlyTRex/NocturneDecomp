; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048bfd0(undefined4 *param_1)
;
;
; XREF[3]:
;   FUN_0048bfb0 at 0048bfb6
;   FUN_00495490 at 004954a9
;   FUN_004f7590 at 004f760a
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0048bfd0
        ;   Label: FUN_0048bfd0
    MOV dword ptr [EAX + 0xc84],0x0     ; 0048bfd4
    MOV dword ptr [EAX + 0x258c],0x0    ; 0048bfde
    MOV dword ptr [EAX + 0x3210],0x0    ; 0048bfe8
    MOV dword ptr [EAX + 0x337c],0x0    ; 0048bff2
    MOV dword ptr [EAX + 0x34e8],0x0    ; 0048bffc
    MOV dword ptr [EAX + 0x3ac8],0x0    ; 0048c006
    MOV dword ptr [EAX],0x0             ; 0048c010
    RET                                 ; 0048c016

