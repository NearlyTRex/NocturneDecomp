; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00568ab0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004625f0
;   FUN_0057ad70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568ab0
        ;   Label: FUN_00568ab0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00568ab1
    PUSH EDX                            ; 00568ab5
    CALL FUN_0057ad70                   ; 00568ab6
        ;   XREF to: 0057ad70 (UNCONDITIONAL_CALL)  ; undefined FUN_0057ad70()
    ADD ESP,0x4                         ; 00568abb
    PUSH 0x5d5ccc                       ; 00568abe
    MOV EBX,EAX                         ; 00568ac3
    ADD EAX,0x158                       ; 00568ac5
    PUSH EAX                            ; 00568aca
    MOV dword ptr [EAX + -0x4],0x5e5014 ; 00568acb
    CALL FUN_004625f0                   ; 00568ad2
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 00568ad7
    MOV dword ptr [EBX + 0x2dc],0x0     ; 00568ae1
    MOV dword ptr [EBX + 0x2e0],0xd     ; 00568aeb
    MOV dword ptr [EBX + 0x2e4],0x1     ; 00568af5
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 00568aff
    MOV dword ptr [EBX + 0x56c],0xa     ; 00568b09
    MOV dword ptr [EBX + 0x58c],0x23    ; 00568b13
    MOV dword ptr [EBX + 0x574],0x3     ; 00568b1d
    ADD ESP,0x8                         ; 00568b27
    MOV dword ptr [EBX + 0x57c],0x0     ; 00568b2a
    MOV EAX,EBX                         ; 00568b34
    MOV dword ptr [EBX + 0x578],0x2     ; 00568b36
    POP EBX                             ; 00568b40
    RET                                 ; 00568b41

