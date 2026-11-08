; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0059b740(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_0059d120 at 0059d16e
;
; Referenced Globals:
;   undefined4 DAT_005d9bdc
;   undefined4 DAT_005d9be4
;
; Called Functions:
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 0059b740
        ;   Label: FUN_0059b740
    MOV EAX,dword ptr [ESP + 0xc]       ; 0059b743
    MOV dword ptr [ESP + 0x4],EAX       ; 0059b747
    FILD dword ptr [ESP + 0x4]          ; 0059b74b
    FMUL double ptr [0x005d9bdc]        ; 0059b74f | DAT_005d9bdc
    FMUL double ptr [0x005d9be4]        ; 0059b755 | DAT_005d9be4
    CALL FUN_005a3120                   ; 0059b75b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP]               ; 0059b760
    MOV EAX,dword ptr [ESP]             ; 0059b763
    ADD ESP,0x8                         ; 0059b766
    RET                                 ; 0059b769

