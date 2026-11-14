; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120(CDemonRenderer *this_ptr,int enable_advanced_mode)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   enable_advanced_mode
;
; XREF[14]:
;   core_asgaya.cpp_CAsgaya_renderTransparent_FUN_005a17e0 at 005a18f5
;   core_baal.cpp_CBaal_renderTransparent_FUN_00597970 at 00597a98
;   core_boneguy.cpp_CBoneGuy_renderTransparent_FUN_00418f90 at 00418ff3
;   core_hecaitmx.cpp_CHecaitomix_renderTransparent_FUN_00598480 at 00598516
;   core_hino.cpp_CHino_renderTransparent_FUN_0059d120 at 0059d2aa
;   core_inv.cpp_FUN_004dbe70 at 004dc363
;   core_kedward.cpp_CKedward_renderTransparent_FUN_00591680 at 0059179c
;   core_mattnntt.cpp_CMattanntote_renderTransparent_FUN_00593710 at 0059387c
;   core_morph.cpp_CMorphModel_renderFaces_FUN_004fa6d0 at 004fa6e4
;   core_npc.cpp_CNPC_renderTransparent_FUN_005095f0 at 00509735
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_01bdd858
;   undefined4 DAT_01bdd85c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0046e120
        ;   Label: engine_drender.cpp_CDemonRenderer_setTextureCaptureMode_FUN_0046e120
    MOV ECX,dword ptr [EDX + 0x4]       ; 0046e124
    TEST ECX,ECX                        ; 0046e127
    JZ 0x0046e133                       ; 0046e129
        ;   XREF to: 0046e133 (CONDITIONAL_JUMP)  ; LAB_0046e133
    MOV dword ptr [EDX + 0x1c],0x0      ; 0046e12b
    RET                                 ; 0046e132
    PUSH EDI                            ; 0046e133
        ;   Label: LAB_0046e133
    CMP dword ptr [ESP + 0xc],0x0       ; 0046e134
    SETNZ AL                            ; 0046e139
    MOV EDI,0xffffffff                  ; 0046e13c
    AND EAX,0xff                        ; 0046e141
    MOV dword ptr [0x01bdd858],ECX      ; 0046e146 | DAT_01bdd858
    INC EAX                             ; 0046e14c
    MOV dword ptr [0x01bdd85c],EDI      ; 0046e14d | DAT_01bdd85c
    MOV dword ptr [EDX + 0x1c],EAX      ; 0046e153
    POP EDI                             ; 0046e156
    RET                                 ; 0046e157

