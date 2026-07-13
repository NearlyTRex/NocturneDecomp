; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3fc0(int param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_004f4630 at 004f464b
;   FUN_004f4e40 at 004f4e58
;
; Called Functions:
;   FUN_00565f70
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 004f3fc0
        ;   Label: FUN_004f3fc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f3fc2
    PUSH EDX                            ; 004f3fc6
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f3fc7
    PUSH ECX                            ; 004f3fcb
    CALL FUN_00565f70                   ; 004f3fcc
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined FUN_00565f70()
    ADD ESP,0xc                         ; 004f3fd1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3fd4
    MOV byte ptr [EAX + 0x13],0x0       ; 004f3fd8
    RET                                 ; 004f3fdc

