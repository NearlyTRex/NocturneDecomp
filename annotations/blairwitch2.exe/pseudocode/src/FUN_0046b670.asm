; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046b670(void)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[10]:
;   FUN_0044b020 at 0044b079
;   FUN_0044b960 at 0044bde4
;   FUN_00497800 at 00497cb0
;   FUN_00498ed0 at 00498f52
;   FUN_0049a500 at 0049a586
;   FUN_0049abd0 at 0049ad49
;   FUN_0049b380 at 0049b42d
;   FUN_0049f850 at 0049fe19
;   FUN_005341b0 at 0053420e
;   FUN_0058ad40 at 0058ad71
;
; Referenced Globals:
;   undefined4 DAT_005d15d3
;   undefined4 DAT_005d15db
;
; Called Functions:
;   FUN_004ea3e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b670
        ;   Label: FUN_0046b670
    PUSH EDI                            ; 0046b671
    PUSH EBP                            ; 0046b672
    MOV EBP,ESP                         ; 0046b673
    SUB ESP,0x1c                        ; 0046b675
    AND ESP,0xfffffff8                  ; 0046b678
    MOV EBX,ESI                         ; 0046b67b
    MOV ESI,ESP                         ; 0046b67d
    CALL FUN_004ea3e0                   ; 0046b67f
        ;   XREF to: 004ea3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea3e0()
    MOV EAX,dword ptr [ESP]             ; 0046b684
    MOV dword ptr [ESP + 0x18],EAX      ; 0046b687
    FLD double ptr [0x005d15d3]         ; 0046b68b | DAT_005d15d3
    FILD dword ptr [ESP + 0x18]         ; 0046b691
    FMUL ST1                            ; 0046b695
    MOV EAX,dword ptr [ESP + 0x4]       ; 0046b697
    FLD double ptr [0x005d15db]         ; 0046b69b | DAT_005d15db
    FXCH                                ; 0046b6a1
    FMUL ST1                            ; 0046b6a3
    MOV dword ptr [ESP + 0x18],EAX      ; 0046b6a5
    MOV EAX,dword ptr [ESP + 0x8]       ; 0046b6a9
    FILD dword ptr [ESP + 0x18]         ; 0046b6ad
    MOV dword ptr [ESP + 0x18],EAX      ; 0046b6b1
    FMUL ST3                            ; 0046b6b5
    FILD dword ptr [ESP + 0x18]         ; 0046b6b7
    FMULP ST4                           ; 0046b6bb
    FMUL ST2                            ; 0046b6bd
    FXCH ST3                            ; 0046b6bf
    FMULP ST2                           ; 0046b6c1
    MOV EDI,EBX                         ; 0046b6c3
    LEA ESI,[ESP + 0xc]                 ; 0046b6c5
    FSTP float ptr [ESP + 0xc]          ; 0046b6c9
    FXCH                                ; 0046b6cd
    FSTP float ptr [ESP + 0x14]         ; 0046b6cf
    FSTP float ptr [ESP + 0x10]         ; 0046b6d3
    MOVSD ES:EDI,ESI                    ; 0046b6d7
    MOVSD ES:EDI,ESI                    ; 0046b6d8
    MOVSD ES:EDI,ESI                    ; 0046b6d9
    MOV EAX,EBX                         ; 0046b6da
    MOV ESP,EBP                         ; 0046b6dc
    POP EBP                             ; 0046b6de
    POP EDI                             ; 0046b6df
    POP EBX                             ; 0046b6e0
    RET                                 ; 0046b6e1

