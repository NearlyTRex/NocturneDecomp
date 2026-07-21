; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f3f50(int param_1)
;
;
; XREF[5]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_dtor_FUN_004f3f00 at 004f3f06
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_004f47b0 at 004f47c2
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 at 004f4e4a
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80 at 004f4c90
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 at 004f463d
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20
;   FUN_005638d0
;   shape_memdbg.cpp_free_FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3f50
        ;   Label: FUN_004f3f50
    PUSH ESI                            ; 004f3f51
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f3f52
    MOV EDX,dword ptr [EBX + 0x14]      ; 004f3f56
    TEST EDX,EDX                        ; 004f3f59
    JNZ 0x004f3f75                      ; 004f3f5b
        ;   XREF to: 004f3f75 (CONDITIONAL_JUMP)  ; LAB_004f3f75
    MOV ESI,dword ptr [EBX + 0x20]      ; 004f3f5d
        ;   Label: LAB_004f3f5d
    PUSH ESI                            ; 004f3f60
    CALL shape_memdbg.cpp_free_FUN_00564486 ; 004f3f61
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined shape_memdbg.cpp_free_FUN_00564486()
    ADD ESP,0x4                         ; 004f3f66
    PUSH EBX                            ; 004f3f69
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20 ; 004f3f6a
        ;   XREF to: 004f3f20 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_004f3f20()
    ADD ESP,0x4                         ; 004f3f6f
    POP ESI                             ; 004f3f72
    POP EBX                             ; 004f3f73
    RET                                 ; 004f3f74
    PUSH EDX                            ; 004f3f75
        ;   Label: LAB_004f3f75
    CALL FUN_005638d0                   ; 004f3f76
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    ADD ESP,0x4                         ; 004f3f7b
    JMP 0x004f3f5d                      ; 004f3f7e
        ;   XREF to: 004f3f5d (UNCONDITIONAL_JUMP)  ; LAB_004f3f5d

