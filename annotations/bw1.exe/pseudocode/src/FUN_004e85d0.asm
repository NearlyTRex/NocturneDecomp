; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e85d0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00468950
;   FUN_005ad4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e85d0
        ;   Label: FUN_004e85d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e85d1
    PUSH EDX                            ; 004e85d5
    CALL FUN_005ad4c0                   ; 004e85d6
        ;   XREF to: 005ad4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad4c0()
    ADD ESP,0x4                         ; 004e85db
    PUSH 0x5e43a8                       ; 004e85de
    MOV EBX,EAX                         ; 004e85e3
    ADD EAX,0x158                       ; 004e85e5
    PUSH EAX                            ; 004e85ea
    MOV dword ptr [EAX + -0x4],0x601924 ; 004e85eb
    CALL FUN_00468950                   ; 004e85f2
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    MOV dword ptr [EBX + 0x2d8],0x0     ; 004e85f7
    MOV dword ptr [EBX + 0x2dc],0x1     ; 004e8601
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004e860b
    ADD ESP,0x8                         ; 004e8615
    MOV dword ptr [EBX + 0x2e8],0x42480000 ; 004e8618
    MOV EAX,EBX                         ; 004e8622
    MOV dword ptr [EBX + 0x2ec],0x0     ; 004e8624
    POP EBX                             ; 004e862e
    RET                                 ; 004e862f

