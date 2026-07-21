; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004f3f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f00
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3f01
    PUSH EBX                            ; 004f3f05
    CALL FUN_004f3f50                   ; 004f3f06
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; undefined FUN_004f3f50()
    ADD ESP,0x4                         ; 004f3f0b
    MOV EAX,EBX                         ; 004f3f0e
    POP EBX                             ; 004f3f10
    RET                                 ; 004f3f11

