; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ad0c0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f7350
;   undefined4 DAT_005f7354
;   undefined4 DAT_005f7358
;   undefined4 DAT_005f735c
;   undefined4 DAT_005f7360
;   undefined4 DAT_005f7364
;   undefined4 DAT_01cb0638
;   undefined4 DAT_01cb063c
;   undefined4 DAT_01cb0640
;   undefined4 DAT_01cb0644
;   undefined4 DAT_01cb0648
;   undefined4 DAT_01cb064c
;   undefined4 DAT_01cb0650
;   undefined4 DAT_01cb0654
;   undefined4 DAT_01cb0658
;   ... and 6 more
;
; Called Functions:
;   FUN_0040c450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ad0c0
        ;   Label: FUN_004ad0c0
    PUSH ESI                            ; 004ad0c1
    PUSH EDI                            ; 004ad0c2
    PUSH EBP                            ; 004ad0c3
    FLD float ptr [0x005f7350]          ; 004ad0c4 | DAT_005f7350
    FMUL float ptr [0x005f7354]         ; 004ad0ca | DAT_005f7354
    FLD float ptr [0x005f7358]          ; 004ad0d0 | DAT_005f7358
    FMUL float ptr [0x005f735c]         ; 004ad0d6 | DAT_005f735c
    FLD float ptr [0x005f7360]          ; 004ad0dc | DAT_005f7360
    FMUL float ptr [0x005f7364]         ; 004ad0e2 | DAT_005f7364
    MOV EDX,0x3f028f5c                  ; 004ad0e8
    MOV ECX,0xbca3d70a                  ; 004ad0ed
    MOV EBX,0x3db851ec                  ; 004ad0f2
    MOV ESI,0x3e4ccccd                  ; 004ad0f7
    MOV EDI,0xbea147ae                  ; 004ad0fc
    PUSH 0x1cedf18                      ; 004ad101
    MOV EAX,0x3fc90fdb                  ; 004ad106
    XOR EBP,EBP                         ; 004ad10b
    PUSH 0x3                            ; 004ad10d
    MOV dword ptr [0x01cb0644],EDX      ; 004ad10f | DAT_01cb0644
    MOV dword ptr [0x01cb0648],ECX      ; 004ad115 | DAT_01cb0648
    MOV dword ptr [0x01cb064c],EBX      ; 004ad11b | DAT_01cb064c
    MOV dword ptr [0x01cb0650],ESI      ; 004ad121 | DAT_01cb0650
    MOV dword ptr [0x01cb0654],EDI      ; 004ad127 | DAT_01cb0654
    MOV dword ptr [0x01cb0658],EBP      ; 004ad12d | DAT_01cb0658
    MOV [0x01cb065c],EAX                ; 004ad133 | DAT_01cb065c
    MOV dword ptr [0x01cb0660],EBP      ; 004ad138 | DAT_01cb0660
    MOV dword ptr [0x01cb0670],EBP      ; 004ad13e | DAT_01cb0670
    FXCH ST2                            ; 004ad144
    FSTP float ptr [0x01cb0638]         ; 004ad146 | DAT_01cb0638
    FSTP float ptr [0x01cb063c]         ; 004ad14c | DAT_01cb063c
    PUSH 0x6163d4                       ; 004ad152
    FSTP float ptr [0x01cb0640]         ; 004ad157 | DAT_01cb0640
    PUSH 0x4ad290                       ; 004ad15d
    MOV ECX,0x3eb33333                  ; 004ad162
    MOV EBX,0x40133333                  ; 004ad167
    PUSH 0x5d6d7b                       ; 004ad16c
    MOV ESI,0x408ccccd                  ; 004ad171
    MOV dword ptr [0x01cb0664],ECX      ; 004ad176 | DAT_01cb0664
    PUSH 0x1cb06c8                      ; 004ad17c
    MOV dword ptr [0x01cb0668],EBX      ; 004ad181 | DAT_01cb0668
    MOV dword ptr [0x01cb066c],ESI      ; 004ad187 | DAT_01cb066c
    CALL FUN_0040c450                   ; 004ad18d
        ;   XREF to: 0040c450 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c450()
    ADD ESP,0x18                        ; 004ad192
    POP EBP                             ; 004ad195
    POP EDI                             ; 004ad196
    POP ESI                             ; 004ad197
    POP EBX                             ; 004ad198
    RET                                 ; 004ad199

