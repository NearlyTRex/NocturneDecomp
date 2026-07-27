; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40 at 004f4e58
;   cockpit_pkbitmap.cpp_CPackedBitmap_reloadFromBitmapFile_FUN_004f4630 at 004f464b
;   cockpit_pkbitmap.cpp_FUN_004f5110 at 004f518b
;
; Called Functions:
;   crt_string.c__strncpy_FUN_00565f70
;
; *****************************************************************************

section .text

    PUSH 0x13                           ; 004f3fc0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_004f3fc0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f3fc2
    PUSH EDX                            ; 004f3fc6
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f3fc7
    PUSH ECX                            ; 004f3fcb
    CALL crt_string.c__strncpy_FUN_00565f70 ; 004f3fcc
        ;   XREF to: 00565f70 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__strncpy_FUN_00565f70()
    ADD ESP,0xc                         ; 004f3fd1
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3fd4
    MOV byte ptr [EAX + 0x13],0x0       ; 004f3fd8
    RET                                 ; 004f3fdc

