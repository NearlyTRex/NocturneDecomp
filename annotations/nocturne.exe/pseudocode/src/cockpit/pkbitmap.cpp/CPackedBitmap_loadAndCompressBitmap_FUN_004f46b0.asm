; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0(int param_1,int param_2)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0 at 004f4b24
;
; Called Functions:
;   cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f46b0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadAndCompressBitmap_FUN_004f46b0
    PUSH ESI                            ; 004f46b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f46b2
    MOV ESI,dword ptr [EBX + 0x18]      ; 004f46b6
    IMUL ESI,dword ptr [EBX + 0x1c]     ; 004f46b9
    PUSH ESI                            ; 004f46bd
    PUSH 0x0                            ; 004f46be
    PUSH EBX                            ; 004f46c0
    CALL cockpit_ckptutil.c_readBitmapFile_FUN_0042d240 ; 004f46c1
        ;   XREF to: 0042d240 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_readBitmapFile_FUN_0042d240()
    MOV ESI,EAX                         ; 004f46c6
    ADD ESP,0xc                         ; 004f46c8
    TEST EAX,EAX                        ; 004f46cb
    JNZ 0x004f46d2                      ; 004f46cd
        ;   XREF to: 004f46d2 (CONDITIONAL_JUMP)  ; LAB_004f46d2
    POP ESI                             ; 004f46cf
        ;   Label: LAB_004f46cf
    POP EBX                             ; 004f46d0
    RET                                 ; 004f46d1
    MOV ECX,dword ptr [EBX + 0x18]      ; 004f46d2
        ;   Label: LAB_004f46d2
    PUSH ECX                            ; 004f46d5
    PUSH EAX                            ; 004f46d6
    PUSH EBX                            ; 004f46d7
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700 ; 004f46d8
        ;   XREF to: 004f4700 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_004f4700()
    ADD ESP,0xc                         ; 004f46dd
    PUSH ESI                            ; 004f46e0
    CALL crt_unknown.c_FUN_005638d0     ; 004f46e1
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 004f46e6
    CMP dword ptr [ESP + 0x10],0x0      ; 004f46e9
    JZ 0x004f46cf                       ; 004f46ee
        ;   XREF to: 004f46cf (CONDITIONAL_JUMP)  ; LAB_004f46cf
    PUSH EBX                            ; 004f46f0
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0 ; 004f46f1
        ;   XREF to: 004f4ab0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_004f4ab0()
    ADD ESP,0x4                         ; 004f46f6
    POP ESI                             ; 004f46f9
    POP EBX                             ; 004f46fa
    RET                                 ; 004f46fb

