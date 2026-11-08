; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004a2140(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004a2290 at 004a22a1
;
; Referenced Globals:
;   void* PTR_FUN_005f6ee4 = 004a2200
;
; Called Functions:
;   FUN_0040d420
;   FUN_004a1e60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004a2140
        ;   Label: FUN_004a2140
    PUSH EAX                            ; 004a2144
    CALL FUN_004a1e60                   ; 004a2145
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; undefined FUN_004a1e60()
    ADD ESP,0x4                         ; 004a214a
    ADD EAX,0x18                        ; 004a214d
    PUSH EAX                            ; 004a2150
    CALL FUN_0040d420                   ; 004a2151
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d420()
    ADD ESP,0x4                         ; 004a2156
    MOV dword ptr [EAX + -0x4],0x5f6ee4 ; 004a2159 | PTR_FUN_005f6ee4
    SUB EAX,0x18                        ; 004a2160
    RET                                 ; 004a2163

