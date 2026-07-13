; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004118a0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_00511a10
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004118a0
        ;   Label: FUN_004118a0
    CMP dword ptr [EAX + 0x15c],0x0     ; 004118a4
    JNZ 0x004118ae                      ; 004118ab
        ;   XREF to: 004118ae (CONDITIONAL_JUMP)  ; LAB_004118ae
    RET                                 ; 004118ad
    PUSH EAX                            ; 004118ae
        ;   Label: LAB_004118ae
    MOV ECX,dword ptr [0x005be368]      ; 004118af | DAT_005be368
    PUSH ECX                            ; 004118b5 | DAT_01e57284
    CALL FUN_00511a10                   ; 004118b6
        ;   XREF to: 00511a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00511a10()
    ADD ESP,0x8                         ; 004118bb
    RET                                 ; 004118be

