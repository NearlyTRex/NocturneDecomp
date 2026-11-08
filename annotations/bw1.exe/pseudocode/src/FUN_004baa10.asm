; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004baa10(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004bab60 at 004bab71
;
; Referenced Globals:
;   void* PTR_FUN_00600944 = 004baad0
;
; Called Functions:
;   FUN_0040d0a0
;   FUN_004ba730
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004baa10
        ;   Label: FUN_004baa10
    PUSH EAX                            ; 004baa14
    CALL FUN_004ba730                   ; 004baa15
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba730()
    ADD ESP,0x4                         ; 004baa1a
    ADD EAX,0x18                        ; 004baa1d
    PUSH EAX                            ; 004baa20
    CALL FUN_0040d0a0                   ; 004baa21
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0a0()
    ADD ESP,0x4                         ; 004baa26
    MOV dword ptr [EAX + -0x4],0x600944 ; 004baa29 | PTR_FUN_00600944
    SUB EAX,0x18                        ; 004baa30
    RET                                 ; 004baa33

