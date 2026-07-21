; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_loadPBMFile_FUN_004f4ef0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadByFileExtension_FUN_004f4ac0 at 004f4b13
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f4ef0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_004f4ef0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004f4ef4
    PUSH EDX                            ; 004f4ef8
    PUSH EAX                            ; 004f4ef9
    PUSH EAX                            ; 004f4efa
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 ; 004f4efb
        ;   XREF to: 004f4e40 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40()
    ADD ESP,0xc                         ; 004f4f00
    RET                                 ; 004f4f03

