; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_sps_cpp_FUN_00568290(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_01bdd7e4
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_fire.cpp_SLaserInfo_ctor_FUN_004a2de0
;   core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    SUB ESP,0x54                        ; 00568290
        ;   Label: core_sps.cpp_FUN_00568290
    MOV EDX,dword ptr [0x005f2afc]      ; 00568293 | DAT_005f2afc
    PUSH EDX                            ; 00568299 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0056829a
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0056829f
    TEST EAX,EAX                        ; 005682a2
    JZ 0x005682aa                       ; 005682a4
        ;   XREF to: 005682aa (CONDITIONAL_JUMP)  ; LAB_005682aa
    ADD ESP,0x54                        ; 005682a6
    RET                                 ; 005682a9
    PUSH ESI                            ; 005682aa
        ;   Label: LAB_005682aa
    PUSH EBX                            ; 005682ab
    MOV ECX,dword ptr [0x00603b28]      ; 005682ac | g_CDemonSetPtr
    PUSH ECX                            ; 005682b2 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 005682b3
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 005682b8
    LEA EAX,[ESP + 0x8]                 ; 005682bb
    PUSH EAX                            ; 005682bf
    MOV EBX,0x1                         ; 005682c0
    CALL core_fire.cpp_SLaserInfo_ctor_FUN_004a2de0 ; 005682c5
        ;   XREF to: 004a2de0 (UNCONDITIONAL_CALL)  ; SLaserInfo * core_fire.cpp_SLaserInfo_ctor_FUN_004a2de0(SLaserInfo * this_ptr)
    ADD ESP,0x4                         ; 005682ca
    MOV ESI,0x3f800000                  ; 005682cd
    MOV dword ptr [ESP + 0x10],EBX      ; 005682d2
    MOV dword ptr [ESP + 0x8],ESI       ; 005682d6
    MOV dword ptr [ESP + 0x24],EBX      ; 005682da
    POP EBX                             ; 005682de
    POP ESI                             ; 005682df
    ADD ESP,0x54                        ; 005682e0
    RET                                 ; 005682e3

