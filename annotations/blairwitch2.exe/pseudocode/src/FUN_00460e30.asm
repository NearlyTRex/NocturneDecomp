; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00460e30(undefined4 param_1)
;
;
; XREF[5]:
;   FUN_00481870 at 00481a2a
;   FUN_00481a70 at 00481c29
;   FUN_00481ca0 at 00481d54
;   FUN_00481e20 at 00481f2f
;   FUN_0051c000 at 0051c082
;
; Called Functions:
;   FUN_00460f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460e30
        ;   Label: FUN_00460e30
    MOV EBX,dword ptr [ESP + 0x8]       ; 00460e31
    PUSH EBX                            ; 00460e35
    CALL FUN_00460f50                   ; 00460e36
        ;   XREF to: 00460f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f50()
    ADD ESP,0x4                         ; 00460e3b
    MOV EAX,EBX                         ; 00460e3e
    POP EBX                             ; 00460e40
    RET                                 ; 00460e41

