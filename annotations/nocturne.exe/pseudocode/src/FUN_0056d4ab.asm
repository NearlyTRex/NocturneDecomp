; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056d4ab(undefined4 param_1)
;
;
; Referenced Globals:
;   void* PTR_FUN_005c1abc = 005671dc
;
; Called Functions:
;   FUN_005671dc
;   FUN_0056d488
;
; *****************************************************************************

section .text

    NOP                                 ; 0056d4ab
        ;   Label: FUN_0056d4ab
    CALL dword ptr [0x005c1abc]         ; 0056d4ac | PTR_FUN_005c1abc
    ADD EAX,0x14                        ; 0056d4b2
    PUSH EAX                            ; 0056d4b5
    MOV EDX,dword ptr [ESP + 0x8]       ; 0056d4b6
    PUSH EDX                            ; 0056d4ba
    CALL FUN_0056d488                   ; 0056d4bb
        ;   XREF to: 0056d488 (UNCONDITIONAL_CALL)  ; undefined FUN_0056d488()
    ADD ESP,0x8                         ; 0056d4c0
    RET                                 ; 0056d4c3

