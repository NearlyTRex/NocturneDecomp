; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00435100(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00438270 at 004382a6
;
; Referenced Globals:
;   undefined4 DAT_0059b3a0
;   undefined4 DAT_0059b3c0
;
; Called Functions:
;   FUN_00452590
;   FUN_005644a7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00435100
        ;   Label: FUN_00435100
    PUSH EAX                            ; 00435104
    CALL FUN_00452590                   ; 00435105
        ;   XREF to: 00452590 (UNCONDITIONAL_CALL)  ; undefined FUN_00452590()
    ADD ESP,0x4                         ; 0043510a
    PUSH 0x59b3a0                       ; 0043510d | DAT_0059b3a0
    PUSH 0x320                          ; 00435112
    ADD EAX,0x398                       ; 00435117
    PUSH EAX                            ; 0043511c
    CALL FUN_005644a7                   ; 0043511d
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    ADD ESP,0xc                         ; 00435122
    PUSH 0x59b3c0                       ; 00435125 | DAT_0059b3c0
    PUSH 0x32                           ; 0043512a
    ADD EAX,0x377b8                     ; 0043512c
    PUSH EAX                            ; 00435131
    CALL FUN_005644a7                   ; 00435132
        ;   XREF to: 005644a7 (UNCONDITIONAL_CALL)  ; undefined FUN_005644a7()
    MOV dword ptr [EAX + 0x2fac],0x0    ; 00435137
    MOV dword ptr [EAX + -0x4],0x0      ; 00435141
    ADD ESP,0xc                         ; 00435148
    MOV dword ptr [EAX + -0xc],0x0      ; 0043514b
    SUB EAX,0x37b50                     ; 00435152
    RET                                 ; 00435157

