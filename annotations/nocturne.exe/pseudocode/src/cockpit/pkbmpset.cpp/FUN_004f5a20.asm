; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbmpset_cpp_FUN_004f5a20(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   cockpit_pkbmpset.cpp_FUN_004f5a50 at 004f5afd
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_004f5320
;   cockpit_pkbmpset.cpp_FUN_004f59d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f5a20
        ;   Label: cockpit_pkbmpset.cpp_FUN_004f5a20
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f5a21
    PUSH EBX                            ; 004f5a25
    CALL cockpit_pkbitmap.cpp_FUN_004f5320 ; 004f5a26
        ;   XREF to: 004f5320 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_004f5320()
    ADD ESP,0x4                         ; 004f5a2b
    PUSH 0x0                            ; 004f5a2e
    MOV EDX,dword ptr [EBX + 0x24]      ; 004f5a30
    PUSH EDX                            ; 004f5a33
    MOV ECX,dword ptr [ESP + 0x14]      ; 004f5a34
    PUSH ECX                            ; 004f5a38
    LEA EAX,[EBX + 0x8]                 ; 004f5a39
    PUSH EAX                            ; 004f5a3c
    PUSH EBX                            ; 004f5a3d
    CALL cockpit_pkbmpset.cpp_FUN_004f59d0 ; 004f5a3e
        ;   XREF to: 004f59d0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_004f59d0()
    ADD ESP,0x14                        ; 004f5a43
    POP EBX                             ; 004f5a46
    RET                                 ; 004f5a47

