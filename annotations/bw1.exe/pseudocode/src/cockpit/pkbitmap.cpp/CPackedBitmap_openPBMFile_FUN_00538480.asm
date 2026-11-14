; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00538480(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00538530 at 0053853b
;
; Referenced Globals:
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0
;   core_main.c_FUN_005030e0
;   crt_stdio.c_fclose_FUN_005c0d10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_dosio.cpp_FUN_00479180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00538480
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00538480
    PUSH ESI                            ; 00538481
    SUB ESP,0x64                        ; 00538482
    MOV EBX,dword ptr [ESP + 0x70]      ; 00538485
    PUSH EBX                            ; 00538489
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550 ; 0053848a
        ;   XREF to: 00537550 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_00537550(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0053848f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00538492
    PUSH EDX                            ; 00538496
    PUSH EBX                            ; 00538497
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0 ; 00538498
        ;   XREF to: 005375c0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_005375c0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0053849d
    PUSH 0x5ecfbb                       ; 005384a0
    PUSH EBX                            ; 005384a5
    PUSH 0x5ecfbe                       ; 005384a6
    CALL engine_dosio.cpp_FUN_00479180  ; 005384ab
        ;   XREF to: 00479180 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00479180(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 005384b0
    MOV ESI,EAX                         ; 005384b3
    TEST EAX,EAX                        ; 005384b5
    JNZ 0x005384f1                      ; 005384b7
        ;   XREF to: 005384f1 (CONDITIONAL_JUMP)  ; LAB_005384f1
    PUSH EDI                            ; 005384b9
    PUSH EBX                            ; 005384ba
    PUSH 0x5ecfc2                       ; 005384bb
    LEA EAX,[ESP + 0xc]                 ; 005384c0
    PUSH EAX                            ; 005384c4
    MOV EDI,0x51c                       ; 005384c5
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005384ca
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0xc                         ; 005384cf
    LEA EAX,[ESP + 0x4]                 ; 005384d2
    MOV ECX,0x5ecfdd                    ; 005384d6
    PUSH EAX                            ; 005384db
    MOV dword ptr [0x01d1d404],EDI      ; 005384dc | DAT_01d1d404
    MOV dword ptr [0x01d1d400],ECX      ; 005384e2 | DAT_01d1d400
    CALL core_main.c_FUN_005030e0       ; 005384e8
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005384ed
    POP EDI                             ; 005384f0
    PUSH 0x0                            ; 005384f1
        ;   Label: LAB_005384f1
    PUSH ESI                            ; 005384f3
    PUSH EBX                            ; 005384f4
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280 ; 005384f5
        ;   XREF to: 00538280 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_00538280(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005384fa
    PUSH ESI                            ; 005384fd
    CALL crt_stdio.c_fclose_FUN_005c0d10 ; 005384fe
        ;   XREF to: 005c0d10 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005c0d10()
    ADD ESP,0x4                         ; 00538503
    CMP dword ptr [ESP + 0x78],0x0      ; 00538506
    JNZ 0x00538513                      ; 0053850b
        ;   XREF to: 00538513 (CONDITIONAL_JUMP)  ; LAB_00538513
    ADD ESP,0x64                        ; 0053850d
    POP ESI                             ; 00538510
    POP EBX                             ; 00538511
    RET                                 ; 00538512
    PUSH EBX                            ; 00538513
        ;   Label: LAB_00538513
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0 ; 00538514
        ;   XREF to: 005380b0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_005380b0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 00538519
    ADD ESP,0x64                        ; 0053851c
    POP ESI                             ; 0053851f
    POP EBX                             ; 00538520
    RET                                 ; 00538521

