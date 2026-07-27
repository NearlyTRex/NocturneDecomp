; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_004f3f00(undefined4 param_1)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_FUN_004f4f90 at 004f50db
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f3f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f00
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3f01
    PUSH EBX                            ; 004f3f05
    CALL cockpit_pkbitmap.cpp_FUN_004f3f50 ; 004f3f06
        ;   XREF to: 004f3f50 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f3f50()
    ADD ESP,0x4                         ; 004f3f0b
    MOV EAX,EBX                         ; 004f3f0e
    POP EBX                             ; 004f3f10
    RET                                 ; 004f3f11

