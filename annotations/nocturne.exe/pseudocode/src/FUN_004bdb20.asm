; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bdb20(undefined4 param_1,undefined4 param_2,float param_3)
;
; Local Variables:
; undefined8       Stack[-0x6c]:8  local_6c
; undefined        Stack[-0x64]:1  local_64
;
; XREF[1]:
;   FUN_00528c80 at 00528d97
;
; Referenced Globals:
;   undefined4 DAT_00586741
;
; Called Functions:
;   FUN_004bd9a0
;   FUN_00563c90
;
; *****************************************************************************

section .text

    SUB ESP,0x64                        ; 004bdb20
        ;   Label: FUN_004bdb20
    FLD float ptr [ESP + 0x70]          ; 004bdb23
    SUB ESP,0x8                         ; 004bdb27
    FSTP double ptr [ESP]               ; 004bdb2a
    PUSH 0x586741                       ; 004bdb2d | DAT_00586741
    LEA EAX,[ESP + 0xc]                 ; 004bdb32
    PUSH EAX                            ; 004bdb36
    CALL FUN_00563c90                   ; 004bdb37
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0x10                        ; 004bdb3c
    MOV EAX,ESP                         ; 004bdb3f
    PUSH EAX                            ; 004bdb41
    MOV EDX,dword ptr [ESP + 0x70]      ; 004bdb42
    PUSH EDX                            ; 004bdb46
    MOV ECX,dword ptr [ESP + 0x70]      ; 004bdb47
    PUSH ECX                            ; 004bdb4b
    CALL FUN_004bd9a0                   ; 004bdb4c
        ;   XREF to: 004bd9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004bd9a0()
    ADD ESP,0xc                         ; 004bdb51
    ADD ESP,0x64                        ; 004bdb54
    RET                                 ; 004bdb57

