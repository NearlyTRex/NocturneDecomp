; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004410f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_0044f750 at 0044f8f7
;   FUN_004bda10 at 004bdd95
;
; Referenced Globals:
;   undefined1* PTR_FUN_005dd464 = 00441ed0
;
; Called Functions:
;   FUN_00440800
;   FUN_00440bd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004410f0
        ;   Label: FUN_004410f0
    PUSH EAX                            ; 004410f4
    CALL FUN_00440800                   ; 004410f5
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; undefined FUN_00440800()
    ADD ESP,0x4                         ; 004410fa
    ADD EAX,0x4                         ; 004410fd
    PUSH EAX                            ; 00441100
    CALL FUN_00440bd0                   ; 00441101
        ;   XREF to: 00440bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00440bd0()
    ADD ESP,0x4                         ; 00441106
    SUB EAX,0x4                         ; 00441109
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044110c
    MOV dword ptr [EAX + 0x20],EDX      ; 00441110
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441113
    MOV dword ptr [EAX + 0x24],EDX      ; 00441117
    MOV EDX,0xffffffff                  ; 0044111a
    MOV CL,byte ptr [EAX + 0x24]        ; 0044111f
    MOV dword ptr [EAX],0x5dd464        ; 00441122 | PTR_FUN_005dd464
    SHL EDX,CL                          ; 00441128
    MOV dword ptr [EAX + 0x28],EDX      ; 0044112a
    NOT EDX                             ; 0044112d
    MOV dword ptr [EAX + 0x28],EDX      ; 0044112f
    RET                                 ; 00441132

