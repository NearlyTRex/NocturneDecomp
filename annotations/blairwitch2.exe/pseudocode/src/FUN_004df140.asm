; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004df140(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df140
        ;   Label: FUN_004df140
    MOV EBX,dword ptr [ESP + 0x8]       ; 004df141
    PUSH EBX                            ; 004df145
    CALL FUN_00408790                   ; 004df146
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004df14b
    ADD EAX,0x2b4                       ; 004df14e
    PUSH EAX                            ; 004df153
    CALL FUN_0044fc80                   ; 004df154
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 004df159
    LEA EBX,[EAX + 0xfffffd4c]          ; 004df15c
    PUSH 0x5dbbb0                       ; 004df162
    LEA EAX,[EBX + 0x2b4]               ; 004df167
    PUSH EAX                            ; 004df16d
    MOV dword ptr [EBX + 0x2b0],0x5f9054 ; 004df16e
    CALL FUN_0044fd70                   ; 004df178
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 004df17d
    MOV dword ptr [EBX + 0x430],0x1     ; 004df180
    MOV EAX,EBX                         ; 004df18a
    MOV dword ptr [EBX + 0x434],0x0     ; 004df18c
    POP EBX                             ; 004df196
    RET                                 ; 004df197

