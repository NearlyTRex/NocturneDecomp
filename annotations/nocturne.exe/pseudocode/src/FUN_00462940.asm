; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00462940(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_drone.dfm_0057de8b
;   undefined4 DAT_0059c6fc
;   undefined4 DAT_0059c700
;   undefined1* PTR_FUN_0059c714 = 004629b0
;
; Called Functions:
;   FUN_00479560
;   FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462940
        ;   Label: FUN_00462940
    MOV EDX,dword ptr [ESP + 0x8]       ; 00462941
    PUSH EDX                            ; 00462945
    CALL FUN_00479560                   ; 00462946
        ;   XREF to: 00479560 (UNCONDITIONAL_CALL)  ; undefined FUN_00479560()
    ADD ESP,0x4                         ; 0046294b
    PUSH 0x57de8b                       ; 0046294e | = "drone.dfm"
    MOV EBX,EAX                         ; 00462953
    ADD EAX,0x150                       ; 00462955
    PUSH EAX                            ; 0046295a
    MOV dword ptr [EAX + -0x4],0x59c714 ; 0046295b | PTR_FUN_0059c714
    CALL FUN_0051e0c0                   ; 00462962
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051e0c0()
    MOV dword ptr [EBX + 0x2dd4],0x3f400000 ; 00462967
    FLD float ptr [0x0059c6fc]          ; 00462971 | DAT_0059c6fc
    MOV dword ptr [EBX + 0x2dd8],0x3fc00000 ; 00462977
    FLD float ptr [0x0059c700]          ; 00462981 | DAT_0059c700
    MOV dword ptr [EBX + 0x2608],0x1    ; 00462987
    ADD ESP,0x8                         ; 00462991
    MOV dword ptr [EBX + 0x2434],0x42960000 ; 00462994
    MOV EAX,EBX                         ; 0046299e
    FXCH                                ; 004629a0
    FSTP float ptr [EBX + 0x2ddc]       ; 004629a2
    FSTP float ptr [EBX + 0x2de0]       ; 004629a8
    POP EBX                             ; 004629ae
    RET                                 ; 004629af

