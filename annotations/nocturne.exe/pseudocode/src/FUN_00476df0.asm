; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00476df0(void)
;
;
; XREF[2]:
;   FUN_00475470 at 004757c0
;   FUN_00476e10 at 00476e10
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476df0
        ;   Label: FUN_00476df0
    MOV EBX,dword ptr [0x005b761c]      ; 00476df1 | DAT_005b761c
    MOV ECX,0x30                        ; 00476df7
    MOV EDX,EBX                         ; 00476dfc
    MOV EAX,EBX                         ; 00476dfe
    SAR EDX,0x1f                        ; 00476e00
    IDIV ECX                            ; 00476e03
    POP EBX                             ; 00476e05
    RET                                 ; 00476e06

