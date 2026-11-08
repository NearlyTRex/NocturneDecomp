; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00443920(int param_1,int *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789ABCDEFGHJKLM_00610d70
;
; Called Functions:
;   FUN_004425e0
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00443920
        ;   Label: FUN_00443920
    MOV EAX,ESP                         ; 00443923
    PUSH EAX                            ; 00443925
    MOV EAX,dword ptr [ESP + 0xc]       ; 00443926
    ADD EAX,0x4                         ; 0044392a
    PUSH EAX                            ; 0044392d
    CALL FUN_004425e0                   ; 0044392e
        ;   XREF to: 004425e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004425e0()
    ADD ESP,0x8                         ; 00443933
    CMP dword ptr [ESP],0x0             ; 00443936
    JG 0x00443945                       ; 0044393a
        ;   XREF to: 00443945 (CONDITIONAL_JUMP)  ; LAB_00443945
    MOV EAX,0x1                         ; 0044393c
    ADD ESP,0x4                         ; 00443941
    RET                                 ; 00443944
    MOV EDX,dword ptr [ESP + 0xc]       ; 00443945
        ;   Label: LAB_00443945
    MOV AL,byte ptr [EAX + 0x610d70]    ; 00443949 | = "!()*+0123456789ABCDEFGHJKLMNPQRSTUVWX..."
    MOV EDX,dword ptr [EDX]             ; 0044394f
    AND EAX,0xff                        ; 00443951
    PUSH EAX                            ; 00443956
    MOV ECX,dword ptr [ESP + 0x10]      ; 00443957
    PUSH ECX                            ; 0044395b
    CALL dword ptr [EDX + 0x4]          ; 0044395c
    ADD ESP,0x8                         ; 0044395f
    MOV EAX,0x1                         ; 00443962
    ADD ESP,0x4                         ; 00443967
    RET                                 ; 0044396a

