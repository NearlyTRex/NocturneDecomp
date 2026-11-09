; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004eb5b0(int param_1)
;
;
; XREF[4]:
;   core_doc.cpp_FUN_00469550 at 0046bcc8
;   core_doc.cpp_FUN_00474fc0 at 00474fe4
;   core_hero.cpp_FUN_004ec640 at 004ec65b
;   core_hero.cpp_FUN_004eca10 at 004eca17
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eb5b0
        ;   Label: core_hero.cpp_FUN_004eb5b0
    MOV dword ptr [EAX + 0x1ff64],0x0   ; 004eb5b4
    MOV dword ptr [EAX + 0x1ff68],0x0   ; 004eb5be
    MOV dword ptr [EAX + 0x1ff70],0x7149f2ca ; 004eb5c8
    MOV dword ptr [EAX + 0x1ff60],0x0   ; 004eb5d2
    RET                                 ; 004eb5dc

