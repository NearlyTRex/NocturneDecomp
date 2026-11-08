; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568950(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_destActor_005d5cb5
;
; Called Functions:
;   FUN_0040b930
;   FUN_0041fb90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00568950
        ;   Label: FUN_00568950
    PUSH EDX                            ; 00568954
    CALL FUN_0041fb90                   ; 00568955
        ;   XREF to: 0041fb90 (UNCONDITIONAL_CALL)  ; undefined FUN_0041fb90()
    ADD ESP,0x4                         ; 0056895a
    MOV EAX,dword ptr [ESP + 0x4]       ; 0056895d
    PUSH 0x5d5cb5                       ; 00568961 | = "destActor"
    ADD EAX,0x6e8                       ; 00568966
    PUSH EAX                            ; 0056896b
    CALL FUN_0040b930                   ; 0056896c
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 00568971
    RET                                 ; 00568974

