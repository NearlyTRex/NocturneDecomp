; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLunlockFrame(void)
;
;
; Referenced Globals:
;   undefined4 DAT_100141f8
;   TerminatedCString s_Cannot_unlock_back_buffe_10016a30
;
; Called Functions:
;   FUN_10002340
;   FUN_10002c50
;
; *****************************************************************************

section .text

    CMP dword ptr [0x100141f8],0x0      ; 10002e60 | DAT_100141f8
        ;   Label: APIDLLunlockFrame
    JNZ 0x10002e6c                      ; 10002e67
        ;   XREF to: 10002e6c (CONDITIONAL_JUMP)  ; LAB_10002e6c
    XOR EAX,EAX                         ; 10002e69
    RET                                 ; 10002e6b
    MOV dword ptr [0x100141f8],0x0      ; 10002e6c | DAT_100141f8
        ;   Label: LAB_10002e6c
    CALL FUN_10002c50                   ; 10002e76
        ;   XREF to: 10002c50 (UNCONDITIONAL_CALL)  ; undefined FUN_10002c50()
    TEST EAX,EAX                        ; 10002e7b
    JNZ 0x10002e8c                      ; 10002e7d
        ;   XREF to: 10002e8c (CONDITIONAL_JUMP)  ; LAB_10002e8c
    PUSH 0x10016a30                     ; 10002e7f | = "Cannot unlock back buffer"
    CALL FUN_10002340                   ; 10002e84
        ;   XREF to: 10002340 (UNCONDITIONAL_CALL)  ; undefined FUN_10002340()
    ADD ESP,0x4                         ; 10002e89
    MOV EAX,0x1                         ; 10002e8c
        ;   Label: LAB_10002e8c
    RET                                 ; 10002e91

