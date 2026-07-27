; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005638d0(undefined4 param_1)
;
;
; XREF[65]:
;   FUN_005674f8 at 00567505
;   FUN_00568658 at 0056866a
;   FUN_0056e230 at 0056e23b
;   FUN_0056e324 at 0056e353
;   FUN_0056e608 at 0056e640
;   FUN_0056e890 at 0056e8ea
;   FUN_00570f60 at 00571031
;   FUN_0057104c at 0057105e
;   FUN_00571280 at 005712b1
;   FUN_005712ec at 00571317
;   ... and 55 more
;
; Called Functions:
;   crt_unknown.c_FUN_005638e0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005638d0
        ;   Label: crt_unknown.c_FUN_005638d0
    PUSH EDX                            ; 005638d4
    CALL crt_unknown.c_FUN_005638e0     ; 005638d5
        ;   XREF to: 005638e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638e0()
    ADD ESP,0x4                         ; 005638da
    RET                                 ; 005638dd

