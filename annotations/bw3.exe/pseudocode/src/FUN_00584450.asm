; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00584450(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[10]:
;   FUN_0042b450 at 0042b847
;   FUN_00431d10 at 00431e6c
;   FUN_00497290 at 0049744f
;   FUN_00512be0 at 00512cba
;   FUN_0051f360 at 0051f45f
;   FUN_005220d0 at 005224aa
;   FUN_0056c140 at 0056c2ac
;   FUN_0056ca00 at 0056cb0a
;   FUN_0057f440 at 0057f4f0
;   FUN_00595d20 at 00595dd0
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00584450
        ;   Label: FUN_00584450
    SUB ESP,0x14                        ; 00584451
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00584454
    MOV EAX,ESI                         ; 00584458
    MOV ECX,dword ptr [EDX + 0xc]       ; 0058445a
    MOV dword ptr [ESP + 0xc],ECX       ; 0058445d
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00584461
    MOV EDX,dword ptr [EDX + 0x2c]      ; 00584464
    MOV EDI,ESI                         ; 00584467
    MOV dword ptr [ESP + 0x10],EDX      ; 00584469
    MOV EDX,dword ptr [ESP + 0xc]       ; 0058446d
    MOV ESI,ESP                         ; 00584471
    MOV dword ptr [ESP],EDX             ; 00584473
    MOV EDX,dword ptr [ESP + 0x10]      ; 00584476
    MOV dword ptr [ESP + 0x4],ECX       ; 0058447a
    MOV dword ptr [ESP + 0x8],EDX       ; 0058447e
    MOVSD ES:EDI,ESI                    ; 00584482
    MOVSD ES:EDI,ESI                    ; 00584483
    MOVSD ES:EDI,ESI                    ; 00584484
    ADD ESP,0x14                        ; 00584485
    POP EDI                             ; 00584488
    RET                                 ; 00584489

