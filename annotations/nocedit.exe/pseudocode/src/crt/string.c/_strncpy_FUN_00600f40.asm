; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl char * __cdecl crt_string_c__strncpy_FUN_00600f40(char *dest,char *src,SIZE_T count)
;
; Parameters:
; char *           Stack[0x4]:4   dest
; char *           Stack[0x8]:4   src
; SIZE_T           Stack[0xc]:4   count
;
; XREF[11]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0054a990 at 0054a99c
;   cockpit_pkbmpset.cpp_CPackedBitmapSet_setFilename_FUN_0054c6f0 at 0054c6ff
;   core_netgame.cpp_CNetGame_processChatOut_FUN_00541e40 at 00541f3f
;   crt_io.c_parseFileInfo_FUN_0060e3b0 at 0060e449
;   crt_io.c_stat_FUN_00607e64 at 0060814b
;   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0 at 00481deb
;   engine_fileio.cpp_establishUserIdentity_FUN_004b1c00 at 004b1d02
;   engine_pod.cpp_findFilesByExtension_FUN_00550ce0 at 00550e4a
;   shape_edittool.cpp_CInputString_init_FUN_0049d3d0 at 0049d43c
;   shape_quantize.cpp_CColorQuantizer_applyQuantization_FUN_00556180 at 0055635d
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00600f40
        ;   Label: crt_string.c__strncpy_FUN_00600f40
    PUSH ESI                            ; 00600f41
    MOV EAX,dword ptr [ESP + 0xc]       ; 00600f42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00600f46
    MOV EDX,dword ptr [ESP + 0x14]      ; 00600f4a
    MOV ESI,EAX                         ; 00600f4e
    TEST EDX,EDX                        ; 00600f50
    JZ 0x00600f63                       ; 00600f52
        ;   XREF to: 00600f63 (CONDITIONAL_JUMP)  ; LAB_00600f63
    CMP byte ptr [EBX],0x0              ; 00600f54
        ;   Label: LAB_00600f54
    JZ 0x00600f63                       ; 00600f57
        ;   XREF to: 00600f63 (CONDITIONAL_JUMP)  ; LAB_00600f63
    INC EAX                             ; 00600f59
    MOV CL,byte ptr [EBX]               ; 00600f5a
    INC EBX                             ; 00600f5c
    MOV byte ptr [EAX + -0x1],CL        ; 00600f5d
    DEC EDX                             ; 00600f60
    JNZ 0x00600f54                      ; 00600f61
        ;   XREF to: 00600f54 (CONDITIONAL_JUMP)  ; LAB_00600f54
    XOR EBX,EBX                         ; 00600f63
        ;   Label: LAB_00600f63
    TEST EDX,EDX                        ; 00600f65
        ;   Label: LAB_00600f65
    JZ 0x00600f70                       ; 00600f67
        ;   XREF to: 00600f70 (CONDITIONAL_JUMP)  ; LAB_00600f70
    INC EAX                             ; 00600f69
    DEC EDX                             ; 00600f6a
    MOV byte ptr [EAX + -0x1],BL        ; 00600f6b
    JMP 0x00600f65                      ; 00600f6e
        ;   XREF to: 00600f65 (UNCONDITIONAL_JUMP)  ; LAB_00600f65
    MOV EAX,ESI                         ; 00600f70
        ;   Label: LAB_00600f70
    POP ESI                             ; 00600f72
    POP EBX                             ; 00600f73
    RET                                 ; 00600f74

