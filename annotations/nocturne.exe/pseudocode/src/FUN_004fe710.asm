; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004fe710(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[2]:
;   FUN_0049ab50 at 0049abfb
;   FUN_004fe770 at 004fe7f3
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_01e56c20
;
; Called Functions:
;   FUN_00563a30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe710
        ;   Label: FUN_004fe710
    SUB ESP,0x8                         ; 004fe711
    MOV EDX,dword ptr [0x005b761c]      ; 004fe714 | DAT_005b761c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fe71a
    SUB EAX,EDX                         ; 004fe721
    SHL EAX,0x3                         ; 004fe723
    ADD EDX,EAX                         ; 004fe726
    SHL EDX,0x2                         ; 004fe728
    MOV EBX,0xb9                        ; 004fe72b
    MOV EAX,EDX                         ; 004fe730
    SAR EDX,0x1f                        ; 004fe732
    IDIV EBX                            ; 004fe735
    MOV ECX,dword ptr [0x005b7620]      ; 004fe737 | DAT_005b7620
    MOV EDX,ECX                         ; 004fe73d
    SUB EDX,EAX                         ; 004fe73f
    MOV EAX,EDX                         ; 004fe741
    SAR EDX,0x1f                        ; 004fe743
    SUB EAX,EDX                         ; 004fe746
    SAR EAX,0x1                         ; 004fe748
    MOV dword ptr [ESP + 0x4],EAX       ; 004fe74a
    FILD dword ptr [ESP + 0x4]          ; 004fe74e
    FMUL float ptr [0x01e56c20]         ; 004fe752 | DAT_01e56c20
    CALL FUN_00563a30                   ; 004fe758
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP]               ; 004fe75d
    MOV EAX,dword ptr [ESP]             ; 004fe760
    ADD ESP,0x8                         ; 004fe763
    POP EBX                             ; 004fe766
    RET                                 ; 004fe767

