; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00564e3d(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00564e98
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00564e3d
        ;   Label: FUN_00564e3d
    MOV EDX,dword ptr [ESP + 0x8]       ; 00564e41
    PUSH EDX                            ; 00564e45
    SUB EAX,0x48                        ; 00564e46
    PUSH EAX                            ; 00564e49
    CALL FUN_00564e98                   ; 00564e4a
        ;   XREF to: 00564e98 (UNCONDITIONAL_CALL)  ; undefined FUN_00564e98()
    ADD ESP,0x8                         ; 00564e4f
    RET                                 ; 00564e52

