; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_00574150(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00440970 at 00440988
;   FUN_004409f0 at 00440a08
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e5ac4 = 005741d0
;
; Called Functions:
;   FUN_00572530
;   FUN_00574440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574150
        ;   Label: FUN_00574150
    PUSH ESI                            ; 00574151
    MOV EDX,dword ptr [ESP + 0xc]       ; 00574152
    PUSH EDX                            ; 00574156
    CALL FUN_00572530                   ; 00574157
        ;   XREF to: 00572530 (UNCONDITIONAL_CALL)  ; undefined FUN_00572530()
    ADD ESP,0x4                         ; 0057415c
    MOV dword ptr [EAX],0x5e5ac4        ; 0057415f | PTR_FUN_005e5ac4
    MOV ECX,dword ptr [ESP + 0x14]      ; 00574165
    MOV dword ptr [EAX + 0x4],0x0       ; 00574169
    PUSH ECX                            ; 00574170
    MOV ESI,dword ptr [ESP + 0x14]      ; 00574171
    MOV dword ptr [EAX + 0x8],0x0       ; 00574175
    PUSH ESI                            ; 0057417c
    MOV dword ptr [EAX + 0xc],0x0       ; 0057417d
    PUSH EAX                            ; 00574184
    MOV EBX,EAX                         ; 00574185
    MOV dword ptr [EAX + 0x10],0x0      ; 00574187
    CALL FUN_00574440                   ; 0057418e
        ;   XREF to: 00574440 (UNCONDITIONAL_CALL)  ; undefined FUN_00574440()
    ADD ESP,0xc                         ; 00574193
    MOV EAX,EBX                         ; 00574196
    POP ESI                             ; 00574198
    POP EBX                             ; 00574199
    RET                                 ; 0057419a

