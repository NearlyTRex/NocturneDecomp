; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aa8c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Head_005f0b70
;   TerminatedCString s_Bip01_R_Hand_005f0b7b
;
; Called Functions:
;   FUN_00540e80
;   FUN_0059e6a0
;   FUN_005a8030
;   FUN_005a8050
;   FUN_005a80d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aa8c0
        ;   Label: FUN_005aa8c0
    PUSH ESI                            ; 005aa8c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005aa8c2
    PUSH EBX                            ; 005aa8c6
    CALL FUN_0059e6a0                   ; 005aa8c7
        ;   XREF to: 0059e6a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059e6a0()
    ADD ESP,0x4                         ; 005aa8cc
    PUSH 0x1                            ; 005aa8cf
    PUSH 0x5f0b70                       ; 005aa8d1 | = "Bip01 Head"
    MOV EDX,dword ptr [EBX + 0x113b0]   ; 005aa8d6
    PUSH EDX                            ; 005aa8dc
    CALL FUN_00540e80                   ; 005aa8dd
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005aa8e2
    PUSH 0x1                            ; 005aa8e5
    PUSH 0x5f0b7b                       ; 005aa8e7 | = "Bip01 R Hand"
    MOV ECX,dword ptr [EBX + 0x113b0]   ; 005aa8ec
    PUSH ECX                            ; 005aa8f2
    MOV dword ptr [EBX + 0x11850],EAX   ; 005aa8f3
    CALL FUN_00540e80                   ; 005aa8f9
        ;   XREF to: 00540e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00540e80()
    ADD ESP,0xc                         ; 005aa8fe
    MOV dword ptr [EBX + 0x11854],EAX   ; 005aa901
    PUSH 0x100                          ; 005aa907
    LEA ESI,[EBX + 0x154]               ; 005aa90c
    MOV EAX,dword ptr [EBX + 0x11850]   ; 005aa912
    PUSH ESI                            ; 005aa918
    MOV dword ptr [EBX + 0x10a24],EAX   ; 005aa919
    CALL FUN_005a8030                   ; 005aa91f
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8030()
    ADD ESP,0x8                         ; 005aa924
    PUSH EBX                            ; 005aa927
    PUSH ESI                            ; 005aa928
    CALL FUN_005a8050                   ; 005aa929
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8050()
    ADD ESP,0x8                         ; 005aa92e
    PUSH 0x0                            ; 005aa931
    PUSH ESI                            ; 005aa933
    CALL FUN_005a80d0                   ; 005aa934
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a80d0()
    ADD ESP,0x8                         ; 005aa939
    PUSH 0x100                          ; 005aa93c
    LEA ESI,[EBX + 0x264]               ; 005aa941
    PUSH ESI                            ; 005aa947
    CALL FUN_005a8030                   ; 005aa948
        ;   XREF to: 005a8030 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8030()
    ADD ESP,0x8                         ; 005aa94d
    PUSH EBX                            ; 005aa950
    PUSH ESI                            ; 005aa951
    CALL FUN_005a8050                   ; 005aa952
        ;   XREF to: 005a8050 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8050()
    ADD ESP,0x8                         ; 005aa957
    PUSH 0x0                            ; 005aa95a
    PUSH ESI                            ; 005aa95c
    CALL FUN_005a80d0                   ; 005aa95d
        ;   XREF to: 005a80d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a80d0()
    ADD ESP,0x8                         ; 005aa962
    POP ESI                             ; 005aa965
    POP EBX                             ; 005aa966
    RET                                 ; 005aa967

