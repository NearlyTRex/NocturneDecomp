; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_00510160(CPackedBitmap *this_ptr,char *filename,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   apply_palette_flag
;
; XREF[1]:
;   cockpit_pkbitmap.cpp_CPackedBitmap_loadPBMFile_FUN_00510210 at 0051021b
;
; Referenced Globals:
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90
;   cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230
;   cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60
;   cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0
;   core_main.c_FUN_004e4330
;   crt_stdio.c_fclose_FUN_005a3a90
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_dosio.cpp_FUN_004659c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510160
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_00510160
    PUSH ESI                            ; 00510161
    SUB ESP,0x64                        ; 00510162
    MOV EBX,dword ptr [ESP + 0x70]      ; 00510165
    PUSH EBX                            ; 00510169
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230 ; 0051016a
        ;   XREF to: 0050f230 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_free_FUN_0050f230(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0051016f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00510172
    PUSH EDX                            ; 00510176
    PUSH EBX                            ; 00510177
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0 ; 00510178
        ;   XREF to: 0050f2a0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_setFilename_FUN_0050f2a0(CPackedBitmap * this_ptr, char * filename)
    ADD ESP,0x8                         ; 0051017d
    PUSH 0x5cbe23                       ; 00510180
    PUSH EBX                            ; 00510185
    PUSH 0x5cbe26                       ; 00510186
    CALL engine_dosio.cpp_FUN_004659c0  ; 0051018b
        ;   XREF to: 004659c0 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_004659c0(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00510190
    MOV ESI,EAX                         ; 00510193
    TEST EAX,EAX                        ; 00510195
    JNZ 0x005101d1                      ; 00510197
        ;   XREF to: 005101d1 (CONDITIONAL_JUMP)  ; LAB_005101d1
    PUSH EDI                            ; 00510199
    PUSH EBX                            ; 0051019a
    PUSH 0x5cbe2a                       ; 0051019b
    LEA EAX,[ESP + 0xc]                 ; 005101a0
    PUSH EAX                            ; 005101a4
    MOV EDI,0x51c                       ; 005101a5
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 005101aa
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0xc                         ; 005101af
    LEA EAX,[ESP + 0x4]                 ; 005101b2
    MOV ECX,0x5cbe45                    ; 005101b6
    PUSH EAX                            ; 005101bb
    MOV dword ptr [0x01d71de4],EDI      ; 005101bc | DAT_01d71de4
    MOV dword ptr [0x01d71de0],ECX      ; 005101c2 | DAT_01d71de0
    CALL core_main.c_FUN_004e4330       ; 005101c8
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 005101cd
    POP EDI                             ; 005101d0
    PUSH 0x0                            ; 005101d1
        ;   Label: LAB_005101d1
    PUSH ESI                            ; 005101d3
    PUSH EBX                            ; 005101d4
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60 ; 005101d5
        ;   XREF to: 0050ff60 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_0050ff60(CPackedBitmap * this_ptr, _FILE * file_handle, int skip_data_load)
    ADD ESP,0xc                         ; 005101da
    PUSH ESI                            ; 005101dd
    CALL crt_stdio.c_fclose_FUN_005a3a90 ; 005101de
        ;   XREF to: 005a3a90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005a3a90()
    ADD ESP,0x4                         ; 005101e3
    CMP dword ptr [ESP + 0x78],0x0      ; 005101e6
    JNZ 0x005101f3                      ; 005101eb
        ;   XREF to: 005101f3 (CONDITIONAL_JUMP)  ; LAB_005101f3
    ADD ESP,0x64                        ; 005101ed
    POP ESI                             ; 005101f0
    POP EBX                             ; 005101f1
    RET                                 ; 005101f2
    PUSH EBX                            ; 005101f3
        ;   Label: LAB_005101f3
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90 ; 005101f4
        ;   XREF to: 0050fd90 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_applyPalette_FUN_0050fd90(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 005101f9
    ADD ESP,0x64                        ; 005101fc
    POP ESI                             ; 005101ff
    POP EBX                             ; 00510200
    RET                                 ; 00510201

