; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_stdio_c_sprintf_FUN_005fdbd0(char *buffer,char *format,...)
;
; Parameters:
; char *           Stack[0x4]:4   buffer
; char *           Stack[0x8]:4   format
; Local Variables:
; va_list_t        Stack[-0x8]:4  args
;
; XREF[320]:
;   cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730 at 00435857
;   cockpit_ckptutil.c_loadACTPaletteFile_FUN_00431ac0 at 00431b92
;   cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0 at 0043322e
;   cockpit_ckptutil.c_loadRotatedBitmapFile_FUN_00434690 at 0043471b
;   cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0 at 00433758
;   cockpit_ckptutil.c_readBitmapFile_FUN_00431870 at 00431968
;   cockpit_ckptutil.c_rotateBitmap_FUN_00434870 at 00434980
;   cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480 at 004334be
;   cockpit_ckptutil.c_traceConnectedEdges_FUN_00434af0 at 00434bfb
;   cockpit_pkbitmap.cpp_CPackedBitmap_load_FUN_0054b190 at 0054b2ec
;   ... and 310 more
;
; Called Functions:
;   crt_stdio.c_vsprintf_FUN_005fdba8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005fdbd0
        ;   Label: crt_stdio.c_sprintf_FUN_005fdbd0
    SUB ESP,0x4                         ; 005fdbd1
    LEA EAX,[ESP + 0x14]                ; 005fdbd4
    MOV dword ptr [ESP],EAX             ; 005fdbd8
    MOV EAX,ESP                         ; 005fdbdb
    PUSH EAX                            ; 005fdbdd
    MOV EDX,dword ptr [ESP + 0x14]      ; 005fdbde
    PUSH EDX                            ; 005fdbe2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005fdbe3
    PUSH EBX                            ; 005fdbe7
    CALL crt_stdio.c_vsprintf_FUN_005fdba8 ; 005fdbe8
        ;   XREF to: 005fdba8 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_vsprintf_FUN_005fdba8(char * buffer, char * format, va_list_t args)
    ADD ESP,0xc                         ; 005fdbed
    ADD ESP,0x4                         ; 005fdbf0
    POP EBX                             ; 005fdbf3
    RET                                 ; 005fdbf4

