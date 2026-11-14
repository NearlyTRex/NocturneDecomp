; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hero_cpp_FUN_004cf200(int param_1)
;
;
; XREF[4]:
;   core_doc.cpp_CDoc_doHeroAction_FUN_0045ca30 at 0045ca54
;   core_doc.cpp_FUN_00450c60 at 00453137
;   core_hero.cpp_CHero_doHeroAction_FUN_004d03b0 at 004d03cb
;   core_hero.cpp_FUN_004d0780 at 004d0787
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf200
        ;   Label: core_hero.cpp_FUN_004cf200
    MOV dword ptr [EAX + 0x255f4],0x0   ; 004cf204
    MOV dword ptr [EAX + 0x255f8],0x0   ; 004cf20e
    MOV dword ptr [EAX + 0x25600],0x7149f2ca ; 004cf218
    MOV dword ptr [EAX + 0x255f0],0x0   ; 004cf222
    RET                                 ; 004cf22c

