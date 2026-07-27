; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0(int param_1,int param_2)
;
;
; XREF[7]:
;   core_baron.cpp_FUN_004110f0 at 00411244
;   core_batman.cpp_FUN_00414340 at 00414497
;   core_boneguy.cpp_FUN_00419c20 at 00419c71
;   core_dracbrid.cpp_FUN_0045a260 at 0045a3c6
;   core_inv.cpp_CInventory_renderItemModel_FUN_004c0b40 at 004c0ee8
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004dfea0 at 004dfeb4
;   core_vessel.cpp_FUN_00550210 at 0055030a
;
; Referenced Globals:
;   undefined4 DAT_01b4d7ac
;   undefined4 DAT_01b4d7b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004619f0
        ;   Label: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_004619f0
    MOV ECX,dword ptr [EDX + 0x4]       ; 004619f4
    TEST ECX,ECX                        ; 004619f7
    JZ 0x00461a03                       ; 004619f9
        ;   XREF to: 00461a03 (CONDITIONAL_JUMP)  ; LAB_00461a03
    MOV dword ptr [EDX + 0x1c],0x0      ; 004619fb
    RET                                 ; 00461a02
    PUSH EDI                            ; 00461a03
        ;   Label: LAB_00461a03
    CMP dword ptr [ESP + 0xc],0x0       ; 00461a04
    SETNZ AL                            ; 00461a09
    MOV EDI,0xffffffff                  ; 00461a0c
    AND EAX,0xff                        ; 00461a11
    MOV dword ptr [0x01b4d7ac],ECX      ; 00461a16 | DAT_01b4d7ac
    INC EAX                             ; 00461a1c
    MOV dword ptr [0x01b4d7b0],EDI      ; 00461a1d | DAT_01b4d7b0
    MOV dword ptr [EDX + 0x1c],EAX      ; 00461a23
    POP EDI                             ; 00461a26
    RET                                 ; 00461a27

