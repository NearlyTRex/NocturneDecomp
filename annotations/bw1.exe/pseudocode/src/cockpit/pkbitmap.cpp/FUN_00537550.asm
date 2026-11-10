; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void cockpit_pkbitmap_cpp_FUN_00537550(CPackedBitmap *param_1)
;
;
; XREF[5]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_00537500 at 00537506
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_00537db0 at 00537dc2
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480 at 0053848a
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 at 00538290
;   cockpit_pkbitmap.cpp_FUN_00537c30 at 00537c3d
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00537550
        ;   Label: cockpit_pkbitmap.cpp_FUN_00537550
    PUSH ESI                            ; 00537551
    MOV EBX,dword ptr [ESP + 0xc]       ; 00537552
    MOV EDX,dword ptr [EBX + 0x14]      ; 00537556
    TEST EDX,EDX                        ; 00537559
    JNZ 0x00537575                      ; 0053755b
        ;   XREF to: 00537575 (CONDITIONAL_JUMP)  ; LAB_00537575
    MOV ESI,dword ptr [EBX + 0x20]      ; 0053755d
        ;   Label: LAB_0053755d
    PUSH ESI                            ; 00537560
    CALL crt_unknown.c_FUN_005c0336     ; 00537561
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 00537566
    PUSH EBX                            ; 00537569
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520 ; 0053756a
        ;   XREF to: 00537520 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_00537520(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0053756f
    POP ESI                             ; 00537572
    POP EBX                             ; 00537573
    RET                                 ; 00537574
    PUSH EDX                            ; 00537575
        ;   Label: LAB_00537575
    CALL crt_unknown.c_FUN_005c09f0     ; 00537576
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c09f0()
    ADD ESP,0x4                         ; 0053757b
    JMP 0x0053755d                      ; 0053757e
        ;   XREF to: 0053755d (UNCONDITIONAL_JUMP)  ; LAB_0053755d

