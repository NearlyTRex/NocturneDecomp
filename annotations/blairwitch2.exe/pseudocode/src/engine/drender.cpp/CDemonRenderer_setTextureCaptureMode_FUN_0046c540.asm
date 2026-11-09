; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540(CDemonRenderer *this_ptr,int enable_advanced_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_advanced_mode
;
; XREF[8]:
;   core_baron.cpp_FUN_00410670 at 004107d6
;   core_batman.cpp_FUN_00413c70 at 00413dd9
;   core_boneguy.cpp_FUN_00419b80 at 00419be3
;   core_dracbrid.cpp_FUN_00464ac0 at 00464c38
;   core_inv.cpp_FUN_004dbd80 at 004dc1e8
;   core_morph.cpp_CMorphModel_renderFaces_FUN_005b6c90 at 005b6ca4
;   core_shadow.cpp_FUN_0053e6c0 at 0053e797
;   core_vessel.cpp_FUN_00585810 at 00585925
;
; Referenced Globals:
;   undefined4 DAT_01ba5cc4
;   undefined4 DAT_01ba5cc8
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046c540
        ;   Label: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046c540
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046c544
    TEST ECX,ECX                        ; 0046c547
    JZ 0x0046c553                       ; 0046c549
        ;   XREF to: 0046c553 (CONDITIONAL_JUMP)  ; LAB_0046c553
    MOV dword ptr [EDX + 0x1c],0x0      ; 0046c54b
    RET                                 ; 0046c552
    PUSH EDI                            ; 0046c553
        ;   Label: LAB_0046c553
    CMP dword ptr [ESP + 0xc],0x0       ; 0046c554
    SETNZ AL                            ; 0046c559
    MOV EDI,0xffffffff                  ; 0046c55c
    AND EAX,0xff                        ; 0046c561
    MOV dword ptr [0x01ba5cc4],ECX      ; 0046c566 | DAT_01ba5cc4
    INC EAX                             ; 0046c56c
    MOV dword ptr [0x01ba5cc8],EDI      ; 0046c56d | DAT_01ba5cc8
    MOV dword ptr [EDX + 0x1c],EAX      ; 0046c573
    POP EDI                             ; 0046c576
    RET                                 ; 0046c577

