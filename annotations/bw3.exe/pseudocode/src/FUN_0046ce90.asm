; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0046ce90(void)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[55]:
;   FUN_004087f0 at 004087ff
;   FUN_0040f590 at 0040f5a5
;   FUN_00412c50 at 00412db9
;   FUN_0041f8e0 at 0041f940
;   FUN_0041f9f0 at 0041fa50
;   FUN_00445fa0 at 00445fb5
;   FUN_004540c0 at 004540d5
;   FUN_0045abd0 at 0045abe9
;   FUN_0045d170 at 0045d18d
;   FUN_0045d530 at 0045d56c
;   ... and 45 more
;
; Referenced Globals:
;   undefined4 DAT_005bc513
;
; Called Functions:
;   FUN_004037e0
;   FUN_005a3120
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0046ce90
        ;   Label: FUN_0046ce90
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046ce93
    FLD double ptr [0x005bc513]         ; 0046ce97 | DAT_005bc513
    FLD float ptr [EAX]                 ; 0046ce9d
    FMUL ST1                            ; 0046ce9f
    CALL FUN_005a3120                   ; 0046cea1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 0046cea6
    FLD float ptr [EAX + 0x4]           ; 0046ceaa
    FMUL ST1                            ; 0046cead
    CALL FUN_005a3120                   ; 0046ceaf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 0046ceb4
    FMUL float ptr [EAX + 0x8]          ; 0046ceb8
    MOV EAX,ESP                         ; 0046cebb
    CALL FUN_005a3120                   ; 0046cebd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    PUSH EAX                            ; 0046cec2
    FISTP dword ptr [ESP + 0x10]        ; 0046cec3
    CALL FUN_004037e0                   ; 0046cec7
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004037e0()
    ADD ESP,0x4                         ; 0046cecc
    ADD ESP,0x10                        ; 0046cecf
    RET                                 ; 0046ced2

