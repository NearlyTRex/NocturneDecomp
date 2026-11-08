; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a1060(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f6cac
;
; Called Functions:
;   FUN_0044fd70
;   FUN_005899d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1060
        ;   Label: FUN_004a1060
    MOV EDX,dword ptr [ESP + 0x8]       ; 004a1061
    PUSH EDX                            ; 004a1065
    CALL FUN_005899d0                   ; 004a1066
        ;   XREF to: 005899d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005899d0()
    ADD ESP,0x4                         ; 004a106b
    PUSH 0x5d59c4                       ; 004a106e
    MOV EBX,EAX                         ; 004a1073
    ADD EAX,0x2b4                       ; 004a1075
    PUSH EAX                            ; 004a107a
    MOV dword ptr [EAX + -0x4],0x5f6cb4 ; 004a107b
    CALL FUN_0044fd70                   ; 004a1082
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x434],0x0     ; 004a1087
    MOV dword ptr [EBX + 0x438],0x0     ; 004a1091
    MOV dword ptr [EBX + 0x43c],0x5     ; 004a109b
    MOV dword ptr [EBX + 0x440],0x0     ; 004a10a5
    MOV dword ptr [EBX + 0x444],0x0     ; 004a10af
    FLD float ptr [0x005f6cac]          ; 004a10b9 | DAT_005f6cac
    MOV dword ptr [EBX + 0x448],0x0     ; 004a10bf
    ADD ESP,0x8                         ; 004a10c9
    MOV dword ptr [EBX + 0x6c4],0x0     ; 004a10cc
    MOV EAX,EBX                         ; 004a10d6
    FSTP float ptr [EBX + 0x6c0]        ; 004a10d8
    POP EBX                             ; 004a10de
    RET                                 ; 004a10df

