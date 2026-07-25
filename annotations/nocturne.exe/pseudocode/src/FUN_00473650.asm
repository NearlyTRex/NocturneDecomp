; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00473650(void)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; Referenced Globals:
;   undefined4 DOUBLE_0057eaae+4
;
; Called Functions:
;   FUN_00473190
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00473650
        ;   Label: FUN_00473650
    MOV EBP,ESP                         ; 00473651
    SUB ESP,0x24                        ; 00473653
    MOV EAX,dword ptr [EBP + 0xc]       ; 00473656
    FLD float ptr [0x0057eab2]          ; 00473659 | DOUBLE_0057eaae+4
    FLD float ptr [EAX]                 ; 0047365f
    FMUL ST1                            ; 00473661
    FSTP float ptr [EBP + -0xc]         ; 00473663
    FLD float ptr [EAX + 0x4]           ; 00473666
    FMUL ST1                            ; 00473669
    FSTP float ptr [EBP + -0x8]         ; 0047366b
    FLD float ptr [EAX + 0x8]           ; 0047366e
    FMUL ST1                            ; 00473671
    FSTP float ptr [EBP + -0x4]         ; 00473673
    FLD float ptr [EAX]                 ; 00473676
    FCHS                                ; 00473678
    FST float ptr [EBP + -0x24]         ; 0047367a
    FMUL ST1                            ; 0047367d
    FLD float ptr [EAX + 0x4]           ; 0047367f
    FCHS                                ; 00473682
    FST float ptr [EBP + -0x20]         ; 00473684
    FMUL ST2                            ; 00473687
    MOV EDX,dword ptr [EBP + 0x10]      ; 00473689
    FLD float ptr [EAX + 0x8]           ; 0047368c
    FCHS                                ; 0047368f
    FST float ptr [EBP + -0x1c]         ; 00473691
    FMULP ST3                           ; 00473694
    PUSH EDX                            ; 00473696
    LEA EDX,[EBP + -0xc]                ; 00473697
    MOV ECX,dword ptr [EBP + 0x8]       ; 0047369a
    PUSH EDX                            ; 0047369d
    LEA EAX,[EBP + -0x18]               ; 0047369e
    FXCH                                ; 004736a1
    FSTP float ptr [EBP + -0x18]        ; 004736a3
    PUSH EAX                            ; 004736a6
    FSTP float ptr [EBP + -0x14]        ; 004736a7
    PUSH ECX                            ; 004736aa
    FSTP float ptr [EBP + -0x10]        ; 004736ab
    CALL FUN_00473190                   ; 004736ae
        ;   XREF to: 00473190 (UNCONDITIONAL_CALL)  ; undefined FUN_00473190()
    ADD ESP,0x10                        ; 004736b3
    MOV ESP,EBP                         ; 004736b6
    POP EBP                             ; 004736b8
    RET                                 ; 004736b9

